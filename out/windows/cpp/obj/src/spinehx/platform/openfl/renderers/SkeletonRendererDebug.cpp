#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_CapsStyle
#include <flash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_JointStyle
#include <flash/display/JointStyle.h>
#endif
#ifndef INCLUDED_flash_display_LineScaleMode
#include <flash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_spinehx_Bone
#include <spinehx/Bone.h>
#endif
#ifndef INCLUDED_spinehx_BoneData
#include <spinehx/BoneData.h>
#endif
#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_Slot
#include <spinehx/Slot.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Attachment
#include <spinehx/attachments/Attachment.h>
#endif
#ifndef INCLUDED_spinehx_attachments_RegionAttachment
#include <spinehx/attachments/RegionAttachment.h>
#endif
#ifndef INCLUDED_spinehx_platform_openfl_renderers_SkeletonRendererDebug
#include <spinehx/platform/openfl/renderers/SkeletonRendererDebug.h>
#endif
namespace spinehx{
namespace platform{
namespace openfl{
namespace renderers{

Void SkeletonRendererDebug_obj::__construct(::spinehx::Skeleton skeleton)
{
HX_STACK_PUSH("SkeletonRendererDebug::new","spinehx/platform/openfl/renderers/SkeletonRendererDebug.hx",35);
{
	HX_STACK_LINE(36)
	super::__construct();
	HX_STACK_LINE(37)
	this->skeleton = skeleton;
}
;
	return null();
}

SkeletonRendererDebug_obj::~SkeletonRendererDebug_obj() { }

Dynamic SkeletonRendererDebug_obj::__CreateEmpty() { return  new SkeletonRendererDebug_obj; }
hx::ObjectPtr< SkeletonRendererDebug_obj > SkeletonRendererDebug_obj::__new(::spinehx::Skeleton skeleton)
{  hx::ObjectPtr< SkeletonRendererDebug_obj > result = new SkeletonRendererDebug_obj();
	result->__construct(skeleton);
	return result;}

Dynamic SkeletonRendererDebug_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SkeletonRendererDebug_obj > result = new SkeletonRendererDebug_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SkeletonRendererDebug_obj::draw( ){
{
		HX_STACK_PUSH("SkeletonRendererDebug::draw","spinehx/platform/openfl/renderers/SkeletonRendererDebug.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_LINE(40)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		this->get_graphics()->clear();
		HX_STACK_LINE(42)
		this->get_graphics()->lineStyle((int)1,(int)16711680,null(),null(),null(),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(Float x1,Float y1,Float x2,Float y2){
			HX_STACK_PUSH("*::_Function_1_1","spinehx/platform/openfl/renderers/SkeletonRendererDebug.hx",43);
			HX_STACK_ARG(x1,"x1");
			HX_STACK_ARG(y1,"y1");
			HX_STACK_ARG(x2,"x2");
			HX_STACK_ARG(y2,"y2");
			{
				HX_STACK_LINE(44)
				_g->__get((int)0).StaticCast< ::spinehx::platform::openfl::renderers::SkeletonRendererDebug >()->get_graphics()->moveTo(x1,y1);
				HX_STACK_LINE(45)
				_g->__get((int)0).StaticCast< ::spinehx::platform::openfl::renderers::SkeletonRendererDebug >()->get_graphics()->lineTo(x2,y2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC4((void))

		HX_STACK_LINE(43)
		Dynamic line =  Dynamic(new _Function_1_1(_g));		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(47)
		Float skeletonX = this->skeleton->getX();		HX_STACK_VAR(skeletonX,"skeletonX");
		HX_STACK_LINE(48)
		Float skeletonY = this->skeleton->getY();		HX_STACK_VAR(skeletonY,"skeletonY");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			Array< ::Dynamic > _g11 = this->skeleton->getBones();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(50)
			while(((_g1 < _g11->length))){
				HX_STACK_LINE(50)
				::spinehx::Bone bone = _g11->__get(_g1).StaticCast< ::spinehx::Bone >();		HX_STACK_VAR(bone,"bone");
				HX_STACK_LINE(50)
				++(_g1);
				HX_STACK_LINE(51)
				if (((bone->parent == null()))){
					HX_STACK_LINE(51)
					continue;
				}
				HX_STACK_LINE(52)
				Float x = ((skeletonX + (bone->data->length * bone->m00)) + bone->worldX);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(53)
				Float y = ((skeletonY + (bone->data->length * bone->m10)) + bone->worldY);		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(54)
				line((skeletonX + bone->worldX),(skeletonY + bone->worldY),x,y).Cast< Void >();
			}
		}
		HX_STACK_LINE(57)
		this->get_graphics()->lineStyle((int)1,(int)255,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			Array< ::Dynamic > _g11 = this->skeleton->getSlots();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(58)
			while(((_g1 < _g11->length))){
				HX_STACK_LINE(58)
				::spinehx::Slot slot = _g11->__get(_g1).StaticCast< ::spinehx::Slot >();		HX_STACK_VAR(slot,"slot");
				HX_STACK_LINE(58)
				++(_g1);
				HX_STACK_LINE(59)
				::spinehx::attachments::Attachment attachment = slot->attachment;		HX_STACK_VAR(attachment,"attachment");
				HX_STACK_LINE(60)
				if ((::Std_obj::is(attachment,hx::ClassOf< ::spinehx::attachments::RegionAttachment >()))){
					HX_STACK_LINE(61)
					::spinehx::attachments::RegionAttachment regionAttachment = hx::TCast< spinehx::attachments::RegionAttachment >::cast(attachment);		HX_STACK_VAR(regionAttachment,"regionAttachment");
					HX_STACK_LINE(62)
					regionAttachment->updateVertices(slot);
					HX_STACK_LINE(63)
					Array< Float > vertices = regionAttachment->getVertices();		HX_STACK_VAR(vertices,"vertices");
					HX_STACK_LINE(64)
					line(vertices->__get((int)0),vertices->__get((int)1),vertices->__get((int)5),vertices->__get((int)6)).Cast< Void >();
					HX_STACK_LINE(65)
					line(vertices->__get((int)5),vertices->__get((int)6),vertices->__get((int)10),vertices->__get((int)11)).Cast< Void >();
					HX_STACK_LINE(66)
					line(vertices->__get((int)10),vertices->__get((int)11),vertices->__get((int)15),vertices->__get((int)16)).Cast< Void >();
					HX_STACK_LINE(67)
					line(vertices->__get((int)15),vertices->__get((int)16),vertices->__get((int)0),vertices->__get((int)1)).Cast< Void >();
				}
			}
		}
		HX_STACK_LINE(71)
		this->get_graphics()->lineStyle((int)1,(int)65280,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			Array< ::Dynamic > _g11 = this->skeleton->getBones();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(73)
			while(((_g1 < _g11->length))){
				HX_STACK_LINE(73)
				::spinehx::Bone bone = _g11->__get(_g1).StaticCast< ::spinehx::Bone >();		HX_STACK_VAR(bone,"bone");
				HX_STACK_LINE(73)
				++(_g1);
				HX_STACK_LINE(74)
				this->get_graphics()->drawCircle((skeletonX + bone->worldX),(skeletonY + bone->worldY),(int)3);
			}
		}
		HX_STACK_LINE(76)
		this->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SkeletonRendererDebug_obj,draw,(void))


SkeletonRendererDebug_obj::SkeletonRendererDebug_obj()
{
}

void SkeletonRendererDebug_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkeletonRendererDebug);
	HX_MARK_MEMBER_NAME(skeleton,"skeleton");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SkeletonRendererDebug_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skeleton,"skeleton");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SkeletonRendererDebug_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"skeleton") ) { return skeleton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SkeletonRendererDebug_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"skeleton") ) { skeleton=inValue.Cast< ::spinehx::Skeleton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkeletonRendererDebug_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("skeleton"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("skeleton"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkeletonRendererDebug_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkeletonRendererDebug_obj::__mClass,"__mClass");
};

Class SkeletonRendererDebug_obj::__mClass;

void SkeletonRendererDebug_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.platform.openfl.renderers.SkeletonRendererDebug"), hx::TCanCast< SkeletonRendererDebug_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SkeletonRendererDebug_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace platform
} // end namespace openfl
} // end namespace renderers
