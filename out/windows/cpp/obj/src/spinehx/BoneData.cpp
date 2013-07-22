#include <hxcpp.h>

#ifndef INCLUDED_spinehx_BoneData
#include <spinehx/BoneData.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
namespace spinehx{

Void BoneData_obj::__construct(::String name,::spinehx::BoneData parent)
{
HX_STACK_PUSH("BoneData::new","spinehx/BoneData.hx",29);
{
	HX_STACK_LINE(38)
	this->inheritRotation = true;
	HX_STACK_LINE(38)
	this->inheritScale = true;
	HX_STACK_LINE(37)
	this->scaleY = (int)1;
	HX_STACK_LINE(36)
	this->scaleX = (int)1;
	HX_STACK_LINE(35)
	this->rotation = (int)0;
	HX_STACK_LINE(34)
	this->y = (int)0;
	HX_STACK_LINE(33)
	this->x = (int)0;
	HX_STACK_LINE(32)
	this->length = (int)0;
	HX_STACK_LINE(42)
	if (((name == null()))){
		HX_STACK_LINE(42)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("name cannot be null.")));
	}
	HX_STACK_LINE(43)
	this->name = name;
	HX_STACK_LINE(44)
	this->parent = parent;
}
;
	return null();
}

BoneData_obj::~BoneData_obj() { }

Dynamic BoneData_obj::__CreateEmpty() { return  new BoneData_obj; }
hx::ObjectPtr< BoneData_obj > BoneData_obj::__new(::String name,::spinehx::BoneData parent)
{  hx::ObjectPtr< BoneData_obj > result = new BoneData_obj();
	result->__construct(name,parent);
	return result;}

