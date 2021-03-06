/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.20
 */

#include "sipAPIqti.h"

#line 1791 "src/scripting/qti.sip"
#include "src/SmoothFilter.h"
#line 12 "./sipqtiSmoothFilter.cpp"

#line 1160 "src/scripting/qti.sip"
#include "src/ApplicationWindow.h"
#include "src/ColorButton.h"
#include <qwt_symbol.h>
#line 18 "./sipqtiSmoothFilter.cpp"
#line 908 "src/scripting/qti.sip"
#include "src/Graph.h"
#include "src/Legend.h"
#include "src/ColorButton.h"
#include "src/FunctionCurve.h"
#include "src/DataPointPicker.h"
#include <qwt_plot_canvas.h>
#line 26 "./sipqtiSmoothFilter.cpp"
#line 27 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 29 "./sipqtiSmoothFilter.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 32 "./sipqtiSmoothFilter.cpp"
#line 368 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 35 "./sipqtiSmoothFilter.cpp"
#line 351 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 38 "./sipqtiSmoothFilter.cpp"
#line 29 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 41 "./sipqtiSmoothFilter.cpp"
#line 265 "/usr/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 44 "./sipqtiSmoothFilter.cpp"
#line 28 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 47 "./sipqtiSmoothFilter.cpp"
#line 32 "/usr/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 50 "./sipqtiSmoothFilter.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 53 "./sipqtiSmoothFilter.cpp"
#line 115 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 56 "./sipqtiSmoothFilter.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 59 "./sipqtiSmoothFilter.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 62 "./sipqtiSmoothFilter.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 65 "./sipqtiSmoothFilter.cpp"


class sipSmoothFilter : public  ::SmoothFilter
{
public:
    sipSmoothFilter( ::ApplicationWindow*, ::Graph*,const  ::QString&,int);
    sipSmoothFilter( ::ApplicationWindow*, ::Graph*,const  ::QString&,double,double,int);
    virtual ~sipSmoothFilter();

    int qt_metacall(QMetaObject::Call, int, void **) SIP_OVERRIDE;
    void *qt_metacast(const char *) SIP_OVERRIDE;
    const QMetaObject *metaObject() const SIP_OVERRIDE;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
     ::QObject* sipProtect_sender() const;
    int sipProtect_receivers(const char*) const;
    void sipProtectVirt_timerEvent(bool, ::QTimerEvent*);
    void sipProtectVirt_childEvent(bool, ::QChildEvent*);
    void sipProtectVirt_customEvent(bool, ::QEvent*);
    void sipProtectVirt_connectNotify(bool,const char*);
    void sipProtectVirt_disconnectNotify(bool,const char*);
    int sipProtect_senderSignalIndex() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const char*) SIP_OVERRIDE;
    void connectNotify(const char*) SIP_OVERRIDE;
    void customEvent( ::QEvent*) SIP_OVERRIDE;
    void childEvent( ::QChildEvent*) SIP_OVERRIDE;
    void timerEvent( ::QTimerEvent*) SIP_OVERRIDE;
    bool eventFilter( ::QObject*, ::QEvent*) SIP_OVERRIDE;
    bool event( ::QEvent*) SIP_OVERRIDE;
    bool run() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipSmoothFilter(const sipSmoothFilter &);
    sipSmoothFilter &operator = (const sipSmoothFilter &);

    char sipPyMethods[8];
};

sipSmoothFilter::sipSmoothFilter( ::ApplicationWindow*a0, ::Graph*a1,const  ::QString& a2,int a3):  ::SmoothFilter(a0,a1,a2,a3), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipSmoothFilter::sipSmoothFilter( ::ApplicationWindow*a0, ::Graph*a1,const  ::QString& a2,double a3,double a4,int a5):  ::SmoothFilter(a0,a1,a2,a3,a4,a5), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipSmoothFilter::~sipSmoothFilter()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipSmoothFilter::metaObject() const
{
    return sip_qti_qt_metaobject(sipPySelf,sipType_SmoothFilter);
}

int sipSmoothFilter::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::SmoothFilter::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_qti_qt_metacall(sipPySelf,sipType_SmoothFilter,_c,_id,_a);

    return _id;
}

void *sipSmoothFilter::qt_metacast(const char *_clname)
{
    return (sip_qti_qt_metacast(sipPySelf, sipType_SmoothFilter, _clname)) ? this :  ::SmoothFilter::qt_metacast(_clname);
}

