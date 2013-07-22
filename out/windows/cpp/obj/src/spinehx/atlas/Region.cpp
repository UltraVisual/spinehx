#include <hxcpp.h>

#ifndef INCLUDED_spinehx_atlas_Page
#include <spinehx/atlas/Page.h>
#endif
#ifndef INCLUDED_spinehx_atlas_Region
#include <spinehx/atlas/Region.h>
#endif
namespace spinehx{
namespace atlas{

Void Region_obj::__construct()
{
HX_STACK_PUSH("Region::new","spinehx/atlas/TextureAtlas.hx",52);
{
	HX_STACK_LINE(64)
	this->height = (int)0;
	HX_STACK_LINE(63)
	this->width = (int)0;
	HX_STACK_LINE(62)
	this->top = (int)0;
	HX_STACK_LINE(61)
	this->left = (int)0;
	HX_STACK_LINE(59)
	this->originalHeight = (int)0;
	HX_STACK_LINE(58)
	this->originalWidth = (int)0;
	HX_STACK_LINE(57)
	this->offsetY = (int)0;
	HX_STACK_LINE(56)
	this->offsetX = (int)0;
	HX_STACK_LINE(54)
	this->index = (int)0;
}
;
	return null();
}

Region_obj::~Region_obj() { }

Dynamic Region_obj::__CreateEmpty() { return  new Region_obj; }
hx::ObjectPtr< Region_obj > Region_obj::__new()
{  hx::ObjectPtr< Region_obj > result = new Region_obj();
	result->__construct();
	return result;}

Dynamic Region_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Region_obj > result = new Region_obj();
	result->__construct();
	return result;}


Region_obj::Region_obj()
{
}

void Region_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Region);
	HX_MARK_MEMBER_NAME(pads,"pads");
	HX_MARK_MEMBER_NAME(splits,"splits");
	HX_MARK_MEMBER_NAME(flip,"flip");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(rotate,"rotate");
	HX_MARK_MEMBER_NAME(originalHeight,"originalHeight");
	HX_MARK_MEMBER_NAME(originalWidth,"originalWidth");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(page,"page");
	HX_MARK_END_CLASS();
}

void Region_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pads,"pads");
	HX_VISIT_MEMBER_NAME(splits,"splits");
	HX_VISIT_MEMBER_NAME(flip,"flip");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(rotate,"rotate");
	HX_VISIT_MEMBER_NAME(originalHeight,"originalHeight");
	HX_VISIT_MEMBER_NAME(originalWidth,"originalWidth");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(page,"page");
}

Dynamic Region_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return top; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pads") ) { return pads; }
		if (HX_FIELD_EQ(inName,"flip") ) { return flip; }
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"page") ) { return page; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"splits") ) { return splits; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalWidth") ) { return originalWidth; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { return originalHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Region_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pads") ) { pads=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flip") ) { flip=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"page") ) { page=inValue.Cast< ::spinehx::atlas::Page >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"splits") ) { splits=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotate") ) { rotate=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalWidth") ) { originalWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { originalHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Region_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pads"));
	outFields->push(HX_CSTRING("splits"));
	outFields->push(HX_CSTRING("flip"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("rotate"));
	outFields->push(HX_CSTRING("originalHeight"));
	outFields->push(HX_CSTRING("originalWidth"));
	outFields->push(HX_CSTRING("offsetY"));
	outFields->push(HX_CSTRING("offsetX"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("index"));
	outFields->push(HX_CSTRING("page"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("pads"),
	HX_CSTRING("splits"),
	HX_CSTRING("flip"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("top"),
	HX_CSTRING("left"),
	HX_CSTRING("rotate"),
	HX_CSTRING("originalHeight"),
	HX_CSTRING("originalWidth"),
	HX_CSTRING("offsetY"),
	HX_CSTRING("offsetX"),
	HX_CSTRING("name"),
	HX_CSTRING("index"),
	HX_CSTRING("page"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Region_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Region_obj::__mClass,"__mClass");
};

Class Region_obj::__mClass;

void Region_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.atlas.Region"), hx::TCanCast< Region_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Region_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace atlas
