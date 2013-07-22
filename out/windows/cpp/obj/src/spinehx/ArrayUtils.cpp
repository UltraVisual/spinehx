#include <hxcpp.h>

#ifndef INCLUDED_spinehx_ArrayUtils
#include <spinehx/ArrayUtils.h>
#endif
namespace spinehx{

Void ArrayUtils_obj::__construct()
{
	return null();
}

ArrayUtils_obj::~ArrayUtils_obj() { }

Dynamic ArrayUtils_obj::__CreateEmpty() { return  new ArrayUtils_obj; }
hx::ObjectPtr< ArrayUtils_obj > ArrayUtils_obj::__new()
{  hx::ObjectPtr< ArrayUtils_obj > result = new ArrayUtils_obj();
	result->__construct();
	return result;}

Dynamic ArrayUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayUtils_obj > result = new ArrayUtils_obj();
	result->__construct();
	return result;}

Array< Float > ArrayUtils_obj::allocFloat( int n){
	HX_STACK_PUSH("ArrayUtils::allocFloat","spinehx/ArrayUtils.hx",5);
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(6)
	Array< Float > a = Array_obj< Float >::__new()->__SetSizeExact(n);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(7)
	if (((n > (int)0))){
		HX_STACK_LINE(8)
		a[(n - (int)1)] = (int)0;
		HX_STACK_LINE(9)
		{
			HX_STACK_LINE(9)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (n - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(9)
			while(((_g1 < _g))){
				HX_STACK_LINE(9)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(10)
				a[i] = (int)0;
			}
		}
	}
	HX_STACK_LINE(13)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayUtils_obj,allocFloat,return )

Array< ::String > ArrayUtils_obj::allocString( int n){
	HX_STACK_PUSH("ArrayUtils::allocString","spinehx/ArrayUtils.hx",16);
	HX_STACK_ARG(n,"n");
	HX_STACK_LINE(17)
	Array< ::String > a = Array_obj< ::String >::__new()->__SetSizeExact(n);		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(18)
	if (((n > (int)0))){
		HX_STACK_LINE(19)
		a[(n - (int)1)] = null();
		HX_STACK_LINE(20)
		{
			HX_STACK_LINE(20)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = (n - (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(20)
			while(((_g1 < _g))){
				HX_STACK_LINE(20)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(21)
				a[i] = null();
			}
		}
	}
	HX_STACK_LINE(24)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayUtils_obj,allocString,return )


ArrayUtils_obj::ArrayUtils_obj()
{
}

void ArrayUtils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayUtils);
	HX_MARK_END_CLASS();
}

void ArrayUtils_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic ArrayUtils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"allocFloat") ) { return allocFloat_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allocString") ) { return allocString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayUtils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayUtils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("allocFloat"),
	HX_CSTRING("allocString"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayUtils_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayUtils_obj::__mClass,"__mClass");
};

Class ArrayUtils_obj::__mClass;

void ArrayUtils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.ArrayUtils"), hx::TCanCast< ArrayUtils_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ArrayUtils_obj::__boot()
{
}

} // end namespace spinehx
