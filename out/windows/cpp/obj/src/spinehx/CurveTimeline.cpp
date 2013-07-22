#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_spinehx_ArrayUtils
#include <spinehx/ArrayUtils.h>
#endif
#ifndef INCLUDED_spinehx_CurveTimeline
#include <spinehx/CurveTimeline.h>
#endif
#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_Timeline
#include <spinehx/Timeline.h>
#endif
namespace spinehx{

Void CurveTimeline_obj::__construct(int frameCount)
{
HX_STACK_PUSH("CurveTimeline::new","spinehx/Animation.hx",125);
{
	HX_STACK_LINE(125)
	this->curves = ::spinehx::ArrayUtils_obj::allocFloat((((frameCount - (int)1)) * (int)6));
}
;
	return null();
}

CurveTimeline_obj::~CurveTimeline_obj() { }

Dynamic CurveTimeline_obj::__CreateEmpty() { return  new CurveTimeline_obj; }
hx::ObjectPtr< CurveTimeline_obj > CurveTimeline_obj::__new(int frameCount)
{  hx::ObjectPtr< CurveTimeline_obj > result = new CurveTimeline_obj();
	result->__construct(frameCount);
	return result;}

Dynamic CurveTimeline_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CurveTimeline_obj > result = new CurveTimeline_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *CurveTimeline_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::spinehx::Timeline_obj)) return operator ::spinehx::Timeline_obj *();
	return super::__ToInterface(inType);
}

Float CurveTimeline_obj::getCurvePercent( int frameIndex,Float percent){
	HX_STACK_PUSH("CurveTimeline::getCurvePercent","spinehx/Animation.hx",169);
	HX_STACK_THIS(this);
	HX_STACK_ARG(frameIndex,"frameIndex");
	HX_STACK_ARG(percent,"percent");
	HX_STACK_LINE(170)
	int curveIndex = (frameIndex * (int)6);		HX_STACK_VAR(curveIndex,"curveIndex");
	HX_STACK_LINE(171)
	Float dfx = this->curves->__get(curveIndex);		HX_STACK_VAR(dfx,"dfx");
	HX_STACK_LINE(172)
	if (((dfx == (int)0))){
		HX_STACK_LINE(172)
		return percent;
	}
	HX_STACK_LINE(173)
	if (((dfx == (int)-1))){
		HX_STACK_LINE(173)
		return (int)0;
	}
	HX_STACK_LINE(174)
	Float dfy = this->curves->__get((curveIndex + (int)1));		HX_STACK_VAR(dfy,"dfy");
	HX_STACK_LINE(175)
	Float ddfx = this->curves->__get((curveIndex + (int)2));		HX_STACK_VAR(ddfx,"ddfx");
	HX_STACK_LINE(176)
	Float ddfy = this->curves->__get((curveIndex + (int)3));		HX_STACK_VAR(ddfy,"ddfy");
	HX_STACK_LINE(177)
	Float dddfx = this->curves->__get((curveIndex + (int)4));		HX_STACK_VAR(dddfx,"dddfx");
	HX_STACK_LINE(178)
	Float dddfy = this->curves->__get((curveIndex + (int)5));		HX_STACK_VAR(dddfy,"dddfy");
	HX_STACK_LINE(179)
	Float x = dfx;		HX_STACK_VAR(x,"x");
	Float y = dfy;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(180)
	int i = (int)8;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(181)
	while((true)){
		HX_STACK_LINE(182)
		if (((x >= percent))){
			HX_STACK_LINE(183)
			Float lastX = (x - dfx);		HX_STACK_VAR(lastX,"lastX");
			HX_STACK_LINE(184)
			Float lastY = (y - dfy);		HX_STACK_VAR(lastY,"lastY");
			HX_STACK_LINE(185)
			return (lastY + (Float((((y - lastY)) * ((percent - lastX)))) / Float(((x - lastX)))));
		}
		HX_STACK_LINE(187)
		if (((i == (int)0))){
			HX_STACK_LINE(187)
			break;
		}
		HX_STACK_LINE(188)
		(i)--;
		HX_STACK_LINE(189)
		hx::AddEq(dfx,ddfx);
		HX_STACK_LINE(190)
		hx::AddEq(dfy,ddfy);
		HX_STACK_LINE(191)
		hx::AddEq(ddfx,dddfx);
		HX_STACK_LINE(192)
		hx::AddEq(ddfy,dddfy);
		HX_STACK_LINE(193)
		hx::AddEq(x,dfx);
		HX_STACK_LINE(194)
		hx::AddEq(y,dfy);
	}
	HX_STACK_LINE(196)
	return (y + (Float(((((int)1 - y)) * ((percent - x)))) / Float((((int)1 - x)))));
}


HX_DEFINE_DYNAMIC_FUNC2(CurveTimeline_obj,getCurvePercent,return )

