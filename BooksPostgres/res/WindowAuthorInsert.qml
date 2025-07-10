import QtQuick 2.15
import QtQuick.Controls
import "qrc:/Windows" as Windows

Windows.WindowAuthor {
    id: wind
    Row{
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.margins: 10

        Button {
            height: 32
            width: 100
            Text{
                text: "Добавить"
                anchors.centerIn: parent
            }
            onClicked: {
                books_model.insertAuthor(getData())
                reloadTable()
                wind.close()
            }
        }
        Button {
            height: 32
            width: 100
            Text{
                text: "Отмена"
                anchors.centerIn: parent
            }
            onClicked: {
                wind.close()
            }
        }
    }
}
