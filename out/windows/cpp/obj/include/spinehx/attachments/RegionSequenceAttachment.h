#ifndef INCLUDED_spinehx_attachments_RegionSequenceAttachment
#define INCLUDED_spinehx_attachments_RegionSequenceAttachment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <spinehx/attachments/RegionAttachment.h>
HX_DECLARE_CLASS1(spinehx,Slot)
HX_DECLARE_CLASS2(spinehx,atlas,TextureRegion)
HX_DECLARE_CLASS2(spinehx,attachments,Attachment)
HX_DECLARE_CLASS2(spinehx,attachments,Mode)
HX_DECLARE_CLASS2(spinehx,attachments,RegionAttachment)
HX_DECLARE_CLASS2(spinehx,attachments,RegionSequenceAttachment)
namespace spinehx{
namespace attachments{


class HXCPP_CLASS_ATTRIBUTES  RegionSequenceAttachment_obj : public ::spinehx::attachments::RegionAttachment_obj{
	public:
		typedef ::spinehx::attachments::RegionAttachment_obj super;
		typedef RegionSequenceAttachment_obj OBJ_;
		RegionSequenceAttachment_obj();
		Void __construct(::String name);

	public:
		static hx::ObjectPtr< RegionSequenceAttachment_obj > __new(::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RegionSequenceAttachment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RegionSequenceAttachment"); }

		virtual Void setMode( ::spinehx::attachments::Mode mode);
		Dynamic setMode_dyn();

		virtual Void setFrameTime( Float frameTime);
		Dynamic setFrameTime_dyn();

		virtual Void setRegions( Array< ::Dynamic > regions);
		Dynamic setRegions_dyn();

		virtual Array< ::Dynamic > getRegions( );
		Dynamic getRegions_dyn();

		virtual Void updateVertices( ::spinehx::Slot slot);

		Array< ::Dynamic > regions;
		Float frameTime;
		::spinehx::attachments::Mode mode;
};

} // end namespace spinehx
} // end namespace attachments

#endif /* INCLUDED_spinehx_attachments_RegionSequenceAttachment */ 
