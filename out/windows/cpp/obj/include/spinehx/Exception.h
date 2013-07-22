#ifndef INCLUDED_spinehx_Exception
#define INCLUDED_spinehx_Exception

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,Exception)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  Exception_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Exception_obj OBJ_;
		Exception_obj();
		Void __construct(::String msg);

	public:
		static hx::ObjectPtr< Exception_obj > __new(::String msg);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Exception_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Exception"); }

		::String msg;
};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_Exception */ 
