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
#ifndef INCLUDED_spinehx_Bone
#include <spinehx/Bone.h>
#endif
#ifndef INCLUDED_spinehx_MixTest
#include <spinehx/MixTest.h>
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

Void MixTest_obj::__construct()
{
HX_STACK_PUSH("MixTest::new","spinehx/MixTest.hx",43);
{
	HX_STACK_LINE(53)
	this->mode = (int)1;
	HX_STACK_LINE(52)
	this->lastTime = 0.0;
	HX_STACK_LINE(44)
	this->time = 0.0;
	HX_STACK_LINE(56)
	super::__construct();
	HX_STACK_LINE(57)
	::String name = HX_CSTRING("spineboy");		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(59)
	::spinehx::atlas::TextureAtlas atlas = ::spinehx::atlas::TextureAtlas_obj::create(::openfl::Assets_obj::getText(((HX_CSTRING("assets/") + name) + HX_CSTRING(".atlas"))),HX_CSTRING("assets/"),::spinehx::platform::openfl::BitmapDataTextureLoader_obj::__new(),null());		HX_STACK_VAR(atlas,"atlas");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(62)
		::spinehx::SkeletonJson json = ::spinehx::SkeletonJson_obj::create(atlas);		HX_STACK_VAR(json,"json");
		HX_STACK_LINE(64)
		this->skeletonData = json->readSkeletonData(name,::openfl::Assets_obj::getText(((HX_CSTRING("assets/") + name) + HX_CSTRING(".json"))));
	}
	HX_STACK_LINE(70)
	this->walkAnimation = this->skeletonData->findAnimation(HX_CSTRING("walk"));
	HX_STACK_LINE(71)
	this->jumpAnimation = this->skeletonData->findAnimation(HX_CSTRING("jump"));
	HX_STACK_LINE(73)
	this->skeleton = ::spinehx::Skeleton_obj::create(this->skeletonData);
	HX_STACK_LINE(75)
	this->skeleton->setX((int)-50);
	HX_STACK_LINE(76)
	this->skeleton->setY((int)20);
	HX_STACK_LINE(77)
	this->skeleton->setFlipY(true);
	HX_STACK_LINE(78)
	this->skeleton->updateWorldTransform();
	HX_STACK_LINE(79)
	this->lastTime = ::haxe::Timer_obj::stamp();
	HX_STACK_LINE(81)
	this->renderer = ::spinehx::platform::openfl::renderers::SkeletonRenderer_obj::__new(this->skeleton);
	HX_STACK_LINE(82)
	this->debugRenderer = ::spinehx::platform::openfl::renderers::SkeletonRendererDebug_obj::__new(this->skeleton);
	HX_STACK_LINE(84)
	this->renderer->set_x((int)0);
	HX_STACK_LINE(85)
	this->renderer->set_y((int)300);
	HX_STACK_LINE(86)
	this->debugRenderer->set_x((int)0);
	HX_STACK_LINE(87)
	this->debugRenderer->set_y((int)300);
	HX_STACK_LINE(88)
	this->addChild(this->renderer);
	HX_STACK_LINE(89)
	this->addChild(this->debugRenderer);
	HX_STACK_LINE(90)
	this->addChild(::openfl::display::FPS_obj::__new(null(),null(),null()));
	HX_STACK_LINE(92)
	this->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->render_dyn(),null(),null(),null());
	HX_STACK_LINE(93)
	this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null(),null(),null());
	HX_STACK_LINE(93)
	this->renderer->draw();
}
;
	return null();
}

MixTest_obj::~MixTest_obj() { }

Dynamic MixTest_obj::__CreateEmpty() { return  new MixTest_obj; }
hx::ObjectPtr< MixTest_obj > MixTest_obj::__new()
{  hx::ObjectPtr< MixTest_obj > result = new MixTest_obj();
	result->__construct();
	return result;}

Dynamic MixTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MixTest_obj > result = new MixTest_obj();
	result->__construct();
	return result;}

