/****************************************************************************
** Meta object code from reading C++ file 'positionobjectspanel.h'
**
** Created: Fri Mar 9 01:22:45 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../positionobjectspanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'positionobjectspanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PositionObjectsPanel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   22,   21,   21, 0x08,
      70,   21,   21,   21, 0x08,
     103,   21,   21,   21, 0x08,
     136,   21,   21,   21, 0x08,
     169,   21,   21,   21, 0x08,
     203,   21,   21,   21, 0x08,
     237,   21,   21,   21, 0x08,
     271,   21,   21,   21, 0x08,
     305,   21,   21,   21, 0x08,
     339,   21,   21,   21, 0x08,
     373,   21,   21,   21, 0x08,
     403,   21,   21,   21, 0x08,
     429,   21,   21,   21, 0x08,
     461,   21,   21,   21, 0x08,
     490,   21,   21,   21, 0x08,
     513,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PositionObjectsPanel[] = {
    "PositionObjectsPanel\0\0checked\0"
    "on_uniformScalingCheckbox_toggled(bool)\0"
    "on_scalingZ_valueChanged(double)\0"
    "on_scalingY_valueChanged(double)\0"
    "on_scalingX_valueChanged(double)\0"
    "on_rotationZ_valueChanged(double)\0"
    "on_rotationY_valueChanged(double)\0"
    "on_rotationX_valueChanged(double)\0"
    "on_positionZ_valueChanged(double)\0"
    "on_positionY_valueChanged(double)\0"
    "on_positionX_valueChanged(double)\0"
    "on_findBestRotation_clicked()\0"
    "on_deleteObject_clicked()\0"
    "on_pickReasonableSize_clicked()\0"
    "on_scaleFromInches_clicked()\0"
    "on_putOnTray_clicked()\0on_autoArrange_clicked()\0"
};

const QMetaObject PositionObjectsPanel::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_PositionObjectsPanel,
      qt_meta_data_PositionObjectsPanel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PositionObjectsPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PositionObjectsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PositionObjectsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PositionObjectsPanel))
        return static_cast<void*>(const_cast< PositionObjectsPanel*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int PositionObjectsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_uniformScalingCheckbox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: on_scalingZ_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: on_scalingY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: on_scalingX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: on_rotationZ_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: on_rotationY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: on_rotationX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: on_positionZ_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: on_positionY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: on_positionX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: on_findBestRotation_clicked(); break;
        case 11: on_deleteObject_clicked(); break;
        case 12: on_pickReasonableSize_clicked(); break;
        case 13: on_scaleFromInches_clicked(); break;
        case 14: on_putOnTray_clicked(); break;
        case 15: on_autoArrange_clicked(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
