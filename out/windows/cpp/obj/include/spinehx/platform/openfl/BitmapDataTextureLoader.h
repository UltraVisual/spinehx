#ifndef INCLUDED_spinehx_platform_openfl_BitmapDataTextureLoader
#define INCLUDED_spinehx_platform_openfl_BitmapDataTextureLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <spinehx/atlas/TextureLoader.h>
HX_DECLARE_CLASS2(spinehx,atlas,Texture)
HX_DECLARE_CLASS2(spinehx,atlas,TextureLoader)
HX_DECLARE_CLASS3(spinehx,platform,openfl,BitmapDataTextureLoader)
namespace spinehx{
namespace platform{
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES  BitmapDataTextureLoader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapDataTextureLoader_obj OBJ_;
		BitmapDataTextureLoader_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BitmapDataTextureLoader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BitmapDataTextureLoader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::spinehx::atlas::TextureLoader_obj *()
			{ return new ::spinehx::atlas::TextureLoader_delegate_< BitmapDataTextureLoader_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("BitmapDataTextureLoader"); }

		virtual ::spinehx::atlas::Texture loadTexture( ::String textureFile,::String format,bool useMipMaps);
		Dynamic loadTexture_dyn();

};

} // end namespace spinehx
} // end namespace platform
} // end namespace openfl

#endif /* INCLUDED_spinehx_platform_openfl_BitmapDataTextureLoader */ 
