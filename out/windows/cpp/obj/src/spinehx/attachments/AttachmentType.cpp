#include <hxcpp.h>

#ifndef INCLUDED_spinehx_attachments_AttachmentType
#include <spinehx/attachments/AttachmentType.h>
#endif
namespace spinehx{
namespace attachments{

::spinehx::attachments::AttachmentType AttachmentType_obj::region;

::spinehx::attachments::AttachmentType AttachmentType_obj::regionSequence;

HX_DEFINE_CREATE_ENUM(AttachmentType_obj)

int AttachmentType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("region")) return 0;
	if (inName==HX_CSTRING("regionSequence")) return 1;
	return super::__FindIndex(inName);
}

int AttachmentType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("region")) return 0;
	if (inName==HX_CSTRING("regionSequence")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic AttachmentType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("region")) return region;
	if (inName==HX_CSTRING("regionSequence")) return regionSequence;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("region"),
	HX_CSTRING("regionSequence"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AttachmentType_obj::region,"region");
	HX_MARK_MEMBER_NAME(AttachmentType_obj::regionSequence,"regionSequence");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AttachmentType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AttachmentType_obj::region,"region");
	HX_VISIT_MEMBER_NAME(AttachmentType_obj::regionSequence,"regionSequence");
};

static ::String sMemberFields[] = { ::String(null()) };
Class AttachmentType_obj::__mClass;

Dynamic __Create_AttachmentType_obj() { return new AttachmentType_obj; }

void AttachmentType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.attachments.AttachmentType"), hx::TCanCast< AttachmentType_obj >,sStaticFields,sMemberFields,
	&__Create_AttachmentType_obj, &__Create,
	&super::__SGetClass(), &CreateAttachmentType_obj, sMarkStatics, sVisitStatic);
}

void AttachmentType_obj::__boot()
{
hx::Static(region) = hx::CreateEnum< AttachmentType_obj >(HX_CSTRING("region"),0);
hx::Static(regionSequence) = hx::CreateEnum< AttachmentType_obj >(HX_CSTRING("regionSequence"),1);
}


} // end namespace spinehx
} // end namespace attachments