void sipSmoothFilter::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::SmoothFilter::disconnectNotify(a0);
        return;
    }

    extern void sipVH_qti_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_qti_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipSmoothFilter::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_connectNotify);

    if (!sipMeth)
    {
         ::SmoothFilter::connectNotify(a0);
        return;
    }

    extern void sipVH_qti_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_qti_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipSmoothFilter::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_customEvent);

    if (!sipMeth)
    {
         ::SmoothFilter::customEvent(a0);
        return;
    }

    extern void sipVH_qti_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_qti_1(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipSmoothFilter::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_childEvent);

    if (!sipMeth)
    {
         ::SmoothFilter::childEvent(a0);
        return;
    }

    extern void sipVH_qti_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_qti_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipSmoothFilter::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,SIP_NULLPTR,sipName_timerEvent);

    if (!sipMeth)
    {
         ::SmoothFilter::timerEvent(a0);
        return;
    }

    extern void sipVH_qti_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_qti_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipSmoothFilter::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,SIP_NULLPTR,sipName_eventFilter);

    if (!sipMeth)
        return  ::SmoothFilter::eventFilter(a0,a1);

    extern bool sipVH_qti_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_qti_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipSmoothFilter::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,SIP_NULLPTR,sipName_event);

    if (!sipMeth)
        return  ::SmoothFilter::event(a0);

    extern bool sipVH_qti_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_qti_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipSmoothFilter::run()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,SIP_NULLPTR,sipName_run);

    if (!sipMeth)
        return  ::SmoothFilter::run();

    extern bool sipVH_qti_43(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_qti_43(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QObject* sipSmoothFilter::sipProtect_sender() const
{
    return  ::QObject::sender();
}

int sipSmoothFilter::sipProtect_receivers(const char*a0) const
{
    return  ::QObject::receivers(a0);
}

void sipSmoothFilter::sipProtectVirt_timerEvent(bool sipSelfWasArg, ::QTimerEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::timerEvent(a0) : timerEvent(a0));
}

void sipSmoothFilter::sipProtectVirt_childEvent(bool sipSelfWasArg, ::QChildEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::childEvent(a0) : childEvent(a0));
}

void sipSmoothFilter::sipProtectVirt_customEvent(bool sipSelfWasArg, ::QEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::customEvent(a0) : customEvent(a0));
}

void sipSmoothFilter::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char*a0)
{
    (sipSelfWasArg ?  ::QObject::connectNotify(a0) : connectNotify(a0));
}

void sipSmoothFilter::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char*a0)
{
    (sipSelfWasArg ?  ::QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipSmoothFilter::sipProtect_senderSignalIndex() const
{
    return  ::QObject::senderSignalIndex();
}


extern "C" {static PyObject *meth_SmoothFilter_sender(PyObject *, PyObject *);}
static PyObject *meth_SmoothFilter_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const sipSmoothFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_SmoothFilter, &sipCpp))
        {
             ::QObject*sipRes = 0;

#line 678 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
        typedef QObject *(*helper_func)(QObject *);
        
        static helper_func helper = 0;
        
        if (!helper)
        {
            helper = (helper_func)sipImportSymbol("qpycore_qobject_sender");
            Q_ASSERT(helper);
        }
        
        // sender() must be called without the GIL to avoid possible deadlocks between
        // the GIL and Qt's internal thread data mutex.
        
        Py_BEGIN_ALLOW_THREADS
        
        #if defined(SIP_PROTECTED_IS_PUBLIC)
        sipRes = sipCpp->sender();
        #else
        sipRes = sipCpp->sipProtect_sender();
        #endif
        
        Py_END_ALLOW_THREADS
        
        sipRes = helper(sipRes);
#line 364 "./sipqtiSmoothFilter.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SmoothFilter, sipName_sender, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_SmoothFilter_receivers(PyObject *, PyObject *);}
static PyObject *meth_SmoothFilter_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        const sipSmoothFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_SmoothFilter, &sipCpp, &a0))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 706 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
        // We need to take into account any proxies for Python signals. Import the
        // helpers if it hasn't already been done.
        typedef const char *(*pyqt4_get_signal_t)(PyObject *);
        typedef int (*receivers_helper_func)(QObject *, const char *, int);
        
        static pyqt4_get_signal_t pyqt4_get_signal = 0;
        static receivers_helper_func receivers_helper = 0;
        
        if (!pyqt4_get_signal)
        {
            pyqt4_get_signal = (pyqt4_get_signal_t)sipImportSymbol("pyqt4_get_signal");
            Q_ASSERT(pyqt4_get_signal);
        }
        
        if (!receivers_helper)
        {
            receivers_helper = (receivers_helper_func)sipImportSymbol("qpycore_qobject_receivers");
            Q_ASSERT(receivers_helper);
        }
        
        // PyQt5: Get rid of the const casts.
        const char *sig = pyqt4_get_signal(a0);
            
        if (sig)
        {
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            sipRes = receivers_helper(const_cast<QObject *>(sipCpp), sig, sipCpp->receivers(sig));
        #else
            sipRes = receivers_helper(const_cast<QObject *>(static_cast<const QObject *>(sipCpp)), sig, sipCpp->sipProtect_receivers(sig));
        #endif
        }
        else
        {
            sipError = sipBadCallableArg(0, a0);
        }
