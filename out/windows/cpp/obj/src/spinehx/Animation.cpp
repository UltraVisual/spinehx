#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_spinehx_Animation
#include <spinehx/Animation.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_Timeline
#include <spinehx/Timeline.h>
#endif
namespace spinehx{

Void Animation_obj::__construct(::String name,Array< ::Dynamic > timelines,Float duration)
{
HX_STACK_PUSH("Animation::new","spinehx/Animation.hx",31);
{
	HX_STACK_LINE(35)
	this->duration = (int)0;
	HX_STACK_LINE(38)
	if (((name == null()))){
		HX_STACK_LINE(38)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("name cannot be null.")));
	}
	HX_STACK_LINE(39)
	if (((timelines == null()))){
		HX_STACK_LINE(39)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("timelines cannot be null.")));
	}
	HX_STACK_LINE(40)
	this->name = name;
	HX_STACK_LINE(41)
	this->timelines = timelines;
	HX_STACK_LINE(42)
	this->duration = duration;
}
;
	return null();
}

Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(::String name,Array< ::Dynamic > timelines,Float duration)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(name,timelines,duration);
	return result;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > result = new Animation_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String Animation_obj::toString( ){
	HX_STACK_PUSH("Animation::toString","spinehx/Animation.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_LINE(82)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,toString,return )

::String Animation_obj::getName( ){
	HX_STACK_PUSH("Animation::getName","spinehx/Animation.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_LINE(78)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getName,return )

Void Animation_obj::mix( ::spinehx::Skeleton skeleton,Float time,bool loop,Float alpha){
{
		HX_STACK_PUSH("Animation::mix","spinehx/Animation.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_ARG(skeleton,"skeleton");
		HX_STACK_ARG(time,"time");
		HX_STACK_ARG(loop,"loop");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(70)
		if (((skeleton == null()))){
			HX_STACK_LINE(70)
			hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("skeleton cannot be null.")));
		}
		HX_STACK_LINE(72)
		if (((bool(loop) && bool((this->duration != (int)0))))){
			HX_STACK_LINE(72)
			hx::ModEq(time,this->duration);
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->timelines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(74)
			while(((_g < _g1->length))){
				HX_STACK_LINE(74)
				::spinehx::Timeline timeline = _g1->__get(_g).StaticCast< ::spinehx::Timeline >();		HX_STACK_VAR(timeline,"timeline");
				HX_STACK_LINE(74)
				++(_g);
				HX_STACK_LINE(75)
				timeline->apply(skeleton,time,alpha);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Animation_obj,mix,(void))

Void Animation_obj::apply( ::spinehx::Skeleton skeleton,Float time,bool loop){
{
		HX_STACK_PUSH("Animation::apply","spinehx/Animation.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_ARG(skeleton,"skeleton");
		HX_STACK_ARG(time,"time");
		HX_STACK_ARG(loop,"loop");
		HX_STACK_LINE(60)
		if (((skeleton == null()))){
			HX_STACK_LINE(60)
			hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("skeleton cannot be null.")));
		}
		HX_STACK_LINE(62)
		if (((bool(loop) && bool((this->duration != (int)0))))){
			HX_STACK_LINE(62)
			hx::ModEq(time,this->duration);
		}
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->timelines;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(63)
			while(((_g < _g1->length))){
				HX_STACK_LINE(63)
				::spinehx::Timeline timeline = _g1->__get(_g).StaticCast< ::spinehx::Timeline >();		HX_STACK_VAR(timeline,"timeline");
				HX_STACK_LINE(63)
				++(_g);
				HX_STACK_LINE(64)
				timeline->apply(skeleton,time,(int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Animation_obj,apply,(void))

Void Animation_obj::setDuration( Float duration){
{
		HX_STACK_PUSH("Animation::setDuration","spinehx/Animation.hx",54);
		HX_STACK_THIS(this);
		HX_STACK_ARG(duration,"duration");
		HX_STACK_LINE(54)
		this->duration = duration;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,setDuration,(void))

Float Animation_obj::getDuration( ){
	HX_STACK_PUSH("Animation::getDuration","spinehx/Animation.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_LINE(50)
	return this->duration;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getDuration,return )

Array< ::Dynamic > Animation_obj::getTimelines( ){
	HX_STACK_PUSH("Animation::getTimelines","spinehx/Animation.hx",45);
	HX_STACK_THIS(this);
	HX_STACK_LINE(45)
	return this->timelines;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getTimelines,return )

int Animation_obj::binarySearch( Array< Float > values,Float target,int step){
	HX_STACK_PUSH("Animation::binarySearch","spinehx/Animation.hx",87);
	HX_STACK_ARG(values,"values");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(step,"step");
	HX_STACK_LINE(88)
	int low = (int)0;		HX_STACK_VAR(low,"low");
	HX_STACK_LINE(89)
	int high = ::Math_obj::floor(((Float(values->__Field(HX_CSTRING("length"),true)) / Float(step)) - (int)2));		HX_STACK_VAR(high,"high");
	HX_STACK_LINE(90)
	if (((high == (int)0))){
		HX_STACK_LINE(90)
		return step;
	}
	HX_STACK_LINE(91)
	int current = hx::UShr(high,(int)1);		HX_STACK_VAR(current,"current");
	HX_STACK_LINE(92)
	while((true)){
		HX_STACK_LINE(93)
		if (((values->__get((((current + (int)1)) * step)) <= target))){
			HX_STACK_LINE(94)
			low = (current + (int)1);
		}
		else{
			HX_STACK_LINE(96)
			high = current;
		}
		HX_STACK_LINE(97)
		if (((low == high))){
			HX_STACK_LINE(97)
			return (((low + (int)1)) * step);
		}
		HX_STACK_LINE(98)
		current = hx::UShr((low + high),(int)1);
	}
	HX_STACK_LINE(92)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Animation_obj,binarySearch,return )

int Animation_obj::linearSearch( Array< Float > values,Float target,int step){
	HX_STACK_PUSH("Animation::linearSearch","spinehx/Animation.hx",102);
	HX_STACK_ARG(values,"values");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(step,"step");
	HX_STACK_LINE(103)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(103)
	int last = (values->__Field(HX_CSTRING("length"),true) - step);		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(104)
	while(((i <= last))){
		HX_STACK_LINE(105)
		if (((values->__get(i) > target))){
			HX_STACK_LINE(105)
			return i;
		}
		HX_STACK_LINE(106)
		hx::AddEq(i,step);
	}
	HX_STACK_LINE(108)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Animation_obj,linearSearch,return )


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(timelines,"timelines");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(timelines,"timelines");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Animation_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mix") ) { return mix_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timelines") ) { return timelines; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setDuration") ) { return setDuration_dyn(); }
		if (HX_FIELD_EQ(inName,"getDuration") ) { return getDuration_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"binarySearch") ) { return binarySearch_dyn(); }
		if (HX_FIELD_EQ(inName,"linearSearch") ) { return linearSearch_dyn(); }
		if (HX_FIELD_EQ(inName,"getTimelines") ) { return getTimelines_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"timelines") ) { timelines=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("duration"));
	outFields->push(HX_CSTRING("timelines"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("binarySearch"),
	HX_CSTRING("linearSearch"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("getName"),
	HX_CSTRING("mix"),
	HX_CSTRING("apply"),
	HX_CSTRING("setDuration"),
	HX_CSTRING("getDuration"),
	HX_CSTRING("getTimelines"),
	HX_CSTRING("duration"),
	HX_CSTRING("timelines"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

Class Animation_obj::__mClass;

void Animation_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.Animation"), hx::TCanCast< Animation_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Animation_obj::__boot()
{
}

} // end namespace spinehx
