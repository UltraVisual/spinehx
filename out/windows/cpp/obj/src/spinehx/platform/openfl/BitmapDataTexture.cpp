#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_spinehx_atlas_Texture
#include <spinehx/atlas/Texture.h>
#endif
#ifndef INCLUDED_spinehx_platform_openfl_BitmapDataTexture
#include <spinehx/platform/openfl/BitmapDataTexture.h>
#endif
namespace spinehx{
namespace platform{
namespace openfl{

Void BitmapDataTexture_obj::__construct(::String textureFile)
{
HX_STACK_PUSH("BitmapDataTexture::new","spinehx/platform/openfl/BitmapDataTexture.hx",8);
{
	HX_STACK_LINE(8)
	this->bd = ::openfl::Assets_obj::getBitmapData(textureFile,null());
}
;
	return null();
}

BitmapDataTexture_obj::~BitmapDataTexture_obj() { }

Dynamic BitmapDataTexture_obj::__CreateEmpty() { return  new BitmapDataTexture_obj; }
hx::ObjectPtr< BitmapDataTexture_obj > BitmapDataTexture_obj::__new(::String textureFile)
{  hx::ObjectPtr< BitmapDataTexture_obj > result = new BitmapDataTexture_obj();
	result->__construct(textureFile);
	return result;}

Dynamic BitmapDataTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapDataTexture_obj > result = new BitmapDataTexture_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *BitmapDataTexture_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::spinehx::atlas::Texture_obj)) return operator ::spinehx::atlas::Texture_obj *();
	return super::__ToInterface(inType);
}

Void BitmapDataTexture_obj::setFilter( ::String minFilter,::String magFilter){
{
		HX_STACK_PUSH("BitmapDataTexture::setFilter","spinehx/platform/openfl/BitmapDataTexture.hx",19);
		HX_STACK_THIS(this);
		HX_STACK_ARG(minFilter,"minFilter");
		HX_STACK_ARG(magFilter,"magFilter");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapDataTexture_obj,setFilter,(void))

Void BitmapDataTexture_obj::setWrap( ::String uWrap,::String vWrap){
{
		HX_STACK_PUSH("BitmapDataTexture::setWrap","spinehx/platform/openfl/BitmapDataTexture.hx",18);
		HX_STACK_THIS(this);
		HX_STACK_ARG(uWrap,"uWrap");
		HX_STACK_ARG(vWrap,"vWrap");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapDataTexture_obj,setWrap,(void))

Void BitmapDataTexture_obj::dispose( ){
{
		HX_STACK_PUSH("BitmapDataTexture::dispose","spinehx/platform/openfl/BitmapDataTexture.hx",17);
		HX_STACK_THIS(this);
		HX_STACK_LINE(17)
		this->bd->dispose();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapDataTexture_obj,dispose,(void))

int BitmapDataTexture_obj::getHeight( ){
	HX_STACK_PUSH("BitmapDataTexture::getHeight","spinehx/platform/openfl/BitmapDataTexture.hx",14);
	HX_STACK_THIS(this);
	HX_STACK_LINE(14)
	return this->bd->get_height();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapDataTexture_obj,getHeight,return )

int BitmapDataTexture_obj::getWidth( ){
	HX_STACK_PUSH("BitmapDataTexture::getWidth","spinehx/platform/openfl/BitmapDataTexture.hx",11);
	HX_STACK_THIS(this);
	HX_STACK_LINE(11)
	return this->bd->get_width();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapDataTexture_obj,getWidth,return )


BitmapDataTexture_obj::BitmapDataTexture_obj()
{
}

void BitmapDataTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapDataTexture);
	HX_MARK_MEMBER_NAME(bd,"bd");
	HX_MARK_END_CLASS();
}

void BitmapDataTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bd,"bd");
}

Dynamic BitmapDataTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bd") ) { return bd; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setWrap") ) { return setWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setFilter") ) { return setFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapDataTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bd") ) { bd=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapDataTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bd"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setFilter"),
	HX_CSTRING("setWrap"),
	HX_CSTRING("dispose"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("bd"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapDataTexture_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapDataTexture_obj::__mClass,"__mClass");
};

Class BitmapDataTexture_obj::__mClass;

void BitmapDataTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.platform.openfl.BitmapDataTexture"), hx::TCanCast< BitmapDataTexture_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BitmapDataTexture_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace platform
} // end namespace openfl
