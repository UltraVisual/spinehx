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
#ifndef INCLUDED_spinehx_Color
#include <spinehx/Color.h>
#endif
#ifndef INCLUDED_spinehx_ColorTimeline
#include <spinehx/ColorTimeline.h>
#endif
#ifndef INCLUDED_spinehx_CurveTimeline
#include <spinehx/CurveTimeline.h>
#endif
#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_Slot
#include <spinehx/Slot.h>
#endif
#ifndef INCLUDED_spinehx_Timeline
#include <spinehx/Timeline.h>
#endif
namespace spinehx{

Void ColorTimeline_obj::__construct(int frameCount)
{
HX_STACK_PUSH("ColorTimeline::new","spinehx/Animation.hx",354);
{
	HX_STACK_LINE(361)
	this->slotIndex = (int)0;
	HX_STACK_LINE(365)
	super::__construct(frameCount);
	HX_STACK_LINE(366)
	this->frames = ::spinehx::ArrayUtils_obj::allocFloat((frameCount * (int)5));
}
;
	return null();
}

ColorTimeline_obj::~ColorTimeline_obj() { }

Dynamic ColorTimeline_obj::__CreateEmpty() { return  new ColorTimeline_obj; }
hx::ObjectPtr< ColorTimeline_obj > ColorTimeline_obj::__new(int frameCount)
{  hx::ObjectPtr< ColorTimeline_obj > result = new ColorTimeline_obj();
	result->__construct(frameCount);
	return result;}

Dynamic ColorTimeline_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTimeline_obj > result = new ColorTimeline_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ColorTimeline_obj::apply( ::spinehx::Skeleton skeleton,Float time,Float alpha){
{
		HX_STACK_PUSH("ColorTimeline::apply","spinehx/Animation.hx",391);
		HX_STACK_THIS(this);
		HX_STACK_ARG(skeleton,"skeleton");
		HX_STACK_ARG(time,"time");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(392)
		if (((time < this->frames->__get((int)0)))){
			HX_STACK_LINE(392)
			return null();
		}
		HX_STACK_LINE(394)
		::spinehx::Color color = skeleton->slots->__get(this->slotIndex).StaticCast< ::spinehx::Slot >()->color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(396)
		if (((time >= this->frames->__get((this->frames->__Field(HX_CSTRING("length"),true) - (int)5))))){
			HX_STACK_LINE(397)
			int i = (this->frames->__Field(HX_CSTRING("length"),true) - (int)1);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(398)
			Float r = this->frames->__get((i - (int)3));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(399)
			Float g = this->frames->__get((i - (int)2));		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(400)
			Float b = this->frames->__get((i - (int)1));		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(401)
			Float a = this->frames->__get(i);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(402)
			color->set(r,g,b,a);
			HX_STACK_LINE(403)
			return null();
		}
		HX_STACK_LINE(407)
		int frameIndex = ::spinehx::Animation_obj::binarySearch(this->frames,time,(int)5);		HX_STACK_VAR(frameIndex,"frameIndex");
		HX_STACK_LINE(408)
		Float lastFrameR = this->frames->__get((frameIndex - (int)4));		HX_STACK_VAR(lastFrameR,"lastFrameR");
		HX_STACK_LINE(409)
		Float lastFrameG = this->frames->__get((frameIndex - (int)3));		HX_STACK_VAR(lastFrameG,"lastFrameG");
		HX_STACK_LINE(410)
		Float lastFrameB = this->frames->__get((frameIndex - (int)2));		HX_STACK_VAR(lastFrameB,"lastFrameB");
		HX_STACK_LINE(411)
		Float lastFrameA = this->frames->__get((frameIndex - (int)1));		HX_STACK_VAR(lastFrameA,"lastFrameA");
		HX_STACK_LINE(412)
		Float frameTime = this->frames->__get(frameIndex);		HX_STACK_VAR(frameTime,"frameTime");
		struct _Function_1_1{
			inline static Float Block( Float &time,Float &frameTime,::spinehx::ColorTimeline_obj *__this,int &frameIndex){
				HX_STACK_PUSH("*::closure","spinehx/Animation.hx",413);
				{
					HX_STACK_LINE(413)
					Float value = ((int)1 - (Float(((time - frameTime))) / Float(((__this->frames->__get((frameIndex + (int)-5)) - frameTime)))));		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(413)
					return (  (((value < (int)0))) ? Float((int)0) : Float((  (((value > (int)1))) ? Float((int)1) : Float(value) )) );
				}
				return null();
			}
		};
		HX_STACK_LINE(413)
		Float percent = _Function_1_1::Block(time,frameTime,this,frameIndex);		HX_STACK_VAR(percent,"percent");
		HX_STACK_LINE(414)
		percent = this->getCurvePercent(::Math_obj::floor(((Float(frameIndex) / Float((int)5)) - (int)1)),percent);
		HX_STACK_LINE(416)
		Float r = (lastFrameR + (((this->frames->__get((frameIndex + (int)1)) - lastFrameR)) * percent));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(417)
		Float g = (lastFrameG + (((this->frames->__get((frameIndex + (int)2)) - lastFrameG)) * percent));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(418)
		Float b = (lastFrameB + (((this->frames->__get((frameIndex + (int)3)) - lastFrameB)) * percent));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(419)
		Float a = (lastFrameA + (((this->frames->__get((frameIndex + (int)4)) - lastFrameA)) * percent));		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(420)
		if (((alpha < (int)1))){
			HX_STACK_LINE(421)
			color->add((((r - color->r)) * alpha),(((g - color->g)) * alpha),(((b - color->b)) * alpha),(((a - color->a)) * alpha));
		}
		else{
			HX_STACK_LINE(423)
			color->set(r,g,b,a);
		}
	}
return null();
}


Void ColorTimeline_obj::setFrame( int frameIndex,Float time,Float r,Float g,Float b,Float a){
{
		HX_STACK_PUSH("ColorTimeline::setFrame","spinehx/Animation.hx",382);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frameIndex,"frameIndex");
		HX_STACK_ARG(time,"time");
		HX_STACK_ARG(r,"r");
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(b,"b");
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(383)
		hx::MultEq(frameIndex,(int)5);
		HX_STACK_LINE(384)
		this->frames[frameIndex] = time;
		HX_STACK_LINE(385)
		this->frames[(frameIndex + (int)1)] = r;
		HX_STACK_LINE(386)
		this->frames[(frameIndex + (int)2)] = g;
		HX_STACK_LINE(387)
		this->frames[(frameIndex + (int)3)] = b;
		HX_STACK_LINE(388)
		this->frames[(frameIndex + (int)4)] = a;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(ColorTimeline_obj,setFrame,(void))

Array< Float > ColorTimeline_obj::getFrames( ){
	HX_STACK_PUSH("ColorTimeline::getFrames","spinehx/Animation.hx",377);
	HX_STACK_THIS(this);
	HX_STACK_LINE(377)
	return this->frames;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTimeline_obj,getFrames,return )

int ColorTimeline_obj::getSlotIndex( ){
	HX_STACK_PUSH("ColorTimeline::getSlotIndex","spinehx/Animation.hx",373);
	HX_STACK_THIS(this);
	HX_STACK_LINE(373)
	return this->slotIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTimeline_obj,getSlotIndex,return )

Void ColorTimeline_obj::setSlotIndex( int slotIndex){
{
		HX_STACK_PUSH("ColorTimeline::setSlotIndex","spinehx/Animation.hx",369);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slotIndex,"slotIndex");
		HX_STACK_LINE(369)
		this->slotIndex = slotIndex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTimeline_obj,setSlotIndex,(void))


ColorTimeline_obj::ColorTimeline_obj()
{
}

void ColorTimeline_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ColorTimeline);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(slotIndex,"slotIndex");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ColorTimeline_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(slotIndex,"slotIndex");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ColorTimeline_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"slotIndex") ) { return slotIndex; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getSlotIndex") ) { return getSlotIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setSlotIndex") ) { return setSlotIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTimeline_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"slotIndex") ) { slotIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTimeline_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("slotIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("apply"),
	HX_CSTRING("setFrame"),
	HX_CSTRING("getFrames"),
	HX_CSTRING("getSlotIndex"),
	HX_CSTRING("setSlotIndex"),
	HX_CSTRING("frames"),
	HX_CSTRING("slotIndex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTimeline_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTimeline_obj::__mClass,"__mClass");
};

Class ColorTimeline_obj::__mClass;

void ColorTimeline_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.ColorTimeline"), hx::TCanCast< ColorTimeline_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ColorTimeline_obj::__boot()
{
}

} // end namespace spinehx
