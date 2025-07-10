#include <QApplication>
#include <QQuickView>
#include <QQmlContext>
#include "booksmodel.h"
#include <QPluginLoader>

/// author: Мельников Иван

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    BooksModel *booksModel = new BooksModel;

    QQuickView view;
    view.rootContext()->setContextProperty("books_model", booksModel);
    view.setSource(QUrl("qrc:/Windows/MainWindow.qml"));
    view.show();

    return app.exec();
}
