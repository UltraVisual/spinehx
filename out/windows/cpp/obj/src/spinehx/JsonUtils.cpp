#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_Json
#include <haxe/Json.h>
#endif
#ifndef INCLUDED_spinehx_JsonUtils
#include <spinehx/JsonUtils.h>
#endif
namespace spinehx{

Void JsonUtils_obj::__construct()
{
	return null();
}

JsonUtils_obj::~JsonUtils_obj() { }

Dynamic JsonUtils_obj::__CreateEmpty() { return  new JsonUtils_obj; }
hx::ObjectPtr< JsonUtils_obj > JsonUtils_obj::__new()
{  hx::ObjectPtr< JsonUtils_obj > result = new JsonUtils_obj();
	result->__construct();
	return result;}

Dynamic JsonUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JsonUtils_obj > result = new JsonUtils_obj();
	result->__construct();
	return result;}

Dynamic JsonUtils_obj::parse( ::String data){
	HX_STACK_PUSH("JsonUtils::parse","spinehx/JsonUtils.hx",9);
	HX_STACK_ARG(data,"data");
	HX_STACK_LINE(9)
	return ::haxe::Json_obj::parse(data);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JsonUtils_obj,parse,return )

Array< ::String > JsonUtils_obj::fields( Dynamic node){
	HX_STACK_PUSH("JsonUtils::fields","spinehx/JsonUtils.hx",13);
	HX_STACK_ARG(node,"node");
	HX_STACK_LINE(13)
	return ::Reflect_obj::fields(node);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JsonUtils_obj,fields,return )

Dynamic JsonUtils_obj::getNode( Dynamic node,::String field){
	HX_STACK_PUSH("JsonUtils::getNode","spinehx/JsonUtils.hx",17);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(field,"field");
	HX_STACK_LINE(17)
	return (  (((node == null()))) ? Dynamic(null()) : Dynamic(node->__Field(field,true)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JsonUtils_obj,getNode,return )

Dynamic JsonUtils_obj::getDynamic( Dynamic node,::String field){
	HX_STACK_PUSH("JsonUtils::getDynamic","spinehx/JsonUtils.hx",21);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(field,"field");
	HX_STACK_LINE(21)
	return (  (((node == null()))) ? Dynamic(null()) : Dynamic(node->__Field(field,true)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JsonUtils_obj,getDynamic,return )

Dynamic JsonUtils_obj::getNodesArray( Dynamic node,::String field){
	HX_STACK_PUSH("JsonUtils::getNodesArray","spinehx/JsonUtils.hx",25);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(field,"field");
	HX_STACK_LINE(25)
	return hx::TCastToArray((  (((node == null()))) ? Dynamic(null()) : Dynamic(node->__Field(field,true)) ));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JsonUtils_obj,getNodesArray,return )

int JsonUtils_obj::getInt( Dynamic node,::String field){
	HX_STACK_PUSH("JsonUtils::getInt","spinehx/JsonUtils.hx",29);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(field,"field");
	HX_STACK_LINE(29)
	return (  (((node == null()))) ? Dynamic(null()) : Dynamic(node->__Field(field,true)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JsonUtils_obj,getInt,return )

::String JsonUtils_obj::getStr( Dynamic node,::String field){
	HX_STACK_PUSH("JsonUtils::getStr","spinehx/JsonUtils.hx",33);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(field,"field");
	HX_STACK_LINE(33)
	return (  (((node == null()))) ? Dynamic(null()) : Dynamic(node->__Field(field,true)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JsonUtils_obj,getStr,return )

bool JsonUtils_obj::getBool( Dynamic node,::String field,hx::Null< bool >  __o_defaultValue){
bool defaultValue = __o_defaultValue.Default(false);
	HX_STACK_PUSH("JsonUtils::getBool","spinehx/JsonUtils.hx",36);
	HX_STACK_ARG(node,"node");
	HX_STACK_ARG(field,"field");
	HX_STACK_ARG(defaultValue,"defaultValue");
{
		HX_STACK_LINE(37)
		Dynamic value = (  (((node == null()))) ? Dynamic(null()) : Dynamic(node->__Field(field,true)) );		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(38)
		if (((value == null()))){
			HX_STACK_LINE(38)
			return defaultValue;
		}
		HX_STACK_LINE(41)
		return value;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JsonUtils_obj,getBool,return )


JsonUtils_obj::JsonUtils_obj()
{
}

void JsonUtils_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JsonUtils);
	HX_MARK_END_CLASS();
}

void JsonUtils_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic JsonUtils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { return fields_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt") ) { return getInt_dyn(); }
		if (HX_FIELD_EQ(inName,"getStr") ) { return getStr_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getNode") ) { return getNode_dyn(); }
		if (HX_FIELD_EQ(inName,"getBool") ) { return getBool_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDynamic") ) { return getDynamic_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getNodesArray") ) { return getNodesArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JsonUtils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void JsonUtils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("parse"),
	HX_CSTRING("fields"),
	HX_CSTRING("getNode"),
	HX_CSTRING("getDynamic"),
	HX_CSTRING("getNodesArray"),
	HX_CSTRING("getInt"),
	HX_CSTRING("getStr"),
	HX_CSTRING("getBool"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JsonUtils_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JsonUtils_obj::__mClass,"__mClass");
};

Class JsonUtils_obj::__mClass;

void JsonUtils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.JsonUtils"), hx::TCanCast< JsonUtils_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void JsonUtils_obj::__boot()
{
}

} // end namespace spinehx