Void MixTest_obj::render( ::flash::events::Event e){
{
		HX_STACK_PUSH("MixTest::render","spinehx/MixTest.hx",106);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(107)
		Float deltaTime = (::haxe::Timer_obj::stamp() - this->lastTime);		HX_STACK_VAR(deltaTime,"deltaTime");
		HX_STACK_LINE(108)
		Float delta = (Float(deltaTime) / Float(4.0));		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(109)
		this->lastTime = ::haxe::Timer_obj::stamp();
		HX_STACK_LINE(111)
		Float jump = this->jumpAnimation->getDuration();		HX_STACK_VAR(jump,"jump");
		HX_STACK_LINE(112)
		Float beforeJump = 1.0;		HX_STACK_VAR(beforeJump,"beforeJump");
		HX_STACK_LINE(113)
		Float blendIn = 0.4;		HX_STACK_VAR(blendIn,"blendIn");
		HX_STACK_LINE(114)
		Float blendOut = 0.4;		HX_STACK_VAR(blendOut,"blendOut");
		HX_STACK_LINE(115)
		Float blendOutStart = ((beforeJump + jump) - blendOut);		HX_STACK_VAR(blendOutStart,"blendOutStart");
		HX_STACK_LINE(116)
		Float total = 3.75;		HX_STACK_VAR(total,"total");
		HX_STACK_LINE(118)
		hx::AddEq(this->time,delta);
		HX_STACK_LINE(120)
		::spinehx::Bone root_ = this->skeleton->getRootBone();		HX_STACK_VAR(root_,"root_");
		HX_STACK_LINE(121)
		Float speed = (int)180;		HX_STACK_VAR(speed,"speed");
		HX_STACK_LINE(122)
		if (((bool((this->time > (beforeJump + blendIn))) && bool((this->time < blendOutStart))))){
			HX_STACK_LINE(122)
			speed = (int)360;
		}
		HX_STACK_LINE(123)
		root_->setX((root_->getX() + (speed * delta)));
		HX_STACK_LINE(126)
		if (((this->time > total))){
			HX_STACK_LINE(128)
			this->time = (int)0;
			HX_STACK_LINE(129)
			root_->setX((int)-50);
		}
		else{
			HX_STACK_LINE(130)
			if (((this->time > (beforeJump + jump)))){
				HX_STACK_LINE(130)
				this->walkAnimation->apply(this->skeleton,this->time,true);
			}
			else{
				HX_STACK_LINE(133)
				if (((this->time > blendOutStart))){
					HX_STACK_LINE(135)
					this->walkAnimation->apply(this->skeleton,this->time,true);
					HX_STACK_LINE(136)
					this->jumpAnimation->mix(this->skeleton,(this->time - beforeJump),false,((int)1 - (Float(((this->time - blendOutStart))) / Float(blendOut))));
				}
				else{
					HX_STACK_LINE(137)
					if (((this->time > (beforeJump + blendIn)))){
						HX_STACK_LINE(137)
						this->jumpAnimation->apply(this->skeleton,(this->time - beforeJump),false);
					}
					else{
						HX_STACK_LINE(140)
						if (((this->time > beforeJump))){
							HX_STACK_LINE(142)
							this->walkAnimation->apply(this->skeleton,this->time,true);
							HX_STACK_LINE(143)
							this->jumpAnimation->mix(this->skeleton,(this->time - beforeJump),false,(Float(((this->time - beforeJump))) / Float(blendIn)));
						}
						else{
							HX_STACK_LINE(144)
							this->walkAnimation->apply(this->skeleton,this->time,true);
						}
					}
				}
			}
		}
		HX_STACK_LINE(149)
		this->skeleton->updateWorldTransform();
		HX_STACK_LINE(150)
		this->skeleton->update(deltaTime);
		HX_STACK_LINE(153)
		if (((bool((this->mode == (int)0)) || bool((this->mode == (int)1))))){
			HX_STACK_LINE(154)
			this->renderer->set_visible(true);
			HX_STACK_LINE(155)
			this->renderer->draw();
		}
		else{
			HX_STACK_LINE(156)
			this->renderer->set_visible(false);
		}
		HX_STACK_LINE(157)
		if (((bool((this->mode == (int)0)) || bool((this->mode == (int)2))))){
			HX_STACK_LINE(158)
			this->debugRenderer->set_visible(true);
			HX_STACK_LINE(159)
			this->debugRenderer->draw();
		}
		else{
			HX_STACK_LINE(160)
			this->debugRenderer->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MixTest_obj,render,(void))

Void MixTest_obj::onClick( ::flash::events::Event e){
{
		HX_STACK_PUSH("MixTest::onClick","spinehx/MixTest.hx",101);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(102)
		(this->mode)++;
		HX_STACK_LINE(103)
		hx::ModEq(this->mode,(int)3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MixTest_obj,onClick,(void))

Void MixTest_obj::added( ::flash::events::Event e){
{
		HX_STACK_PUSH("MixTest::added","spinehx/MixTest.hx",96);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(97)
		this->set_mouseChildren(false);
		HX_STACK_LINE(98)
		this->get_stage()->addEventListener(::flash::events::MouseEvent_obj::CLICK,this->onClick_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MixTest_obj,added,(void))


MixTest_obj::MixTest_obj()
{
}

void MixTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MixTest);
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(lastTime,"lastTime");
	HX_MARK_MEMBER_NAME(jumpAnimation,"jumpAnimation");
	HX_MARK_MEMBER_NAME(walkAnimation,"walkAnimation");
	HX_MARK_MEMBER_NAME(skeleton,"skeleton");
	HX_MARK_MEMBER_NAME(skeletonData,"skeletonData");
	HX_MARK_MEMBER_NAME(debugRenderer,"debugRenderer");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(time,"time");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MixTest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(lastTime,"lastTime");
	HX_VISIT_MEMBER_NAME(jumpAnimation,"jumpAnimation");
	HX_VISIT_MEMBER_NAME(walkAnimation,"walkAnimation");
	HX_VISIT_MEMBER_NAME(skeleton,"skeleton");
	HX_VISIT_MEMBER_NAME(skeletonData,"skeletonData");
	HX_VISIT_MEMBER_NAME(debugRenderer,"debugRenderer");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(time,"time");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MixTest_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 12:
		if (HX_FIELD_EQ(inName,"skeletonData") ) { return skeletonData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"jumpAnimation") ) { return jumpAnimation; }
		if (HX_FIELD_EQ(inName,"walkAnimation") ) { return walkAnimation; }
		if (HX_FIELD_EQ(inName,"debugRenderer") ) { return debugRenderer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MixTest_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
	case 12:
		if (HX_FIELD_EQ(inName,"skeletonData") ) { skeletonData=inValue.Cast< ::spinehx::SkeletonData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"jumpAnimation") ) { jumpAnimation=inValue.Cast< ::spinehx::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"walkAnimation") ) { walkAnimation=inValue.Cast< ::spinehx::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugRenderer") ) { debugRenderer=inValue.Cast< ::spinehx::platform::openfl::renderers::SkeletonRendererDebug >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MixTest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mode"));
	outFields->push(HX_CSTRING("lastTime"));
	outFields->push(HX_CSTRING("jumpAnimation"));
	outFields->push(HX_CSTRING("walkAnimation"));
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
	HX_CSTRING("jumpAnimation"),
	HX_CSTRING("walkAnimation"),
	HX_CSTRING("skeleton"),
	HX_CSTRING("skeletonData"),
	HX_CSTRING("debugRenderer"),
	HX_CSTRING("renderer"),
	HX_CSTRING("time"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MixTest_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MixTest_obj::__mClass,"__mClass");
};

Class MixTest_obj::__mClass;

void MixTest_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.MixTest"), hx::TCanCast< MixTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MixTest_obj::__boot()
{
}

} // end namespace spinehx
