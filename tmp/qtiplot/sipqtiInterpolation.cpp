/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.20
 */

#include "sipAPIqti.h"

#line 1767 "src/scripting/qti.sip"
#include "src/Interpolation.h"
#line 12 "../tmp/qtiplot/sipqtiInterpolation.cpp"

#line 1160 "src/scripting/qti.sip"
#include "src/core/ApplicationWindow.h"
#include "src/lib/include/ColorButton.h"
#include <qwt_symbol.h>
#line 18 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 908 "src/scripting/qti.sip"
#include "src/Graph.h"
#include "src/Legend.h"
#include "src/lib/include/ColorButton.h"
#include "src/FunctionCurve.h"
#include "src/DataPointPicker.h"
#include <qwt_plot_canvas.h>
#line 26 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 27 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 29 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 32 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 368 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 35 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 351 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 38 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 29 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 41 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 265 "/usr/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 44 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 28 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 47 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 32 "/usr/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 50 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 53 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 115 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 56 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 59 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 62 "../tmp/qtiplot/sipqtiInterpolation.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 65 "../tmp/qtiplot/sipqtiInterpolation.cpp"


class sipInterpolation : public  ::Interpolation
{
public:
    sipInterpolation( ::ApplicationWindow*, ::Graph*,const  ::QString&,int);
    sipInterpolation( ::ApplicationWindow*, ::Graph*,const  ::QString&,double,double,int);
    virtual ~sipInterpolation();

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
    sipInterpolation(const sipInterpolation &);
    sipInterpolation &operator = (const sipInterpolation &);

    char sipPyMethods[8];
};

sipInterpolation::sipInterpolation( ::ApplicationWindow*a0, ::Graph*a1,const  ::QString& a2,int a3):  ::Interpolation(a0,a1,a2,a3), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipInterpolation::sipInterpolation( ::ApplicationWindow*a0, ::Graph*a1,const  ::QString& a2,double a3,double a4,int a5):  ::Interpolation(a0,a1,a2,a3,a4,a5), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipInterpolation::~sipInterpolation()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipInterpolation::metaObject() const
{
    return sip_qti_qt_metaobject(sipPySelf,sipType_Interpolation);
}

int sipInterpolation::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::Interpolation::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_qti_qt_metacall(sipPySelf,sipType_Interpolation,_c,_id,_a);

    return _id;
}

void *sipInterpolation::qt_metacast(const char *_clname)
{
    return (sip_qti_qt_metacast(sipPySelf, sipType_Interpolation, _clname)) ? this :  ::Interpolation::qt_metacast(_clname);
}

void sipInterpolation::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::Interpolation::disconnectNotify(a0);
        return;
    }

    extern void sipVH_qti_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_qti_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipInterpolation::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_connectNotify);

    if (!sipMeth)
    {
         ::Interpolation::connectNotify(a0);
        return;
    }

    extern void sipVH_qti_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_qti_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipInterpolation::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_customEvent);

    if (!sipMeth)
    {
         ::Interpolation::customEvent(a0);
        return;
    }

    extern void sipVH_qti_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_qti_1(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipInterpolation::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_childEvent);

    if (!sipMeth)
    {
         ::Interpolation::childEvent(a0);
        return;
    }

    extern void sipVH_qti_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_qti_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipInterpolation::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,SIP_NULLPTR,sipName_timerEvent);

    if (!sipMeth)
    {
         ::Interpolation::timerEvent(a0);
        return;
    }

    extern void sipVH_qti_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_qti_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipInterpolation::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,SIP_NULLPTR,sipName_eventFilter);

    if (!sipMeth)
        return  ::Interpolation::eventFilter(a0,a1);

    extern bool sipVH_qti_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_qti_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipInterpolation::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,SIP_NULLPTR,sipName_event);

    if (!sipMeth)
        return  ::Interpolation::event(a0);

    extern bool sipVH_qti_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_qti_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipInterpolation::run()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,SIP_NULLPTR,sipName_run);

    if (!sipMeth)
        return  ::Interpolation::run();

    extern bool sipVH_qti_43(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_qti_43(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QObject* sipInterpolation::sipProtect_sender() const
{
    return  ::QObject::sender();
}

int sipInterpolation::sipProtect_receivers(const char*a0) const
{
    return  ::QObject::receivers(a0);
}

void sipInterpolation::sipProtectVirt_timerEvent(bool sipSelfWasArg, ::QTimerEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::timerEvent(a0) : timerEvent(a0));
}

void sipInterpolation::sipProtectVirt_childEvent(bool sipSelfWasArg, ::QChildEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::childEvent(a0) : childEvent(a0));
}

