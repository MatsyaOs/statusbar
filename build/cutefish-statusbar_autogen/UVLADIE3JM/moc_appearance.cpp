/****************************************************************************
** Meta object code from reading C++ file 'appearance.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/appearance.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appearance.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Appearance_t {
    QByteArrayData data[25];
    char stringdata0[380];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Appearance_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Appearance_t qt_meta_stringdata_Appearance = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Appearance"
QT_MOC_LITERAL(1, 11, 19), // "dockIconSizeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "dockDirectionChanged"
QT_MOC_LITERAL(4, 53, 20), // "fontPointSizeChanged"
QT_MOC_LITERAL(5, 74, 20), // "dimsWallpaperChanged"
QT_MOC_LITERAL(6, 95, 23), // "devicePixelRatioChanged"
QT_MOC_LITERAL(7, 119, 14), // "switchDarkMode"
QT_MOC_LITERAL(8, 134, 8), // "darkMode"
QT_MOC_LITERAL(9, 143, 16), // "setDimsWallpaper"
QT_MOC_LITERAL(10, 160, 5), // "value"
QT_MOC_LITERAL(11, 166, 15), // "setDockIconSize"
QT_MOC_LITERAL(12, 182, 12), // "dockIconSize"
QT_MOC_LITERAL(13, 195, 16), // "setDockDirection"
QT_MOC_LITERAL(14, 212, 13), // "dockDirection"
QT_MOC_LITERAL(15, 226, 20), // "setGenericFontFamily"
QT_MOC_LITERAL(16, 247, 4), // "name"
QT_MOC_LITERAL(17, 252, 18), // "setFixedFontFamily"
QT_MOC_LITERAL(18, 271, 16), // "setFontPointSize"
QT_MOC_LITERAL(19, 288, 13), // "fontPointSize"
QT_MOC_LITERAL(20, 302, 14), // "setAccentColor"
QT_MOC_LITERAL(21, 317, 11), // "accentColor"
QT_MOC_LITERAL(22, 329, 19), // "setDevicePixelRatio"
QT_MOC_LITERAL(23, 349, 13), // "dimsWallpaper"
QT_MOC_LITERAL(24, 363, 16) // "devicePixelRatio"

    },
    "Appearance\0dockIconSizeChanged\0\0"
    "dockDirectionChanged\0fontPointSizeChanged\0"
    "dimsWallpaperChanged\0devicePixelRatioChanged\0"
    "switchDarkMode\0darkMode\0setDimsWallpaper\0"
    "value\0setDockIconSize\0dockIconSize\0"
    "setDockDirection\0dockDirection\0"
    "setGenericFontFamily\0name\0setFixedFontFamily\0"
    "setFontPointSize\0fontPointSize\0"
    "setAccentColor\0accentColor\0"
    "setDevicePixelRatio\0dimsWallpaper\0"
    "devicePixelRatio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Appearance[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       5,  116, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    0,   88,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   89,    2, 0x02 /* Public */,
       9,    1,   92,    2, 0x02 /* Public */,
      11,    1,   95,    2, 0x02 /* Public */,
      13,    1,   98,    2, 0x02 /* Public */,
      15,    1,  101,    2, 0x02 /* Public */,
      17,    1,  104,    2, 0x02 /* Public */,
      18,    1,  107,    2, 0x02 /* Public */,
      20,    1,  110,    2, 0x02 /* Public */,
      22,    1,  113,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Double,   10,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00495103,
      14, QMetaType::Int, 0x00495103,
      19, QMetaType::Int, 0x00495103,
      23, QMetaType::Bool, 0x00495103,
      24, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void Appearance::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Appearance *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dockIconSizeChanged(); break;
        case 1: _t->dockDirectionChanged(); break;
        case 2: _t->fontPointSizeChanged(); break;
        case 3: _t->dimsWallpaperChanged(); break;
        case 4: _t->devicePixelRatioChanged(); break;
        case 5: _t->switchDarkMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setDimsWallpaper((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setDockIconSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setDockDirection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setGenericFontFamily((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->setFixedFontFamily((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->setFontPointSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setAccentColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setDevicePixelRatio((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Appearance::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Appearance::dockIconSizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Appearance::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Appearance::dockDirectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Appearance::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Appearance::fontPointSizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Appearance::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Appearance::dimsWallpaperChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Appearance::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Appearance::devicePixelRatioChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Appearance *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->dockIconSize(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->dockDirection(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->fontPointSize(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->dimsWallpaper(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->devicePixelRatio(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Appearance *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDockIconSize(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setDockDirection(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setFontPointSize(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setDimsWallpaper(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setDevicePixelRatio(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Appearance::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Appearance.data,
    qt_meta_data_Appearance,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Appearance::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Appearance::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Appearance.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Appearance::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Appearance::dockIconSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Appearance::dockDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Appearance::fontPointSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Appearance::dimsWallpaperChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Appearance::devicePixelRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
