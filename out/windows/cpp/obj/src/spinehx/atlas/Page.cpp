#include <hxcpp.h>

#ifndef INCLUDED_spinehx_atlas_Page
#include <spinehx/atlas/Page.h>
#endif
#ifndef INCLUDED_spinehx_atlas_Texture
#include <spinehx/atlas/Texture.h>
#endif
namespace spinehx{
namespace atlas{

Void Page_obj::__construct(::String textureFile,bool useMipMaps,::String format,::String minFilter,::String magFilter,::String uWrap,::String vWrap)
{
HX_STACK_PUSH("Page::new","spinehx/atlas/TextureAtlas.hx",41);
{
	HX_STACK_LINE(42)
	this->textureFile = textureFile;
	HX_STACK_LINE(43)
	this->useMipMaps = useMipMaps;
	HX_STACK_LINE(44)
	this->format = format;
	HX_STACK_LINE(45)
	this->minFilter = minFilter;
	HX_STACK_LINE(46)
	this->magFilter = magFilter;
	HX_STACK_LINE(47)
	this->uWrap = uWrap;
	HX_STACK_LINE(48)
	this->vWrap = vWrap;
}
;
	return null();
}

Page_obj::~Page_obj() { }

Dynamic Page_obj::__CreateEmpty() { return  new Page_obj; }
hx::ObjectPtr< Page_obj > Page_obj::__new(::String textureFile,bool useMipMaps,::String format,::String minFilter,::String magFilter,::String uWrap,::String vWrap)
{  hx::ObjectPtr< Page_obj > result = new Page_obj();
	result->__construct(textureFile,useMipMaps,format,minFilter,magFilter,uWrap,vWrap);
	return result;}

Dynamic Page_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Page_obj > result = new Page_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}


Page_obj::Page_obj()
{
}

void Page_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Page);
	HX_MARK_MEMBER_NAME(vWrap,"vWrap");
	HX_MARK_MEMBER_NAME(uWrap,"uWrap");
	HX_MARK_MEMBER_NAME(magFilter,"magFilter");
	HX_MARK_MEMBER_NAME(minFilter,"minFilter");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(useMipMaps,"useMipMaps");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(textureFile,"textureFile");
	HX_MARK_END_CLASS();
}

void Page_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vWrap,"vWrap");
	HX_VISIT_MEMBER_NAME(uWrap,"uWrap");
	HX_VISIT_MEMBER_NAME(magFilter,"magFilter");
	HX_VISIT_MEMBER_NAME(minFilter,"minFilter");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(useMipMaps,"useMipMaps");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(textureFile,"textureFile");
}

Dynamic Page_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"vWrap") ) { return vWrap; }
		if (HX_FIELD_EQ(inName,"uWrap") ) { return uWrap; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magFilter") ) { return magFilter; }
		if (HX_FIELD_EQ(inName,"minFilter") ) { return minFilter; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useMipMaps") ) { return useMipMaps; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"textureFile") ) { return textureFile; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Page_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"vWrap") ) { vWrap=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uWrap") ) { uWrap=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::spinehx::atlas::Texture >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magFilter") ) { magFilter=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minFilter") ) { minFilter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useMipMaps") ) { useMipMaps=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"textureFile") ) { textureFile=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Page_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("vWrap"));
	outFields->push(HX_CSTRING("uWrap"));
	outFields->push(HX_CSTRING("magFilter"));
	outFields->push(HX_CSTRING("minFilter"));
	outFields->push(HX_CSTRING("format"));
	outFields->push(HX_CSTRING("useMipMaps"));
	outFields->push(HX_CSTRING("texture"));
	outFields->push(HX_CSTRING("textureFile"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("vWrap"),
	HX_CSTRING("uWrap"),
	HX_CSTRING("magFilter"),
	HX_CSTRING("minFilter"),
	HX_CSTRING("format"),
	HX_CSTRING("useMipMaps"),
	HX_CSTRING("texture"),
	HX_CSTRING("textureFile"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Page_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Page_obj::__mClass,"__mClass");
};

Class Page_obj::__mClass;

void Page_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.atlas.Page"), hx::TCanCast< Page_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Page_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace atlas
