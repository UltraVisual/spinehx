#ifndef INCLUDED_spinehx_attachments_Modes
#define INCLUDED_spinehx_attachments_Modes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(spinehx,attachments,Mode)
HX_DECLARE_CLASS2(spinehx,attachments,Modes)
namespace spinehx{
namespace attachments{


class HXCPP_CLASS_ATTRIBUTES  Modes_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Modes_obj OBJ_;
		Modes_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Modes_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Modes_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Modes"); }

		static ::spinehx::attachments::Mode valueOf( ::String t,::spinehx::attachments::Mode def);
		static Dynamic valueOf_dyn();

};

} // end namespace spinehx
} // end namespace attachments

#endif /* INCLUDED_spinehx_attachments_Modes */ 
