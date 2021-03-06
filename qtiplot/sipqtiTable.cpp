/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.20
 */

#include "sipAPIqti.h"

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

#line 43 "./sipqtiTable.cpp"

#line 27 "/usr/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 47 "./sipqtiTable.cpp"
#line 132 "src/scripting/qti.sip"
#include "globals.h"
#include "core/column/Column.h"
#include "table/future_Table.h"
#include "core/datatypes/DateTime2StringFilter.h"
#line 53 "./sipqtiTable.cpp"
#line 1947 "src/scripting/qti.sip"
#include "src/Folder.h"
#line 56 "./sipqtiTable.cpp"
#line 249 "src/scripting/qti.sip"
#include "src/MyWidget.h"
#include "src/ApplicationWindow.h"
#line 60 "./sipqtiTable.cpp"
#line 368 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 63 "./sipqtiTable.cpp"
#line 505 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 66 "./sipqtiTable.cpp"
#line 618 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 69 "./sipqtiTable.cpp"
#line 474 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 72 "./sipqtiTable.cpp"
#line 252 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 75 "./sipqtiTable.cpp"
#line 524 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 78 "./sipqtiTable.cpp"
#line 548 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 81 "./sipqtiTable.cpp"
#line 351 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 84 "./sipqtiTable.cpp"
#line 561 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 87 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 90 "./sipqtiTable.cpp"
#line 574 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 93 "./sipqtiTable.cpp"
#line 607 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 96 "./sipqtiTable.cpp"
#line 596 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 99 "./sipqtiTable.cpp"
#line 29 "/usr/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 102 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 105 "./sipqtiTable.cpp"
#line 28 "/usr/share/sip/PyQt4/QtGui/qmdiarea.sip"
#include <qmdiarea.h>
#line 108 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qmenu.sip"
#include <qmenu.h>
#line 111 "./sipqtiTable.cpp"
#line 28 "/usr/share/sip/PyQt4/QtGui/qmdisubwindow.sip"
#include <qmdisubwindow.h>
#line 114 "./sipqtiTable.cpp"
#line 28 "/usr/share/sip/PyQt4/QtGui/qwidget.sip"
#include <qwidget.h>
#line 117 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qsize.sip"
#include <qsize.h>
#line 120 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 123 "./sipqtiTable.cpp"
#line 28 "/usr/share/sip/PyQt4/QtCore/qmargins.sip"
#include <qmargins.h>
#line 126 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 129 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 132 "./sipqtiTable.cpp"
#line 28 "/usr/share/sip/PyQt4/QtGui/qgraphicseffect.sip"
#include <qgraphicseffect.h>
#line 135 "./sipqtiTable.cpp"
#line 28 "/usr/share/sip/PyQt4/QtGui/qgraphicsproxywidget.sip"
#include <qgraphicsproxywidget.h>
#line 138 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qlocale.sip"
#include <qlocale.h>
#line 141 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 144 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qpoint.sip"
#include <qpoint.h>
#line 147 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qregion.sip"
#include <qregion.h>
#line 150 "./sipqtiTable.cpp"
#line 28 "/usr/share/sip/PyQt4/QtGui/qwidget.sip"
#include <qwidget.h>
#line 153 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qpainter.sip"
#include <qpainter.h>
#line 156 "./sipqtiTable.cpp"
#line 32 "/usr/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 159 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qrect.sip"
#include <qrect.h>
#line 162 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qfontinfo.sip"
#include <qfontinfo.h>
#line 165 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qfontmetrics.sip"
#include <qfontmetrics.h>
#line 168 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qfont.sip"
#include <qfont.h>
#line 171 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 174 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qpalette.sip"
#include <qpalette.h>
#line 177 "./sipqtiTable.cpp"
#line 265 "/usr/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 180 "./sipqtiTable.cpp"
#line 647 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 183 "./sipqtiTable.cpp"
#line 739 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 186 "./sipqtiTable.cpp"
#line 792 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 189 "./sipqtiTable.cpp"
#line 765 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 192 "./sipqtiTable.cpp"
#line 781 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 195 "./sipqtiTable.cpp"
#line 854 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 198 "./sipqtiTable.cpp"
#line 403 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 201 "./sipqtiTable.cpp"
#line 347 "/usr/share/sip/PyQt4/QtGui/qevent.sip"
#include <qevent.h>
#line 204 "./sipqtiTable.cpp"
#line 28 "/usr/share/sip/PyQt4/QtGui/qinputcontext.sip"
#include <qinputcontext.h>
#line 207 "./sipqtiTable.cpp"
#line 52 "/usr/share/sip/PyQt4/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 210 "./sipqtiTable.cpp"
#line 34 "/usr/share/sip/PyQt4/QtGui/qx11info_x11.sip"
#include <qx11info_x11.h>
#line 213 "./sipqtiTable.cpp"
#line 115 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 216 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qaction.sip"
#include <qaction.h>
#line 219 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qlayout.sip"
#include <qlayout.h>
#line 222 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 225 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qkeysequence.sip"
#include <qkeysequence.h>
#line 228 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qcursor.sip"
#include <qcursor.h>
#line 231 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qicon.sip"
#include <qicon.h>
#line 234 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qbitmap.sip"
#include <qbitmap.h>
#line 237 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qstyle.sip"
#include <qstyle.h>
#line 240 "./sipqtiTable.cpp"
#line 28 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 243 "./sipqtiTable.cpp"
#line 115 "/usr/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 246 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 249 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 252 "./sipqtiTable.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 255 "./sipqtiTable.cpp"


