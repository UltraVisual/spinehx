#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_spinehx_Animation
#include <spinehx/Animation.h>
#endif
#ifndef INCLUDED_spinehx_BoneData
#include <spinehx/BoneData.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_SkeletonData
#include <spinehx/SkeletonData.h>
#endif
#ifndef INCLUDED_spinehx_Skin
#include <spinehx/Skin.h>
#endif
#ifndef INCLUDED_spinehx_SlotData
#include <spinehx/SlotData.h>
#endif
namespace spinehx{

Void SkeletonData_obj::__construct()
{
HX_STACK_PUSH("SkeletonData::new","spinehx/SkeletonData.hx",38);
{
	HX_STACK_LINE(38)
	this->clear();
}
;
	return null();
}

SkeletonData_obj::~SkeletonData_obj() { }

Dynamic SkeletonData_obj::__CreateEmpty() { return  new SkeletonData_obj; }
hx::ObjectPtr< SkeletonData_obj > SkeletonData_obj::__new()
{  hx::ObjectPtr< SkeletonData_obj > result = new SkeletonData_obj();
	result->__construct();
	return result;}

Dynamic SkeletonData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SkeletonData_obj > result = new SkeletonData_obj();
	result->__construct();
	return result;}

::String SkeletonData_obj::toString( ){
	HX_STACK_PUSH("SkeletonData::toString","spinehx/SkeletonData.hx",169);
	HX_STACK_THIS(this);
	HX_STACK_LINE(169)
	return (  (((this->name != null()))) ? ::String(this->name) : ::String((HX_CSTRING("") + ::Std_obj::string(hx::ObjectPtr<OBJ_>(this)))) );
}


HX_DEFINE_DYNAMIC_FUNC0(SkeletonData_obj,toString,return )

Void SkeletonData_obj::setName( ::String name){
{
		HX_STACK_PUSH("SkeletonData::setName","spinehx/SkeletonData.hx",165);
		HX_STACK_THIS(this);
		HX_STACK_ARG(name,"name");
		HX_STACK_LINE(165)
		this->name = name;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonData_obj,setName,(void))

::String SkeletonData_obj::getName( ){
	HX_STACK_PUSH("SkeletonData::getName","spinehx/SkeletonData.hx",160);
	HX_STACK_THIS(this);
	HX_STACK_LINE(160)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(SkeletonData_obj,getName,return )

::spinehx::Animation SkeletonData_obj::findAnimation( ::String animationName){
	HX_STACK_PUSH("SkeletonData::findAnimation","spinehx/SkeletonData.hx",149);
	HX_STACK_THIS(this);
	HX_STACK_ARG(animationName,"animationName");
	HX_STACK_LINE(150)
	if (((animationName == null()))){
		HX_STACK_LINE(150)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("animationName cannot be null.")));
	}
	HX_STACK_LINE(151)
	{
		HX_STACK_LINE(151)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->animations;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(151)
		while(((_g < _g1->length))){
			HX_STACK_LINE(151)
			::spinehx::Animation animation = _g1->__get(_g).StaticCast< ::spinehx::Animation >();		HX_STACK_VAR(animation,"animation");
			HX_STACK_LINE(151)
			++(_g);
			HX_STACK_LINE(152)
			if (((animation->name == animationName))){
				HX_STACK_LINE(152)
				return animation;
			}
		}
	}
	HX_STACK_LINE(154)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonData_obj,findAnimation,return )

Array< ::Dynamic > SkeletonData_obj::getAnimations( ){
	HX_STACK_PUSH("SkeletonData::getAnimations","spinehx/SkeletonData.hx",144);
	HX_STACK_THIS(this);
	HX_STACK_LINE(144)
	return this->animations;
}


HX_DEFINE_DYNAMIC_FUNC0(SkeletonData_obj,getAnimations,return )

Void SkeletonData_obj::addAnimation( ::spinehx::Animation animation){
{
		HX_STACK_PUSH("SkeletonData::addAnimation","spinehx/SkeletonData.hx",139);
		HX_STACK_THIS(this);
		HX_STACK_ARG(animation,"animation");
		HX_STACK_LINE(140)
		if (((animation == null()))){
			HX_STACK_LINE(140)
			hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("animation cannot be null.")));
		}
		HX_STACK_LINE(141)
		this->animations->push(animation);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonData_obj,addAnimation,(void))