Dynamic BoneData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoneData_obj > result = new BoneData_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String BoneData_obj::toString( ){
	HX_STACK_PUSH("BoneData::toString","spinehx/BoneData.hx",134);
	HX_STACK_THIS(this);
	HX_STACK_LINE(134)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(BoneData_obj,toString,return )

Void BoneData_obj::setInheritRotation( bool inheritRotation){
{
		HX_STACK_PUSH("BoneData::setInheritRotation","spinehx/BoneData.hx",130);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inheritRotation,"inheritRotation");
		HX_STACK_LINE(130)
		this->inheritRotation = inheritRotation;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoneData_obj,setInheritRotation,(void))

bool BoneData_obj::getInheritRotation( ){
	HX_STACK_PUSH("BoneData::getInheritRotation","spinehx/BoneData.hx",126);
	HX_STACK_THIS(this);
	HX_STACK_LINE(126)
	return this->inheritRotation;
}


HX_DEFINE_DYNAMIC_FUNC0(BoneData_obj,getInheritRotation,return )

Void BoneData_obj::setInheritScale( bool inheritScale){
{
		HX_STACK_PUSH("BoneData::setInheritScale","spinehx/BoneData.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_ARG(inheritScale,"inheritScale");
		HX_STACK_LINE(122)
		this->inheritScale = inheritScale;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoneData_obj,setInheritScale,(void))

bool BoneData_obj::getInheritScale( ){
	HX_STACK_PUSH("BoneData::getInheritScale","spinehx/BoneData.hx",118);
	HX_STACK_THIS(this);
	HX_STACK_LINE(118)
	return this->inheritScale;
}


HX_DEFINE_DYNAMIC_FUNC0(BoneData_obj,getInheritScale,return )

Void BoneData_obj::setScaleY( Float scaleY){
{
		HX_STACK_PUSH("BoneData::setScaleY","spinehx/BoneData.hx",114);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scaleY,"scaleY");
		HX_STACK_LINE(114)
		this->scaleY = scaleY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoneData_obj,setScaleY,(void))

Float BoneData_obj::getScaleY( ){
	HX_STACK_PUSH("BoneData::getScaleY","spinehx/BoneData.hx",110);
	HX_STACK_THIS(this);
	HX_STACK_LINE(110)
	return this->scaleY;
}


HX_DEFINE_DYNAMIC_FUNC0(BoneData_obj,getScaleY,return )

Void BoneData_obj::setScaleX( Float scaleX){
{
		HX_STACK_PUSH("BoneData::setScaleX","spinehx/BoneData.hx",106);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_LINE(106)
		this->scaleX = scaleX;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoneData_obj,setScaleX,(void))

Float BoneData_obj::getScaleX( ){
	HX_STACK_PUSH("BoneData::getScaleX","spinehx/BoneData.hx",102);
	HX_STACK_THIS(this);
	HX_STACK_LINE(102)
	return this->scaleX;
}


HX_DEFINE_DYNAMIC_FUNC0(BoneData_obj,getScaleX,return )

Void BoneData_obj::setRotation( Float rotation){
{
		HX_STACK_PUSH("BoneData::setRotation","spinehx/BoneData.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rotation,"rotation");
		HX_STACK_LINE(98)
		this->rotation = rotation;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoneData_obj,setRotation,(void))

Float BoneData_obj::getRotation( ){
	HX_STACK_PUSH("BoneData::getRotation","spinehx/BoneData.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_LINE(94)
	return this->rotation;
}


HX_DEFINE_DYNAMIC_FUNC0(BoneData_obj,getRotation,return )

Void BoneData_obj::setY( Float y){
{
		HX_STACK_PUSH("BoneData::setY","spinehx/BoneData.hx",90);
		HX_STACK_THIS(this);
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(90)
		this->y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoneData_obj,setY,(void))

Float BoneData_obj::getY( ){
	HX_STACK_PUSH("BoneData::getY","spinehx/BoneData.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_LINE(86)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(BoneData_obj,getY,return )

Void BoneData_obj::setX( Float x){
{
		HX_STACK_PUSH("BoneData::setX","spinehx/BoneData.hx",82);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(82)
		this->x = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoneData_obj,setX,(void))

Float BoneData_obj::getX( ){
	HX_STACK_PUSH("BoneData::getX","spinehx/BoneData.hx",78);
	HX_STACK_THIS(this);
	HX_STACK_LINE(78)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(BoneData_obj,getX,return )

Void BoneData_obj::setLength( Float length){
{
		HX_STACK_PUSH("BoneData::setLength","spinehx/BoneData.hx",74);
		HX_STACK_THIS(this);
		HX_STACK_ARG(length,"length");
		HX_STACK_LINE(74)
		this->length = length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoneData_obj,setLength,(void))

Float BoneData_obj::getLength( ){
	HX_STACK_PUSH("BoneData::getLength","spinehx/BoneData.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_LINE(70)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(BoneData_obj,getLength,return )

::String BoneData_obj::getName( ){
	HX_STACK_PUSH("BoneData::getName","spinehx/BoneData.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_LINE(66)
	return this->name;
}


HX_DEFINE_DYNAMIC_FUNC0(BoneData_obj,getName,return )

::spinehx::BoneData BoneData_obj::getParent( ){
	HX_STACK_PUSH("BoneData::getParent","spinehx/BoneData.hx",62);
	HX_STACK_THIS(this);
	HX_STACK_LINE(62)
	return this->parent;
}


HX_DEFINE_DYNAMIC_FUNC0(BoneData_obj,getParent,return )

::spinehx::BoneData BoneData_obj::copy( ::spinehx::BoneData bone,::spinehx::BoneData parent){
	HX_STACK_PUSH("BoneData::copy","spinehx/BoneData.hx",49);
	HX_STACK_ARG(bone,"bone");
	HX_STACK_ARG(parent,"parent");
	HX_STACK_LINE(50)
	if (((bone == null()))){
		HX_STACK_LINE(50)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("bone cannot be null.")));
	}
	HX_STACK_LINE(51)
	::spinehx::BoneData b = ::spinehx::BoneData_obj::__new(bone->name,parent);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(52)
	b->length = bone->length;
	HX_STACK_LINE(53)
	b->x = bone->x;
	HX_STACK_LINE(54)
	b->y = bone->y;
	HX_STACK_LINE(55)
	b->rotation = bone->rotation;
	HX_STACK_LINE(56)
	b->scaleX = bone->scaleX;
	HX_STACK_LINE(57)
	b->scaleY = bone->scaleY;
	HX_STACK_LINE(58)
	return b;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BoneData_obj,copy,return )


BoneData_obj::BoneData_obj()
{
}

void BoneData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoneData);
	HX_MARK_MEMBER_NAME(inheritRotation,"inheritRotation");
	HX_MARK_MEMBER_NAME(inheritScale,"inheritScale");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void BoneData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inheritRotation,"inheritRotation");
	HX_VISIT_MEMBER_NAME(inheritScale,"inheritScale");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic BoneData_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setScaleY") ) { return setScaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"getScaleY") ) { return getScaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleX") ) { return setScaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"getScaleX") ) { return getScaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"getParent") ) { return getParent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotation") ) { return getRotation_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inheritScale") ) { return inheritScale; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setInheritScale") ) { return setInheritScale_dyn(); }
		if (HX_FIELD_EQ(inName,"getInheritScale") ) { return getInheritScale_dyn(); }
		if (HX_FIELD_EQ(inName,"inheritRotation") ) { return inheritRotation; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setInheritRotation") ) { return setInheritRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"getInheritRotation") ) { return getInheritRotation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BoneData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::spinehx::BoneData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"inheritScale") ) { inheritScale=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"inheritRotation") ) { inheritRotation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoneData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inheritRotation"));
	outFields->push(HX_CSTRING("inheritScale"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("copy"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("setInheritRotation"),
	HX_CSTRING("getInheritRotation"),
	HX_CSTRING("setInheritScale"),
	HX_CSTRING("getInheritScale"),
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
	HX_CSTRING("setLength"),
	HX_CSTRING("getLength"),
	HX_CSTRING("getName"),
	HX_CSTRING("getParent"),
	HX_CSTRING("inheritRotation"),
	HX_CSTRING("inheritScale"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("rotation"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("length"),
	HX_CSTRING("name"),
	HX_CSTRING("parent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoneData_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoneData_obj::__mClass,"__mClass");
};

Class BoneData_obj::__mClass;

void BoneData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.BoneData"), hx::TCanCast< BoneData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BoneData_obj::__boot()
{
}

} // end namespace spinehx
