#include <hxcpp.h>

#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
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
#ifndef INCLUDED_spinehx_AnimationStateTest
#include <spinehx/AnimationStateTest.h>
#endif
#ifndef INCLUDED_spinehx_Bone
#include <spinehx/Bone.h>
#endif
#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_SkeletonData
#include <spinehx/SkeletonData.h>
#endif
#ifndef INCLUDED_spinehx_SkeletonJson
#include <spinehx/SkeletonJson.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureAtlas
#include <spinehx/atlas/TextureAtlas.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureLoader
#include <spinehx/atlas/TextureLoader.h>
#endif
#ifndef INCLUDED_spinehx_platform_openfl_BitmapDataTextureLoader
#include <spinehx/platform/openfl/BitmapDataTextureLoader.h>
#endif
#ifndef INCLUDED_spinehx_platform_openfl_renderers_SkeletonRenderer
#include <spinehx/platform/openfl/renderers/SkeletonRenderer.h>
#endif
#ifndef INCLUDED_spinehx_platform_openfl_renderers_SkeletonRendererDebug
#include <spinehx/platform/openfl/renderers/SkeletonRendererDebug.h>
#endif
namespace spinehx{

Void AnimationStateTest_obj::__construct()
{
HX_STACK_PUSH("AnimationStateTest::new","spinehx/AnimationStateTest.hx",12);
{
	HX_STACK_LINE(23)
	this->mode = (int)1;
	HX_STACK_LINE(21)
	this->lastTime = 0.0;
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(28)
	this->atlas = ::spinehx::atlas::TextureAtlas_obj::create(::openfl::Assets_obj::getText(HX_CSTRING("assets/spineboy.atlas")),HX_CSTRING("assets/"),::spinehx::platform::openfl::BitmapDataTextureLoader_obj::__new(),null());
	HX_STACK_LINE(29)
	::spinehx::SkeletonJson json = ::spinehx::SkeletonJson_obj::create(this->atlas);		HX_STACK_VAR(json,"json");
	HX_STACK_LINE(31)
	::spinehx::SkeletonData skeletonData = json->readSkeletonData(HX_CSTRING("spineboy"),::openfl::Assets_obj::getText(HX_CSTRING("assets/spineboy.json")));		HX_STACK_VAR(skeletonData,"skeletonData");
	HX_STACK_LINE(34)
	::spinehx::AnimationStateData stateData = ::spinehx::AnimationStateData_obj::__new(skeletonData);		HX_STACK_VAR(stateData,"stateData");
	HX_STACK_LINE(35)
	stateData->setMixByName(HX_CSTRING("walk"),HX_CSTRING("jump"),0.2);
	HX_STACK_LINE(36)
	stateData->setMixByName(HX_CSTRING("jump"),HX_CSTRING("walk"),0.4);
	HX_STACK_LINE(37)
	stateData->setMixByName(HX_CSTRING("jump"),HX_CSTRING("jump"),0.2);
	HX_STACK_LINE(39)
	this->state = ::spinehx::AnimationState_obj::__new(stateData);
	HX_STACK_LINE(40)
	this->state->setAnimationByName(HX_CSTRING("walk"),true);
	HX_STACK_LINE(42)
	this->skeleton = ::spinehx::Skeleton_obj::create(skeletonData);
	HX_STACK_LINE(44)
	this->skeleton->setX((int)150);
	HX_STACK_LINE(45)
	this->skeleton->setY((int)360);
	HX_STACK_LINE(46)
	this->skeleton->setFlipY(true);
	HX_STACK_LINE(48)
	this->skeleton->updateWorldTransform();
	HX_STACK_LINE(50)
	this->lastTime = ::haxe::Timer_obj::stamp();
	HX_STACK_LINE(52)
	this->renderer = ::spinehx::platform::openfl::renderers::SkeletonRenderer_obj::__new(this->skeleton);
	HX_STACK_LINE(53)
	this->debugRenderer = ::spinehx::platform::openfl::renderers::SkeletonRendererDebug_obj::__new(this->skeleton);
	HX_STACK_LINE(54)
	this->addChild(this->renderer);
	HX_STACK_LINE(55)
	this->addChild(this->debugRenderer);
	HX_STACK_LINE(56)
	this->addChild(::openfl::display::FPS_obj::__new(null(),null(),null()));
	HX_STACK_LINE(58)
	this->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->render_dyn(),null(),null(),null());
	HX_STACK_LINE(59)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null(),null(),null());
}
;
	return null();
}

AnimationStateTest_obj::~AnimationStateTest_obj() { }

Dynamic AnimationStateTest_obj::__CreateEmpty() { return  new AnimationStateTest_obj; }
hx::ObjectPtr< AnimationStateTest_obj > AnimationStateTest_obj::__new()
{  hx::ObjectPtr< AnimationStateTest_obj > result = new AnimationStateTest_obj();
	result->__construct();
	return result;}

Dynamic AnimationStateTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationStateTest_obj > result = new AnimationStateTest_obj();
	result->__construct();
	return result;}