extern "C" {static PyObject *meth_Table_numRows(PyObject *, PyObject *);}
static PyObject *meth_Table_numRows(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Table, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->numRows();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_numRows, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_numCols(PyObject *, PyObject *);}
static PyObject *meth_Table_numCols(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Table, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->numCols();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_numCols, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_rowCount(PyObject *, PyObject *);}
static PyObject *meth_Table_rowCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Table, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->rowCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_rowCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_columnCount(PyObject *, PyObject *);}
static PyObject *meth_Table_columnCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Table, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->columnCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_columnCount, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_setNumRows(PyObject *, PyObject *);}
static PyObject *meth_Table_setNumRows(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_Table, &sipCpp, &a0))
        {
            sipCpp->setNumRows(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_setNumRows, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_setNumCols(PyObject *, PyObject *);}
static PyObject *meth_Table_setNumCols(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_Table, &sipCpp, &a0))
        {
            sipCpp->setNumCols(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_setNumCols, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_column(PyObject *, PyObject *);}
static PyObject *meth_Table_column(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
        const  ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_Table, &sipCpp, &a0))
        {
             ::Column*sipRes;

            sipRes = sipCpp->column(a0);

            return sipConvertFromType(sipRes,sipType_Column,SIP_NULLPTR);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_Table, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::Column*sipRes = 0;

#line 347 "src/scripting/qti.sip"
  sipRes = sipCpp->d_future_table->column(*a0, false);
#line 438 "./sipqtiTable.cpp"
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromType(sipRes,sipType_Column,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_column, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_text(PyObject *, PyObject *);}
static PyObject *meth_Table_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        int a1;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0i", &sipSelf, sipType_Table, &sipCpp, &a0, &a1))
        {
            PyObject * sipRes = SIP_NULLPTR;
            int sipIsErr = 0;

            if (sipDeprecated(sipName_Table,sipName_text) < 0)
                return SIP_NULLPTR;

#line 362 "src/scripting/qti.sip"
  sipIsErr = 0;
  CHECK_TABLE_COL(a0);
  CHECK_TABLE_ROW(a1);
  if (sipIsErr == 0) {
		sipRes = PYUNICODE_FromString(sipCpp->text(row, col).toUtf8().constData());
		if (!sipRes) {
			sipIsErr = 1;
		}
	}
#line 480 "./sipqtiTable.cpp"

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_text, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_cell(PyObject *, PyObject *);}
static PyObject *meth_Table_cell(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        int a1;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0i", &sipSelf, sipType_Table, &sipCpp, &a0, &a1))
        {
            double sipRes = 0;
            int sipIsErr = 0;

            if (sipDeprecated(sipName_Table,sipName_cell) < 0)
                return SIP_NULLPTR;

#line 374 "src/scripting/qti.sip"
  sipIsErr = 0;
  CHECK_TABLE_COL(a0);
  CHECK_TABLE_ROW(a1);
	if (sipIsErr == 0)
		sipRes = sipCpp->cell(row, col);
#line 520 "./sipqtiTable.cpp"

            if (sipIsErr)
                return 0;

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_cell, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_setText(PyObject *, PyObject *);}
static PyObject *meth_Table_setText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        int a1;
        const  ::QString* a2;
        int a2State = 0;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0iJ1", &sipSelf, sipType_Table, &sipCpp, &a0, &a1, sipType_QString,&a2, &a2State))
        {
            int sipIsErr = 0;

            if (sipDeprecated(sipName_Table,sipName_setText) < 0)
                return SIP_NULLPTR;

#line 382 "src/scripting/qti.sip"
  sipIsErr = 0;
  CHECK_TABLE_COL(a0);
  CHECK_TABLE_ROW(a1);
	if (sipIsErr == 0)
		sipCpp->setText(row, col, *a2);
#line 561 "./sipqtiTable.cpp"
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_setText, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_setCell(PyObject *, PyObject *);}
static PyObject *meth_Table_setCell(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        int a1;
        double a2;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0id", &sipSelf, sipType_Table, &sipCpp, &a0, &a1, &a2))
        {
            int sipIsErr = 0;

            if (sipDeprecated(sipName_Table,sipName_setCell) < 0)
                return SIP_NULLPTR;

#line 390 "src/scripting/qti.sip"
  sipIsErr = 0;
  CHECK_TABLE_COL(a0);
  CHECK_TABLE_ROW(a1);
	if (sipIsErr == 0)
		sipCpp->setCell(row, col, a2);
#line 603 "./sipqtiTable.cpp"

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_setCell, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_colName(PyObject *, PyObject *);}
static PyObject *meth_Table_colName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_Table, &sipCpp, &a0))
        {
            PyObject * sipRes = SIP_NULLPTR;
            int sipIsErr = 0;

            if (sipDeprecated(sipName_Table,sipName_colName) < 0)
                return SIP_NULLPTR;

#line 398 "src/scripting/qti.sip"
   if (a0 < 1 || a0 > sipCpp->numCols()) {\
		sipIsErr = 1;\
		PyErr_SetString(PyExc_ValueError, "Invalid column argument");\
	} else
		sipRes = PYUNICODE_FromString(sipCpp->colLabel(a0-1).toUtf8().constData());
#line 643 "./sipqtiTable.cpp"

            if (sipIsErr)
                return 0;

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_colName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_setColName(PyObject *, PyObject *);}
static PyObject *meth_Table_setColName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        const  ::QString* a1;
        int a1State = 0;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0J1", &sipSelf, sipType_Table, &sipCpp, &a0, sipType_QString,&a1, &a1State))
        {
            int sipIsErr = 0;

            if (sipDeprecated(sipName_Table,sipName_setColName) < 0)
                return SIP_NULLPTR;

#line 406 "src/scripting/qti.sip"
	sipIsErr = 0;
   CHECK_TABLE_COL(a0);
	if (sipIsErr == 0)
		sipCpp->setColName(col, *a1);
#line 682 "./sipqtiTable.cpp"
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_setColName, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_notifyChanges(PyObject *, PyObject *);}
static PyObject *meth_Table_notifyChanges(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Table, &sipCpp))
        {
            if (sipDeprecated(sipName_Table,sipName_notifyChanges) < 0)
                return SIP_NULLPTR;

            sipCpp->notifyChanges();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_notifyChanges, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_importASCII(PyObject *, PyObject *);}
