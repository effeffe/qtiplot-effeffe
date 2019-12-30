/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.20
 */

#include "sipAPIqti.h"

#line 648 "src/scripting/qti.sip"
#include <qwt_symbol.h>
#include "ColorButton.h"
#line 13 "./sipqtiQwtSymbol.cpp"

#line 26 "/usr/share/sip/PyQt4/QtGui/qbrush.sip"
#include <qbrush.h>
#line 17 "./sipqtiQwtSymbol.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qpen.sip"
#include <qpen.h>
#line 20 "./sipqtiQwtSymbol.cpp"
#line 26 "/usr/share/sip/PyQt4/QtCore/qsize.sip"
#include <qsize.h>
#line 23 "./sipqtiQwtSymbol.cpp"
#line 26 "/usr/share/sip/PyQt4/QtGui/qcolor.sip"
#include <qcolor.h>
#line 26 "./sipqtiQwtSymbol.cpp"


class sipQwtSymbol : public  ::QwtSymbol
{
public:
    sipQwtSymbol();
    sipQwtSymbol( ::QwtSymbol::Style,const  ::QBrush&,const  ::QPen&,const  ::QSize&);
    virtual ~sipQwtSymbol();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QwtSymbol* clone() const SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQwtSymbol(const sipQwtSymbol &);
    sipQwtSymbol &operator = (const sipQwtSymbol &);

    char sipPyMethods[1];
};

sipQwtSymbol::sipQwtSymbol():  ::QwtSymbol(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQwtSymbol::sipQwtSymbol( ::QwtSymbol::Style a0,const  ::QBrush& a1,const  ::QPen& a2,const  ::QSize& a3):  ::QwtSymbol(a0,a1,a2,a3), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQwtSymbol::~sipQwtSymbol()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QwtSymbol* sipQwtSymbol::clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,SIP_NULLPTR,sipName_clone);

    if (!sipMeth)
        return  ::QwtSymbol::clone();

    extern  ::QwtSymbol* sipVH_qti_40(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_qti_40(sipGILState, 0, sipPySelf, sipMeth);
}


extern "C" {static PyObject *meth_QwtSymbol_clone(PyObject *, PyObject *);}
static PyObject *meth_QwtSymbol_clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QwtSymbol, &sipCpp))
        {
             ::QwtSymbol*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QwtSymbol::clone() : sipCpp->clone());

            return sipConvertFromType(sipRes,sipType_QwtSymbol,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QwtSymbol, sipName_clone, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_QwtSymbol_setSize(PyObject *, PyObject *);}
static PyObject *meth_QwtSymbol_setSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSize* a0;
         ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QwtSymbol, &sipCpp, sipType_QSize, &a0))
        {
            sipCpp->setSize(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        int a1 = -1;
         ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi|i", &sipSelf, sipType_QwtSymbol, &sipCpp, &a0, &a1))
        {
            sipCpp->setSize(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QwtSymbol, sipName_setSize, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_QwtSymbol_setBrush(PyObject *, PyObject *);}
static PyObject *meth_QwtSymbol_setBrush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QBrush* a0;
        int a0State = 0;
         ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QwtSymbol, &sipCpp, sipType_QBrush, &a0, &a0State))
        {
            sipCpp->setBrush(*a0);
            sipReleaseType(const_cast< ::QBrush *>(a0),sipType_QBrush,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QwtSymbol, sipName_setBrush, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_QwtSymbol_setPen(PyObject *, PyObject *);}
static PyObject *meth_QwtSymbol_setPen(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QPen* a0;
        int a0State = 0;
         ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QwtSymbol, &sipCpp, sipType_QPen, &a0, &a0State))
        {
            sipCpp->setPen(*a0);
            sipReleaseType(const_cast< ::QPen *>(a0),sipType_QPen,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QwtSymbol, sipName_setPen, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_QwtSymbol_setStyle(PyObject *, PyObject *);}
static PyObject *meth_QwtSymbol_setStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QwtSymbol::Style a0;
         ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QwtSymbol, &sipCpp, sipType_QwtSymbol_Style, &a0))
        {
            sipCpp->setStyle(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QwtSymbol, sipName_setStyle, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_QwtSymbol_brush(PyObject *, PyObject *);}
static PyObject *meth_QwtSymbol_brush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QwtSymbol, &sipCpp))
        {
             ::QBrush*sipRes;

            sipRes = new  ::QBrush(sipCpp->brush());

            return sipConvertFromNewType(sipRes,sipType_QBrush,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QwtSymbol, sipName_brush, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_QwtSymbol_pen(PyObject *, PyObject *);}
static PyObject *meth_QwtSymbol_pen(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QwtSymbol, &sipCpp))
        {
             ::QPen*sipRes;

            sipRes = new  ::QPen(sipCpp->pen());

            return sipConvertFromNewType(sipRes,sipType_QPen,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QwtSymbol, sipName_pen, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_QwtSymbol_size(PyObject *, PyObject *);}
static PyObject *meth_QwtSymbol_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QwtSymbol, &sipCpp))
        {
             ::QSize*sipRes;

            sipRes = new  ::QSize(sipCpp->size());

            return sipConvertFromNewType(sipRes,sipType_QSize,SIP_NULLPTR);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QwtSymbol, sipName_size, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_QwtSymbol_style(PyObject *, PyObject *);}
