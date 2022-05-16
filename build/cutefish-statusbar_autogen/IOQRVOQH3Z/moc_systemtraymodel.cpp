/****************************************************************************
** Meta object code from reading C++ file 'systemtraymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/systemtray/systemtraymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemtraymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemTrayModel_t {
    QByteArrayData data[21];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemTrayModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemTrayModel_t qt_meta_stringdata_SystemTrayModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SystemTrayModel"
QT_MOC_LITERAL(1, 16, 11), // "onItemAdded"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "service"
QT_MOC_LITERAL(4, 37, 13), // "onItemRemoved"
QT_MOC_LITERAL(5, 51, 7), // "updated"
QT_MOC_LITERAL(6, 59, 25), // "StatusNotifierItemSource*"
QT_MOC_LITERAL(7, 85, 4), // "item"
QT_MOC_LITERAL(8, 90, 15), // "leftButtonClick"
QT_MOC_LITERAL(9, 106, 2), // "id"
QT_MOC_LITERAL(10, 109, 1), // "x"
QT_MOC_LITERAL(11, 111, 1), // "y"
QT_MOC_LITERAL(12, 113, 16), // "rightButtonClick"
QT_MOC_LITERAL(13, 130, 11), // "QQuickItem*"
QT_MOC_LITERAL(14, 142, 8), // "iconItem"
QT_MOC_LITERAL(15, 151, 17), // "middleButtonClick"
QT_MOC_LITERAL(16, 169, 4), // "move"
QT_MOC_LITERAL(17, 174, 4), // "from"
QT_MOC_LITERAL(18, 179, 2), // "to"
QT_MOC_LITERAL(19, 182, 13), // "popupPosition"
QT_MOC_LITERAL(20, 196, 12) // "visualParent"

    },
    "SystemTrayModel\0onItemAdded\0\0service\0"
    "onItemRemoved\0updated\0StatusNotifierItemSource*\0"
    "item\0leftButtonClick\0id\0x\0y\0"
    "rightButtonClick\0QQuickItem*\0iconItem\0"
    "middleButtonClick\0move\0from\0to\0"
    "popupPosition\0visualParent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemTrayModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       8,    3,   63,    2, 0x02 /* Public */,
      12,    4,   70,    2, 0x02 /* Public */,
      15,    3,   79,    2, 0x02 /* Public */,
      16,    2,   86,    2, 0x02 /* Public */,
      19,    3,   91,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,    9,   14,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::QPointF, 0x80000000 | 13, QMetaType::Int, QMetaType::Int,   20,   10,   11,

       0        // eod
};

void SystemTrayModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemTrayModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onItemAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onItemRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updated((*reinterpret_cast< StatusNotifierItemSource*(*)>(_a[1]))); break;
        case 3: _t->leftButtonClick((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->rightButtonClick((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QQuickItem*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->middleButtonClick((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->move((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: { QPointF _r = _t->popupPosition((*reinterpret_cast< QQuickItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< StatusNotifierItemSource* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SystemTrayModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_SystemTrayModel.data,
    qt_meta_data_SystemTrayModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemTrayModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemTrayModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTrayModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int SystemTrayModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
