/****************************************************************************
** Meta object code from reading C++ file 'menuimporter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/appmenu/menuimporter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menuimporter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MenuImporter_t {
    QByteArrayData data[15];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MenuImporter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MenuImporter_t qt_meta_stringdata_MenuImporter = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MenuImporter"
QT_MOC_LITERAL(1, 13, 16), // "WindowRegistered"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "WId"
QT_MOC_LITERAL(4, 35, 2), // "id"
QT_MOC_LITERAL(5, 38, 7), // "service"
QT_MOC_LITERAL(6, 46, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(7, 62, 18), // "WindowUnregistered"
QT_MOC_LITERAL(8, 81, 14), // "RegisterWindow"
QT_MOC_LITERAL(9, 96, 9), // "Q_NOREPLY"
QT_MOC_LITERAL(10, 106, 4), // "path"
QT_MOC_LITERAL(11, 111, 16), // "UnregisterWindow"
QT_MOC_LITERAL(12, 128, 16), // "GetMenuForWindow"
QT_MOC_LITERAL(13, 145, 16), // "QDBusObjectPath&"
QT_MOC_LITERAL(14, 162, 23) // "slotServiceUnregistered"

    },
    "MenuImporter\0WindowRegistered\0\0WId\0"
    "id\0service\0QDBusObjectPath\0"
    "WindowUnregistered\0RegisterWindow\0"
    "Q_NOREPLY\0path\0UnregisterWindow\0"
    "GetMenuForWindow\0QDBusObjectPath&\0"
    "slotServiceUnregistered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MenuImporter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       7,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   54,    9, 0x0a /* Public */,
      11,    1,   59,    9, 0x0a /* Public */,
      12,    2,   62,    2, 0x0a /* Public */,
      14,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 6,    4,    5,    2,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    4,   10,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::QString, 0x80000000 | 3, 0x80000000 | 13,    4,   10,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void MenuImporter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuImporter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->WindowRegistered((*reinterpret_cast< WId(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[3]))); break;
        case 1: _t->WindowUnregistered((*reinterpret_cast< WId(*)>(_a[1]))); break;
        case 2: _t->RegisterWindow((*reinterpret_cast< WId(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2]))); break;
        case 3: _t->UnregisterWindow((*reinterpret_cast< WId(*)>(_a[1]))); break;
        case 4: { QString _r = _t->GetMenuForWindow((*reinterpret_cast< WId(*)>(_a[1])),(*reinterpret_cast< QDBusObjectPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->slotServiceUnregistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuImporter::*)(WId , const QString & , const QDBusObjectPath & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuImporter::WindowRegistered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MenuImporter::*)(WId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuImporter::WindowUnregistered)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MenuImporter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MenuImporter.data,
    qt_meta_data_MenuImporter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MenuImporter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuImporter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuImporter.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int MenuImporter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MenuImporter::WindowRegistered(WId _t1, const QString & _t2, const QDBusObjectPath & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MenuImporter::WindowUnregistered(WId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
