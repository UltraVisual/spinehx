#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_spinehx_AttachmentEntry
#include <spinehx/AttachmentEntry.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_Skeleton
#include <spinehx/Skeleton.h>
#endif
#ifndef INCLUDED_spinehx_Skin
#include <spinehx/Skin.h>
#endif
#ifndef INCLUDED_spinehx_Slot
#include <spinehx/Slot.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Attachment
#include <spinehx/attachments/Attachment.h>
#endif
namespace spinehx{

Void Skin_obj::__construct(::String name)
{
HX_STACK_PUSH("Skin::new","spinehx/Skin.hx",37);
{
	HX_STACK_LINE(38)
	this->attachments = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(39)
	if (((name == null()))){
		HX_STACK_LINE(39)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("name cannot be null.")));
	}
	HX_STACK_LINE(40)
	this->name = name;
}
;
	return null();
}

Skin_obj::~Skin_obj() { }

Dynamic Skin_obj::__CreateEmpty() { return  new Skin_obj; }
hx::ObjectPtr< Skin_obj > Skin_obj::__new(::String name)
{  hx::ObjectPtr< Skin_obj > result = new Skin_obj();
	result->__construct(name);
	return result;}

Dynamic Skin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Skin_obj > result = new Skin_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Skin_obj::attachAll( ::spinehx::Skeleton skeleton,::spinehx::Skin oldSkin){
{
		HX_STACK_PUSH("Skin::attachAll","spinehx/Skin.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_ARG(skeleton,"skeleton");
		HX_STACK_ARG(oldSkin,"oldSkin");
		struct _Function_1_1{
			inline static Dynamic Block( ::spinehx::Skin &oldSkin){
				HX_STACK_PUSH("*::closure","spinehx/Skin.hx",82);
				{
					HX_STACK_LINE(82)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(oldSkin->attachments);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","spinehx/Skin.hx",82);
						{
							HX_STACK_LINE(82)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(82)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(81)
		for(::cpp::FastIterator_obj< ::spinehx::AttachmentEntry > *__it = ::cpp::CreateFastIterator< ::spinehx::AttachmentEntry >((_Function_1_1::Block(oldSkin))());  __it->hasNext(); ){
			::spinehx::AttachmentEntry e = __it->next();
			{
				HX_STACK_LINE(83)
				int slotIndex = e->slotIndex;		HX_STACK_VAR(slotIndex,"slotIndex");
				HX_STACK_LINE(84)
				::spinehx::AttachmentEntry value = oldSkin->attachments->get(e->getId());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(85)
				::spinehx::Slot slot = skeleton->slots->__get(slotIndex).StaticCast< ::spinehx::Slot >();		HX_STACK_VAR(slot,"slot");
				HX_STACK_LINE(86)
				if (((slot->attachment == value->attachment))){
					HX_STACK_LINE(87)
					::spinehx::attachments::Attachment attachment = this->getAttachment(slotIndex,e->name);		HX_STACK_VAR(attachment,"attachment");
					HX_STACK_LINE(88)
					if (((attachment != null()))){
						HX_STACK_LINE(88)
						slot->setAttachment(attachment);
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Skin_obj,attachAll,(void))

::String Skin_obj::toString( ){
	HX_STACK_PUSH("Skin::toString","spinehx/Skin.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_LINE(76)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Skin_obj,toString,return )

::String Skin_obj::getName( ){
	HX_STACK_PUSH("Skin::getName","spinehx/Skin.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_LINE(72)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Skin_obj,getName,return )

Void Skin_obj::clear( ){
{
		HX_STACK_PUSH("Skin::clear","spinehx/Skin.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_LINE(68)
		this->attachments = ::haxe::ds::StringMap_obj::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Skin_obj,clear,(void))

Void Skin_obj::findAttachmentsForSlot( int slotIndex,Array< ::Dynamic > attachments){
{
		HX_STACK_PUSH("Skin::findAttachmentsForSlot","spinehx/Skin.hx",62);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slotIndex,"slotIndex");
		HX_STACK_ARG(attachments,"attachments");
		HX_STACK_LINE(63)
		if (((attachments == null()))){
			HX_STACK_LINE(63)
			hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("attachments cannot be null.")));
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::spinehx::Skin_obj *__this){
				HX_STACK_PUSH("*::closure","spinehx/Skin.hx",64);
				{
					HX_STACK_LINE(64)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->attachments);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","spinehx/Skin.hx",64);
						{
							HX_STACK_LINE(64)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(64)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(64)
		for(::cpp::FastIterator_obj< ::spinehx::AttachmentEntry > *__it = ::cpp::CreateFastIterator< ::spinehx::AttachmentEntry >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::spinehx::AttachmentEntry e = __it->next();
			if (((e->slotIndex == slotIndex))){
				HX_STACK_LINE(65)
				attachments->push(e->attachment);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Skin_obj,findAttachmentsForSlot,(void))

Void Skin_obj::findNamesForSlot( int slotIndex,Array< ::String > names){
{
		HX_STACK_PUSH("Skin::findNamesForSlot","spinehx/Skin.hx",56);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slotIndex,"slotIndex");
		HX_STACK_ARG(names,"names");
		HX_STACK_LINE(57)
		if (((names == null()))){
			HX_STACK_LINE(57)
			hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("names cannot be null.")));
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::spinehx::Skin_obj *__this){
				HX_STACK_PUSH("*::closure","spinehx/Skin.hx",58);
				{
					HX_STACK_LINE(58)
					Array< ::Dynamic > _e = Array_obj< ::Dynamic >::__new().Add(__this->attachments);		HX_STACK_VAR(_e,"_e");

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_e)
					Dynamic run(){
						HX_STACK_PUSH("*::_Function_2_1","spinehx/Skin.hx",58);
						{
							HX_STACK_LINE(58)
							return _e->__get((int)0).StaticCast< ::haxe::ds::StringMap >()->iterator();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_STACK_LINE(58)
					return  Dynamic(new _Function_2_1(_e));
				}
				return null();
			}
		};
		HX_STACK_LINE(58)
		for(::cpp::FastIterator_obj< ::spinehx::AttachmentEntry > *__it = ::cpp::CreateFastIterator< ::spinehx::AttachmentEntry >((_Function_1_1::Block(this))());  __it->hasNext(); ){
			::spinehx::AttachmentEntry e = __it->next();
			if (((e->slotIndex == slotIndex))){
				HX_STACK_LINE(59)
				names->push(e->name);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Skin_obj,findNamesForSlot,(void))

::spinehx::attachments::Attachment Skin_obj::getAttachment( int slotIndex,::String name){
	HX_STACK_PUSH("Skin::getAttachment","spinehx/Skin.hx",50);
	HX_STACK_THIS(this);
	HX_STACK_ARG(slotIndex,"slotIndex");
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(51)
	::String id = ::spinehx::AttachmentEntry_obj::makeId(slotIndex,name);		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(52)
	::spinehx::AttachmentEntry attachmentEntry = this->attachments->get(id);		HX_STACK_VAR(attachmentEntry,"attachmentEntry");
	HX_STACK_LINE(53)
	return (  (((attachmentEntry != null()))) ? ::spinehx::attachments::Attachment(attachmentEntry->attachment) : ::spinehx::attachments::Attachment(null()) );
}


HX_DEFINE_DYNAMIC_FUNC2(Skin_obj,getAttachment,return )

Void Skin_obj::addAttachment( int slotIndex,::String name,::spinehx::attachments::Attachment attachment){
{
		HX_STACK_PUSH("Skin::addAttachment","spinehx/Skin.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slotIndex,"slotIndex");
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(attachment,"attachment");
		HX_STACK_LINE(44)
		if (((attachment == null()))){
			HX_STACK_LINE(44)
			hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("attachment cannot be null.")));
		}
		HX_STACK_LINE(45)
		::spinehx::AttachmentEntry entry = ::spinehx::AttachmentEntry_obj::__new(slotIndex,name,attachment);		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(46)
		this->attachments->set(entry->getId(),entry);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Skin_obj,addAttachment,(void))


Skin_obj::Skin_obj()
{
}

void Skin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Skin);
	HX_MARK_MEMBER_NAME(attachments,"attachments");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Skin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(attachments,"attachments");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Skin_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"attachAll") ) { return attachAll_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"attachments") ) { return attachments; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getAttachment") ) { return getAttachment_dyn(); }
		if (HX_FIELD_EQ(inName,"addAttachment") ) { return addAttachment_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findNamesForSlot") ) { return findNamesForSlot_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"findAttachmentsForSlot") ) { return findAttachmentsForSlot_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Skin_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"attachments") ) { attachments=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Skin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("attachments"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("attachAll"),
	HX_CSTRING("toString"),
	HX_CSTRING("getName"),
	HX_CSTRING("clear"),
	HX_CSTRING("findAttachmentsForSlot"),
	HX_CSTRING("findNamesForSlot"),
	HX_CSTRING("getAttachment"),
	HX_CSTRING("addAttachment"),
	HX_CSTRING("attachments"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Skin_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Skin_obj::__mClass,"__mClass");
};

Class Skin_obj::__mClass;

void Skin_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.Skin"), hx::TCanCast< Skin_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Skin_obj::__boot()
{
}

} // end namespace spinehx
