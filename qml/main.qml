/*
 * Copyright (C) 2021 MatsyaOS Team.
 *
 * Author:
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
import QtQuick.Layouts 1.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

import Matsya.System 1.0 as System
import Matsya.StatusBar 1.0
import Matsya.NetworkManagement 1.0 as NM
import MatsyaUI 1.0 as MatsyaUI

Item {
    id: rootItem

    property int iconSize: 16

    LayoutMirroring.enabled: Qt.application.layoutDirection === Qt.RightToLeft
    LayoutMirroring.childrenInherit: true

    property bool darkMode: false
    property color textColor: rootItem.darkMode ? "#FFFFFF" : "#000000";
    property var fontSize: rootItem.height ? rootItem.height / 3 : 1

    property var timeFormat: StatusBar.twentyFourTime ? "HH:mm" : "h:mm ap"

    onTimeFormatChanged: {
        timeTimer.restart()
    }

    System.Wallpaper {
        id: sysWallpaper

        function reload() {
            if (sysWallpaper.type === 0)
                bgHelper.setBackgound(sysWallpaper.path)
            else
                bgHelper.setColor(sysWallpaper.color)
        }

        Component.onCompleted: sysWallpaper.reload()

        onTypeChanged: sysWallpaper.reload()
        onColorChanged: sysWallpaper.reload()
        onPathChanged: sysWallpaper.reload()
    }

    BackgroundHelper {
        id: bgHelper

        onNewColor: {
            background.color = color
            rootItem.darkMode = darkMode //lightness < 128 ? true : false
        }
    }

    Rectangle {
        id: background
        anchors.fill: parent
        opacity: 0.3

//        color: MatsyaUI.Theme.darkMode ? "#4D4D4D" : "#FFFFFF"
//        opacity: windowHelper.compositing ? MatsyaUI.Theme.darkMode ? 0.5 : 0.7 : 1.0

//        Behavior on color {
//            ColorAnimation {
//                duration: 100
//                easing.type: Easing.Linear
//            }
//        }
    }

    MatsyaUI.WindowHelper {
        id: windowHelper
    }

    MatsyaUI.PopupTips {
        id: popupTips
    }

    MatsyaUI.DesktopMenu {
        id: acticityMenu

        MenuItem {
            text: qsTr("Close")
            onTriggered: acticity.close()
        }
    }

    // Main layout
    RowLayout {
        anchors.fill: parent
        anchors.leftMargin: MatsyaUI.Units.smallSpacing
        anchors.rightMargin: MatsyaUI.Units.smallSpacing
        spacing: MatsyaUI.Units.smallSpacing / 2

        // App name
        StandardItem {
            id: acticityItem
            animationEnabled: true
            Layout.fillHeight: true
            Layout.preferredWidth: Math.min(rootItem.width / 3,
                                            acticityLayout.implicitWidth + MatsyaUI.Units.largeSpacing)
            onClicked: {
                if (mouse.button === Qt.RightButton)
                    acticityMenu.open()
            }

            RowLayout {
                id: acticityLayout
                anchors.fill: parent
                anchors.leftMargin: MatsyaUI.Units.smallSpacing
                anchors.rightMargin: MatsyaUI.Units.smallSpacing
                spacing: MatsyaUI.Units.smallSpacing
                StandardItem {
                           id: shutdownItem

                           animationEnabled: true
                           Layout.fillHeight: true
                           Layout.preferredWidth: shutdownIcon.implicitWidth + MatsyaUI.Units.smallSpacing
                           //checked: shutdownDialog.item.visible

                           onClicked: {
                               if (mouse.button === Qt.RightButton)
                                   acticityMenu.open()

                               else process.startDetached("matsya-launcher")
                           }

                           Image {
                               id: shutdownIcon
                               anchors.centerIn: parent
                               width: 50*0.4
                               height: 50*0.4
                               sourceSize: Qt.size(width, height)
                               source: acticity.icon ? "image://icontheme/" + acticity.icon : "qrc:/images/" + (rootItem.darkMode ? "dark/" : "light/") + "activities.svg"
                               asynchronous: true
                               antialiasing: true
                               smooth: false
                           }
                       }



                Label {
                    id: acticityLabel
                    text: acticity.title
                    Layout.fillWidth: true
                    elide: Qt.ElideRight
                    color: rootItem.textColor
                    visible: text
                    Layout.alignment: Qt.AlignVCenter
                    font.pointSize: rootItem.fontSize
                }
            }
        }

        // App menu
        Item {
            id: appMenuItem
            Layout.fillHeight: true
            Layout.fillWidth: true

            ListView {
                id: appMenuView
                anchors.fill: parent
                orientation: Qt.Horizontal
                spacing: MatsyaUI.Units.smallSpacing
                visible: appMenuModel.visible
                interactive: false
                clip: true

                model: appMenuModel

                // Initialize the current index
                onVisibleChanged: {
                    if (!visible)
                        appMenuView.currentIndex = -1
                }

                delegate: StandardItem {
                    id: _menuItem
                    width: _actionText.width + MatsyaUI.Units.largeSpacing
                    height: ListView.view.height
                    checked: appMenuApplet.currentIndex === index

                    onClicked: {
                        appMenuApplet.trigger(_menuItem, index)

                        checked = Qt.binding(function() {
                            return appMenuApplet.currentIndex === index
                        })
                    }

                    Text {
                        id: _actionText
                        anchors.centerIn: parent
                        color: rootItem.textColor
                        font.pointSize: rootItem.fontSize
                        text: {
                            var text = activeMenu
                            text = text.replace(/([^&]*)&(.)([^&]*)/g, function (match, p1, p2, p3) {
                                return p1.concat(p2, p3)
                            })
                            return text
                        }
                    }

                    // QMenu opens on press, so we'll replicate that here
                    MouseArea {
                        anchors.fill: parent
                        hoverEnabled: appMenuApplet.currentIndex !== -1
                        onPressed: parent.clicked(null)
                        onEntered: parent.clicked(null)
                    }
                }

                AppMenuModel {
                    id: appMenuModel
                    onRequestActivateIndex: appMenuApplet.requestActivateIndex(appMenuView.currentIndex)
                    Component.onCompleted: {
                        appMenuView.model = appMenuModel
                    }
                }

                AppMenuApplet {
                    id: appMenuApplet
                    model: appMenuModel
                }

                Component.onCompleted: {
                    appMenuApplet.buttonGrid = appMenuView

                    // Handle left and right shortcut keys.
                    appMenuApplet.requestActivateIndex.connect(function (index) {
                        var idx = Math.max(0, Math.min(appMenuView.count - 1, index))
                        var button = appMenuView.itemAtIndex(index)
                        if (button) {
                            button.clicked(null)
                        }
                    });

                    // Handle mouse movement.
                    appMenuApplet.mousePosChanged.connect(function (x, y) {
                        var item = itemAt(x, y)
                        if (item)
                            item.clicked(null)
                    });
                }
            }
        }

        // System tray(Right)
        SystemTray {}
        StandardItem {
            checked: bluetoothDialog.item.visible
            animationEnabled: true
            Layout.fillHeight: true
            Layout.preferredWidth: controlENter.implicitWidth + MatsyaUI.Units.largeSpacing

            onClicked: {
                toggleDialog()
            }

            function toggleDialog() {
                if (bluetoothDialog.item.visible)
                    bluetoothDialog.item.close()
                else {
                    // 先初始化，用户可能会通过Alt鼠标左键移动位置

                        bluetoothDialog.item.position = Qt.point(0, 0)
                        bluetoothDialog.item.position = mapToGlobal(0, 0)
                        bluetoothDialog.item.open()

                }
            }            Image {
                id: controlENter
                anchors.centerIn: parent
                width: rootItem.iconSize
                height: width
                sourceSize: Qt.size(width, height)
                source: "qrc:/images/" + (rootItem.darkMode ? "dark/" : "light/") + "bluetooth" +".svg"
                asynchronous: true
                antialiasing: true
                smooth: false
            }
        }
        StandardItem {
            checked: mprisDialog.item.visible
            animationEnabled: true
            Layout.fillHeight: true
            Layout.preferredWidth: controlENter.implicitWidth + MatsyaUI.Units.largeSpacing

            onClicked: {
                toggleDialog()
            }

            function toggleDialog() {
                if (mprisDialog.item.visible)
                    mprisDialog.item.close()
                else {
                    // 先初始化，用户可能会通过Alt鼠标左键移动位置

                        mprisDialog.item.position = Qt.point(0, 0)
                        mprisDialog.item.position = mapToGlobal(0, 0)
                        mprisDialog.item.open()

                }
            }            Image {
                id: mprisd
                anchors.centerIn: parent
                width: rootItem.iconSize
                height: width
                sourceSize: Qt.size(width, height)
                source: "qrc:/images/" + (rootItem.darkMode ? "dark/" : "light/") + controlCenter.item.volumeIconName + ".svg"
                asynchronous: true
                antialiasing: true
                smooth: true
            }
        }

        StandardItem {
            id: controler

       //   checked: controlCenter.item.visible
            animationEnabled: true
            Layout.fillHeight: true
            Layout.preferredWidth: _controlerLayout.implicitWidth + MatsyaUI.Units.largeSpacing

        //  onClicked: {
          //    toggleDialog()
          //}

            function toggleDialog() {
                if (controlCenter.item.visible)
                    controlCenter.item.close()
                else {
                    // 先初始化，用户可能会通过Alt鼠标左键移动位置
                    controlCenter.item.position = Qt.point(0, 0)
                    controlCenter.item.position = mapToGlobal(0, 0)
                    controlCenter.item.open()
                }
            }

            RowLayout {
                id: _controlerLayout
                anchors.fill: parent
                anchors.leftMargin: MatsyaUI.Units.smallSpacing
                anchors.rightMargin: MatsyaUI.Units.smallSpacing

                spacing: MatsyaUI.Units.largeSpacing




                Image {
                    id: wirelessIcon
                    width: rootItem.iconSize
                    height: width
                    sourceSize: Qt.size(width, height)
                    source: activeConnection.wirelessIcon ? "qrc:/images/" + (rootItem.darkMode ? "dark/" : "light/") + activeConnection.wirelessIcon + ".svg" : ""
                    asynchronous: true
                    Layout.alignment: Qt.AlignCenter
                    visible: enabledConnections.wirelessHwEnabled &&
                             enabledConnections.wirelessEnabled &&
                             activeConnection.wirelessName &&
                             wirelessIcon.status === Image.Ready
                    antialiasing: true
                    smooth: false
                }
               // Battery Item
                RowLayout {
                    visible: battery.available
                    Label {
                        text: battery.chargePercent + "%"
                        font.pointSize: rootItem.fontSize
                        color: rootItem.textColor
                        visible: battery.showPercentage
                    }
                    Image {
                        id: batteryIcon
                        height: rootItem.iconSize
                        width: height + 6
                        sourceSize: Qt.size(width, height)
                        source: "qrc:/images/" + (rootItem.darkMode ? "dark/" : "light/") + battery.iconSource
                        Layout.alignment: Qt.AlignCenter
                        antialiasing: true
                        smooth: false
                    }

                   /* Label {
                        text: battery.chargePercent + "%"
                        font.pointSize: rootItem.fontSize
                        color: rootItem.textColor
                        visible: battery.showPercentage
                    }*/
                }
            }
        }

        StandardItem {
            checked: controlCenter.item.visible
            animationEnabled: true
            Layout.fillHeight: true
            Layout.preferredWidth: controlENter.implicitWidth + MatsyaUI.Units.largeSpacing

            onClicked: {
                toggleDialog()
            }

            function toggleDialog() {
                if (controlCenter.item.visible)
                    controlCenter.item.close()
                else {
                    // 先初始化，用户可能会通过Alt鼠标左键移动位置
                    controlCenter.item.position = Qt.point(0, 0)
                    controlCenter.item.position = mapToGlobal(0, 0)
                    controlCenter.item.open()
                }
            }            Image {
                anchors.centerIn: parent
                width: rootItem.iconSize
                height: width
                sourceSize: Qt.size(width, height)
                source: "qrc:/images/" + (rootItem.darkMode ? "dark/" : "light/")+ (controlCenter.item.visible ? "ccon.svg":"ccoff.svg")
                asynchronous: true
                antialiasing: true
                smooth: false
            }
        }
