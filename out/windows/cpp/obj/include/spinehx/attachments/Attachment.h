#ifndef INCLUDED_spinehx_attachments_Attachment
#define INCLUDED_spinehx_attachments_Attachment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(spinehx,attachments,Attachment)
namespace spinehx{
namespace attachments{


class HXCPP_CLASS_ATTRIBUTES  Attachment_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Attachment_obj OBJ_;
		Attachment_obj();
		Void __construct(::String name);

	public:
		static hx::ObjectPtr< Attachment_obj > __new(::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Attachment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Attachment"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

		::String name;
};

} // end namespace spinehx
} // end namespace attachments

#endif /* INCLUDED_spinehx_attachments_Attachment */ 
