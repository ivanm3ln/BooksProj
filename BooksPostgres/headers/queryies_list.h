#ifndef QUERYIES_LIST_H
#define QUERYIES_LIST_H
#include <QString>
#include <QVariantMap>
//Список всех запросов для БД
namespace queries_list {
QString selectBooks = "SELECT id_book, name_book, name_genre, name_author, to_char(date_created, 'DD.MM.YYYY') AS date_created FROM book "
                      "JOIN genre ON "
                      "book.id_genre = genre.id_genre "
                      "JOIN author ON "
                      "book.id_author = author.id_author";

QString insertBook = "INSERT INTO book (name_book, id_genre, id_author, date_created) "
                     "VALUES (:name_book, "
                     "(SELECT id_genre FROM genre WHERE name_genre = :name_genre), "
                     "(SELECT id_author FROM author WHERE name_author = :name_author), "
                     ":date_created) ";

QString updateBook = "UPDATE book SET "
                     "name_book = :name_book, "
                     "id_genre = (SELECT id_genre FROM genre WHERE name_genre = :name_genre), "
                     "id_author = (SELECT id_author FROM author WHERE name_author = :name_author), "
                     "date_created = :date_created "
                     "WHERE id_book = :id_book";

QString deleteBook = "DELETE FROM book "
                     "WHERE id_book = :id_book";

QString selectGenre = "SELECT id_genre, name_genre FROM genre";

QString insertGenre = "INSERT INTO genre (name_genre) "
                      "VALUES (:name_genre)";

QString updateGenre = "UPDATE genre SET "
                      "name_genre = :name_genre "
                      "WHERE id_genre = :id_genre";

QString deleteGenre = "DELETE FROM genre "
                     "WHERE id_genre = :id_genre";

QString selectAuthor = "SELECT id_author, name_author FROM author";

QString insertAuthor = "INSERT INTO author (name_author) "
                      "VALUES (:name_author)";

QString updateAuthor = "UPDATE author SET "
                      "name_author = :name_author "
                      "WHERE id_author = :id_author";

QString deleteAuthor = "DELETE FROM author "
                      "WHERE id_author = :id_author";
}
#endif // QUERYIES_LIST_H
