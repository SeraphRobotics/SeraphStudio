/****************************************************************************
** Meta object code from reading C++ file 'fabathomemodel2fabwritertsi.h'
**
** Created: Fri Mar 9 01:23:55 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../shared/toolscript/fabathomemodel2fabwritertsi.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fabathomemodel2fabwritertsi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FabAtHomeModel2FabWriterTSI[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      77,   29,   28,   28, 0x0a,
     122,   28,   28,   28, 0x0a,
     137,   28,   28,   28, 0x0a,
     164,  151,   28,   28, 0x0a,
     190,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FabAtHomeModel2FabWriterTSI[] = {
    "FabAtHomeModel2FabWriterTSI\0\0"
    "material_name,material_calibration,meshes_array\0"
    "addMeshes(QString,QScriptValue,QScriptValue)\0"
    "sortBottomUp()\0sortTopDown()\0acceleration\0"
    "setPrintAcceleration(int)\0print()\0"
};

const QMetaObject FabAtHomeModel2FabWriterTSI::staticMetaObject = {
    { &ToolScriptInterface::staticMetaObject, qt_meta_stringdata_FabAtHomeModel2FabWriterTSI,
      qt_meta_data_FabAtHomeModel2FabWriterTSI, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FabAtHomeModel2FabWriterTSI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FabAtHomeModel2FabWriterTSI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FabAtHomeModel2FabWriterTSI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FabAtHomeModel2FabWriterTSI))
        return static_cast<void*>(const_cast< FabAtHomeModel2FabWriterTSI*>(this));
    return ToolScriptInterface::qt_metacast(_clname);
}

int FabAtHomeModel2FabWriterTSI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToolScriptInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addMeshes((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QScriptValue(*)>(_a[2])),(*reinterpret_cast< QScriptValue(*)>(_a[3]))); break;
        case 1: sortBottomUp(); break;
        case 2: sortTopDown(); break;
        case 3: setPrintAcceleration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: print(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
