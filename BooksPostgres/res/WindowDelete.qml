import QtQuick 2.15
import QtQuick.Layouts 1.15
import QtQuick.Controls 6.5

Window {
    width: 300
    height: 100
    Text{
        anchors.top: parent.top
        anchors.topMargin: 10
        anchors.horizontalCenter: parent.horizontalCenter
        height: 32
        width: 100
        text: "Удалить эту строку?"
        verticalAlignment: Text.AlignVCenter
    }
}
