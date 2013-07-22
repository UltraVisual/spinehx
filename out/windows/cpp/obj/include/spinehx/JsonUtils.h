#ifndef INCLUDED_spinehx_JsonUtils
#define INCLUDED_spinehx_JsonUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,JsonUtils)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  JsonUtils_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JsonUtils_obj OBJ_;
		JsonUtils_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< JsonUtils_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~JsonUtils_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("JsonUtils"); }

		static Dynamic parse( ::String data);
		static Dynamic parse_dyn();

		static Array< ::String > fields( Dynamic node);
		static Dynamic fields_dyn();

		static Dynamic getNode( Dynamic node,::String field);
		static Dynamic getNode_dyn();

		static Dynamic getDynamic( Dynamic node,::String field);
		static Dynamic getDynamic_dyn();

		static Dynamic getNodesArray( Dynamic node,::String field);
		static Dynamic getNodesArray_dyn();

		static int getInt( Dynamic node,::String field);
		static Dynamic getInt_dyn();

		static ::String getStr( Dynamic node,::String field);
		static Dynamic getStr_dyn();

		static bool getBool( Dynamic node,::String field,hx::Null< bool >  defaultValue);
		static Dynamic getBool_dyn();

};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_JsonUtils */ 
