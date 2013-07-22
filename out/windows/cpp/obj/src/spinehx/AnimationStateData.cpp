#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_spinehx_Animation
#include <spinehx/Animation.h>
#endif
#ifndef INCLUDED_spinehx_AnimationStateData
#include <spinehx/AnimationStateData.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_SkeletonData
#include <spinehx/SkeletonData.h>
#endif
namespace spinehx{

Void AnimationStateData_obj::__construct(::spinehx::SkeletonData skeletonData)
{
HX_STACK_PUSH("AnimationStateData::new","spinehx/AnimationStateData.hx",34);
{
	HX_STACK_LINE(35)
	this->animationToMixTime = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(36)
	this->skeletonData = skeletonData;
}
;
	return null();
}

AnimationStateData_obj::~AnimationStateData_obj() { }

Dynamic AnimationStateData_obj::__CreateEmpty() { return  new AnimationStateData_obj; }
hx::ObjectPtr< AnimationStateData_obj > AnimationStateData_obj::__new(::spinehx::SkeletonData skeletonData)
{  hx::ObjectPtr< AnimationStateData_obj > result = new AnimationStateData_obj();
	result->__construct(skeletonData);
	return result;}

Dynamic AnimationStateData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationStateData_obj > result = new AnimationStateData_obj();
	result->__construct(inArgs[0]);
	return result;}

Float AnimationStateData_obj::getMix( ::spinehx::Animation _from,::spinehx::Animation _to){
	HX_STACK_PUSH("AnimationStateData::getMix","spinehx/AnimationStateData.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_ARG(_from,"_from");
	HX_STACK_ARG(_to,"_to");
	HX_STACK_LINE(60)
	::String id = ((_from->getName() + HX_CSTRING(":")) + _to->getName());		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(61)
	Dynamic time = this->animationToMixTime->get(id);		HX_STACK_VAR(time,"time");
	HX_STACK_LINE(62)
	if (((time == null()))){
		HX_STACK_LINE(62)
		return (int)0;
	}
	HX_STACK_LINE(63)
	return time;
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationStateData_obj,getMix,return )

Void AnimationStateData_obj::setMix( ::spinehx::Animation _from,::spinehx::Animation _to,Float duration){
{
		HX_STACK_PUSH("AnimationStateData::setMix","spinehx/AnimationStateData.hx",52);
		HX_STACK_THIS(this);
		HX_STACK_ARG(_from,"_from");
		HX_STACK_ARG(_to,"_to");
		HX_STACK_ARG(duration,"duration");
		HX_STACK_LINE(53)
		if (((_from == null()))){
			HX_STACK_LINE(53)
			hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("_from cannot be null.")));
		}
		HX_STACK_LINE(54)
		if (((_to == null()))){
			HX_STACK_LINE(54)
			hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("_to cannot be null.")));
		}
		HX_STACK_LINE(55)
		::String id = ((_from->getName() + HX_CSTRING(":")) + _to->getName());		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(56)
		this->animationToMixTime->set(id,duration);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AnimationStateData_obj,setMix,(void))

Void AnimationStateData_obj::setMixByName( ::String fromName,::String toName,Float duration){
{
		HX_STACK_PUSH("AnimationStateData::setMixByName","spinehx/AnimationStateData.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_ARG(fromName,"fromName");
		HX_STACK_ARG(toName,"toName");
		HX_STACK_ARG(duration,"duration");
		HX_STACK_LINE(44)
		::spinehx::Animation _from = this->skeletonData->findAnimation(fromName);		HX_STACK_VAR(_from,"_from");
		HX_STACK_LINE(45)
		if (((_from == null()))){
			HX_STACK_LINE(45)
			hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Animation not found: ") + fromName)));
		}
		HX_STACK_LINE(46)
		::spinehx::Animation _to = this->skeletonData->findAnimation(toName);		HX_STACK_VAR(_to,"_to");
		HX_STACK_LINE(47)
		if (((_to == null()))){
			HX_STACK_LINE(47)
			hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Animation not found: ") + toName)));
		}
		HX_STACK_LINE(48)
		::String id = ((fromName + HX_CSTRING(":")) + toName);		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(49)
		this->animationToMixTime->set(id,duration);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AnimationStateData_obj,setMixByName,(void))

::spinehx::SkeletonData AnimationStateData_obj::getSkeletonData( ){
	HX_STACK_PUSH("AnimationStateData::getSkeletonData","spinehx/AnimationStateData.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_LINE(39)
	return this->skeletonData;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationStateData_obj,getSkeletonData,return )

::String AnimationStateData_obj::makeIdByName( ::String name1,::String name2){
	HX_STACK_PUSH("AnimationStateData::makeIdByName","spinehx/AnimationStateData.hx",67);
	HX_STACK_ARG(name1,"name1");
	HX_STACK_ARG(name2,"name2");
	HX_STACK_LINE(67)
	return ((name1 + HX_CSTRING(":")) + name2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AnimationStateData_obj,makeIdByName,return )

::String AnimationStateData_obj::makeId( ::spinehx::Animation a1,::spinehx::Animation a2){
	HX_STACK_PUSH("AnimationStateData::makeId","spinehx/AnimationStateData.hx",70);
	HX_STACK_ARG(a1,"a1");
	HX_STACK_ARG(a2,"a2");
	HX_STACK_LINE(70)
	return ((a1->getName() + HX_CSTRING(":")) + a2->getName());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AnimationStateData_obj,makeId,return )


AnimationStateData_obj::AnimationStateData_obj()
{
}

void AnimationStateData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationStateData);
	HX_MARK_MEMBER_NAME(animationToMixTime,"animationToMixTime");
	HX_MARK_MEMBER_NAME(skeletonData,"skeletonData");
	HX_MARK_END_CLASS();
}

void AnimationStateData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animationToMixTime,"animationToMixTime");
	HX_VISIT_MEMBER_NAME(skeletonData,"skeletonData");
}

Dynamic AnimationStateData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"makeId") ) { return makeId_dyn(); }
		if (HX_FIELD_EQ(inName,"getMix") ) { return getMix_dyn(); }
		if (HX_FIELD_EQ(inName,"setMix") ) { return setMix_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"makeIdByName") ) { return makeIdByName_dyn(); }
		if (HX_FIELD_EQ(inName,"setMixByName") ) { return setMixByName_dyn(); }
		if (HX_FIELD_EQ(inName,"skeletonData") ) { return skeletonData; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getSkeletonData") ) { return getSkeletonData_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"animationToMixTime") ) { return animationToMixTime; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationStateData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"skeletonData") ) { skeletonData=inValue.Cast< ::spinehx::SkeletonData >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"animationToMixTime") ) { animationToMixTime=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationStateData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("animationToMixTime"));
	outFields->push(HX_CSTRING("skeletonData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("makeIdByName"),
	HX_CSTRING("makeId"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getMix"),
	HX_CSTRING("setMix"),
	HX_CSTRING("setMixByName"),
	HX_CSTRING("getSkeletonData"),
	HX_CSTRING("animationToMixTime"),
	HX_CSTRING("skeletonData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationStateData_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationStateData_obj::__mClass,"__mClass");
};

Class AnimationStateData_obj::__mClass;

void AnimationStateData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.AnimationStateData"), hx::TCanCast< AnimationStateData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AnimationStateData_obj::__boot()
{
}

} // end namespace spinehx
