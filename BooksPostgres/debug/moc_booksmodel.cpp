/****************************************************************************
** Meta object code from reading C++ file 'booksmodel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../headers/booksmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'booksmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN10BooksModelE_t {};
} // unnamed namespace

template <> constexpr inline auto BooksModel::qt_create_metaobjectdata<qt_meta_tag_ZN10BooksModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BooksModel",
        "getTableBooksData",
        "QVariantList",
        "",
        "reloadTableBooksData",
        "getBooksDataByIndex",
        "QVariantMap",
        "index",
        "insertBook",
        "params",
        "updateBook",
        "deleteBook",
        "getTableGenreData",
        "getGenreList",
        "reloadTableGenreData",
        "getGenreDataByIndex",
        "insertGenre",
        "updateGenre",
        "deleteGenre",
        "getTableAuthorData",
        "getAuthorList",
        "reloadTableAuthorData",
        "getAuthorDataByIndex",
        "insertAuthor",
        "updateAuthor",
        "deleteAuthor"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'getTableBooksData'
        QtMocHelpers::MethodData<QVariantList()>(1, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Method 'reloadTableBooksData'
        QtMocHelpers::MethodData<void()>(4, 3, QMC::AccessPublic, QMetaType::Void),
        // Method 'getBooksDataByIndex'
        QtMocHelpers::MethodData<QVariantMap(const int &)>(5, 3, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::Int, 7 },
        }}),
        // Method 'insertBook'
        QtMocHelpers::MethodData<void(const QVariantMap &)>(8, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 9 },
        }}),
        // Method 'updateBook'
        QtMocHelpers::MethodData<void(const QVariantMap &)>(10, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 9 },
        }}),
        // Method 'deleteBook'
        QtMocHelpers::MethodData<void(const int &)>(11, 3, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Method 'getTableGenreData'
        QtMocHelpers::MethodData<QVariantList()>(12, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Method 'getGenreList'
        QtMocHelpers::MethodData<QStringList()>(13, 3, QMC::AccessPublic, QMetaType::QStringList),
        // Method 'reloadTableGenreData'
        QtMocHelpers::MethodData<void()>(14, 3, QMC::AccessPublic, QMetaType::Void),
        // Method 'getGenreDataByIndex'
        QtMocHelpers::MethodData<QVariantMap(const int &)>(15, 3, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::Int, 7 },
        }}),
        // Method 'insertGenre'
        QtMocHelpers::MethodData<void(const QVariantMap &)>(16, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 9 },
        }}),
        // Method 'updateGenre'
        QtMocHelpers::MethodData<void(const QVariantMap &)>(17, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 9 },
        }}),
        // Method 'deleteGenre'
        QtMocHelpers::MethodData<void(const int &)>(18, 3, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Method 'getTableAuthorData'
        QtMocHelpers::MethodData<QVariantList()>(19, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Method 'getAuthorList'
        QtMocHelpers::MethodData<QStringList()>(20, 3, QMC::AccessPublic, QMetaType::QStringList),
        // Method 'reloadTableAuthorData'
        QtMocHelpers::MethodData<void()>(21, 3, QMC::AccessPublic, QMetaType::Void),
        // Method 'getAuthorDataByIndex'
        QtMocHelpers::MethodData<QVariantMap(const int &)>(22, 3, QMC::AccessPublic, 0x80000000 | 6, {{
            { QMetaType::Int, 7 },
        }}),
        // Method 'insertAuthor'
        QtMocHelpers::MethodData<void(const QVariantMap &)>(23, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 9 },
        }}),
        // Method 'updateAuthor'
        QtMocHelpers::MethodData<void(const QVariantMap &)>(24, 3, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 9 },
        }}),
        // Method 'deleteAuthor'
        QtMocHelpers::MethodData<void(const int &)>(25, 3, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BooksModel, qt_meta_tag_ZN10BooksModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BooksModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10BooksModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10BooksModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10BooksModelE_t>.metaTypes,
    nullptr
} };

void BooksModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BooksModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QVariantList _r = _t->getTableBooksData();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->reloadTableBooksData(); break;
        case 2: { QVariantMap _r = _t->getBooksDataByIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->insertBook((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 4: _t->updateBook((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 5: _t->deleteBook((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: { QVariantList _r = _t->getTableGenreData();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 7: { QStringList _r = _t->getGenreList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->reloadTableGenreData(); break;
        case 9: { QVariantMap _r = _t->getGenreDataByIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->insertGenre((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 11: _t->updateGenre((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 12: _t->deleteGenre((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: { QVariantList _r = _t->getTableAuthorData();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 14: { QStringList _r = _t->getAuthorList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->reloadTableAuthorData(); break;
        case 16: { QVariantMap _r = _t->getAuthorDataByIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->insertAuthor((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 18: _t->updateAuthor((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 19: _t->deleteAuthor((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *BooksModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BooksModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10BooksModelE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BooksModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
