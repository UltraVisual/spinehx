#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_spinehx_Bone
#include <spinehx/Bone.h>
#endif
#ifndef INCLUDED_spinehx_Color
#include <spinehx/Color.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_SkeletonData
#include <spinehx/SkeletonData.h>
#endif
#ifndef INCLUDED_spinehx_Slot
#include <spinehx/Slot.h>
#endif
#ifndef INCLUDED_spinehx_SlotData
#include <spinehx/SlotData.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Attachment
#include <spinehx/attachments/Attachment.h>
#endif
namespace spinehx{

Void Slot_obj::__construct(::spinehx::SlotData data,::spinehx::Skeleton skeleton,::spinehx::Bone bone)
{
HX_STACK_PUSH("Slot::new","spinehx/Slot.hx",34);
{
	HX_STACK_LINE(40)
	this->attachmentTime = (int)0;
	HX_STACK_LINE(50)
	if (((data == null()))){
		HX_STACK_LINE(50)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("data cannot be null.")));
	}
	HX_STACK_LINE(51)
	if (((skeleton == null()))){
		HX_STACK_LINE(51)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("skeleton cannot be null.")));
	}
	HX_STACK_LINE(52)
	if (((bone == null()))){
		HX_STACK_LINE(52)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("bone cannot be null.")));
	}
	HX_STACK_LINE(53)
	this->data = data;
	HX_STACK_LINE(54)
	this->skeleton = skeleton;
	HX_STACK_LINE(55)
	this->bone = bone;
	HX_STACK_LINE(56)
	this->color = ::spinehx::Color_obj::__new((int)1,(int)1,(int)1,(int)1);
	HX_STACK_LINE(57)
	this->setToSetupPoseDefault();
}
;
	return null();
}

Slot_obj::~Slot_obj() { }

Dynamic Slot_obj::__CreateEmpty() { return  new Slot_obj; }
hx::ObjectPtr< Slot_obj > Slot_obj::__new(::spinehx::SlotData data,::spinehx::Skeleton skeleton,::spinehx::Bone bone)
{  hx::ObjectPtr< Slot_obj > result = new Slot_obj();
	result->__construct(data,skeleton,bone);
	return result;}