Array< ::Dynamic > SkeletonData_obj::getSkins( ){
	HX_STACK_PUSH("SkeletonData::getSkins","spinehx/SkeletonData.hx",133);
	HX_STACK_THIS(this);
	HX_STACK_LINE(133)
	return this->skins;
}


HX_DEFINE_DYNAMIC_FUNC0(SkeletonData_obj,getSkins,return )

::spinehx::Skin SkeletonData_obj::findSkin( ::String skinName){
	HX_STACK_PUSH("SkeletonData::findSkin","spinehx/SkeletonData.hx",125);
	HX_STACK_THIS(this);
	HX_STACK_ARG(skinName,"skinName");
	HX_STACK_LINE(126)
	if (((skinName == null()))){
		HX_STACK_LINE(126)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("skinName cannot be null.")));
	}
	HX_STACK_LINE(127)
	{
		HX_STACK_LINE(127)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->skins;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(127)
		while(((_g < _g1->length))){
			HX_STACK_LINE(127)
			::spinehx::Skin skin = _g1->__get(_g).StaticCast< ::spinehx::Skin >();		HX_STACK_VAR(skin,"skin");
			HX_STACK_LINE(127)
			++(_g);
			HX_STACK_LINE(128)
			if (((skin->name == skinName))){
				HX_STACK_LINE(128)
				return skin;
			}
		}
	}
	HX_STACK_LINE(129)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonData_obj,findSkin,return )

Void SkeletonData_obj::addSkin( ::spinehx::Skin skin){
{
		HX_STACK_PUSH("SkeletonData::addSkin","spinehx/SkeletonData.hx",119);
		HX_STACK_THIS(this);
		HX_STACK_ARG(skin,"skin");
		HX_STACK_LINE(120)
		if (((skin == null()))){
			HX_STACK_LINE(120)
			hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("skin cannot be null.")));
		}
		HX_STACK_LINE(121)
		this->skins->push(skin);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonData_obj,addSkin,(void))

Void SkeletonData_obj::setDefaultSkin( ::spinehx::Skin defaultSkin){
{
		HX_STACK_PUSH("SkeletonData::setDefaultSkin","spinehx/SkeletonData.hx",115);
		HX_STACK_THIS(this);
		HX_STACK_ARG(defaultSkin,"defaultSkin");
		HX_STACK_LINE(115)
		this->defaultSkin = defaultSkin;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonData_obj,setDefaultSkin,(void))

::spinehx::Skin SkeletonData_obj::getDefaultSkin( ){
	HX_STACK_PUSH("SkeletonData::getDefaultSkin","spinehx/SkeletonData.hx",110);
	HX_STACK_THIS(this);
	HX_STACK_LINE(110)
	return this->defaultSkin;
}


HX_DEFINE_DYNAMIC_FUNC0(SkeletonData_obj,getDefaultSkin,return )

int SkeletonData_obj::findSlotIndex( ::String slotName){
	HX_STACK_PUSH("SkeletonData::findSlotIndex","spinehx/SkeletonData.hx",100);
	HX_STACK_THIS(this);
	HX_STACK_ARG(slotName,"slotName");
	HX_STACK_LINE(101)
	if (((slotName == null()))){
		HX_STACK_LINE(101)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("slotName cannot be null.")));
	}
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->slots->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(102)
		while(((_g1 < _g))){
			HX_STACK_LINE(102)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(103)
			if (((this->slots->__get(i).StaticCast< ::spinehx::SlotData >()->name == slotName))){
				HX_STACK_LINE(103)
				return i;
			}
		}
	}
	HX_STACK_LINE(104)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonData_obj,findSlotIndex,return )

