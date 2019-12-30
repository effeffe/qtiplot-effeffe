/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.20
 */

#include "sipAPIqti.h"

#line 586 "src/scripting/qti.sip"
#include "src/ArrowMarker.h"
#line 12 "../tmp/qtiplot/sipqtiArrowMarker.cpp"

#line 26 "/usr/share/sip/PyQt4/QtGui/qcolor.sip"
#include <qcolor.h>
#line 16 "../tmp/qtiplot/sipqtiArrowMarker.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 19 "../tmp/qtiplot/sipqtiArrowMarker.cpp"


extern "C" {static PyObject *meth_ArrowMarker_setStart(PyObject *, PyObject *);}
static PyObject *meth_ArrowMarker_setStart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;
        double a1;
         ::ArrowMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_ArrowMarker, &sipCpp, &a0, &a1))
        {
            sipCpp->setStartPoint(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ArrowMarker, sipName_setStart, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ArrowMarker_setEnd(PyObject *, PyObject *);}
static PyObject *meth_ArrowMarker_setEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        double a0;
        double a1;
         ::ArrowMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_ArrowMarker, &sipCpp, &a0, &a1))
        {
            sipCpp->setEndPoint(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ArrowMarker, sipName_setEnd, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ArrowMarker_setStyle(PyObject *, PyObject *);}
static PyObject *meth_ArrowMarker_setStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Qt::PenStyle a0;
         ::ArrowMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_ArrowMarker, &sipCpp, sipType_Qt_PenStyle, &a0))
        {
            sipCpp->setStyle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ArrowMarker, sipName_setStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ArrowMarker_setColor(PyObject *, PyObject *);}
static PyObject *meth_ArrowMarker_setColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QColor* a0;
        int a0State = 0;
         ::ArrowMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_ArrowMarker, &sipCpp, sipType_QColor, &a0, &a0State))
        {
            sipCpp->setColor(*a0);
            sipReleaseType(const_cast< ::QColor *>(a0),sipType_QColor,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ArrowMarker, sipName_setColor, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ArrowMarker_setWidth(PyObject *, PyObject *);}
static PyObject *meth_ArrowMarker_setWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::ArrowMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_ArrowMarker, &sipCpp, &a0))
        {
            sipCpp->setWidth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ArrowMarker, sipName_setWidth, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ArrowMarker_drawStartArrow(PyObject *, PyObject *);}
static PyObject *meth_ArrowMarker_drawStartArrow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0 = 1;
         ::ArrowMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|b", &sipSelf, sipType_ArrowMarker, &sipCpp, &a0))
        {
            sipCpp->drawStartArrow(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ArrowMarker, sipName_drawStartArrow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ArrowMarker_drawEndArrow(PyObject *, PyObject *);}
static PyObject *meth_ArrowMarker_drawEndArrow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0 = 1;
         ::ArrowMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|b", &sipSelf, sipType_ArrowMarker, &sipCpp, &a0))
        {
            sipCpp->drawEndArrow(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ArrowMarker, sipName_drawEndArrow, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ArrowMarker_setHeadLength(PyObject *, PyObject *);}
static PyObject *meth_ArrowMarker_setHeadLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::ArrowMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_ArrowMarker, &sipCpp, &a0))
        {
            sipCpp->setHeadLength(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ArrowMarker, sipName_setHeadLength, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ArrowMarker_setHeadAngle(PyObject *, PyObject *);}
static PyObject *meth_ArrowMarker_setHeadAngle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::ArrowMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_ArrowMarker, &sipCpp, &a0))
        {
            sipCpp->setHeadAngle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ArrowMarker, sipName_setHeadAngle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ArrowMarker_fillArrowHead(PyObject *, PyObject *);}
static PyObject *meth_ArrowMarker_fillArrowHead(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0 = 1;
         ::ArrowMarker *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|b", &sipSelf, sipType_ArrowMarker, &sipCpp, &a0))
        {
            sipCpp->fillArrowHead(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ArrowMarker, sipName_fillArrowHead, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_ArrowMarker(void *, int);}
static void release_ArrowMarker(void *sipCppV, int)
{
    delete reinterpret_cast< ::ArrowMarker *>(sipCppV);
}


extern "C" {static void dealloc_ArrowMarker(sipSimpleWrapper *);}
static void dealloc_ArrowMarker(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_ArrowMarker(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_ArrowMarker(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_ArrowMarker(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::ArrowMarker *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::ArrowMarker();

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_ArrowMarker[] = {
    {SIP_MLNAME_CAST(sipName_drawEndArrow), meth_ArrowMarker_drawEndArrow, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_drawStartArrow), meth_ArrowMarker_drawStartArrow, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_fillArrowHead), meth_ArrowMarker_fillArrowHead, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setColor), meth_ArrowMarker_setColor, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setEnd), meth_ArrowMarker_setEnd, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setHeadAngle), meth_ArrowMarker_setHeadAngle, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setHeadLength), meth_ArrowMarker_setHeadLength, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setStart), meth_ArrowMarker_setStart, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setStyle), meth_ArrowMarker_setStyle, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setWidth), meth_ArrowMarker_setWidth, METH_VARARGS, SIP_NULLPTR}
};


static pyqt4ClassPluginDef plugin_ArrowMarker = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_qti_ArrowMarker = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_ArrowMarker,
        {SIP_NULLPTR},
        &plugin_ArrowMarker
    },
    {
        sipNameNr_ArrowMarker,
        {0, 0, 1},
        10, methods_ArrowMarker,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_ArrowMarker,
    SIP_NULLPTR,
    SIP_NULLPTR,
#if PY_MAJOR_VERSION >= 3
    SIP_NULLPTR,
    SIP_NULLPTR,
#else
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
#endif
    dealloc_ArrowMarker,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_ArrowMarker,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
