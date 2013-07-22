#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash__Vector_Vector_Impl_
#include <flash/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_TriangleCulling
#include <flash/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_Slot
#include <spinehx/Slot.h>
#endif
#ifndef INCLUDED_spinehx_atlas_Texture
#include <spinehx/atlas/Texture.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureRegion
#include <spinehx/atlas/TextureRegion.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Attachment
#include <spinehx/attachments/Attachment.h>
#endif
#ifndef INCLUDED_spinehx_attachments_RegionAttachment
#include <spinehx/attachments/RegionAttachment.h>
#endif
#ifndef INCLUDED_spinehx_platform_openfl_BitmapDataTexture
#include <spinehx/platform/openfl/BitmapDataTexture.h>
#endif
#ifndef INCLUDED_spinehx_platform_openfl_renderers_SkeletonRenderer
#include <spinehx/platform/openfl/renderers/SkeletonRenderer.h>
#endif
namespace spinehx{
namespace platform{
namespace openfl{
namespace renderers{

Void SkeletonRenderer_obj::__construct(::spinehx::Skeleton skeleton)
{
HX_STACK_PUSH("SkeletonRenderer::new","spinehx/platform/openfl/renderers/SkeletonRenderer.hx",42);
{
	HX_STACK_LINE(51)
	this->filled = false;
	HX_STACK_LINE(54)
	super::__construct();
	HX_STACK_LINE(55)
	this->skeleton = skeleton;
	HX_STACK_LINE(57)
	this->vs = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(58)
	this->idx = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
	HX_STACK_LINE(59)
	this->uvt = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
}
;
	return null();
}

SkeletonRenderer_obj::~SkeletonRenderer_obj() { }

Dynamic SkeletonRenderer_obj::__CreateEmpty() { return  new SkeletonRenderer_obj; }
hx::ObjectPtr< SkeletonRenderer_obj > SkeletonRenderer_obj::__new(::spinehx::Skeleton skeleton)
{  hx::ObjectPtr< SkeletonRenderer_obj > result = new SkeletonRenderer_obj();
	result->__construct(skeleton);
	return result;}

Dynamic SkeletonRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SkeletonRenderer_obj > result = new SkeletonRenderer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SkeletonRenderer_obj::draw( ){
{
		HX_STACK_PUSH("SkeletonRenderer::draw","spinehx/platform/openfl/renderers/SkeletonRenderer.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_LINE(82)
		int vi = (int)0;		HX_STACK_VAR(vi,"vi");
		HX_STACK_LINE(83)
		int vii = (int)0;		HX_STACK_VAR(vii,"vii");
		HX_STACK_LINE(84)
		int ii = (int)0;		HX_STACK_VAR(ii,"ii");
		HX_STACK_LINE(85)
		this->get_graphics()->clear();
		HX_STACK_LINE(86)
		Array< ::Dynamic > drawOrder = this->skeleton->drawOrder;		HX_STACK_VAR(drawOrder,"drawOrder");
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(87)
			while(((_g < drawOrder->length))){
				HX_STACK_LINE(87)
				::spinehx::Slot slot = drawOrder->__get(_g).StaticCast< ::spinehx::Slot >();		HX_STACK_VAR(slot,"slot");
				HX_STACK_LINE(87)
				++(_g);
				HX_STACK_LINE(88)
				::spinehx::attachments::Attachment attachment = slot->attachment;		HX_STACK_VAR(attachment,"attachment");
				HX_STACK_LINE(89)
				if ((::Std_obj::is(attachment,hx::ClassOf< ::spinehx::attachments::RegionAttachment >()))){
					HX_STACK_LINE(90)
					::spinehx::attachments::RegionAttachment regionAttachment = hx::TCast< spinehx::attachments::RegionAttachment >::cast(attachment);		HX_STACK_VAR(regionAttachment,"regionAttachment");
					HX_STACK_LINE(91)
					regionAttachment->updateVertices(slot);
					HX_STACK_LINE(92)
					Array< Float > vertices = regionAttachment->getVertices();		HX_STACK_VAR(vertices,"vertices");
					HX_STACK_LINE(93)
					::spinehx::atlas::TextureRegion region = regionAttachment->getRegion();		HX_STACK_VAR(region,"region");
					HX_STACK_LINE(94)
					::spinehx::platform::openfl::BitmapDataTexture texture = hx::TCast< spinehx::platform::openfl::BitmapDataTexture >::cast(region->getTexture());		HX_STACK_VAR(texture,"texture");
					HX_STACK_LINE(95)
					if (((this->bd == null()))){
						HX_STACK_LINE(95)
						this->bd = texture->bd;
					}
					else{
						HX_STACK_LINE(97)
						if (((this->bd != texture->bd))){
							HX_STACK_LINE(98)
							hx::Throw (HX_CSTRING("Too many textures"));
							HX_STACK_LINE(99)
							continue;
						}
					}
					HX_STACK_LINE(102)
					this->vs[vi] = vertices->__get((int)0);
					HX_STACK_LINE(102)
					this->vs[(vi + (int)1)] = vertices->__get((int)1);
					HX_STACK_LINE(103)
					this->vs[(vi + (int)2)] = vertices->__get((int)5);
					HX_STACK_LINE(103)
					this->vs[(vi + (int)3)] = vertices->__get((int)6);
					HX_STACK_LINE(104)
					this->vs[(vi + (int)4)] = vertices->__get((int)10);
					HX_STACK_LINE(104)
					this->vs[(vi + (int)5)] = vertices->__get((int)11);
					HX_STACK_LINE(105)
					this->vs[(vi + (int)6)] = vertices->__get((int)15);
					HX_STACK_LINE(105)
					this->vs[(vi + (int)7)] = vertices->__get((int)16);
					HX_STACK_LINE(107)
					if ((!(this->filled))){
						HX_STACK_LINE(108)
						this->idx[ii] = vii;
						HX_STACK_LINE(108)
						this->idx[(ii + (int)1)] = (vii + (int)1);
						HX_STACK_LINE(108)
						this->idx[(ii + (int)2)] = (vii + (int)2);
						HX_STACK_LINE(109)
						this->idx[(ii + (int)3)] = (vii + (int)2);
						HX_STACK_LINE(109)
						this->idx[(ii + (int)4)] = (vii + (int)3);
						HX_STACK_LINE(109)
						this->idx[(ii + (int)5)] = vii;
						HX_STACK_LINE(111)
						this->uvt[vi] = vertices->__get((int)3);
						HX_STACK_LINE(111)
						this->uvt[(vi + (int)1)] = vertices->__get((int)4);
						HX_STACK_LINE(112)
						this->uvt[(vi + (int)2)] = vertices->__get((int)8);
						HX_STACK_LINE(112)
						this->uvt[(vi + (int)3)] = vertices->__get((int)9);
						HX_STACK_LINE(113)
						this->uvt[(vi + (int)4)] = vertices->__get((int)13);
						HX_STACK_LINE(113)
						this->uvt[(vi + (int)5)] = vertices->__get((int)14);
						HX_STACK_LINE(114)
						this->uvt[(vi + (int)6)] = vertices->__get((int)18);
						HX_STACK_LINE(114)
						this->uvt[(vi + (int)7)] = vertices->__get((int)19);
					}
					HX_STACK_LINE(116)
					hx::AddEq(vi,(int)8);
					HX_STACK_LINE(117)
					hx::AddEq(vii,(int)4);
					HX_STACK_LINE(118)
					hx::AddEq(ii,(int)6);
				}
			}
		}
		HX_STACK_LINE(121)
		this->filled = true;
		HX_STACK_LINE(122)
		if (((this->bd != null()))){
			HX_STACK_LINE(123)
			this->get_graphics()->beginBitmapFill(this->bd,null(),true,true);
			HX_STACK_LINE(124)
			this->get_graphics()->drawTriangles(hx::TCastToArray(this->vs),hx::TCastToArray(this->idx),hx::TCastToArray(this->uvt),::flash::display::TriangleCulling_obj::NONE,null(),null(),null());
			HX_STACK_LINE(125)
			this->get_graphics()->endFill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SkeletonRenderer_obj,draw,(void))

Void SkeletonRenderer_obj::clearBuffers( ){
{
		HX_STACK_PUSH("SkeletonRenderer::clearBuffers","spinehx/platform/openfl/renderers/SkeletonRenderer.hx",67);
		HX_STACK_THIS(this);
		HX_STACK_LINE(70)
		this->vs = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(71)
		this->idx = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(72)
		this->uvt = ::flash::_Vector::Vector_Impl__obj::_new(null(),null());
		HX_STACK_LINE(78)
		this->filled = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SkeletonRenderer_obj,clearBuffers,(void))


SkeletonRenderer_obj::SkeletonRenderer_obj()
{
}

void SkeletonRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkeletonRenderer);
	HX_MARK_MEMBER_NAME(filled,"filled");
	HX_MARK_MEMBER_NAME(bd,"bd");
	HX_MARK_MEMBER_NAME(uvt,"uvt");
	HX_MARK_MEMBER_NAME(idx,"idx");
	HX_MARK_MEMBER_NAME(vs,"vs");
	HX_MARK_MEMBER_NAME(skeleton,"skeleton");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SkeletonRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filled,"filled");
	HX_VISIT_MEMBER_NAME(bd,"bd");
	HX_VISIT_MEMBER_NAME(uvt,"uvt");
	HX_VISIT_MEMBER_NAME(idx,"idx");
	HX_VISIT_MEMBER_NAME(vs,"vs");
	HX_VISIT_MEMBER_NAME(skeleton,"skeleton");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic SkeletonRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bd") ) { return bd; }
		if (HX_FIELD_EQ(inName,"vs") ) { return vs; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"uvt") ) { return uvt; }
		if (HX_FIELD_EQ(inName,"idx") ) { return idx; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filled") ) { return filled; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"skeleton") ) { return skeleton; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearBuffers") ) { return clearBuffers_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SkeletonRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bd") ) { bd=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vs") ) { vs=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"uvt") ) { uvt=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idx") ) { idx=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filled") ) { filled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"skeleton") ) { skeleton=inValue.Cast< ::spinehx::Skeleton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkeletonRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("filled"));
	outFields->push(HX_CSTRING("bd"));
	outFields->push(HX_CSTRING("uvt"));
	outFields->push(HX_CSTRING("idx"));
	outFields->push(HX_CSTRING("vs"));
	outFields->push(HX_CSTRING("skeleton"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("draw"),
	HX_CSTRING("clearBuffers"),
	HX_CSTRING("filled"),
	HX_CSTRING("bd"),
	HX_CSTRING("uvt"),
	HX_CSTRING("idx"),
	HX_CSTRING("vs"),
	HX_CSTRING("skeleton"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkeletonRenderer_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkeletonRenderer_obj::__mClass,"__mClass");
};

Class SkeletonRenderer_obj::__mClass;

void SkeletonRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.platform.openfl.renderers.SkeletonRenderer"), hx::TCanCast< SkeletonRenderer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SkeletonRenderer_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace platform
} // end namespace openfl
} // end namespace renderers
