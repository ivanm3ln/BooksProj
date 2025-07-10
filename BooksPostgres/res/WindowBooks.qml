import QtQuick 2.15
import QtQuick.Layouts 1.15
import QtQuick.Controls 6.5

Window {
    width: 400
    height: 400
    property var bookData: []
    signal reloadTable

    function getData(){
        var data = {
            "id_book": bookData["id_book"],
            "name_book": textBookName.text,
            "name_genre": comboBoxGenre.currentText,
            "name_author": comboBoxAuthor.currentText,
            "date_created": textDate.text
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
                id: rectBookName
                height: 32
                width: 270
                border.width: 1
                TextEdit{
                    id: textBookName
                    anchors.margins: 10
                    text: bookData["name_book"] !== undefined ? bookData["name_book"]: ""
                    anchors.fill: parent
                    anchors.verticalCenter: parent.verticalCenter
                }
            }
        }

        Row{
            spacing: 10
            height: 32
            Text{
                height: 32
                width: 100
                text: "Жанр"
                anchors.verticalCenter: parent.verticalCenter
                verticalAlignment: Text.AlignVCenter
            }
            ComboBox{
                id: comboBoxGenre
                height: 32
                width: 270
                model: books_model.getGenreList()
                currentIndex: comboBoxGenre.find(bookData["name_genre"])
            }
        }

        Row{
            spacing: 10
            height: 32
            Text{
                height: 32
                width: 100
                text: "Автор"
                anchors.verticalCenter: parent.verticalCenter
                verticalAlignment: Text.AlignVCenter
            }
            ComboBox{
                id: comboBoxAuthor
                height: 32
                width: 270
                model: books_model.getAuthorList()
                currentIndex: comboBoxAuthor.find(bookData["name_author"])
            }
        }

        Row{
            spacing: 10
            height: 32
            Text{
                height: 32
                width: 100
                text: "Дата выпуска"
                anchors.verticalCenter: parent.verticalCenter
                verticalAlignment: Text.AlignVCenter
            }
            Rectangle{
                id: rectDate
                height: 32
                width: 270
                border.width: 1
                TextField {
                    id: textDate
                    text: bookData["date_created"] !== undefined ? bookData["date_created"]: ""
                    anchors.fill: parent
                    anchors.verticalCenter: parent.verticalCenter
                    verticalAlignment: TextField.AlignVCenter

                }
            }
        }
    }
}
