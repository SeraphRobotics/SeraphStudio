/****************************************************************************
** Meta object code from reading C++ file 'printthreadpatherprogresscallbacksignals.h'
**
** Created: Fri Mar 9 01:22:59 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../printthreadpatherprogresscallbacksignals.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printthreadpatherprogresscallbacksignals.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PrintThreadPatherProgressCallbackSignals[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   42,   41,   41, 0x05,
      76,   74,   41,   41, 0x05,
     103,   41,   41,   41, 0x05,
     135,   41,   41,   41, 0x05,
     180,  163,   41,   41, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_PrintThreadPatherProgressCallbackSignals[] = {
    "PrintThreadPatherProgressCallbackSignals\0"
    "\0a,b\0signalSetTaskRange(int,int)\0v\0"
    "signalSetTaskProgress(int)\0"
    "signalEncounteredIssue(QString)\0"
    "signalSetTaskTitle(QString)\0"
    "material_id,path\0signalAddRenderablePath(int,Path*)\0"
};

const QMetaObject PrintThreadPatherProgressCallbackSignals::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PrintThreadPatherProgressCallbackSignals,
      qt_meta_data_PrintThreadPatherProgressCallbackSignals, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PrintThreadPatherProgressCallbackSignals::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PrintThreadPatherProgressCallbackSignals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PrintThreadPatherProgressCallbackSignals::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PrintThreadPatherProgressCallbackSignals))
        return static_cast<void*>(const_cast< PrintThreadPatherProgressCallbackSignals*>(this));
    if (!strcmp(_clname, "PatherProgressCallback"))
        return static_cast< PatherProgressCallback*>(const_cast< PrintThreadPatherProgressCallbackSignals*>(this));
    return QObject::qt_metacast(_clname);
}

int PrintThreadPatherProgressCallbackSignals::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: signalSetTaskRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: signalSetTaskProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: signalEncounteredIssue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: signalSetTaskTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: signalAddRenderablePath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Path*(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PrintThreadPatherProgressCallbackSignals::signalSetTaskRange(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PrintThreadPatherProgressCallbackSignals::signalSetTaskProgress(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PrintThreadPatherProgressCallbackSignals::signalEncounteredIssue(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PrintThreadPatherProgressCallbackSignals::signalSetTaskTitle(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PrintThreadPatherProgressCallbackSignals::signalAddRenderablePath(int _t1, Path * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