void sipInterpolation::sipProtectVirt_customEvent(bool sipSelfWasArg, ::QEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::customEvent(a0) : customEvent(a0));
}

void sipInterpolation::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char*a0)
{
    (sipSelfWasArg ?  ::QObject::connectNotify(a0) : connectNotify(a0));
}

void sipInterpolation::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char*a0)
{
    (sipSelfWasArg ?  ::QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipInterpolation::sipProtect_senderSignalIndex() const
{
    return  ::QObject::senderSignalIndex();
}


extern "C" {static PyObject *meth_Interpolation_sender(PyObject *, PyObject *);}
static PyObject *meth_Interpolation_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const sipInterpolation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Interpolation, &sipCpp))
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
#line 364 "../tmp/qtiplot/sipqtiInterpolation.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Interpolation, sipName_sender, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Interpolation_receivers(PyObject *, PyObject *);}
static PyObject *meth_Interpolation_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        const sipInterpolation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_Interpolation, &sipCpp, &a0))
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
#line 427 "../tmp/qtiplot/sipqtiInterpolation.cpp"

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
    sipNoMethod(sipParseErr, sipName_Interpolation, sipName_receivers, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Interpolation_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_Interpolation_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QTimerEvent* a0;
        sipInterpolation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_Interpolation, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Interpolation, sipName_timerEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Interpolation_childEvent(PyObject *, PyObject *);}
static PyObject *meth_Interpolation_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QChildEvent* a0;
        sipInterpolation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_Interpolation, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Interpolation, sipName_childEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Interpolation_customEvent(PyObject *, PyObject *);}
static PyObject *meth_Interpolation_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QEvent* a0;
        sipInterpolation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_Interpolation, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Interpolation, sipName_customEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Interpolation_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_Interpolation_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        PyObject * a0;
        sipInterpolation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_Interpolation, &sipCpp, &a0))
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
#line 565 "../tmp/qtiplot/sipqtiInterpolation.cpp"

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
    sipNoMethod(sipParseErr, sipName_Interpolation, sipName_connectNotify, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Interpolation_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_Interpolation_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        PyObject * a0;
        sipInterpolation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_Interpolation, &sipCpp, &a0))
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
#line 626 "../tmp/qtiplot/sipqtiInterpolation.cpp"

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
    sipNoMethod(sipParseErr, sipName_Interpolation, sipName_disconnectNotify, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Interpolation_senderSignalIndex(PyObject *, PyObject *);}
