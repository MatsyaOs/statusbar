/****************************************************************************
** Meta object code from reading C++ file 'appmenudbus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/appmenu/appmenudbus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appmenudbus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppmenuDBus_t {
    QByteArrayData data[13];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppmenuDBus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppmenuDBus_t qt_meta_stringdata_AppmenuDBus = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AppmenuDBus"
QT_MOC_LITERAL(1, 12, 11), // "appShowMenu"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 1), // "x"
QT_MOC_LITERAL(4, 27, 1), // "y"
QT_MOC_LITERAL(5, 29, 11), // "serviceName"
QT_MOC_LITERAL(6, 41, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(7, 57, 14), // "menuObjectPath"
QT_MOC_LITERAL(8, 72, 8), // "actionId"
QT_MOC_LITERAL(9, 81, 12), // "reconfigured"
QT_MOC_LITERAL(10, 94, 11), // "showRequest"
QT_MOC_LITERAL(11, 106, 9), // "menuShown"
QT_MOC_LITERAL(12, 116, 10) // "menuHidden"

    },
    "AppmenuDBus\0appShowMenu\0\0x\0y\0serviceName\0"
    "QDBusObjectPath\0menuObjectPath\0actionId\0"
    "reconfigured\0showRequest\0menuShown\0"
    "menuHidden"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppmenuDBus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   39,    2, 0x06 /* Public */,
       9,    0,   50,    2, 0x06 /* Public */,
      10,    3,   51,    2, 0x06 /* Public */,
      11,    2,   58,    2, 0x06 /* Public */,
      12,    2,   63,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, 0x80000000 | 6, QMetaType::Int,    3,    4,    5,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6, QMetaType::Int,    5,    7,    8,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,

       0        // eod
};

void AppmenuDBus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppmenuDBus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appShowMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 1: _t->reconfigured(); break;
        case 2: _t->showRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->menuShown((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2]))); break;
        case 4: _t->menuHidden((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
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
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppmenuDBus::*)(int , int , const QString & , const QDBusObjectPath & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppmenuDBus::appShowMenu)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AppmenuDBus::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppmenuDBus::reconfigured)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AppmenuDBus::*)(const QString & , const QDBusObjectPath & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppmenuDBus::showRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AppmenuDBus::*)(const QString & , const QDBusObjectPath & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppmenuDBus::menuShown)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AppmenuDBus::*)(const QString & , const QDBusObjectPath & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppmenuDBus::menuHidden)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppmenuDBus::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AppmenuDBus.data,
    qt_meta_data_AppmenuDBus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppmenuDBus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppmenuDBus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppmenuDBus.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int AppmenuDBus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AppmenuDBus::appShowMenu(int _t1, int _t2, const QString & _t3, const QDBusObjectPath & _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AppmenuDBus::reconfigured()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AppmenuDBus::showRequest(const QString & _t1, const QDBusObjectPath & _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AppmenuDBus::menuShown(const QString & _t1, const QDBusObjectPath & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AppmenuDBus::menuHidden(const QString & _t1, const QDBusObjectPath & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
