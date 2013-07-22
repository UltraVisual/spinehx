#include <hxcpp.h>

#ifndef INCLUDED_spinehx_Skin
#include <spinehx/Skin.h>
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
namespace spinehx{
namespace attachments{

HX_DEFINE_DYNAMIC_FUNC3(AttachmentLoader_obj,newAttachment,return )


static ::String sMemberFields[] = {
	HX_CSTRING("newAttachment"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AttachmentLoader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AttachmentLoader_obj::__mClass,"__mClass");
};

Class AttachmentLoader_obj::__mClass;

void AttachmentLoader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.attachments.AttachmentLoader"), hx::TCanCast< AttachmentLoader_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AttachmentLoader_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace attachments
