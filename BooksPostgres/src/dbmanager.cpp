#include "dbmanager.h"

dbmanager::dbmanager(QObject *parent)
    : QObject{parent}
{

}

bool dbmanager::connectToHost(const QString &host, int port, const QString &dbName, const QString &user, const QString &password)
{
    m_db = QSqlDatabase::addDatabase("QPSQL");
    m_db.setHostName(host);
    m_db.setPort(port);
    m_db.setDatabaseName(dbName);
    m_db.setUserName(user);
    m_db.setPassword(password);

    if (!m_db.open()) {
        m_lastError = m_db.lastError().text();
        return false;
    }
    return true;
}

QString dbmanager::getLastError()
{
    return m_lastError;
}

QVariantList dbmanager::executeQuery(const QString &query, const QVariantMap &params)
{
    QVariantList result;
    m_lastError.clear();

    QSqlQuery q(m_db);

    if (!q.prepare(query)) {
        m_lastError = q.lastError().text();
        return result;
    }

    // Привязываем параметры
    for (auto it = params.begin(); it != params.end(); ++it) {
        q.bindValue(":" + it.key(), it.value());
    }

    if (!q.exec()) {
        m_lastError = q.lastError().text();
        qDebug() << "m_lastError__"<<m_lastError;
        return result;
    }

    // Если запрос возвращает результат (SELECT или RETURNING)
    if (q.isSelect() || query.contains("RETURNING", Qt::CaseInsensitive)) {
        while (q.next()) {
            QVariantMap row;
            for (int i = 0; i < q.record().count(); ++i) {
                row[q.record().fieldName(i)] = q.value(i);
            }
            result.append(row);
        }
    }

    return result;
}
