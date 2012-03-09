/****************************************************************************
** Meta object code from reading C++ file 'printthreadslicerprogresscallbacksignals.h'
**
** Created: Fri Mar 9 01:23:01 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../printthreadslicerprogresscallbacksignals.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printthreadslicerprogresscallbacksignals.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrintThreadSlicerProgressCallbackSignals[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      42,   41,   41,   41, 0x05,
      59,   55,   41,   41, 0x05,
      89,   87,   41,   41, 0x05,
     116,   41,   41,   41, 0x05,
     148,   41,   41,   41, 0x05,
     178,  176,   41,   41, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_PrintThreadSlicerProgressCallbackSignals[] = {
    "PrintThreadSlicerProgressCallbackSignals\0"
    "\0signalSpin()\0a,b\0signalSetTaskRange(int,int)\0"
    "v\0signalSetTaskProgress(int)\0"
    "signalEncounteredIssue(QString)\0"
    "signalSetTaskTitle(QString)\0z\0"
    "signalSetProcessingPlane(float)\0"
};

const QMetaObject PrintThreadSlicerProgressCallbackSignals::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PrintThreadSlicerProgressCallbackSignals,
      qt_meta_data_PrintThreadSlicerProgressCallbackSignals, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrintThreadSlicerProgressCallbackSignals::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrintThreadSlicerProgressCallbackSignals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrintThreadSlicerProgressCallbackSignals::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrintThreadSlicerProgressCallbackSignals))
        return static_cast<void*>(const_cast< PrintThreadSlicerProgressCallbackSignals*>(this));
    if (!strcmp(_clname, "SlicerProgressCallback"))
        return static_cast< SlicerProgressCallback*>(const_cast< PrintThreadSlicerProgressCallbackSignals*>(this));
    return QObject::qt_metacast(_clname);
}

int PrintThreadSlicerProgressCallbackSignals::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: signalSpin(); break;
        case 1: signalSetTaskRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: signalSetTaskProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: signalEncounteredIssue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: signalSetTaskTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: signalSetProcessingPlane((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PrintThreadSlicerProgressCallbackSignals::signalSpin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PrintThreadSlicerProgressCallbackSignals::signalSetTaskRange(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PrintThreadSlicerProgressCallbackSignals::signalSetTaskProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PrintThreadSlicerProgressCallbackSignals::signalEncounteredIssue(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PrintThreadSlicerProgressCallbackSignals::signalSetTaskTitle(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PrintThreadSlicerProgressCallbackSignals::signalSetProcessingPlane(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
