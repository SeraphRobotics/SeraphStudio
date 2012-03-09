/****************************************************************************
** Meta object code from reading C++ file 'materialspanel.h'
**
** Created: Fri Mar 9 01:22:53 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../materialspanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'materialspanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaterialsPanel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      40,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   15,   15,   15, 0x08,
     104,   98,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MaterialsPanel[] = {
    "MaterialsPanel\0\0compatible_script_names\0"
    "changedMaterials(QStringList)\0"
    "on_removeMaterial_clicked()\0index\0"
    "on_printerCombo_currentIndexChanged(int)\0"
};

const QMetaObject MaterialsPanel::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_MaterialsPanel,
      qt_meta_data_MaterialsPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaterialsPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaterialsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaterialsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaterialsPanel))
        return static_cast<void*>(const_cast< MaterialsPanel*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int MaterialsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changedMaterials((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: on_removeMaterial_clicked(); break;
        case 2: on_printerCombo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MaterialsPanel::changedMaterials(QStringList _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
