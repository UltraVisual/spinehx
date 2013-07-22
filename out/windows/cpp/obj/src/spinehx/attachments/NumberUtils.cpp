#include <hxcpp.h>

#ifndef INCLUDED_spinehx_attachments_NumberUtils
#include <spinehx/attachments/NumberUtils.h>
#endif
namespace spinehx{
namespace attachments{

Void NumberUtils_obj::__construct()
{
	return null();
}

NumberUtils_obj::~NumberUtils_obj() { }

Dynamic NumberUtils_obj::__CreateEmpty() { return  new NumberUtils_obj; }
hx::ObjectPtr< NumberUtils_obj > NumberUtils_obj::__new()
{  hx::ObjectPtr< NumberUtils_obj > result = new NumberUtils_obj();
	result->__construct();
	return result;}

Dynamic NumberUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NumberUtils_obj > result = new NumberUtils_obj();
	result->__construct();
	return result;}

Float NumberUtils_obj::intToFloatColor( int value){
	HX_STACK_PUSH("NumberUtils::intToFloatColor","spinehx/attachments/RegionAttachment.hx",246);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(246)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NumberUtils_obj,intToFloatColor,return )


NumberUtils_obj::NumberUtils_obj()
{
}

void NumberUtils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NumberUtils);
	HX_MARK_END_CLASS();
}

void NumberUtils_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic NumberUtils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"intToFloatColor") ) { return intToFloatColor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NumberUtils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void NumberUtils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("intToFloatColor"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NumberUtils_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NumberUtils_obj::__mClass,"__mClass");
};

Class NumberUtils_obj::__mClass;

void NumberUtils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.attachments.NumberUtils"), hx::TCanCast< NumberUtils_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void NumberUtils_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace attachments
