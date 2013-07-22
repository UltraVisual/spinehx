#include <hxcpp.h>

#ifndef INCLUDED_spinehx_Color
#include <spinehx/Color.h>
#endif
namespace spinehx{

Void Color_obj::__construct(Float r,Float g,Float b,Float a)
{
HX_STACK_PUSH("Color::new","spinehx/Color.hx",2);
{
	HX_STACK_LINE(7)
	this->a = (int)0;
	HX_STACK_LINE(6)
	this->b = (int)0;
	HX_STACK_LINE(5)
	this->g = (int)0;
	HX_STACK_LINE(4)
	this->r = (int)0;
	HX_STACK_LINE(35)
	this->set(r,g,b,a);
}
;
	return null();
}

Color_obj::~Color_obj() { }

Dynamic Color_obj::__CreateEmpty() { return  new Color_obj; }
hx::ObjectPtr< Color_obj > Color_obj::__new(Float r,Float g,Float b,Float a)
{  hx::ObjectPtr< Color_obj > result = new Color_obj();
	result->__construct(r,g,b,a);
	return result;}

Dynamic Color_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Color_obj > result = new Color_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Color_obj::set( Float r,Float g,Float b,Float a){
{
		HX_STACK_PUSH("Color::set","spinehx/Color.hx",26);
		HX_STACK_THIS(this);
		HX_STACK_ARG(r,"r");
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(b,"b");
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(27)
		this->r = (  (((r < (int)0))) ? Float((int)0) : Float((  (((r > (int)1))) ? Float((int)1) : Float(r) )) );
		HX_STACK_LINE(28)
		this->g = (  (((g < (int)0))) ? Float((int)0) : Float((  (((g > (int)1))) ? Float((int)1) : Float(g) )) );
		HX_STACK_LINE(29)
		this->b = (  (((b < (int)0))) ? Float((int)0) : Float((  (((b > (int)1))) ? Float((int)1) : Float(b) )) );
		HX_STACK_LINE(30)
		this->a = (  (((a < (int)0))) ? Float((int)0) : Float((  (((a > (int)1))) ? Float((int)1) : Float(a) )) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Color_obj,set,(void))

Void Color_obj::add( Float r,Float g,Float b,Float a){
{
		HX_STACK_PUSH("Color::add","spinehx/Color.hx",17);
		HX_STACK_THIS(this);
		HX_STACK_ARG(r,"r");
		HX_STACK_ARG(g,"g");
		HX_STACK_ARG(b,"b");
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(17)
		this->set((this->r + r),(this->g + g),(this->b + b),(this->a + a));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Color_obj,add,(void))

Void Color_obj::set2( ::spinehx::Color c){
{
		HX_STACK_PUSH("Color::set2","spinehx/Color.hx",9);
		HX_STACK_THIS(this);
		HX_STACK_ARG(c,"c");
		HX_STACK_LINE(9)
		this->set(c->r,c->g,c->b,c->a);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Color_obj,set2,(void))

::spinehx::Color Color_obj::copy( ::spinehx::Color c){
	HX_STACK_PUSH("Color::copy","spinehx/Color.hx",13);
	HX_STACK_ARG(c,"c");
	HX_STACK_LINE(13)
	return ::spinehx::Color_obj::__new(c->r,c->g,c->b,c->a);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_obj,copy,return )

::spinehx::Color Color_obj::valueOf( ::String s){
	HX_STACK_PUSH("Color::valueOf","spinehx/Color.hx",33);
	HX_STACK_ARG(s,"s");
	HX_STACK_LINE(33)
	return ::spinehx::Color_obj::__new((int)0,(int)0,(int)0,(int)0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Color_obj,valueOf,return )


Color_obj::Color_obj()
{
}

void Color_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Color);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_END_CLASS();
}

void Color_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(r,"r");
}

Dynamic Color_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"set2") ) { return set2_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"valueOf") ) { return valueOf_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Color_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Color_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("r"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("copy"),
	HX_CSTRING("valueOf"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set"),
	HX_CSTRING("add"),
	HX_CSTRING("set2"),
	HX_CSTRING("a"),
	HX_CSTRING("b"),
	HX_CSTRING("g"),
	HX_CSTRING("r"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Color_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Color_obj::__mClass,"__mClass");
};

Class Color_obj::__mClass;

void Color_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.Color"), hx::TCanCast< Color_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Color_obj::__boot()
{
}

} // end namespace spinehx
