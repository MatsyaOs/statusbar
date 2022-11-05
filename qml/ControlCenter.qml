/*
* Copyright (C) 2021 MatsyaOS Team.
*
* Author: Reion Wong <aj@matsyaos.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
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
import Matsya.NetworkManagement 1.0 as NM
import Matsya.Mpris 1.0
 //import Matsya.Settings 1.0
import "../"
ControlCenterDialog {
    id: control
    // width: 450
    width: 320
    height: _mainLayout.implicitHeight + MatsyaUI.Units.largeSpacing * 2
    property bool checked: false
    property var margin: 4 * Screen.devicePixelRatio
    property point position: Qt.point(0, 0)
    property var defaultSink: paSinkModel.defaultSink
    property var pBColor:MatsyaUI.Theme.backgroundColor
    property var pBOpacity:MatsyaUI.Theme.darkMode ? 0.2:0.2
    property var cCColor:MatsyaUI.Theme.backgroundColor
    property var cCOpacity:MatsyaUI.Theme.darkMode ? 0.2:0.2

    property bool bluetoothDisConnected: Bluez.Manager.bluetoothBlocked
    property var defaultSinkValue: defaultSink ? defaultSink.volume / PulseAudio.NormalVolume * 100.0: -1

    property var borderColor: windowHelper.compositing ? MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.3)
    : Qt.rgba(0, 0, 0, 0.2): MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 255, 0.15)
    : Qt.rgba(0, 0, 0, 0.15)

    property var brightnessIconName: {
    if (brightnessSlider.value <= 0)
        return "d0"
        else if (brightnessSlider.value <= 25)
            return "d1"
            else if (brightnessSlider.value <= 75)
                return "d2"
                else
                    return "d3"
                }
                property var volumeIconName: {
                if (defaultSinkValue <= 0)
                    return "audio-volume-muted-symbolic"
                    else if (defaultSinkValue <= 25)
                        return "audio-volume-low-symbolic"
                        else if (defaultSinkValue <= 75)
                            return "audio-volume-medium-symbolic"
                            else
                                return "audio-volume-high-symbolic"
                            }

                            onBluetoothDisConnectedChanged: {
                                bluetoothItem.checked = !bluetoothDisConnected
                            }

                            onWidthChanged: adjustCorrectLocation()
                            onHeightChanged: adjustCorrectLocation()
                            onPositionChanged: adjustCorrectLocation()

                            color: "transparent"

                            LayoutMirroring.enabled: Qt.application.layoutDirection === Qt.RightToLeft
                            LayoutMirroring.childrenInherit: true

                            Appearance {
                                id: appearance
                            }

                            Notifications {
                                id: notifications
                            }

                            SinkModel {
                                id: paSinkModel

                                onDefaultSinkChanged: {
                                    if (!defaultSink) {
                                    return
                                }
                            }
                        }

                        function toggleBluetooth()
                        {
                            const enable = !control.bluetoothDisConnected
                            Bluez.Manager.bluetoothBlocked = enable

                            for (var i = 0; i < Bluez.Manager.adapters.length; ++i) {
                            var adapter = Bluez.Manager.adapters[i]
                            adapter.powered = enable
                        }
                    }

                    function adjustCorrectLocation()
                    {
                        var posX = control.position.x
                        var posY = control.position.y

                        if (posX + control.width >= StatusBar.screenRect.x + StatusBar.screenRect.width)
                            posX = StatusBar.screenRect.x + StatusBar.screenRect.width - control.width - control.margin

                            posY = rootItem.y + rootItem.height + control.margin

                            control.x = posX
                            control.y = posY
                        }

                        Brightness {
                            id: brightness
                        }

                        Accounts.UserAccount {
                            id: currentUser
                        }

                        MatsyaUI.WindowBlur {
                            view: control
                            geometry: Qt.rect(control.x, control.y, control.width, control.height)
                            windowRadius: _background.radius
                            enabled: true
                        }

                        MatsyaUI.WindowShadow {
                            view: control
                            geometry: Qt.rect(control.x, control.y, control.width, control.height)
                            radius: _background.radius
                        }



                        Rectangle {
                            id: _background
                            anchors.fill: parent
                            radius: windowHelper.compositing ? MatsyaUI.Theme.bigRadius * 1.5: 0
                            color: MatsyaUI.Theme.backgroundColor
                            opacity: windowHelper.compositing ? MatsyaUI.Theme.darkMode ? 0.2  : 0.2: 1.0
                            antialiasing: true
                            border.width: 1 / Screen.devicePixelRatio
                            border.pixelAligned: Screen.devicePixelRatio > 1 ? false: true
                            border.color: control.borderColor

                            Behavior on color {
                            ColorAnimation {
                                duration: 200
                                easing.type: Easing.Linear
                            }
                        }
                    }
                    ColumnLayout {
                        id: _mainLayout
                        anchors.fill: parent
                        anchors.margins: MatsyaUI.Units.largeSpacing
                        spacing: MatsyaUI.Units.largeSpacing




                        RowLayout {
                            id: middleItemLayout
                            anchors.rightMargin: MatsyaUI.Units.largeSpacing
                            spacing: MatsyaUI.Units.largeSpacing

                            Item {
                                id: cardItems
                                Layout.fillWidth: true
                                height: 150
                                //Layout.preferredHeight: Math.ceil(cardLayout.count / 4) * 110
                                property var cellWidth: cardItems.width / 3

                                Rectangle {
                                    anchors.fill: parent
                                    color: cCColor
                                    //color: MatsyaUI.Theme.darkMode ? "#AEAEAE": "white"
                                    radius: MatsyaUI.Theme.bigRadius
                                    opacity: cCOpacity
                                    //opacity: 0.8
                                }
                                GridLayout {
                                    anchors.fill: parent
                                    anchors.topMargin: 9
                                    columnSpacing: 1
                                    columns: 1

                                    property int count: {
                                    var count = 0

                                    for (var i in cardLayout.children) {
                                    if (cardLayout.children[i].visible)
                                        ++count
                                    }

                                    return count
                                }

                                CardItem {

                                    Item {
                                        Layout.fillHeight: true
                                    }
                                    label2: "          "+"Wi-Fi"
                                    Item{
                                        Layout.fillHeight: true
                                    }
                                    id: wirelessItem
                                    Layout.fillHeight: true
                                    Layout.preferredWidth: cardItems.cellWidth
                                    icon: MatsyaUI.Theme.darkMode || checked ? "qrc:/images/dark/network-wireless-connected-100.svg"
                                    : "qrc:/images/light/network-wireless-connected-100.svg"
                                    visible: enabledConnections.wirelessHwEnabled
                                    checked: enabledConnections.wirelessEnabled
                                    label: activeConnection.wirelessName ? activeConnection.wirelessName: qsTr("Wi-Fi")
                                    onClicked: nmHandler.enableWireless(!checked)
                                    onPressAndHold: {
                                        control.visible = false
                                        process.startDetached("matsya-settings", ["-m", "wlan"])
                                    }
                                }
                                CardItem {
                                    label2: "          "+"Bluetooth"
                                    Item{
                                        Layout.fillHeight: true
                                    }
                                    id: bluetoothItem
                                    Layout.fillHeight: true
                                    Layout.preferredWidth: cardItems.cellWidth
                                    icon: MatsyaUI.Theme.darkMode || checked ? "qrc:/images/dark/bluetooth-symbolic.svg"
                                    : "qrc:/images/light/bluetooth-symbolic.svg"
                                    checked: !control.bluetoothDisConnected
                                    label: !control.bluetoothDisConnected ?qsTr("On"): qsTr("Off")
                                    visible: Bluez.Manager.adapters.length
                                    onClicked: control.toggleBluetooth()
                                    onPressAndHold: {
                                        control.visible = false
                                        process.startDetached("matsya-settings", ["-m", "bluetooth"])
                                    }
                                }

                                CardItem {
                                    label2: "          "+"Hotspot"
                                    Item{
                                        Layout.fillHeight: true
                                    }
                                    id: hotspot
                                    Layout.fillHeight: true
                                    Layout.preferredWidth: cardItems.cellWidth
                                    icon: MatsyaUI.Theme.darkMode || checked ? "qrc:/images/dark/hotspot.svg"
                                    : "qrc:/images/light/hotspot.svg"
                                    checked: profileButton.visible
                                    label: qsTr("Not Supported")
                                    onClicked:{
                                        if (checked) {
                                            handler.createHotspot()
                                        } else {
                                            handler.stopHotspot()
                                        }
                                    }

                        }
                    }
                }
                ColumnLayout {
                    id: cCenter2
                    anchors.margins: MatsyaUI.Units.largeSpacing
                    spacing: MatsyaUI.Units.largeSpacing

                    Item {
                        id: cCDoNotDisturb
                        Layout.fillWidth: true
                        height: 69
                        property var cellWidth: cardItems.width / 3
                        Rectangle {
                            anchors.fill: parent
                            color: cCColor
                            radius: MatsyaUI.Theme.bigRadius
                            opacity: cCOpacity

                        }
                        GridLayout{anchors.fill: parent
                            anchors.topMargin: 9
                            columnSpacing: 1
                            columns: 2
                            Layout.alignment: Qt.AlignCenter
                            GridLayout {
                                anchors.fill: parent
                                anchors.topMargin: 7
                                anchors.leftMargin: 10
                                anchors.rightMargin: 5
                                anchors.bottomMargin: 25

                                columnSpacing: 1
                                columns: 1
                                CardItem {
                                    Layout.fillHeight: true
                                    Layout.preferredWidth: cardItems.cellWidth
                                    icon: MatsyaUI.Theme.darkMode || checked ? "qrc:/images/dark/dnd.svg"
                                    : "qrc:/images/light/dnd.svg"
                                    checked: notifications.doNotDisturb
                                    label: qsTr("")
                                    visible: true
                                    onClicked: notifications.doNotDisturb = !notifications.doNotDisturb
                                    onPressAndHold: {
                                        control.visible = false
                                        process.startDetached("matsya-settings", ["-m", "notifications", ])
                                    }
                                }}
                                Label {
                                    anchors.fill: parent
                                    topPadding: 6
                                    leftPadding: 63
                                    rightPadding: 10
                                    bottomPadding: 35
                                    Layout.alignment: Qt.AlignCenter+Qt.AlignVCenter
                                    text: qsTr("Do Not\n")+qsTr("Disturb")
                                    font.bold: true
                                    font.pointSize: 12
                                    Layout.fillWidth: true
                                    wrapMode: "WordWrap"
                                }
                            }
                        }
                        GridLayout {
                            anchors.fill: parent
                            anchors.topMargin: 80
                            //  Layout.alignment: Qt.AlignCenter

                            columnSpacing: 1
                            columns: 2
                            Item {
                                id: cCDarkMode
                                Layout.fillWidth: true
                                height: 69
                                property var cellWidth: cardItems.width / 3
                                Rectangle {
                                    anchors.fill: parent
                                    color:cCColor
                                    radius: MatsyaUI.Theme.bigRadius
                                    opacity:cCOpacity}
                                    GridLayout {
                                        anchors.fill: parent
                                        anchors.topMargin: 7
                                        anchors.leftMargin: 5
                                        anchors.rightMargin: 5
                                        anchors.bottomMargin: 25

                                        columnSpacing: 1
                                        columns: 1
                                        IconButton {

                                            implicitWidth: 40
                                            implicitHeight: 40
                                            Layout.alignment: Qt.AlignVCenter+Qt.AlignHCenter
                                            checked: MatsyaUI.Theme.darkMode
                                            source: "qrc:/images/" + (MatsyaUI.Theme.darkMode ? "light/": "dark/") + "dark-mode.svg"
                                            onLeftButtonClicked: appearance.switchDarkMode(!MatsyaUI.Theme.darkMode)
                                            onPressAndHold: {control.visible = false
                                                process.startDetached("matsya-settings", ["-m", "appearance"])

                                            }
                                        }

                                    }

                                    Label {
                                        topPadding: 50
                                        leftPadding: MatsyaUI.Units.largeSpacing
                                        rightPadding: MatsyaUI.Units.largeSpacing
                                        //leftPadding: MatsyaUI.Units.largeSpacing*2
                                        //rightPadding: MatsyaUI.Units.largeSpacing *2
                                        text: qsTr("Dark Mode")
                                        font.bold: true
                                        font.pointSize: 7
                                        Layout.fillWidth: true
                                    }
                                    /* Label{
                                    topPadding: 57
                                    leftPadding: 12
                                    rightPadding: 15
                                    font.pointSize: 6
                                    font.bold: false
                                    text: MatsyaUI.Theme.darkMode || checked ? qsTr("Dark-layout")
                                    : qsTr("Light-layout")

                                }*/}






                                Item {
                                    id: cCScreenshot
                                    Layout.fillWidth: true
                                    height: 69
                                    property var cellWidth: cardItems.width / 3
                                    Rectangle {
                                        anchors.fill: parent
                                        color: cCColor
                                        radius: MatsyaUI.Theme.bigRadius
                                        anchors.leftMargin: 5
                                        opacity: cCOpacity

                                    }anchors.leftMargin: 25
                                    anchors.topMargin: 25
                                    GridLayout {
                                        anchors.fill: parent
                                        anchors.topMargin: 7
                                        anchors.leftMargin: 7
                                        anchors.rightMargin: 5
                                        anchors.bottomMargin: 25

                                        columnSpacing: 1
                                        columns: 1
                                        IconButton {

                                            implicitWidth: 40
                                            implicitHeight: 40
                                            Layout.alignment: Qt.AlignVCenter+Qt.AlignHCenter
                                            source: "qrc:/images/" + (MatsyaUI.Theme.darkMode ? "dark/": "light/") + "screenshot.svg"
                                            checked: false
                                            onLeftButtonClicked: {
                                                control.visible = true
                                                process.startDetached("matsya-screenshot", ["-d", "500"])
                                            }
                                        }}
                                        Label {
                                            topPadding: 50
                                            leftPadding: MatsyaUI.Units.largeSpacing
                                            rightPadding: MatsyaUI.Units.largeSpacing
                                            //leftPadding: MatsyaUI.Units.largeSpacing*2
                                            //rightPadding: MatsyaUI.Units.largeSpacing *2
                                            text: qsTr("Screenshot")
                                            font.bold: true
                                            font.pointSize: 7
                                            Layout.fillWidth: true
                                        }

                                    }
                                } } }

                        //power buttons down












                                MatsyaUI.Hideable{
                                    id: pButtons
                                    RowLayout {
                                        id: pButtonLayout
                                        anchors.rightMargin: MatsyaUI.Units.largeSpacing
                                        spacing: MatsyaUI.Units.largeSpacing


                                        ColumnLayout {
                                            id: pButtons1
                                            anchors.margins: MatsyaUI.Units.largeSpacing
                                            spacing: MatsyaUI.Units.largeSpacing


                                            GridLayout {
                                                anchors.fill: parent
                                                anchors.topMargin: 0
                                                //  Layout.alignment: Qt.AlignCenter

                                                columnSpacing: 1
                                                columns: 2
//pbsuspand
                                                Item {
                                                    id:pBSystemSuspand
                                                    Layout.fillWidth: true
                                                    height: 69
                                                    property var cellWidth: cardItems.width / 3
                                                    Rectangle {
                                                        anchors.fill: parent
                                                        color: pBColor
                                                        radius: MatsyaUI.Theme.bigRadius
                                                        opacity: pBOpacity
                                                        Rectangle {
                                                            anchors.fill: parent
                                                            color: MatsyaUI.Theme.darkMode ? Qt.rgba(0, 0, 255, 0.5): Qt.rgba(0, 0, 255, 0.7)
                                                            radius: MatsyaUI.Theme.bigRadius
                                                            opacity: 0.8}}

                                                            GridLayout {
                                                                anchors.fill: parent
                                                                anchors.topMargin: 7
                                                                anchors.leftMargin: 5
                                                                anchors.rightMargin: 5
                                                                anchors.bottomMargin: 25

                                                                columnSpacing: 1
                                                                columns: 1
                                                                IconButton {

                                                                    implicitWidth: 40
                                                                    implicitHeight: 40
                                                                    Layout.alignment: Qt.AlignVCenter+Qt.AlignHCenter
                                                                    source: "qrc:/images/" + (MatsyaUI.Theme.darkMode ? "dark/": "light/") + "system-suspend.svg"
                                                                    onLeftButtonClicked: actions.suspend()
                                                                }

                                                            }

                                                            Label {
                                                                topPadding: 50
                                                                leftPadding: MatsyaUI.Units.largeSpacing*1.5
                                                                rightPadding: MatsyaUI.Units.largeSpacing
                                                                //leftPadding: MatsyaUI.Units.largeSpacing*2
                                                                //rightPadding: MatsyaUI.Units.largeSpacing *2
                                                                text: qsTr("Suspend")
                                                                font.bold: true
                                                                font.pointSize: 7
                                                                Layout.fillWidth: true
                                                            }
                                                            /* Label{
                                                            topPadding: 57
                                                            leftPadding: 12
                                                            rightPadding: 15
                                                            font.pointSize: 6
                                                            font.bold: false
                                                            text: MatsyaUI.Theme.darkMode || checked ? qsTr("Dark-layout")
                                                            : qsTr("Light-layout")

                                                        }*/}
//pBSystemRebbot
                                                        Item {
                                                            id: pBSystemReboot
                                                            Layout.fillWidth: true
                                                            height: 69
                                                            property var cellWidth: cardItems.width / 3
                                                            Rectangle {
                                                                anchors.fill: parent
                                                                color: pBColor
                                                                radius: MatsyaUI.Theme.bigRadius
                                                                anchors.leftMargin: 5
                                                                opacity: pBOpacity
                                                                Rectangle {
                                                                    anchors.fill: parent
                                                                    color: MatsyaUI.Theme.darkMode ? Qt.rgba(0, 255, 0, 0.5): Qt.rgba(0, 255, 0, 0.7)
                                                                    radius: MatsyaUI.Theme.bigRadius
                                                                    opacity: 0.8}}

                                                                    anchors.leftMargin: 25
                                                                    anchors.topMargin: 25
                                                                    GridLayout {
                                                                        anchors.fill: parent
                                                                        anchors.topMargin: 7
                                                                        anchors.leftMargin: 7
                                                                        anchors.rightMargin: 5
                                                                        anchors.bottomMargin: 25

                                                                        columnSpacing: 1
                                                                        columns: 1
                                                                        IconButton {

                                                                            implicitWidth: 40
                                                                            implicitHeight: 40
                                                                            Layout.alignment: Qt.AlignVCenter+Qt.AlignHCenter
                                                                            source: "qrc:/images/" + (MatsyaUI.Theme.darkMode ? "dark/": "light/") + "system-reboot.svg"
                                                                            onLeftButtonClicked: {
                                                                                actions.reboot()
                                                                            }
                                                                        }}
                                                                        Label {
                                                                            topPadding: 50
                                                                            leftPadding: MatsyaUI.Units.largeSpacing*1.7
                                                                            rightPadding: MatsyaUI.Units.largeSpacing
                                                                            //leftPadding: MatsyaUI.Units.largeSpacing*2
                                                                            //rightPadding: MatsyaUI.Units.largeSpacing *2
                                                                            text: qsTr("Reboot")
                                                                            font.bold: true
                                                                            font.pointSize: 7
                                                                            Layout.fillWidth: true
                                                                        }
                                                                    }
                                                                }
//Shutdown
                                                                Item {
                                                                    id:pBShutdown
                                                                    Layout.fillWidth: true
                                                                    height: 69
                                                                    property var cellWidth: cardItems.width / 3
                                                                    Rectangle {
                                                                        anchors.fill: parent
                                                                        color: pBColor
                                                                        radius: MatsyaUI.Theme.bigRadius
                                                                        opacity: pBOpacity
                                                                        Rectangle {
                                                                            anchors.fill: parent
                                                                            color: MatsyaUI.Theme.darkMode ? Qt.rgba(255, 0, 0, 0.5): Qt.rgba(255, 0, 0, 0.7)
                                                                            radius: MatsyaUI.Theme.bigRadius
                                                                            opacity: 0.8}
                                                                        }
                                                                        GridLayout{
                                                                            anchors.fill: parent
                                                                            anchors.topMargin: 9
                                                                            columnSpacing: 1
                                                                            columns: 2
                                                                            Layout.alignment: Qt.AlignCenter
                                                                            GridLayout {
                                                                                anchors.fill: parent
                                                                                anchors.topMargin: 7
                                                                                anchors.leftMargin: 10
                                                                                anchors.rightMargin: 5
                                                                                anchors.bottomMargin: 25

                                                                                columnSpacing: 1
                                                                                columns: 1
                                                                                CardItem {
                                                                                    Layout.fillHeight: true
                                                                                    Layout.preferredWidth: cardItems.cellWidth
                                                                                    icon: MatsyaUI.Theme.darkMode ? "qrc:/images/dark/system-shutdown.svg"
                                                                                    : "qrc:/images/light/system-shutdown.svg"

                                                                                    label: qsTr("")
                                                                                    visible: true
                                                                                    onClicked: actions.shutdown()

                                                                                }}
                                                                                Label {
                                                                                    anchors.fill: parent
                                                                                    topPadding: 15
                                                                                    leftPadding: 60
                                                                                    rightPadding: 10
                                                                                    bottomPadding: 35
                                                                                    Layout.alignment: Qt.AlignCenter+Qt.AlignVCenter
                                                                                    text: qsTr("Shutdown\n")
                                                                                    font.bold: true
                                                                                    font.pointSize: 12
                                                                                    Layout.fillWidth: true
                                                                                    wrapMode: "WordWrap"
                                                                                }
                                                                            }
                                                                        }
                                                                    }



                                                                    //second option
                                                                    ColumnLayout {
                                                                        id: pButtons2
                                                                        anchors.margins: MatsyaUI.Units.largeSpacing
                                                                        spacing: MatsyaUI.Units.largeSpacing
//Power Button LockScreen
                                                                        Item {
                                                                            id: pBLockScreen
                                                                            Layout.fillWidth: true
                                                                            height: 69
                                                                            property var cellWidth: cardItems.width / 3
                                                                            Rectangle {
                                                                                anchors.fill: parent
                                                                                color: pBColor
                                                                                radius: MatsyaUI.Theme.bigRadius
                                                                                opacity: pBOpacity

                                                                                Rectangle {
                                                                                    anchors.fill: parent
                                                                                    color: MatsyaUI.Theme.darkMode ? Qt.rgba(108, 0, 148, 0.5): Qt.rgba(98, 0, 138, 0.7)
                                                                                    radius: MatsyaUI.Theme.bigRadius
                                                                                    opacity: 0.8} }
                                                                                    GridLayout{anchors.fill: parent
                                                                                        anchors.topMargin: 9
                                                                                        columnSpacing: 1
                                                                                        columns: 2
                                                                                        Layout.alignment: Qt.AlignCenter
                                                                                        GridLayout {
                                                                                            anchors.fill: parent
                                                                                            anchors.topMargin: 7
                                                                                            anchors.leftMargin: 10
                                                                                            anchors.rightMargin: 5
                                                                                            anchors.bottomMargin: 25

                                                                                            columnSpacing: 1
                                                                                            columns: 1
                                                                                            CardItem {
                                                                                                Layout.fillHeight: true
                                                                                                Layout.preferredWidth: cardItems.cellWidth
                                                                                                icon: MatsyaUI.Theme.darkMode ? "qrc:/images/dark/system-lock-screen.svg"
                                                                                                : "qrc:/images/light/system-lock-screen.svg"

                                                                                                label: qsTr("")
                                                                                                visible: true
                                                                                                onClicked: actions.lockScreen()

                                                                                            }}
                                                                                            Label {
                                                                                                anchors.fill: parent
                                                                                                topPadding: 6
                                                                                                leftPadding: 63
                                                                                                rightPadding: 10
                                                                                                bottomPadding: 35
                                                                                                Layout.alignment: Qt.AlignCenter+Qt.AlignVCenter
                                                                                                text: qsTr("Lock\n")+qsTr("Screen")
                                                                                                font.bold: true
                                                                                                font.pointSize: 12
                                                                                                Layout.fillWidth: true
                                                                                                wrapMode: "WordWrap"
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    GridLayout {
                                                                                        anchors.fill: parent
                                                                                        anchors.topMargin: 80
                                                                                        //  Layout.alignment: Qt.AlignCenter

                                                                                        columnSpacing: 1
                                                                                        columns: 2

                                                                                        //Settings Button
                                                                                        Item {
                                                                                            id: pBSettings
                                                                                            Layout.fillWidth: true
                                                                                            height: 69
                                                                                            property var cellWidth: cardItems.width / 3
                                                                                            Rectangle {
                                                                                                anchors.fill: parent
                                                                                                color: pBColor
                                                                                                radius: MatsyaUI.Theme.bigRadius
                                                                                                opacity: pBOpacity
                                                                                                Rectangle {
                                                                                                    anchors.fill: parent
                                                                                                    color: MatsyaUI.Theme.darkMode ? Qt.rgba(255, 255, 0, 0.5): Qt.rgba(255, 255, 0, 0.7)
                                                                                                    radius: MatsyaUI.Theme.bigRadius
                                                                                                    opacity: 0.8}}
                                                                                                    GridLayout {
                                                                                                        anchors.fill: parent
                                                                                                        anchors.topMargin: 7
                                                                                                        anchors.leftMargin: 5
                                                                                                        anchors.rightMargin: 5
                                                                                                        anchors.bottomMargin: 25

                                                                                                        columnSpacing: 1
                                                                                                        columns: 1
                                                                                                        IconButton {

                                                                                                            implicitWidth: 40
                                                                                                            implicitHeight: 40
                                                                                                            Layout.alignment: Qt.AlignVCenter+Qt.AlignHCenter
                                                                                                            source: "qrc:/images/" + (MatsyaUI.Theme.darkMode ? "dark/": "light/") + "settings.svg"
                                                                                                            onLeftButtonClicked: process.startDetached("matsya-settings")
                                                                                                        }

                                                                                                    }

                                                                                                    Label {
                                                                                                        topPadding: 50
                                                                                                        leftPadding: MatsyaUI.Units.largeSpacing*1.5
                                                                                                        rightPadding: MatsyaUI.Units.largeSpacing
                                                                                                        //leftPadding: MatsyaUI.Units.largeSpacing*2
                                                                                                        //rightPadding: MatsyaUI.Units.largeSpacing *2
                                                                                                        text: qsTr("Settings")
                                                                                                        font.bold: true
                                                                                                        font.pointSize: 7
                                                                                                        Layout.fillWidth: true
                                                                                                    }
                                                                                                    /* Label{
                                                                                                    topPadding: 57
                                                                                                    leftPadding: 12
                                                                                                    rightPadding: 15
                                                                                                    font.pointSize: 6
                                                                                                    font.bold: false
                                                                                                    text: MatsyaUI.Theme.darkMode || checked ? qsTr("Dark-layout")
                                                                                                    : qsTr("Light-layout")

                                                                                                }*/}
                                                                                        //Logout options
                                                                                                Item {
                                                                                                    id: pBLogout
                                                                                                    Layout.fillWidth: true
                                                                                                    height: 69
                                                                                                    property var cellWidth: cardItems.width / 3
                                                                                                    Rectangle {
                                                                                                        anchors.fill: parent
                                                                                                        color: pBColor
                                                                                                        radius: MatsyaUI.Theme.bigRadius
                                                                                                        anchors.leftMargin: 5
                                                                                                        opacity: pBOpacity
                                                                                                        Rectangle {
                                                                                                            anchors.fill: parent
                                                                                                            color: MatsyaUI.Theme.darkMode ? Qt.rgba(0, 150, 150, 0.5): Qt.rgba(0, 150, 150, 0.7)
                                                                                                            radius: MatsyaUI.Theme.bigRadius
                                                                                                            opacity: 0.8}
                                                                                                        }anchors.leftMargin: 25
                                                                                                        anchors.topMargin: 25
                                                                                                        GridLayout {
                                                                                                            anchors.fill: parent
                                                                                                            anchors.topMargin: 7
                                                                                                            anchors.leftMargin: 7
                                                                                                            anchors.rightMargin: 5
                                                                                                            anchors.bottomMargin: 25

                                                                                                            columnSpacing: 1
                                                                                                            columns: 1
                                                                                                            IconButton {

                                                                                                                implicitWidth: 40
                                                                                                                implicitHeight: 40
                                                                                                                Layout.alignment: Qt.AlignVCenter+Qt.AlignHCenter
                                                                                                                source: "qrc:/images/" + (MatsyaUI.Theme.darkMode ? "dark/": "light/") + "system-log-out.svg"
                                                                                                                onLeftButtonClicked: {
                                                                                                                    actions.logout()
                                                                                                                }
                                                                                                            }}
                                                                                                            Label {
                                                                                                                topPadding: 50
                                                                                                                leftPadding: MatsyaUI.Units.largeSpacing*1.7
                                                                                                                rightPadding: MatsyaUI.Units.largeSpacing
                                                                                                                //leftPadding: MatsyaUI.Units.largeSpacing*2
                                                                                                                //rightPadding: MatsyaUI.Units.largeSpacing *2
                                                                                                                text: qsTr("Log Out")
                                                                                                                font.bold: true
                                                                                                                font.pointSize: 7
                                                                                                                Layout.fillWidth: true
                                                                                                            }

                                                                                                        }
                                                                                                    } }

                                                                                                }

                                }

                                //display options
                                                                                                Item {
                                                                                                    id: displayItem
                                                                                                    Layout.fillWidth: true
                                                                                                    height: 65
                                                                                                    visible: brightness.enabled

                                                                                                    Rectangle {
                                                                                                        id: displaybg
                                                                                                        anchors.fill: parent
                                                                                                        color: cCColor
                                                                                                        radius: MatsyaUI.Theme.bigRadius
                                                                                                        opacity: cCOpacity
                                                                                                    }
                                                                                                    Label {
                                                                                                        topPadding: 5
                                                                                                        leftPadding: MatsyaUI.Units.largeSpacing+3
                                                                                                        rightPadding: MatsyaUI.Units.largeSpacing
                                                                                                        //leftPadding: MatsyaUI.Units.largeSpacing*2
                                                                                                        //rightPadding: MatsyaUI.Units.largeSpacing *2
                                                                                                        text: qsTr("Display")
                                                                                                        font.bold: true
                                                                                                        font.pointSize: 10
                                                                                                        Layout.fillWidth: true
                                                                                                    }
                                                                                                    Item {
                                                                                                        Layout.fillHeight: true
                                                                                                    }

                                                                                                    RowLayout {
                                                                                                        anchors.fill: displaybg
                                                                                                        anchors.leftMargin: MatsyaUI.Units.largeSpacing
                                                                                                        anchors.rightMargin: MatsyaUI.Units.largeSpacing
                                                                                                        anchors.topMargin: MatsyaUI.Units.smallSpacing*5
                                                                                                        anchors.bottomMargin: MatsyaUI.Units.smallSpacing*2
                                                                                                        spacing: MatsyaUI.Units.largeSpacing



                                                                                                        Timer {
                                                                                                            id: brightnessTimer
                                                                                                            interval: 100
                                                                                                            repeat: false
                                                                                                            onTriggered: brightness.setValue(brightnessSlider.value)
                                                                                                        }
                                                                                                        MatsyaUI.Matsyaslider {
                                                                                                            GridLayout {
                                                                                                                anchors.fill: parent
                                                                                                                anchors.topMargin: 2
                                                                                                                anchors.leftMargin: 5
                                                                                                                anchors.rightMargin: 0
                                                                                                                anchors.bottomMargin: 2

                                                                                                                columnSpacing: 1
                                                                                                                columns: 1
                                                                                                                Image { height: 14
                                                                                                                    width: height
                                                                                                                    sourceSize: Qt.size(width, height)
                                                                                                                    source: "qrc:/images/" + (MatsyaUI.Theme.darkMode ? "dark": "light") + "/" + control.brightnessIconName + ".svg"
                                                                                                                    smooth: false
                                                                                                                    antialiasing: true
                                                                                                                }
                                                                                                            }
                                                                                                            id: brightnessSlider
                                                                                                            from: 1
                                                                                                            to: 100
                                                                                                            stepSize: 1
                                                                                                            value: brightness.value
                                                                                                            Layout.fillWidth: true
                                                                                                            Layout.fillHeight: true
                                                                                                            onMoved: brightnessTimer.start()
                                                                                                        }

                                                                                                        //      Label {
                                                                                                        //        text: brightnessSlider.value + "%"
                                                                                                        //       color: MatsyaUI.Theme.disabledTextColor
                                                                                                        //      Layout.preferredWidth: _fontMetrics.advanceWidth("100%")
                                                                                                        // }
                                                                                                        MatsyaUI.MatsyaIconButton{
                                                                                                            id: displayButton
                                                                                                            implicitWidth: 25
                                                                                                            implicitHeight: 25
                                                                                                            Layout.alignment: Qt.AlignVCenter+Qt.AlignHCenter
                                                                                                            source: "qrc:/images/" + (MatsyaUI.Theme.darkMode ? "dark/": "light/") + "display.svg"
                                                                                                            checked: false
                                                                                                            onLeftButtonClicked: {
                                                                                                                control.visible = true
                                                                                                                process.startDetached("matsya-settings", ["-m", "display"])
                                                                                                            }}
                                                                                                        }
                                                                                                    }


                                                                                                //SoundsOption
                                                                                                    Item {
                                                                                                        id: soundsItem
                                                                                                        Layout.fillWidth: true
                                                                                                        height: 65
                                                                                                        visible: defaultSink

                                                                                                        Rectangle {
                                                                                                            id: soundsItembg
                                                                                                            anchors.fill: parent
                                                                                                            color: cCColor
                                                                                                            radius: MatsyaUI.Theme.bigRadius
                                                                                                            opacity:cCOpacity
                                                                                                        }
                                                                                                        Label {
                                                                                                            topPadding: 5
                                                                                                            leftPadding: MatsyaUI.Units.largeSpacing+3
                                                                                                            rightPadding: MatsyaUI.Units.largeSpacing
                                                                                                            //leftPadding: MatsyaUI.Units.largeSpacing*2
                                                                                                            //rightPadding: MatsyaUI.Units.largeSpacing *2
                                                                                                            text: qsTr("Sounds")
                                                                                                            font.bold: true
                                                                                                            font.pointSize: 10
                                                                                                            Layout.fillWidth: true
                                                                                                        }
                                                                                                        Item {
                                                                                                            Layout.fillHeight: true
                                                                                                        }
                                                                                                        RowLayout {
                                                                                                            anchors.fill: soundsItembg
                                                                                                            anchors.leftMargin: MatsyaUI.Units.largeSpacing
                                                                                                            anchors.rightMargin: MatsyaUI.Units.largeSpacing
                                                                                                            anchors.topMargin: MatsyaUI.Units.smallSpacing*5
                                                                                                            anchors.bottomMargin: MatsyaUI.Units.smallSpacing*2
                                                                                                            spacing: MatsyaUI.Units.largeSpacing

                                                                                                            /*Image {
                                                                                                            height: 16
                                                                                                            width: height
                                                                                                            sourceSize: Qt.size(width, height)
                                                                                                            source: "qrc:/images/" + (MatsyaUI.Theme.darkMode ? "dark": "light") + "/" + control.volumeIconName + ".svg"
                                                                                                            smooth: false
                                                                                                            antialiasing: true
                                                                                                        }*/
                                                                                                        MatsyaUI.Matsyaslider {
                                                                                                            GridLayout {
                                                                                                                anchors.fill: parent
                                                                                                                anchors.topMargin: 2
                                                                                                                anchors.leftMargin: 6
                                                                                                                anchors.rightMargin: 0
                                                                                                                anchors.bottomMargin: 2

                                                                                                                columnSpacing: 1
                                                                                                                columns: 1
                                                                                                                Image {
                                                                                                                    height: 14
                                                                                                                    width: height
                                                                                                                    sourceSize: Qt.size(width, height)
                                                                                                                    source: "qrc:/images/" + (MatsyaUI.Theme.darkMode ? "dark": "light") + "/" + control.volumeIconName + ".svg"
                                                                                                                    smooth: false
                                                                                                                    antialiasing: true
                                                                                                                }
                                                                                                            }
                                                                                                            id: volumeSlider
                                                                                                            Layout.fillWidth: true
                                                                                                            Layout.fillHeight: true
                                                                                                            from: PulseAudio.MinimalVolume
                                                                                                            to: PulseAudio.NormalVolume

                                                                                                            stepSize: to / (to / PulseAudio.NormalVolume * 150.0)

                                                                                                            value: defaultSink ? defaultSink.volume: 0

                                                                                                            onValueChanged: {
                                                                                                                if (!defaultSink)
                                                                                                                return

                                                                                                                defaultSink.volume = value
                                                                                                                defaultSink.muted = (value === 0)
                                                                                                            }
                                                                                                        }


                                                                                                        MatsyaUI.MatsyaIconButton{
                                                                                                            id: soundsButton
                                                                                                            implicitWidth: 25
                                                                                                            implicitHeight: 25
                                                                                                            Layout.alignment: Qt.AlignVCenter+Qt.AlignHCenter
                                                                                                            source: "qrc:/images/" + (MatsyaUI.Theme.darkMode ? "dark/": "light/") + "sounds.svg"
                                                                                                            checked: false
                                                                                                            onLeftButtonClicked: {
                                                                                                                control.visible = true
                                                                                                                process.startDetached("indicator-sound-switcher")
                                                                                                            }
                                                                                                            onRightButtonClicked:{mprisFullView.toggle()}
                                                                                                        }
                                                                                                        }
                                                                                                    }






                                                                                                    //mpris item




                                                                                              MprisItem {
                                                                                                           height: 70
                                                                                        Layout.fillWidth: true
                                                                                                                   }

                                                                                                    FontMetrics {
                                                                                                        id: _fontMetrics
                                                                                                    }

                                                                                                    RowLayout {
                                                                                                        Layout.leftMargin: MatsyaUI.Units.smallSpacing
                                                                                                        Layout.rightMargin: MatsyaUI.Units.smallSpacing
                                                                                                        spacing: 0

                                                                                                        Label {
                                                                                                            id: timeLabel
                                                                                                            leftPadding: MatsyaUI.Units.smallSpacing / 2
                                                                                                            color: MatsyaUI.Theme.textColor

                                                                                                            Timer {
                                                                                                                interval: 1000
                                                                                                                repeat: true
                                                                                                                running: true
                                                                                                                triggeredOnStart: true
                                                                                                                onTriggered: {
                                                                                                                    timeLabel.text = new Date().toLocaleDateString(Qt.locale(), Locale.LongFormat)
                                                                                                                }
                                                                                                            }

                                                                                                        }

                                                                                                        Item {
                                                                                                            Layout.fillWidth: true
                                                                                                        }
                                                                                                        StandardItem {
                                                                                                            id: userItem

                                                                                                            animationEnabled: true
                                                                                                            Layout.fillHeight: true
                                                                                                            Layout.preferredWidth: shutdownIcon.implicitWidth + MatsyaUI.Units.smallSpacing
                                                                                                            checked: shutdownDialog.item.visible

                                                                                                            onClicked: {pButtons .toggle()
                                                                                                                //pButtons.toggle()
                                                                                                                //control.visible = true
                                                                                                                //shutdownMenu.toggle()
                                                                                                                //process.startDetached("matsya-settings", ["-m", "accounts"])
                                                                                                            }

                                                                                                            Image {
                                                                                                                id: userIcon
                                                                                                                anchors.centerIn: parent
                                                                                                                width: rootItem.iconSize
                                                                                                                height: width
                                                                                                                sourceSize: Qt.size(width, height)
                                                                                                                source: "qrc:/images/" + (rootItem.darkMode ? "dark/": "light/") + "system-shutdown-symbolic.svg"
                                                                                                                asynchronous: true
                                                                                                                antialiasing: true
                                                                                                                smooth: false
                                                                                                            }
                                                                                                        }

                                                                                                        StandardItem {
                                                                                                            width: batteryLayout.implicitWidth + MatsyaUI.Units.largeSpacing
                                                                                                            height: batteryLayout.implicitHeight + MatsyaUI.Units.largeSpacing

                                                                                                            onClicked: {
                                                                                                                control.visible = false
                                                                                                                process.startDetached("matsya-settings", ["-m", "battery"])
                                                                                                            }

                                                                                                            RowLayout {
                                                                                                                id: batteryLayout
                                                                                                                anchors.fill: parent
                                                                                                                visible: battery.available
                                                                                                                spacing: 0

                                                                                                                Image {
                                                                                                                    id: batteryIcon
                                                                                                                    width: 22
                                                                                                                    height: 16
                                                                                                                    sourceSize: Qt.size(width, height)
                                                                                                                    source: "qrc:/images/" + (MatsyaUI.Theme.darkMode ? "dark/": "light/") + battery.iconSource
                                                                                                                    asynchronous: true
                                                                                                                    Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                                                                                                                    antialiasing: true
                                                                                                                    smooth: false
                                                                                                                }

                                                                                                                Label {
                                                                                                                    text: battery.chargePercent + "%"
                                                                                                                    color: MatsyaUI.Theme.textColor
                                                                                                                    rightPadding: MatsyaUI.Units.smallSpacing / 2
                                                                                                                    Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                                                                                                                }
                                                                                                            }
                                                                                                        }


                                                                                                    }

                                                                                                }
                                                                                                PowerActions{
                                                                                                    id: actions
                                                                                                }
                                                                                                function calcExtraSpacing(cellSize, containerSize)
                                                                                                {
                                                                                                    var availableColumns = Math.floor(containerSize / cellSize)
                                                                                                    var extraSpacing = 0
                                                                                                    if (availableColumns > 0)
                                                                                                    {
                                                                                                    var allColumnSize = availableColumns * cellSize
                                                                                                    var extraSpace = Math.max(containerSize - allColumnSize, 0)
                                                                                                    extraSpacing = extraSpace / availableColumns
                                                                                                }
                                                                                                return Math.floor(extraSpacing)
                                                                                            }

}
