/****************************************************************************
** Meta object code from reading C++ file 'multisenddialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/multisenddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multisenddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MultiSendDialog_t {
    QByteArrayData data[11];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiSendDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiSendDialog_t qt_meta_stringdata_MultiSendDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MultiSendDialog"
QT_MOC_LITERAL(1, 16, 10), // "addAddress"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "std::string"
QT_MOC_LITERAL(4, 40, 7), // "address"
QT_MOC_LITERAL(5, 48, 6), // "onLoad"
QT_MOC_LITERAL(6, 55, 11), // "deleteFrame"
QT_MOC_LITERAL(7, 67, 25), // "on_activateButton_clicked"
QT_MOC_LITERAL(8, 93, 24), // "on_disableButton_clicked"
QT_MOC_LITERAL(9, 118, 28), // "on_addressBookButton_clicked"
QT_MOC_LITERAL(10, 147, 18) // "configureMultiSend"

    },
    "MultiSendDialog\0addAddress\0\0std::string\0"
    "address\0onLoad\0deleteFrame\0"
    "on_activateButton_clicked\0"
    "on_disableButton_clicked\0"
    "on_addressBookButton_clicked\0"
    "configureMultiSend"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiSendDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MultiSendDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultiSendDialog *_t = static_cast<MultiSendDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addAddress((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->deleteFrame(); break;
        case 2: _t->on_activateButton_clicked(); break;
        case 3: _t->on_disableButton_clicked(); break;
        case 4: _t->on_addressBookButton_clicked(); break;
        case 5: _t->configureMultiSend(); break;
        default: ;
        }
    }
}

const QMetaObject MultiSendDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MultiSendDialog.data,
      qt_meta_data_MultiSendDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MultiSendDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiSendDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MultiSendDialog.stringdata0))
        return static_cast<void*>(const_cast< MultiSendDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MultiSendDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