/*

 StandardItem {
            id: siriItem

    animationEnabled: true
    Layout.fillHeight: true
    Layout.preferredWidth: siriIcon.implicitWidth + MatsyaUI.Units.smallSpacing
checked: bluetoothDialog.item.visible

    onClicked: {
            shutdownDialog.item.position = Qt.point(0, 0)
            shutdownDialog.item.position = mapToGlobal(0, 0)
            shutdownDialog.item.open()
        }



    Image {
        id: siriIcon
                anchors.centerIn: parent
                width: rootItem.iconSize
                height: width
                sourceSize: Qt.size(width, height)
                source: "qrc:/images/" + (rootItem.darkMode ? "dark/" : "light/") + "siri.svg"
                asynchronous: true
                antialiasing: true
                smooth: false
            }
            }*/

        // Pop-up notification center and calendar
        StandardItem {
            id: datetimeItem

            animationEnabled: true
            Layout.fillHeight: true
            Layout.preferredWidth: _dateTimeLayout.implicitWidth + MatsyaUI.Units.smallSpacing

            onClicked: {
                process.startDetached("matsya-notificationd", ["-s"])
            }

            RowLayout {
                id: _dateTimeLayout
                anchors.fill: parent

                Image {
                    width: rootItem.iconSize
                    height: width
                    sourceSize: Qt.size(width, height)
                    source: "qrc:/images/" + (rootItem.darkMode ? "dark/" : "light/") + "notification-symbolic.svg"
                    asynchronous: true
                    Layout.alignment: Qt.AlignCenter
                    antialiasing: true
                    smooth: false
                }

                Label {
                    id: timeLabel
                    Layout.alignment: Qt.AlignCenter
                    font.pointSize: rootItem.fontSize
                    color: rootItem.textColor

                    Timer {
                        id: timeTimer
                        interval: 1000
                        repeat: true
                        running: true
                        triggeredOnStart: true
                        onTriggered: {
                     timeLabel.text =new Date().toLocaleDateString(Qt.locale(),"ddd MMM d")+" "+ new Date() .toLocaleTimeString(Qt.locale(), StatusBar.twentyFourTime ? rootItem.timeFormat
                                                                                                                           : Locale.ShortFormat)
               //             timeLabel.text = new Date() .toLocaleTimeString(Qt.locale(), StatusBar.twentyFourTime ? rootItem.timeFormat
                 //                                                      : Locale.ShortFormat)
                        }
                    }
                }
            }
        }

    }

    MouseArea {
        id: _sliding
        anchors.fill: parent
        z: -1

        property int startY: -1
        property bool activated: false

        onActivatedChanged: {
            // TODO
            // if (activated)
            //     acticity.move()
        }

        onPressed: {
            startY = mouse.y
        }

        onReleased: {
            startY = -1
        }

        onDoubleClicked: {
            acticity.toggleMaximize()
        }

        onMouseYChanged: {
            if (startY === parseInt(mouse.y)) {
                activated = false
                return
            }

            // Up
            if (startY > parseInt(mouse.y)) {
                activated = false
                return
            }

            if (mouse.y > rootItem.height)
                activated = true
            else
                activated = false
        }
    }

    // Components
    Loader {
        id: controlCenter
        sourceComponent: ControlCenter {}
        asynchronous: true
    }

    Loader {
        id: bluetoothDialog
        sourceComponent: BluetoothDialog {}
        asynchronous: true
    }
    Loader{
    id:mprisDialog
    sourceComponent: VolDiaglog {}
    asynchronous: true
    }

    NM.ActiveConnection {
        id: activeConnection
    }

    NM.EnabledConnections {
        id: enabledConnections
    }

    NM.Handler {
        id: nmHandler
    }
}
