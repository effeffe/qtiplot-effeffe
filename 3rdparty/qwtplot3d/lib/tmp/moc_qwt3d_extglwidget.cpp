/****************************************************************************
** Meta object code from reading C++ file 'qwt3d_extglwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/qwt3d_extglwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt3d_extglwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qwt3D__ExtGLWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      41,   20,   19,   19, 0x05,
     100,   79,   19,   19, 0x05,
     149,  135,   19,   19, 0x05,
     205,  184,   19,   19, 0x05,
     240,   19,   19,   19, 0x05,
     260,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     299,  284,   19,   19, 0x0a,
     333,  284,   19,   19, 0x0a,
     374,  364,   19,   19, 0x0a,
     406,  284,   19,   19, 0x0a,
     437,   19,   19,   19, 0x0a,
     453,   19,   19,   19, 0x0a,
     472,  468,   19,   19, 0x0a,
     490,   19,   19,   19, 0x2a,
     504,  468,   19,   19, 0x0a,
     523,   19,   19,   19, 0x2a,
     538,  468,   19,   19, 0x0a,
     559,   19,   19,   19, 0x2a,
     576,  468,   19,   19, 0x0a,
     598,   19,   19,   19, 0x2a,
     616,  468,   19,   19, 0x0a,
     637,   19,   19,   19, 0x2a,
     654,  468,   19,   19, 0x0a,
     676,   19,   19,   19, 0x2a,
     713,  694,   19,   19, 0x0a,
     757,  284,   19,   19, 0x2a,
     796,  694,   19,   19, 0x0a,
     837,  284,   19,   19, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_Qwt3D__ExtGLWidget[] = {
    "Qwt3D::ExtGLWidget\0\0xAngle,yAngle,zAngle\0"
    "rotationChanged(double,double,double)\0"
    "xShift,yShift,zShift\0"
    "shiftChanged(double,double,double)\0"
    "xShift,yShift\0vieportShiftChanged(double,double)\0"
    "xScale,yScale,zScale\0"
    "scaleChanged(double,double,double)\0"
    "zoomChanged(double)\0projectionChanged(bool)\0"
    "xVal,yVal,zVal\0setRotation(double,double,double)\0"
    "setShift(double,double,double)\0xVal,yVal\0"
    "setViewportShift(double,double)\0"
    "setScale(double,double,double)\0"
    "setZoom(double)\0setOrtho(bool)\0val\0"
    "enableMouse(bool)\0enableMouse()\0"
    "disableMouse(bool)\0disableMouse()\0"
    "enableKeyboard(bool)\0enableKeyboard()\0"
    "disableKeyboard(bool)\0disableKeyboard()\0"
    "enableLighting(bool)\0enableLighting()\0"
    "disableLighting(bool)\0disableLighting()\0"
    "xVal,yVal,zVal,idx\0"
    "setLightRotation(double,double,double,uint)\0"
    "setLightRotation(double,double,double)\0"
    "setLightShift(double,double,double,uint)\0"
    "setLightShift(double,double,double)\0"
};

void Qwt3D::ExtGLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExtGLWidget *_t = static_cast<ExtGLWidget *>(_o);
        switch (_id) {
        case 0: _t->rotationChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->shiftChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->vieportShiftChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->scaleChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->projectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setRotation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 7: _t->setShift((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 8: _t->setViewportShift((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 9: _t->setScale((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 10: _t->setZoom((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->setOrtho((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->enableMouse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->enableMouse(); break;
        case 14: _t->disableMouse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->disableMouse(); break;
        case 16: _t->enableKeyboard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->enableKeyboard(); break;
        case 18: _t->disableKeyboard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->disableKeyboard(); break;
        case 20: _t->enableLighting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->enableLighting(); break;
        case 22: _t->disableLighting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->disableLighting(); break;
        case 24: _t->setLightRotation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 25: _t->setLightRotation((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 26: _t->setLightShift((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 27: _t->setLightShift((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Qwt3D::ExtGLWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qwt3D::ExtGLWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_Qwt3D__ExtGLWidget,
      qt_meta_data_Qwt3D__ExtGLWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qwt3D::ExtGLWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qwt3D::ExtGLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qwt3D::ExtGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qwt3D__ExtGLWidget))
        return static_cast<void*>(const_cast< ExtGLWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int Qwt3D::ExtGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void Qwt3D::ExtGLWidget::rotationChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qwt3D::ExtGLWidget::shiftChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qwt3D::ExtGLWidget::vieportShiftChanged(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qwt3D::ExtGLWidget::scaleChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qwt3D::ExtGLWidget::zoomChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Qwt3D::ExtGLWidget::projectionChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
