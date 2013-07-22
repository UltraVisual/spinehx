#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_spinehx_Bone
#include <spinehx/Bone.h>
#endif
#ifndef INCLUDED_spinehx_BoneData
#include <spinehx/BoneData.h>
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
#ifndef INCLUDED_spinehx_Skin
#include <spinehx/Skin.h>
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

Void Skeleton_obj::__construct()
{
HX_STACK_PUSH("Skeleton::new","spinehx/Skeleton.hx",33);
{
	HX_STACK_LINE(44)
	this->y = (int)0;
	HX_STACK_LINE(44)
	this->x = (int)0;
	HX_STACK_LINE(43)
	this->flipY = false;
	HX_STACK_LINE(42)
	this->flipX = false;
	HX_STACK_LINE(41)
	this->time = (int)0;
	HX_STACK_LINE(47)
	this->bones = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(48)
	this->slots = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(49)
	this->drawOrder = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(50)
	this->color = ::spinehx::Color_obj::__new((int)1,(int)1,(int)1,(int)1);
}
;
	return null();
}

Skeleton_obj::~Skeleton_obj() { }

Dynamic Skeleton_obj::__CreateEmpty() { return  new Skeleton_obj; }
hx::ObjectPtr< Skeleton_obj > Skeleton_obj::__new()
{  hx::ObjectPtr< Skeleton_obj > result = new Skeleton_obj();
	result->__construct();
	return result;}

Dynamic Skeleton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Skeleton_obj > result = new Skeleton_obj();
	result->__construct();
	return result;}

::String Skeleton_obj::toString( ){
	HX_STACK_PUSH("Skeleton::toString","spinehx/Skeleton.hx",283);
	HX_STACK_THIS(this);
	HX_STACK_LINE(283)
	return (  (((this->data->name != null()))) ? ::String(this->data->name) : ::String((HX_CSTRING("") + ::Std_obj::string(hx::ObjectPtr<OBJ_>(this)))) );
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,toString,return )

