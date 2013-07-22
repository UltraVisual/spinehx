#include <hxcpp.h>

#ifndef INCLUDED_spinehx_BoneData
#include <spinehx/BoneData.h>
#endif
#ifndef INCLUDED_spinehx_Color
#include <spinehx/Color.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_SlotData
#include <spinehx/SlotData.h>
#endif
namespace spinehx{

Void SlotData_obj::__construct(::String name,::spinehx::BoneData boneData)
{
HX_STACK_PUSH("SlotData::new","spinehx/SlotData.hx",30);
{
	HX_STACK_LINE(35)
	this->additiveBlending = false;
	HX_STACK_LINE(44)
	this->color = ::spinehx::Color_obj::__new((int)1,(int)1,(int)1,(int)1);
	HX_STACK_LINE(45)
	if (((name == null()))){
		HX_STACK_LINE(45)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("name cannot be null.")));
	}
	HX_STACK_LINE(46)
	if (((boneData == null()))){
		HX_STACK_LINE(46)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("boneData cannot be null.")));
	}
	HX_STACK_LINE(47)
	this->name = name;
	HX_STACK_LINE(48)
	this->boneData = boneData;
}
;
	return null();
}

SlotData_obj::~SlotData_obj() { }

Dynamic SlotData_obj::__CreateEmpty() { return  new SlotData_obj; }
hx::ObjectPtr< SlotData_obj > SlotData_obj::__new(::String name,::spinehx::BoneData boneData)
{  hx::ObjectPtr< SlotData_obj > result = new SlotData_obj();
	result->__construct(name,boneData);
	return result;}

Dynamic SlotData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SlotData_obj > result = new SlotData_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String SlotData_obj::toString( ){
	HX_STACK_PUSH("SlotData::toString","spinehx/SlotData.hx",81);
	HX_STACK_THIS(this);
	HX_STACK_LINE(81)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(SlotData_obj,toString,return )

Void SlotData_obj::setAdditiveBlending( bool additiveBlending){
{
		HX_STACK_PUSH("SlotData::setAdditiveBlending","spinehx/SlotData.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_ARG(additiveBlending,"additiveBlending");
		HX_STACK_LINE(77)
		this->additiveBlending = additiveBlending;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SlotData_obj,setAdditiveBlending,(void))

bool SlotData_obj::getAdditiveBlending( ){
	HX_STACK_PUSH("SlotData::getAdditiveBlending","spinehx/SlotData.hx",73);
	HX_STACK_THIS(this);
	HX_STACK_LINE(73)
	return this->additiveBlending;
}


HX_DEFINE_DYNAMIC_FUNC0(SlotData_obj,getAdditiveBlending,return )

::String SlotData_obj::getAttachmentName( ){
	HX_STACK_PUSH("SlotData::getAttachmentName","spinehx/SlotData.hx",69);
	HX_STACK_THIS(this);
	HX_STACK_LINE(69)
	return this->attachmentName;
}


HX_DEFINE_DYNAMIC_FUNC0(SlotData_obj,getAttachmentName,return )

Void SlotData_obj::setAttachmentName( ::String attachmentName){
{
		HX_STACK_PUSH("SlotData::setAttachmentName","spinehx/SlotData.hx",64);
		HX_STACK_THIS(this);
		HX_STACK_ARG(attachmentName,"attachmentName");
		HX_STACK_LINE(64)
		this->attachmentName = attachmentName;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SlotData_obj,setAttachmentName,(void))

::spinehx::Color SlotData_obj::getColor( ){
	HX_STACK_PUSH("SlotData::getColor","spinehx/SlotData.hx",59);
	HX_STACK_THIS(this);
	HX_STACK_LINE(59)
	return this->color;
}


HX_DEFINE_DYNAMIC_FUNC0(SlotData_obj,getColor,return )

::spinehx::BoneData SlotData_obj::getBoneData( ){
	HX_STACK_PUSH("SlotData::getBoneData","spinehx/SlotData.hx",55);
	HX_STACK_THIS(this);
	HX_STACK_LINE(55)
	return this->boneData;
}


HX_DEFINE_DYNAMIC_FUNC0(SlotData_obj,getBoneData,return )

::String SlotData_obj::getName( ){
	HX_STACK_PUSH("SlotData::getName","spinehx/SlotData.hx",51);
	HX_STACK_THIS(this);
	HX_STACK_LINE(51)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(SlotData_obj,getName,return )


SlotData_obj::SlotData_obj()
{
}

void SlotData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SlotData);
	HX_MARK_MEMBER_NAME(additiveBlending,"additiveBlending");
	HX_MARK_MEMBER_NAME(attachmentName,"attachmentName");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(boneData,"boneData");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void SlotData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(additiveBlending,"additiveBlending");
	HX_VISIT_MEMBER_NAME(attachmentName,"attachmentName");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(boneData,"boneData");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic SlotData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return getColor_dyn(); }
		if (HX_FIELD_EQ(inName,"boneData") ) { return boneData; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getBoneData") ) { return getBoneData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"attachmentName") ) { return attachmentName; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"additiveBlending") ) { return additiveBlending; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAttachmentName") ) { return getAttachmentName_dyn(); }
		if (HX_FIELD_EQ(inName,"setAttachmentName") ) { return setAttachmentName_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setAdditiveBlending") ) { return setAdditiveBlending_dyn(); }
		if (HX_FIELD_EQ(inName,"getAdditiveBlending") ) { return getAdditiveBlending_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SlotData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::spinehx::Color >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"boneData") ) { boneData=inValue.Cast< ::spinehx::BoneData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"attachmentName") ) { attachmentName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"additiveBlending") ) { additiveBlending=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SlotData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("additiveBlending"));
	outFields->push(HX_CSTRING("attachmentName"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("boneData"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("setAdditiveBlending"),
	HX_CSTRING("getAdditiveBlending"),
	HX_CSTRING("getAttachmentName"),
	HX_CSTRING("setAttachmentName"),
	HX_CSTRING("getColor"),
	HX_CSTRING("getBoneData"),
	HX_CSTRING("getName"),
	HX_CSTRING("additiveBlending"),
	HX_CSTRING("attachmentName"),
	HX_CSTRING("color"),
	HX_CSTRING("boneData"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SlotData_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SlotData_obj::__mClass,"__mClass");
};

Class SlotData_obj::__mClass;

void SlotData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.SlotData"), hx::TCanCast< SlotData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SlotData_obj::__boot()
{
}

} // end namespace spinehx
