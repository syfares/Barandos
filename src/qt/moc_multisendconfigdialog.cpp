/****************************************************************************
** Meta object code from reading C++ file 'multisendconfigdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/multisendconfigdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multisendconfigdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MultiSendConfigDialog_t {
    QByteArrayData data[9];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiSendConfigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiSendConfigDialog_t qt_meta_stringdata_MultiSendConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "MultiSendConfigDialog"
QT_MOC_LITERAL(1, 22, 11), // "deleteFrame"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 25), // "on_activateButton_clicked"
QT_MOC_LITERAL(4, 61, 24), // "on_disableButton_clicked"
QT_MOC_LITERAL(5, 86, 20), // "selectSendingAddress"
QT_MOC_LITERAL(6, 107, 9), // "pasteText"
QT_MOC_LITERAL(7, 117, 25), // "on_addEntryButton_clicked"
QT_MOC_LITERAL(8, 143, 21) // "on_saveButton_clicked"

    },
    "MultiSendConfigDialog\0deleteFrame\0\0"
    "on_activateButton_clicked\0"
    "on_disableButton_clicked\0selectSendingAddress\0"
    "pasteText\0on_addEntryButton_clicked\0"
    "on_saveButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiSendConfigDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MultiSendConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultiSendConfigDialog *_t = static_cast<MultiSendConfigDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteFrame(); break;
        case 1: _t->on_activateButton_clicked(); break;
        case 2: _t->on_disableButton_clicked(); break;
        case 3: _t->selectSendingAddress(); break;
        case 4: _t->pasteText(); break;
        case 5: _t->on_addEntryButton_clicked(); break;
        case 6: _t->on_saveButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MultiSendConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MultiSendConfigDialog.data,
      qt_meta_data_MultiSendConfigDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MultiSendConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiSendConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MultiSendConfigDialog.stringdata0))
        return static_cast<void*>(const_cast< MultiSendConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MultiSendConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
