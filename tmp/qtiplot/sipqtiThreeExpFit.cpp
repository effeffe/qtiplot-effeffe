/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.20
 */

#include "sipAPIqti.h"

#line 1501 "src/scripting/qti.sip"
#include "src/ExponentialFit.h"
#line 12 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"

#line 1160 "src/scripting/qti.sip"
#include "src/core/ApplicationWindow.h"
#include "src/lib/include/ColorButton.h"
#include <qwt_symbol.h>
#line 18 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 908 "src/scripting/qti.sip"
#include "src/Graph.h"
#include "src/Legend.h"
#include "src/lib/include/ColorButton.h"
#include "src/FunctionCurve.h"
#include "src/DataPointPicker.h"
#include <qwt_plot_canvas.h>
#line 26 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 27 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 29 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 493 "src/scripting/qti.sip"
#include "src/Matrix.h"
#define CHECK_MATRIX_COL(arg)\
	int col = arg-1;\
   if (col < 0 || col >= sipCpp->numCols()) {\
		sipIsErr = 1;\
		PyErr_Format(PyExc_ValueError, "There's no column %d in matrix %s!", col+1, sipCpp->objectName().toUtf8().constData());\
	}
#define CHECK_MATRIX_ROW(arg)\
   int row = arg-1;\
	if (row < 0 || row >= sipCpp->numRows()) {\
		sipIsErr = 1;\
		PyErr_Format(PyExc_ValueError, "There's no row %d in matrix %s!", row+1, sipCpp->objectName().toUtf8().constData());\
	}
#line 44 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
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

#line 78 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 1337 "src/scripting/qti.sip"
#include "src/Fit.h"
#line 81 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 84 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 368 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 87 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 351 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 90 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 29 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 93 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 265 "/usr/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 96 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 28 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 99 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 32 "/usr/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 102 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 105 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 115 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 108 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 111 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 114 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 117 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"


class sipThreeExpFit : public  ::ThreeExpFit
{
public:
    sipThreeExpFit( ::ApplicationWindow*, ::Graph*,const  ::QString&);
    sipThreeExpFit( ::ApplicationWindow*, ::Graph*,const  ::QString&,double,double);
    virtual ~sipThreeExpFit();

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
    void fit() SIP_OVERRIDE;
    void guessInitialValues() SIP_OVERRIDE;
     ::QString legendInfo() SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipThreeExpFit(const sipThreeExpFit &);
    sipThreeExpFit &operator = (const sipThreeExpFit &);

    char sipPyMethods[10];
};

sipThreeExpFit::sipThreeExpFit( ::ApplicationWindow*a0, ::Graph*a1,const  ::QString& a2):  ::ThreeExpFit(a0,a1,a2), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipThreeExpFit::sipThreeExpFit( ::ApplicationWindow*a0, ::Graph*a1,const  ::QString& a2,double a3,double a4):  ::ThreeExpFit(a0,a1,a2,a3,a4), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipThreeExpFit::~sipThreeExpFit()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipThreeExpFit::metaObject() const
{
    return sip_qti_qt_metaobject(sipPySelf,sipType_ThreeExpFit);
}

int sipThreeExpFit::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::ThreeExpFit::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_qti_qt_metacall(sipPySelf,sipType_ThreeExpFit,_c,_id,_a);

    return _id;
}

void *sipThreeExpFit::qt_metacast(const char *_clname)
{
    return (sip_qti_qt_metacast(sipPySelf, sipType_ThreeExpFit, _clname)) ? this :  ::ThreeExpFit::qt_metacast(_clname);
}

