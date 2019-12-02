/****************************************************************************
** Meta object code from reading C++ file 'sutvr.h'
**
** Created: Mon 25. Mar 10:23:48 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sutvr.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sutvr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SUTVR[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,    7,    6,    6, 0x08,
      62,   56,    6,    6, 0x08,
      84,   56,    6,    6, 0x08,
     107,    6,    6,    6, 0x08,
     134,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SUTVR[] = {
    "SUTVR\0\0item,col\0treeStatusChanged(QTreeWidgetItem*,int)\0"
    "state\0firstPortChanged(int)\0"
    "secondPortChanged(int)\0"
    "readMessageFromFirstPort()\0"
    "readMessageFromSecondPort()\0"
};

void SUTVR::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SUTVR *_t = static_cast<SUTVR *>(_o);
        switch (_id) {
        case 0: _t->treeStatusChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->firstPortChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->secondPortChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->readMessageFromFirstPort(); break;
        case 4: _t->readMessageFromSecondPort(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SUTVR::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SUTVR::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SUTVR,
      qt_meta_data_SUTVR, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SUTVR::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SUTVR::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SUTVR::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SUTVR))
        return static_cast<void*>(const_cast< SUTVR*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SUTVR::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
