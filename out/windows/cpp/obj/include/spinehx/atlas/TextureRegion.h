#ifndef INCLUDED_spinehx_atlas_TextureRegion
#define INCLUDED_spinehx_atlas_TextureRegion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(spinehx,atlas,Texture)
HX_DECLARE_CLASS2(spinehx,atlas,TextureRegion)
namespace spinehx{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  TextureRegion_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureRegion_obj OBJ_;
		TextureRegion_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TextureRegion_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextureRegion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextureRegion"); }

		virtual Array< ::Dynamic > split( int tileWidth,int tileHeight);
		Dynamic split_dyn();

		virtual Void scroll( Float xAmount,Float yAmount);
		Dynamic scroll_dyn();

		virtual bool isFlipY( );
		Dynamic isFlipY_dyn();

		virtual bool isFlipX( );
		Dynamic isFlipX_dyn();

		virtual Void flip( bool x,bool y);
		Dynamic flip_dyn();

		virtual Void setRegionHeight( int height);
		Dynamic setRegionHeight_dyn();

		virtual int getRegionHeight( );
		Dynamic getRegionHeight_dyn();

		virtual Void setRegionWidth( int width);
		Dynamic setRegionWidth_dyn();

		virtual int getRegionWidth( );
		Dynamic getRegionWidth_dyn();

		virtual Void setRegionY( int y);
		Dynamic setRegionY_dyn();

		virtual int getRegionY( );
		Dynamic getRegionY_dyn();

		virtual Void setRegionX( int x);
		Dynamic setRegionX_dyn();

		virtual int getRegionX( );
		Dynamic getRegionX_dyn();

		virtual Void setV2( Float v2);
		Dynamic setV2_dyn();

		virtual Float getV2( );
		Dynamic getV2_dyn();

		virtual Void setU2( Float u2);
		Dynamic setU2_dyn();

		virtual Float getU2( );
		Dynamic getU2_dyn();

		virtual Void setV( Float v);
		Dynamic setV_dyn();

		virtual Float getV( );
		Dynamic getV_dyn();

		virtual Void setU( Float u);
		Dynamic setU_dyn();

		virtual Float getU( );
		Dynamic getU_dyn();

		virtual Void setTexture( ::spinehx::atlas::Texture texture);
		Dynamic setTexture_dyn();

		virtual ::spinehx::atlas::Texture getTexture( );
		Dynamic getTexture_dyn();

		virtual Void setRegionRelXYWH( ::spinehx::atlas::TextureRegion region,int x,int y,int width,int height);
		Dynamic setRegionRelXYWH_dyn();

		virtual Void setRegionCopy( ::spinehx::atlas::TextureRegion region);
		Dynamic setRegionCopy_dyn();

		virtual Void setRegionUV( Float u,Float v,Float u2,Float v2);
		Dynamic setRegionUV_dyn();

		virtual Void setRegionXYWH( int x,int y,int width,int height);
		Dynamic setRegionXYWH_dyn();

		virtual Void setRegionTex( ::spinehx::atlas::Texture texture);
		Dynamic setRegionTex_dyn();

		int regionHeight;
		int regionWidth;
		Float v2;
		Float u2;
		Float v;
		Float u;
		::spinehx::atlas::Texture texture;
		static ::spinehx::atlas::TextureRegion fromTexture( ::spinehx::atlas::Texture texture);
		static Dynamic fromTexture_dyn();

		static ::spinehx::atlas::TextureRegion fromTextureWH( ::spinehx::atlas::Texture texture,int width,int height);
		static Dynamic fromTextureWH_dyn();

		static ::spinehx::atlas::TextureRegion fromTextureXYWH( ::spinehx::atlas::Texture texture,int x,int y,int width,int height);
		static Dynamic fromTextureXYWH_dyn();

		static ::spinehx::atlas::TextureRegion fromTextureUVUV( ::spinehx::atlas::Texture texture,Float u,Float v,Float u2,Float v2);
		static Dynamic fromTextureUVUV_dyn();

		static ::spinehx::atlas::TextureRegion copy( ::spinehx::atlas::TextureRegion region);
		static Dynamic copy_dyn();

		static ::spinehx::atlas::TextureRegion createRelXYWH( ::spinehx::atlas::TextureRegion region,int x,int y,int width,int height);
		static Dynamic createRelXYWH_dyn();

		static Array< ::Dynamic > splitTex( ::spinehx::atlas::Texture texture,int tileWidth,int tileHeight);
		static Dynamic splitTex_dyn();

};

} // end namespace spinehx
} // end namespace atlas

#endif /* INCLUDED_spinehx_atlas_TextureRegion */ 
