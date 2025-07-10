#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QLibrary>
#include <QApplication>

class dbmanager : public QObject
{
    Q_OBJECT
public:
    explicit dbmanager(QObject *parent = nullptr);

    bool connectToHost(const QString &host, int port, const QString &dbName,
                 const QString &user, const QString &password);

    QString getLastError();

    QVariantList executeQuery(const QString &query, const QVariantMap &params = QVariantMap());

private:
    QSqlDatabase m_db;
    QString m_lastError;
};

#endif // DBMANAGER_H
