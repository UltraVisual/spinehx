#include <hxcpp.h>

#ifndef INCLUDED_spinehx_atlas_Texture
#include <spinehx/atlas/Texture.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureLoader
#include <spinehx/atlas/TextureLoader.h>
#endif
namespace spinehx{
namespace atlas{

HX_DEFINE_DYNAMIC_FUNC3(TextureLoader_obj,loadTexture,return )


static ::String sMemberFields[] = {
	HX_CSTRING("loadTexture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureLoader_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureLoader_obj::__mClass,"__mClass");
};

Class TextureLoader_obj::__mClass;

void TextureLoader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.atlas.TextureLoader"), hx::TCanCast< TextureLoader_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TextureLoader_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace atlas
