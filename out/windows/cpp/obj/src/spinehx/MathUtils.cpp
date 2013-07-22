#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_spinehx_MathUtils
#include <spinehx/MathUtils.h>
#endif
namespace spinehx{

Void MathUtils_obj::__construct()
{
HX_STACK_PUSH("MathUtils::new","spinehx/MathUtils.hx",3);
{
}
;
	return null();
}

MathUtils_obj::~MathUtils_obj() { }

Dynamic MathUtils_obj::__CreateEmpty() { return  new MathUtils_obj; }
hx::ObjectPtr< MathUtils_obj > MathUtils_obj::__new()
{  hx::ObjectPtr< MathUtils_obj > result = new MathUtils_obj();
	result->__construct();
	return result;}

Dynamic MathUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MathUtils_obj > result = new MathUtils_obj();
	result->__construct();
	return result;}

Float MathUtils_obj::radToDeg( Float rad){
	HX_STACK_PUSH("MathUtils::radToDeg","spinehx/MathUtils.hx",10);
	HX_STACK_ARG(rad,"rad");
	HX_STACK_LINE(10)
	return ((Float((int)180) / Float(::Math_obj::PI)) * rad);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathUtils_obj,radToDeg,return )

Float MathUtils_obj::degToRad( Float deg){
	HX_STACK_PUSH("MathUtils::degToRad","spinehx/MathUtils.hx",18);
	HX_STACK_ARG(deg,"deg");
	HX_STACK_LINE(18)
	return ((Float(::Math_obj::PI) / Float((int)180)) * deg);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathUtils_obj,degToRad,return )

Float MathUtils_obj::clamp( Float value,Float min,Float max){
	HX_STACK_PUSH("MathUtils::clamp","spinehx/MathUtils.hx",29);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(29)
	if (((value < min))){
		HX_STACK_LINE(31)
		return min;
	}
	else{
		HX_STACK_LINE(32)
		if (((value > max))){
			HX_STACK_LINE(33)
			return max;
		}
		else{
			HX_STACK_LINE(35)
			return value;
		}
	}
	HX_STACK_LINE(29)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(MathUtils_obj,clamp,return )

int MathUtils_obj::random( int max){
	HX_STACK_PUSH("MathUtils::random","spinehx/MathUtils.hx",38);
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(38)
	return ::Math_obj::round((max * ::Math_obj::random()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MathUtils_obj,random,return )

int MathUtils_obj::minInt( int a,int b){
	HX_STACK_PUSH("MathUtils::minInt","spinehx/MathUtils.hx",42);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(42)
	return (  (((a < b))) ? int(a) : int(b) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtils_obj,minInt,return )

int MathUtils_obj::maxInt( int a,int b){
	HX_STACK_PUSH("MathUtils::maxInt","spinehx/MathUtils.hx",46);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(46)
	return (  (((a > b))) ? int(a) : int(b) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtils_obj,maxInt,return )


MathUtils_obj::MathUtils_obj()
{
}

void MathUtils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MathUtils);
	HX_MARK_END_CLASS();
}

void MathUtils_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic MathUtils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"random") ) { return random_dyn(); }
		if (HX_FIELD_EQ(inName,"minInt") ) { return minInt_dyn(); }
		if (HX_FIELD_EQ(inName,"maxInt") ) { return maxInt_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"radToDeg") ) { return radToDeg_dyn(); }
		if (HX_FIELD_EQ(inName,"degToRad") ) { return degToRad_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MathUtils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MathUtils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("radToDeg"),
	HX_CSTRING("degToRad"),
	HX_CSTRING("clamp"),
	HX_CSTRING("random"),
	HX_CSTRING("minInt"),
	HX_CSTRING("maxInt"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MathUtils_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MathUtils_obj::__mClass,"__mClass");
};

Class MathUtils_obj::__mClass;

void MathUtils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.MathUtils"), hx::TCanCast< MathUtils_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MathUtils_obj::__boot()
{
}

} // end namespace spinehx
