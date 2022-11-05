import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.12
import QtGraphicalEffects 1.0
Item {
    width: 300
    height: 300
    transformOrigin: Item.Center
    Rectangle {
        id: rectangle
        x: 50
        y: 30
        width: 200
        height: 205
        opacity: 0.5
        visible: true
        color: "#ffffff"
        radius: 50/2


    }

    Rectangle {
        id: rectangle1
        x: 75
        y: 204
        width: 150
        height: 10
        opacity:0.8
        color: "#000000"
        ProgressBar {
            id: progressBar
            x: 36
            y: 105
            value: 0.5
        } }

}



/*##^##
Designer {
    D{i:0;formeditorZoom:1.66}
}
##^##*/
