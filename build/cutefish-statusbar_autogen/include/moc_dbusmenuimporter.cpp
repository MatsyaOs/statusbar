/****************************************************************************
** Meta object code from reading C++ file 'dbusmenuimporter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/libdbusmenuqt/dbusmenuimporter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusmenuimporter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DBusMenuImporter_t {
    QByteArrayData data[26];
    char stringdata0[418];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusMenuImporter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusMenuImporter_t qt_meta_stringdata_DBusMenuImporter = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DBusMenuImporter"
QT_MOC_LITERAL(1, 17, 11), // "menuUpdated"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "QMenu*"
QT_MOC_LITERAL(4, 37, 25), // "actionActivationRequested"
QT_MOC_LITERAL(5, 63, 8), // "QAction*"
QT_MOC_LITERAL(6, 72, 10), // "updateMenu"
QT_MOC_LITERAL(7, 83, 4), // "menu"
QT_MOC_LITERAL(8, 88, 16), // "sendClickedEvent"
QT_MOC_LITERAL(9, 105, 19), // "slotMenuAboutToShow"
QT_MOC_LITERAL(10, 125, 19), // "slotMenuAboutToHide"
QT_MOC_LITERAL(11, 145, 31), // "slotAboutToShowDBusCallFinished"
QT_MOC_LITERAL(12, 177, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(13, 202, 27), // "slotItemActivationRequested"
QT_MOC_LITERAL(14, 230, 2), // "id"
QT_MOC_LITERAL(15, 233, 9), // "timestamp"
QT_MOC_LITERAL(16, 243, 27), // "processPendingLayoutUpdates"
QT_MOC_LITERAL(17, 271, 17), // "slotLayoutUpdated"
QT_MOC_LITERAL(18, 289, 8), // "revision"
QT_MOC_LITERAL(19, 298, 8), // "parentId"
QT_MOC_LITERAL(20, 307, 21), // "slotGetLayoutFinished"
QT_MOC_LITERAL(21, 329, 26), // "slotItemsPropertiesUpdated"
QT_MOC_LITERAL(22, 356, 16), // "DBusMenuItemList"
QT_MOC_LITERAL(23, 373, 11), // "updatedList"
QT_MOC_LITERAL(24, 385, 20), // "DBusMenuItemKeysList"
QT_MOC_LITERAL(25, 406, 11) // "removedList"

    },
    "DBusMenuImporter\0menuUpdated\0\0QMenu*\0"
    "actionActivationRequested\0QAction*\0"
    "updateMenu\0menu\0sendClickedEvent\0"
    "slotMenuAboutToShow\0slotMenuAboutToHide\0"
    "slotAboutToShowDBusCallFinished\0"
    "QDBusPendingCallWatcher*\0"
    "slotItemActivationRequested\0id\0timestamp\0"
    "processPendingLayoutUpdates\0"
    "slotLayoutUpdated\0revision\0parentId\0"
    "slotGetLayoutFinished\0slotItemsPropertiesUpdated\0"
    "DBusMenuItemList\0updatedList\0"
    "DBusMenuItemKeysList\0removedList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusMenuImporter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   85,    2, 0x0a /* Public */,
       6,    1,   86,    2, 0x0a /* Public */,
       8,    1,   89,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    1,   94,    2, 0x08 /* Private */,
      13,    2,   97,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    2,  103,    2, 0x08 /* Private */,
      20,    1,  108,    2, 0x08 /* Private */,
      21,    2,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,   14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,   18,   19,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 24,   23,   25,

       0        // eod
};

void DBusMenuImporter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBusMenuImporter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->menuUpdated((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 1: _t->actionActivationRequested((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->updateMenu(); break;
        case 3: _t->updateMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 4: _t->sendClickedEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotMenuAboutToShow(); break;
        case 6: _t->slotMenuAboutToHide(); break;
        case 7: _t->slotAboutToShowDBusCallFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 8: _t->slotItemActivationRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 9: _t->processPendingLayoutUpdates(); break;
        case 10: _t->slotLayoutUpdated((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->slotGetLayoutFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 12: _t->d->slotItemsPropertiesUpdated((*reinterpret_cast< const DBusMenuItemList(*)>(_a[1])),(*reinterpret_cast< const DBusMenuItemKeysList(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DBusMenuImporter::*)(QMenu * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusMenuImporter::menuUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DBusMenuImporter::*)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusMenuImporter::actionActivationRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DBusMenuImporter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DBusMenuImporter.data,
    qt_meta_data_DBusMenuImporter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DBusMenuImporter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusMenuImporter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DBusMenuImporter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DBusMenuImporter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void DBusMenuImporter::menuUpdated(QMenu * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DBusMenuImporter::actionActivationRequested(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
