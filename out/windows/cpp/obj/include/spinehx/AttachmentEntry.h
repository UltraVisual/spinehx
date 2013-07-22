#ifndef INCLUDED_spinehx_AttachmentEntry
#define INCLUDED_spinehx_AttachmentEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,AttachmentEntry)
HX_DECLARE_CLASS2(spinehx,attachments,Attachment)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  AttachmentEntry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AttachmentEntry_obj OBJ_;
		AttachmentEntry_obj();
		Void __construct(int slotIndex,::String name,::spinehx::attachments::Attachment attachment);

	public:
		static hx::ObjectPtr< AttachmentEntry_obj > __new(int slotIndex,::String name,::spinehx::attachments::Attachment attachment);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AttachmentEntry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AttachmentEntry"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::String getId( );
		Dynamic getId_dyn();

		::spinehx::attachments::Attachment attachment;
		::String id;
		::String name;
		int slotIndex;
		static ::String makeId( int slotIndex,::String name);
		static Dynamic makeId_dyn();

};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_AttachmentEntry */ 