static PyObject *meth_Table_importASCII(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString& a1def = "\t";
        const  ::QString* a1 = &a1def;
        int a1State = 0;
        int a2 = 0;
        bool a3 = 0;
        bool a4 = 1;
        bool a5 = 0;
        bool a6 = 0;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1|J1ibbbb", &sipSelf, sipType_Table, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, &a2, &a3, &a4, &a5, &a6))
        {
            sipCpp->importASCII(*a0,*a1,a2,a3,a4,a5,a6);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_importASCII, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_exportASCII(PyObject *, PyObject *);}
static PyObject *meth_Table_exportASCII(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString& a1def = "\t";
        const  ::QString* a1 = &a1def;
        int a1State = 0;
        bool a2 = 0;
        bool a3 = 0;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1|J1bb", &sipSelf, sipType_Table, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, &a2, &a3))
        {
            bool sipRes;

            sipRes = sipCpp->exportASCII(*a0,*a1,a2,a3);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_exportASCII, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_normalize(PyObject *, PyObject *);}
static PyObject *meth_Table_normalize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0", &sipSelf, sipType_Table, &sipCpp, &a0))
        {
            int sipIsErr = 0;

#line 417 "src/scripting/qti.sip"
	sipIsErr = 0;
	CHECK_TABLE_COL(a0);
	if (sipIsErr == 0)
		sipCpp->d_future_table->normalizeColumns(QList< Column* >() << sipCpp->column(col));
#line 815 "./sipqtiTable.cpp"

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_Table, &sipCpp))
        {
#line 424 "src/scripting/qti.sip"
	QList< Column* > cols;
	for (int i=0; i<sipCpp->numCols(); i++)
		cols << sipCpp->column(i);
	sipCpp->d_future_table->normalizeColumns(cols);
#line 835 "./sipqtiTable.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_normalize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_sortColumn(PyObject *, PyObject *);}
static PyObject *meth_Table_sortColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        int a1 = 0;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0|i", &sipSelf, sipType_Table, &sipCpp, &a0, &a1))
        {
            int sipIsErr = 0;

#line 432 "src/scripting/qti.sip"
  	sipIsErr = 0;
  	CHECK_TABLE_COL(a0);
	if (sipIsErr == 0)
		sipCpp->d_future_table->sortColumns(0, QList<Column*>() << sipCpp->column(col), a1==0);
#line 868 "./sipqtiTable.cpp"

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_sortColumn, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_sort(PyObject *, PyObject *);}
static PyObject *meth_Table_sort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0 = 0;
        int a1 = 0;
        const  ::QString& a2def = QString();
        const  ::QString* a2 = &a2def;
        int a2State = 0;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|iiJ1", &sipSelf, sipType_Table, &sipCpp, &a0, &a1, sipType_QString,&a2, &a2State))
        {
#line 439 "src/scripting/qti.sip"
	Column * lead;
	if (a0 == 0)
		lead = 0; // sort separately
	else
		lead = sipCpp->column(*a2);
	QList< Column* > cols;
	for (int i=0; i<sipCpp->numCols(); i++)
		cols << sipCpp->column(i);
	sipCpp->d_future_table->sortColumns(lead, cols, a1==0);
#line 910 "./sipqtiTable.cpp"
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_sort, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_sortColumns(PyObject *, PyObject *);}
static PyObject *meth_Table_sortColumns(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        int a1 = 0;
        int a2 = 0;
        const  ::QString& a3def = QString();
        const  ::QString* a3 = &a3def;
        int a3State = 0;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BT|iiJ1", &sipSelf, sipType_Table, &sipCpp, &PyTuple_Type, &a0, &a1, &a2, sipType_QString,&a3, &a3State))
        {
            int sipIsErr = 0;

#line 451 "src/scripting/qti.sip"
	Column * lead;
	if (a1 == 0)
		lead = 0; // sort separately
	else
		lead = sipCpp->column(*a3);
	QList< Column* > cols;
  int n = PyTuple_Size(a0);
  for (int i=0; i<n; i++) {
	  PyObject *str = PyObject_Str(PyTuple_GET_ITEM(a0,i));
	  if (str) {
		  cols << sipCpp->column(PYUNICODE_AsUTF8(str));
		  Py_DECREF(str);
	  } else {
		  sipIsErr = 1;
		  break;
	  }
  }
  sipCpp->d_future_table->sortColumns(lead, cols, a2==0);
#line 962 "./sipqtiTable.cpp"
            sipReleaseType(const_cast< ::QString *>(a3),sipType_QString,a3State);

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_sortColumns, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_setCommand(PyObject *, PyObject *);}
static PyObject *meth_Table_setCommand(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        const  ::QString* a1;
        int a1State = 0;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0J1", &sipSelf, sipType_Table, &sipCpp, &a0, sipType_QString,&a1, &a1State))
        {
            int sipIsErr = 0;

            if (sipDeprecated(sipName_Table,sipName_setCommand) < 0)
                return SIP_NULLPTR;

#line 472 "src/scripting/qti.sip"
  	sipIsErr = 0;
  	CHECK_TABLE_COL(a0);
	if (sipIsErr == 0)
		sipCpp->setCommand(col, *a1);
#line 1003 "./sipqtiTable.cpp"
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_setCommand, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_Table_setComment(PyObject *, PyObject *);}
static PyObject *meth_Table_setComment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        PyObject * a0;
        const  ::QString* a1;
        int a1State = 0;
         ::Table *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BP0J1", &sipSelf, sipType_Table, &sipCpp, &a0, sipType_QString,&a1, &a1State))
        {
            int sipIsErr = 0;

            if (sipDeprecated(sipName_Table,sipName_setComment) < 0)
                return SIP_NULLPTR;

#line 480 "src/scripting/qti.sip"
  	sipIsErr = 0;
  	CHECK_TABLE_COL(a0);
	if (sipIsErr == 0)
		sipCpp->setColComment(col, *a1);
#line 1044 "./sipqtiTable.cpp"
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            if (sipIsErr)
                return 0;

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName_setComment, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *slot_Table___getitem__(PyObject *,PyObject *);}
static PyObject *slot_Table___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Table *sipCpp = reinterpret_cast< ::Table *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Table));

    if (!sipCpp)
        return SIP_NULLPTR;

    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
             ::Column*sipRes = 0;

#line 352 "src/scripting/qti.sip"
  sipRes = sipCpp->column(a0);
#line 1081 "./sipqtiTable.cpp"

            return sipConvertFromType(sipRes,sipType_Column,SIP_NULLPTR);
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QString,&a0, &a0State))
        {
             ::Column*sipRes = 0;

#line 357 "src/scripting/qti.sip"
  sipRes = sipCpp->column(*a0);
#line 1097 "./sipqtiTable.cpp"
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromType(sipRes,sipType_Column,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_Table, sipName___getitem__, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_Table(void *, const sipTypeDef *);}
static void *cast_Table(void *sipCppV, const sipTypeDef *targetType)
{
     ::Table *sipCpp = reinterpret_cast< ::Table *>(sipCppV);

    if (targetType == sipType_MyWidget)
        return static_cast< ::MyWidget *>(sipCpp);

    if (targetType == sipType_QMdiSubWindow)
        return static_cast< ::QMdiSubWindow *>(sipCpp);

    if (targetType == sipType_QWidget)
        return static_cast< ::QWidget *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    if (targetType == sipType_QPaintDevice)
        return static_cast< ::QPaintDevice *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_Table(void *, int);}
static void release_Table(void *sipCppV, int)
{
     ::Table *sipCpp = reinterpret_cast< ::Table *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_Table(sipSimpleWrapper *);}
static void dealloc_Table(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Table(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_Table[] = {{34, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_Table[] = {
    {(void *)slot_Table___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_Table[] = {
    {SIP_MLNAME_CAST(sipName_cell), meth_Table_cell, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_colName), meth_Table_colName, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_column), meth_Table_column, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_columnCount), meth_Table_columnCount, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_exportASCII), meth_Table_exportASCII, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_importASCII), meth_Table_importASCII, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_normalize), meth_Table_normalize, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_notifyChanges), meth_Table_notifyChanges, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_numCols), meth_Table_numCols, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_numRows), meth_Table_numRows, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_rowCount), meth_Table_rowCount, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setCell), meth_Table_setCell, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setColName), meth_Table_setColName, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setCommand), meth_Table_setCommand, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setComment), meth_Table_setComment, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setNumCols), meth_Table_setNumCols, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setNumRows), meth_Table_setNumRows, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setText), meth_Table_setText, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_sort), meth_Table_sort, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_sortColumn), meth_Table_sortColumn, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_sortColumns), meth_Table_sortColumns, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_text), meth_Table_text, METH_VARARGS, SIP_NULLPTR}
};


static pyqt4ClassPluginDef plugin_Table = {
    & ::Table::staticMetaObject,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_qti_Table = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_Table,
        {SIP_NULLPTR},
        &plugin_Table
    },
    {
        sipNameNr_Table,
        {0, 0, 1},
        22, methods_Table,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    -1,
    -1,
    supers_Table,
    slots_Table,
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
    dealloc_Table,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_Table,
    cast_Table,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
