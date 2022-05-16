/****************************************************************************
** Meta object code from reading C++ file 'appmenuapplet.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/appmenu/appmenuapplet.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appmenuapplet.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppMenuApplet_t {
    QByteArrayData data[19];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppMenuApplet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppMenuApplet_t qt_meta_stringdata_AppMenuApplet = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AppMenuApplet"
QT_MOC_LITERAL(1, 14, 12), // "modelChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "viewChanged"
QT_MOC_LITERAL(4, 40, 19), // "currentIndexChanged"
QT_MOC_LITERAL(5, 60, 17), // "buttonGridChanged"
QT_MOC_LITERAL(6, 78, 20), // "requestActivateIndex"
QT_MOC_LITERAL(7, 99, 5), // "index"
QT_MOC_LITERAL(8, 105, 15), // "mousePosChanged"
QT_MOC_LITERAL(9, 121, 1), // "x"
QT_MOC_LITERAL(10, 123, 1), // "y"
QT_MOC_LITERAL(11, 125, 7), // "trigger"
QT_MOC_LITERAL(12, 133, 11), // "QQuickItem*"
QT_MOC_LITERAL(13, 145, 3), // "ctx"
QT_MOC_LITERAL(14, 149, 3), // "idx"
QT_MOC_LITERAL(15, 153, 5), // "model"
QT_MOC_LITERAL(16, 159, 13), // "AppMenuModel*"
QT_MOC_LITERAL(17, 173, 12), // "currentIndex"
QT_MOC_LITERAL(18, 186, 10) // "buttonGrid"

    },
    "AppMenuApplet\0modelChanged\0\0viewChanged\0"
    "currentIndexChanged\0buttonGridChanged\0"
    "requestActivateIndex\0index\0mousePosChanged\0"
    "x\0y\0trigger\0QQuickItem*\0ctx\0idx\0model\0"
    "AppMenuModel*\0currentIndex\0buttonGrid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppMenuApplet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,
       8,    2,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   13,   14,

 // properties: name, type, flags
      15, 0x80000000 | 16, 0x0049510b,
      17, QMetaType::Int, 0x00495001,
      18, 0x80000000 | 12, 0x0049510b,

 // properties: notify_signal_id
       0,
       2,
       3,

       0        // eod
};

void AppMenuApplet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppMenuApplet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->viewChanged(); break;
        case 2: _t->currentIndexChanged(); break;
        case 3: _t->buttonGridChanged(); break;
        case 4: _t->requestActivateIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->mousePosChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->trigger((*reinterpret_cast< QQuickItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppMenuApplet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppMenuApplet::modelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AppMenuApplet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppMenuApplet::viewChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AppMenuApplet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppMenuApplet::currentIndexChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AppMenuApplet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppMenuApplet::buttonGridChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AppMenuApplet::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppMenuApplet::requestActivateIndex)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AppMenuApplet::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppMenuApplet::mousePosChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AppMenuModel* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AppMenuApplet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AppMenuModel**>(_v) = _t->model(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->buttonGrid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AppMenuApplet *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModel(*reinterpret_cast< AppMenuModel**>(_v)); break;
        case 2: _t->setButtonGrid(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AppMenuApplet::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AppMenuApplet.data,
    qt_meta_data_AppMenuApplet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppMenuApplet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppMenuApplet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppMenuApplet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AppMenuApplet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AppMenuApplet::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AppMenuApplet::viewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AppMenuApplet::currentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AppMenuApplet::buttonGridChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AppMenuApplet::requestActivateIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AppMenuApplet::mousePosChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