::spinehx::SlotData SkeletonData_obj::findSlot( ::String slotName){
	HX_STACK_PUSH("SkeletonData::findSlot","spinehx/SkeletonData.hx",91);
	HX_STACK_THIS(this);
	HX_STACK_ARG(slotName,"slotName");
	HX_STACK_LINE(92)
	if (((slotName == null()))){
		HX_STACK_LINE(92)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("slotName cannot be null.")));
	}
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->slots;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(93)
		while(((_g < _g1->length))){
			HX_STACK_LINE(93)
			::spinehx::SlotData slot = _g1->__get(_g).StaticCast< ::spinehx::SlotData >();		HX_STACK_VAR(slot,"slot");
			HX_STACK_LINE(93)
			++(_g);
			HX_STACK_LINE(94)
			if (((slot->name == slotName))){
				HX_STACK_LINE(94)
				return slot;
			}
		}
	}
	HX_STACK_LINE(96)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonData_obj,findSlot,return )

Array< ::Dynamic > SkeletonData_obj::getSlots( ){
	HX_STACK_PUSH("SkeletonData::getSlots","spinehx/SkeletonData.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	return this->slots;
}


HX_DEFINE_DYNAMIC_FUNC0(SkeletonData_obj,getSlots,return )

Void SkeletonData_obj::addSlot( ::spinehx::SlotData slot){
{
		HX_STACK_PUSH("SkeletonData::addSlot","spinehx/SkeletonData.hx",81);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slot,"slot");
		HX_STACK_LINE(82)
		if (((slot == null()))){
			HX_STACK_LINE(82)
			hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("slot cannot be null.")));
		}
		HX_STACK_LINE(83)
		this->slots->push(slot);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonData_obj,addSlot,(void))

int SkeletonData_obj::findBoneIndex( ::String boneName){
	HX_STACK_PUSH("SkeletonData::findBoneIndex","spinehx/SkeletonData.hx",72);
	HX_STACK_THIS(this);
	HX_STACK_ARG(boneName,"boneName");
	HX_STACK_LINE(73)
	if (((boneName == null()))){
		HX_STACK_LINE(73)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("boneName cannot be null.")));
	}
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->bones->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		while(((_g1 < _g))){
			HX_STACK_LINE(74)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(75)
			if (((this->bones->__get(i).StaticCast< ::spinehx::BoneData >()->name == boneName))){
				HX_STACK_LINE(75)
				return i;
			}
		}
	}
	HX_STACK_LINE(76)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonData_obj,findBoneIndex,return )

::spinehx::BoneData SkeletonData_obj::findBone( ::String boneName){
	HX_STACK_PUSH("SkeletonData::findBone","spinehx/SkeletonData.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_ARG(boneName,"boneName");
	HX_STACK_LINE(64)
	if (((boneName == null()))){
		HX_STACK_LINE(64)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("boneName cannot be null.")));
	}
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->bones;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(65)
		while(((_g < _g1->length))){
			HX_STACK_LINE(65)
			::spinehx::BoneData bone = _g1->__get(_g).StaticCast< ::spinehx::BoneData >();		HX_STACK_VAR(bone,"bone");
			HX_STACK_LINE(65)
			++(_g);
			HX_STACK_LINE(66)
			if (((bone->name == boneName))){
				HX_STACK_LINE(66)
				return bone;
			}
		}
	}
	HX_STACK_LINE(68)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonData_obj,findBone,return )

Array< ::Dynamic > SkeletonData_obj::getBones( ){
	HX_STACK_PUSH("SkeletonData::getBones","spinehx/SkeletonData.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_LINE(58)
	return this->bones;
}


HX_DEFINE_DYNAMIC_FUNC0(SkeletonData_obj,getBones,return )

Void SkeletonData_obj::addBone( ::spinehx::BoneData bone){
{
		HX_STACK_PUSH("SkeletonData::addBone","spinehx/SkeletonData.hx",53);
		HX_STACK_THIS(this);
		HX_STACK_ARG(bone,"bone");
		HX_STACK_LINE(54)
		if (((bone == null()))){
			HX_STACK_LINE(54)
			hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("bone cannot be null.")));
		}
		HX_STACK_LINE(55)
		this->bones->push(bone);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SkeletonData_obj,addBone,(void))

