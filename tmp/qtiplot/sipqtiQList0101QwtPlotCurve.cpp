/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.20
 */

#include "sipAPIqti.h"

#line 115 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 12 "../tmp/qtiplot/sipqtiQList0101QwtPlotCurve.cpp"

#line 743 "src/scripting/qti.sip"
#include <qwt_plot_curve.h>
#include "Graph.h"
#line 17 "../tmp/qtiplot/sipqtiQList0101QwtPlotCurve.cpp"


extern "C" {static void assign_QList_0101QwtPlotCurve(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0101QwtPlotCurve(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QList< ::QwtPlotCurve*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QList< ::QwtPlotCurve*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QwtPlotCurve(SIP_SSIZE_T);}
static void *array_QList_0101QwtPlotCurve(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QwtPlotCurve*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QwtPlotCurve(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QwtPlotCurve(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QwtPlotCurve*>(reinterpret_cast<const QList< ::QwtPlotCurve*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QwtPlotCurve(void *, int);}
static void release_QList_0101QwtPlotCurve(void *ptr, int)
{
    delete reinterpret_cast<QList< ::QwtPlotCurve*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QwtPlotCurve(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QwtPlotCurve(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QwtPlotCurve*> **sipCppPtr = reinterpret_cast<QList< ::QwtPlotCurve*> **>(sipCppPtrV);

#line 145 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QwtPlotCurve, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QwtPlotCurve *> *ql = new QList<QwtPlotCurve *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QwtPlotCurve *t = reinterpret_cast<QwtPlotCurve *>(sipConvertToType(itm, sipType_QwtPlotCurve, sipTransferObj, 0, 0, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            delete ql;
            return 0;
        }

        ql->append(t);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 100 "../tmp/qtiplot/sipqtiQList0101QwtPlotCurve.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QwtPlotCurve(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QwtPlotCurve(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QwtPlotCurve*> *sipCpp = reinterpret_cast<QList< ::QwtPlotCurve*> *>(sipCppV);

#line 119 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QwtPlotCurve *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows QwtPlotCurve to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_QwtPlotCurve, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 133 "../tmp/qtiplot/sipqtiQList0101QwtPlotCurve.cpp"
}


sipMappedTypeDef sipTypeDef_qti_QList_0101QwtPlotCurve = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_466,     /* QList<QwtPlotCurve*> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0101QwtPlotCurve,
    array_QList_0101QwtPlotCurve,
    copy_QList_0101QwtPlotCurve,
    release_QList_0101QwtPlotCurve,
    convertTo_QList_0101QwtPlotCurve,
    convertFrom_QList_0101QwtPlotCurve
};