#ifndef INCLUDED_spinehx_atlas_TextureAtlasData
#define INCLUDED_spinehx_atlas_TextureAtlasData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(spinehx,atlas,Page)
HX_DECLARE_CLASS2(spinehx,atlas,Region)
HX_DECLARE_CLASS2(spinehx,atlas,TextureAtlasData)
namespace spinehx{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  TextureAtlasData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextureAtlasData_obj OBJ_;
		TextureAtlasData_obj();
		Void __construct(::String packFileData,::String imagesDir,bool flip);

	public:
		static hx::ObjectPtr< TextureAtlasData_obj > __new(::String packFileData,::String imagesDir,bool flip);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TextureAtlasData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextureAtlasData"); }

		virtual Array< ::Dynamic > getRegions( );
		Dynamic getRegions_dyn();

		virtual Array< ::Dynamic > getPages( );
		Dynamic getPages_dyn();

		virtual int readTuple( ::haxe::io::Input reader);
		Dynamic readTuple_dyn();

		virtual ::String readValue( ::haxe::io::Input reader);
		Dynamic readValue_dyn();

		Array< ::String > tuple;
		Array< ::Dynamic > regions;
		Array< ::Dynamic > pages;
};

} // end namespace spinehx
} // end namespace atlas

#endif /* INCLUDED_spinehx_atlas_TextureAtlasData */ 
