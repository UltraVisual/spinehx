#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_spinehx_Bone
#include <spinehx/Bone.h>
#endif
#ifndef INCLUDED_spinehx_BoneData
#include <spinehx/BoneData.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
namespace spinehx{

Void Bone_obj::__construct(::spinehx::BoneData data,::spinehx::Bone parent)
{
HX_STACK_PUSH("Bone::new","spinehx/Bone.hx",29);
{
	HX_STACK_LINE(42)
	this->worldScaleY = (int)0;
	HX_STACK_LINE(41)
	this->worldScaleX = (int)0;
	HX_STACK_LINE(40)
	this->worldRotation = (int)0;
	HX_STACK_LINE(39)
	this->worldY = (int)0;
	HX_STACK_LINE(39)
	this->m11 = (int)0;
	HX_STACK_LINE(39)
	this->m10 = (int)0;
	HX_STACK_LINE(38)
	this->worldX = (int)0;
	HX_STACK_LINE(38)
	this->m01 = (int)0;
	HX_STACK_LINE(38)
	this->m00 = (int)0;
	HX_STACK_LINE(36)
	this->scaleY = (int)0;
	HX_STACK_LINE(35)
	this->scaleX = (int)0;
	HX_STACK_LINE(34)
	this->rotation = (int)0;
	HX_STACK_LINE(33)
	this->y = (int)0;
	HX_STACK_LINE(32)
	this->x = (int)0;
	HX_STACK_LINE(46)
	if (((data == null()))){
		HX_STACK_LINE(46)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("data cannot be null.")));
	}
	HX_STACK_LINE(47)
	this->data = data;
	HX_STACK_LINE(48)
	this->parent = parent;
	HX_STACK_LINE(49)
	this->setToSetupPose();
}
;
	return null();
}

Bone_obj::~Bone_obj() { }

Dynamic Bone_obj::__CreateEmpty() { return  new Bone_obj; }
hx::ObjectPtr< Bone_obj > Bone_obj::__new(::spinehx::BoneData data,::spinehx::Bone parent)
{  hx::ObjectPtr< Bone_obj > result = new Bone_obj();
	result->__construct(data,parent);
	return result;}

