#ifndef BOOKSMODEL_H
#define BOOKSMODEL_H

#include <QObject>
#include "dbmanager.h"

class BooksModel : public QObject
{
    Q_OBJECT
public:
    explicit BooksModel(QObject *parent = nullptr);

    //books
    Q_INVOKABLE QVariantList getTableBooksData();
    Q_INVOKABLE void reloadTableBooksData();
    Q_INVOKABLE QVariantMap getBooksDataByIndex(const int &index);
    Q_INVOKABLE void insertBook(const QVariantMap &params);
    Q_INVOKABLE void updateBook(const QVariantMap &params);
    Q_INVOKABLE void deleteBook(const int &index);

    //genre
    Q_INVOKABLE QVariantList getTableGenreData();
    Q_INVOKABLE QStringList getGenreList();
    Q_INVOKABLE void reloadTableGenreData();
    Q_INVOKABLE QVariantMap getGenreDataByIndex(const int &index);
    Q_INVOKABLE void insertGenre(const QVariantMap &params);
    Q_INVOKABLE void updateGenre(const QVariantMap &params);
    Q_INVOKABLE void deleteGenre(const int &index);

    //author
    Q_INVOKABLE QVariantList getTableAuthorData();
    Q_INVOKABLE QStringList getAuthorList();
    Q_INVOKABLE void reloadTableAuthorData();
    Q_INVOKABLE QVariantMap getAuthorDataByIndex(const int &index);
    Q_INVOKABLE void insertAuthor(const QVariantMap &params);
    Q_INVOKABLE void updateAuthor(const QVariantMap &params);
    Q_INVOKABLE void deleteAuthor(const int &index);

private:
    dbmanager m_dbManager;
    QVariantList m_books_data_list;

    QVariantList m_genre_data_list;

    QVariantList m_author_data_list;

signals:
};

#endif // BOOKSMODEL_H
