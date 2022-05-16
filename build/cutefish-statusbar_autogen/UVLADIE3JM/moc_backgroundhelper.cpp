/****************************************************************************
** Meta object code from reading C++ file 'backgroundhelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/backgroundhelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backgroundhelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BackgroundHelper_t {
    QByteArrayData data[11];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BackgroundHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BackgroundHelper_t qt_meta_stringdata_BackgroundHelper = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BackgroundHelper"
QT_MOC_LITERAL(1, 17, 8), // "newColor"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "color"
QT_MOC_LITERAL(4, 33, 8), // "darkMode"
QT_MOC_LITERAL(5, 42, 22), // "onPrimaryScreenChanged"
QT_MOC_LITERAL(6, 65, 9), // "onChanged"
QT_MOC_LITERAL(7, 75, 8), // "setColor"
QT_MOC_LITERAL(8, 84, 1), // "c"
QT_MOC_LITERAL(9, 86, 12), // "setBackgound"
QT_MOC_LITERAL(10, 99, 8) // "fileName"

    },
    "BackgroundHelper\0newColor\0\0color\0"
    "darkMode\0onPrimaryScreenChanged\0"
    "onChanged\0setColor\0c\0setBackgound\0"
    "fileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BackgroundHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   44,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   46,    2, 0x02 /* Public */,
       9,    1,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor, QMetaType::Bool,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QColor,    8,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void BackgroundHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BackgroundHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newColor((*reinterpret_cast< QColor(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->onPrimaryScreenChanged(); break;
        case 2: _t->onChanged(); break;
        case 3: _t->setColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 4: _t->setBackgound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BackgroundHelper::*)(QColor , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackgroundHelper::newColor)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BackgroundHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BackgroundHelper.data,
    qt_meta_data_BackgroundHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BackgroundHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BackgroundHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BackgroundHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BackgroundHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BackgroundHelper::newColor(QColor _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
