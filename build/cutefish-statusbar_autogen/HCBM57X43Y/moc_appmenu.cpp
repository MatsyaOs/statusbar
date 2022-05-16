/****************************************************************************
** Meta object code from reading C++ file 'appmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/appmenu/appmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppMenu_t {
    QByteArrayData data[20];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppMenu_t qt_meta_stringdata_AppMenu = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AppMenu"
QT_MOC_LITERAL(1, 8, 11), // "showRequest"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "serviceName"
QT_MOC_LITERAL(4, 33, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(5, 49, 14), // "menuObjectPath"
QT_MOC_LITERAL(6, 64, 8), // "actionId"
QT_MOC_LITERAL(7, 73, 9), // "menuShown"
QT_MOC_LITERAL(8, 83, 7), // "service"
QT_MOC_LITERAL(9, 91, 10), // "objectPath"
QT_MOC_LITERAL(10, 102, 10), // "menuHidden"
QT_MOC_LITERAL(11, 113, 20), // "slotWindowRegistered"
QT_MOC_LITERAL(12, 134, 3), // "WId"
QT_MOC_LITERAL(13, 138, 2), // "id"
QT_MOC_LITERAL(14, 141, 12), // "slotShowMenu"
QT_MOC_LITERAL(15, 154, 1), // "x"
QT_MOC_LITERAL(16, 156, 1), // "y"
QT_MOC_LITERAL(17, 158, 11), // "reconfigure"
QT_MOC_LITERAL(18, 170, 23), // "itemActivationRequested"
QT_MOC_LITERAL(19, 194, 9) // "timeStamp"

    },
    "AppMenu\0showRequest\0\0serviceName\0"
    "QDBusObjectPath\0menuObjectPath\0actionId\0"
    "menuShown\0service\0objectPath\0menuHidden\0"
    "slotWindowRegistered\0WId\0id\0slotShowMenu\0"
    "x\0y\0reconfigure\0itemActivationRequested\0"
    "timeStamp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,
       7,    2,   56,    2, 0x06 /* Public */,
      10,    2,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    3,   66,    2, 0x08 /* Private */,
      14,    5,   73,    2, 0x08 /* Private */,
      17,    0,   84,    2, 0x08 /* Private */,
      18,    2,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, QMetaType::Int,    3,    5,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    8,    9,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    8,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString, 0x80000000 | 4,   13,    3,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, 0x80000000 | 4, QMetaType::Int,   15,   16,    3,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    6,   19,

       0        // eod
};

void AppMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->menuShown((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2]))); break;
        case 2: _t->menuHidden((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2]))); break;
        case 3: _t->slotWindowRegistered((*reinterpret_cast< WId(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[3]))); break;
        case 4: _t->slotShowMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 5: _t->reconfigure(); break;
        case 6: _t->itemActivationRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppMenu::*)(const QString & , const QDBusObjectPath & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppMenu::showRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AppMenu::*)(const QString & , const QDBusObjectPath & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppMenu::menuShown)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AppMenu::*)(const QString & , const QDBusObjectPath & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppMenu::menuHidden)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AppMenu.data,
    qt_meta_data_AppMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppMenu.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int AppMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AppMenu::showRequest(const QString & _t1, const QDBusObjectPath & _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AppMenu::menuShown(const QString & _t1, const QDBusObjectPath & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AppMenu::menuHidden(const QString & _t1, const QDBusObjectPath & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
