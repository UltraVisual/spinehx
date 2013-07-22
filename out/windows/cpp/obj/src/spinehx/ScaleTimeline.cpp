#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_spinehx_Animation
#include <spinehx/Animation.h>
#endif
#ifndef INCLUDED_spinehx_Bone
#include <spinehx/Bone.h>
#endif
#ifndef INCLUDED_spinehx_BoneData
#include <spinehx/BoneData.h>
#endif
#ifndef INCLUDED_spinehx_CurveTimeline
#include <spinehx/CurveTimeline.h>
#endif
#ifndef INCLUDED_spinehx_ScaleTimeline
#include <spinehx/ScaleTimeline.h>
#endif
#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_Timeline
#include <spinehx/Timeline.h>
#endif
#ifndef INCLUDED_spinehx_TranslateTimeline
#include <spinehx/TranslateTimeline.h>
#endif
namespace spinehx{

Void ScaleTimeline_obj::__construct(int frameCount)
{
HX_STACK_PUSH("ScaleTimeline::new","spinehx/Animation.hx",325);
{
	HX_STACK_LINE(325)
	super::__construct(frameCount);
}
;
	return null();
}

ScaleTimeline_obj::~ScaleTimeline_obj() { }

Dynamic ScaleTimeline_obj::__CreateEmpty() { return  new ScaleTimeline_obj; }
hx::ObjectPtr< ScaleTimeline_obj > ScaleTimeline_obj::__new(int frameCount)
{  hx::ObjectPtr< ScaleTimeline_obj > result = new ScaleTimeline_obj();
	result->__construct(frameCount);
	return result;}

Dynamic ScaleTimeline_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScaleTimeline_obj > result = new ScaleTimeline_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ScaleTimeline_obj::apply( ::spinehx::Skeleton skeleton,Float time,Float alpha){
{
		HX_STACK_PUSH("ScaleTimeline::apply","spinehx/Animation.hx",329);
		HX_STACK_THIS(this);
		HX_STACK_ARG(skeleton,"skeleton");
		HX_STACK_ARG(time,"time");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(330)
		if (((time < this->frames->__get((int)0)))){
			HX_STACK_LINE(330)
			return null();
		}
		HX_STACK_LINE(332)
		::spinehx::Bone bone = skeleton->bones->__get(this->boneIndex).StaticCast< ::spinehx::Bone >();		HX_STACK_VAR(bone,"bone");
		HX_STACK_LINE(333)
		if (((time >= this->frames->__get((this->frames->__Field(HX_CSTRING("length"),true) - (int)3))))){
			HX_STACK_LINE(334)
			hx::AddEq(bone->scaleX,(((((bone->data->scaleX - (int)1) + this->frames->__get((this->frames->__Field(HX_CSTRING("length"),true) - (int)2))) - bone->scaleX)) * alpha));
			HX_STACK_LINE(335)
			hx::AddEq(bone->scaleY,(((((bone->data->scaleY - (int)1) + this->frames->__get((this->frames->__Field(HX_CSTRING("length"),true) - (int)1))) - bone->scaleY)) * alpha));
			HX_STACK_LINE(336)
			return null();
		}
		HX_STACK_LINE(340)
		int frameIndex = ::spinehx::Animation_obj::binarySearch(this->frames,time,(int)3);		HX_STACK_VAR(frameIndex,"frameIndex");
		HX_STACK_LINE(341)
		Float lastFrameX = this->frames->__get((frameIndex - (int)2));		HX_STACK_VAR(lastFrameX,"lastFrameX");
		HX_STACK_LINE(342)
		Float lastFrameY = this->frames->__get((frameIndex - (int)1));		HX_STACK_VAR(lastFrameY,"lastFrameY");
		HX_STACK_LINE(343)
		Float frameTime = this->frames->__get(frameIndex);		HX_STACK_VAR(frameTime,"frameTime");
		struct _Function_1_1{
			inline static Float Block( Float &time,Float &frameTime,::spinehx::ScaleTimeline_obj *__this,int &frameIndex){
				HX_STACK_PUSH("*::closure","spinehx/Animation.hx",344);
				{
					HX_STACK_LINE(344)
					Float value = ((int)1 - (Float(((time - frameTime))) / Float(((__this->frames->__get((frameIndex + (int)-3)) - frameTime)))));		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(344)
					return (  (((value < (int)0))) ? Float((int)0) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(344)
		Float percent = _Function_1_1::Block(time,frameTime,this,frameIndex);		HX_STACK_VAR(percent,"percent");
		HX_STACK_LINE(345)
		percent = this->getCurvePercent(::Math_obj::floor(((Float(frameIndex) / Float((int)3)) - (int)1)),percent);
		HX_STACK_LINE(347)
		hx::AddEq(bone->scaleX,((((((bone->data->scaleX - (int)1) + lastFrameX) + (((this->frames->__get((frameIndex + (int)1)) - lastFrameX)) * percent)) - bone->scaleX)) * alpha));
		HX_STACK_LINE(349)
		hx::AddEq(bone->scaleY,((((((bone->data->scaleY - (int)1) + lastFrameY) + (((this->frames->__get((frameIndex + (int)2)) - lastFrameY)) * percent)) - bone->scaleY)) * alpha));
	}
return null();
}



ScaleTimeline_obj::ScaleTimeline_obj()
{
}

void ScaleTimeline_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScaleTimeline);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScaleTimeline_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ScaleTimeline_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScaleTimeline_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ScaleTimeline_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("apply"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScaleTimeline_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScaleTimeline_obj::__mClass,"__mClass");
};

Class ScaleTimeline_obj::__mClass;

void ScaleTimeline_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.ScaleTimeline"), hx::TCanCast< ScaleTimeline_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ScaleTimeline_obj::__boot()
{
}

} // end namespace spinehx
