#ifndef INCLUDED_spinehx_Color
#define INCLUDED_spinehx_Color

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,Color)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  Color_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Color_obj OBJ_;
		Color_obj();
		Void __construct(Float r,Float g,Float b,Float a);

	public:
		static hx::ObjectPtr< Color_obj > __new(Float r,Float g,Float b,Float a);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Color_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Color"); }

		virtual Void set( Float r,Float g,Float b,Float a);
		Dynamic set_dyn();

		virtual Void add( Float r,Float g,Float b,Float a);
		Dynamic add_dyn();

		virtual Void set2( ::spinehx::Color c);
		Dynamic set2_dyn();

		Float a;
		Float b;
		Float g;
		Float r;
		static ::spinehx::Color copy( ::spinehx::Color c);
		static Dynamic copy_dyn();

		static ::spinehx::Color valueOf( ::String s);
		static Dynamic valueOf_dyn();

};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_Color */ 
