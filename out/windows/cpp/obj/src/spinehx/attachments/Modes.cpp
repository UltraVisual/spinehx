#include <hxcpp.h>

#ifndef INCLUDED_spinehx_attachments_Mode
#include <spinehx/attachments/Mode.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Modes
#include <spinehx/attachments/Modes.h>
#endif
namespace spinehx{
namespace attachments{

Void Modes_obj::__construct()
{
	return null();
}

Modes_obj::~Modes_obj() { }

Dynamic Modes_obj::__CreateEmpty() { return  new Modes_obj; }
hx::ObjectPtr< Modes_obj > Modes_obj::__new()
{  hx::ObjectPtr< Modes_obj > result = new Modes_obj();
	result->__construct();
	return result;}

Dynamic Modes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Modes_obj > result = new Modes_obj();
	result->__construct();
	return result;}

::spinehx::attachments::Mode Modes_obj::valueOf( ::String t,::spinehx::attachments::Mode def){
	HX_STACK_PUSH("Modes::valueOf","spinehx/attachments/Mode.hx",31);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(def,"def");
	HX_STACK_LINE(31)
	::String _switch_1 = (t);
	if (  ( _switch_1==HX_CSTRING("forward"))){
		HX_STACK_LINE(33)
		return ::spinehx::attachments::Mode_obj::forward;
	}
	else if (  ( _switch_1==HX_CSTRING("backward"))){
		HX_STACK_LINE(34)
		return ::spinehx::attachments::Mode_obj::backward;
	}
	else if (  ( _switch_1==HX_CSTRING("forwardLoop"))){
		HX_STACK_LINE(35)
		return ::spinehx::attachments::Mode_obj::forwardLoop;
	}
	else if (  ( _switch_1==HX_CSTRING("backwardLoop"))){
		HX_STACK_LINE(36)
		return ::spinehx::attachments::Mode_obj::backwardLoop;
	}
	else if (  ( _switch_1==HX_CSTRING("pingPong"))){
		HX_STACK_LINE(37)
		return ::spinehx::attachments::Mode_obj::pingPong;
	}
	else if (  ( _switch_1==HX_CSTRING("random"))){
		HX_STACK_LINE(38)
		return ::spinehx::attachments::Mode_obj::random;
	}
	else  {
		HX_STACK_LINE(39)
		return def;
	}
;
;
	HX_STACK_LINE(31)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Modes_obj,valueOf,return )


Modes_obj::Modes_obj()
{
}

void Modes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Modes);
	HX_MARK_END_CLASS();
}

void Modes_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Modes_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"valueOf") ) { return valueOf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Modes_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Modes_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("valueOf"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Modes_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Modes_obj::__mClass,"__mClass");
};

Class Modes_obj::__mClass;

void Modes_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.attachments.Modes"), hx::TCanCast< Modes_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Modes_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace attachments
