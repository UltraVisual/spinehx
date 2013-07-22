#include <hxcpp.h>

#ifndef INCLUDED_spinehx_atlas_Texture
#include <spinehx/atlas/Texture.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureLoader
#include <spinehx/atlas/TextureLoader.h>
#endif
#ifndef INCLUDED_spinehx_platform_openfl_BitmapDataTexture
#include <spinehx/platform/openfl/BitmapDataTexture.h>
#endif
#ifndef INCLUDED_spinehx_platform_openfl_BitmapDataTextureLoader
#include <spinehx/platform/openfl/BitmapDataTextureLoader.h>
#endif
namespace spinehx{
namespace platform{
namespace openfl{

Void BitmapDataTextureLoader_obj::__construct()
{
HX_STACK_PUSH("BitmapDataTextureLoader::new","spinehx/platform/openfl/BitmapDataTextureLoader.hx",5);
{
}
;
	return null();
}

BitmapDataTextureLoader_obj::~BitmapDataTextureLoader_obj() { }

Dynamic BitmapDataTextureLoader_obj::__CreateEmpty() { return  new BitmapDataTextureLoader_obj; }
hx::ObjectPtr< BitmapDataTextureLoader_obj > BitmapDataTextureLoader_obj::__new()
{  hx::ObjectPtr< BitmapDataTextureLoader_obj > result = new BitmapDataTextureLoader_obj();
	result->__construct();
	return result;}

Dynamic BitmapDataTextureLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapDataTextureLoader_obj > result = new BitmapDataTextureLoader_obj();
	result->__construct();
	return result;}

hx::Object *BitmapDataTextureLoader_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::spinehx::atlas::TextureLoader_obj)) return operator ::spinehx::atlas::TextureLoader_obj *();
	return super::__ToInterface(inType);
}

::spinehx::atlas::Texture BitmapDataTextureLoader_obj::loadTexture( ::String textureFile,::String format,bool useMipMaps){
	HX_STACK_PUSH("BitmapDataTextureLoader::loadTexture","spinehx/platform/openfl/BitmapDataTextureLoader.hx",8);
	HX_STACK_THIS(this);
	HX_STACK_ARG(textureFile,"textureFile");
	HX_STACK_ARG(format,"format");
	HX_STACK_ARG(useMipMaps,"useMipMaps");
	HX_STACK_LINE(8)
	return ::spinehx::platform::openfl::BitmapDataTexture_obj::__new(textureFile);
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapDataTextureLoader_obj,loadTexture,return )


BitmapDataTextureLoader_obj::BitmapDataTextureLoader_obj()
{
}

void BitmapDataTextureLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapDataTextureLoader);
	HX_MARK_END_CLASS();
}

void BitmapDataTextureLoader_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic BitmapDataTextureLoader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"loadTexture") ) { return loadTexture_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapDataTextureLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapDataTextureLoader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("loadTexture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapDataTextureLoader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapDataTextureLoader_obj::__mClass,"__mClass");
};

Class BitmapDataTextureLoader_obj::__mClass;

void BitmapDataTextureLoader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.platform.openfl.BitmapDataTextureLoader"), hx::TCanCast< BitmapDataTextureLoader_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BitmapDataTextureLoader_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace platform
} // end namespace openfl
