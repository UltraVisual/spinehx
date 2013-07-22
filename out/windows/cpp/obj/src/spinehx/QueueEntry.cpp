#include <hxcpp.h>

#ifndef INCLUDED_spinehx_Animation
#include <spinehx/Animation.h>
#endif
#ifndef INCLUDED_spinehx_QueueEntry
#include <spinehx/QueueEntry.h>
#endif
namespace spinehx{

Void QueueEntry_obj::__construct()
{
HX_STACK_PUSH("QueueEntry::new","spinehx/AnimationState.hx",181);
{
	HX_STACK_LINE(184)
	this->delay = (int)0;
	HX_STACK_LINE(183)
	this->loop = false;
}
;
	return null();
}

QueueEntry_obj::~QueueEntry_obj() { }

Dynamic QueueEntry_obj::__CreateEmpty() { return  new QueueEntry_obj; }
hx::ObjectPtr< QueueEntry_obj > QueueEntry_obj::__new()
{  hx::ObjectPtr< QueueEntry_obj > result = new QueueEntry_obj();
	result->__construct();
	return result;}

Dynamic QueueEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QueueEntry_obj > result = new QueueEntry_obj();
	result->__construct();
	return result;}


QueueEntry_obj::QueueEntry_obj()
{
}

void QueueEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QueueEntry);
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_END_CLASS();
}

void QueueEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(animation,"animation");
}

Dynamic QueueEntry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return loop; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QueueEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::spinehx::Animation >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QueueEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("delay"));
	outFields->push(HX_CSTRING("loop"));
	outFields->push(HX_CSTRING("animation"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("delay"),
	HX_CSTRING("loop"),
	HX_CSTRING("animation"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QueueEntry_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QueueEntry_obj::__mClass,"__mClass");
};

Class QueueEntry_obj::__mClass;

void QueueEntry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.QueueEntry"), hx::TCanCast< QueueEntry_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void QueueEntry_obj::__boot()
{
}

} // end namespace spinehx
