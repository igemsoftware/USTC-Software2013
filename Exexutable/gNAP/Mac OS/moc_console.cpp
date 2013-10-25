/****************************************************************************
** Meta object code from reading C++ file 'console.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gNAP/console.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'console.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_console_t {
    QByteArrayData data[26];
    char stringdata[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_console_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_console_t qt_meta_stringdata_console = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 9),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 3),
QT_MOC_LITERAL(4, 23, 6),
QT_MOC_LITERAL(5, 30, 11),
QT_MOC_LITERAL(6, 42, 6),
QT_MOC_LITERAL(7, 49, 8),
QT_MOC_LITERAL(8, 58, 4),
QT_MOC_LITERAL(9, 63, 18),
QT_MOC_LITERAL(10, 82, 14),
QT_MOC_LITERAL(11, 97, 7),
QT_MOC_LITERAL(12, 105, 8),
QT_MOC_LITERAL(13, 114, 14),
QT_MOC_LITERAL(14, 129, 6),
QT_MOC_LITERAL(15, 136, 5),
QT_MOC_LITERAL(16, 142, 8),
QT_MOC_LITERAL(17, 151, 18),
QT_MOC_LITERAL(18, 170, 16),
QT_MOC_LITERAL(19, 187, 8),
QT_MOC_LITERAL(20, 196, 17),
QT_MOC_LITERAL(21, 214, 12),
QT_MOC_LITERAL(22, 227, 12),
QT_MOC_LITERAL(23, 240, 15),
QT_MOC_LITERAL(24, 256, 15),
QT_MOC_LITERAL(25, 272, 16)
    },
    "console\0getAmount\0\0row\0column\0getSequence\0"
    "string\0promoter\0gene\0on_analyze_clicked\0"
    "on_add_clicked\0set_low\0set_high\0"
    "getInformation\0GeneIM\0ecoli\0position\0"
    "on_predict_clicked\0on_close_clicked\0"
    "show_out\0on_result_clicked\0done_clicked\0"
    "sbol_clicked\0on_show_clicked\0"
    "on_Done_clicked\0on_Done2_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_console[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   94,    2, 0x08,
       5,    2,   99,    2, 0x08,
       9,    0,  104,    2, 0x08,
      10,    0,  105,    2, 0x08,
      11,    0,  106,    2, 0x08,
      12,    0,  107,    2, 0x08,
      13,    2,  108,    2, 0x08,
      17,    0,  113,    2, 0x08,
      18,    0,  114,    2, 0x08,
      19,    0,  115,    2, 0x08,
      20,    0,  116,    2, 0x08,
      21,    0,  117,    2, 0x08,
      22,    0,  118,    2, 0x08,
      23,    0,  119,    2, 0x08,
      24,    0,  120,    2, 0x08,
      25,    0,  121,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Int,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void console::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        console *_t = static_cast<console *>(_o);
        switch (_id) {
        case 0: _t->getAmount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->getSequence((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 2: _t->on_analyze_clicked(); break;
        case 3: _t->on_add_clicked(); break;
        case 4: _t->set_low(); break;
        case 5: _t->set_high(); break;
        case 6: _t->getInformation((*reinterpret_cast< GeneIM(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_predict_clicked(); break;
        case 8: _t->on_close_clicked(); break;
        case 9: _t->show_out(); break;
        case 10: _t->on_result_clicked(); break;
        case 11: _t->done_clicked(); break;
        case 12: _t->sbol_clicked(); break;
        case 13: _t->on_show_clicked(); break;
        case 14: _t->on_Done_clicked(); break;
        case 15: _t->on_Done2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject console::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_console.data,
      qt_meta_data_console,  qt_static_metacall, 0, 0}
};


const QMetaObject *console::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *console::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_console.stringdata))
        return static_cast<void*>(const_cast< console*>(this));
    return QWidget::qt_metacast(_clname);
}

int console::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
