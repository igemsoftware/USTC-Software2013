/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gNAP/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[21];
    char stringdata[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Widget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 11),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 3),
QT_MOC_LITERAL(4, 24, 6),
QT_MOC_LITERAL(5, 31, 13),
QT_MOC_LITERAL(6, 45, 6),
QT_MOC_LITERAL(7, 52, 8),
QT_MOC_LITERAL(8, 61, 4),
QT_MOC_LITERAL(9, 66, 16),
QT_MOC_LITERAL(10, 83, 6),
QT_MOC_LITERAL(11, 90, 5),
QT_MOC_LITERAL(12, 96, 8),
QT_MOC_LITERAL(13, 105, 16),
QT_MOC_LITERAL(14, 122, 18),
QT_MOC_LITERAL(15, 141, 20),
QT_MOC_LITERAL(16, 162, 18),
QT_MOC_LITERAL(17, 181, 24),
QT_MOC_LITERAL(18, 206, 16),
QT_MOC_LITERAL(19, 223, 21),
QT_MOC_LITERAL(20, 245, 9)
    },
    "Widget\0pass_amount\0\0row\0column\0"
    "pass_sequence\0string\0promoter\0gene\0"
    "pass_information\0GeneIM\0ecoli\0position\0"
    "on_TF_TF_clicked\0on_TF_Gene_clicked\0"
    "on_Gene_Info_clicked\0on_TU_Info_clicked\0"
    "on_Promoter_Info_clicked\0on_close_clicked\0"
    "on_Take_a_nap_clicked\0back_func\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x05,
       5,    2,   74,    2, 0x05,
       9,    2,   79,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      13,    0,   84,    2, 0x08,
      14,    0,   85,    2, 0x08,
      15,    0,   86,    2, 0x08,
      16,    0,   87,    2, 0x08,
      17,    0,   88,    2, 0x08,
      18,    0,   89,    2, 0x08,
      19,    0,   90,    2, 0x08,
      20,    0,   91,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,   12,

 // slots: parameters
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

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        switch (_id) {
        case 0: _t->pass_amount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->pass_sequence((*reinterpret_cast< string(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 2: _t->pass_information((*reinterpret_cast< GeneIM(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_TF_TF_clicked(); break;
        case 4: _t->on_TF_Gene_clicked(); break;
        case 5: _t->on_Gene_Info_clicked(); break;
        case 6: _t->on_TU_Info_clicked(); break;
        case 7: _t->on_Promoter_Info_clicked(); break;
        case 8: _t->on_close_clicked(); break;
        case 9: _t->on_Take_a_nap_clicked(); break;
        case 10: _t->back_func(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Widget::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::pass_amount)) {
                *result = 0;
            }
        }
        {
            typedef void (Widget::*_t)(string , string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::pass_sequence)) {
                *result = 1;
            }
        }
        {
            typedef void (Widget::*_t)(GeneIM , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::pass_information)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, 0, 0}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Widget::pass_amount(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Widget::pass_sequence(string _t1, string _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Widget::pass_information(GeneIM _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
