/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.20
 */

#include "sipAPIqti.h"

#line 60 "src/scripting/qti.sip"
#include "core/AbstractAspect.h"
#line 12 "./sipqtiAbstractAspect.cpp"

#line 27 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 16 "./sipqtiAbstractAspect.cpp"
#line 397 "/usr/share/sip/PyQt4/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 19 "./sipqtiAbstractAspect.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qicon.sip"
#include <qicon.h>
#line 22 "./sipqtiAbstractAspect.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 25 "./sipqtiAbstractAspect.cpp"
#line 368 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 28 "./sipqtiAbstractAspect.cpp"
#line 351 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 31 "./sipqtiAbstractAspect.cpp"
#line 29 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 34 "./sipqtiAbstractAspect.cpp"
#line 265 "/usr/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 37 "./sipqtiAbstractAspect.cpp"
#line 28 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 40 "./sipqtiAbstractAspect.cpp"
#line 32 "/usr/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 43 "./sipqtiAbstractAspect.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 46 "./sipqtiAbstractAspect.cpp"
#line 115 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 49 "./sipqtiAbstractAspect.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 52 "./sipqtiAbstractAspect.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 55 "./sipqtiAbstractAspect.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 58 "./sipqtiAbstractAspect.cpp"


extern "C" {static PyObject *meth_AbstractAspect_index(PyObject *, PyObject *);}
static PyObject *meth_AbstractAspect_index(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::AbstractAspect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_AbstractAspect, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->index();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AbstractAspect, sipName_index, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_AbstractAspect_icon(PyObject *, PyObject *);}
static PyObject *meth_AbstractAspect_icon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::AbstractAspect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_AbstractAspect, &sipCpp))
        {
             ::QIcon*sipRes;

            sipRes = new  ::QIcon(sipCpp->icon());

            return sipConvertFromNewType(sipRes,sipType_QIcon,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AbstractAspect, sipName_icon, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_AbstractAspect_name(PyObject *, PyObject *);}
static PyObject *meth_AbstractAspect_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::AbstractAspect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_AbstractAspect, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AbstractAspect, sipName_name, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_AbstractAspect_comment(PyObject *, PyObject *);}
static PyObject *meth_AbstractAspect_comment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::AbstractAspect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_AbstractAspect, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->comment());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AbstractAspect, sipName_comment, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_AbstractAspect_captionSpec(PyObject *, PyObject *);}
static PyObject *meth_AbstractAspect_captionSpec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::AbstractAspect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_AbstractAspect, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->captionSpec());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AbstractAspect, sipName_captionSpec, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_AbstractAspect_creationTime(PyObject *, PyObject *);}
static PyObject *meth_AbstractAspect_creationTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::AbstractAspect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_AbstractAspect, &sipCpp))
        {
             ::QDateTime*sipRes;

            sipRes = new  ::QDateTime(sipCpp->creationTime());

            return sipConvertFromNewType(sipRes,sipType_QDateTime,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AbstractAspect, sipName_creationTime, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_AbstractAspect_caption(PyObject *, PyObject *);}
static PyObject *meth_AbstractAspect_caption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::AbstractAspect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_AbstractAspect, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->caption());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AbstractAspect, sipName_caption, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_AbstractAspect_setName(PyObject *, PyObject *);}
static PyObject *meth_AbstractAspect_setName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::AbstractAspect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_AbstractAspect, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setName(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AbstractAspect, sipName_setName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_AbstractAspect_setComment(PyObject *, PyObject *);}
static PyObject *meth_AbstractAspect_setComment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::AbstractAspect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_AbstractAspect, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setComment(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AbstractAspect, sipName_setComment, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_AbstractAspect_setCaptionSpec(PyObject *, PyObject *);}
static PyObject *meth_AbstractAspect_setCaptionSpec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::AbstractAspect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_AbstractAspect, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setCaptionSpec(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AbstractAspect, sipName_setCaptionSpec, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_AbstractAspect_remove(PyObject *, PyObject *);}
static PyObject *meth_AbstractAspect_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::AbstractAspect *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_AbstractAspect, &sipCpp))
        {
            sipCpp->remove();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_AbstractAspect, sipName_remove, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_AbstractAspect(void *, const sipTypeDef *);}
static void *cast_AbstractAspect(void *sipCppV, const sipTypeDef *targetType)
{
     ::AbstractAspect *sipCpp = reinterpret_cast< ::AbstractAspect *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_AbstractAspect(void *, int);}
static void release_AbstractAspect(void *sipCppV, int)
{
     ::AbstractAspect *sipCpp = reinterpret_cast< ::AbstractAspect *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_AbstractAspect(sipSimpleWrapper *);}
static void dealloc_AbstractAspect(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_AbstractAspect(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_AbstractAspect[] = {{5, 0, 1}};


static PyMethodDef methods_AbstractAspect[] = {
    {SIP_MLNAME_CAST(sipName_caption), meth_AbstractAspect_caption, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_captionSpec), meth_AbstractAspect_captionSpec, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_comment), meth_AbstractAspect_comment, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_creationTime), meth_AbstractAspect_creationTime, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_icon), meth_AbstractAspect_icon, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_index), meth_AbstractAspect_index, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_name), meth_AbstractAspect_name, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_remove), meth_AbstractAspect_remove, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setCaptionSpec), meth_AbstractAspect_setCaptionSpec, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setComment), meth_AbstractAspect_setComment, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setName), meth_AbstractAspect_setName, METH_VARARGS, SIP_NULLPTR}
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_AbstractAspect[] = {
    {"statusInfo(QString)", SIP_NULLPTR, SIP_NULLPTR, 0},
    {"aspectRemoved(const AbstractAspect*,int)", SIP_NULLPTR, SIP_NULLPTR, 0},
    {"aspectAboutToBeRemoved(const AbstractAspect*)", SIP_NULLPTR, SIP_NULLPTR, 0},
    {"aspectAboutToBeRemoved(const AbstractAspect*,int)", SIP_NULLPTR, SIP_NULLPTR, 0},
    {"aspectAdded(const AbstractAspect*)", SIP_NULLPTR, SIP_NULLPTR, 0},
    {"aspectAdded(const AbstractAspect*,int)", SIP_NULLPTR, SIP_NULLPTR, 0},
    {"aspectAboutToBeAdded(const AbstractAspect*,int)", SIP_NULLPTR, SIP_NULLPTR, 0},
    {"aspectDescriptionChanged(const AbstractAspect*)", SIP_NULLPTR, SIP_NULLPTR, 0},
    {"aspectDescriptionAboutToChange(const AbstractAspect*)", SIP_NULLPTR, SIP_NULLPTR, 0},
    {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, 0}
};


static pyqt4ClassPluginDef plugin_AbstractAspect = {
    & ::AbstractAspect::staticMetaObject,
    0,
    signals_AbstractAspect
};


sipClassTypeDef sipTypeDef_qti_AbstractAspect = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_AbstractAspect,
        {SIP_NULLPTR},
        &plugin_AbstractAspect
    },
    {
        sipNameNr_AbstractAspect,
        {0, 0, 1},
        11, methods_AbstractAspect,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_AbstractAspect,
    SIP_NULLPTR,
    SIP_NULLPTR,
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
    dealloc_AbstractAspect,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_AbstractAspect,
    cast_AbstractAspect,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
