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
#ifndef INCLUDED_spinehx_RotateTimeline
#include <spinehx/RotateTimeline.h>
#endif
#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_Timeline
#include <spinehx/Timeline.h>
#endif
namespace spinehx{

Void RotateTimeline_obj::__construct(int frameCount)
{
HX_STACK_PUSH("RotateTimeline::new","spinehx/Animation.hx",200);
{
	HX_STACK_LINE(204)
	this->boneIndex = (int)0;
	HX_STACK_LINE(208)
	super::__construct(frameCount);
	HX_STACK_LINE(209)
	this->frames = ::spinehx::ArrayUtils_obj::allocFloat((frameCount * (int)2));
}
;
	return null();
}

RotateTimeline_obj::~RotateTimeline_obj() { }

Dynamic RotateTimeline_obj::__CreateEmpty() { return  new RotateTimeline_obj; }
hx::ObjectPtr< RotateTimeline_obj > RotateTimeline_obj::__new(int frameCount)
{  hx::ObjectPtr< RotateTimeline_obj > result = new RotateTimeline_obj();
	result->__construct(frameCount);
	return result;}

Dynamic RotateTimeline_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RotateTimeline_obj > result = new RotateTimeline_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RotateTimeline_obj::apply( ::spinehx::Skeleton skeleton,Float time,Float alpha){
{
		HX_STACK_PUSH("RotateTimeline::apply","spinehx/Animation.hx",231);
		HX_STACK_THIS(this);
		HX_STACK_ARG(skeleton,"skeleton");
		HX_STACK_ARG(time,"time");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(232)
		if (((time < this->frames->__get((int)0)))){
			HX_STACK_LINE(232)
			return null();
		}
		HX_STACK_LINE(234)
		::spinehx::Bone bone = skeleton->bones->__get(this->boneIndex).StaticCast< ::spinehx::Bone >();		HX_STACK_VAR(bone,"bone");
		HX_STACK_LINE(236)
		if (((time >= this->frames->__get((this->frames->__Field(HX_CSTRING("length"),true) - (int)2))))){
			HX_STACK_LINE(237)
			Float amount = ((bone->data->rotation + this->frames->__get((this->frames->__Field(HX_CSTRING("length"),true) - (int)1))) - bone->rotation);		HX_STACK_VAR(amount,"amount");
			HX_STACK_LINE(238)
			while(((amount > (int)180))){
				HX_STACK_LINE(239)
				hx::SubEq(amount,(int)360);
			}
			HX_STACK_LINE(240)
			while(((amount < (int)-180))){
				HX_STACK_LINE(241)
				hx::AddEq(amount,(int)360);
			}
			HX_STACK_LINE(242)
			hx::AddEq(bone->rotation,(amount * alpha));
			HX_STACK_LINE(243)
			return null();
		}
		HX_STACK_LINE(247)
		int frameIndex = ::spinehx::Animation_obj::binarySearch(this->frames,time,(int)2);		HX_STACK_VAR(frameIndex,"frameIndex");
		HX_STACK_LINE(248)
		Float lastFrameValue = this->frames->__get((frameIndex - (int)1));		HX_STACK_VAR(lastFrameValue,"lastFrameValue");
		HX_STACK_LINE(249)
		Float frameTime = this->frames->__get(frameIndex);		HX_STACK_VAR(frameTime,"frameTime");
		struct _Function_1_1{
			inline static Float Block( Float &time,Float &frameTime,::spinehx::RotateTimeline_obj *__this,int &frameIndex){
				HX_STACK_PUSH("*::closure","spinehx/Animation.hx",250);
				{
					HX_STACK_LINE(250)
					Float value = ((int)1 - (Float(((time - frameTime))) / Float(((__this->frames->__get((frameIndex + (int)-2)) - frameTime)))));		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(250)
					return (  (((value < (int)0))) ? Float((int)0) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(250)
		Float percent = _Function_1_1::Block(time,frameTime,this,frameIndex);		HX_STACK_VAR(percent,"percent");
		HX_STACK_LINE(251)
		percent = this->getCurvePercent(::Math_obj::floor(((Float(frameIndex) / Float((int)2)) - (int)1)),percent);
		HX_STACK_LINE(253)
		Float amount = (this->frames->__get((frameIndex + (int)1)) - lastFrameValue);		HX_STACK_VAR(amount,"amount");
		HX_STACK_LINE(254)
		while(((amount > (int)180))){
			HX_STACK_LINE(255)
			hx::SubEq(amount,(int)360);
		}
		HX_STACK_LINE(256)
		while(((amount < (int)-180))){
			HX_STACK_LINE(257)
			hx::AddEq(amount,(int)360);
		}
		HX_STACK_LINE(258)
		amount = ((bone->data->rotation + ((lastFrameValue + (amount * percent)))) - bone->rotation);
		HX_STACK_LINE(259)
		while(((amount > (int)180))){
			HX_STACK_LINE(260)
			hx::SubEq(amount,(int)360);
		}
		HX_STACK_LINE(261)
		while(((amount < (int)-180))){
			HX_STACK_LINE(262)
			hx::AddEq(amount,(int)360);
		}
		HX_STACK_LINE(263)
		hx::AddEq(bone->rotation,(amount * alpha));
	}
return null();
}


Void RotateTimeline_obj::setFrame( int frameIndex,Float time,Float angle){
{
		HX_STACK_PUSH("RotateTimeline::setFrame","spinehx/Animation.hx",225);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frameIndex,"frameIndex");
		HX_STACK_ARG(time,"time");
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(226)
		hx::MultEq(frameIndex,(int)2);
		HX_STACK_LINE(227)
		this->frames[frameIndex] = time;
		HX_STACK_LINE(228)
		this->frames[(frameIndex + (int)1)] = angle;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RotateTimeline_obj,setFrame,(void))

Array< Float > RotateTimeline_obj::getFrames( ){
	HX_STACK_PUSH("RotateTimeline::getFrames","spinehx/Animation.hx",220);
	HX_STACK_THIS(this);
	HX_STACK_LINE(220)
	return this->frames;
}


HX_DEFINE_DYNAMIC_FUNC0(RotateTimeline_obj,getFrames,return )

int RotateTimeline_obj::getBoneIndex( ){
	HX_STACK_PUSH("RotateTimeline::getBoneIndex","spinehx/Animation.hx",216);
	HX_STACK_THIS(this);
	HX_STACK_LINE(216)
	return this->boneIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(RotateTimeline_obj,getBoneIndex,return )

Void RotateTimeline_obj::setBoneIndex( int boneIndex){
{
		HX_STACK_PUSH("RotateTimeline::setBoneIndex","spinehx/Animation.hx",212);
		HX_STACK_THIS(this);
		HX_STACK_ARG(boneIndex,"boneIndex");
		HX_STACK_LINE(212)
		this->boneIndex = boneIndex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RotateTimeline_obj,setBoneIndex,(void))


RotateTimeline_obj::RotateTimeline_obj()
{
}

void RotateTimeline_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RotateTimeline);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(boneIndex,"boneIndex");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RotateTimeline_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(boneIndex,"boneIndex");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RotateTimeline_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic RotateTimeline_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void RotateTimeline_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(RotateTimeline_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RotateTimeline_obj::__mClass,"__mClass");
};

Class RotateTimeline_obj::__mClass;

void RotateTimeline_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.RotateTimeline"), hx::TCanCast< RotateTimeline_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RotateTimeline_obj::__boot()
{
}

} // end namespace spinehx
