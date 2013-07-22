#ifndef INCLUDED_spinehx_ArrayUtils
#define INCLUDED_spinehx_ArrayUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,ArrayUtils)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  ArrayUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayUtils_obj OBJ_;
		ArrayUtils_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ArrayUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArrayUtils_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArrayUtils"); }

		static Array< Float > allocFloat( int n);
		static Dynamic allocFloat_dyn();

		static Array< ::String > allocString( int n);
		static Dynamic allocString_dyn();

};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_ArrayUtils */ 