Void SkeletonData_obj::clear( ){
{
		HX_STACK_PUSH("SkeletonData::clear","spinehx/SkeletonData.hx",43);
		HX_STACK_THIS(this);
		HX_STACK_LINE(44)
		this->bones = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(45)
		this->slots = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(46)
		this->skins = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(47)
		this->animations = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(48)
		this->defaultSkin = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SkeletonData_obj,clear,(void))


SkeletonData_obj::SkeletonData_obj()
{
}

void SkeletonData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SkeletonData);
	HX_MARK_MEMBER_NAME(defaultSkin,"defaultSkin");
	HX_MARK_MEMBER_NAME(animations,"animations");
	HX_MARK_MEMBER_NAME(skins,"skins");
	HX_MARK_MEMBER_NAME(slots,"slots");
	HX_MARK_MEMBER_NAME(bones,"bones");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void SkeletonData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaultSkin,"defaultSkin");
	HX_VISIT_MEMBER_NAME(animations,"animations");
	HX_VISIT_MEMBER_NAME(skins,"skins");
	HX_VISIT_MEMBER_NAME(slots,"slots");
	HX_VISIT_MEMBER_NAME(bones,"bones");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic SkeletonData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"skins") ) { return skins; }
		if (HX_FIELD_EQ(inName,"slots") ) { return slots; }
		if (HX_FIELD_EQ(inName,"bones") ) { return bones; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setName") ) { return setName_dyn(); }
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		if (HX_FIELD_EQ(inName,"addSkin") ) { return addSkin_dyn(); }
		if (HX_FIELD_EQ(inName,"addSlot") ) { return addSlot_dyn(); }
		if (HX_FIELD_EQ(inName,"addBone") ) { return addBone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"getSkins") ) { return getSkins_dyn(); }
		if (HX_FIELD_EQ(inName,"findSkin") ) { return findSkin_dyn(); }
		if (HX_FIELD_EQ(inName,"findSlot") ) { return findSlot_dyn(); }
		if (HX_FIELD_EQ(inName,"getSlots") ) { return getSlots_dyn(); }
		if (HX_FIELD_EQ(inName,"findBone") ) { return findBone_dyn(); }
		if (HX_FIELD_EQ(inName,"getBones") ) { return getBones_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { return animations; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultSkin") ) { return defaultSkin; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addAnimation") ) { return addAnimation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findAnimation") ) { return findAnimation_dyn(); }
		if (HX_FIELD_EQ(inName,"getAnimations") ) { return getAnimations_dyn(); }
		if (HX_FIELD_EQ(inName,"findSlotIndex") ) { return findSlotIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"findBoneIndex") ) { return findBoneIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setDefaultSkin") ) { return setDefaultSkin_dyn(); }
		if (HX_FIELD_EQ(inName,"getDefaultSkin") ) { return getDefaultSkin_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SkeletonData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"skins") ) { skins=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slots") ) { slots=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bones") ) { bones=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"animations") ) { animations=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultSkin") ) { defaultSkin=inValue.Cast< ::spinehx::Skin >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SkeletonData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("defaultSkin"));
	outFields->push(HX_CSTRING("animations"));
	outFields->push(HX_CSTRING("skins"));
	outFields->push(HX_CSTRING("slots"));
	outFields->push(HX_CSTRING("bones"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("setName"),
	HX_CSTRING("getName"),
	HX_CSTRING("findAnimation"),
	HX_CSTRING("getAnimations"),
	HX_CSTRING("addAnimation"),
	HX_CSTRING("getSkins"),
	HX_CSTRING("findSkin"),
	HX_CSTRING("addSkin"),
	HX_CSTRING("setDefaultSkin"),
	HX_CSTRING("getDefaultSkin"),
	HX_CSTRING("findSlotIndex"),
	HX_CSTRING("findSlot"),
	HX_CSTRING("getSlots"),
	HX_CSTRING("addSlot"),
	HX_CSTRING("findBoneIndex"),
	HX_CSTRING("findBone"),
	HX_CSTRING("getBones"),
	HX_CSTRING("addBone"),
	HX_CSTRING("clear"),
	HX_CSTRING("defaultSkin"),
	HX_CSTRING("animations"),
	HX_CSTRING("skins"),
	HX_CSTRING("slots"),
	HX_CSTRING("bones"),
	HX_CSTRING("name"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SkeletonData_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SkeletonData_obj::__mClass,"__mClass");
};

Class SkeletonData_obj::__mClass;

void SkeletonData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.SkeletonData"), hx::TCanCast< SkeletonData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void SkeletonData_obj::__boot()
{
}

} // end namespace spinehx
