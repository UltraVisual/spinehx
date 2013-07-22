#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_spinehx_Animation
#include <spinehx/Animation.h>
#endif
#ifndef INCLUDED_spinehx_AnimationState
#include <spinehx/AnimationState.h>
#endif
#ifndef INCLUDED_spinehx_AnimationStateData
#include <spinehx/AnimationStateData.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_QueueEntry
#include <spinehx/QueueEntry.h>
#endif
#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_SkeletonData
#include <spinehx/SkeletonData.h>
#endif
namespace spinehx{

Void AnimationState_obj::__construct(::spinehx::AnimationStateData data)
{
HX_STACK_PUSH("AnimationState::new","spinehx/AnimationState.hx",30);
{
	HX_STACK_LINE(35)
	this->mixDuration = (int)0;
	HX_STACK_LINE(35)
	this->mixTime = (int)0;
	HX_STACK_LINE(33)
	this->previousTime = (int)0;
	HX_STACK_LINE(33)
	this->currentTime = (int)0;
	HX_STACK_LINE(39)
	if (((data == null()))){
		HX_STACK_LINE(39)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("data cannot be null.")));
	}
	HX_STACK_LINE(40)
	this->data = data;
	HX_STACK_LINE(41)
	this->queue = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

AnimationState_obj::~AnimationState_obj() { }

Dynamic AnimationState_obj::__CreateEmpty() { return  new AnimationState_obj; }
hx::ObjectPtr< AnimationState_obj > AnimationState_obj::__new(::spinehx::AnimationStateData data)
{  hx::ObjectPtr< AnimationState_obj > result = new AnimationState_obj();
	result->__construct(data);
	return result;}

Dynamic AnimationState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationState_obj > result = new AnimationState_obj();
	result->__construct(inArgs[0]);
	return result;}

