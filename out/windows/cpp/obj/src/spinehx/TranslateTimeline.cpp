#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_spinehx_Animation
#include <spinehx/Animation.h>
#endif
#ifndef INCLUDED_spinehx_ArrayUtils
#include <spinehx/ArrayUtils.h>
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

Void TranslateTimeline_obj::__construct(int frameCount)
{
HX_STACK_PUSH("TranslateTimeline::new","spinehx/Animation.hx",267);
{
	HX_STACK_LINE(272)
	this->boneIndex = (int)0;
	HX_STACK_LINE(276)
	super::__construct(frameCount);
	HX_STACK_LINE(277)
	this->frames = ::spinehx::ArrayUtils_obj::allocFloat((frameCount * (int)3));
}
;
	return null();
}

TranslateTimeline_obj::~TranslateTimeline_obj() { }

Dynamic TranslateTimeline_obj::__CreateEmpty() { return  new TranslateTimeline_obj; }
hx::ObjectPtr< TranslateTimeline_obj > TranslateTimeline_obj::__new(int frameCount)
{  hx::ObjectPtr< TranslateTimeline_obj > result = new TranslateTimeline_obj();
	result->__construct(frameCount);
	return result;}

Dynamic TranslateTimeline_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TranslateTimeline_obj > result = new TranslateTimeline_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TranslateTimeline_obj::apply( ::spinehx::Skeleton skeleton,Float time,Float alpha){
{
		HX_STACK_PUSH("TranslateTimeline::apply","spinehx/Animation.hx",300);
		HX_STACK_THIS(this);
		HX_STACK_ARG(skeleton,"skeleton");
		HX_STACK_ARG(time,"time");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(301)
		if (((time < this->frames->__get((int)0)))){
			HX_STACK_LINE(301)
			return null();
		}
		HX_STACK_LINE(303)
		::spinehx::Bone bone = skeleton->bones->__get(this->boneIndex).StaticCast< ::spinehx::Bone >();		HX_STACK_VAR(bone,"bone");
		HX_STACK_LINE(305)
		if (((time >= this->frames->__get((this->frames->__Field(HX_CSTRING("length"),true) - (int)3))))){
			HX_STACK_LINE(306)
			hx::AddEq(bone->x,((((bone->data->x + this->frames->__get((this->frames->__Field(HX_CSTRING("length"),true) - (int)2))) - bone->x)) * alpha));
			HX_STACK_LINE(307)
			hx::AddEq(bone->y,((((bone->data->y + this->frames->__get((this->frames->__Field(HX_CSTRING("length"),true) - (int)1))) - bone->y)) * alpha));
			HX_STACK_LINE(308)
			return null();
		}
		HX_STACK_LINE(312)
		int frameIndex = ::spinehx::Animation_obj::binarySearch(this->frames,time,(int)3);		HX_STACK_VAR(frameIndex,"frameIndex");
		HX_STACK_LINE(313)
		Float lastFrameX = this->frames->__get((frameIndex - (int)2));		HX_STACK_VAR(lastFrameX,"lastFrameX");
		HX_STACK_LINE(314)
		Float lastFrameY = this->frames->__get((frameIndex - (int)1));		HX_STACK_VAR(lastFrameY,"lastFrameY");
		HX_STACK_LINE(315)
		Float frameTime = this->frames->__get(frameIndex);		HX_STACK_VAR(frameTime,"frameTime");
		struct _Function_1_1{
			inline static Float Block( Float &time,Float &frameTime,::spinehx::TranslateTimeline_obj *__this,int &frameIndex){
				HX_STACK_PUSH("*::closure","spinehx/Animation.hx",316);
				{
					HX_STACK_LINE(316)
					Float value = ((int)1 - (Float(((time - frameTime))) / Float(((__this->frames->__get((frameIndex + (int)-3)) - frameTime)))));		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(316)
					return (  (((value < (int)0))) ? Float((int)0) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(316)
		Float percent = _Function_1_1::Block(time,frameTime,this,frameIndex);		HX_STACK_VAR(percent,"percent");
		HX_STACK_LINE(317)
		percent = this->getCurvePercent(::Math_obj::floor(((Float(frameIndex) / Float((int)3)) - (int)1)),percent);
		HX_STACK_LINE(319)
		hx::AddEq(bone->x,(((((bone->data->x + lastFrameX) + (((this->frames->__get((frameIndex + (int)1)) - lastFrameX)) * percent)) - bone->x)) * alpha));
		HX_STACK_LINE(320)
		hx::AddEq(bone->y,(((((bone->data->y + lastFrameY) + (((this->frames->__get((frameIndex + (int)2)) - lastFrameY)) * percent)) - bone->y)) * alpha));
	}
return null();
}


Void TranslateTimeline_obj::setFrame( int frameIndex,Float time,Float x,Float y){
{
		HX_STACK_PUSH("TranslateTimeline::setFrame","spinehx/Animation.hx",293);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frameIndex,"frameIndex");
		HX_STACK_ARG(time,"time");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(294)
		hx::MultEq(frameIndex,(int)3);
		HX_STACK_LINE(295)
		this->frames[frameIndex] = time;
		HX_STACK_LINE(296)
		this->frames[(frameIndex + (int)1)] = x;
		HX_STACK_LINE(297)
		this->frames[(frameIndex + (int)2)] = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TranslateTimeline_obj,setFrame,(void))

Array< Float > TranslateTimeline_obj::getFrames( ){
	HX_STACK_PUSH("TranslateTimeline::getFrames","spinehx/Animation.hx",288);
	HX_STACK_THIS(this);
	HX_STACK_LINE(288)
	return this->frames;
}


HX_DEFINE_DYNAMIC_FUNC0(TranslateTimeline_obj,getFrames,return )

int TranslateTimeline_obj::getBoneIndex( ){
	HX_STACK_PUSH("TranslateTimeline::getBoneIndex","spinehx/Animation.hx",284);
	HX_STACK_THIS(this);
	HX_STACK_LINE(284)
	return this->boneIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(TranslateTimeline_obj,getBoneIndex,return )

Void TranslateTimeline_obj::setBoneIndex( int boneIndex){
{
		HX_STACK_PUSH("TranslateTimeline::setBoneIndex","spinehx/Animation.hx",280);
		HX_STACK_THIS(this);
		HX_STACK_ARG(boneIndex,"boneIndex");
		HX_STACK_LINE(280)
		this->boneIndex = boneIndex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TranslateTimeline_obj,setBoneIndex,(void))


TranslateTimeline_obj::TranslateTimeline_obj()
{
}

void TranslateTimeline_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TranslateTimeline);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(boneIndex,"boneIndex");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TranslateTimeline_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(boneIndex,"boneIndex");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic TranslateTimeline_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setFrame") ) { return setFrame_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFrames") ) { return getFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"boneIndex") ) { return boneIndex; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBoneIndex") ) { return getBoneIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setBoneIndex") ) { return setBoneIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TranslateTimeline_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"boneIndex") ) { boneIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TranslateTimeline_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("boneIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("apply"),
	HX_CSTRING("setFrame"),
	HX_CSTRING("getFrames"),
	HX_CSTRING("getBoneIndex"),
	HX_CSTRING("setBoneIndex"),
	HX_CSTRING("frames"),
	HX_CSTRING("boneIndex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TranslateTimeline_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TranslateTimeline_obj::__mClass,"__mClass");
};

Class TranslateTimeline_obj::__mClass;

void TranslateTimeline_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.TranslateTimeline"), hx::TCanCast< TranslateTimeline_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TranslateTimeline_obj::__boot()
{
}

} // end namespace spinehx
