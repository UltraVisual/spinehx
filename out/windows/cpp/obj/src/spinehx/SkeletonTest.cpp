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
#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_SkeletonData
#include <spinehx/SkeletonData.h>
#endif
#ifndef INCLUDED_spinehx_SkeletonJson
#include <spinehx/SkeletonJson.h>
#endif
#ifndef INCLUDED_spinehx_SkeletonTest
#include <spinehx/SkeletonTest.h>
#endif
#ifndef INCLUDED_spinehx_Skin
#include <spinehx/Skin.h>
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

Void SkeletonTest_obj::__construct()
{
HX_STACK_PUSH("SkeletonTest::new","spinehx/SkeletonTest.hx",38);
{
	HX_STACK_LINE(47)
	this->mode = (int)1;
	HX_STACK_LINE(46)
	this->lastTime = 0.0;
	HX_STACK_LINE(39)
	this->time = 0.0;
	HX_STACK_LINE(50)
	super::__construct();
	HX_STACK_LINE(51)
	this->set_name(HX_CSTRING("goblins"));
	HX_STACK_LINE(53)
	::spinehx::atlas::TextureAtlas atlas = ::spinehx::atlas::TextureAtlas_obj::create(::openfl::Assets_obj::getText(((HX_CSTRING("assets/") + this->get_name()) + HX_CSTRING(".atlas"))),HX_CSTRING("assets/"),::spinehx::platform::openfl::BitmapDataTextureLoader_obj::__new(),null());		HX_STACK_VAR(atlas,"atlas");
	HX_STACK_LINE(54)
	{
		HX_STACK_LINE(55)
		::spinehx::SkeletonJson json = ::spinehx::SkeletonJson_obj::create(atlas);		HX_STACK_VAR(json,"json");
		HX_STACK_LINE(57)
		this->skeletonData = json->readSkeletonData(this->get_name(),::openfl::Assets_obj::getText(((HX_CSTRING("assets/") + this->get_name()) + HX_CSTRING(".json"))));
	}
	HX_STACK_LINE(63)
	this->animation = this->skeletonData->findAnimation(HX_CSTRING("walk"));
	HX_STACK_LINE(65)
	this->skeleton = ::spinehx::Skeleton_obj::create(this->skeletonData);
	HX_STACK_LINE(66)
	if (((this->get_name() == HX_CSTRING("goblins")))){
		HX_STACK_LINE(66)
		this->skeleton->setSkinByName(HX_CSTRING("goblin"));
	}
	HX_STACK_LINE(67)
	this->skeleton->setToSetupPose();
	HX_STACK_LINE(68)
	this->skeleton = ::spinehx::Skeleton_obj::copy(this->skeleton);
	HX_STACK_LINE(70)
	this->skeleton->setX((int)50);
	HX_STACK_LINE(71)
	this->skeleton->setY((int)20);
	HX_STACK_LINE(72)
	this->skeleton->setFlipY(true);
	HX_STACK_LINE(73)
	this->skeleton->updateWorldTransform();
	HX_STACK_LINE(75)
	this->renderer = ::spinehx::platform::openfl::renderers::SkeletonRenderer_obj::__new(this->skeleton);
	HX_STACK_LINE(76)
	this->debugRenderer = ::spinehx::platform::openfl::renderers::SkeletonRendererDebug_obj::__new(this->skeleton);
	HX_STACK_LINE(78)
	this->renderer->set_x((int)0);
	HX_STACK_LINE(79)
	this->renderer->set_y((int)350);
	HX_STACK_LINE(80)
	this->debugRenderer->set_x((int)0);
	HX_STACK_LINE(81)
	this->debugRenderer->set_y((int)350);
	HX_STACK_LINE(82)
	this->addChild(this->renderer);
	HX_STACK_LINE(83)
	this->addChild(this->debugRenderer);
	HX_STACK_LINE(84)
	this->addChild(::openfl::display::FPS_obj::__new(null(),null(),null()));
	HX_STACK_LINE(86)
	this->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->render_dyn(),null(),null(),null());
	HX_STACK_LINE(87)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null(),null(),null());
	HX_STACK_LINE(87)
	this->renderer->draw();
}
;
	return null();
}

SkeletonTest_obj::~SkeletonTest_obj() { }

Dynamic SkeletonTest_obj::__CreateEmpty() { return  new SkeletonTest_obj; }
hx::ObjectPtr< SkeletonTest_obj > SkeletonTest_obj::__new()
{  hx::ObjectPtr< SkeletonTest_obj > result = new SkeletonTest_obj();
	result->__construct();
	return result;}

Dynamic SkeletonTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SkeletonTest_obj > result = new SkeletonTest_obj();
	result->__construct();
	return result;}

