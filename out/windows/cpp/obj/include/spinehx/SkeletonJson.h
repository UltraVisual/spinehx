#ifndef INCLUDED_spinehx_SkeletonJson
#define INCLUDED_spinehx_SkeletonJson

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,CurveTimeline)
HX_DECLARE_CLASS1(spinehx,SkeletonData)
HX_DECLARE_CLASS1(spinehx,SkeletonJson)
HX_DECLARE_CLASS1(spinehx,Skin)
HX_DECLARE_CLASS1(spinehx,Timeline)
HX_DECLARE_CLASS2(spinehx,atlas,TextureAtlas)
HX_DECLARE_CLASS2(spinehx,attachments,Attachment)
HX_DECLARE_CLASS2(spinehx,attachments,AttachmentLoader)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  SkeletonJson_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SkeletonJson_obj OBJ_;
		SkeletonJson_obj();
		Void __construct(::spinehx::attachments::AttachmentLoader attachmentLoader);

	public:
		static hx::ObjectPtr< SkeletonJson_obj > __new(::spinehx::attachments::AttachmentLoader attachmentLoader);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SkeletonJson_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SkeletonJson"); }

		virtual Void readCurve( ::spinehx::CurveTimeline timeline,int frameIndex,Dynamic valueMap);
		Dynamic readCurve_dyn();

		virtual Void readAnimation( ::String name,Dynamic map,::spinehx::SkeletonData skeletonData);
		Dynamic readAnimation_dyn();

		virtual ::spinehx::attachments::Attachment readAttachment( ::spinehx::Skin skin,::String name,Dynamic map);
		Dynamic readAttachment_dyn();

		virtual ::spinehx::SkeletonData readSkeletonData( ::String name,::String fileData);
		Dynamic readSkeletonData_dyn();

		virtual Void setScale( Float scale);
		Dynamic setScale_dyn();

		virtual Float getScale( );
		Dynamic getScale_dyn();

		Float scale;
		::spinehx::attachments::AttachmentLoader attachmentLoader;
		static ::spinehx::SkeletonJson create( ::spinehx::atlas::TextureAtlas atlas);
		static Dynamic create_dyn();

		static Float getFloat( Dynamic map,::String name,hx::Null< Float >  defaultValue);
		static Dynamic getFloat_dyn();

		static Float getFloatAt( Dynamic array,int index);
		static Dynamic getFloatAt_dyn();

};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_SkeletonJson */ 