Dynamic Bone_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bone_obj > result = new Bone_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Bone_obj::toString( ){
	HX_STACK_PUSH("Bone::toString","spinehx/Bone.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_LINE(211)
	return this->data->name;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,toString,return )

Float Bone_obj::getWorldScaleY( ){
	HX_STACK_PUSH("Bone::getWorldScaleY","spinehx/Bone.hx",192);
	HX_STACK_THIS(this);
	HX_STACK_LINE(192)
	return this->worldScaleY;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getWorldScaleY,return )

Float Bone_obj::getWorldScaleX( ){
	HX_STACK_PUSH("Bone::getWorldScaleX","spinehx/Bone.hx",188);
	HX_STACK_THIS(this);
	HX_STACK_LINE(188)
	return this->worldScaleX;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getWorldScaleX,return )

Float Bone_obj::getWorldRotation( ){
	HX_STACK_PUSH("Bone::getWorldRotation","spinehx/Bone.hx",184);
	HX_STACK_THIS(this);
	HX_STACK_LINE(184)
	return this->worldRotation;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getWorldRotation,return )

Float Bone_obj::getWorldY( ){
	HX_STACK_PUSH("Bone::getWorldY","spinehx/Bone.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_LINE(180)
	return this->worldY;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getWorldY,return )

Float Bone_obj::getWorldX( ){
	HX_STACK_PUSH("Bone::getWorldX","spinehx/Bone.hx",176);
	HX_STACK_THIS(this);
	HX_STACK_LINE(176)
	return this->worldX;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getWorldX,return )

Float Bone_obj::getM11( ){
	HX_STACK_PUSH("Bone::getM11","spinehx/Bone.hx",172);
	HX_STACK_THIS(this);
	HX_STACK_LINE(172)
	return this->m11;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getM11,return )

Float Bone_obj::getM10( ){
	HX_STACK_PUSH("Bone::getM10","spinehx/Bone.hx",168);
	HX_STACK_THIS(this);
	HX_STACK_LINE(168)
	return this->m10;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getM10,return )

Float Bone_obj::getM01( ){
	HX_STACK_PUSH("Bone::getM01","spinehx/Bone.hx",164);
	HX_STACK_THIS(this);
	HX_STACK_LINE(164)
	return this->m01;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getM01,return )

Float Bone_obj::getM00( ){
	HX_STACK_PUSH("Bone::getM00","spinehx/Bone.hx",160);
	HX_STACK_THIS(this);
	HX_STACK_LINE(160)
	return this->m00;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getM00,return )

Void Bone_obj::setScaleY( Float scaleY){
{
		HX_STACK_PUSH("Bone::setScaleY","spinehx/Bone.hx",156);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scaleY,"scaleY");
		HX_STACK_LINE(156)
		this->scaleY = scaleY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bone_obj,setScaleY,(void))

Float Bone_obj::getScaleY( ){
	HX_STACK_PUSH("Bone::getScaleY","spinehx/Bone.hx",152);
	HX_STACK_THIS(this);
	HX_STACK_LINE(152)
	return this->scaleY;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getScaleY,return )

Void Bone_obj::setScaleX( Float scaleX){
{
		HX_STACK_PUSH("Bone::setScaleX","spinehx/Bone.hx",148);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_LINE(148)
		this->scaleX = scaleX;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bone_obj,setScaleX,(void))

Float Bone_obj::getScaleX( ){
	HX_STACK_PUSH("Bone::getScaleX","spinehx/Bone.hx",144);
	HX_STACK_THIS(this);
	HX_STACK_LINE(144)
	return this->scaleX;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getScaleX,return )

Void Bone_obj::setRotation( Float rotation){
{
		HX_STACK_PUSH("Bone::setRotation","spinehx/Bone.hx",140);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rotation,"rotation");
		HX_STACK_LINE(140)
		this->rotation = rotation;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bone_obj,setRotation,(void))

Float Bone_obj::getRotation( ){
	HX_STACK_PUSH("Bone::getRotation","spinehx/Bone.hx",136);
	HX_STACK_THIS(this);
	HX_STACK_LINE(136)
	return this->rotation;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getRotation,return )

Void Bone_obj::setY( Float y){
{
		HX_STACK_PUSH("Bone::setY","spinehx/Bone.hx",132);
		HX_STACK_THIS(this);
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(132)
		this->y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bone_obj,setY,(void))

Float Bone_obj::getY( ){
	HX_STACK_PUSH("Bone::getY","spinehx/Bone.hx",128);
	HX_STACK_THIS(this);
	HX_STACK_LINE(128)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getY,return )

Void Bone_obj::setX( Float x){
{
		HX_STACK_PUSH("Bone::setX","spinehx/Bone.hx",124);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(124)
		this->x = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bone_obj,setX,(void))

Float Bone_obj::getX( ){
	HX_STACK_PUSH("Bone::getX","spinehx/Bone.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_LINE(120)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getX,return )

::spinehx::Bone Bone_obj::getParent( ){
	HX_STACK_PUSH("Bone::getParent","spinehx/Bone.hx",116);
	HX_STACK_THIS(this);
	HX_STACK_LINE(116)
	return this->parent;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getParent,return )

::spinehx::BoneData Bone_obj::getData( ){
	HX_STACK_PUSH("Bone::getData","spinehx/Bone.hx",112);
	HX_STACK_THIS(this);
	HX_STACK_LINE(112)
	return this->data;
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,getData,return )

Void Bone_obj::setToSetupPose( ){
{
		HX_STACK_PUSH("Bone::setToSetupPose","spinehx/Bone.hx",103);
		HX_STACK_THIS(this);
		HX_STACK_LINE(104)
		::spinehx::BoneData data = this->data;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(105)
		this->x = data->x;
		HX_STACK_LINE(106)
		this->y = data->y;
		HX_STACK_LINE(107)
		this->rotation = data->rotation;
		HX_STACK_LINE(108)
		this->scaleX = data->scaleX;
		HX_STACK_LINE(109)
		this->scaleY = data->scaleY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bone_obj,setToSetupPose,(void))

Void Bone_obj::updateWorldTransform( bool flipX,bool flipY){
{
		HX_STACK_PUSH("Bone::updateWorldTransform","spinehx/Bone.hx",66);
		HX_STACK_THIS(this);
		HX_STACK_ARG(flipX,"flipX");
		HX_STACK_ARG(flipY,"flipY");
		HX_STACK_LINE(67)
		::spinehx::Bone parent = this->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(68)
		if (((parent != null()))){
			HX_STACK_LINE(69)
			this->worldX = (((this->x * parent->m00) + (this->y * parent->m01)) + parent->worldX);
			HX_STACK_LINE(70)
			this->worldY = (((this->x * parent->m10) + (this->y * parent->m11)) + parent->worldY);
			HX_STACK_LINE(71)
			if ((this->data->inheritScale)){
				HX_STACK_LINE(72)
				this->worldScaleX = (parent->worldScaleX * this->scaleX);
				HX_STACK_LINE(73)
				this->worldScaleY = (parent->worldScaleY * this->scaleY);
			}
			else{
				HX_STACK_LINE(75)
				this->worldScaleX = this->scaleX;
				HX_STACK_LINE(76)
				this->worldScaleY = this->scaleY;
			}
			HX_STACK_LINE(78)
			this->worldRotation = (  ((this->data->inheritRotation)) ? Float((parent->worldRotation + this->rotation)) : Float(this->rotation) );
		}
		else{
			HX_STACK_LINE(80)
			this->worldX = (  ((flipX)) ? Float(-(this->x)) : Float(this->x) );
			HX_STACK_LINE(81)
			this->worldY = (  ((flipY)) ? Float(-(this->y)) : Float(this->y) );
			HX_STACK_LINE(82)
			this->worldScaleX = this->scaleX;
			HX_STACK_LINE(83)
			this->worldScaleY = this->scaleY;
			HX_STACK_LINE(84)
			this->worldRotation = this->rotation;
		}
		HX_STACK_LINE(86)
		Float radians = (Float((this->worldRotation * ::Math_obj::PI)) / Float((int)180));		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(87)
		Float cos = ::Math_obj::cos(radians);		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(88)
		Float sin = ::Math_obj::sin(radians);		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(89)
		this->m00 = (cos * this->worldScaleX);
		HX_STACK_LINE(90)
		this->m10 = (sin * this->worldScaleX);
		HX_STACK_LINE(91)
		this->m01 = (-(sin) * this->worldScaleY);
		HX_STACK_LINE(92)
		this->m11 = (cos * this->worldScaleY);
		HX_STACK_LINE(93)
		if ((flipX)){
			HX_STACK_LINE(94)
			this->m00 = -(this->m00);
			HX_STACK_LINE(95)
			this->m01 = -(this->m01);
		}
		HX_STACK_LINE(97)
		if ((flipY)){
			HX_STACK_LINE(98)
			this->m10 = -(this->m10);
			HX_STACK_LINE(99)
			this->m11 = -(this->m11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Bone_obj,updateWorldTransform,(void))

::spinehx::Bone Bone_obj::copy( ::spinehx::Bone bone,::spinehx::Bone parent){
	HX_STACK_PUSH("Bone::copy","spinehx/Bone.hx",54);
	HX_STACK_ARG(bone,"bone");
	HX_STACK_ARG(parent,"parent");
	HX_STACK_LINE(55)
	if (((bone == null()))){
		HX_STACK_LINE(55)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("bone cannot be null.")));
	}
	HX_STACK_LINE(56)
	::spinehx::Bone b = ::spinehx::Bone_obj::__new(bone->data,parent);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(57)
	b->x = bone->x;
	HX_STACK_LINE(58)
	b->y = bone->y;
	HX_STACK_LINE(59)
	b->rotation = bone->rotation;
	HX_STACK_LINE(60)
	b->scaleX = bone->scaleX;
	HX_STACK_LINE(61)
	b->scaleY = bone->scaleY;
	HX_STACK_LINE(62)
	return b;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Bone_obj,copy,return )


Bone_obj::Bone_obj()
{
}

void Bone_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bone);
	HX_MARK_MEMBER_NAME(worldScaleY,"worldScaleY");
	HX_MARK_MEMBER_NAME(worldScaleX,"worldScaleX");
	HX_MARK_MEMBER_NAME(worldRotation,"worldRotation");
	HX_MARK_MEMBER_NAME(worldY,"worldY");
	HX_MARK_MEMBER_NAME(m11,"m11");
	HX_MARK_MEMBER_NAME(m10,"m10");
	HX_MARK_MEMBER_NAME(worldX,"worldX");
	HX_MARK_MEMBER_NAME(m01,"m01");
	HX_MARK_MEMBER_NAME(m00,"m00");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void Bone_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(worldScaleY,"worldScaleY");
	HX_VISIT_MEMBER_NAME(worldScaleX,"worldScaleX");
	HX_VISIT_MEMBER_NAME(worldRotation,"worldRotation");
	HX_VISIT_MEMBER_NAME(worldY,"worldY");
	HX_VISIT_MEMBER_NAME(m11,"m11");
	HX_VISIT_MEMBER_NAME(m10,"m10");
	HX_VISIT_MEMBER_NAME(worldX,"worldX");
	HX_VISIT_MEMBER_NAME(m01,"m01");
	HX_VISIT_MEMBER_NAME(m00,"m00");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic Bone_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"m11") ) { return m11; }
		if (HX_FIELD_EQ(inName,"m10") ) { return m10; }
		if (HX_FIELD_EQ(inName,"m01") ) { return m01; }
		if (HX_FIELD_EQ(inName,"m00") ) { return m00; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		if (HX_FIELD_EQ(inName,"getY") ) { return getY_dyn(); }
		if (HX_FIELD_EQ(inName,"setX") ) { return setX_dyn(); }
		if (HX_FIELD_EQ(inName,"getX") ) { return getX_dyn(); }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getM11") ) { return getM11_dyn(); }
		if (HX_FIELD_EQ(inName,"getM10") ) { return getM10_dyn(); }
		if (HX_FIELD_EQ(inName,"getM01") ) { return getM01_dyn(); }
		if (HX_FIELD_EQ(inName,"getM00") ) { return getM00_dyn(); }
		if (HX_FIELD_EQ(inName,"worldY") ) { return worldY; }
		if (HX_FIELD_EQ(inName,"worldX") ) { return worldX; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getWorldY") ) { return getWorldY_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorldX") ) { return getWorldX_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleY") ) { return setScaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"getScaleY") ) { return getScaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleX") ) { return setScaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"getScaleX") ) { return getScaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"getParent") ) { return getParent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotation") ) { return getRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"worldScaleY") ) { return worldScaleY; }
		if (HX_FIELD_EQ(inName,"worldScaleX") ) { return worldScaleX; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"worldRotation") ) { return worldRotation; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getWorldScaleY") ) { return getWorldScaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorldScaleX") ) { return getWorldScaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"setToSetupPose") ) { return setToSetupPose_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getWorldRotation") ) { return getWorldRotation_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateWorldTransform") ) { return updateWorldTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bone_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"m11") ) { m11=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m10") ) { m10=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m01") ) { m01=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m00") ) { m00=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::spinehx::BoneData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"worldY") ) { worldY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldX") ) { worldX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::spinehx::Bone >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldScaleY") ) { worldScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"worldScaleX") ) { worldScaleX=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"worldRotation") ) { worldRotation=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bone_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("worldScaleY"));
	outFields->push(HX_CSTRING("worldScaleX"));
	outFields->push(HX_CSTRING("worldRotation"));
	outFields->push(HX_CSTRING("worldY"));
	outFields->push(HX_CSTRING("m11"));
	outFields->push(HX_CSTRING("m10"));
	outFields->push(HX_CSTRING("worldX"));
	outFields->push(HX_CSTRING("m01"));
	outFields->push(HX_CSTRING("m00"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("copy"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("getWorldScaleY"),
	HX_CSTRING("getWorldScaleX"),
	HX_CSTRING("getWorldRotation"),
	HX_CSTRING("getWorldY"),
	HX_CSTRING("getWorldX"),
	HX_CSTRING("getM11"),
	HX_CSTRING("getM10"),
	HX_CSTRING("getM01"),
	HX_CSTRING("getM00"),
	HX_CSTRING("setScaleY"),
	HX_CSTRING("getScaleY"),
	HX_CSTRING("setScaleX"),
	HX_CSTRING("getScaleX"),
	HX_CSTRING("setRotation"),
	HX_CSTRING("getRotation"),
	HX_CSTRING("setY"),
	HX_CSTRING("getY"),
	HX_CSTRING("setX"),
	HX_CSTRING("getX"),
	HX_CSTRING("getParent"),
	HX_CSTRING("getData"),
	HX_CSTRING("setToSetupPose"),
	HX_CSTRING("updateWorldTransform"),
	HX_CSTRING("worldScaleY"),
	HX_CSTRING("worldScaleX"),
	HX_CSTRING("worldRotation"),
	HX_CSTRING("worldY"),
	HX_CSTRING("m11"),
	HX_CSTRING("m10"),
	HX_CSTRING("worldX"),
	HX_CSTRING("m01"),
	HX_CSTRING("m00"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("rotation"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("parent"),
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bone_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bone_obj::__mClass,"__mClass");
};

Class Bone_obj::__mClass;

void Bone_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.Bone"), hx::TCanCast< Bone_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Bone_obj::__boot()
{
}

} // end namespace spinehx