Void Skeleton_obj::update( Float delta){
{
		HX_STACK_PUSH("Skeleton::update","spinehx/Skeleton.hx",279);
		HX_STACK_THIS(this);
		HX_STACK_ARG(delta,"delta");
		HX_STACK_LINE(279)
		hx::AddEq(this->time,delta);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,update,(void))

Void Skeleton_obj::setTime( Float time){
{
		HX_STACK_PUSH("Skeleton::setTime","spinehx/Skeleton.hx",275);
		HX_STACK_THIS(this);
		HX_STACK_ARG(time,"time");
		HX_STACK_LINE(275)
		this->time = time;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,setTime,(void))

Float Skeleton_obj::getTime( ){
	HX_STACK_PUSH("Skeleton::getTime","spinehx/Skeleton.hx",271);
	HX_STACK_THIS(this);
	HX_STACK_LINE(271)
	return this->time;
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getTime,return )

Void Skeleton_obj::setY( Float y){
{
		HX_STACK_PUSH("Skeleton::setY","spinehx/Skeleton.hx",267);
		HX_STACK_THIS(this);
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(267)
		this->y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,setY,(void))

Float Skeleton_obj::getY( ){
	HX_STACK_PUSH("Skeleton::getY","spinehx/Skeleton.hx",263);
	HX_STACK_THIS(this);
	HX_STACK_LINE(263)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getY,return )

Void Skeleton_obj::setX( Float x){
{
		HX_STACK_PUSH("Skeleton::setX","spinehx/Skeleton.hx",259);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(259)
		this->x = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,setX,(void))

Float Skeleton_obj::getX( ){
	HX_STACK_PUSH("Skeleton::getX","spinehx/Skeleton.hx",255);
	HX_STACK_THIS(this);
	HX_STACK_LINE(255)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getX,return )

Void Skeleton_obj::setFlipY( bool flipY){
{
		HX_STACK_PUSH("Skeleton::setFlipY","spinehx/Skeleton.hx",251);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flipY,"flipY");
		HX_STACK_LINE(251)
		this->flipY = flipY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,setFlipY,(void))

bool Skeleton_obj::getFlipY( ){
	HX_STACK_PUSH("Skeleton::getFlipY","spinehx/Skeleton.hx",247);
	HX_STACK_THIS(this);
	HX_STACK_LINE(247)
	return this->flipY;
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getFlipY,return )

Void Skeleton_obj::setFlipX( bool flipX){
{
		HX_STACK_PUSH("Skeleton::setFlipX","spinehx/Skeleton.hx",243);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flipX,"flipX");
		HX_STACK_LINE(243)
		this->flipX = flipX;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,setFlipX,(void))

bool Skeleton_obj::getFlipX( ){
	HX_STACK_PUSH("Skeleton::getFlipX","spinehx/Skeleton.hx",239);
	HX_STACK_THIS(this);
	HX_STACK_LINE(239)
	return this->flipX;
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getFlipX,return )

::spinehx::Color Skeleton_obj::getColor( ){
	HX_STACK_PUSH("Skeleton::getColor","spinehx/Skeleton.hx",235);
	HX_STACK_THIS(this);
	HX_STACK_LINE(235)
	return this->color;
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getColor,return )

Void Skeleton_obj::setAttachment( ::String slotName,::String attachmentName){
{
		HX_STACK_PUSH("Skeleton::setAttachment","spinehx/Skeleton.hx",217);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slotName,"slotName");
		HX_STACK_ARG(attachmentName,"attachmentName");
		HX_STACK_LINE(218)
		if (((slotName == null()))){
			HX_STACK_LINE(218)
			hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("slotName cannot be null.")));
		}
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->slots->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(219)
			while(((_g1 < _g))){
				HX_STACK_LINE(219)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(220)
				::spinehx::Slot slot = this->slots->__get(i).StaticCast< ::spinehx::Slot >();		HX_STACK_VAR(slot,"slot");
				HX_STACK_LINE(221)
				if (((slot->data->name == slotName))){
					HX_STACK_LINE(222)
					::spinehx::attachments::Attachment attachment = null();		HX_STACK_VAR(attachment,"attachment");
					HX_STACK_LINE(223)
					if (((attachmentName != null()))){
						HX_STACK_LINE(224)
						attachment = this->getAttachment(i,attachmentName);
						HX_STACK_LINE(225)
						if (((attachment == null()))){
							HX_STACK_LINE(226)
							hx::Throw (::spinehx::Exception_obj::__new((((HX_CSTRING("Attachment not found: ") + attachmentName) + HX_CSTRING(", for slot: ")) + slotName)));
						}
					}
					HX_STACK_LINE(228)
					slot->setAttachment(attachment);
					HX_STACK_LINE(229)
					return null();
				}
			}
		}
		HX_STACK_LINE(232)
		hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Slot not found: ") + slotName)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Skeleton_obj,setAttachment,(void))

::spinehx::attachments::Attachment Skeleton_obj::getAttachment( int slotIndex,::String attachmentName){
	HX_STACK_PUSH("Skeleton::getAttachment","spinehx/Skeleton.hx",206);
	HX_STACK_THIS(this);
	HX_STACK_ARG(slotIndex,"slotIndex");
	HX_STACK_ARG(attachmentName,"attachmentName");
	HX_STACK_LINE(207)
	if (((attachmentName == null()))){
		HX_STACK_LINE(207)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("attachmentName cannot be null.")));
	}
	HX_STACK_LINE(208)
	if (((this->skin != null()))){
		HX_STACK_LINE(209)
		::spinehx::attachments::Attachment attachment = this->skin->getAttachment(slotIndex,attachmentName);		HX_STACK_VAR(attachment,"attachment");
		HX_STACK_LINE(210)
		if (((attachment != null()))){
			HX_STACK_LINE(210)
			return attachment;
		}
	}
	HX_STACK_LINE(212)
	if (((this->data->defaultSkin != null()))){
		HX_STACK_LINE(212)
		return this->data->defaultSkin->getAttachment(slotIndex,attachmentName);
	}
	HX_STACK_LINE(213)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Skeleton_obj,getAttachment,return )

