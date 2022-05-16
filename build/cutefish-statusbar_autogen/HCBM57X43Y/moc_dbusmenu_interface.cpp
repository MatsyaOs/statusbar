/****************************************************************************
** Meta object code from reading C++ file 'dbusmenu_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/appmenu/dbusmenu_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusmenu_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DBusMenuInterface_t {
    QByteArrayData data[37];
    char stringdata0[507];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusMenuInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusMenuInterface_t qt_meta_stringdata_DBusMenuInterface = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DBusMenuInterface"
QT_MOC_LITERAL(1, 18, 23), // "ItemActivationRequested"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 2), // "id"
QT_MOC_LITERAL(4, 46, 9), // "timeStamp"
QT_MOC_LITERAL(5, 56, 22), // "ItemsPropertiesUpdated"
QT_MOC_LITERAL(6, 79, 16), // "DBusMenuItemList"
QT_MOC_LITERAL(7, 96, 3), // "in0"
QT_MOC_LITERAL(8, 100, 20), // "DBusMenuItemKeysList"
QT_MOC_LITERAL(9, 121, 3), // "in1"
QT_MOC_LITERAL(10, 125, 13), // "LayoutUpdated"
QT_MOC_LITERAL(11, 139, 8), // "revision"
QT_MOC_LITERAL(12, 148, 8), // "parentId"
QT_MOC_LITERAL(13, 157, 11), // "AboutToShow"
QT_MOC_LITERAL(14, 169, 23), // "QDBusPendingReply<bool>"
QT_MOC_LITERAL(15, 193, 5), // "Event"
QT_MOC_LITERAL(16, 199, 9), // "Q_NOREPLY"
QT_MOC_LITERAL(17, 209, 7), // "eventId"
QT_MOC_LITERAL(18, 217, 12), // "QDBusVariant"
QT_MOC_LITERAL(19, 230, 4), // "data"
QT_MOC_LITERAL(20, 235, 9), // "timestamp"
QT_MOC_LITERAL(21, 245, 18), // "GetGroupProperties"
QT_MOC_LITERAL(22, 264, 35), // "QDBusPendingReply<DBusMenuIte..."
QT_MOC_LITERAL(23, 300, 10), // "QList<int>"
QT_MOC_LITERAL(24, 311, 3), // "ids"
QT_MOC_LITERAL(25, 315, 13), // "propertyNames"
QT_MOC_LITERAL(26, 329, 9), // "GetLayout"
QT_MOC_LITERAL(27, 339, 42), // "QDBusPendingReply<uint,DBusMe..."
QT_MOC_LITERAL(28, 382, 14), // "recursionDepth"
QT_MOC_LITERAL(29, 397, 16), // "QDBusReply<uint>"
QT_MOC_LITERAL(30, 414, 19), // "DBusMenuLayoutItem&"
QT_MOC_LITERAL(31, 434, 4), // "item"
QT_MOC_LITERAL(32, 439, 11), // "GetProperty"
QT_MOC_LITERAL(33, 451, 31), // "QDBusPendingReply<QDBusVariant>"
QT_MOC_LITERAL(34, 483, 8), // "property"
QT_MOC_LITERAL(35, 492, 6), // "Status"
QT_MOC_LITERAL(36, 499, 7) // "Version"

    },
    "DBusMenuInterface\0ItemActivationRequested\0"
    "\0id\0timeStamp\0ItemsPropertiesUpdated\0"
    "DBusMenuItemList\0in0\0DBusMenuItemKeysList\0"
    "in1\0LayoutUpdated\0revision\0parentId\0"
    "AboutToShow\0QDBusPendingReply<bool>\0"
    "Event\0Q_NOREPLY\0eventId\0QDBusVariant\0"
    "data\0timestamp\0GetGroupProperties\0"
    "QDBusPendingReply<DBusMenuItemList>\0"
    "QList<int>\0ids\0propertyNames\0GetLayout\0"
    "QDBusPendingReply<uint,DBusMenuLayoutItem>\0"
    "recursionDepth\0QDBusReply<uint>\0"
    "DBusMenuLayoutItem&\0item\0GetProperty\0"
    "QDBusPendingReply<QDBusVariant>\0"
    "property\0Status\0Version"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusMenuInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    2,   64,    2, 0x06 /* Public */,
      10,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   74,    2, 0x0a /* Public */,
      15,    4,   77,   16, 0x0a /* Public */,
      21,    2,   86,    2, 0x0a /* Public */,
      26,    3,   91,    2, 0x0a /* Public */,
      26,    4,   98,    2, 0x0a /* Public */,
      32,    2,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,   11,   12,

 // slots: parameters
    0x80000000 | 14, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 18, QMetaType::UInt,    3,   17,   19,   20,
    0x80000000 | 22, 0x80000000 | 23, QMetaType::QStringList,   24,   25,
    0x80000000 | 27, QMetaType::Int, QMetaType::Int, QMetaType::QStringList,   12,   28,   25,
    0x80000000 | 29, QMetaType::Int, QMetaType::Int, QMetaType::QStringList, 0x80000000 | 30,   12,   28,   25,   31,
    0x80000000 | 33, QMetaType::Int, QMetaType::QString,    3,   34,

 // properties: name, type, flags
      35, QMetaType::QString, 0x00095001,
      36, QMetaType::UInt, 0x00095001,

       0        // eod
};

void DBusMenuInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBusMenuInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ItemActivationRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->ItemsPropertiesUpdated((*reinterpret_cast< DBusMenuItemList(*)>(_a[1])),(*reinterpret_cast< DBusMenuItemKeysList(*)>(_a[2]))); break;
        case 2: _t->LayoutUpdated((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: { QDBusPendingReply<bool> _r = _t->AboutToShow((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->Event((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusVariant(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 5: { QDBusPendingReply<DBusMenuItemList> _r = _t->GetGroupProperties((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<DBusMenuItemList>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<uint,DBusMenuLayoutItem> _r = _t->GetLayout((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint,DBusMenuLayoutItem>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDBusReply<uint> _r = _t->GetLayout((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< DBusMenuLayoutItem(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDBusReply<uint>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusPendingReply<QDBusVariant> _r = _t->GetProperty((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QDBusVariant>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DBusMenuItemKeysList >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DBusMenuItemList >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DBusMenuInterface::*)(int , uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusMenuInterface::ItemActivationRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DBusMenuInterface::*)(DBusMenuItemList , DBusMenuItemKeysList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusMenuInterface::ItemsPropertiesUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DBusMenuInterface::*)(uint , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusMenuInterface::LayoutUpdated)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DBusMenuInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->version(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DBusMenuInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_DBusMenuInterface.data,
    qt_meta_data_DBusMenuInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DBusMenuInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusMenuInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DBusMenuInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusMenuInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DBusMenuInterface::ItemActivationRequested(int _t1, uint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DBusMenuInterface::ItemsPropertiesUpdated(DBusMenuItemList _t1, DBusMenuItemKeysList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DBusMenuInterface::LayoutUpdated(uint _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
