/*
 * Copyright (C) 2021 - 2022 MatsyaOS Team.
 *
 * Author:     Kate Leet <kate@cutefishos.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.12
import QtGraphicalEffects 1.0

import Matsya.Accounts 1.0 as Accounts
import Matsya.Bluez 1.0 as Bluez
import Matsya.StatusBar 1.0
import Matsya.Audio 1.0
import MatsyaUI 1.0 as MatsyaUI
import Matsya.Mpris 1.0
ControlCenterDialog {
    id: control

    width: 320
    height:layout.implicitHeight + MatsyaUI.Units.largeSpacing * 2

    onWidthChanged: adjustCorrectLocation()
    onHeightChanged: adjustCorrectLocation()
    onPositionChanged: adjustCorrectLocation()

    property point position: Qt.point(0, 0)
    property var margin: 4 * Screen.devicePixelRatio
    property var borderColor: windowHelper.compositing ? MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.3)
                                                                  : Qt.rgba(0, 0, 0, 0.2) : MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.15)
                                                                                                                  : Qt.rgba(0, 0, 0, 0.15)

    property bool bluetoothDisConnected: Bluez.Manager.bluetoothBlocked

    onBluetoothDisConnectedChanged: {
        bluetoothSwitch.checked = !bluetoothDisConnected
    }

    function setBluetoothEnabled(enabled) {
        Bluez.Manager.bluetoothBlocked = !enabled

        for (var i = 0; i < Bluez.Manager.adapters.length; ++i) {
            var adapter = Bluez.Manager.adapters[i]
            adapter.powered = enabled
        }
    }

    Bluez.DevicesProxyModel {
        id: devicesProxyModel
        sourceModel: devicesModel
    }

    Bluez.DevicesModel {
        id: devicesModel
    }

    Bluez.BluetoothManager {
        id: bluetoothMgr

        onShowPairDialog: {
            _pairDialog.title = name
            _pairDialog.pin = pin
            _pairDialog.visible = true
        }

        onPairFailed: {
            rootWindow.showPassiveNotification(qsTr("Pairing unsuccessful"), 3000)
        }

        onConnectFailed: {
            rootWindow.showPassiveNotification(qsTr("Connecting Unsuccessful"), 3000)
        }
    }

    MatsyaUI.PairDialog {
        id: _pairDialog
   }
    Accounts.UserAccount {
        id: currentUser
    }

    MatsyaUI.WindowBlur {
        view: control
        geometry: Qt.rect(control.x, control.y, control.width, control.height)
        windowRadius: _background.radius
        enabled:true
    }

    MatsyaUI.WindowShadow {
        view: control
        geometry: Qt.rect(control.x, control.y, control.width, control.height)
        radius: _background.radius
    }

    Rectangle {
        id: _background
        anchors.fill: parent
        radius: windowHelper.compositing ? MatsyaUI.Theme.bigRadius * 1.5 : 0
        color: MatsyaUI.Theme.backgroundColor
        opacity: windowHelper.compositing ? MatsyaUI.Theme.darkMode ? 0.2 : 0.1 : 0.2
        antialiasing: true
        border.width: 1 / Screen.devicePixelRatio
        border.pixelAligned: Screen.devicePixelRatio > 1 ? false : true
        border.color: control.borderColor

        Behavior on color {
            ColorAnimation {
                duration: 200
                easing.type: Easing.Linear
            }
        }
    }
    ////////////////////////////////////////////////////////////////////
    MatsyaUI.Scrollable {
        id:_mainLayout
        anchors.fill: parent
       contentHeight: layout.implicitHeight

        ColumnLayout {
            id: layout
            anchors.fill: parent
            anchors.bottomMargin: MatsyaUI.Units.largeSpacing

                RowLayout {
                    Label {
                        text: qsTr("Bluetooth")
                        color: MatsyaUI.Theme.darkMode? "white"
                                                      : "black"
                        font.bold: true


                    }

                    Item {
                        Layout.fillWidth: true
                    }

                    Switch {
                        id: bluetoothSwitch
                        Layout.fillHeight: true
                        rightPadding: 0
                        checked: !Bluez.Manager.bluetoothBlocked
                        onCheckedChanged: setBluetoothEnabled(checked)
                    }
                }
                Item {
                    id:bar
                    height: MatsyaUI.Units.largeSpacing * 2

                    Layout.fillWidth: true

                    Rectangle {
                        anchors.centerIn: parent
                        height: 2
                        width: bar.width
                        color: MatsyaUI.Theme.darkMode ? "silver" : "gray"
                        opacity: MatsyaUI.Theme.darkMode ? 0.3 : 0.1
                    }
                }

                ListView {
                    id: _listView

                    visible: count > 0
                    interactive: false
                    spacing: 22

                    Layout.fillWidth: true

                    Layout.preferredHeight: {
                        var totalHeight = 0
                        for (var i = 0; i < _listView.visibleChildren.length; ++i) {
                            totalHeight += _listView.visibleChildren[i].height
                        }
                        return totalHeight
                    }

                    model: Bluez.Manager.bluetoothOperational ? devicesProxyModel : []

                    section.property: "Section"
                    section.criteria: ViewSection.FullString
                    section.delegate: Label {
                        color: MatsyaUI.Theme.highlightColor
                        topPadding: MatsyaUI.Units.largeSpacing
                        bottomPadding: MatsyaUI.Units.largeSpacing
                        font.bold: true
                        text: section == "My devices" ? qsTr("Devices")
                                                     : qsTr("Other Devices")
                    }

                    delegate: Item {
                        width: ListView.view.width
                        height: _itemLayout.implicitHeight + MatsyaUI.Units.largeSpacing

                        property bool paired: model.Connected && model.Paired

                        ColumnLayout {
                            id: _itemLayout
                            anchors.fill: parent
                            anchors.leftMargin: 0
                            anchors.rightMargin: 0
                            anchors.topMargin: MatsyaUI.Units.smallSpacing
                            anchors.bottomMargin: MatsyaUI.Units.smallSpacing
                            spacing: 0

                            Item {
                                Layout.fillWidth: true
                                height: _contentLayout.implicitHeight + MatsyaUI.Units.largeSpacing
                                RowLayout {
                                    id: _contentLayout
                                    anchors.fill: parent
                                    anchors.rightMargin: MatsyaUI.Units.smallSpacing
                                    CardItem {
                                        z:1000
                                        Item {
                                            Layout.fillHeight: true
                                        }
                                        label2: "          "+model.DeviceFullName
                                        Item{
                                            Layout.fillHeight: true
                                        }
                                        id: wirelessItem
                                        Layout.fillHeight: true
                                        Layout.preferredWidth: cardItems.cellWidth
                                        icon:MatsyaUI.Theme.darkMode ? "qrc:/images/dark/"+model.Icon+".svg"
                                                                     : "qrc:/images/light/"+model.Icon+".svg"
                                        visible:true
                                        checked: model.Connected

                                        onPressAndHold: {
                                            control.visible = false
                                            process.startDetached("matsya-settings", ["-m", "wlan"])
                                        }
                                    }
                                }
                            }

                            MatsyaUI.Hideable {
                                id: additionalSettings
                                spacing: 0

                                ColumnLayout {
                                    Item {
                                        height: MatsyaUI.Units.largeSpacing
                                    }

                                    RowLayout {
                                        spacing: MatsyaUI.Units.largeSpacing
                                        Layout.leftMargin: MatsyaUI.Units.smallSpacing

                                        Button {
                                            text: qsTr("Connect")
                                            visible: !model.Connected
                                            onClicked: {
                                                if (model.Paired) {
                                                    bluetoothMgr.connectToDevice(model.Address)
                                                } else {
                                                    bluetoothMgr.requestParingConnection(model.Address)
                                                }
                                            }
                                        }

                                        Button {
                                            text: qsTr("Disconnect")
                                            visible: model.Connected
                                            onClicked: {
                                                bluetoothMgr.deviceDisconnect(model.Address)
                                                additionalSettings.hide()
                                            }
                                        }

                                        Button {
                                            text: qsTr("Forget This Device")
                                            flat: true
                                            onClicked: {
                                                bluetoothMgr.deviceRemoved(model.Address)
                                                additionalSettings.hide()
                                            }
                                        }
                                    }
                                }

                                MatsyaUI.HorizontalDivider {}
                            }
                        }
                    }
                }

            Item {
                height: MatsyaUI.Units.largeSpacing * 2
            }
        }
    }

    //////////////////////////////////////////////////////////////////////





    function adjustCorrectLocation() {
        var posX = control.position.x
        var posY = control.position.y

        if (posX + control.width >= StatusBar.screenRect.x + StatusBar.screenRect.width)
            posX = StatusBar.screenRect.x + StatusBar.screenRect.width - control.width - control.margin

        posY = rootItem.y + rootItem.height + control.margin

        control.x = posX
        control.y = posY
    }
}
