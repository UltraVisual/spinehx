#include <hxcpp.h>

#ifndef INCLUDED_spinehx_Animation
#include <spinehx/Animation.h>
#endif
#ifndef INCLUDED_spinehx_ArrayUtils
#include <spinehx/ArrayUtils.h>
#endif
#ifndef INCLUDED_spinehx_AttachmentTimeline
#include <spinehx/AttachmentTimeline.h>
#endif
#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_Slot
#include <spinehx/Slot.h>
#endif
#ifndef INCLUDED_spinehx_Timeline
#include <spinehx/Timeline.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Attachment
#include <spinehx/attachments/Attachment.h>
#endif
namespace spinehx{

Void AttachmentTimeline_obj::__construct(int frameCount)
{
HX_STACK_PUSH("AttachmentTimeline::new","spinehx/Animation.hx",427);
{
	HX_STACK_LINE(428)
	this->slotIndex = (int)0;
	HX_STACK_LINE(433)
	this->frames = ::spinehx::ArrayUtils_obj::allocFloat(frameCount);
	HX_STACK_LINE(434)
	this->attachmentNames = ::spinehx::ArrayUtils_obj::allocString(frameCount);
}
;
	return null();
}

AttachmentTimeline_obj::~AttachmentTimeline_obj() { }

Dynamic AttachmentTimeline_obj::__CreateEmpty() { return  new AttachmentTimeline_obj; }
hx::ObjectPtr< AttachmentTimeline_obj > AttachmentTimeline_obj::__new(int frameCount)
{  hx::ObjectPtr< AttachmentTimeline_obj > result = new AttachmentTimeline_obj();
	result->__construct(frameCount);
	return result;}

Dynamic AttachmentTimeline_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AttachmentTimeline_obj > result = new AttachmentTimeline_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *AttachmentTimeline_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::spinehx::Timeline_obj)) return operator ::spinehx::Timeline_obj *();
	return super::__ToInterface(inType);
}

