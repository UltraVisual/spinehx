#ifndef INCLUDED_spinehx_attachments_AttachmentTypes
#define INCLUDED_spinehx_attachments_AttachmentTypes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(spinehx,attachments,AttachmentType)
HX_DECLARE_CLASS2(spinehx,attachments,AttachmentTypes)
namespace spinehx{
namespace attachments{


class HXCPP_CLASS_ATTRIBUTES  AttachmentTypes_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AttachmentTypes_obj OBJ_;
		AttachmentTypes_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AttachmentTypes_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AttachmentTypes_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AttachmentTypes"); }

		static ::spinehx::attachments::AttachmentType valueOf( ::String t,::spinehx::attachments::AttachmentType def);
		static Dynamic valueOf_dyn();

};

} // end namespace spinehx
} // end namespace attachments

#endif /* INCLUDED_spinehx_attachments_AttachmentTypes */ 
