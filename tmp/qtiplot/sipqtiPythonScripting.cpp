/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.20
 */

#include "sipAPIqti.h"

#line 1926 "src/scripting/qti.sip"
#include "src/PythonScripting.h"
#line 12 "../tmp/qtiplot/sipqtiPythonScripting.cpp"

#line 27 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 16 "../tmp/qtiplot/sipqtiPythonScripting.cpp"


extern "C" {static PyObject *meth_PythonScripting_write(PyObject *, PyObject *);}
static PyObject *meth_PythonScripting_write(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::PythonScripting *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_PythonScripting, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->write(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_PythonScripting, sipName_write, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_PythonScripting(void *, int);}
static void release_PythonScripting(void *sipCppV, int)
{
    delete reinterpret_cast< ::PythonScripting *>(sipCppV);
}


extern "C" {static void dealloc_PythonScripting(sipSimpleWrapper *);}
static void dealloc_PythonScripting(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_PythonScripting(sipGetAddress(sipSelf), 0);
    }
}


static PyMethodDef methods_PythonScripting[] = {
    {SIP_MLNAME_CAST(sipName_write), meth_PythonScripting_write, METH_VARARGS, SIP_NULLPTR}
};


static pyqt4ClassPluginDef plugin_PythonScripting = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_qti_PythonScripting = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_PythonScripting,
        {SIP_NULLPTR},
        &plugin_PythonScripting
    },
    {
        sipNameNr_PythonScripting,
        {0, 0, 1},
        1, methods_PythonScripting,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    SIP_NULLPTR,
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
    dealloc_PythonScripting,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_PythonScripting,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
