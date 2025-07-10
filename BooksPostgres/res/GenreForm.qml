import QtQuick 2.15
import QtQuick.Controls
import "qrc:/CustomItems" as CustomItems
import "qrc:/Windows" as Windows

Rectangle{
    width: parent.width
    anchors.top: parent.top
    anchors.bottom: genreButonsRow.top
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
        id: genreTable
        width: parent.width
        anchors.top: headerBooks.bottom
        anchors.bottomMargin: 10
        anchors.bottom: parent.bottom
        clip: true
        boundsBehavior: Flickable.StopAtBounds
        ScrollBar.vertical: ScrollBar { policy: ScrollBar.AsNeeded }

        model: books_model.getTableGenreData()

        function reloadTable(){
            books_model.reloadTableGenreData()
            genreTable.model = books_model.getTableGenreData()
        }

        property var currIndex

        delegate: Rectangle  {
            width: parent.width
            height: 40
            color: index === genreTable.currIndex? "lightblue" : "transparent"
            property var rowData: modelData

            MouseArea{
                anchors.fill: parent
                onClicked: {
                    genreTable.currIndex = index
                }
            }

            Row{
                anchors.fill: parent
                CustomItems.CustomCellItem{
                    width: parent.width
                    height: parent.height
                    cellText: rowData["name_genre"]
                }
            }
        }
    }

    Windows.WindowDelete{
        id: winDeleteGenre
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
                    books_model.deleteGenre(genreTable.currIndex)
                    genreTable.reloadTable()
                    winDeleteGenre.close()
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
                    winDeleteGenre.close()
                }
            }
        }
    }

    Windows.WindowGenreInsert{
        id: windowGenreInsert
        onReloadTable: {
            genreTable.reloadTable()
        }
    }

    Windows.WindowGenreUpdate{
        id: windowGenreUpdate
        onReloadTable: {
            genreTable.reloadTable()
        }
    }

    Row{
        anchors.margins: 10
        id: genreButonsRow
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
                windowGenreInsert.show()
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
                windowGenreUpdate.genreData = books_model.getGenreDataByIndex(genreTable.currIndex)
                windowGenreUpdate.show()
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
                winDeleteGenre.show()
            }
        }
    }


}


