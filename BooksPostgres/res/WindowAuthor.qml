import QtQuick 2.15
import QtQuick.Layouts 1.15
import QtQuick.Controls 6.5

Window {
    width: 400
    height: 200
    property var authorData: []
    signal reloadTable

    function getData(){
        var data = {
            "id_author": authorData["id_author"],
            "name_author": textAuthorName.text,
        }
        return data
    }

    Column{
        anchors.margins: 10
        anchors.fill: parent
        spacing: 10

        Row{
            spacing: 10
            height: 32
            Text{
                height: 32
                width: 100
                text: "Название книги"
                anchors.verticalCenter: parent.verticalCenter
                verticalAlignment: Text.AlignVCenter
            }
            Rectangle{
                height: 32
                width: 270
                border.width: 1
                TextEdit{
                    id: textAuthorName
                    anchors.margins: 10
                    text: authorData["name_author"] !== undefined ? authorData["name_author"]: ""
                    anchors.fill: parent
                    anchors.verticalCenter: parent.verticalCenter
                }
            }
        }
    }
}
