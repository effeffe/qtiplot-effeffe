/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.20
 */

#include "sipAPIqti.h"

#line 1874 "src/scripting/qti.sip"
#include "src/Correlation.h"
#line 12 "../tmp/qtiplot/sipqtiCorrelation.cpp"

#line 1160 "src/scripting/qti.sip"
#include "src/core/ApplicationWindow.h"
#include "src/lib/include/ColorButton.h"
#include <qwt_symbol.h>
#line 18 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 303 "src/scripting/qti.sip"
#include "src/Table.h"

#define CHECK_TABLE_COL(arg)\
    int col;\
    if (PYLong_Check(arg)) {\
      col = (int)PYLong_AsLong(arg) - 1;\
		if (col < 0 || col >= sipCpp->numCols()) {\
			sipIsErr = 1;\
			PyErr_Format(PyExc_ValueError, "There's no column %d in table %s!", col+1, sipCpp->objectName().toUtf8().constData());\
		}\
	 } else {\
      PyObject *tmp = PyObject_Str(arg);\
		if (!tmp) {\
			sipIsErr = 1;\
			PyErr_Format(PyExc_TypeError, "Column argument must be either int or string.");\
		} else {\
			col = sipCpp->colNames().indexOf(PYUNICODE_AsUTF8(tmp));\
			if (col < 0) {\
				sipIsErr = 1;\
				PyErr_Format(PyExc_ValueError, "There's no column named %s in table %s!", PYUNICODE_AsUTF8(tmp),\
						sipCpp->name().toUtf8().constData());\
				Py_DECREF(tmp);\
			}\
		}\
	 }
#define CHECK_TABLE_ROW(arg)\
   int row = arg-1;\
	if (row < 0 || row >= sipCpp->numRows()) {\
		sipIsErr = 1;\
		PyErr_Format(PyExc_ValueError, "There's no row %d in table %s!", row+1, sipCpp->objectName().toUtf8().constData());\
	}

#line 52 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 27 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 55 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 368 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 61 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 351 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 64 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 29 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 67 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 265 "/usr/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 70 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 28 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 73 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 32 "/usr/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 76 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 79 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 115 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 82 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 85 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 88 "../tmp/qtiplot/sipqtiCorrelation.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 91 "../tmp/qtiplot/sipqtiCorrelation.cpp"


class sipCorrelation : public  ::Correlation
{
public:
    sipCorrelation( ::ApplicationWindow*, ::Table*,const  ::QString&,const  ::QString&);
    virtual ~sipCorrelation();

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
    sipCorrelation(const sipCorrelation &);
    sipCorrelation &operator = (const sipCorrelation &);

    char sipPyMethods[8];
};

sipCorrelation::sipCorrelation( ::ApplicationWindow*a0, ::Table*a1,const  ::QString& a2,const  ::QString& a3):  ::Correlation(a0,a1,a2,a3), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipCorrelation::~sipCorrelation()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipCorrelation::metaObject() const
{
    return sip_qti_qt_metaobject(sipPySelf,sipType_Correlation);
}

int sipCorrelation::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::Correlation::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_qti_qt_metacall(sipPySelf,sipType_Correlation,_c,_id,_a);

    return _id;
}

void *sipCorrelation::qt_metacast(const char *_clname)
{
    return (sip_qti_qt_metacast(sipPySelf, sipType_Correlation, _clname)) ? this :  ::Correlation::qt_metacast(_clname);
}

void sipCorrelation::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::Correlation::disconnectNotify(a0);
        return;
    }

    extern void sipVH_qti_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_qti_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipCorrelation::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_connectNotify);

    if (!sipMeth)
    {
         ::Correlation::connectNotify(a0);
        return;
    }

    extern void sipVH_qti_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_qti_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipCorrelation::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_customEvent);

    if (!sipMeth)
    {
         ::Correlation::customEvent(a0);
        return;
    }

    extern void sipVH_qti_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_qti_1(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipCorrelation::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_childEvent);

    if (!sipMeth)
    {
         ::Correlation::childEvent(a0);
        return;
    }

    extern void sipVH_qti_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_qti_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipCorrelation::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,SIP_NULLPTR,sipName_timerEvent);

    if (!sipMeth)
    {
         ::Correlation::timerEvent(a0);
        return;
    }

    extern void sipVH_qti_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_qti_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipCorrelation::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,SIP_NULLPTR,sipName_eventFilter);

    if (!sipMeth)
        return  ::Correlation::eventFilter(a0,a1);

    extern bool sipVH_qti_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_qti_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipCorrelation::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,SIP_NULLPTR,sipName_event);

    if (!sipMeth)
        return  ::Correlation::event(a0);

    extern bool sipVH_qti_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_qti_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipCorrelation::run()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,SIP_NULLPTR,sipName_run);

    if (!sipMeth)
        return  ::Correlation::run();

    extern bool sipVH_qti_43(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_qti_43(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QObject* sipCorrelation::sipProtect_sender() const
{
    return  ::QObject::sender();
}

int sipCorrelation::sipProtect_receivers(const char*a0) const
{
    return  ::QObject::receivers(a0);
}

void sipCorrelation::sipProtectVirt_timerEvent(bool sipSelfWasArg, ::QTimerEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::timerEvent(a0) : timerEvent(a0));
}

void sipCorrelation::sipProtectVirt_childEvent(bool sipSelfWasArg, ::QChildEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::childEvent(a0) : childEvent(a0));
}

