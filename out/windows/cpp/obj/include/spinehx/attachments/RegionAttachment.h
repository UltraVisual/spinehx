#ifndef INCLUDED_spinehx_attachments_RegionAttachment
#define INCLUDED_spinehx_attachments_RegionAttachment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <spinehx/attachments/Attachment.h>
HX_DECLARE_CLASS1(spinehx,Slot)
HX_DECLARE_CLASS2(spinehx,atlas,TextureRegion)
HX_DECLARE_CLASS2(spinehx,attachments,Attachment)
HX_DECLARE_CLASS2(spinehx,attachments,RegionAttachment)
namespace spinehx{
namespace attachments{


class HXCPP_CLASS_ATTRIBUTES  RegionAttachment_obj : public ::spinehx::attachments::Attachment_obj{
	public:
		typedef ::spinehx::attachments::Attachment_obj super;
		typedef RegionAttachment_obj OBJ_;
		RegionAttachment_obj();
		Void __construct(::String name);

	public:
		static hx::ObjectPtr< RegionAttachment_obj > __new(::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RegionAttachment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RegionAttachment"); }

		virtual Void setHeight( Float height);
		Dynamic setHeight_dyn();

		virtual Float getHeight( );
		Dynamic getHeight_dyn();

		virtual Void setWidth( Float width);
		Dynamic setWidth_dyn();

		virtual Float getWidth( );
		Dynamic getWidth_dyn();

		virtual Void setRotation( Float rotation);
		Dynamic setRotation_dyn();

		virtual Float getRotation( );
		Dynamic getRotation_dyn();

		virtual Void setScaleY( Float scaleY);
		Dynamic setScaleY_dyn();

		virtual Float getScaleY( );
		Dynamic getScaleY_dyn();

		virtual Void setScaleX( Float scaleX);
		Dynamic setScaleX_dyn();

		virtual Float getScaleX( );
		Dynamic getScaleX_dyn();

		virtual Void setY( Float y);
		Dynamic setY_dyn();

		virtual Float getY( );
		Dynamic getY_dyn();

		virtual Void setX( Float x);
		Dynamic setX_dyn();

		virtual Float getX( );
		Dynamic getX_dyn();

		virtual Array< Float > getVertices( );
		Dynamic getVertices_dyn();

		virtual Void updateVertices( ::spinehx::Slot slot);
		Dynamic updateVertices_dyn();

		virtual ::spinehx::atlas::TextureRegion getRegion( );
		Dynamic getRegion_dyn();

		virtual Void setRegion( ::spinehx::atlas::TextureRegion region);
		Dynamic setRegion_dyn();

		virtual Void updateOffset( );
		Dynamic updateOffset_dyn();

		Array< Float > offset;
		Array< Float > vertices;
		Float height;
		Float width;
		Float rotation;
		Float scaleY;
		Float scaleX;
		Float y;
		Float x;
		::spinehx::atlas::TextureRegion region;
};

} // end namespace spinehx
} // end namespace attachments

#endif /* INCLUDED_spinehx_attachments_RegionAttachment */ 
