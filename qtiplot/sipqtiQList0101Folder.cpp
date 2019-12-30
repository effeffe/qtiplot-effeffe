/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.20
 */

#include "sipAPIqti.h"

#line 115 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 12 "./sipqtiQList0101Folder.cpp"

#line 1947 "src/scripting/qti.sip"
#include "src/Folder.h"
#line 16 "./sipqtiQList0101Folder.cpp"


extern "C" {static void assign_QList_0101Folder(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0101Folder(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QList< ::Folder*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QList< ::Folder*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101Folder(SIP_SSIZE_T);}
static void *array_QList_0101Folder(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::Folder*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101Folder(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101Folder(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::Folder*>(reinterpret_cast<const QList< ::Folder*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101Folder(void *, int);}
static void release_QList_0101Folder(void *ptr, int)
{
    delete reinterpret_cast<QList< ::Folder*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101Folder(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101Folder(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::Folder*> **sipCppPtr = reinterpret_cast<QList< ::Folder*> **>(sipCppPtrV);

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
            bool ok = (itm && sipCanConvertToType(itm, sipType_Folder, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<Folder *> *ql = new QList<Folder *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        Folder *t = reinterpret_cast<Folder *>(sipConvertToType(itm, sipType_Folder, sipTransferObj, 0, 0, sipIsErr));

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
#line 99 "./sipqtiQList0101Folder.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101Folder(void *, PyObject *);}
static PyObject *convertFrom_QList_0101Folder(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::Folder*> *sipCpp = reinterpret_cast<QList< ::Folder*> *>(sipCppV);

#line 119 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        Folder *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows Folder to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_Folder, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 132 "./sipqtiQList0101Folder.cpp"
}


sipMappedTypeDef sipTypeDef_qti_QList_0101Folder = {
    {
        -1,
        SIP_NULLPTR,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1599,     /* QList<Folder*> */
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
    assign_QList_0101Folder,
    array_QList_0101Folder,
    copy_QList_0101Folder,
    release_QList_0101Folder,
    convertTo_QList_0101Folder,
    convertFrom_QList_0101Folder
};
