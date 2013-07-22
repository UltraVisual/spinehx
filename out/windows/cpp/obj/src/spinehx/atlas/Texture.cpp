#include <hxcpp.h>

#ifndef INCLUDED_spinehx_atlas_Texture
#include <spinehx/atlas/Texture.h>
#endif
namespace spinehx{
namespace atlas{

HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,setFilter,)

HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,setWrap,)

HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,dispose,)

HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,getHeight,return )

HX_DEFINE_DYNAMIC_FUNC0(Texture_obj,getWidth,return )


static ::String sMemberFields[] = {
	HX_CSTRING("setFilter"),
	HX_CSTRING("setWrap"),
	HX_CSTRING("dispose"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("getWidth"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
};

Class Texture_obj::__mClass;

void Texture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.atlas.Texture"), hx::TCanCast< Texture_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Texture_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace atlas