Dynamic Slot_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Slot_obj > result = new Slot_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String Slot_obj::toString( ){
	HX_STACK_PUSH("Slot::toString","spinehx/Slot.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_LINE(118)
	return this->data->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Slot_obj,toString,return )

Void Slot_obj::setToSetupPoseDefault( ){
{
		HX_STACK_PUSH("Slot::setToSetupPoseDefault","spinehx/Slot.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_LINE(114)
		this->setToSetupPose(::Lambda_obj::indexOf(this->skeleton->data->slots,this->data));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Slot_obj,setToSetupPoseDefault,(void))

Void Slot_obj::setToSetupPose( int slotIndex){
{
		HX_STACK_PUSH("Slot::setToSetupPose","spinehx/Slot.hx",109);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slotIndex,"slotIndex");
		HX_STACK_LINE(110)
		this->color->set2(this->data->color);
		HX_STACK_LINE(111)
		this->setAttachment((  (((this->data->attachmentName == null()))) ? ::spinehx::attachments::Attachment(null()) : ::spinehx::attachments::Attachment(this->skeleton->getAttachment(slotIndex,this->data->attachmentName)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slot_obj,setToSetupPose,(void))

Float Slot_obj::getAttachmentTime( ){
	HX_STACK_PUSH("Slot::getAttachmentTime","spinehx/Slot.hx",105);
	HX_STACK_THIS(this);
	HX_STACK_LINE(105)
	return (this->skeleton->time - this->attachmentTime);
}


HX_DEFINE_DYNAMIC_FUNC0(Slot_obj,getAttachmentTime,return )

Void Slot_obj::setAttachmentTime( Float time){
{
		HX_STACK_PUSH("Slot::setAttachmentTime","spinehx/Slot.hx",100);
		HX_STACK_THIS(this);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(100)
		this->attachmentTime = (this->skeleton->time - time);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slot_obj,setAttachmentTime,(void))

Void Slot_obj::setAttachment( ::spinehx::attachments::Attachment attachment){
{
		HX_STACK_PUSH("Slot::setAttachment","spinehx/Slot.hx",95);
		HX_STACK_THIS(this);
		HX_STACK_ARG(attachment,"attachment");
		HX_STACK_LINE(96)
		this->attachment = attachment;
		HX_STACK_LINE(97)
		this->attachmentTime = this->skeleton->time;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slot_obj,setAttachment,(void))

::spinehx::attachments::Attachment Slot_obj::getAttachment( ){
	HX_STACK_PUSH("Slot::getAttachment","spinehx/Slot.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_LINE(89)
	return this->attachment;
}


HX_DEFINE_DYNAMIC_FUNC0(Slot_obj,getAttachment,return )

::spinehx::Color Slot_obj::getColor( ){
	HX_STACK_PUSH("Slot::getColor","spinehx/Slot.hx",84);
	HX_STACK_THIS(this);
	HX_STACK_LINE(84)
	return this->color;
}


HX_DEFINE_DYNAMIC_FUNC0(Slot_obj,getColor,return )

::spinehx::Bone Slot_obj::getBone( ){
	HX_STACK_PUSH("Slot::getBone","spinehx/Slot.hx",80);
	HX_STACK_THIS(this);
	HX_STACK_LINE(80)
	return this->bone;
}


HX_DEFINE_DYNAMIC_FUNC0(Slot_obj,getBone,return )

::spinehx::Skeleton Slot_obj::getSkeleton( ){
	HX_STACK_PUSH("Slot::getSkeleton","spinehx/Slot.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_LINE(76)
	return this->skeleton;
}


HX_DEFINE_DYNAMIC_FUNC0(Slot_obj,getSkeleton,return )

::spinehx::SlotData Slot_obj::getData( ){
	HX_STACK_PUSH("Slot::getData","spinehx/Slot.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_LINE(72)
	return this->data;
}


HX_DEFINE_DYNAMIC_FUNC0(Slot_obj,getData,return )

::spinehx::Slot Slot_obj::copy( ::spinehx::Slot slot,::spinehx::Skeleton skeleton,::spinehx::Bone bone){
	HX_STACK_PUSH("Slot::copy","spinehx/Slot.hx",61);
	HX_STACK_ARG(slot,"slot");
	HX_STACK_ARG(skeleton,"skeleton");
	HX_STACK_ARG(bone,"bone");
	HX_STACK_LINE(62)
	if (((slot == null()))){
		HX_STACK_LINE(62)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("slot cannot be null.")));
	}
	HX_STACK_LINE(63)
	if (((skeleton == null()))){
		HX_STACK_LINE(63)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("skeleton cannot be null.")));
	}
	HX_STACK_LINE(64)
	if (((bone == null()))){
		HX_STACK_LINE(64)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("bone cannot be null.")));
	}
	HX_STACK_LINE(65)
	::spinehx::Slot s = ::spinehx::Slot_obj::__new(slot->data,skeleton,bone);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(66)
	s->color = ::spinehx::Color_obj::copy(slot->color);
	HX_STACK_LINE(67)
	s->attachment = slot->attachment;
	HX_STACK_LINE(68)
	s->attachmentTime = slot->attachmentTime;
	HX_STACK_LINE(69)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Slot_obj,copy,return )


Slot_obj::Slot_obj()
{
}

void Slot_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Slot);
	HX_MARK_MEMBER_NAME(attachmentTime,"attachmentTime");
	HX_MARK_MEMBER_NAME(attachment,"attachment");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(skeleton,"skeleton");
	HX_MARK_MEMBER_NAME(bone,"bone");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void Slot_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(attachmentTime,"attachmentTime");
	HX_VISIT_MEMBER_NAME(attachment,"attachment");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(skeleton,"skeleton");
	HX_VISIT_MEMBER_NAME(bone,"bone");
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic Slot_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"bone") ) { return bone; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getBone") ) { return getBone_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return getColor_dyn(); }
		if (HX_FIELD_EQ(inName,"skeleton") ) { return skeleton; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attachment") ) { return attachment; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getSkeleton") ) { return getSkeleton_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setAttachment") ) { return setAttachment_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttachment") ) { return getAttachment_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setToSetupPose") ) { return setToSetupPose_dyn(); }
		if (HX_FIELD_EQ(inName,"attachmentTime") ) { return attachmentTime; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getAttachmentTime") ) { return getAttachmentTime_dyn(); }
		if (HX_FIELD_EQ(inName,"setAttachmentTime") ) { return setAttachmentTime_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setToSetupPoseDefault") ) { return setToSetupPoseDefault_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Slot_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bone") ) { bone=inValue.Cast< ::spinehx::Bone >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::spinehx::SlotData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::spinehx::Color >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"skeleton") ) { skeleton=inValue.Cast< ::spinehx::Skeleton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"attachment") ) { attachment=inValue.Cast< ::spinehx::attachments::Attachment >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"attachmentTime") ) { attachmentTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Slot_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("attachmentTime"));
	outFields->push(HX_CSTRING("attachment"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("skeleton"));
	outFields->push(HX_CSTRING("bone"));
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("copy"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("setToSetupPoseDefault"),
	HX_CSTRING("setToSetupPose"),
	HX_CSTRING("getAttachmentTime"),
	HX_CSTRING("setAttachmentTime"),
	HX_CSTRING("setAttachment"),
	HX_CSTRING("getAttachment"),
	HX_CSTRING("getColor"),
	HX_CSTRING("getBone"),
	HX_CSTRING("getSkeleton"),
	HX_CSTRING("getData"),
	HX_CSTRING("attachmentTime"),
	HX_CSTRING("attachment"),
	HX_CSTRING("color"),
	HX_CSTRING("skeleton"),
	HX_CSTRING("bone"),
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Slot_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Slot_obj::__mClass,"__mClass");
};

Class Slot_obj::__mClass;

void Slot_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.Slot"), hx::TCanCast< Slot_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Slot_obj::__boot()
{
}

} // end namespace spinehx