#line 427 "./sipqtiSmoothFilter.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return SIPLong_FromLong(sipRes);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SmoothFilter, sipName_receivers, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_SmoothFilter_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_SmoothFilter_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QTimerEvent* a0;
        sipSmoothFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_SmoothFilter, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SmoothFilter, sipName_timerEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_SmoothFilter_childEvent(PyObject *, PyObject *);}
static PyObject *meth_SmoothFilter_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QChildEvent* a0;
        sipSmoothFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_SmoothFilter, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SmoothFilter, sipName_childEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_SmoothFilter_customEvent(PyObject *, PyObject *);}
static PyObject *meth_SmoothFilter_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QEvent* a0;
        sipSmoothFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_SmoothFilter, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SmoothFilter, sipName_customEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_SmoothFilter_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_SmoothFilter_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        PyObject * a0;
        sipSmoothFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_SmoothFilter, &sipCpp, &a0))
        {
            sipErrorState sipError = sipErrorNone;

#line 752 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
        typedef const char *(*pyqt4_get_signal_t)(PyObject *);
        
        static pyqt4_get_signal_t pyqt4_get_signal = 0;
        
        if (!pyqt4_get_signal)
        {
            pyqt4_get_signal = (pyqt4_get_signal_t)sipImportSymbol("pyqt4_get_signal");
            Q_ASSERT(pyqt4_get_signal);
        }
        
        const char *sig = pyqt4_get_signal(a0);
            
        if (sig)
        {
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            (sipSelfWasArg ? sipCpp->QObject::connectNotify(sig) : sipCpp->connectNotify(sig));
        #else
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg, sig);
        #endif
        }
        else
        {
            sipError = sipBadCallableArg(0, a0);
        }
#line 565 "./sipqtiSmoothFilter.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            Py_INCREF(Py_None);
            return Py_None;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SmoothFilter, sipName_connectNotify, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_SmoothFilter_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_SmoothFilter_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        PyObject * a0;
        sipSmoothFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_SmoothFilter, &sipCpp, &a0))
        {
            sipErrorState sipError = sipErrorNone;

#line 785 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
        typedef const char *(*pyqt4_get_signal_t)(PyObject *);
        
        static pyqt4_get_signal_t pyqt4_get_signal = 0;
        
        if (!pyqt4_get_signal)
        {
            pyqt4_get_signal = (pyqt4_get_signal_t)sipImportSymbol("pyqt4_get_signal");
            Q_ASSERT(pyqt4_get_signal);
        }
        
        const char *sig = pyqt4_get_signal(a0);
            
        if (sig)
        {
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            (sipSelfWasArg ? sipCpp->QObject::disconnectNotify(sig) : sipCpp->disconnectNotify(sig));
        #else
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg, sig);
        #endif
        }
        else
        {
            sipError = sipBadCallableArg(0, a0);
        }
#line 626 "./sipqtiSmoothFilter.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            Py_INCREF(Py_None);
            return Py_None;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SmoothFilter, sipName_disconnectNotify, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_SmoothFilter_senderSignalIndex(PyObject *, PyObject *);}