void sipThreeExpFit::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,SIP_NULLPTR,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::ThreeExpFit::disconnectNotify(a0);
        return;
    }

    extern void sipVH_qti_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_qti_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipThreeExpFit::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,SIP_NULLPTR,sipName_connectNotify);

    if (!sipMeth)
    {
         ::ThreeExpFit::connectNotify(a0);
        return;
    }

    extern void sipVH_qti_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_qti_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipThreeExpFit::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,SIP_NULLPTR,sipName_customEvent);

    if (!sipMeth)
    {
         ::ThreeExpFit::customEvent(a0);
        return;
    }

    extern void sipVH_qti_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_qti_1(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipThreeExpFit::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,SIP_NULLPTR,sipName_childEvent);

    if (!sipMeth)
    {
         ::ThreeExpFit::childEvent(a0);
        return;
    }

    extern void sipVH_qti_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_qti_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipThreeExpFit::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,SIP_NULLPTR,sipName_timerEvent);

    if (!sipMeth)
    {
         ::ThreeExpFit::timerEvent(a0);
        return;
    }

    extern void sipVH_qti_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_qti_3(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipThreeExpFit::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,SIP_NULLPTR,sipName_eventFilter);

    if (!sipMeth)
        return  ::ThreeExpFit::eventFilter(a0,a1);

    extern bool sipVH_qti_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_qti_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipThreeExpFit::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,SIP_NULLPTR,sipName_event);

    if (!sipMeth)
        return  ::ThreeExpFit::event(a0);

    extern bool sipVH_qti_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_qti_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipThreeExpFit::fit()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,SIP_NULLPTR,sipName_fit);

    if (!sipMeth)
    {
         ::ThreeExpFit::fit();
        return;
    }

    extern void sipVH_qti_38(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_qti_38(sipGILState, 0, sipPySelf, sipMeth);
}

void sipThreeExpFit::guessInitialValues()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,SIP_NULLPTR,sipName_guessInitialValues);

    if (!sipMeth)
    {
         ::ThreeExpFit::guessInitialValues();
        return;
    }

    extern void sipVH_qti_38(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_qti_38(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QString sipThreeExpFit::legendInfo()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,SIP_NULLPTR,sipName_legendInfo);

    if (!sipMeth)
        return  ::ThreeExpFit::legendInfo();

    extern  ::QString sipVH_qti_42(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_qti_42(sipGILState, 0, sipPySelf, sipMeth);
}

 ::QObject* sipThreeExpFit::sipProtect_sender() const
{
    return  ::QObject::sender();
}

int sipThreeExpFit::sipProtect_receivers(const char*a0) const
{
    return  ::QObject::receivers(a0);
}

void sipThreeExpFit::sipProtectVirt_timerEvent(bool sipSelfWasArg, ::QTimerEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::timerEvent(a0) : timerEvent(a0));
}

void sipThreeExpFit::sipProtectVirt_childEvent(bool sipSelfWasArg, ::QChildEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::childEvent(a0) : childEvent(a0));
}

void sipThreeExpFit::sipProtectVirt_customEvent(bool sipSelfWasArg, ::QEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::customEvent(a0) : customEvent(a0));
}

void sipThreeExpFit::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char*a0)
{
    (sipSelfWasArg ?  ::QObject::connectNotify(a0) : connectNotify(a0));
}

void sipThreeExpFit::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char*a0)
{
    (sipSelfWasArg ?  ::QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipThreeExpFit::sipProtect_senderSignalIndex() const
{
    return  ::QObject::senderSignalIndex();
}


extern "C" {static PyObject *meth_ThreeExpFit_sender(PyObject *, PyObject *);}
static PyObject *meth_ThreeExpFit_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const sipThreeExpFit *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_ThreeExpFit, &sipCpp))
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
#line 454 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ThreeExpFit, sipName_sender, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ThreeExpFit_receivers(PyObject *, PyObject *);}
static PyObject *meth_ThreeExpFit_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        const sipThreeExpFit *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_ThreeExpFit, &sipCpp, &a0))
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
#line 517 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"

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
    sipNoMethod(sipParseErr, sipName_ThreeExpFit, sipName_receivers, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ThreeExpFit_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_ThreeExpFit_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QTimerEvent* a0;
        sipThreeExpFit *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_ThreeExpFit, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ThreeExpFit, sipName_timerEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ThreeExpFit_childEvent(PyObject *, PyObject *);}
static PyObject *meth_ThreeExpFit_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QChildEvent* a0;
        sipThreeExpFit *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_ThreeExpFit, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ThreeExpFit, sipName_childEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ThreeExpFit_customEvent(PyObject *, PyObject *);}
