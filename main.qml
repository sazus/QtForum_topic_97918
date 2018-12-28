import QtQuick 2.12
import QtQuick.Window 2.12
import "Test.js" as TestLog

Window {
    visible: true
    width: 100
    height: 100
    title: qsTr("Hello World")
    Image{
        source: "image.png"

        MouseArea {
            anchors.fill: parent
            onClicked: {
                TestLog.log()
            }
        }
    }
}