static PyObject *meth_QwtSymbol_style(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QwtSymbol, &sipCpp))
        {
             ::QwtSymbol::Style sipRes;

            sipRes = sipCpp->style();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QwtSymbol_Style);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QwtSymbol, sipName_style, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_QwtSymbol_setColor(PyObject *, PyObject *);}
static PyObject *meth_QwtSymbol_setColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QColor* a0;
        int a0State = 0;
         ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QwtSymbol, &sipCpp, sipType_QColor, &a0, &a0State))
        {
#line 695 "src/scripting/qti.sip"
	QPen pen = sipCpp->pen();
	pen.setColor(*a0);
	sipCpp->setPen(pen);
	QBrush brush = sipCpp->brush();
	brush.setColor(*a0);
	sipCpp->setBrush(brush);
#line 347 "./sipqtiQwtSymbol.cpp"
            sipReleaseType(const_cast< ::QColor *>(a0),sipType_QColor,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
         ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QwtSymbol, &sipCpp, &a0))
        {
#line 704 "src/scripting/qti.sip"
	QPen pen = sipCpp->pen();
	pen.setColor(ColorButton::color(a0));
	sipCpp->setPen(pen);
	QBrush brush = sipCpp->brush();
	brush.setColor(ColorButton::color(a0));
	sipCpp->setBrush(brush);
#line 368 "./sipqtiQwtSymbol.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QwtSymbol, sipName_setColor, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_QwtSymbol_setOutlineColor(PyObject *, PyObject *);}
static PyObject *meth_QwtSymbol_setOutlineColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QColor* a0;
        int a0State = 0;
         ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QwtSymbol, &sipCpp, sipType_QColor, &a0, &a0State))
        {
#line 713 "src/scripting/qti.sip"
	QPen pen = sipCpp->pen();
	pen.setColor(*a0);
	sipCpp->setPen(pen);
#line 398 "./sipqtiQwtSymbol.cpp"
            sipReleaseType(const_cast< ::QColor *>(a0),sipType_QColor,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
         ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QwtSymbol, &sipCpp, &a0))
        {
#line 719 "src/scripting/qti.sip"
	QPen pen = sipCpp->pen();
	pen.setColor(ColorButton::color(a0));
	sipCpp->setPen(pen);
#line 416 "./sipqtiQwtSymbol.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QwtSymbol, sipName_setOutlineColor, SIP_NULLPTR);

    return SIP_NULLPTR;
}


