#ifndef INCLUDED_spinehx_atlas_AtlasRegion
#define INCLUDED_spinehx_atlas_AtlasRegion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <spinehx/atlas/TextureRegion.h>
HX_DECLARE_CLASS2(spinehx,atlas,AtlasRegion)
HX_DECLARE_CLASS2(spinehx,atlas,Texture)
HX_DECLARE_CLASS2(spinehx,atlas,TextureRegion)
namespace spinehx{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  AtlasRegion_obj : public ::spinehx::atlas::TextureRegion_obj{
	public:
		typedef ::spinehx::atlas::TextureRegion_obj super;
		typedef AtlasRegion_obj OBJ_;
		AtlasRegion_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AtlasRegion_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AtlasRegion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AtlasRegion"); }

		virtual Float getRotatedPackedHeight( );
		Dynamic getRotatedPackedHeight_dyn();

		virtual Float getRotatedPackedWidth( );
		Dynamic getRotatedPackedWidth_dyn();

		virtual Void flip( bool x,bool y);

		Array< int > pads;
		Array< int > splits;
		bool rotate;
		int originalHeight;
		int originalWidth;
		int packedHeight;
		int packedWidth;
		Float offsetY;
		Float offsetX;
		::String name;
		int index;
		static ::spinehx::atlas::AtlasRegion create( ::spinehx::atlas::Texture texture,int x,int y,int width,int height);
		static Dynamic create_dyn();

		static ::spinehx::atlas::AtlasRegion copy( ::spinehx::atlas::AtlasRegion region);
		static Dynamic copy_dyn();

};

} // end namespace spinehx
} // end namespace atlas

#endif /* INCLUDED_spinehx_atlas_AtlasRegion */ 
