/****************************************************************************
** Meta object code from reading C++ file 'statusnotifieritemsource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/systemtray/statusnotifieritemsource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statusnotifieritemsource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StatusNotifierItemSource_t {
    QByteArrayData data[18];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StatusNotifierItemSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StatusNotifierItemSource_t qt_meta_stringdata_StatusNotifierItemSource = {
    {
QT_MOC_LITERAL(0, 0, 24), // "StatusNotifierItemSource"
QT_MOC_LITERAL(1, 25, 16), // "contextMenuReady"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 6), // "QMenu*"
QT_MOC_LITERAL(4, 50, 4), // "menu"
QT_MOC_LITERAL(5, 55, 14), // "activateResult"
QT_MOC_LITERAL(6, 70, 7), // "success"
QT_MOC_LITERAL(7, 78, 7), // "updated"
QT_MOC_LITERAL(8, 86, 25), // "StatusNotifierItemSource*"
QT_MOC_LITERAL(9, 112, 12), // "refreshTitle"
QT_MOC_LITERAL(10, 125, 12), // "refreshIcons"
QT_MOC_LITERAL(11, 138, 14), // "refreshToolTip"
QT_MOC_LITERAL(12, 153, 7), // "refresh"
QT_MOC_LITERAL(13, 161, 14), // "performRefresh"
QT_MOC_LITERAL(14, 176, 10), // "syncStatus"
QT_MOC_LITERAL(15, 187, 15), // "refreshCallback"
QT_MOC_LITERAL(16, 203, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(17, 228, 16) // "activateCallback"

    },
    "StatusNotifierItemSource\0contextMenuReady\0"
    "\0QMenu*\0menu\0activateResult\0success\0"
    "updated\0StatusNotifierItemSource*\0"
    "refreshTitle\0refreshIcons\0refreshToolTip\0"
    "refresh\0performRefresh\0syncStatus\0"
    "refreshCallback\0QDBusPendingCallWatcher*\0"
    "activateCallback"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StatusNotifierItemSource[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       7,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       1,    0,   83,    2, 0x08 /* Private */,
       9,    0,   84,    2, 0x08 /* Private */,
      10,    0,   85,    2, 0x08 /* Private */,
      11,    0,   86,    2, 0x08 /* Private */,
      12,    0,   87,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    1,   89,    2, 0x08 /* Private */,
      15,    1,   92,    2, 0x08 /* Private */,
      17,    1,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 16,    2,

       0        // eod
};

void StatusNotifierItemSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatusNotifierItemSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contextMenuReady((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 1: _t->activateResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updated((*reinterpret_cast< StatusNotifierItemSource*(*)>(_a[1]))); break;
        case 3: _t->contextMenuReady(); break;
        case 4: _t->refreshTitle(); break;
        case 5: _t->refreshIcons(); break;
        case 6: _t->refreshToolTip(); break;
        case 7: _t->refresh(); break;
        case 8: _t->performRefresh(); break;
        case 9: _t->syncStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->refreshCallback((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 11: _t->activateCallback((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMenu* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StatusNotifierItemSource* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StatusNotifierItemSource::*)(QMenu * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierItemSource::contextMenuReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StatusNotifierItemSource::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierItemSource::activateResult)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StatusNotifierItemSource::*)(StatusNotifierItemSource * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatusNotifierItemSource::updated)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StatusNotifierItemSource::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_StatusNotifierItemSource.data,
    qt_meta_data_StatusNotifierItemSource,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StatusNotifierItemSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StatusNotifierItemSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StatusNotifierItemSource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StatusNotifierItemSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void StatusNotifierItemSource::contextMenuReady(QMenu * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StatusNotifierItemSource::activateResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StatusNotifierItemSource::updated(StatusNotifierItemSource * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
