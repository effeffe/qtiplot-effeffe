/****************************************************************************
** Meta object code from reading C++ file 'qwt3d_curve.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/qwt3d_curve.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwt3d_curve.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Qwt3D__Curve[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      37,   13,   13,   13, 0x05,
      58,   13,   13,   13, 0x05,
      71,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   13,   13,   13, 0x0a,
     118,  114,   13,   13, 0x0a,
     149,  114,   13,   13, 0x0a,
     184,  182,   13,   13, 0x0a,
     209,  114,   13,   13, 0x0a,
     242,  114,   13,   13, 0x0a,
     283,  274,   13,   13, 0x0a,
     315,  301,   13,   13, 0x0a,
     342,   13,   13,   13, 0x0a,
     364,   13,   13,   13, 0x0a,
     382,  114,   13,   13, 0x0a,
     406,  114,   13,   13, 0x0a,
     428,  114,   13,   13, 0x0a,
     453,  448,   13,   13, 0x0a,
     482,  479,   13,   13, 0x0a,
     511,  507,   13,   13, 0x0a,
     539,  532,   13,   13, 0x0a,
     563,   13,   13,   13, 0x2a,
     594,  583,   13,   13, 0x0a,
     633,  114,   13,   13, 0x2a,
     667,  507,   13,   13, 0x0a,
     700,  694,   13,   13, 0x0a,
     735,  718,   13,   13, 0x0a,
     791,  781,   13,   13, 0x2a,
     828,  823,   13,   13, 0x2a,
     884,  853,   13,   13, 0x0a,
     943,  919,   13,   13, 0x2a,
     990,  973,   13,   13, 0x2a,
    1016,   13,   13,   13, 0x0a,
    1029,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Qwt3D__Curve[] = {
    "Qwt3D::Curve\0\0resolutionChanged(int)\0"
    "updatePlotData(bool)\0updatePlot()\0"
    "readInFinished(QString)\0setResolution(int)\0"
    "val\0setPlotStyle(Qwt3D::PLOTSTYLE)\0"
    "setPlotStyle(Qwt3D::Enrichment&)\0d\0"
    "setPolygonOffset(double)\0"
    "setFloorStyle(Qwt3D::FLOORSTYLE)\0"
    "setShading(Qwt3D::SHADINGSTYLE)\0"
    "isolines\0setIsolines(uint)\0majors,minors\0"
    "updateColorLegend(int,int)\0"
    "showColorLegend(bool)\0showNormals(bool)\0"
    "setNormalLength(double)\0setNormalQuality(int)\0"
    "setSmoothMesh(bool)\0rgba\0"
    "setMeshColor(Qwt3D::RGBA)\0lw\0"
    "setMeshLineWidth(double)\0col\0"
    "setDataColor(Color*)\0toggle\0"
    "setDataProjection(bool)\0setDataProjection()\0"
    "val,toggle\0setProjection(Qwt3D::PROJECTMODE,bool)\0"
    "setProjection(Qwt3D::PROJECTMODE)\0"
    "setTitleColor(Qwt3D::RGBA)\0title\0"
    "setTitle(QString)\0rely,relx,anchor\0"
    "setTitlePosition(double,double,Qwt3D::ANCHOR)\0"
    "rely,relx\0setTitlePosition(double,double)\0"
    "rely\0setTitlePosition(double)\0"
    "family,pointSize,weight,italic\0"
    "setTitleFont(QString,int,int,bool)\0"
    "family,pointSize,weight\0"
    "setTitleFont(QString,int,int)\0"
    "family,pointSize\0setTitleFont(QString,int)\0"
    "createData()\0createEnrichments()\0"
};

void Qwt3D::Curve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Curve *_t = static_cast<Curve *>(_o);
        switch (_id) {
        case 0: _t->resolutionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updatePlotData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updatePlot(); break;
        case 3: _t->readInFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setResolution((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setPlotStyle((*reinterpret_cast< Qwt3D::PLOTSTYLE(*)>(_a[1]))); break;
        case 6: _t->setPlotStyle((*reinterpret_cast< Qwt3D::Enrichment(*)>(_a[1]))); break;
        case 7: _t->setPolygonOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setFloorStyle((*reinterpret_cast< Qwt3D::FLOORSTYLE(*)>(_a[1]))); break;
        case 9: _t->setShading((*reinterpret_cast< Qwt3D::SHADINGSTYLE(*)>(_a[1]))); break;
        case 10: _t->setIsolines((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 11: _t->updateColorLegend((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->showColorLegend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->showNormals((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setNormalLength((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->setNormalQuality((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->setSmoothMesh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->setMeshColor((*reinterpret_cast< Qwt3D::RGBA(*)>(_a[1]))); break;
        case 18: _t->setMeshLineWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->setDataColor((*reinterpret_cast< Color*(*)>(_a[1]))); break;
        case 20: _t->setDataProjection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->setDataProjection(); break;
        case 22: _t->setProjection((*reinterpret_cast< Qwt3D::PROJECTMODE(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: _t->setProjection((*reinterpret_cast< Qwt3D::PROJECTMODE(*)>(_a[1]))); break;
        case 24: _t->setTitleColor((*reinterpret_cast< Qwt3D::RGBA(*)>(_a[1]))); break;
        case 25: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->setTitlePosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< Qwt3D::ANCHOR(*)>(_a[3]))); break;
        case 27: _t->setTitlePosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 28: _t->setTitlePosition((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 29: _t->setTitleFont((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 30: _t->setTitleFont((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 31: _t->setTitleFont((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->createData(); break;
        case 33: _t->createEnrichments(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Qwt3D::Curve::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Qwt3D::Curve::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qwt3D__Curve,
      qt_meta_data_Qwt3D__Curve, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Qwt3D::Curve::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Qwt3D::Curve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Qwt3D::Curve::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Qwt3D__Curve))
        return static_cast<void*>(const_cast< Curve*>(this));
    return QObject::qt_metacast(_clname);
}

int Qwt3D::Curve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void Qwt3D::Curve::resolutionChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qwt3D::Curve::updatePlotData(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qwt3D::Curve::updatePlot()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Qwt3D::Curve::readInFinished(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
