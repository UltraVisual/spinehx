#include <hxcpp.h>

#ifndef INCLUDED_spinehx_attachments_AttachmentType
#include <spinehx/attachments/AttachmentType.h>
#endif
#ifndef INCLUDED_spinehx_attachments_AttachmentTypes
#include <spinehx/attachments/AttachmentTypes.h>
#endif
namespace spinehx{
namespace attachments{

Void AttachmentTypes_obj::__construct()
{
	return null();
}

AttachmentTypes_obj::~AttachmentTypes_obj() { }

Dynamic AttachmentTypes_obj::__CreateEmpty() { return  new AttachmentTypes_obj; }
hx::ObjectPtr< AttachmentTypes_obj > AttachmentTypes_obj::__new()
{  hx::ObjectPtr< AttachmentTypes_obj > result = new AttachmentTypes_obj();
	result->__construct();
	return result;}

Dynamic AttachmentTypes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AttachmentTypes_obj > result = new AttachmentTypes_obj();
	result->__construct();
	return result;}

::spinehx::attachments::AttachmentType AttachmentTypes_obj::valueOf( ::String t,::spinehx::attachments::AttachmentType def){
	HX_STACK_PUSH("AttachmentTypes::valueOf","spinehx/attachments/AttachmentType.hx",31);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(def,"def");
	HX_STACK_LINE(31)
	::String _switch_1 = (t);
	if (  ( _switch_1==HX_CSTRING("region"))){
		HX_STACK_LINE(33)
		return ::spinehx::attachments::AttachmentType_obj::region;
	}
	else if (  ( _switch_1==HX_CSTRING("regionSequence"))){
		HX_STACK_LINE(34)
		return ::spinehx::attachments::AttachmentType_obj::regionSequence;
	}
	else  {
		HX_STACK_LINE(35)
		return def;
	}
;
;
	HX_STACK_LINE(31)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AttachmentTypes_obj,valueOf,return )


AttachmentTypes_obj::AttachmentTypes_obj()
{
}

void AttachmentTypes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttachmentTypes);
	HX_MARK_END_CLASS();
}

void AttachmentTypes_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic AttachmentTypes_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"valueOf") ) { return valueOf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AttachmentTypes_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AttachmentTypes_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("valueOf"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AttachmentTypes_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AttachmentTypes_obj::__mClass,"__mClass");
};

Class AttachmentTypes_obj::__mClass;

void AttachmentTypes_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.attachments.AttachmentTypes"), hx::TCanCast< AttachmentTypes_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AttachmentTypes_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace attachments
