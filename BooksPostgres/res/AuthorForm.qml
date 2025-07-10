import QtQuick 2.15
import QtQuick.Controls
import "qrc:/CustomItems" as CustomItems
import "qrc:/Windows" as Windows

Rectangle{
    width: parent.width
    anchors.top: parent.top
    anchors.bottom: authorButonsRow.top
    Row {
        id: headerBooks
        width: parent.width
        height: 40
        z: 2

        Rectangle {
            width: parent.width
            height: parent.height
            color: "lightgray"
            border.color: "gray"

            Text {
                text: "Жанр"
                anchors.centerIn: parent
                font.bold: true
            }
        }
    }
    ListView{
        id: authorTable
        width: parent.width
        anchors.top: headerBooks.bottom
        anchors.bottomMargin: 10
        anchors.bottom: parent.bottom
        clip: true
        boundsBehavior: Flickable.StopAtBounds
        ScrollBar.vertical: ScrollBar { policy: ScrollBar.AsNeeded }

        model: books_model.getTableAuthorData()

        function reloadTable(){
            books_model.reloadTableAuthorData()
            authorTable.model = books_model.getTableAuthorData()
        }

        property var currIndex

        delegate: Rectangle  {
            width: parent.width
            height: 40
            color: index === authorTable.currIndex? "lightblue" : "transparent"
            property var rowData: modelData

            MouseArea{
                anchors.fill: parent
                onClicked: {
                    authorTable.currIndex = index
                }
            }

            Row{
                anchors.fill: parent
                CustomItems.CustomCellItem{
                    width: parent.width
                    height: parent.height
                    cellText: rowData["name_author"]
                }
            }
        }
    }

    Windows.WindowDelete{
        id: winDeleteAuthor
        Row{
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            anchors.margins: 10

            Button {
                height: 32
                width: 100
                Text{
                    text: "Удалить"
                    anchors.centerIn: parent
                }
                onClicked: {
                    books_model.deleteAuthor(authorTable.currIndex)
                    authorTable.reloadTable()
                    winDeleteAuthor.close()
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
                    winDeleteAuthor.close()
                }
            }
        }
    }

    Windows.WindowAuthorInsert{
        id: windowAuthorInsert
        onReloadTable: {
            authorTable.reloadTable()
        }
    }

    Windows.WindowAuthorUpdate{
        id: windowAuthorUpdate
        onReloadTable: {
            authorTable.reloadTable()
        }
    }

    Row{
        anchors.margins: 10
        id: authorButonsRow
        height: 32
        anchors.right: parent.right
        anchors.bottom: parent.bottom

        Button {
            height: 32
            width: 100
            Text{
                text: "Добавить"
                anchors.centerIn: parent
            }
            onClicked: {
                windowAuthorInsert.show()
            }
        }

        Button {
            height: 32
            width: 100
            Text{
                text: "Изменить"
                anchors.centerIn: parent
            }
            onClicked: {
                windowAuthorUpdate.authorData = books_model.getAuthorDataByIndex(authorTable.currIndex)
                windowAuthorUpdate.show()
            }
        }

        Button {
            height: 32
            width: 100
            Text{
                text: "Удалить"
                anchors.centerIn: parent
            }
            onClicked: {
                winDeleteAuthor.show()
            }
        }
    }
}


