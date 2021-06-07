/****************************************************************************
** Meta object code from reading C++ file 'gamepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ZooProjectFinal/ZooClient/gamepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gamePage_t {
    QByteArrayData data[11];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gamePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gamePage_t qt_meta_stringdata_gamePage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "gamePage"
QT_MOC_LITERAL(1, 9, 10), // "changeName"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "newName"
QT_MOC_LITERAL(4, 29, 21), // "updateMessagesDisplay"
QT_MOC_LITERAL(5, 51, 13), // "updateDisplay"
QT_MOC_LITERAL(6, 65, 24), // "on_btn_showStats_clicked"
QT_MOC_LITERAL(7, 90, 20), // "on_btn_spend_clicked"
QT_MOC_LITERAL(8, 111, 19), // "on_btn_show_clicked"
QT_MOC_LITERAL(9, 131, 25), // "on_btn_buyHabitat_clicked"
QT_MOC_LITERAL(10, 157, 21) // "on_btn100Meat_clicked"

    },
    "gamePage\0changeName\0\0newName\0"
    "updateMessagesDisplay\0updateDisplay\0"
    "on_btn_showStats_clicked\0on_btn_spend_clicked\0"
    "on_btn_show_clicked\0on_btn_buyHabitat_clicked\0"
    "on_btn100Meat_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gamePage[] = {

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
       1,    1,   54,    2, 0x0a /* Public */,
       4,    0,   57,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gamePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gamePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->updateMessagesDisplay(); break;
        case 2: _t->updateDisplay(); break;
        case 3: _t->on_btn_showStats_clicked(); break;
        case 4: _t->on_btn_spend_clicked(); break;
        case 5: _t->on_btn_show_clicked(); break;
        case 6: _t->on_btn_buyHabitat_clicked(); break;
        case 7: _t->on_btn100Meat_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gamePage::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_gamePage.data,
    qt_meta_data_gamePage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gamePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gamePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gamePage.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int gamePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
