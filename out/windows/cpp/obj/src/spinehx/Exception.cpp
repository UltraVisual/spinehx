#include <hxcpp.h>

#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
namespace spinehx{

Void Exception_obj::__construct(::String msg)
{
HX_STACK_PUSH("Exception::new","spinehx/Exception.hx",4);
{
	HX_STACK_LINE(4)
	this->msg = msg;
}
;
	return null();
}

Exception_obj::~Exception_obj() { }

Dynamic Exception_obj::__CreateEmpty() { return  new Exception_obj; }
hx::ObjectPtr< Exception_obj > Exception_obj::__new(::String msg)
{  hx::ObjectPtr< Exception_obj > result = new Exception_obj();
	result->__construct(msg);
	return result;}

Dynamic Exception_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Exception_obj > result = new Exception_obj();
	result->__construct(inArgs[0]);
	return result;}


Exception_obj::Exception_obj()
{
}

void Exception_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Exception);
	HX_MARK_MEMBER_NAME(msg,"msg");
	HX_MARK_END_CLASS();
}

void Exception_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(msg,"msg");
}

Dynamic Exception_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"msg") ) { return msg; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Exception_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"msg") ) { msg=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Exception_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("msg"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("msg"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Exception_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Exception_obj::__mClass,"__mClass");
};

Class Exception_obj::__mClass;

void Exception_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.Exception"), hx::TCanCast< Exception_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Exception_obj::__boot()
{
}

} // end namespace spinehx