::spinehx::attachments::Attachment Skeleton_obj::getAttachmentByName( ::String slotName,::String attachmentName){
	HX_STACK_PUSH("Skeleton::getAttachmentByName","spinehx/Skeleton.hx",201);
	HX_STACK_THIS(this);
	HX_STACK_ARG(slotName,"slotName");
	HX_STACK_ARG(attachmentName,"attachmentName");
	HX_STACK_LINE(201)
	return this->getAttachment(this->data->findSlotIndex(slotName),attachmentName);
}


HX_DEFINE_DYNAMIC_FUNC2(Skeleton_obj,getAttachmentByName,return )

Void Skeleton_obj::setSkin( ::spinehx::Skin newSkin){
{
		HX_STACK_PUSH("Skeleton::setSkin","spinehx/Skeleton.hx",195);
		HX_STACK_THIS(this);
		HX_STACK_ARG(newSkin,"newSkin");
		HX_STACK_LINE(196)
		if (((bool((this->skin != null())) && bool((newSkin != null()))))){
			HX_STACK_LINE(196)
			newSkin->attachAll(hx::ObjectPtr<OBJ_>(this),this->skin);
		}
		HX_STACK_LINE(197)
		this->skin = newSkin;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,setSkin,(void))

Void Skeleton_obj::setSkinByName( ::String skinName){
{
		HX_STACK_PUSH("Skeleton::setSkinByName","spinehx/Skeleton.hx",186);
		HX_STACK_THIS(this);
		HX_STACK_ARG(skinName,"skinName");
		HX_STACK_LINE(187)
		::spinehx::Skin skin = this->data->findSkin(skinName);		HX_STACK_VAR(skin,"skin");
		HX_STACK_LINE(188)
		if (((skin == null()))){
			HX_STACK_LINE(188)
			hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Skin not found: ") + skinName)));
		}
		HX_STACK_LINE(189)
		this->setSkin(skin);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,setSkinByName,(void))

::spinehx::Skin Skeleton_obj::getSkin( ){
	HX_STACK_PUSH("Skeleton::getSkin","spinehx/Skeleton.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_LINE(180)
	return this->skin;
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getSkin,return )

Array< ::Dynamic > Skeleton_obj::getDrawOrder( ){
	HX_STACK_PUSH("Skeleton::getDrawOrder","spinehx/Skeleton.hx",175);
	HX_STACK_THIS(this);
	HX_STACK_LINE(175)
	return this->drawOrder;
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getDrawOrder,return )

int Skeleton_obj::findSlotIndex( ::String slotName){
	HX_STACK_PUSH("Skeleton::findSlotIndex","spinehx/Skeleton.hx",167);
	HX_STACK_THIS(this);
	HX_STACK_ARG(slotName,"slotName");
	HX_STACK_LINE(168)
	if (((slotName == null()))){
		HX_STACK_LINE(168)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("slotName cannot be null.")));
	}
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->slots->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		while(((_g1 < _g))){
			HX_STACK_LINE(169)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(170)
			if (((this->slots->__get(i).StaticCast< ::spinehx::Slot >()->data->name == slotName))){
				HX_STACK_LINE(170)
				return i;
			}
		}
	}
	HX_STACK_LINE(171)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,findSlotIndex,return )

::spinehx::Slot Skeleton_obj::findSlot( ::String slotName){
	HX_STACK_PUSH("Skeleton::findSlot","spinehx/Skeleton.hx",158);
	HX_STACK_THIS(this);
	HX_STACK_ARG(slotName,"slotName");
	HX_STACK_LINE(159)
	if (((slotName == null()))){
		HX_STACK_LINE(159)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("slotName cannot be null.")));
	}
	HX_STACK_LINE(160)
	{
		HX_STACK_LINE(160)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->slots;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(160)
		while(((_g < _g1->length))){
			HX_STACK_LINE(160)
			::spinehx::Slot slot = _g1->__get(_g).StaticCast< ::spinehx::Slot >();		HX_STACK_VAR(slot,"slot");
			HX_STACK_LINE(160)
			++(_g);
			HX_STACK_LINE(161)
			if (((slot->data->name == slotName))){
				HX_STACK_LINE(161)
				return slot;
			}
		}
	}
	HX_STACK_LINE(163)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,findSlot,return )