Void AnimationStateTest_obj::render( ::flash::events::Event e){
{
		HX_STACK_PUSH("AnimationStateTest::render","spinehx/AnimationStateTest.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(74)
		Float delta = (Float(((::haxe::Timer_obj::stamp() - this->lastTime))) / Float((int)3));		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(75)
		this->lastTime = ::haxe::Timer_obj::stamp();
		HX_STACK_LINE(76)
		this->state->update(delta);
		HX_STACK_LINE(77)
		this->state->apply(this->skeleton);
		HX_STACK_LINE(78)
		if (((this->state->getAnimation()->getName() == HX_CSTRING("walk")))){
			HX_STACK_LINE(78)
			if (((this->state->getTime() > (int)2))){
				HX_STACK_LINE(80)
				this->state->setAnimationByName(HX_CSTRING("jump"),false);
			}
		}
		else{
			HX_STACK_LINE(81)
			if (((this->state->getTime() > (int)1))){
				HX_STACK_LINE(82)
				this->state->setAnimationByName(HX_CSTRING("walk"),true);
			}
		}
		HX_STACK_LINE(85)
		this->skeleton->updateWorldTransform();
		HX_STACK_LINE(87)
		if (((bool((this->mode == (int)0)) || bool((this->mode == (int)1))))){
			HX_STACK_LINE(88)
			this->renderer->set_visible(true);
			HX_STACK_LINE(89)
			this->renderer->draw();
		}
		else{
			HX_STACK_LINE(90)
			this->renderer->set_visible(false);
		}
		HX_STACK_LINE(91)
		if (((bool((this->mode == (int)0)) || bool((this->mode == (int)2))))){
			HX_STACK_LINE(92)
			this->debugRenderer->set_visible(true);
			HX_STACK_LINE(93)
			this->debugRenderer->draw();
		}
		else{
			HX_STACK_LINE(94)
			this->debugRenderer->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationStateTest_obj,render,(void))

Void AnimationStateTest_obj::onClick( ::flash::events::Event e){
{
		HX_STACK_PUSH("AnimationStateTest::onClick","spinehx/AnimationStateTest.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(69)
		this->state->setAnimationByName(HX_CSTRING("jump"),false);
		HX_STACK_LINE(70)
		this->state->addAnimationByNameSimple(HX_CSTRING("walk"),true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationStateTest_obj,onClick,(void))

Void AnimationStateTest_obj::added( ::flash::events::Event e){
{
		HX_STACK_PUSH("AnimationStateTest::added","spinehx/AnimationStateTest.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(63)
		this->set_mouseChildren(false);
		HX_STACK_LINE(64)
		this->get_stage()->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->onClick_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimationStateTest_obj,added,(void))


AnimationStateTest_obj::AnimationStateTest_obj()
{
}

void AnimationStateTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationStateTest);
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(lastTime,"lastTime");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(root_,"root_");
	HX_MARK_MEMBER_NAME(skeleton,"skeleton");
	HX_MARK_MEMBER_NAME(atlas,"atlas");
	HX_MARK_MEMBER_NAME(debugRenderer,"debugRenderer");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimationStateTest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(lastTime,"lastTime");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(root_,"root_");
	HX_VISIT_MEMBER_NAME(skeleton,"skeleton");
	HX_VISIT_MEMBER_NAME(atlas,"atlas");
	HX_VISIT_MEMBER_NAME(debugRenderer,"debugRenderer");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AnimationStateTest_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"root_") ) { return root_; }
		if (HX_FIELD_EQ(inName,"atlas") ) { return atlas; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTime") ) { return lastTime; }
		if (HX_FIELD_EQ(inName,"skeleton") ) { return skeleton; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"debugRenderer") ) { return debugRenderer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationStateTest_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::spinehx::AnimationState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"root_") ) { root_=inValue.Cast< ::spinehx::Bone >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atlas") ) { atlas=inValue.Cast< ::spinehx::atlas::TextureAtlas >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTime") ) { lastTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skeleton") ) { skeleton=inValue.Cast< ::spinehx::Skeleton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::spinehx::platform::openfl::renderers::SkeletonRenderer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"debugRenderer") ) { debugRenderer=inValue.Cast< ::spinehx::platform::openfl::renderers::SkeletonRendererDebug >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationStateTest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mode"));
	outFields->push(HX_CSTRING("lastTime"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("root_"));
	outFields->push(HX_CSTRING("skeleton"));
	outFields->push(HX_CSTRING("atlas"));
	outFields->push(HX_CSTRING("debugRenderer"));
	outFields->push(HX_CSTRING("renderer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("render"),
	HX_CSTRING("onClick"),
	HX_CSTRING("added"),
	HX_CSTRING("mode"),
	HX_CSTRING("lastTime"),
	HX_CSTRING("state"),
	HX_CSTRING("root_"),
	HX_CSTRING("skeleton"),
	HX_CSTRING("atlas"),
	HX_CSTRING("debugRenderer"),
	HX_CSTRING("renderer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationStateTest_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationStateTest_obj::__mClass,"__mClass");
};

Class AnimationStateTest_obj::__mClass;

void AnimationStateTest_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.AnimationStateTest"), hx::TCanCast< AnimationStateTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AnimationStateTest_obj::__boot()
{
}

} // end namespace spinehx
