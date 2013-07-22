#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_nme_AssetData
#include <nme/AssetData.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
namespace nme{

Void AssetData_obj::__construct()
{
	return null();
}

AssetData_obj::~AssetData_obj() { }

Dynamic AssetData_obj::__CreateEmpty() { return  new AssetData_obj; }
hx::ObjectPtr< AssetData_obj > AssetData_obj::__new()
{  hx::ObjectPtr< AssetData_obj > result = new AssetData_obj();
	result->__construct();
	return result;}

Dynamic AssetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetData_obj > result = new AssetData_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap AssetData_obj::library;

::haxe::ds::StringMap AssetData_obj::path;

::haxe::ds::StringMap AssetData_obj::type;

bool AssetData_obj::initialized;

Void AssetData_obj::initialize( ){
{
		HX_STACK_PUSH("AssetData::initialize","nme/AssetData.hx",17);
		HX_STACK_LINE(17)
		if ((!(::nme::AssetData_obj::initialized))){
			HX_STACK_LINE(21)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/goblins.atlas"),HX_CSTRING("assets/goblins.atlas"));
			HX_STACK_LINE(22)
			{
				HX_STACK_LINE(22)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(22)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/goblins.atlas"),value);
			}
			HX_STACK_LINE(23)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/goblins.json"),HX_CSTRING("assets/goblins.json"));
			HX_STACK_LINE(24)
			{
				HX_STACK_LINE(24)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(24)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/goblins.json"),value);
			}
			HX_STACK_LINE(25)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/goblins.png"),HX_CSTRING("assets/goblins.png"));
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(26)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/goblins.png"),value);
			}
			HX_STACK_LINE(27)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/goblins.skel"),HX_CSTRING("assets/goblins.skel"));
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("binary").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(28)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/goblins.skel"),value);
			}
			HX_STACK_LINE(29)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/spineboy.atlas"),HX_CSTRING("assets/spineboy.atlas"));
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(30)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/spineboy.atlas"),value);
			}
			HX_STACK_LINE(31)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/spineboy.json"),HX_CSTRING("assets/spineboy.json"));
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(32)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/spineboy.json"),value);
			}
			HX_STACK_LINE(33)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/spineboy.png"),HX_CSTRING("assets/spineboy.png"));
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(34)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/spineboy.png"),value);
			}
			HX_STACK_LINE(35)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/spineboy.skel"),HX_CSTRING("assets/spineboy.skel"));
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("binary").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(36)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/spineboy.skel"),value);
			}
			HX_STACK_LINE(39)
			::nme::AssetData_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AssetData_obj,initialize,(void))


AssetData_obj::AssetData_obj()
{
}

void AssetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetData);
	HX_MARK_END_CLASS();
}

void AssetData_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic AssetData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { return library; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetData_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("library"),
	HX_CSTRING("path"),
	HX_CSTRING("type"),
	HX_CSTRING("initialized"),
	HX_CSTRING("initialize"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetData_obj::library,"library");
	HX_MARK_MEMBER_NAME(AssetData_obj::path,"path");
	HX_MARK_MEMBER_NAME(AssetData_obj::type,"type");
	HX_MARK_MEMBER_NAME(AssetData_obj::initialized,"initialized");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetData_obj::library,"library");
	HX_VISIT_MEMBER_NAME(AssetData_obj::path,"path");
	HX_VISIT_MEMBER_NAME(AssetData_obj::type,"type");
	HX_VISIT_MEMBER_NAME(AssetData_obj::initialized,"initialized");
};

Class AssetData_obj::__mClass;

void AssetData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.AssetData"), hx::TCanCast< AssetData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AssetData_obj::__boot()
{
	library= ::haxe::ds::StringMap_obj::__new();
	path= ::haxe::ds::StringMap_obj::__new();
	type= ::haxe::ds::StringMap_obj::__new();
	initialized= false;
}

} // end namespace nme
