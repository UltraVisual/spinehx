#ifndef INCLUDED_spinehx_atlas_Region
#define INCLUDED_spinehx_atlas_Region

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(spinehx,atlas,Page)
HX_DECLARE_CLASS2(spinehx,atlas,Region)
namespace spinehx{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  Region_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Region_obj OBJ_;
		Region_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Region_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Region_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Region"); }

		Array< int > pads;
		Array< int > splits;
		bool flip;
		int height;
		int width;
		int top;
		int left;
		bool rotate;
		int originalHeight;
		int originalWidth;
		Float offsetY;
		Float offsetX;
		::String name;
		int index;
		::spinehx::atlas::Page page;
};

} // end namespace spinehx
} // end namespace atlas

#endif /* INCLUDED_spinehx_atlas_Region */ 
