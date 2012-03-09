/****************************************************************************
** Meta object code from reading C++ file 'loadobjectspanel.h'
**
** Created: Fri Mar 9 01:22:40 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../loadobjectspanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loadobjectspanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LoadObjectsPanel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      38,   17,   17,   17, 0x08,
      58,   17,   17,   17, 0x08,
      96,   91,   17,   17, 0x08,
     119,   17,   17,   17, 0x08,
     155,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LoadObjectsPanel[] = {
    "LoadObjectsPanel\0\0on_browse_clicked()\0"
    "on_rescan_clicked()\0"
    "finishedScanningForObjectFiles()\0path\0"
    "folderChanged(QString)\0"
    "on_clearFileNameTypeahead_clicked()\0"
    "on_fileNameTypeahead_textChanged(QString)\0"
};

const QMetaObject LoadObjectsPanel::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_LoadObjectsPanel,
      qt_meta_data_LoadObjectsPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LoadObjectsPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LoadObjectsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LoadObjectsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LoadObjectsPanel))
        return static_cast<void*>(const_cast< LoadObjectsPanel*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int LoadObjectsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_browse_clicked(); break;
        case 1: on_rescan_clicked(); break;
        case 2: finishedScanningForObjectFiles(); break;
        case 3: folderChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: on_clearFileNameTypeahead_clicked(); break;
        case 5: on_fileNameTypeahead_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