static PyObject *meth_Interpolation_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const sipInterpolation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Interpolation, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Interpolation, sipName_senderSignalIndex, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Interpolation_setMethod(PyObject *, PyObject *);}
static PyObject *meth_Interpolation_setMethod(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::Interpolation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_Interpolation, &sipCpp, &a0))
        {
            sipCpp->setMethod(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::Interpolation::InterpolationMethod a0;
         ::Interpolation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BXE", &sipSelf, sipType_Interpolation, &sipCpp, sipType_Interpolation_InterpolationMethod, &a0))
        {
            sipCpp->setMethod(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Interpolation, sipName_setMethod, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Interpolation_run(PyObject *, PyObject *);}
static PyObject *meth_Interpolation_run(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::Interpolation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Interpolation, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::Interpolation::run() : sipCpp->run());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Interpolation, sipName_run, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_Interpolation(void *, const sipTypeDef *);}
static void *cast_Interpolation(void *sipCppV, const sipTypeDef *targetType)
{
     ::Interpolation *sipCpp = reinterpret_cast< ::Interpolation *>(sipCppV);

    if (targetType == sipType_Filter)
        return static_cast< ::Filter *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_Interpolation(void *, int);}
static void release_Interpolation(void *sipCppV, int)
{
     ::Interpolation *sipCpp = reinterpret_cast< ::Interpolation *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_Interpolation(sipSimpleWrapper *);}
static void dealloc_Interpolation(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipInterpolation *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_Interpolation(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_Interpolation(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Interpolation(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipInterpolation *sipCpp = SIP_NULLPTR;

    {
         ::ApplicationWindow* a0;
         ::Graph* a1;
        const  ::QString* a2;
        int a2State = 0;
        int a3 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "JHJ8J1|i", sipType_ApplicationWindow, &a0, sipOwner, sipType_Graph, &a1, sipType_QString,&a2, &a2State, &a3))
        {
            sipCpp = new sipInterpolation(a0,a1,*a2,a3);
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
        int a5 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "JHJ8J1dd|i", sipType_ApplicationWindow, &a0, sipOwner, sipType_Graph, &a1, sipType_QString,&a2, &a2State, &a3, &a4, &a5))
        {
            sipCpp = new sipInterpolation(a0,a1,*a2,a3,a4,a5);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::Graph* a0;
        const  ::QString* a1;
        int a1State = 0;
        int a2 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J8J1|i", sipType_Graph, &a0, sipType_QString,&a1, &a1State, &a2))
        {
#line 1776 "src/scripting/qti.sip"
  SIPSCIDAVIS_APP(new sipInterpolation(app, a0, *a1, a2))
#line 832 "../tmp/qtiplot/sipqtiInterpolation.cpp"
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
        int a4 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J8J1dd|i", sipType_Graph, &a0, sipType_QString,&a1, &a1State, &a2, &a3, &a4))
        {
#line 1780 "src/scripting/qti.sip"
  SIPSCIDAVIS_APP(new sipInterpolation(app, a0, *a1, a2, a3, a4))
#line 853 "../tmp/qtiplot/sipqtiInterpolation.cpp"
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_Interpolation[] = {{12, 255, 1}};


static PyMethodDef methods_Interpolation[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_Interpolation_childEvent, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_Interpolation_connectNotify, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_Interpolation_customEvent, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_Interpolation_disconnectNotify, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_receivers), meth_Interpolation_receivers, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_run), meth_Interpolation_run, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_sender), meth_Interpolation_sender, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), meth_Interpolation_senderSignalIndex, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setMethod), meth_Interpolation_setMethod, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_Interpolation_timerEvent, METH_VARARGS, SIP_NULLPTR}
};

static sipEnumMemberDef enummembers_Interpolation[] = {
    {sipName_Akima, static_cast<int>( ::Interpolation::Akima), 26},
    {sipName_Cubic, static_cast<int>( ::Interpolation::Cubic), 26},
    {sipName_Linear, static_cast<int>( ::Interpolation::Linear), 26},
};


static pyqt4ClassPluginDef plugin_Interpolation = {
    & ::Interpolation::staticMetaObject,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_qti_Interpolation = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_Interpolation,
        {SIP_NULLPTR},
        &plugin_Interpolation
    },
    {
        sipNameNr_Interpolation,
        {0, 0, 1},
        10, methods_Interpolation,
        3, enummembers_Interpolation,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_Interpolation,
    SIP_NULLPTR,
    init_type_Interpolation,
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
    dealloc_Interpolation,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_Interpolation,
    cast_Interpolation,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
