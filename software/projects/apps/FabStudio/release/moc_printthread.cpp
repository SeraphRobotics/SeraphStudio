/****************************************************************************
** Meta object code from reading C++ file 'printthread.h'
**
** Created: Fri Mar 9 01:22:56 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../printthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrintThread[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   13,   12,   12, 0x05,
      39,   12,   12,   12, 0x05,
      62,   13,   12,   12, 0x05,
      84,   12,   12,   12, 0x05,
     105,   12,   12,   12, 0x05,
     127,   12,   12,   12, 0x05,
     145,   12,   12,   12, 0x05,
     181,  170,   12,   12, 0x05,
     213,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     243,  239,   12,   12, 0x08,
     273,  271,   12,   12, 0x08,
     305,  300,   12,   12, 0x08,
     327,  239,   12,   12, 0x08,
     353,  271,   12,   12, 0x08,
     378,  300,   12,   12, 0x08,
     421,  404,   12,   12, 0x08,
     456,  454,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PrintThread[] = {
    "PrintThread\0\0,\0setMasterRange(int,int)\0"
    "setMasterProgress(int)\0setTaskRange(int,int)\0"
    "setTaskProgress(int)\0setTaskTitle(QString)\0"
    "logEntry(QString)\0finishedFabFile(QString)\0"
    "color,path\0addRenderablePath(QColor,Path*)\0"
    "setProcessingPlane(float)\0a,b\0"
    "emitSetMasterRange(int,int)\0a\0"
    "emitSetMasterProgress(int)\0text\0"
    "emitLogEntry(QString)\0emitSetTaskRange(int,int)\0"
    "emitSetTaskProgress(int)\0"
    "emitSetTaskTitle(QString)\0material_id,path\0"
    "emitAddRenderablePath(int,Path*)\0z\0"
    "emitSetProcessingPlane(float)\0"
};

const QMetaObject PrintThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_PrintThread,
      qt_meta_data_PrintThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrintThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrintThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrintThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrintThread))
        return static_cast<void*>(const_cast< PrintThread*>(this));
    return QThread::qt_metacast(_clname);
}

int PrintThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setMasterRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: setMasterProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: setTaskRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: setTaskProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: setTaskTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: logEntry((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: finishedFabFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: addRenderablePath((*reinterpret_cast< QColor(*)>(_a[1])),(*reinterpret_cast< Path*(*)>(_a[2]))); break;
        case 8: setProcessingPlane((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: emitSetMasterRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: emitSetMasterProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: emitLogEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: emitSetTaskRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: emitSetTaskProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: emitSetTaskTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: emitAddRenderablePath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Path*(*)>(_a[2]))); break;
        case 16: emitSetProcessingPlane((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void PrintThread::setMasterRange(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PrintThread::setMasterProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PrintThread::setTaskRange(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PrintThread::setTaskProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PrintThread::setTaskTitle(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PrintThread::logEntry(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PrintThread::finishedFabFile(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PrintThread::addRenderablePath(QColor _t1, Path * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PrintThread::setProcessingPlane(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
