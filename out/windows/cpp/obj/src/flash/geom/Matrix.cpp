#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flash{
namespace geom{

Void Matrix_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
HX_STACK_PUSH("Matrix::new","flash/geom/Matrix.hx",15);
Float a = __o_a.Default(1);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(1);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
{
	HX_STACK_LINE(17)
	this->a = a;
	HX_STACK_LINE(18)
	this->b = b;
	HX_STACK_LINE(19)
	this->c = c;
	HX_STACK_LINE(20)
	this->d = d;
	HX_STACK_LINE(21)
	this->tx = tx;
	HX_STACK_LINE(22)
	this->ty = ty;
}
;
	return null();
}

Matrix_obj::~Matrix_obj() { }

Dynamic Matrix_obj::__CreateEmpty() { return  new Matrix_obj; }
hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return result;}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Matrix_obj::translate( Float x,Float y){
{
		HX_STACK_PUSH("Matrix::translate","flash/geom/Matrix.hx",206);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(208)
		hx::AddEq(this->tx,x);
		HX_STACK_LINE(209)
		hx::AddEq(this->ty,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate,(void))

::flash::geom::Point Matrix_obj::transformPoint( ::flash::geom::Point point){
	HX_STACK_PUSH("Matrix::transformPoint","flash/geom/Matrix.hx",199);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(199)
	return ::flash::geom::Point_obj::__new((((point->x * this->a) + (point->y * this->c)) + this->tx),(((point->x * this->b) + (point->y * this->d)) + this->ty));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformPoint,return )

Void Matrix_obj::setRotation( Float angle,hx::Null< Float >  __o_scale){
Float scale = __o_scale.Default(1);
	HX_STACK_PUSH("Matrix::setRotation","flash/geom/Matrix.hx",189);
	HX_STACK_THIS(this);
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(scale,"scale");
{
		HX_STACK_LINE(191)
		this->a = (::Math_obj::cos(angle) * scale);
		HX_STACK_LINE(192)
		this->c = (::Math_obj::sin(angle) * scale);
		HX_STACK_LINE(193)
		this->b = -(this->c);
		HX_STACK_LINE(194)
		this->d = this->a;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,setRotation,(void))

Void Matrix_obj::scale( Float x,Float y){
{
		HX_STACK_PUSH("Matrix::scale","flash/geom/Matrix.hx",175);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(177)
		hx::MultEq(this->a,x);
		HX_STACK_LINE(178)
		hx::MultEq(this->b,y);
		HX_STACK_LINE(180)
		hx::MultEq(this->c,x);
		HX_STACK_LINE(181)
		hx::MultEq(this->d,y);
		HX_STACK_LINE(183)
		hx::MultEq(this->tx,x);
		HX_STACK_LINE(184)
		hx::MultEq(this->ty,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale,(void))

Void Matrix_obj::rotate( Float angle){
{
		HX_STACK_PUSH("Matrix::rotate","flash/geom/Matrix.hx",155);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(157)
		Float cos = ::Math_obj::cos(angle);		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(158)
		Float sin = ::Math_obj::sin(angle);		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(160)
		Float a1 = ((this->a * cos) - (this->b * sin));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(161)
		this->b = ((this->a * sin) + (this->b * cos));
		HX_STACK_LINE(162)
		this->a = a1;
		HX_STACK_LINE(164)
		Float c1 = ((this->c * cos) - (this->d * sin));		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(165)
		this->d = ((this->c * sin) + (this->d * cos));
		HX_STACK_LINE(166)
		this->c = c1;
		HX_STACK_LINE(168)
		Float tx1 = ((this->tx * cos) - (this->ty * sin));		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(169)
		this->ty = ((this->tx * sin) + (this->ty * cos));
		HX_STACK_LINE(170)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate,(void))

::flash::geom::Matrix Matrix_obj::mult( ::flash::geom::Matrix m){
	HX_STACK_PUSH("Matrix::mult","flash/geom/Matrix.hx",138);
	HX_STACK_THIS(this);
	HX_STACK_ARG(m,"m");
	HX_STACK_LINE(140)
	::flash::geom::Matrix result = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(142)
	result->a = ((this->a * m->a) + (this->b * m->c));
	HX_STACK_LINE(143)
	result->b = ((this->a * m->b) + (this->b * m->d));
	HX_STACK_LINE(144)
	result->c = ((this->c * m->a) + (this->d * m->c));
	HX_STACK_LINE(145)
	result->d = ((this->c * m->b) + (this->d * m->d));
	HX_STACK_LINE(147)
	result->tx = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);
	HX_STACK_LINE(148)
	result->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
	HX_STACK_LINE(150)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,mult,return )

::flash::geom::Matrix Matrix_obj::invert( ){
	HX_STACK_PUSH("Matrix::invert","flash/geom/Matrix.hx",108);
	HX_STACK_THIS(this);
	HX_STACK_LINE(110)
	Float norm = ((this->a * this->d) - (this->b * this->c));		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(112)
	if (((norm == (int)0))){
		HX_STACK_LINE(114)
		this->a = this->b = this->c = this->d = (int)0;
		HX_STACK_LINE(115)
		this->tx = -(this->tx);
		HX_STACK_LINE(116)
		this->ty = -(this->ty);
	}
	else{
		HX_STACK_LINE(120)
		norm = (Float(1.0) / Float(norm));
		HX_STACK_LINE(121)
		Float a1 = (this->d * norm);		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(122)
		this->d = (this->a * norm);
		HX_STACK_LINE(123)
		this->a = a1;
		HX_STACK_LINE(124)
		hx::MultEq(this->b,-(norm));
		HX_STACK_LINE(125)
		hx::MultEq(this->c,-(norm));
		HX_STACK_LINE(127)
		Float tx1 = ((-(this->a) * this->tx) - (this->c * this->ty));		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(128)
		this->ty = ((-(this->b) * this->tx) - (this->d * this->ty));
		HX_STACK_LINE(129)
		this->tx = tx1;
	}
	HX_STACK_LINE(133)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,return )

Void Matrix_obj::identity( ){
{
		HX_STACK_PUSH("Matrix::identity","flash/geom/Matrix.hx",96);
		HX_STACK_THIS(this);
		HX_STACK_LINE(98)
		this->a = (int)1;
		HX_STACK_LINE(99)
		this->b = (int)0;
		HX_STACK_LINE(100)
		this->c = (int)0;
		HX_STACK_LINE(101)
		this->d = (int)1;
		HX_STACK_LINE(102)
		this->tx = (int)0;
		HX_STACK_LINE(103)
		this->ty = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

::flash::geom::Point Matrix_obj::deltaTransformPoint( ::flash::geom::Point point){
	HX_STACK_PUSH("Matrix::deltaTransformPoint","flash/geom/Matrix.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(89)
	return ::flash::geom::Point_obj::__new(((point->x * this->a) + (point->y * this->c)),((point->x * this->b) + (point->y * this->d)));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,deltaTransformPoint,return )

Void Matrix_obj::createGradientBox( Float width,Float height,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_PUSH("Matrix::createGradientBox","flash/geom/Matrix.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(rotation,"rotation");
	HX_STACK_ARG(tx,"tx");
	HX_STACK_ARG(ty,"ty");
{
		HX_STACK_LINE(65)
		this->a = (Float(width) / Float(1638.4));
		HX_STACK_LINE(66)
		this->d = (Float(height) / Float(1638.4));
		HX_STACK_LINE(68)
		if (((rotation != 0.0))){
			HX_STACK_LINE(70)
			Float cos = ::Math_obj::cos(rotation);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(71)
			Float sin = ::Math_obj::sin(rotation);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(72)
			this->b = (sin * this->d);
			HX_STACK_LINE(73)
			this->c = (-(sin) * this->a);
			HX_STACK_LINE(74)
			hx::MultEq(this->a,cos);
			HX_STACK_LINE(75)
			hx::MultEq(this->d,cos);
		}
		else{
			HX_STACK_LINE(77)
			this->b = this->c = (int)0;
		}
		HX_STACK_LINE(83)
		this->tx = (tx + (Float(width) / Float((int)2)));
		HX_STACK_LINE(84)
		this->ty = (ty + (Float(height) / Float((int)2)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createGradientBox,(void))

Void Matrix_obj::createBox( Float scaleX,Float scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_PUSH("Matrix::createBox","flash/geom/Matrix.hx",52);
	HX_STACK_THIS(this);
	HX_STACK_ARG(scaleX,"scaleX");
	HX_STACK_ARG(scaleY,"scaleY");
	HX_STACK_ARG(rotation,"rotation");
	HX_STACK_ARG(tx,"tx");
	HX_STACK_ARG(ty,"ty");
{
		HX_STACK_LINE(54)
		this->a = scaleX;
		HX_STACK_LINE(55)
		this->d = scaleY;
		HX_STACK_LINE(56)
		this->b = rotation;
		HX_STACK_LINE(57)
		this->tx = tx;
		HX_STACK_LINE(58)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createBox,(void))

Void Matrix_obj::concat( ::flash::geom::Matrix m){
{
		HX_STACK_PUSH("Matrix::concat","flash/geom/Matrix.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_ARG(m,"m");
		HX_STACK_LINE(36)
		Float a1 = ((this->a * m->a) + (this->b * m->c));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(37)
		this->b = ((this->a * m->b) + (this->b * m->d));
		HX_STACK_LINE(38)
		this->a = a1;
		HX_STACK_LINE(40)
		Float c1 = ((this->c * m->a) + (this->d * m->c));		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(41)
		this->d = ((this->c * m->b) + (this->d * m->d));
		HX_STACK_LINE(43)
		this->c = c1;
		HX_STACK_LINE(45)
		Float tx1 = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(46)
		this->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
		HX_STACK_LINE(47)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,concat,(void))

::flash::geom::Matrix Matrix_obj::clone( ){
	HX_STACK_PUSH("Matrix::clone","flash/geom/Matrix.hx",27);
	HX_STACK_THIS(this);
	HX_STACK_LINE(27)
	return ::flash::geom::Matrix_obj::__new(this->a,this->b,this->c,this->d,this->tx,this->ty);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )


Matrix_obj::Matrix_obj()
{
}

void Matrix_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Matrix);
	HX_MARK_MEMBER_NAME(ty,"ty");
	HX_MARK_MEMBER_NAME(tx,"tx");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(c,"c");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_END_CLASS();
}

void Matrix_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ty,"ty");
	HX_VISIT_MEMBER_NAME(tx,"tx");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(c,"c");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(a,"a");
}

Dynamic Matrix_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return createBox_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return transformPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return createGradientBox_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"deltaTransformPoint") ) { return deltaTransformPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

static int __id_translate = __hxcpp_field_to_id("translate");
static int __id_transformPoint = __hxcpp_field_to_id("transformPoint");
static int __id_setRotation = __hxcpp_field_to_id("setRotation");
static int __id_scale = __hxcpp_field_to_id("scale");
static int __id_rotate = __hxcpp_field_to_id("rotate");
static int __id_mult = __hxcpp_field_to_id("mult");
static int __id_invert = __hxcpp_field_to_id("invert");
static int __id_identity = __hxcpp_field_to_id("identity");
static int __id_deltaTransformPoint = __hxcpp_field_to_id("deltaTransformPoint");
static int __id_createGradientBox = __hxcpp_field_to_id("createGradientBox");
static int __id_createBox = __hxcpp_field_to_id("createBox");
static int __id_concat = __hxcpp_field_to_id("concat");
static int __id_clone = __hxcpp_field_to_id("clone");
static int __id_ty = __hxcpp_field_to_id("ty");
static int __id_tx = __hxcpp_field_to_id("tx");
static int __id_d = __hxcpp_field_to_id("d");
static int __id_c = __hxcpp_field_to_id("c");
static int __id_b = __hxcpp_field_to_id("b");
static int __id_a = __hxcpp_field_to_id("a");


double Matrix_obj::__INumField(int inFieldID)
{
	if (inFieldID==__id_ty) return ty;
	if (inFieldID==__id_tx) return tx;
	if (inFieldID==__id_d) return d;
	if (inFieldID==__id_c) return c;
	if (inFieldID==__id_b) return b;
	if (inFieldID==__id_a) return a;
	return super::__INumField(inFieldID);
}

Dynamic Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ty"));
	outFields->push(HX_CSTRING("tx"));
	outFields->push(HX_CSTRING("d"));
	outFields->push(HX_CSTRING("c"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("a"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("translate"),
	HX_CSTRING("transformPoint"),
	HX_CSTRING("setRotation"),
	HX_CSTRING("scale"),
	HX_CSTRING("rotate"),
	HX_CSTRING("mult"),
	HX_CSTRING("invert"),
	HX_CSTRING("identity"),
	HX_CSTRING("deltaTransformPoint"),
	HX_CSTRING("createGradientBox"),
	HX_CSTRING("createBox"),
	HX_CSTRING("concat"),
	HX_CSTRING("clone"),
	HX_CSTRING("ty"),
	HX_CSTRING("tx"),
	HX_CSTRING("d"),
	HX_CSTRING("c"),
	HX_CSTRING("b"),
	HX_CSTRING("a"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

Class Matrix_obj::__mClass;

void Matrix_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.geom.Matrix"), hx::TCanCast< Matrix_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Matrix_obj::__boot()
{
}

} // end namespace flash
} // end namespace geom
