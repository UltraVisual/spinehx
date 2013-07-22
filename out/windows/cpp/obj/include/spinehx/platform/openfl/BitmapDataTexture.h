#ifndef INCLUDED_spinehx_platform_openfl_BitmapDataTexture
#define INCLUDED_spinehx_platform_openfl_BitmapDataTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <spinehx/atlas/Texture.h>
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(spinehx,atlas,Texture)
HX_DECLARE_CLASS3(spinehx,platform,openfl,BitmapDataTexture)
namespace spinehx{
namespace platform{
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES  BitmapDataTexture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapDataTexture_obj OBJ_;
		BitmapDataTexture_obj();
		Void __construct(::String textureFile);

	public:
		static hx::ObjectPtr< BitmapDataTexture_obj > __new(::String textureFile);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BitmapDataTexture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::spinehx::atlas::Texture_obj *()
			{ return new ::spinehx::atlas::Texture_delegate_< BitmapDataTexture_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("BitmapDataTexture"); }

		virtual Void setFilter( ::String minFilter,::String magFilter);
		Dynamic setFilter_dyn();

		virtual Void setWrap( ::String uWrap,::String vWrap);
		Dynamic setWrap_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		::flash::display::BitmapData bd;
};

} // end namespace spinehx
} // end namespace platform
} // end namespace openfl

#endif /* INCLUDED_spinehx_platform_openfl_BitmapDataTexture */ 
