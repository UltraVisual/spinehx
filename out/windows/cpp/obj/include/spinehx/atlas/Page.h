#ifndef INCLUDED_spinehx_atlas_Page
#define INCLUDED_spinehx_atlas_Page

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(spinehx,atlas,Page)
HX_DECLARE_CLASS2(spinehx,atlas,Texture)
namespace spinehx{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  Page_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Page_obj OBJ_;
		Page_obj();
		Void __construct(::String textureFile,bool useMipMaps,::String format,::String minFilter,::String magFilter,::String uWrap,::String vWrap);

	public:
		static hx::ObjectPtr< Page_obj > __new(::String textureFile,bool useMipMaps,::String format,::String minFilter,::String magFilter,::String uWrap,::String vWrap);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Page_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Page"); }

		::String vWrap;
		::String uWrap;
		::String magFilter;
		::String minFilter;
		::String format;
		bool useMipMaps;
		::spinehx::atlas::Texture texture;
		::String textureFile;
};

} // end namespace spinehx
} // end namespace atlas

#endif /* INCLUDED_spinehx_atlas_Page */ 
