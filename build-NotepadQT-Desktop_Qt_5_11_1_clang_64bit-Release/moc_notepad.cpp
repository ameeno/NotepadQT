/****************************************************************************
** Meta object code from reading C++ file 'notepad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../NotepadQT/notepad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notepad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Notepad_t {
    QByteArrayData data[13];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Notepad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Notepad_t qt_meta_stringdata_Notepad = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Notepad"
QT_MOC_LITERAL(1, 8, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(4, 56, 26), // "on_actionSave_as_triggered"
QT_MOC_LITERAL(5, 83, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(6, 107, 24), // "on_actionPrint_triggered"
QT_MOC_LITERAL(7, 132, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(8, 156, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(9, 180, 22), // "on_actionCut_triggered"
QT_MOC_LITERAL(10, 203, 24), // "on_actionPaste_triggered"
QT_MOC_LITERAL(11, 228, 23), // "on_actionUndo_triggered"
QT_MOC_LITERAL(12, 252, 23) // "on_actionRedo_triggered"

    },
    "Notepad\0on_actionNew_triggered\0\0"
    "on_actionOpen_triggered\0"
    "on_actionSave_as_triggered\0"
    "on_actionSave_triggered\0"
    "on_actionPrint_triggered\0"
    "on_actionExit_triggered\0on_actionCopy_triggered\0"
    "on_actionCut_triggered\0on_actionPaste_triggered\0"
    "on_actionUndo_triggered\0on_actionRedo_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Notepad[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
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

void Notepad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Notepad *_t = static_cast<Notepad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionOpen_triggered(); break;
        case 2: _t->on_actionSave_as_triggered(); break;
        case 3: _t->on_actionSave_triggered(); break;
        case 4: _t->on_actionPrint_triggered(); break;
        case 5: _t->on_actionExit_triggered(); break;
        case 6: _t->on_actionCopy_triggered(); break;
        case 7: _t->on_actionCut_triggered(); break;
        case 8: _t->on_actionPaste_triggered(); break;
        case 9: _t->on_actionUndo_triggered(); break;
        case 10: _t->on_actionRedo_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Notepad::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Notepad.data,
      qt_meta_data_Notepad,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Notepad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Notepad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Notepad.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Notepad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
