#ifndef INCLUDED_spinehx_attachments_NumberUtils
#define INCLUDED_spinehx_attachments_NumberUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(spinehx,attachments,NumberUtils)
namespace spinehx{
namespace attachments{


class HXCPP_CLASS_ATTRIBUTES  NumberUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NumberUtils_obj OBJ_;
		NumberUtils_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< NumberUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~NumberUtils_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("NumberUtils"); }

		static Float intToFloatColor( int value);
		static Dynamic intToFloatColor_dyn();

};

} // end namespace spinehx
} // end namespace attachments

#endif /* INCLUDED_spinehx_attachments_NumberUtils */ 