extern "C" {static PyObject *meth_QwtSymbol_setFillColor(PyObject *, PyObject *);}
static PyObject *meth_QwtSymbol_setFillColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QColor* a0;
        int a0State = 0;
         ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QwtSymbol, &sipCpp, sipType_QColor, &a0, &a0State))
        {
#line 725 "src/scripting/qti.sip"
	QBrush brush = sipCpp->brush();
	brush.setColor(*a0);
	sipCpp->setBrush(brush);
#line 446 "./sipqtiQwtSymbol.cpp"
            sipReleaseType(const_cast< ::QColor *>(a0),sipType_QColor,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
         ::QwtSymbol *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QwtSymbol, &sipCpp, &a0))
        {
#line 731 "src/scripting/qti.sip"
	QBrush brush = sipCpp->brush();
	brush.setColor(ColorButton::color(a0));
	sipCpp->setBrush(brush);
#line 464 "./sipqtiQwtSymbol.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QwtSymbol, sipName_setFillColor, SIP_NULLPTR);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QwtSymbol(void *, int);}
static void release_QwtSymbol(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQwtSymbol *>(sipCppV);
    else
        delete reinterpret_cast< ::QwtSymbol *>(sipCppV);
}


extern "C" {static void dealloc_QwtSymbol(sipSimpleWrapper *);}
static void dealloc_QwtSymbol(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQwtSymbol *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QwtSymbol(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QwtSymbol(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QwtSymbol(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQwtSymbol *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipQwtSymbol();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::QwtSymbol::Style a0;
        const  ::QBrush* a1;
        int a1State = 0;
        const  ::QPen* a2;
        int a2State = 0;
        const  ::QSize* a3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "EJ1J1J9", sipType_QwtSymbol_Style, &a0, sipType_QBrush, &a1, &a1State, sipType_QPen, &a2, &a2State, sipType_QSize, &a3))
        {
            sipCpp = new sipQwtSymbol(a0,*a1,*a2,*a3);
            sipReleaseType(const_cast< ::QBrush *>(a1),sipType_QBrush,a1State);
            sipReleaseType(const_cast< ::QPen *>(a2),sipType_QPen,a2State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QwtSymbol[] = {
    {SIP_MLNAME_CAST(sipName_brush), meth_QwtSymbol_brush, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_clone), meth_QwtSymbol_clone, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_pen), meth_QwtSymbol_pen, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setBrush), meth_QwtSymbol_setBrush, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setColor), meth_QwtSymbol_setColor, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setFillColor), meth_QwtSymbol_setFillColor, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setOutlineColor), meth_QwtSymbol_setOutlineColor, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setPen), meth_QwtSymbol_setPen, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setSize), meth_QwtSymbol_setSize, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_setStyle), meth_QwtSymbol_setStyle, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_size), meth_QwtSymbol_size, METH_VARARGS, SIP_NULLPTR},
    {SIP_MLNAME_CAST(sipName_style), meth_QwtSymbol_style, METH_VARARGS, SIP_NULLPTR}
};

static sipEnumMemberDef enummembers_QwtSymbol[] = {
    {sipName_Cross, static_cast<int>( ::QwtSymbol::Cross), 50},
    {sipName_DTriangle, static_cast<int>( ::QwtSymbol::DTriangle), 50},
    {sipName_Diamond, static_cast<int>( ::QwtSymbol::Diamond), 50},
    {sipName_Ellipse, static_cast<int>( ::QwtSymbol::Ellipse), 50},
    {sipName_HLine, static_cast<int>( ::QwtSymbol::HLine), 50},
    {sipName_Hexagon, static_cast<int>( ::QwtSymbol::Hexagon), 50},
    {sipName_LTriangle, static_cast<int>( ::QwtSymbol::LTriangle), 50},
    {sipName_NoSymbol, static_cast<int>( ::QwtSymbol::NoSymbol), 50},
    {sipName_RTriangle, static_cast<int>( ::QwtSymbol::RTriangle), 50},
    {sipName_Rect, static_cast<int>( ::QwtSymbol::Rect), 50},
    {sipName_Star1, static_cast<int>( ::QwtSymbol::Star1), 50},
    {sipName_Star2, static_cast<int>( ::QwtSymbol::Star2), 50},
    {sipName_StyleCnt, static_cast<int>( ::QwtSymbol::StyleCnt), 50},
    {sipName_Triangle, static_cast<int>( ::QwtSymbol::Triangle), 50},
    {sipName_UTriangle, static_cast<int>( ::QwtSymbol::UTriangle), 50},
    {sipName_VLine, static_cast<int>( ::QwtSymbol::VLine), 50},
    {sipName_XCross, static_cast<int>( ::QwtSymbol::XCross), 50},
};


static pyqt4ClassPluginDef plugin_QwtSymbol = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_qti_QwtSymbol = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_CLASS,
        sipNameNr_QwtSymbol,
        {SIP_NULLPTR},
        &plugin_QwtSymbol
    },
    {
        sipNameNr_QwtSymbol,
        {0, 0, 1},
        12, methods_QwtSymbol,
        17, enummembers_QwtSymbol,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    SIP_NULLPTR,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QwtSymbol,
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
    dealloc_QwtSymbol,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QwtSymbol,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
