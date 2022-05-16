/****************************************************************************
** Meta object code from reading C++ file 'appmenumodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/appmenu/appmenumodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appmenumodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppMenuModel_t {
    QByteArrayData data[12];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppMenuModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppMenuModel_t qt_meta_stringdata_AppMenuModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AppMenuModel"
QT_MOC_LITERAL(1, 13, 20), // "requestActivateIndex"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "index"
QT_MOC_LITERAL(4, 41, 20), // "menuAvailableChanged"
QT_MOC_LITERAL(5, 62, 16), // "modelNeedsUpdate"
QT_MOC_LITERAL(6, 79, 14), // "visibleChanged"
QT_MOC_LITERAL(7, 94, 21), // "onActiveWindowChanged"
QT_MOC_LITERAL(8, 116, 10), // "setVisible"
QT_MOC_LITERAL(9, 127, 7), // "visible"
QT_MOC_LITERAL(10, 135, 6), // "update"
QT_MOC_LITERAL(11, 142, 13) // "menuAvailable"

    },
    "AppMenuModel\0requestActivateIndex\0\0"
    "index\0menuAvailableChanged\0modelNeedsUpdate\0"
    "visibleChanged\0onActiveWindowChanged\0"
    "setVisible\0visible\0update\0menuAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppMenuModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,
       5,    0,   53,    2, 0x06 /* Public */,
       6,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   55,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       1,
       3,

       0        // eod
};

void AppMenuModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppMenuModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestActivateIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->menuAvailableChanged(); break;
        case 2: _t->modelNeedsUpdate(); break;
        case 3: _t->visibleChanged(); break;
        case 4: _t->onActiveWindowChanged(); break;
        case 5: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AppMenuModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppMenuModel::requestActivateIndex)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AppMenuModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppMenuModel::menuAvailableChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AppMenuModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppMenuModel::modelNeedsUpdate)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AppMenuModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AppMenuModel::visibleChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AppMenuModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->menuAvailable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->visible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AppMenuModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMenuAvailable(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AppMenuModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_AppMenuModel.data,
    qt_meta_data_AppMenuModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppMenuModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppMenuModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppMenuModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int AppMenuModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void AppMenuModel::requestActivateIndex(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AppMenuModel::menuAvailableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AppMenuModel::modelNeedsUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AppMenuModel::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