Array< ::Dynamic > Skeleton_obj::getSlots( ){
	HX_STACK_PUSH("Skeleton::getSlots","spinehx/Skeleton.hx",153);
	HX_STACK_THIS(this);
	HX_STACK_LINE(153)
	return this->slots;
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getSlots,return )

int Skeleton_obj::findBoneIndex( ::String boneName){
	HX_STACK_PUSH("Skeleton::findBoneIndex","spinehx/Skeleton.hx",146);
	HX_STACK_THIS(this);
	HX_STACK_ARG(boneName,"boneName");
	HX_STACK_LINE(147)
	if (((boneName == null()))){
		HX_STACK_LINE(147)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("boneName cannot be null.")));
	}
	HX_STACK_LINE(148)
	{
		HX_STACK_LINE(148)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->bones->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(148)
		while(((_g1 < _g))){
			HX_STACK_LINE(148)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(149)
			if (((this->bones->__get(i).StaticCast< ::spinehx::Bone >()->data->name == boneName))){
				HX_STACK_LINE(149)
				return i;
			}
		}
	}
	HX_STACK_LINE(150)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,findBoneIndex,return )

::spinehx::Bone Skeleton_obj::findBone( ::String boneName){
	HX_STACK_PUSH("Skeleton::findBone","spinehx/Skeleton.hx",137);
	HX_STACK_THIS(this);
	HX_STACK_ARG(boneName,"boneName");
	HX_STACK_LINE(138)
	if (((boneName == null()))){
		HX_STACK_LINE(138)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("boneName cannot be null.")));
	}
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->bones;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(139)
		while(((_g < _g1->length))){
			HX_STACK_LINE(139)
			::spinehx::Bone bone = _g1->__get(_g).StaticCast< ::spinehx::Bone >();		HX_STACK_VAR(bone,"bone");
			HX_STACK_LINE(139)
			++(_g);
			HX_STACK_LINE(140)
			if (((bone->data->name == boneName))){
				HX_STACK_LINE(140)
				return bone;
			}
		}
	}
	HX_STACK_LINE(142)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,findBone,return )

