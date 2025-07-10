#include "booksmodel.h"
#include "queryies_list.h"

BooksModel::BooksModel(QObject *parent)
    : QObject{parent}
{

    if (!m_dbManager.connectToHost("localhost", 5432, "BooksBD", "postgres", "postgres")) {
        qDebug() << "Connection error:" << m_dbManager.getLastError();
        return;
    }
    reloadTableBooksData();
    reloadTableGenreData();
    reloadTableAuthorData();
}

QVariantList BooksModel::getTableBooksData()
{
    return m_books_data_list;
}

void BooksModel::reloadTableBooksData()
{
    m_books_data_list = m_dbManager.executeQuery(queries_list::selectBooks);
}

QVariantMap BooksModel::getBooksDataByIndex(const int &index)
{
    if (index > m_books_data_list.size()){
        return QVariantMap();
    }
    return m_books_data_list.at(index).toMap();
}

void BooksModel::insertBook(const QVariantMap &params)
{
    m_dbManager.executeQuery(queries_list::insertBook, params);
}

void BooksModel::updateBook(const QVariantMap &params)
{
    m_dbManager.executeQuery(queries_list::updateBook, params);
}

void BooksModel::deleteBook(const int &index)
{
    if (index > m_books_data_list.size()){
        return;
    }
    m_dbManager.executeQuery(queries_list::deleteBook, m_books_data_list.at(index).toMap());
}

QVariantList BooksModel::getTableGenreData()
{
    return m_genre_data_list;
}

QStringList BooksModel::getGenreList()
{
    QStringList res;
    Q_FOREACH(QVariant var, m_genre_data_list){
        QVariantMap tmp_map = var.toMap();
        if (!tmp_map.value("name_genre").toString().isEmpty()){
            res.append(tmp_map.value("name_genre").toString());
        }
    }
    return res;
}

void BooksModel::reloadTableGenreData()
{
    m_genre_data_list = m_dbManager.executeQuery(queries_list::selectGenre);
}

QVariantMap BooksModel::getGenreDataByIndex(const int &index)
{
    if (index > m_genre_data_list.size()){
        return QVariantMap();
    }
    return m_genre_data_list.at(index).toMap();
}

void BooksModel::insertGenre(const QVariantMap &params)
{
    m_dbManager.executeQuery(queries_list::insertGenre, params);
}

void BooksModel::updateGenre(const QVariantMap &params)
{
    m_dbManager.executeQuery(queries_list::updateGenre, params);
}

void BooksModel::deleteGenre(const int &index)
{
    if (index > m_genre_data_list.size()){
        return;
    }
    m_dbManager.executeQuery(queries_list::deleteGenre, m_genre_data_list.at(index).toMap());
}

QVariantList BooksModel::getTableAuthorData()
{
    return m_author_data_list;
}

QStringList BooksModel::getAuthorList()
{
    QStringList res;
    Q_FOREACH(QVariant var, m_author_data_list){
        QVariantMap tmp_map = var.toMap();
        if (!tmp_map.value("name_author").toString().isEmpty()){
            res.append(tmp_map.value("name_author").toString());
        }
    }
    return res;
}

void BooksModel::reloadTableAuthorData()
{
    m_author_data_list = m_dbManager.executeQuery(queries_list::selectAuthor);
}

QVariantMap BooksModel::getAuthorDataByIndex(const int &index)
{
    if (index > m_author_data_list.size()){
        return QVariantMap();
    }
    return m_author_data_list.at(index).toMap();
}

void BooksModel::insertAuthor(const QVariantMap &params)
{
    m_dbManager.executeQuery(queries_list::insertAuthor, params);
}

void BooksModel::updateAuthor(const QVariantMap &params)
{
    m_dbManager.executeQuery(queries_list::updateAuthor, params);
}

void BooksModel::deleteAuthor(const int &index)
{
    if (index > m_author_data_list.size()){
        return;
    }
    m_dbManager.executeQuery(queries_list::deleteAuthor, m_author_data_list.at(index).toMap());

}
