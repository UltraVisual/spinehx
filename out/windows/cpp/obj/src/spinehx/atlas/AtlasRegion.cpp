#include <hxcpp.h>

#ifndef INCLUDED_spinehx_atlas_AtlasRegion
#include <spinehx/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_spinehx_atlas_Texture
#include <spinehx/atlas/Texture.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureRegion
#include <spinehx/atlas/TextureRegion.h>
#endif
namespace spinehx{
namespace atlas{

Void AtlasRegion_obj::__construct()
{
HX_STACK_PUSH("AtlasRegion::new","spinehx/atlas/TextureAtlas.hx",454);
{
	HX_STACK_LINE(483)
	this->originalHeight = (int)0;
	HX_STACK_LINE(480)
	this->originalWidth = (int)0;
	HX_STACK_LINE(477)
	this->packedHeight = (int)0;
	HX_STACK_LINE(474)
	this->packedWidth = (int)0;
	HX_STACK_LINE(471)
	this->offsetY = (int)0;
	HX_STACK_LINE(467)
	this->offsetX = (int)0;
	HX_STACK_LINE(460)
	this->index = (int)0;
	HX_STACK_LINE(494)
	super::__construct();
}
;
	return null();
}

AtlasRegion_obj::~AtlasRegion_obj() { }

Dynamic AtlasRegion_obj::__CreateEmpty() { return  new AtlasRegion_obj; }
hx::ObjectPtr< AtlasRegion_obj > AtlasRegion_obj::__new()
{  hx::ObjectPtr< AtlasRegion_obj > result = new AtlasRegion_obj();
	result->__construct();
	return result;}

Dynamic AtlasRegion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AtlasRegion_obj > result = new AtlasRegion_obj();
	result->__construct();
	return result;}

Float AtlasRegion_obj::getRotatedPackedHeight( ){
	HX_STACK_PUSH("AtlasRegion::getRotatedPackedHeight","spinehx/atlas/TextureAtlas.hx",538);
	HX_STACK_THIS(this);
	HX_STACK_LINE(538)
	return (  ((this->rotate)) ? Float(this->packedWidth) : Float(this->packedHeight) );
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasRegion_obj,getRotatedPackedHeight,return )

Float AtlasRegion_obj::getRotatedPackedWidth( ){
	HX_STACK_PUSH("AtlasRegion::getRotatedPackedWidth","spinehx/atlas/TextureAtlas.hx",532);
	HX_STACK_THIS(this);
	HX_STACK_LINE(532)
	return (  ((this->rotate)) ? Float(this->packedHeight) : Float(this->packedWidth) );
}


HX_DEFINE_DYNAMIC_FUNC0(AtlasRegion_obj,getRotatedPackedWidth,return )

Void AtlasRegion_obj::flip( bool x,bool y){
{
		HX_STACK_PUSH("AtlasRegion::flip","spinehx/atlas/TextureAtlas.hx",524);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(525)
		this->super::flip(x,y);
		HX_STACK_LINE(526)
		if ((x)){
			HX_STACK_LINE(526)
			this->offsetX = ((this->originalWidth - this->offsetX) - this->getRotatedPackedWidth());
		}
		HX_STACK_LINE(527)
		if ((y)){
			HX_STACK_LINE(527)
			this->offsetY = ((this->originalHeight - this->offsetY) - this->getRotatedPackedHeight());
		}
	}
return null();
}


::spinehx::atlas::AtlasRegion AtlasRegion_obj::create( ::spinehx::atlas::Texture texture,int x,int y,int width,int height){
	HX_STACK_PUSH("AtlasRegion::create","spinehx/atlas/TextureAtlas.hx",498);
	HX_STACK_ARG(texture,"texture");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(499)
	::spinehx::atlas::AtlasRegion r = ::spinehx::atlas::AtlasRegion_obj::__new();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(500)
	r->setTexture(texture);
	HX_STACK_LINE(501)
	r->setRegionXYWH(x,y,width,height);
	HX_STACK_LINE(502)
	r->packedWidth = width;
	HX_STACK_LINE(503)
	r->packedHeight = height;
	HX_STACK_LINE(504)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AtlasRegion_obj,create,return )

::spinehx::atlas::AtlasRegion AtlasRegion_obj::copy( ::spinehx::atlas::AtlasRegion region){
	HX_STACK_PUSH("AtlasRegion::copy","spinehx/atlas/TextureAtlas.hx",507);
	HX_STACK_ARG(region,"region");
	HX_STACK_LINE(508)
	::spinehx::atlas::AtlasRegion r = ::spinehx::atlas::AtlasRegion_obj::__new();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(509)
	r->setRegionCopy(region);
	HX_STACK_LINE(510)
	r->index = region->index;
	HX_STACK_LINE(511)
	r->name = region->name;
	HX_STACK_LINE(512)
	r->offsetX = region->offsetX;
	HX_STACK_LINE(513)
	r->offsetY = region->offsetY;
	HX_STACK_LINE(514)
	r->packedWidth = region->packedWidth;
	HX_STACK_LINE(515)
	r->packedHeight = region->packedHeight;
	HX_STACK_LINE(516)
	r->originalWidth = region->originalWidth;
	HX_STACK_LINE(517)
	r->originalHeight = region->originalHeight;
	HX_STACK_LINE(518)
	r->rotate = region->rotate;
	HX_STACK_LINE(519)
	r->splits = region->splits;
	HX_STACK_LINE(520)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AtlasRegion_obj,copy,return )


AtlasRegion_obj::AtlasRegion_obj()
{
}

void AtlasRegion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AtlasRegion);
	HX_MARK_MEMBER_NAME(pads,"pads");
	HX_MARK_MEMBER_NAME(splits,"splits");
	HX_MARK_MEMBER_NAME(rotate,"rotate");
	HX_MARK_MEMBER_NAME(originalHeight,"originalHeight");
	HX_MARK_MEMBER_NAME(originalWidth,"originalWidth");
	HX_MARK_MEMBER_NAME(packedHeight,"packedHeight");
	HX_MARK_MEMBER_NAME(packedWidth,"packedWidth");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(index,"index");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AtlasRegion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pads,"pads");
	HX_VISIT_MEMBER_NAME(splits,"splits");
	HX_VISIT_MEMBER_NAME(rotate,"rotate");
	HX_VISIT_MEMBER_NAME(originalHeight,"originalHeight");
	HX_VISIT_MEMBER_NAME(originalWidth,"originalWidth");
	HX_VISIT_MEMBER_NAME(packedHeight,"packedHeight");
	HX_VISIT_MEMBER_NAME(packedWidth,"packedWidth");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(index,"index");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic AtlasRegion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"flip") ) { return flip_dyn(); }
		if (HX_FIELD_EQ(inName,"pads") ) { return pads; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"splits") ) { return splits; }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"packedWidth") ) { return packedWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"packedHeight") ) { return packedHeight; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalWidth") ) { return originalWidth; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { return originalHeight; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getRotatedPackedWidth") ) { return getRotatedPackedWidth_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getRotatedPackedHeight") ) { return getRotatedPackedHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AtlasRegion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"pads") ) { pads=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"splits") ) { splits=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotate") ) { rotate=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"packedWidth") ) { packedWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"packedHeight") ) { packedHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalWidth") ) { originalWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { originalHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AtlasRegion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pads"));
	outFields->push(HX_CSTRING("splits"));
	outFields->push(HX_CSTRING("rotate"));
	outFields->push(HX_CSTRING("originalHeight"));
	outFields->push(HX_CSTRING("originalWidth"));
	outFields->push(HX_CSTRING("packedHeight"));
	outFields->push(HX_CSTRING("packedWidth"));
	outFields->push(HX_CSTRING("offsetY"));
	outFields->push(HX_CSTRING("offsetX"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("index"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("copy"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getRotatedPackedHeight"),
	HX_CSTRING("getRotatedPackedWidth"),
	HX_CSTRING("flip"),
	HX_CSTRING("pads"),
	HX_CSTRING("splits"),
	HX_CSTRING("rotate"),
	HX_CSTRING("originalHeight"),
	HX_CSTRING("originalWidth"),
	HX_CSTRING("packedHeight"),
	HX_CSTRING("packedWidth"),
	HX_CSTRING("offsetY"),
	HX_CSTRING("offsetX"),
	HX_CSTRING("name"),
	HX_CSTRING("index"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AtlasRegion_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AtlasRegion_obj::__mClass,"__mClass");
};

Class AtlasRegion_obj::__mClass;

void AtlasRegion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.atlas.AtlasRegion"), hx::TCanCast< AtlasRegion_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AtlasRegion_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace atlas
