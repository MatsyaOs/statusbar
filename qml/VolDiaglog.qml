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
import QtWebEngine 1.10
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

}
