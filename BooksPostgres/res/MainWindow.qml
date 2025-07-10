import QtQuick 2.15
import QtQuick.Controls
import "qrc:/Forms" as Forms

Item {
    width: 400
    height: 600
    Rectangle{
        anchors.fill: parent
        TabBar {
            id: tabBar
            width: parent.width

            TabButton { text: "Вкладка 1" }
            TabButton { text: "Вкладка 2" }
            TabButton { text: "Вкладка 3" }
        }
        SwipeView {
            id: swipeView
            anchors.top: tabBar.bottom
            width: parent.width
            height: parent.height - tabBar.height
            currentIndex: tabBar.currentIndex

            Item {
                Forms.BooksForm{
                    anchors.fill: parent
                }
            }

            Item {
                Forms.GenreForm{
                    anchors.fill: parent
                }
            }

            Item {
                Forms.AuthorForm{
                    anchors.fill: parent
                }
            }
        }

        Connections {
            target: tabBar
            function onCurrentIndexChanged() {
                swipeView.currentIndex = tabBar.currentIndex
            }
        }

        Connections {
            target: swipeView
            function onCurrentIndexChanged() {
                tabBar.currentIndex = swipeView.currentIndex
            }
        }
    }
}