static PyObject *meth_SmoothFilter_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const sipSmoothFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_SmoothFilter, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SmoothFilter, sipName_senderSignalIndex, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_SmoothFilter_setMethod(PyObject *, PyObject *);}
static PyObject *meth_SmoothFilter_setMethod(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::SmoothFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_SmoothFilter, &sipCpp, &a0))
        {
            sipCpp->setMethod(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::SmoothFilter::SmoothMethod a0;
         ::SmoothFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BXE", &sipSelf, sipType_SmoothFilter, &sipCpp, sipType_SmoothFilter_SmoothMethod, &a0))
        {
            sipCpp->setMethod(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SmoothFilter, sipName_setMethod, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_SmoothFilter_setSmoothPoints(PyObject *, PyObject *);}
static PyObject *meth_SmoothFilter_setSmoothPoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        int a1 = 0;
         ::SmoothFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi|i", &sipSelf, sipType_SmoothFilter, &sipCpp, &a0, &a1))
        {
            sipCpp->setSmoothPoints(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SmoothFilter, sipName_setSmoothPoints, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_SmoothFilter_setPolynomOrder(PyObject *, PyObject *);}
static PyObject *meth_SmoothFilter_setPolynomOrder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::SmoothFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_SmoothFilter, &sipCpp, &a0))
        {
            sipCpp->setPolynomOrder(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SmoothFilter, sipName_setPolynomOrder, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_SmoothFilter_run(PyObject *, PyObject *);}
static PyObject *meth_SmoothFilter_run(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::SmoothFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_SmoothFilter, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::SmoothFilter::run() : sipCpp->run());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SmoothFilter, sipName_run, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_SmoothFilter(void *, const sipTypeDef *);}
static void *cast_SmoothFilter(void *sipCppV, const sipTypeDef *targetType)
{
     ::SmoothFilter *sipCpp = reinterpret_cast< ::SmoothFilter *>(sipCppV);

    if (targetType == sipType_Filter)
        return static_cast< ::Filter *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_SmoothFilter(void *, int);}
static void release_SmoothFilter(void *sipCppV, int)
{
     ::SmoothFilter *sipCpp = reinterpret_cast< ::SmoothFilter *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_SmoothFilter(sipSimpleWrapper *);}
static void dealloc_SmoothFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipSmoothFilter *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_SmoothFilter(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_SmoothFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_SmoothFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipSmoothFilter *sipCpp = SIP_NULLPTR;

    {
         ::ApplicationWindow* a0;
         ::Graph* a1;
        const  ::QString* a2;
        int a2State = 0;
        int a3 = 3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "JHJ8J1|i", sipType_ApplicationWindow, &a0, sipOwner, sipType_Graph, &a1, sipType_QString,&a2, &a2State, &a3))
        {
            sipCpp = new sipSmoothFilter(a0,a1,*a2,a3);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::ApplicationWindow* a0;
         ::Graph* a1;
        const  ::QString* a2;
        int a2State = 0;
        double a3;
        double a4;
        int a5 = 3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "JHJ8J1dd|i", sipType_ApplicationWindow, &a0, sipOwner, sipType_Graph, &a1, sipType_QString,&a2, &a2State, &a3, &a4, &a5))
        {
            sipCpp = new sipSmoothFilter(a0,a1,*a2,a3,a4,a5);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::Graph* a0;
        const  ::QString* a1;
        int a1State = 0;
        int a2 = 3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J8J1|i", sipType_Graph, &a0, sipType_QString,&a1, &a1State, &a2))
        {
#line 1800 "src/scripting/qti.sip"
  SIPSCIDAVIS_APP(new sipSmoothFilter(app, a0, *a1, a2))
#line 883 "./sipqtiSmoothFilter.cpp"
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::Graph* a0;
        const  ::QString* a1;
        int a1State = 0;
        double a2;
        double a3;
        int a4 = 3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J8J1dd|i", sipType_Graph, &a0, sipType_QString,&a1, &a1State, &a2, &a3, &a4))
        {
#line 1804 "src/scripting/qti.sip"
  SIPSCIDAVIS_APP(new sipSmoothFilter(app, a0, *a1, a2, a3, a4))
#line 904 "./sipqtiSmoothFilter.cpp"
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_SmoothFilter[] = {{12, 255, 1}};


static PyMethodDef methods_SmoothFilter[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_SmoothFilter_childEvent, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_SmoothFilter_connectNotify, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_SmoothFilter_customEvent, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_SmoothFilter_disconnectNotify, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_receivers), meth_SmoothFilter_receivers, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_run), meth_SmoothFilter_run, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_sender), meth_SmoothFilter_sender, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), meth_SmoothFilter_senderSignalIndex, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setMethod), meth_SmoothFilter_setMethod, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setPolynomOrder), meth_SmoothFilter_setPolynomOrder, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setSmoothPoints), meth_SmoothFilter_setSmoothPoints, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_SmoothFilter_timerEvent, METH_VARARGS, SIP_NULLPTR}
};

static sipEnumMemberDef enummembers_SmoothFilter[] = {
    {sipName_Average, static_cast<int>( ::SmoothFilter::Average), 54},
    {sipName_FFT, static_cast<int>( ::SmoothFilter::FFT), 54},
    {sipName_SavitzkyGolay, static_cast<int>( ::SmoothFilter::SavitzkyGolay), 54},
};


static pyqt4ClassPluginDef plugin_SmoothFilter = {
    & ::SmoothFilter::staticMetaObject,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_qti_SmoothFilter = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_SmoothFilter,
        {SIP_NULLPTR},
        &plugin_SmoothFilter
    },
    {
        sipNameNr_SmoothFilter,
        {0, 0, 1},
        12, methods_SmoothFilter,
        3, enummembers_SmoothFilter,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_SmoothFilter,
    SIP_NULLPTR,
    init_type_SmoothFilter,
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
    dealloc_SmoothFilter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_SmoothFilter,
    cast_SmoothFilter,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