::spinehx::Bone Skeleton_obj::getRootBone( ){
	HX_STACK_PUSH("Skeleton::getRootBone","spinehx/Skeleton.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_LINE(132)
	if (((this->bones->length == (int)0))){
		HX_STACK_LINE(132)
		return null();
	}
	HX_STACK_LINE(133)
	return this->bones->__get((int)0).StaticCast< ::spinehx::Bone >();
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getRootBone,return )

Array< ::Dynamic > Skeleton_obj::getBones( ){
	HX_STACK_PUSH("Skeleton::getBones","spinehx/Skeleton.hx",126);
	HX_STACK_THIS(this);
	HX_STACK_LINE(126)
	return this->bones;
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getBones,return )

::spinehx::SkeletonData Skeleton_obj::getData( ){
	HX_STACK_PUSH("Skeleton::getData","spinehx/Skeleton.hx",122);
	HX_STACK_THIS(this);
	HX_STACK_LINE(122)
	return this->data;
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,getData,return )

Void Skeleton_obj::setSlotsToSetupPose( ){
{
		HX_STACK_PUSH("Skeleton::setSlotsToSetupPose","spinehx/Skeleton.hx",117);
		HX_STACK_THIS(this);
		HX_STACK_LINE(118)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->slots->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		while(((_g1 < _g))){
			HX_STACK_LINE(118)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(119)
			this->slots->__get(i).StaticCast< ::spinehx::Slot >()->setToSetupPose(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,setSlotsToSetupPose,(void))

Void Skeleton_obj::setBonesToSetupPose( ){
{
		HX_STACK_PUSH("Skeleton::setBonesToSetupPose","spinehx/Skeleton.hx",112);
		HX_STACK_THIS(this);
		HX_STACK_LINE(113)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->bones;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(113)
		while(((_g < _g1->length))){
			HX_STACK_LINE(113)
			::spinehx::Bone bone = _g1->__get(_g).StaticCast< ::spinehx::Bone >();		HX_STACK_VAR(bone,"bone");
			HX_STACK_LINE(113)
			++(_g);
			HX_STACK_LINE(114)
			bone->setToSetupPose();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,setBonesToSetupPose,(void))

Void Skeleton_obj::setToSetupPose( ){
{
		HX_STACK_PUSH("Skeleton::setToSetupPose","spinehx/Skeleton.hx",107);
		HX_STACK_THIS(this);
		HX_STACK_LINE(108)
		this->setBonesToSetupPose();
		HX_STACK_LINE(109)
		this->setSlotsToSetupPose();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,setToSetupPose,(void))

Void Skeleton_obj::updateWorldTransform( ){
{
		HX_STACK_PUSH("Skeleton::updateWorldTransform","spinehx/Skeleton.hx",99);
		HX_STACK_THIS(this);
		HX_STACK_LINE(100)
		bool flipX = this->flipX;		HX_STACK_VAR(flipX,"flipX");
		HX_STACK_LINE(101)
		bool flipY = this->flipY;		HX_STACK_VAR(flipY,"flipY");
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->bones;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(102)
			while(((_g < _g1->length))){
				HX_STACK_LINE(102)
				::spinehx::Bone bone = _g1->__get(_g).StaticCast< ::spinehx::Bone >();		HX_STACK_VAR(bone,"bone");
				HX_STACK_LINE(102)
				++(_g);
				HX_STACK_LINE(103)
				bone->updateWorldTransform(flipX,flipY);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Skeleton_obj,updateWorldTransform,(void))

::spinehx::Skeleton Skeleton_obj::create( ::spinehx::SkeletonData data){
	HX_STACK_PUSH("Skeleton::create","spinehx/Skeleton.hx",53);
	HX_STACK_ARG(data,"data");
	HX_STACK_LINE(54)
	if (((data == null()))){
		HX_STACK_LINE(54)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("data cannot be null.")));
	}
	HX_STACK_LINE(55)
	::spinehx::Skeleton s = ::spinehx::Skeleton_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(56)
	s->data = data;
	HX_STACK_LINE(58)
	{
		HX_STACK_LINE(58)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = data->bones;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(58)
		while(((_g < _g1->length))){
			HX_STACK_LINE(58)
			::spinehx::BoneData boneData = _g1->__get(_g).StaticCast< ::spinehx::BoneData >();		HX_STACK_VAR(boneData,"boneData");
			HX_STACK_LINE(58)
			++(_g);
			HX_STACK_LINE(59)
			::spinehx::Bone parent = (  (((boneData->parent == null()))) ? ::spinehx::Bone(null()) : ::spinehx::Bone(s->bones->__get(::Lambda_obj::indexOf(data->bones,boneData->parent)).StaticCast< ::spinehx::Bone >()) );		HX_STACK_VAR(parent,"parent");
			HX_STACK_LINE(60)
			s->bones->push(::spinehx::Bone_obj::__new(boneData,parent));
		}
	}
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = data->slots;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		while(((_g < _g1->length))){
			HX_STACK_LINE(63)
			::spinehx::SlotData slotData = _g1->__get(_g).StaticCast< ::spinehx::SlotData >();		HX_STACK_VAR(slotData,"slotData");
			HX_STACK_LINE(63)
			++(_g);
			HX_STACK_LINE(64)
			::spinehx::Bone bone = s->bones->__get(::Lambda_obj::indexOf(data->bones,slotData->boneData)).StaticCast< ::spinehx::Bone >();		HX_STACK_VAR(bone,"bone");
			HX_STACK_LINE(65)
			::spinehx::Slot slot = ::spinehx::Slot_obj::__new(slotData,s,bone);		HX_STACK_VAR(slot,"slot");
			HX_STACK_LINE(66)
			s->slots->push(slot);
			HX_STACK_LINE(67)
			s->drawOrder->push(slot);
		}
	}
	HX_STACK_LINE(69)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,create,return )

::spinehx::Skeleton Skeleton_obj::copy( ::spinehx::Skeleton skeleton){
	HX_STACK_PUSH("Skeleton::copy","spinehx/Skeleton.hx",73);
	HX_STACK_ARG(skeleton,"skeleton");
	HX_STACK_LINE(74)
	if (((skeleton == null()))){
		HX_STACK_LINE(74)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("skeleton cannot be null.")));
	}
	HX_STACK_LINE(75)
	::spinehx::Skeleton s = ::spinehx::Skeleton_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(76)
	s->data = skeleton->data;
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = skeleton->bones;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(78)
		while(((_g < _g1->length))){
			HX_STACK_LINE(78)
			::spinehx::Bone bone = _g1->__get(_g).StaticCast< ::spinehx::Bone >();		HX_STACK_VAR(bone,"bone");
			HX_STACK_LINE(78)
			++(_g);
			HX_STACK_LINE(79)
			::spinehx::Bone parent = (  (((bone->parent == null()))) ? ::spinehx::Bone(null()) : ::spinehx::Bone(s->bones->__get(::Lambda_obj::indexOf(skeleton->bones,bone->parent)).StaticCast< ::spinehx::Bone >()) );		HX_STACK_VAR(parent,"parent");
			HX_STACK_LINE(80)
			s->bones->push(::spinehx::Bone_obj::copy(bone,parent));
		}
	}
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = skeleton->slots;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(83)
		while(((_g < _g1->length))){
			HX_STACK_LINE(83)
			::spinehx::Slot slot = _g1->__get(_g).StaticCast< ::spinehx::Slot >();		HX_STACK_VAR(slot,"slot");
			HX_STACK_LINE(83)
			++(_g);
			HX_STACK_LINE(84)
			::spinehx::Bone bone = s->bones->__get(::Lambda_obj::indexOf(skeleton->bones,slot->bone)).StaticCast< ::spinehx::Bone >();		HX_STACK_VAR(bone,"bone");
			HX_STACK_LINE(85)
			::spinehx::Slot newSlot = ::spinehx::Slot_obj::copy(slot,s,bone);		HX_STACK_VAR(newSlot,"newSlot");
			HX_STACK_LINE(86)
			s->slots->push(newSlot);
		}
	}
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = skeleton->drawOrder;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(89)
		while(((_g < _g1->length))){
			HX_STACK_LINE(89)
			::spinehx::Slot slot = _g1->__get(_g).StaticCast< ::spinehx::Slot >();		HX_STACK_VAR(slot,"slot");
			HX_STACK_LINE(89)
			++(_g);
			HX_STACK_LINE(90)
			s->drawOrder->push(s->slots->__get(::Lambda_obj::indexOf(skeleton->slots,slot)).StaticCast< ::spinehx::Slot >());
		}
	}
	HX_STACK_LINE(92)
	s->skin = skeleton->skin;
	HX_STACK_LINE(93)
	s->color = ::spinehx::Color_obj::copy(skeleton->color);
	HX_STACK_LINE(94)
	s->time = skeleton->time;
	HX_STACK_LINE(95)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Skeleton_obj,copy,return )


Skeleton_obj::Skeleton_obj()
{
}

void Skeleton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Skeleton);
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(skin,"skin");
	HX_MARK_MEMBER_NAME(drawOrder,"drawOrder");
	HX_MARK_MEMBER_NAME(slots,"slots");
	HX_MARK_MEMBER_NAME(bones,"bones");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void Skeleton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(skin,"skin");
	HX_VISIT_MEMBER_NAME(drawOrder,"drawOrder");
	HX_VISIT_MEMBER_NAME(slots,"slots");
	HX_VISIT_MEMBER_NAME(bones,"bones");
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic Skeleton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		if (HX_FIELD_EQ(inName,"getY") ) { return getY_dyn(); }
		if (HX_FIELD_EQ(inName,"setX") ) { return setX_dyn(); }
		if (HX_FIELD_EQ(inName,"getX") ) { return getX_dyn(); }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"skin") ) { return skin; }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flipY") ) { return flipY; }
		if (HX_FIELD_EQ(inName,"flipX") ) { return flipX; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"slots") ) { return slots; }
		if (HX_FIELD_EQ(inName,"bones") ) { return bones; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setTime") ) { return setTime_dyn(); }
		if (HX_FIELD_EQ(inName,"getTime") ) { return getTime_dyn(); }
		if (HX_FIELD_EQ(inName,"setSkin") ) { return setSkin_dyn(); }
		if (HX_FIELD_EQ(inName,"getSkin") ) { return getSkin_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"setFlipY") ) { return setFlipY_dyn(); }
		if (HX_FIELD_EQ(inName,"getFlipY") ) { return getFlipY_dyn(); }
		if (HX_FIELD_EQ(inName,"setFlipX") ) { return setFlipX_dyn(); }
		if (HX_FIELD_EQ(inName,"getFlipX") ) { return getFlipX_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return getColor_dyn(); }
		if (HX_FIELD_EQ(inName,"findSlot") ) { return findSlot_dyn(); }
		if (HX_FIELD_EQ(inName,"getSlots") ) { return getSlots_dyn(); }
		if (HX_FIELD_EQ(inName,"findBone") ) { return findBone_dyn(); }
		if (HX_FIELD_EQ(inName,"getBones") ) { return getBones_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawOrder") ) { return drawOrder; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getRootBone") ) { return getRootBone_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getDrawOrder") ) { return getDrawOrder_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setAttachment") ) { return setAttachment_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttachment") ) { return getAttachment_dyn(); }
		if (HX_FIELD_EQ(inName,"setSkinByName") ) { return setSkinByName_dyn(); }
		if (HX_FIELD_EQ(inName,"findSlotIndex") ) { return findSlotIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"findBoneIndex") ) { return findBoneIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setToSetupPose") ) { return setToSetupPose_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAttachmentByName") ) { return getAttachmentByName_dyn(); }
		if (HX_FIELD_EQ(inName,"setSlotsToSetupPose") ) { return setSlotsToSetupPose_dyn(); }
		if (HX_FIELD_EQ(inName,"setBonesToSetupPose") ) { return setBonesToSetupPose_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateWorldTransform") ) { return updateWorldTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Skeleton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skin") ) { skin=inValue.Cast< ::spinehx::Skin >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::spinehx::SkeletonData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flipY") ) { flipY=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::spinehx::Color >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slots") ) { slots=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bones") ) { bones=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawOrder") ) { drawOrder=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Skeleton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("flipY"));
	outFields->push(HX_CSTRING("flipX"));
	outFields->push(HX_CSTRING("time"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("skin"));
	outFields->push(HX_CSTRING("drawOrder"));
	outFields->push(HX_CSTRING("slots"));
	outFields->push(HX_CSTRING("bones"));
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("copy"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("update"),
	HX_CSTRING("setTime"),
	HX_CSTRING("getTime"),
	HX_CSTRING("setY"),
	HX_CSTRING("getY"),
	HX_CSTRING("setX"),
	HX_CSTRING("getX"),
	HX_CSTRING("setFlipY"),
	HX_CSTRING("getFlipY"),
	HX_CSTRING("setFlipX"),
	HX_CSTRING("getFlipX"),
	HX_CSTRING("getColor"),
	HX_CSTRING("setAttachment"),
	HX_CSTRING("getAttachment"),
	HX_CSTRING("getAttachmentByName"),
	HX_CSTRING("setSkin"),
	HX_CSTRING("setSkinByName"),
	HX_CSTRING("getSkin"),
	HX_CSTRING("getDrawOrder"),
	HX_CSTRING("findSlotIndex"),
	HX_CSTRING("findSlot"),
	HX_CSTRING("getSlots"),
	HX_CSTRING("findBoneIndex"),
	HX_CSTRING("findBone"),
	HX_CSTRING("getRootBone"),
	HX_CSTRING("getBones"),
	HX_CSTRING("getData"),
	HX_CSTRING("setSlotsToSetupPose"),
	HX_CSTRING("setBonesToSetupPose"),
	HX_CSTRING("setToSetupPose"),
	HX_CSTRING("updateWorldTransform"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("flipY"),
	HX_CSTRING("flipX"),
	HX_CSTRING("time"),
	HX_CSTRING("color"),
	HX_CSTRING("skin"),
	HX_CSTRING("drawOrder"),
	HX_CSTRING("slots"),
	HX_CSTRING("bones"),
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Skeleton_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Skeleton_obj::__mClass,"__mClass");
};

Class Skeleton_obj::__mClass;

void Skeleton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.Skeleton"), hx::TCanCast< Skeleton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Skeleton_obj::__boot()
{
}

} // end namespace spinehx
