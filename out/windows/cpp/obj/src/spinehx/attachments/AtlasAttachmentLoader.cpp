#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_Skin
#include <spinehx/Skin.h>
#endif
#ifndef INCLUDED_spinehx_atlas_AtlasRegion
#include <spinehx/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureAtlas
#include <spinehx/atlas/TextureAtlas.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureRegion
#include <spinehx/atlas/TextureRegion.h>
#endif
#ifndef INCLUDED_spinehx_attachments_AtlasAttachmentLoader
#include <spinehx/attachments/AtlasAttachmentLoader.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Attachment
#include <spinehx/attachments/Attachment.h>
#endif
#ifndef INCLUDED_spinehx_attachments_AttachmentLoader
#include <spinehx/attachments/AttachmentLoader.h>
#endif
#ifndef INCLUDED_spinehx_attachments_AttachmentType
#include <spinehx/attachments/AttachmentType.h>
#endif
#ifndef INCLUDED_spinehx_attachments_RegionAttachment
#include <spinehx/attachments/RegionAttachment.h>
#endif
#ifndef INCLUDED_spinehx_attachments_RegionSequenceAttachment
#include <spinehx/attachments/RegionSequenceAttachment.h>
#endif
namespace spinehx{
namespace attachments{

Void AtlasAttachmentLoader_obj::__construct(::spinehx::atlas::TextureAtlas atlas)
{
HX_STACK_PUSH("AtlasAttachmentLoader::new","spinehx/attachments/AtlasAttachmentLoader.hx",34);
{
	HX_STACK_LINE(35)
	if (((atlas == null()))){
		HX_STACK_LINE(35)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("atlas cannot be null.")));
	}
	HX_STACK_LINE(36)
	this->atlas = atlas;
}
;
	return null();
}

AtlasAttachmentLoader_obj::~AtlasAttachmentLoader_obj() { }

Dynamic AtlasAttachmentLoader_obj::__CreateEmpty() { return  new AtlasAttachmentLoader_obj; }
hx::ObjectPtr< AtlasAttachmentLoader_obj > AtlasAttachmentLoader_obj::__new(::spinehx::atlas::TextureAtlas atlas)
{  hx::ObjectPtr< AtlasAttachmentLoader_obj > result = new AtlasAttachmentLoader_obj();
	result->__construct(atlas);
	return result;}

Dynamic AtlasAttachmentLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AtlasAttachmentLoader_obj > result = new AtlasAttachmentLoader_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *AtlasAttachmentLoader_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::spinehx::attachments::AttachmentLoader_obj)) return operator ::spinehx::attachments::AttachmentLoader_obj *();
	return super::__ToInterface(inType);
}

::spinehx::attachments::Attachment AtlasAttachmentLoader_obj::newAttachment( ::spinehx::Skin skin,::spinehx::attachments::AttachmentType type,::String name){
	HX_STACK_PUSH("AtlasAttachmentLoader::newAttachment","spinehx/attachments/AtlasAttachmentLoader.hx",39);
	HX_STACK_THIS(this);
	HX_STACK_ARG(skin,"skin");
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(40)
	::spinehx::attachments::Attachment attachment = null();		HX_STACK_VAR(attachment,"attachment");
	HX_STACK_LINE(41)
	{
		::spinehx::attachments::AttachmentType _switch_1 = (type);
		switch((_switch_1)->GetIndex()){
			case 0: {
				HX_STACK_LINE(42)
				attachment = ::spinehx::attachments::RegionAttachment_obj::__new(name);
			}
			;break;
			case 1: {
				HX_STACK_LINE(44)
				attachment = ::spinehx::attachments::RegionSequenceAttachment_obj::__new(name);
			}
			;break;
		}
	}
	HX_STACK_LINE(50)
	if ((::Std_obj::is(attachment,hx::ClassOf< ::spinehx::attachments::RegionAttachment >()))){
		HX_STACK_LINE(51)
		::spinehx::atlas::AtlasRegion region = this->atlas->findRegion(attachment->getName());		HX_STACK_VAR(region,"region");
		HX_STACK_LINE(52)
		if (((region == null()))){
			HX_STACK_LINE(53)
			hx::Throw (::spinehx::Exception_obj::__new(((((((HX_CSTRING("Region not found in atlas: ") + ::Std_obj::string(attachment)) + HX_CSTRING(" (")) + ::Std_obj::string(type)) + HX_CSTRING(" attachment: ")) + name) + HX_CSTRING(")"))));
		}
		HX_STACK_LINE(54)
		(hx::TCast< spinehx::attachments::RegionAttachment >::cast(attachment))->setRegion(region);
	}
	HX_STACK_LINE(57)
	return attachment;
}


HX_DEFINE_DYNAMIC_FUNC3(AtlasAttachmentLoader_obj,newAttachment,return )


AtlasAttachmentLoader_obj::AtlasAttachmentLoader_obj()
{
}

void AtlasAttachmentLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AtlasAttachmentLoader);
	HX_MARK_MEMBER_NAME(atlas,"atlas");
	HX_MARK_END_CLASS();
}

void AtlasAttachmentLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(atlas,"atlas");
}

Dynamic AtlasAttachmentLoader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"atlas") ) { return atlas; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"newAttachment") ) { return newAttachment_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AtlasAttachmentLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"atlas") ) { atlas=inValue.Cast< ::spinehx::atlas::TextureAtlas >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AtlasAttachmentLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("atlas"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("newAttachment"),
	HX_CSTRING("atlas"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AtlasAttachmentLoader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AtlasAttachmentLoader_obj::__mClass,"__mClass");
};

Class AtlasAttachmentLoader_obj::__mClass;

void AtlasAttachmentLoader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.attachments.AtlasAttachmentLoader"), hx::TCanCast< AtlasAttachmentLoader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AtlasAttachmentLoader_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace attachments
