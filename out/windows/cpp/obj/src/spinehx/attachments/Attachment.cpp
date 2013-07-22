#include <hxcpp.h>

#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Attachment
#include <spinehx/attachments/Attachment.h>
#endif
namespace spinehx{
namespace attachments{

Void Attachment_obj::__construct(::String name)
{
HX_STACK_PUSH("Attachment::new","spinehx/attachments/Attachment.hx",32);
{
	HX_STACK_LINE(33)
	if (((name == null()))){
		HX_STACK_LINE(33)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("name cannot be null.")));
	}
	HX_STACK_LINE(34)
	this->name = name;
}
;
	return null();
}

Attachment_obj::~Attachment_obj() { }

Dynamic Attachment_obj::__CreateEmpty() { return  new Attachment_obj; }
hx::ObjectPtr< Attachment_obj > Attachment_obj::__new(::String name)
{  hx::ObjectPtr< Attachment_obj > result = new Attachment_obj();
	result->__construct(name);
	return result;}

Dynamic Attachment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Attachment_obj > result = new Attachment_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Attachment_obj::toString( ){
	HX_STACK_PUSH("Attachment::toString","spinehx/attachments/Attachment.hx",41);
	HX_STACK_THIS(this);
	HX_STACK_LINE(41)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Attachment_obj,toString,return )

::String Attachment_obj::getName( ){
	HX_STACK_PUSH("Attachment::getName","spinehx/attachments/Attachment.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_LINE(37)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Attachment_obj,getName,return )


Attachment_obj::Attachment_obj()
{
}

void Attachment_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Attachment);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Attachment_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Attachment_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Attachment_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Attachment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("getName"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Attachment_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Attachment_obj::__mClass,"__mClass");
};

Class Attachment_obj::__mClass;

void Attachment_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.attachments.Attachment"), hx::TCanCast< Attachment_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Attachment_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace attachments