Void AttachmentTimeline_obj::apply( ::spinehx::Skeleton skeleton,Float time,Float alpha){
{
		HX_STACK_PUSH("AttachmentTimeline::apply","spinehx/Animation.hx",463);
		HX_STACK_THIS(this);
		HX_STACK_ARG(skeleton,"skeleton");
		HX_STACK_ARG(time,"time");
		HX_STACK_ARG(alpha,"alpha");
		HX_STACK_LINE(464)
		if (((time < this->frames->__get((int)0)))){
			HX_STACK_LINE(464)
			return null();
		}
		HX_STACK_LINE(466)
		int frameIndex;		HX_STACK_VAR(frameIndex,"frameIndex");
		HX_STACK_LINE(467)
		if (((time >= this->frames->__get((this->frames->__Field(HX_CSTRING("length"),true) - (int)1))))){
			HX_STACK_LINE(468)
			frameIndex = (this->frames->__Field(HX_CSTRING("length"),true) - (int)1);
		}
		else{
			HX_STACK_LINE(470)
			frameIndex = (::spinehx::Animation_obj::binarySearch(this->frames,time,(int)1) - (int)1);
		}
		HX_STACK_LINE(472)
		::String attachmentName = this->attachmentNames->__get(frameIndex);		HX_STACK_VAR(attachmentName,"attachmentName");
		HX_STACK_LINE(473)
		skeleton->slots->__get(this->slotIndex).StaticCast< ::spinehx::Slot >()->setAttachment((  (((attachmentName == null()))) ? ::spinehx::attachments::Attachment(null()) : ::spinehx::attachments::Attachment(skeleton->getAttachment(this->slotIndex,attachmentName)) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AttachmentTimeline_obj,apply,(void))

Void AttachmentTimeline_obj::setFrame( int frameIndex,Float time,::String attachmentName){
{
		HX_STACK_PUSH("AttachmentTimeline::setFrame","spinehx/Animation.hx",458);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frameIndex,"frameIndex");
		HX_STACK_ARG(time,"time");
		HX_STACK_ARG(attachmentName,"attachmentName");
		HX_STACK_LINE(459)
		this->frames[frameIndex] = time;
		HX_STACK_LINE(460)
		this->attachmentNames[frameIndex] = attachmentName;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(AttachmentTimeline_obj,setFrame,(void))

Array< ::String > AttachmentTimeline_obj::getAttachmentNames( ){
	HX_STACK_PUSH("AttachmentTimeline::getAttachmentNames","spinehx/Animation.hx",453);
	HX_STACK_THIS(this);
	HX_STACK_LINE(453)
	return this->attachmentNames;
}


HX_DEFINE_DYNAMIC_FUNC0(AttachmentTimeline_obj,getAttachmentNames,return )

Array< Float > AttachmentTimeline_obj::getFrames( ){
	HX_STACK_PUSH("AttachmentTimeline::getFrames","spinehx/Animation.hx",449);
	HX_STACK_THIS(this);
	HX_STACK_LINE(449)
	return this->frames;
}


HX_DEFINE_DYNAMIC_FUNC0(AttachmentTimeline_obj,getFrames,return )

Void AttachmentTimeline_obj::setSlotIndex( int slotIndex){
{
		HX_STACK_PUSH("AttachmentTimeline::setSlotIndex","spinehx/Animation.hx",445);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slotIndex,"slotIndex");
		HX_STACK_LINE(445)
		this->slotIndex = slotIndex;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AttachmentTimeline_obj,setSlotIndex,(void))

int AttachmentTimeline_obj::getSlotIndex( ){
	HX_STACK_PUSH("AttachmentTimeline::getSlotIndex","spinehx/Animation.hx",441);
	HX_STACK_THIS(this);
	HX_STACK_LINE(441)
	return this->slotIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(AttachmentTimeline_obj,getSlotIndex,return )

int AttachmentTimeline_obj::getFrameCount( ){
	HX_STACK_PUSH("AttachmentTimeline::getFrameCount","spinehx/Animation.hx",437);
	HX_STACK_THIS(this);
	HX_STACK_LINE(437)
	return this->frames->__Field(HX_CSTRING("length"),true);
}


HX_DEFINE_DYNAMIC_FUNC0(AttachmentTimeline_obj,getFrameCount,return )


AttachmentTimeline_obj::AttachmentTimeline_obj()
{
}

void AttachmentTimeline_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttachmentTimeline);
	HX_MARK_MEMBER_NAME(attachmentNames,"attachmentNames");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(slotIndex,"slotIndex");
	HX_MARK_END_CLASS();
}

void AttachmentTimeline_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(attachmentNames,"attachmentNames");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(slotIndex,"slotIndex");
}

Dynamic AttachmentTimeline_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setFrame") ) { return setFrame_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFrames") ) { return getFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"slotIndex") ) { return slotIndex; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setSlotIndex") ) { return setSlotIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"getSlotIndex") ) { return getSlotIndex_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFrameCount") ) { return getFrameCount_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"attachmentNames") ) { return attachmentNames; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getAttachmentNames") ) { return getAttachmentNames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AttachmentTimeline_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"slotIndex") ) { slotIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"attachmentNames") ) { attachmentNames=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AttachmentTimeline_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("attachmentNames"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("slotIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("apply"),
	HX_CSTRING("setFrame"),
	HX_CSTRING("getAttachmentNames"),
	HX_CSTRING("getFrames"),
	HX_CSTRING("setSlotIndex"),
	HX_CSTRING("getSlotIndex"),
	HX_CSTRING("getFrameCount"),
	HX_CSTRING("attachmentNames"),
	HX_CSTRING("frames"),
	HX_CSTRING("slotIndex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AttachmentTimeline_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AttachmentTimeline_obj::__mClass,"__mClass");
};

Class AttachmentTimeline_obj::__mClass;

void AttachmentTimeline_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.AttachmentTimeline"), hx::TCanCast< AttachmentTimeline_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AttachmentTimeline_obj::__boot()
{
}

} // end namespace spinehx
