/****************************************************************************
** Meta object code from reading C++ file 'TUIOSender.h'
**
** Created: Mon Aug 18 19:23:20 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/TUIOSender.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TUIOSender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TUIOSender[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      24,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TUIOSender[] = {
    "TUIOSender\0\0frameSlot()\0resetTxSlot()\0"
};

const QMetaObject TUIOSender::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TUIOSender,
      qt_meta_data_TUIOSender, 0 }
};

const QMetaObject *TUIOSender::metaObject() const
{
    return &staticMetaObject;
}

void *TUIOSender::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TUIOSender))
	return static_cast<void*>(const_cast< TUIOSender*>(this));
    return QObject::qt_metacast(_clname);
}

int TUIOSender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: frameSlot(); break;
        case 1: resetTxSlot(); break;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
