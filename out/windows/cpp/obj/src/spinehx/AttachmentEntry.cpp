#include <hxcpp.h>

#ifndef INCLUDED_spinehx_AttachmentEntry
#include <spinehx/AttachmentEntry.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Attachment
#include <spinehx/attachments/Attachment.h>
#endif
namespace spinehx{

Void AttachmentEntry_obj::__construct(int slotIndex,::String name,::spinehx::attachments::Attachment attachment)
{
HX_STACK_PUSH("AttachmentEntry::new","spinehx/Skin.hx",100);
{
	HX_STACK_LINE(101)
	if (((name == null()))){
		HX_STACK_LINE(101)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("name cannot be null.")));
	}
	HX_STACK_LINE(102)
	this->slotIndex = slotIndex;
	HX_STACK_LINE(103)
	this->name = name;
	HX_STACK_LINE(104)
	this->attachment = attachment;
	HX_STACK_LINE(105)
	this->id = ::spinehx::AttachmentEntry_obj::makeId(slotIndex,name);
}
;
	return null();
}

AttachmentEntry_obj::~AttachmentEntry_obj() { }

Dynamic AttachmentEntry_obj::__CreateEmpty() { return  new AttachmentEntry_obj; }
hx::ObjectPtr< AttachmentEntry_obj > AttachmentEntry_obj::__new(int slotIndex,::String name,::spinehx::attachments::Attachment attachment)
{  hx::ObjectPtr< AttachmentEntry_obj > result = new AttachmentEntry_obj();
	result->__construct(slotIndex,name,attachment);
	return result;}

Dynamic AttachmentEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AttachmentEntry_obj > result = new AttachmentEntry_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String AttachmentEntry_obj::toString( ){
	HX_STACK_PUSH("AttachmentEntry::toString","spinehx/Skin.hx",117);
	HX_STACK_THIS(this);
	HX_STACK_LINE(117)
	return this->id;
}


HX_DEFINE_DYNAMIC_FUNC0(AttachmentEntry_obj,toString,return )

::String AttachmentEntry_obj::getId( ){
	HX_STACK_PUSH("AttachmentEntry::getId","spinehx/Skin.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_LINE(113)
	return this->id;
}


HX_DEFINE_DYNAMIC_FUNC0(AttachmentEntry_obj,getId,return )

::String AttachmentEntry_obj::makeId( int slotIndex,::String name){
	HX_STACK_PUSH("AttachmentEntry::makeId","spinehx/Skin.hx",109);
	HX_STACK_ARG(slotIndex,"slotIndex");
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(109)
	return ((slotIndex + HX_CSTRING(":")) + name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AttachmentEntry_obj,makeId,return )


AttachmentEntry_obj::AttachmentEntry_obj()
{
}

void AttachmentEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttachmentEntry);
	HX_MARK_MEMBER_NAME(attachment,"attachment");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(slotIndex,"slotIndex");
	HX_MARK_END_CLASS();
}

void AttachmentEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(attachment,"attachment");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(slotIndex,"slotIndex");
}

Dynamic AttachmentEntry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getId") ) { return getId_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"makeId") ) { return makeId_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"slotIndex") ) { return slotIndex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attachment") ) { return attachment; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AttachmentEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"slotIndex") ) { slotIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attachment") ) { attachment=inValue.Cast< ::spinehx::attachments::Attachment >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AttachmentEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("attachment"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("slotIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("makeId"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("getId"),
	HX_CSTRING("attachment"),
	HX_CSTRING("id"),
	HX_CSTRING("name"),
	HX_CSTRING("slotIndex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AttachmentEntry_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AttachmentEntry_obj::__mClass,"__mClass");
};

Class AttachmentEntry_obj::__mClass;

void AttachmentEntry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.AttachmentEntry"), hx::TCanCast< AttachmentEntry_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AttachmentEntry_obj::__boot()
{
}

} // end namespace spinehx
