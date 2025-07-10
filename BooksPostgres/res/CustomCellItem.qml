import QtQuick 2.15

Rectangle {
    property string cellText: ""
    border.color: "gray"
    color: "transparent"
    Text {
        text: cellText;
        anchors.centerIn: parent
        width: parent.width
        wrapMode: Text.WordWrap
        horizontalAlignment: Text.AlignHCenter
    }
}
