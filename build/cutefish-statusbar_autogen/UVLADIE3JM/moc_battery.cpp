/****************************************************************************
** Meta object code from reading C++ file 'battery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/battery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'battery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Battery_t {
    QByteArrayData data[25];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Battery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Battery_t qt_meta_stringdata_Battery = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Battery"
QT_MOC_LITERAL(1, 8, 12), // "validChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 18), // "chargeStateChanged"
QT_MOC_LITERAL(4, 41, 20), // "chargePercentChanged"
QT_MOC_LITERAL(5, 62, 15), // "capacityChanged"
QT_MOC_LITERAL(6, 78, 20), // "remainingTimeChanged"
QT_MOC_LITERAL(7, 99, 4), // "time"
QT_MOC_LITERAL(8, 104, 16), // "onBatteryChanged"
QT_MOC_LITERAL(9, 121, 25), // "lastChargedPercentChanged"
QT_MOC_LITERAL(10, 147, 17), // "iconSourceChanged"
QT_MOC_LITERAL(11, 165, 21), // "showPercentageChanged"
QT_MOC_LITERAL(12, 187, 19), // "onPropertiesChanged"
QT_MOC_LITERAL(13, 207, 9), // "ifaceName"
QT_MOC_LITERAL(14, 217, 12), // "changedProps"
QT_MOC_LITERAL(15, 230, 16), // "invalidatedProps"
QT_MOC_LITERAL(16, 247, 9), // "available"
QT_MOC_LITERAL(17, 257, 11), // "chargeState"
QT_MOC_LITERAL(18, 269, 13), // "chargePercent"
QT_MOC_LITERAL(19, 283, 18), // "lastChargedPercent"
QT_MOC_LITERAL(20, 302, 8), // "capacity"
QT_MOC_LITERAL(21, 311, 12), // "statusString"
QT_MOC_LITERAL(22, 324, 9), // "onBattery"
QT_MOC_LITERAL(23, 334, 14), // "showPercentage"
QT_MOC_LITERAL(24, 349, 10) // "iconSource"

    },
    "Battery\0validChanged\0\0chargeStateChanged\0"
    "chargePercentChanged\0capacityChanged\0"
    "remainingTimeChanged\0time\0onBatteryChanged\0"
    "lastChargedPercentChanged\0iconSourceChanged\0"
    "showPercentageChanged\0onPropertiesChanged\0"
    "ifaceName\0changedProps\0invalidatedProps\0"
    "available\0chargeState\0chargePercent\0"
    "lastChargedPercent\0capacity\0statusString\0"
    "onBattery\0showPercentage\0iconSource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Battery[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       9,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       4,    1,   68,    2, 0x06 /* Public */,
       5,    1,   71,    2, 0x06 /* Public */,
       6,    1,   74,    2, 0x06 /* Public */,
       8,    0,   77,    2, 0x06 /* Public */,
       9,    0,   78,    2, 0x06 /* Public */,
      10,    0,   79,    2, 0x06 /* Public */,
      11,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    3,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,   13,   14,   15,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00495001,
      17, QMetaType::Int, 0x00495001,
      18, QMetaType::Int, 0x00495001,
      19, QMetaType::Int, 0x00495001,
      20, QMetaType::Int, 0x00495001,
      21, QMetaType::QString, 0x00495001,
      22, QMetaType::Bool, 0x00495001,
      23, QMetaType::Bool, 0x00495001,
      24, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       6,
       3,
       4,
       5,
       8,
       7,

       0        // eod
};

void Battery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Battery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->validChanged(); break;
        case 1: _t->chargeStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->chargePercentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->capacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->remainingTimeChanged((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 5: _t->onBatteryChanged(); break;
        case 6: _t->lastChargedPercentChanged(); break;
        case 7: _t->iconSourceChanged(); break;
        case 8: _t->showPercentageChanged(); break;
        case 9: _t->onPropertiesChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Battery::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::validChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Battery::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::chargeStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Battery::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::chargePercentChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Battery::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::capacityChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Battery::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::remainingTimeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Battery::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::onBatteryChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Battery::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::lastChargedPercentChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Battery::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::iconSourceChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Battery::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Battery::showPercentageChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Battery *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->available(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->chargeState(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->chargePercent(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->lastChargedPercent(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->capacity(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->statusString(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->onBattery(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->showPercentage(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->iconSource(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Battery::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Battery.data,
    qt_meta_data_Battery,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Battery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Battery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Battery.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Battery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Battery::validChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Battery::chargeStateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Battery::chargePercentChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Battery::capacityChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Battery::remainingTimeChanged(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Battery::onBatteryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Battery::lastChargedPercentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Battery::iconSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Battery::showPercentageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