void sipCorrelation::sipProtectVirt_customEvent(bool sipSelfWasArg, ::QEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::customEvent(a0) : customEvent(a0));
}

void sipCorrelation::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char*a0)
{
    (sipSelfWasArg ?  ::QObject::connectNotify(a0) : connectNotify(a0));
}

void sipCorrelation::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char*a0)
{
    (sipSelfWasArg ?  ::QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipCorrelation::sipProtect_senderSignalIndex() const
{
    return  ::QObject::senderSignalIndex();
}


extern "C" {static PyObject *meth_Correlation_sender(PyObject *, PyObject *);}
static PyObject *meth_Correlation_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const sipCorrelation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Correlation, &sipCpp))
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
#line 384 "../tmp/qtiplot/sipqtiCorrelation.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Correlation, sipName_sender, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Correlation_receivers(PyObject *, PyObject *);}
static PyObject *meth_Correlation_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        const sipCorrelation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_Correlation, &sipCpp, &a0))
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
#line 447 "../tmp/qtiplot/sipqtiCorrelation.cpp"

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
    sipNoMethod(sipParseErr, sipName_Correlation, sipName_receivers, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Correlation_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_Correlation_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QTimerEvent* a0;
        sipCorrelation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_Correlation, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Correlation, sipName_timerEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Correlation_childEvent(PyObject *, PyObject *);}
static PyObject *meth_Correlation_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QChildEvent* a0;
        sipCorrelation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_Correlation, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Correlation, sipName_childEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Correlation_customEvent(PyObject *, PyObject *);}
static PyObject *meth_Correlation_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QEvent* a0;
        sipCorrelation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_Correlation, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Correlation, sipName_customEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Correlation_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_Correlation_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        PyObject * a0;
        sipCorrelation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_Correlation, &sipCpp, &a0))
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
#line 585 "../tmp/qtiplot/sipqtiCorrelation.cpp"

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
    sipNoMethod(sipParseErr, sipName_Correlation, sipName_connectNotify, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Correlation_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_Correlation_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        PyObject * a0;
        sipCorrelation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_Correlation, &sipCpp, &a0))
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
#line 646 "../tmp/qtiplot/sipqtiCorrelation.cpp"

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
    sipNoMethod(sipParseErr, sipName_Correlation, sipName_disconnectNotify, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Correlation_senderSignalIndex(PyObject *, PyObject *);}
static PyObject *meth_Correlation_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const sipCorrelation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Correlation, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Correlation, sipName_senderSignalIndex, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Correlation_setDataFromTable(PyObject *, PyObject *);}
static PyObject *meth_Correlation_setDataFromTable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Table* a0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;
         ::Correlation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1J1", &sipSelf, sipType_Correlation, &sipCpp, sipType_Table, &a0, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            sipCpp->setDataFromTable(a0,*a1,*a2);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Correlation, sipName_setDataFromTable, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Correlation_run(PyObject *, PyObject *);}
static PyObject *meth_Correlation_run(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::Correlation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Correlation, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::Correlation::run() : sipCpp->run());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Correlation, sipName_run, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_Correlation(void *, const sipTypeDef *);}
static void *cast_Correlation(void *sipCppV, const sipTypeDef *targetType)
{
     ::Correlation *sipCpp = reinterpret_cast< ::Correlation *>(sipCppV);

    if (targetType == sipType_Filter)
        return static_cast< ::Filter *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_Correlation(void *, int);}
static void release_Correlation(void *sipCppV, int)
{
     ::Correlation *sipCpp = reinterpret_cast< ::Correlation *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_Correlation(sipSimpleWrapper *);}
static void dealloc_Correlation(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipCorrelation *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_Correlation(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_Correlation(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Correlation(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipCorrelation *sipCpp = SIP_NULLPTR;

    {
         ::ApplicationWindow* a0;
         ::Table* a1;
        const  ::QString* a2;
        int a2State = 0;
        const  ::QString* a3;
        int a3State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "JHJ8J1J1", sipType_ApplicationWindow, &a0, sipOwner, sipType_Table, &a1, sipType_QString,&a2, &a2State, sipType_QString,&a3, &a3State))
        {
            sipCpp = new sipCorrelation(a0,a1,*a2,*a3);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast< ::QString *>(a3),sipType_QString,a3State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::Table* a0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J8J1J1", sipType_Table, &a0, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
#line 1881 "src/scripting/qti.sip"
  SIPSCIDAVIS_APP(new sipCorrelation(app, a0, *a1, *a2))
#line 828 "../tmp/qtiplot/sipqtiCorrelation.cpp"
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_Correlation[] = {{12, 255, 1}};


static PyMethodDef methods_Correlation[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_Correlation_childEvent, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_Correlation_connectNotify, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_Correlation_customEvent, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_Correlation_disconnectNotify, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_receivers), meth_Correlation_receivers, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_run), meth_Correlation_run, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_sender), meth_Correlation_sender, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), meth_Correlation_senderSignalIndex, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setDataFromTable), meth_Correlation_setDataFromTable, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_Correlation_timerEvent, METH_VARARGS, SIP_NULLPTR}
};


static pyqt4ClassPluginDef plugin_Correlation = {
    & ::Correlation::staticMetaObject,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_qti_Correlation = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_Correlation,
        {SIP_NULLPTR},
        &plugin_Correlation
    },
    {
        sipNameNr_Correlation,
        {0, 0, 1},
        10, methods_Correlation,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_Correlation,
    SIP_NULLPTR,
    init_type_Correlation,
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
    dealloc_Correlation,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_Correlation,
    cast_Correlation,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};