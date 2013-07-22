#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_Slot
#include <spinehx/Slot.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureRegion
#include <spinehx/atlas/TextureRegion.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Attachment
#include <spinehx/attachments/Attachment.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Mode
#include <spinehx/attachments/Mode.h>
#endif
#ifndef INCLUDED_spinehx_attachments_RegionAttachment
#include <spinehx/attachments/RegionAttachment.h>
#endif
#ifndef INCLUDED_spinehx_attachments_RegionSequenceAttachment
#include <spinehx/attachments/RegionSequenceAttachment.h>
#endif
namespace spinehx{
namespace attachments{

Void RegionSequenceAttachment_obj::__construct(::String name)
{
HX_STACK_PUSH("RegionSequenceAttachment::new","spinehx/attachments/RegionSequenceAttachment.hx",34);
{
	HX_STACK_LINE(34)
	super::__construct(name);
}
;
	return null();
}

RegionSequenceAttachment_obj::~RegionSequenceAttachment_obj() { }

Dynamic RegionSequenceAttachment_obj::__CreateEmpty() { return  new RegionSequenceAttachment_obj; }
hx::ObjectPtr< RegionSequenceAttachment_obj > RegionSequenceAttachment_obj::__new(::String name)
{  hx::ObjectPtr< RegionSequenceAttachment_obj > result = new RegionSequenceAttachment_obj();
	result->__construct(name);
	return result;}

Dynamic RegionSequenceAttachment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RegionSequenceAttachment_obj > result = new RegionSequenceAttachment_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RegionSequenceAttachment_obj::setMode( ::spinehx::attachments::Mode mode){
{
		HX_STACK_PUSH("RegionSequenceAttachment::setMode","spinehx/attachments/RegionSequenceAttachment.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_ARG(mode,"mode");
		HX_STACK_LINE(77)
		this->mode = mode;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegionSequenceAttachment_obj,setMode,(void))

Void RegionSequenceAttachment_obj::setFrameTime( Float frameTime){
{
		HX_STACK_PUSH("RegionSequenceAttachment::setFrameTime","spinehx/attachments/RegionSequenceAttachment.hx",73);
		HX_STACK_THIS(this);
		HX_STACK_ARG(frameTime,"frameTime");
		HX_STACK_LINE(73)
		this->frameTime = frameTime;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegionSequenceAttachment_obj,setFrameTime,(void))

Void RegionSequenceAttachment_obj::setRegions( Array< ::Dynamic > regions){
{
		HX_STACK_PUSH("RegionSequenceAttachment::setRegions","spinehx/attachments/RegionSequenceAttachment.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_ARG(regions,"regions");
		HX_STACK_LINE(68)
		this->regions = regions;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegionSequenceAttachment_obj,setRegions,(void))

Array< ::Dynamic > RegionSequenceAttachment_obj::getRegions( ){
	HX_STACK_PUSH("RegionSequenceAttachment::getRegions","spinehx/attachments/RegionSequenceAttachment.hx",63);
	HX_STACK_THIS(this);
	HX_STACK_LINE(64)
	if (((this->regions == null()))){
		HX_STACK_LINE(64)
		hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Regions have not been set: ") + ::Std_obj::string(hx::ObjectPtr<OBJ_>(this)))));
	}
	HX_STACK_LINE(65)
	return this->regions;
}


HX_DEFINE_DYNAMIC_FUNC0(RegionSequenceAttachment_obj,getRegions,return )

Void RegionSequenceAttachment_obj::updateVertices( ::spinehx::Slot slot){
{
		HX_STACK_PUSH("RegionSequenceAttachment::updateVertices","spinehx/attachments/RegionSequenceAttachment.hx",38);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slot,"slot");
		HX_STACK_LINE(39)
		if (((this->regions == null()))){
			HX_STACK_LINE(39)
			hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Regions have not been set: ") + ::Std_obj::string(hx::ObjectPtr<OBJ_>(this)))));
		}
		HX_STACK_LINE(41)
		int frameIndex = ::Math_obj::floor((Float(slot->getAttachmentTime()) / Float(this->frameTime)));		HX_STACK_VAR(frameIndex,"frameIndex");
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::spinehx::attachments::RegionSequenceAttachment _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(42)
			{
				::spinehx::attachments::Mode _switch_1 = (_g->mode);
				switch((_switch_1)->GetIndex()){
					case 0: {
						struct _Function_3_1{
							inline static int Block( ::spinehx::attachments::RegionSequenceAttachment_obj *__this,int &frameIndex){
								HX_STACK_PUSH("*::closure","spinehx/attachments/RegionSequenceAttachment.hx",44);
								{
									HX_STACK_LINE(44)
									int a = (__this->regions->length - (int)1);		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(44)
									return (  (((a < frameIndex))) ? int(a) : int(frameIndex) );
								}
								return null();
							}
						};
						HX_STACK_LINE(43)
						frameIndex = _Function_3_1::Block(this,frameIndex);
					}
					;break;
					case 2: {
						HX_STACK_LINE(45)
						frameIndex = hx::Mod(frameIndex,this->regions->length);
					}
					;break;
					case 4: {
						HX_STACK_LINE(48)
						frameIndex = hx::Mod(frameIndex,((this->regions->length * (int)2)));
						HX_STACK_LINE(49)
						if (((frameIndex >= this->regions->length))){
							HX_STACK_LINE(49)
							frameIndex = ((this->regions->length - (int)1) - ((frameIndex - this->regions->length)));
						}
					}
					;break;
					case 5: {
						HX_STACK_LINE(50)
						frameIndex = ::Math_obj::round((((this->regions->length - (int)1)) * ::Math_obj::random()));
					}
					;break;
					case 1: {
						struct _Function_3_1{
							inline static int Block( ::spinehx::attachments::RegionSequenceAttachment_obj *__this,int &frameIndex){
								HX_STACK_PUSH("*::closure","spinehx/attachments/RegionSequenceAttachment.hx",53);
								{
									HX_STACK_LINE(53)
									int a = ((__this->regions->length - frameIndex) - (int)1);		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(53)
									return (  (((a > (int)0))) ? int(a) : int((int)0) );
								}
								return null();
							}
						};
						HX_STACK_LINE(52)
						frameIndex = _Function_3_1::Block(this,frameIndex);
					}
					;break;
					case 3: {
						HX_STACK_LINE(55)
						frameIndex = hx::Mod(frameIndex,this->regions->length);
						HX_STACK_LINE(56)
						frameIndex = ((this->regions->length - frameIndex) - (int)1);
					}
					;break;
				}
			}
		}
		HX_STACK_LINE(58)
		this->setRegion(this->regions->__get(frameIndex).StaticCast< ::spinehx::atlas::TextureRegion >());
		HX_STACK_LINE(60)
		this->super::updateVertices(slot);
	}
return null();
}



RegionSequenceAttachment_obj::RegionSequenceAttachment_obj()
{
}

void RegionSequenceAttachment_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegionSequenceAttachment);
	HX_MARK_MEMBER_NAME(regions,"regions");
	HX_MARK_MEMBER_NAME(frameTime,"frameTime");
	HX_MARK_MEMBER_NAME(mode,"mode");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RegionSequenceAttachment_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(regions,"regions");
	HX_VISIT_MEMBER_NAME(frameTime,"frameTime");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RegionSequenceAttachment_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return mode; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setMode") ) { return setMode_dyn(); }
		if (HX_FIELD_EQ(inName,"regions") ) { return regions; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameTime") ) { return frameTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setRegions") ) { return setRegions_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegions") ) { return getRegions_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setFrameTime") ) { return setFrameTime_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateVertices") ) { return updateVertices_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RegionSequenceAttachment_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast< ::spinehx::attachments::Mode >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regions") ) { regions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameTime") ) { frameTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegionSequenceAttachment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("regions"));
	outFields->push(HX_CSTRING("frameTime"));
	outFields->push(HX_CSTRING("mode"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setMode"),
	HX_CSTRING("setFrameTime"),
	HX_CSTRING("setRegions"),
	HX_CSTRING("getRegions"),
	HX_CSTRING("updateVertices"),
	HX_CSTRING("regions"),
	HX_CSTRING("frameTime"),
	HX_CSTRING("mode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegionSequenceAttachment_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegionSequenceAttachment_obj::__mClass,"__mClass");
};

Class RegionSequenceAttachment_obj::__mClass;

void RegionSequenceAttachment_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.attachments.RegionSequenceAttachment"), hx::TCanCast< RegionSequenceAttachment_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RegionSequenceAttachment_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace attachments
