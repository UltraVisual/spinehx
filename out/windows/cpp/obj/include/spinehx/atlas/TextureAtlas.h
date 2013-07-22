#ifndef INCLUDED_spinehx_atlas_TextureAtlas
#define INCLUDED_spinehx_atlas_TextureAtlas

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(spinehx,atlas,AtlasRegion)
HX_DECLARE_CLASS2(spinehx,atlas,Texture)
HX_DECLARE_CLASS2(spinehx,atlas,TextureAtlas)
HX_DECLARE_CLASS2(spinehx,atlas,TextureAtlasData)
HX_DECLARE_CLASS2(spinehx,atlas,TextureLoader)
HX_DECLARE_CLASS2(spinehx,atlas,TextureRegion)
namespace spinehx{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  TextureAtlas_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureAtlas_obj OBJ_;
		TextureAtlas_obj();
		Void __construct(::spinehx::atlas::TextureAtlasData data,::spinehx::atlas::TextureLoader textureLoader);

	public:
		static hx::ObjectPtr< TextureAtlas_obj > __new(::spinehx::atlas::TextureAtlasData data,::spinehx::atlas::TextureLoader textureLoader);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextureAtlas_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextureAtlas"); }

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Array< ::Dynamic > getTextures( );
		Dynamic getTextures_dyn();

		virtual Array< ::Dynamic > findRegions( ::String name);
		Dynamic findRegions_dyn();

		virtual ::spinehx::atlas::AtlasRegion findRegionIdx( ::String name,int index);
		Dynamic findRegionIdx_dyn();

		virtual ::spinehx::atlas::AtlasRegion findRegion( ::String name);
		Dynamic findRegion_dyn();

		virtual Array< ::Dynamic > getRegions( );
		Dynamic getRegions_dyn();

		virtual ::spinehx::atlas::AtlasRegion addRegionTex( ::String name,::spinehx::atlas::TextureRegion textureRegion);
		Dynamic addRegionTex_dyn();

		virtual ::spinehx::atlas::AtlasRegion addRegion( ::String name,::spinehx::atlas::Texture texture,int x,int y,int width,int height);
		Dynamic addRegion_dyn();

		virtual Void load( ::spinehx::atlas::TextureAtlasData data,::spinehx::atlas::TextureLoader textureLoader);
		Dynamic load_dyn();

		virtual Void addTexture( ::spinehx::atlas::Texture texture);
		Dynamic addTexture_dyn();

		Array< ::Dynamic > regions;
		Array< ::Dynamic > textures;
		static ::spinehx::atlas::TextureAtlas create( ::String packFileData,::String imagesDir,::spinehx::atlas::TextureLoader textureLoader,hx::Null< bool >  flip);
		static Dynamic create_dyn();

};

} // end namespace spinehx
} // end namespace atlas

#endif /* INCLUDED_spinehx_atlas_TextureAtlas */ 