Void CurveTimeline_obj::setCurve( int frameIndex,Float cx1,Float cy1,Float cx2,Float cy2){
{
		HX_STACK_PUSH("CurveTimeline::setCurve","spinehx/Animation.hx",148);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frameIndex,"frameIndex");
		HX_STACK_ARG(cx1,"cx1");
		HX_STACK_ARG(cy1,"cy1");
		HX_STACK_ARG(cx2,"cx2");
		HX_STACK_ARG(cy2,"cy2");
		HX_STACK_LINE(149)
		Float subdiv_step = 0.1;		HX_STACK_VAR(subdiv_step,"subdiv_step");
		HX_STACK_LINE(150)
		Float subdiv_step2 = (subdiv_step * subdiv_step);		HX_STACK_VAR(subdiv_step2,"subdiv_step2");
		HX_STACK_LINE(151)
		Float subdiv_step3 = (subdiv_step2 * subdiv_step);		HX_STACK_VAR(subdiv_step3,"subdiv_step3");
		HX_STACK_LINE(152)
		Float pre1 = ((int)3 * subdiv_step);		HX_STACK_VAR(pre1,"pre1");
		HX_STACK_LINE(153)
		Float pre2 = ((int)3 * subdiv_step2);		HX_STACK_VAR(pre2,"pre2");
		HX_STACK_LINE(154)
		Float pre4 = ((int)6 * subdiv_step2);		HX_STACK_VAR(pre4,"pre4");
		HX_STACK_LINE(155)
		Float pre5 = ((int)6 * subdiv_step3);		HX_STACK_VAR(pre5,"pre5");
		HX_STACK_LINE(156)
		Float tmp1x = ((-(cx1) * (int)2) + cx2);		HX_STACK_VAR(tmp1x,"tmp1x");
		HX_STACK_LINE(157)
		Float tmp1y = ((-(cy1) * (int)2) + cy2);		HX_STACK_VAR(tmp1y,"tmp1y");
		HX_STACK_LINE(158)
		Float tmp2x = ((((cx1 - cx2)) * (int)3) + (int)1);		HX_STACK_VAR(tmp2x,"tmp2x");
		HX_STACK_LINE(159)
		Float tmp2y = ((((cy1 - cy2)) * (int)3) + (int)1);		HX_STACK_VAR(tmp2y,"tmp2y");
		HX_STACK_LINE(160)
		int i = (frameIndex * (int)6);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(161)
		this->curves[i] = (((cx1 * pre1) + (tmp1x * pre2)) + (tmp2x * subdiv_step3));
		HX_STACK_LINE(162)
		this->curves[(i + (int)1)] = (((cy1 * pre1) + (tmp1y * pre2)) + (tmp2y * subdiv_step3));
		HX_STACK_LINE(163)
		this->curves[(i + (int)2)] = ((tmp1x * pre4) + (tmp2x * pre5));
		HX_STACK_LINE(164)
		this->curves[(i + (int)3)] = ((tmp1y * pre4) + (tmp2y * pre5));
		HX_STACK_LINE(165)
		this->curves[(i + (int)4)] = (tmp2x * pre5);
		HX_STACK_LINE(166)
		this->curves[(i + (int)5)] = (tmp2y * pre5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(CurveTimeline_obj,setCurve,(void))

Void CurveTimeline_obj::setStepped( int frameIndex){
{
		HX_STACK_PUSH("CurveTimeline::setStepped","spinehx/Animation.hx",141);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frameIndex,"frameIndex");
		HX_STACK_LINE(141)
		this->curves[(frameIndex * (int)6)] = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CurveTimeline_obj,setStepped,(void))

Void CurveTimeline_obj::setLinear( int frameIndex){
{
		HX_STACK_PUSH("CurveTimeline::setLinear","spinehx/Animation.hx",137);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frameIndex,"frameIndex");
		HX_STACK_LINE(137)
		this->curves[(frameIndex * (int)6)] = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CurveTimeline_obj,setLinear,(void))

int CurveTimeline_obj::getFrameCount( ){
	HX_STACK_PUSH("CurveTimeline::getFrameCount","spinehx/Animation.hx",133);
	HX_STACK_THIS(this);
	HX_STACK_LINE(133)
	return ::Math_obj::floor(((Float(this->curves->__Field(HX_CSTRING("length"),true)) / Float((int)6)) + (int)1));
}


HX_DEFINE_DYNAMIC_FUNC0(CurveTimeline_obj,getFrameCount,return )

Void CurveTimeline_obj::apply( ::spinehx::Skeleton skeleton,Float time,Float alpha){
{
		HX_STACK_PUSH("CurveTimeline::apply","spinehx/Animation.hx",129);
		HX_STACK_THIS(this);
		HX_STACK_ARG(skeleton,"skeleton");
		HX_STACK_ARG(time,"time");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(129)
		hx::Throw (HX_CSTRING("implement me"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CurveTimeline_obj,apply,(void))


CurveTimeline_obj::CurveTimeline_obj()
{
}

void CurveTimeline_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CurveTimeline);
	HX_MARK_MEMBER_NAME(curves,"curves");
	HX_MARK_END_CLASS();
}

void CurveTimeline_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curves,"curves");
}

Dynamic CurveTimeline_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"curves") ) { return curves; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setCurve") ) { return setCurve_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setLinear") ) { return setLinear_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setStepped") ) { return setStepped_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFrameCount") ) { return getFrameCount_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getCurvePercent") ) { return getCurvePercent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CurveTimeline_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curves") ) { curves=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CurveTimeline_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("curves"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getCurvePercent"),
	HX_CSTRING("setCurve"),
	HX_CSTRING("setStepped"),
	HX_CSTRING("setLinear"),
	HX_CSTRING("getFrameCount"),
	HX_CSTRING("apply"),
	HX_CSTRING("curves"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CurveTimeline_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CurveTimeline_obj::__mClass,"__mClass");
};

Class CurveTimeline_obj::__mClass;

void CurveTimeline_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.CurveTimeline"), hx::TCanCast< CurveTimeline_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void CurveTimeline_obj::__boot()
{
}

} // end namespace spinehx