static PyObject *meth_ThreeExpFit_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QEvent* a0;
        sipThreeExpFit *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_ThreeExpFit, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ThreeExpFit, sipName_customEvent, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ThreeExpFit_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_ThreeExpFit_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        PyObject * a0;
        sipThreeExpFit *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_ThreeExpFit, &sipCpp, &a0))
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
#line 655 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"

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
    sipNoMethod(sipParseErr, sipName_ThreeExpFit, sipName_connectNotify, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ThreeExpFit_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_ThreeExpFit_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        PyObject * a0;
        sipThreeExpFit *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_ThreeExpFit, &sipCpp, &a0))
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
#line 716 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"

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
    sipNoMethod(sipParseErr, sipName_ThreeExpFit, sipName_disconnectNotify, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_ThreeExpFit_senderSignalIndex(PyObject *, PyObject *);}
static PyObject *meth_ThreeExpFit_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const sipThreeExpFit *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_ThreeExpFit, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_ThreeExpFit, sipName_senderSignalIndex, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_ThreeExpFit(void *, const sipTypeDef *);}
static void *cast_ThreeExpFit(void *sipCppV, const sipTypeDef *targetType)
{
     ::ThreeExpFit *sipCpp = reinterpret_cast< ::ThreeExpFit *>(sipCppV);

    if (targetType == sipType_Fit)
        return static_cast< ::Fit *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_ThreeExpFit(void *, int);}
static void release_ThreeExpFit(void *sipCppV, int)
{
     ::ThreeExpFit *sipCpp = reinterpret_cast< ::ThreeExpFit *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_ThreeExpFit(sipSimpleWrapper *);}
static void dealloc_ThreeExpFit(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipThreeExpFit *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_ThreeExpFit(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_ThreeExpFit(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_ThreeExpFit(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipThreeExpFit *sipCpp = SIP_NULLPTR;

    {
         ::ApplicationWindow* a0;
         ::Graph* a1;
        const  ::QString* a2;
        int a2State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "JHJ8J1", sipType_ApplicationWindow, &a0, sipOwner, sipType_Graph, &a1, sipType_QString,&a2, &a2State))
        {
            sipCpp = new sipThreeExpFit(a0,a1,*a2);
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

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "JHJ8J1dd", sipType_ApplicationWindow, &a0, sipOwner, sipType_Graph, &a1, sipType_QString,&a2, &a2State, &a3, &a4))
        {
            sipCpp = new sipThreeExpFit(a0,a1,*a2,a3,a4);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::Graph* a0;
        const  ::QString* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J8J1", sipType_Graph, &a0, sipType_QString,&a1, &a1State))
        {
#line 1508 "src/scripting/qti.sip"
  SIPSCIDAVIS_APP(new sipThreeExpFit(app, a0, *a1))
#line 855 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
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

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J8J1dd", sipType_Graph, &a0, sipType_QString,&a1, &a1State, &a2, &a3))
        {
#line 1512 "src/scripting/qti.sip"
  SIPSCIDAVIS_APP(new sipThreeExpFit(app, a0, *a1, a2, a3))
#line 875 "../tmp/qtiplot/sipqtiThreeExpFit.cpp"
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_ThreeExpFit[] = {{13, 255, 1}};


static PyMethodDef methods_ThreeExpFit[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), meth_ThreeExpFit_childEvent, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_ThreeExpFit_connectNotify, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_ThreeExpFit_customEvent, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_ThreeExpFit_disconnectNotify, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_receivers), meth_ThreeExpFit_receivers, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_sender), meth_ThreeExpFit_sender, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), meth_ThreeExpFit_senderSignalIndex, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_ThreeExpFit_timerEvent, METH_VARARGS, SIP_NULLPTR}
};


static pyqt4ClassPluginDef plugin_ThreeExpFit = {
    & ::ThreeExpFit::staticMetaObject,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_qti_ThreeExpFit = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_ThreeExpFit,
        {SIP_NULLPTR},
        &plugin_ThreeExpFit
    },
    {
        sipNameNr_ThreeExpFit,
        {0, 0, 1},
        8, methods_ThreeExpFit,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_ThreeExpFit,
    SIP_NULLPTR,
    init_type_ThreeExpFit,
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
    dealloc_ThreeExpFit,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_ThreeExpFit,
    cast_ThreeExpFit,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
