#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace io{

Void BytesInput_obj::__construct(::haxe::io::Bytes b,Dynamic pos,Dynamic len)
{
HX_STACK_PUSH("BytesInput::new","C:\\HaxeToolkit\\haxe/std/haxe/io/BytesInput.hx",33);
{
	HX_STACK_LINE(34)
	if (((pos == null()))){
		HX_STACK_LINE(34)
		pos = (int)0;
	}
	HX_STACK_LINE(35)
	if (((len == null()))){
		HX_STACK_LINE(35)
		len = (b->length - pos);
	}
	HX_STACK_LINE(36)
	if (((bool((bool((pos < (int)0)) || bool((len < (int)0)))) || bool(((pos + len) > b->length))))){
		HX_STACK_LINE(36)
		hx::Throw (::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(48)
	this->b = b->b;
	HX_STACK_LINE(49)
	this->pos = pos;
	HX_STACK_LINE(50)
	this->len = len;
}
;
	return null();
}

BytesInput_obj::~BytesInput_obj() { }

Dynamic BytesInput_obj::__CreateEmpty() { return  new BytesInput_obj; }
hx::ObjectPtr< BytesInput_obj > BytesInput_obj::__new(::haxe::io::Bytes b,Dynamic pos,Dynamic len)
{  hx::ObjectPtr< BytesInput_obj > result = new BytesInput_obj();
	result->__construct(b,pos,len);
	return result;}

Dynamic BytesInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BytesInput_obj > result = new BytesInput_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int BytesInput_obj::readByte( ){
	HX_STACK_PUSH("BytesInput::readByte","C:\\HaxeToolkit\\haxe/std/haxe/io/BytesInput.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_LINE(74)
	if (((this->len == (int)0))){
		HX_STACK_LINE(75)
		hx::Throw (::haxe::io::Eof_obj::__new());
	}
	HX_STACK_LINE(76)
	(this->len)--;
	HX_STACK_LINE(82)
	return this->b->__get((this->pos)++);
}



BytesInput_obj::BytesInput_obj()
{
}

void BytesInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesInput);
	HX_MARK_MEMBER_NAME(len,"len");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(b,"b");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BytesInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(len,"len");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(b,"b");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic BytesInput_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { return len; }
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BytesInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { len=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BytesInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("len"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("b"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("readByte"),
	HX_CSTRING("len"),
	HX_CSTRING("pos"),
	HX_CSTRING("b"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytesInput_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytesInput_obj::__mClass,"__mClass");
};

Class BytesInput_obj::__mClass;

void BytesInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.BytesInput"), hx::TCanCast< BytesInput_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void BytesInput_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
