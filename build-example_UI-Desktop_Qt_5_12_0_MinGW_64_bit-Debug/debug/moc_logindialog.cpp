/****************************************************************************
** Meta object code from reading C++ file 'logindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../example_UI/logindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_loginDialog_t {
    QByteArrayData data[17];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_loginDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_loginDialog_t qt_meta_stringdata_loginDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "loginDialog"
QT_MOC_LITERAL(1, 12, 10), // "createUser"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "name"
QT_MOC_LITERAL(4, 29, 5), // "phone"
QT_MOC_LITERAL(5, 35, 8), // "password"
QT_MOC_LITERAL(6, 44, 5), // "login"
QT_MOC_LITERAL(7, 50, 21), // "on_UserLE_textChanged"
QT_MOC_LITERAL(8, 72, 4), // "arg1"
QT_MOC_LITERAL(9, 77, 25), // "on_PasswordLE_textChanged"
QT_MOC_LITERAL(10, 103, 24), // "on_NewUserLE_textChanged"
QT_MOC_LITERAL(11, 128, 22), // "on_phoneLE_textChanged"
QT_MOC_LITERAL(12, 151, 28), // "on_NewPasswordLE_textChanged"
QT_MOC_LITERAL(13, 180, 19), // "on_CreatePB_clicked"
QT_MOC_LITERAL(14, 200, 18), // "on_LoginPB_clicked"
QT_MOC_LITERAL(15, 219, 34), // "on_NewUserLE_cursorPositionCh..."
QT_MOC_LITERAL(16, 254, 4) // "arg2"

    },
    "loginDialog\0createUser\0\0name\0phone\0"
    "password\0login\0on_UserLE_textChanged\0"
    "arg1\0on_PasswordLE_textChanged\0"
    "on_NewUserLE_textChanged\0"
    "on_phoneLE_textChanged\0"
    "on_NewPasswordLE_textChanged\0"
    "on_CreatePB_clicked\0on_LoginPB_clicked\0"
    "on_NewUserLE_cursorPositionChanged\0"
    "arg2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_loginDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   64,    2, 0x06 /* Public */,
       6,    2,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   76,    2, 0x08 /* Private */,
       9,    1,   79,    2, 0x08 /* Private */,
      10,    1,   82,    2, 0x08 /* Private */,
      11,    1,   85,    2, 0x08 /* Private */,
      12,    1,   88,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    2,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,   16,

       0        // eod
};

void loginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        loginDialog *_t = static_cast<loginDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->login((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->on_UserLE_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_PasswordLE_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_NewUserLE_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_phoneLE_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_NewPasswordLE_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_CreatePB_clicked(); break;
        case 8: _t->on_LoginPB_clicked(); break;
        case 9: _t->on_NewUserLE_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (loginDialog::*)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&loginDialog::createUser)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (loginDialog::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&loginDialog::login)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject loginDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_loginDialog.data,
    qt_meta_data_loginDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *loginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *loginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_loginDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int loginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void loginDialog::createUser(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void loginDialog::login(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
