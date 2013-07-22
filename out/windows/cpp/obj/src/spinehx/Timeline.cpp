#include <hxcpp.h>

#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_Timeline
#include <spinehx/Timeline.h>
#endif
namespace spinehx{

HX_DEFINE_DYNAMIC_FUNC3(Timeline_obj,apply,)


static ::String sMemberFields[] = {
	HX_CSTRING("apply"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timeline_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timeline_obj::__mClass,"__mClass");
};

Class Timeline_obj::__mClass;

void Timeline_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.Timeline"), hx::TCanCast< Timeline_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Timeline_obj::__boot()
{
}

} // end namespace spinehx