Void SkeletonTest_obj::render( ::flash::events::Event e){
{
		HX_STACK_PUSH("SkeletonTest::render","spinehx/SkeletonTest.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(106)
		Float deltaTime = (::haxe::Timer_obj::stamp() - this->lastTime);		HX_STACK_VAR(deltaTime,"deltaTime");
		HX_STACK_LINE(107)
		this->lastTime = ::haxe::Timer_obj::stamp();
		HX_STACK_LINE(108)
		hx::AddEq(this->time,deltaTime);
		HX_STACK_LINE(110)
		Float x = (this->skeleton->getX() + (((int)160 * deltaTime) * ((  ((this->skeleton->getFlipX())) ? int((int)-1) : int((int)1) ))));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(111)
		if (((x > this->get_stage()->get_stageWidth()))){
			HX_STACK_LINE(111)
			this->skeleton->setFlipX(true);
		}
		HX_STACK_LINE(112)
		if (((x < (int)0))){
			HX_STACK_LINE(112)
			this->skeleton->setFlipX(false);
		}
		HX_STACK_LINE(113)
		this->skeleton->setX(x);
		HX_STACK_LINE(115)
		this->animation->apply(this->skeleton,this->time,true);
		HX_STACK_LINE(116)
		this->skeleton->updateWorldTransform();
		HX_STACK_LINE(117)
		this->skeleton->update(deltaTime);
		HX_STACK_LINE(120)
		if (((bool((this->mode == (int)0)) || bool((this->mode == (int)1))))){
			HX_STACK_LINE(121)
			this->renderer->set_visible(true);
			HX_STACK_LINE(122)
			this->renderer->clearBuffers();
			HX_STACK_LINE(123)
			this->renderer->draw();
		}
		else{
			HX_STACK_LINE(124)
			this->renderer->set_visible(false);
		}
		HX_STACK_LINE(125)
		if (((bool((this->mode == (int)0)) || bool((this->mode == (int)2))))){
			HX_STACK_LINE(126)
			this->debugRenderer->set_visible(true);
			HX_STACK_LINE(127)
			this->debugRenderer->draw();
		}
		else{
			HX_STACK_LINE(128)
			this->debugRenderer->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonTest_obj,render,(void))

Void SkeletonTest_obj::onClick( ::flash::events::Event e){
{
		HX_STACK_PUSH("SkeletonTest::onClick","spinehx/SkeletonTest.hx",95);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(95)
		if (((this->get_name() == HX_CSTRING("goblins")))){
			HX_STACK_LINE(99)
			this->skeleton->setSkinByName((  (((this->skeleton->getSkin()->getName() == HX_CSTRING("goblin")))) ? ::String(HX_CSTRING("goblingirl")) : ::String(HX_CSTRING("goblin")) ));
			HX_STACK_LINE(100)
			this->skeleton->setSlotsToSetupPose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonTest_obj,onClick,(void))

Void SkeletonTest_obj::added( ::flash::events::Event e){
{
		HX_STACK_PUSH("SkeletonTest::added","spinehx/SkeletonTest.hx",90);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(91)
		this->set_mouseChildren(false);
		HX_STACK_LINE(92)
		this->get_stage()->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->onClick_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonTest_obj,added,(void))


SkeletonTest_obj::SkeletonTest_obj()
{
}

void SkeletonTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkeletonTest);
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(lastTime,"lastTime");
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(skeleton,"skeleton");
	HX_MARK_MEMBER_NAME(skeletonData,"skeletonData");
	HX_MARK_MEMBER_NAME(debugRenderer,"debugRenderer");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(time,"time");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SkeletonTest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(lastTime,"lastTime");
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(skeleton,"skeleton");
	HX_VISIT_MEMBER_NAME(skeletonData,"skeletonData");
	HX_VISIT_MEMBER_NAME(debugRenderer,"debugRenderer");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(time,"time");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SkeletonTest_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
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
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"skeletonData") ) { return skeletonData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"debugRenderer") ) { return debugRenderer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SkeletonTest_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lastTime") ) { lastTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skeleton") ) { skeleton=inValue.Cast< ::spinehx::Skeleton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::spinehx::platform::openfl::renderers::SkeletonRenderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::spinehx::Animation >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"skeletonData") ) { skeletonData=inValue.Cast< ::spinehx::SkeletonData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"debugRenderer") ) { debugRenderer=inValue.Cast< ::spinehx::platform::openfl::renderers::SkeletonRendererDebug >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkeletonTest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mode"));
	outFields->push(HX_CSTRING("lastTime"));
	outFields->push(HX_CSTRING("animation"));
	outFields->push(HX_CSTRING("skeleton"));
	outFields->push(HX_CSTRING("skeletonData"));
	outFields->push(HX_CSTRING("debugRenderer"));
	outFields->push(HX_CSTRING("renderer"));
	outFields->push(HX_CSTRING("time"));
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
	HX_CSTRING("animation"),
	HX_CSTRING("skeleton"),
	HX_CSTRING("skeletonData"),
	HX_CSTRING("debugRenderer"),
	HX_CSTRING("renderer"),
	HX_CSTRING("time"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkeletonTest_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkeletonTest_obj::__mClass,"__mClass");
};

Class SkeletonTest_obj::__mClass;

void SkeletonTest_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.SkeletonTest"), hx::TCanCast< SkeletonTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SkeletonTest_obj::__boot()
{
}

} // end namespace spinehx