::String AnimationState_obj::toString( ){
	HX_STACK_PUSH("AnimationState::toString","spinehx/AnimationState.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_LINE(176)
	return (  (((bool((this->current != null())) && bool((this->current->getName() != null()))))) ? ::String(this->current->getName()) : ::String((HX_CSTRING("") + ::Std_obj::string(hx::ObjectPtr<OBJ_>(this)))) );
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationState_obj,toString,return )

::spinehx::AnimationStateData AnimationState_obj::getData( ){
	HX_STACK_PUSH("AnimationState::getData","spinehx/AnimationState.hx",172);
	HX_STACK_THIS(this);
	HX_STACK_LINE(172)
	return this->data;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationState_obj,getData,return )

bool AnimationState_obj::isComplete( ){
	HX_STACK_PUSH("AnimationState::isComplete","spinehx/AnimationState.hx",168);
	HX_STACK_THIS(this);
	HX_STACK_LINE(168)
	return (bool((this->current == null())) || bool((this->currentTime >= this->current->getDuration())));
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationState_obj,isComplete,return )

Void AnimationState_obj::setTime( Float time){
{
		HX_STACK_PUSH("AnimationState::setTime","spinehx/AnimationState.hx",163);
		HX_STACK_THIS(this);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(163)
		this->currentTime = time;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationState_obj,setTime,(void))

Float AnimationState_obj::getTime( ){
	HX_STACK_PUSH("AnimationState::getTime","spinehx/AnimationState.hx",159);
	HX_STACK_THIS(this);
	HX_STACK_LINE(159)
	return this->currentTime;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationState_obj,getTime,return )

::spinehx::Animation AnimationState_obj::getAnimation( ){
	HX_STACK_PUSH("AnimationState::getAnimation","spinehx/AnimationState.hx",154);
	HX_STACK_THIS(this);
	HX_STACK_LINE(154)
	return this->current;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationState_obj,getAnimation,return )

Void AnimationState_obj::addAnimation( ::spinehx::Animation animation,bool loop,Float delay){
{
		HX_STACK_PUSH("AnimationState::addAnimation","spinehx/AnimationState.hx",136);
		HX_STACK_THIS(this);
		HX_STACK_ARG(animation,"animation");
		HX_STACK_ARG(loop,"loop");
		HX_STACK_ARG(delay,"delay");
		HX_STACK_LINE(137)
		::spinehx::QueueEntry entry = ::spinehx::QueueEntry_obj::__new();		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(138)
		entry->animation = animation;
		HX_STACK_LINE(139)
		entry->loop = loop;
		HX_STACK_LINE(141)
		if (((delay <= (int)0))){
			HX_STACK_LINE(142)
			::spinehx::Animation previousAnimation = (  (((this->queue->length == (int)0))) ? ::spinehx::Animation(this->current) : ::spinehx::Animation(this->queue->__get((int)0).StaticCast< ::spinehx::QueueEntry >()->animation) );		HX_STACK_VAR(previousAnimation,"previousAnimation");
			HX_STACK_LINE(143)
			if (((previousAnimation != null()))){
				HX_STACK_LINE(144)
				delay = ((previousAnimation->getDuration() - this->data->getMix(previousAnimation,animation)) + delay);
			}
			else{
				HX_STACK_LINE(146)
				delay = (int)0;
			}
		}
		HX_STACK_LINE(148)
		entry->delay = delay;
		HX_STACK_LINE(150)
		this->queue->push(entry);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AnimationState_obj,addAnimation,(void))

Void AnimationState_obj::addAnimationSimple( ::spinehx::Animation animation,bool loop){
{
		HX_STACK_PUSH("AnimationState::addAnimationSimple","spinehx/AnimationState.hx",130);
		HX_STACK_THIS(this);
		HX_STACK_ARG(animation,"animation");
		HX_STACK_ARG(loop,"loop");
		HX_STACK_LINE(130)
		this->addAnimation(animation,loop,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationState_obj,addAnimationSimple,(void))

Void AnimationState_obj::addAnimationByName( ::String animationName,bool loop,Float delay){
{
		HX_STACK_PUSH("AnimationState::addAnimationByName","spinehx/AnimationState.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_ARG(animationName,"animationName");
		HX_STACK_ARG(loop,"loop");
		HX_STACK_ARG(delay,"delay");
		HX_STACK_LINE(123)
		::spinehx::Animation animation = this->data->getSkeletonData()->findAnimation(animationName);		HX_STACK_VAR(animation,"animation");
		HX_STACK_LINE(124)
		if (((animation == null()))){
			HX_STACK_LINE(124)
			hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Animation not found: ") + animationName)));
		}
		HX_STACK_LINE(125)
		this->addAnimation(animation,loop,delay);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AnimationState_obj,addAnimationByName,(void))

Void AnimationState_obj::addAnimationByNameSimple( ::String animationName,bool loop){
{
		HX_STACK_PUSH("AnimationState::addAnimationByNameSimple","spinehx/AnimationState.hx",117);
		HX_STACK_THIS(this);
		HX_STACK_ARG(animationName,"animationName");
		HX_STACK_ARG(loop,"loop");
		HX_STACK_LINE(117)
		this->addAnimationByName(animationName,loop,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationState_obj,addAnimationByNameSimple,(void))

Void AnimationState_obj::setAnimation( ::spinehx::Animation animation,bool loop){
{
		HX_STACK_PUSH("AnimationState::setAnimation","spinehx/AnimationState.hx",111);
		HX_STACK_THIS(this);
		HX_STACK_ARG(animation,"animation");
		HX_STACK_ARG(loop,"loop");
		HX_STACK_LINE(112)
		this->clearQueue();
		HX_STACK_LINE(113)
		this->setAnimationInternal(animation,loop);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationState_obj,setAnimation,(void))

Void AnimationState_obj::setAnimationByName( ::String animationName,bool loop){
{
		HX_STACK_PUSH("AnimationState::setAnimationByName","spinehx/AnimationState.hx",103);
		HX_STACK_THIS(this);
		HX_STACK_ARG(animationName,"animationName");
		HX_STACK_ARG(loop,"loop");
		HX_STACK_LINE(104)
		::spinehx::Animation animation = this->data->getSkeletonData()->findAnimation(animationName);		HX_STACK_VAR(animation,"animation");
		HX_STACK_LINE(105)
		if (((animation == null()))){
			HX_STACK_LINE(105)
			hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Animation not found: ") + animationName)));
		}
		HX_STACK_LINE(106)
		this->setAnimation(animation,loop);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationState_obj,setAnimationByName,(void))

Void AnimationState_obj::setAnimationInternal( ::spinehx::Animation animation,bool loop){
{
		HX_STACK_PUSH("AnimationState::setAnimationInternal","spinehx/AnimationState.hx",86);
		HX_STACK_THIS(this);
		HX_STACK_ARG(animation,"animation");
		HX_STACK_ARG(loop,"loop");
		HX_STACK_LINE(87)
		this->previous = null();
		HX_STACK_LINE(88)
		if (((bool((animation != null())) && bool((this->current != null()))))){
			HX_STACK_LINE(89)
			this->mixDuration = this->data->getMix(this->current,animation);
			HX_STACK_LINE(90)
			if (((this->mixDuration > (int)0))){
				HX_STACK_LINE(91)
				this->mixTime = (int)0;
				HX_STACK_LINE(92)
				this->previous = this->current;
				HX_STACK_LINE(93)
				this->previousTime = this->currentTime;
				HX_STACK_LINE(94)
				this->previousLoop = this->currentLoop;
			}
		}
		HX_STACK_LINE(97)
		this->current = animation;
		HX_STACK_LINE(98)
		this->currentLoop = loop;
		HX_STACK_LINE(99)
		this->currentTime = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimationState_obj,setAnimationInternal,(void))

Void AnimationState_obj::clearQueue( ){
{
		HX_STACK_PUSH("AnimationState::clearQueue","spinehx/AnimationState.hx",79);
		HX_STACK_THIS(this);
		HX_STACK_LINE(79)
		this->queue = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationState_obj,clearQueue,(void))

Void AnimationState_obj::clearAnimation( ){
{
		HX_STACK_PUSH("AnimationState::clearAnimation","spinehx/AnimationState.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_LINE(74)
		this->previous = null();
		HX_STACK_LINE(75)
		this->current = null();
		HX_STACK_LINE(76)
		this->clearQueue();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationState_obj,clearAnimation,(void))

Void AnimationState_obj::apply( ::spinehx::Skeleton skeleton){
{
		HX_STACK_PUSH("AnimationState::apply","spinehx/AnimationState.hx",59);
		HX_STACK_THIS(this);
		HX_STACK_ARG(skeleton,"skeleton");
		HX_STACK_LINE(60)
		if (((this->current == null()))){
			HX_STACK_LINE(60)
			return null();
		}
		HX_STACK_LINE(61)
		if (((this->previous != null()))){
			HX_STACK_LINE(62)
			this->previous->apply(skeleton,this->previousTime,this->previousLoop);
			HX_STACK_LINE(63)
			Float alpha = (Float(this->mixTime) / Float(this->mixDuration));		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(64)
			if (((alpha >= (int)1))){
				HX_STACK_LINE(65)
				alpha = (int)1;
				HX_STACK_LINE(66)
				this->previous = null();
			}
			HX_STACK_LINE(68)
			this->current->mix(skeleton,this->currentTime,this->currentLoop,alpha);
		}
		else{
			HX_STACK_LINE(70)
			this->current->apply(skeleton,this->currentTime,this->currentLoop);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationState_obj,apply,(void))

Void AnimationState_obj::update( Float delta){
{
		HX_STACK_PUSH("AnimationState::update","spinehx/AnimationState.hx",44);
		HX_STACK_THIS(this);
		HX_STACK_ARG(delta,"delta");
		HX_STACK_LINE(45)
		hx::AddEq(this->currentTime,delta);
		HX_STACK_LINE(46)
		hx::AddEq(this->previousTime,delta);
		HX_STACK_LINE(47)
		hx::AddEq(this->mixTime,delta);
		HX_STACK_LINE(49)
		if (((this->queue->length > (int)0))){
			HX_STACK_LINE(50)
			::spinehx::QueueEntry entry = this->queue->__get((int)0).StaticCast< ::spinehx::QueueEntry >();		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(51)
			if (((this->currentTime >= entry->delay))){
				HX_STACK_LINE(52)
				this->setAnimationInternal(entry->animation,entry->loop);
				HX_STACK_LINE(54)
				this->queue->shift().StaticCast< ::spinehx::QueueEntry >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationState_obj,update,(void))


AnimationState_obj::AnimationState_obj()
{
}

void AnimationState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationState);
	HX_MARK_MEMBER_NAME(queue,"queue");
	HX_MARK_MEMBER_NAME(mixDuration,"mixDuration");
	HX_MARK_MEMBER_NAME(mixTime,"mixTime");
	HX_MARK_MEMBER_NAME(previousLoop,"previousLoop");
	HX_MARK_MEMBER_NAME(currentLoop,"currentLoop");
	HX_MARK_MEMBER_NAME(previousTime,"previousTime");
	HX_MARK_MEMBER_NAME(currentTime,"currentTime");
	HX_MARK_MEMBER_NAME(previous,"previous");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void AnimationState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(queue,"queue");
	HX_VISIT_MEMBER_NAME(mixDuration,"mixDuration");
	HX_VISIT_MEMBER_NAME(mixTime,"mixTime");
	HX_VISIT_MEMBER_NAME(previousLoop,"previousLoop");
	HX_VISIT_MEMBER_NAME(currentLoop,"currentLoop");
	HX_VISIT_MEMBER_NAME(previousTime,"previousTime");
	HX_VISIT_MEMBER_NAME(currentTime,"currentTime");
	HX_VISIT_MEMBER_NAME(previous,"previous");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic AnimationState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		if (HX_FIELD_EQ(inName,"queue") ) { return queue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		if (HX_FIELD_EQ(inName,"setTime") ) { return setTime_dyn(); }
		if (HX_FIELD_EQ(inName,"getTime") ) { return getTime_dyn(); }
		if (HX_FIELD_EQ(inName,"mixTime") ) { return mixTime; }
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"previous") ) { return previous; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return isComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"clearQueue") ) { return clearQueue_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mixDuration") ) { return mixDuration; }
		if (HX_FIELD_EQ(inName,"currentLoop") ) { return currentLoop; }
		if (HX_FIELD_EQ(inName,"currentTime") ) { return currentTime; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimation") ) { return setAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"previousLoop") ) { return previousLoop; }
		if (HX_FIELD_EQ(inName,"previousTime") ) { return previousTime; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"clearAnimation") ) { return clearAnimation_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addAnimationSimple") ) { return addAnimationSimple_dyn(); }
		if (HX_FIELD_EQ(inName,"addAnimationByName") ) { return addAnimationByName_dyn(); }
		if (HX_FIELD_EQ(inName,"setAnimationByName") ) { return setAnimationByName_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setAnimationInternal") ) { return setAnimationInternal_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"addAnimationByNameSimple") ) { return addAnimationByNameSimple_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::spinehx::AnimationStateData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { queue=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mixTime") ) { mixTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::spinehx::Animation >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"previous") ) { previous=inValue.Cast< ::spinehx::Animation >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mixDuration") ) { mixDuration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentLoop") ) { currentLoop=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentTime") ) { currentTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousLoop") ) { previousLoop=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"previousTime") ) { previousTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("queue"));
	outFields->push(HX_CSTRING("mixDuration"));
	outFields->push(HX_CSTRING("mixTime"));
	outFields->push(HX_CSTRING("previousLoop"));
	outFields->push(HX_CSTRING("currentLoop"));
	outFields->push(HX_CSTRING("previousTime"));
	outFields->push(HX_CSTRING("currentTime"));
	outFields->push(HX_CSTRING("previous"));
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("getData"),
	HX_CSTRING("isComplete"),
	HX_CSTRING("setTime"),
	HX_CSTRING("getTime"),
	HX_CSTRING("getAnimation"),
	HX_CSTRING("addAnimation"),
	HX_CSTRING("addAnimationSimple"),
	HX_CSTRING("addAnimationByName"),
	HX_CSTRING("addAnimationByNameSimple"),
	HX_CSTRING("setAnimation"),
	HX_CSTRING("setAnimationByName"),
	HX_CSTRING("setAnimationInternal"),
	HX_CSTRING("clearQueue"),
	HX_CSTRING("clearAnimation"),
	HX_CSTRING("apply"),
	HX_CSTRING("update"),
	HX_CSTRING("queue"),
	HX_CSTRING("mixDuration"),
	HX_CSTRING("mixTime"),
	HX_CSTRING("previousLoop"),
	HX_CSTRING("currentLoop"),
	HX_CSTRING("previousTime"),
	HX_CSTRING("currentTime"),
	HX_CSTRING("previous"),
	HX_CSTRING("current"),
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationState_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationState_obj::__mClass,"__mClass");
};

Class AnimationState_obj::__mClass;

void AnimationState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.AnimationState"), hx::TCanCast< AnimationState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AnimationState_obj::__boot()
{
}

} // end namespace spinehx
