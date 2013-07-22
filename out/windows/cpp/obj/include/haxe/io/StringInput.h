#ifndef INCLUDED_haxe_io_StringInput
#define INCLUDED_haxe_io_StringInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/io/BytesInput.h>
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,StringInput)
namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES  StringInput_obj : public ::haxe::io::BytesInput_obj{
	public:
		typedef ::haxe::io::BytesInput_obj super;
		typedef StringInput_obj OBJ_;
		StringInput_obj();
		Void __construct(::String s);

	public:
		static hx::ObjectPtr< StringInput_obj > __new(::String s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~StringInput_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StringInput"); }

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_StringInput */ 
