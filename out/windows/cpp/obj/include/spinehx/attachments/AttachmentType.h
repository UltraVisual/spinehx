#ifndef INCLUDED_spinehx_attachments_AttachmentType
#define INCLUDED_spinehx_attachments_AttachmentType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(spinehx,attachments,AttachmentType)
namespace spinehx{
namespace attachments{


class AttachmentType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef AttachmentType_obj OBJ_;

	public:
		AttachmentType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("spinehx.attachments.AttachmentType"); }
		::String __ToString() const { return HX_CSTRING("AttachmentType.") + tag; }

		static ::spinehx::attachments::AttachmentType region;
		static inline ::spinehx::attachments::AttachmentType region_dyn() { return region; }
		static ::spinehx::attachments::AttachmentType regionSequence;
		static inline ::spinehx::attachments::AttachmentType regionSequence_dyn() { return regionSequence; }
};

} // end namespace spinehx
} // end namespace attachments

#endif /* INCLUDED_spinehx_attachments_AttachmentType */ 
