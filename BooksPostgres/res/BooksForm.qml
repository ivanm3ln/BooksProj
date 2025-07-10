import QtQuick 2.15
import QtQuick.Controls
import "qrc:/CustomItems" as CustomItems
import "qrc:/Windows" as Windows

Rectangle{
    width: parent.width
    anchors.top: parent.top
    anchors.bottom: booksButonsRow.top
    Row {
        id: headerBooks
        width: parent.width
        height: 40
        z: 2

        Rectangle {
            width: parent.width * 0.25
            height: parent.height
            color: "lightgray"
            border.color: "gray"

            Text {
                text: "Название книги"
                anchors.centerIn: parent
                font.bold: true
            }
        }

        Rectangle {
            width: parent.width * 0.25
            height: parent.height
            color: "lightgray"
            border.color: "gray"

            Text {
                text: "Жанр"
                anchors.centerIn: parent
                font.bold: true
            }
        }
        Rectangle {
            width: parent.width * 0.25
            height: parent.height
            color: "lightgray"
            border.color: "gray"

            Text {
                text: "Автор"
                anchors.centerIn: parent
                font.bold: true
            }
        }
        Rectangle {
            width: parent.width * 0.25
            height: parent.height
            color: "lightgray"
            border.color: "gray"

            Text {
                text: "Дата выпуска"
                anchors.centerIn: parent
                font.bold: true
            }
        }
    }
    ListView{
        id: booksTable
        width: parent.width
        anchors.top: headerBooks.bottom
        anchors.bottomMargin: 10
        anchors.bottom: parent.bottom
        clip: true
        boundsBehavior: Flickable.StopAtBounds
        ScrollBar.vertical: ScrollBar { policy: ScrollBar.AsNeeded }

        model: books_model.getTableBooksData()

        property var currIndex

        function reloadTable(){
            books_model.reloadTableBooksData()
            booksTable.model = books_model.getTableBooksData()
        }

        delegate: Rectangle  {
            width: parent.width
            height: 40
            color: index === booksTable.currIndex? "lightblue" : "transparent"
            property var rowData: modelData

            MouseArea{
                anchors.fill: parent
                onClicked: {
                    booksTable.currIndex = index
                }
            }

            Row{
                anchors.fill: parent
                CustomItems.CustomCellItem{
                    width: parent.width * 0.25
                    height: parent.height
                    cellText: rowData["name_book"]
                }
                CustomItems.CustomCellItem{
                    width: parent.width * 0.25
                    height: parent.height
                    cellText: rowData["name_genre"]
                }
                CustomItems.CustomCellItem{
                    width: parent.width * 0.25
                    height: parent.height
                    cellText: rowData["name_author"]
                }
                CustomItems.CustomCellItem{
                    width: parent.width * 0.25
                    height: parent.height
                    cellText: rowData["date_created"]
                }
            }
        }
    }

    Windows.WindowDelete{
        id: winDeleteBook
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
                    books_model.deleteBook(booksTable.currIndex)
                    booksTable.reloadTable()
                    winDeleteBook.close()
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
                    winDeleteBook.close()
                }
            }
        }
    }

    Windows.WindowBookInsert{
        id: windowBookInsert
        onReloadTable: {
            booksTable.reloadTable()
        }
    }

    Windows.WindowBookUpdate{
        id: windowBookUpdate
        onReloadTable: {
            booksTable.reloadTable()
        }
    }

    Row{
        anchors.margins: 10
        id: booksButonsRow
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
                windowBookInsert.show()
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
                windowBookUpdate.bookData = books_model.getBooksDataByIndex(booksTable.currIndex)
                windowBookUpdate.show()
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
                winDeleteBook.show()
            }
        }
    }

}


