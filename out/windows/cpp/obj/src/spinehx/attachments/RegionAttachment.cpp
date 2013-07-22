#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_spinehx_ArrayUtils
#include <spinehx/ArrayUtils.h>
#endif
#ifndef INCLUDED_spinehx_Bone
#include <spinehx/Bone.h>
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
#ifndef INCLUDED_spinehx_Slot
#include <spinehx/Slot.h>
#endif
#ifndef INCLUDED_spinehx_atlas_AtlasRegion
#include <spinehx/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureRegion
#include <spinehx/atlas/TextureRegion.h>
#endif
#ifndef INCLUDED_spinehx_attachments_Attachment
#include <spinehx/attachments/Attachment.h>
#endif
#ifndef INCLUDED_spinehx_attachments_NumberUtils
#include <spinehx/attachments/NumberUtils.h>
#endif
#ifndef INCLUDED_spinehx_attachments_RegionAttachment
#include <spinehx/attachments/RegionAttachment.h>
#endif
namespace spinehx{
namespace attachments{

Void RegionAttachment_obj::__construct(::String name)
{
HX_STACK_PUSH("RegionAttachment::new","spinehx/attachments/RegionAttachment.hx",33);
{
	HX_STACK_LINE(62)
	this->height = (int)0;
	HX_STACK_LINE(61)
	this->width = (int)0;
	HX_STACK_LINE(60)
	this->rotation = (int)0;
	HX_STACK_LINE(59)
	this->scaleY = (int)1;
	HX_STACK_LINE(58)
	this->scaleX = (int)1;
	HX_STACK_LINE(57)
	this->y = (int)0;
	HX_STACK_LINE(56)
	this->x = (int)0;
	HX_STACK_LINE(67)
	super::__construct(name);
	HX_STACK_LINE(68)
	this->vertices = ::spinehx::ArrayUtils_obj::allocFloat((int)20);
	HX_STACK_LINE(69)
	this->offset = ::spinehx::ArrayUtils_obj::allocFloat((int)8);
}
;
	return null();
}

RegionAttachment_obj::~RegionAttachment_obj() { }

Dynamic RegionAttachment_obj::__CreateEmpty() { return  new RegionAttachment_obj; }
hx::ObjectPtr< RegionAttachment_obj > RegionAttachment_obj::__new(::String name)
{  hx::ObjectPtr< RegionAttachment_obj > result = new RegionAttachment_obj();
	result->__construct(name);
	return result;}

Dynamic RegionAttachment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RegionAttachment_obj > result = new RegionAttachment_obj();
	result->__construct(inArgs[0]);
	return result;}

Void RegionAttachment_obj::setHeight( Float height){
{
		HX_STACK_PUSH("RegionAttachment::setHeight","spinehx/attachments/RegionAttachment.hx",239);
		HX_STACK_THIS(this);
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(239)
		this->height = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegionAttachment_obj,setHeight,(void))

Float RegionAttachment_obj::getHeight( ){
	HX_STACK_PUSH("RegionAttachment::getHeight","spinehx/attachments/RegionAttachment.hx",235);
	HX_STACK_THIS(this);
	HX_STACK_LINE(235)
	return this->height;
}


HX_DEFINE_DYNAMIC_FUNC0(RegionAttachment_obj,getHeight,return )

Void RegionAttachment_obj::setWidth( Float width){
{
		HX_STACK_PUSH("RegionAttachment::setWidth","spinehx/attachments/RegionAttachment.hx",231);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_LINE(231)
		this->width = width;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegionAttachment_obj,setWidth,(void))

Float RegionAttachment_obj::getWidth( ){
	HX_STACK_PUSH("RegionAttachment::getWidth","spinehx/attachments/RegionAttachment.hx",227);
	HX_STACK_THIS(this);
	HX_STACK_LINE(227)
	return this->width;
}


HX_DEFINE_DYNAMIC_FUNC0(RegionAttachment_obj,getWidth,return )

Void RegionAttachment_obj::setRotation( Float rotation){
{
		HX_STACK_PUSH("RegionAttachment::setRotation","spinehx/attachments/RegionAttachment.hx",223);
		HX_STACK_THIS(this);
		HX_STACK_ARG(rotation,"rotation");
		HX_STACK_LINE(223)
		this->rotation = rotation;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegionAttachment_obj,setRotation,(void))

Float RegionAttachment_obj::getRotation( ){
	HX_STACK_PUSH("RegionAttachment::getRotation","spinehx/attachments/RegionAttachment.hx",219);
	HX_STACK_THIS(this);
	HX_STACK_LINE(219)
	return this->rotation;
}


HX_DEFINE_DYNAMIC_FUNC0(RegionAttachment_obj,getRotation,return )

Void RegionAttachment_obj::setScaleY( Float scaleY){
{
		HX_STACK_PUSH("RegionAttachment::setScaleY","spinehx/attachments/RegionAttachment.hx",215);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scaleY,"scaleY");
		HX_STACK_LINE(215)
		this->scaleY = scaleY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegionAttachment_obj,setScaleY,(void))

Float RegionAttachment_obj::getScaleY( ){
	HX_STACK_PUSH("RegionAttachment::getScaleY","spinehx/attachments/RegionAttachment.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_LINE(211)
	return this->scaleY;
}


HX_DEFINE_DYNAMIC_FUNC0(RegionAttachment_obj,getScaleY,return )

Void RegionAttachment_obj::setScaleX( Float scaleX){
{
		HX_STACK_PUSH("RegionAttachment::setScaleX","spinehx/attachments/RegionAttachment.hx",207);
		HX_STACK_THIS(this);
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_LINE(207)
		this->scaleX = scaleX;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegionAttachment_obj,setScaleX,(void))

Float RegionAttachment_obj::getScaleX( ){
	HX_STACK_PUSH("RegionAttachment::getScaleX","spinehx/attachments/RegionAttachment.hx",203);
	HX_STACK_THIS(this);
	HX_STACK_LINE(203)
	return this->scaleX;
}


HX_DEFINE_DYNAMIC_FUNC0(RegionAttachment_obj,getScaleX,return )

Void RegionAttachment_obj::setY( Float y){
{
		HX_STACK_PUSH("RegionAttachment::setY","spinehx/attachments/RegionAttachment.hx",199);
		HX_STACK_THIS(this);
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(199)
		this->y = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegionAttachment_obj,setY,(void))

Float RegionAttachment_obj::getY( ){
	HX_STACK_PUSH("RegionAttachment::getY","spinehx/attachments/RegionAttachment.hx",195);
	HX_STACK_THIS(this);
	HX_STACK_LINE(195)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(RegionAttachment_obj,getY,return )

Void RegionAttachment_obj::setX( Float x){
{
		HX_STACK_PUSH("RegionAttachment::setX","spinehx/attachments/RegionAttachment.hx",191);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(191)
		this->x = x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegionAttachment_obj,setX,(void))

Float RegionAttachment_obj::getX( ){
	HX_STACK_PUSH("RegionAttachment::getX","spinehx/attachments/RegionAttachment.hx",187);
	HX_STACK_THIS(this);
	HX_STACK_LINE(187)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(RegionAttachment_obj,getX,return )

Array< Float > RegionAttachment_obj::getVertices( ){
	HX_STACK_PUSH("RegionAttachment::getVertices","spinehx/attachments/RegionAttachment.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_LINE(183)
	return this->vertices;
}


HX_DEFINE_DYNAMIC_FUNC0(RegionAttachment_obj,getVertices,return )

Void RegionAttachment_obj::updateVertices( ::spinehx::Slot slot){
{
		HX_STACK_PUSH("RegionAttachment::updateVertices","spinehx/attachments/RegionAttachment.hx",152);
		HX_STACK_THIS(this);
		HX_STACK_ARG(slot,"slot");
		HX_STACK_LINE(153)
		::spinehx::Skeleton skeleton = slot->getSkeleton();		HX_STACK_VAR(skeleton,"skeleton");
		HX_STACK_LINE(154)
		::spinehx::Color skeletonColor = skeleton->getColor();		HX_STACK_VAR(skeletonColor,"skeletonColor");
		HX_STACK_LINE(155)
		::spinehx::Color slotColor = slot->getColor();		HX_STACK_VAR(slotColor,"slotColor");
		HX_STACK_LINE(156)
		Float color = ::spinehx::attachments::NumberUtils_obj::intToFloatColor((int((int((int((int(::Math_obj::floor((((int)255 * skeletonColor->a) * slotColor->a))) << int((int)24))) | int((int(::Math_obj::floor((((int)255 * skeletonColor->b) * slotColor->b))) << int((int)16))))) | int((int(::Math_obj::floor((((int)255 * skeletonColor->g) * slotColor->g))) << int((int)8))))) | int(::Math_obj::floor((((int)255 * skeletonColor->r) * slotColor->r)))));		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(161)
		this->vertices[(int)2] = color;
		HX_STACK_LINE(162)
		this->vertices[(int)7] = color;
		HX_STACK_LINE(163)
		this->vertices[(int)12] = color;
		HX_STACK_LINE(164)
		this->vertices[(int)17] = color;
		HX_STACK_LINE(166)
		::spinehx::Bone bone = slot->getBone();		HX_STACK_VAR(bone,"bone");
		HX_STACK_LINE(167)
		Float x = (bone->getWorldX() + skeleton->getX());		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(168)
		Float y = (bone->getWorldY() + skeleton->getY());		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(169)
		Float m00 = bone->getM00();		HX_STACK_VAR(m00,"m00");
		HX_STACK_LINE(170)
		Float m01 = bone->getM01();		HX_STACK_VAR(m01,"m01");
		HX_STACK_LINE(171)
		Float m10 = bone->getM10();		HX_STACK_VAR(m10,"m10");
		HX_STACK_LINE(172)
		Float m11 = bone->getM11();		HX_STACK_VAR(m11,"m11");
		HX_STACK_LINE(173)
		this->vertices[(int)0] = (((this->offset->__get((int)0) * m00) + (this->offset->__get((int)1) * m01)) + x);
		HX_STACK_LINE(174)
		this->vertices[(int)1] = (((this->offset->__get((int)0) * m10) + (this->offset->__get((int)1) * m11)) + y);
		HX_STACK_LINE(175)
		this->vertices[(int)5] = (((this->offset->__get((int)2) * m00) + (this->offset->__get((int)3) * m01)) + x);
		HX_STACK_LINE(176)
		this->vertices[(int)6] = (((this->offset->__get((int)2) * m10) + (this->offset->__get((int)3) * m11)) + y);
		HX_STACK_LINE(177)
		this->vertices[(int)10] = (((this->offset->__get((int)4) * m00) + (this->offset->__get((int)5) * m01)) + x);
		HX_STACK_LINE(178)
		this->vertices[(int)11] = (((this->offset->__get((int)4) * m10) + (this->offset->__get((int)5) * m11)) + y);
		HX_STACK_LINE(179)
		this->vertices[(int)15] = (((this->offset->__get((int)6) * m00) + (this->offset->__get((int)7) * m01)) + x);
		HX_STACK_LINE(180)
		this->vertices[(int)16] = (((this->offset->__get((int)6) * m10) + (this->offset->__get((int)7) * m11)) + y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegionAttachment_obj,updateVertices,(void))

::spinehx::atlas::TextureRegion RegionAttachment_obj::getRegion( ){
	HX_STACK_PUSH("RegionAttachment::getRegion","spinehx/attachments/RegionAttachment.hx",147);
	HX_STACK_THIS(this);
	HX_STACK_LINE(148)
	if (((this->region == null()))){
		HX_STACK_LINE(148)
		hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Region has not been set: ") + ::Std_obj::string(hx::ObjectPtr<OBJ_>(this)))));
	}
	HX_STACK_LINE(149)
	return this->region;
}


HX_DEFINE_DYNAMIC_FUNC0(RegionAttachment_obj,getRegion,return )

Void RegionAttachment_obj::setRegion( ::spinehx::atlas::TextureRegion region){
{
		HX_STACK_PUSH("RegionAttachment::setRegion","spinehx/attachments/RegionAttachment.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_ARG(region,"region");
		HX_STACK_LINE(123)
		if (((region == null()))){
			HX_STACK_LINE(123)
			hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("region cannot be null.")));
		}
		HX_STACK_LINE(124)
		this->region = region;
		HX_STACK_LINE(125)
		if (((bool(::Std_obj::is(region,hx::ClassOf< ::spinehx::atlas::AtlasRegion >())) && bool((hx::TCast< spinehx::atlas::AtlasRegion >::cast(region))->rotate)))){
			HX_STACK_LINE(126)
			this->vertices[(int)8] = region->getU();
			HX_STACK_LINE(127)
			this->vertices[(int)9] = region->getV2();
			HX_STACK_LINE(128)
			this->vertices[(int)13] = region->getU();
			HX_STACK_LINE(129)
			this->vertices[(int)14] = region->getV();
			HX_STACK_LINE(130)
			this->vertices[(int)18] = region->getU2();
			HX_STACK_LINE(131)
			this->vertices[(int)19] = region->getV();
			HX_STACK_LINE(132)
			this->vertices[(int)3] = region->getU2();
			HX_STACK_LINE(133)
			this->vertices[(int)4] = region->getV2();
		}
		else{
			HX_STACK_LINE(135)
			this->vertices[(int)3] = region->getU();
			HX_STACK_LINE(136)
			this->vertices[(int)4] = region->getV2();
			HX_STACK_LINE(137)
			this->vertices[(int)8] = region->getU();
			HX_STACK_LINE(138)
			this->vertices[(int)9] = region->getV();
			HX_STACK_LINE(139)
			this->vertices[(int)13] = region->getU2();
			HX_STACK_LINE(140)
			this->vertices[(int)14] = region->getV();
			HX_STACK_LINE(141)
			this->vertices[(int)18] = region->getU2();
			HX_STACK_LINE(142)
			this->vertices[(int)19] = region->getV2();
		}
		HX_STACK_LINE(144)
		this->updateOffset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RegionAttachment_obj,setRegion,(void))

Void RegionAttachment_obj::updateOffset( ){
{
		HX_STACK_PUSH("RegionAttachment::updateOffset","spinehx/attachments/RegionAttachment.hx",72);
		HX_STACK_THIS(this);
		HX_STACK_LINE(73)
		Float width = this->getWidth();		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(74)
		Float height = this->getHeight();		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(75)
		Float localX2 = (Float(width) / Float((int)2));		HX_STACK_VAR(localX2,"localX2");
		HX_STACK_LINE(76)
		Float localY2 = (Float(height) / Float((int)2));		HX_STACK_VAR(localY2,"localY2");
		HX_STACK_LINE(77)
		Float localX = -(localX2);		HX_STACK_VAR(localX,"localX");
		HX_STACK_LINE(78)
		Float localY = -(localY2);		HX_STACK_VAR(localY,"localY");
		HX_STACK_LINE(79)
		if ((::Std_obj::is(this->region,hx::ClassOf< ::spinehx::atlas::AtlasRegion >()))){
			HX_STACK_LINE(80)
			::spinehx::atlas::AtlasRegion region = hx::TCast< spinehx::atlas::AtlasRegion >::cast(this->region);		HX_STACK_VAR(region,"region");
			HX_STACK_LINE(81)
			if ((region->rotate)){
				HX_STACK_LINE(82)
				hx::AddEq(localX,((Float(region->offsetX) / Float(region->originalWidth)) * height));
				HX_STACK_LINE(83)
				hx::AddEq(localY,((Float(region->offsetY) / Float(region->originalHeight)) * width));
				HX_STACK_LINE(84)
				hx::SubEq(localX2,((Float((((region->originalWidth - region->offsetX) - region->packedHeight))) / Float(region->originalWidth)) * height));
				HX_STACK_LINE(85)
				hx::SubEq(localY2,((Float((((region->originalHeight - region->offsetY) - region->packedWidth))) / Float(region->originalHeight)) * width));
			}
			else{
				HX_STACK_LINE(87)
				hx::AddEq(localX,((Float(region->offsetX) / Float(region->originalWidth)) * width));
				HX_STACK_LINE(88)
				hx::AddEq(localY,((Float(region->offsetY) / Float(region->originalHeight)) * height));
				HX_STACK_LINE(89)
				hx::SubEq(localX2,((Float((((region->originalWidth - region->offsetX) - region->packedWidth))) / Float(region->originalWidth)) * width));
				HX_STACK_LINE(90)
				hx::SubEq(localY2,((Float((((region->originalHeight - region->offsetY) - region->packedHeight))) / Float(region->originalHeight)) * height));
			}
		}
		HX_STACK_LINE(93)
		Float scaleX = this->getScaleX();		HX_STACK_VAR(scaleX,"scaleX");
		HX_STACK_LINE(94)
		Float scaleY = this->getScaleY();		HX_STACK_VAR(scaleY,"scaleY");
		HX_STACK_LINE(95)
		hx::MultEq(localX,scaleX);
		HX_STACK_LINE(96)
		hx::MultEq(localY,scaleY);
		HX_STACK_LINE(97)
		hx::MultEq(localX2,scaleX);
		HX_STACK_LINE(98)
		hx::MultEq(localY2,scaleY);
		HX_STACK_LINE(99)
		Float rotation = ((Float(::Math_obj::PI) / Float((int)180)) * this->getRotation());		HX_STACK_VAR(rotation,"rotation");
		HX_STACK_LINE(100)
		Float cos = ::Math_obj::cos(rotation);		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(101)
		Float sin = ::Math_obj::sin(rotation);		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(102)
		Float x = this->getX();		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(103)
		Float y = this->getY();		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(104)
		Float localXCos = ((localX * cos) + x);		HX_STACK_VAR(localXCos,"localXCos");
		HX_STACK_LINE(105)
		Float localXSin = (localX * sin);		HX_STACK_VAR(localXSin,"localXSin");
		HX_STACK_LINE(106)
		Float localYCos = ((localY * cos) + y);		HX_STACK_VAR(localYCos,"localYCos");
		HX_STACK_LINE(107)
		Float localYSin = (localY * sin);		HX_STACK_VAR(localYSin,"localYSin");
		HX_STACK_LINE(108)
		Float localX2Cos = ((localX2 * cos) + x);		HX_STACK_VAR(localX2Cos,"localX2Cos");
		HX_STACK_LINE(109)
		Float localX2Sin = (localX2 * sin);		HX_STACK_VAR(localX2Sin,"localX2Sin");
		HX_STACK_LINE(110)
		Float localY2Cos = ((localY2 * cos) + y);		HX_STACK_VAR(localY2Cos,"localY2Cos");
		HX_STACK_LINE(111)
		Float localY2Sin = (localY2 * sin);		HX_STACK_VAR(localY2Sin,"localY2Sin");
		HX_STACK_LINE(112)
		this->offset[(int)0] = (localXCos - localYSin);
		HX_STACK_LINE(113)
		this->offset[(int)1] = (localYCos + localXSin);
		HX_STACK_LINE(114)
		this->offset[(int)2] = (localXCos - localY2Sin);
		HX_STACK_LINE(115)
		this->offset[(int)3] = (localY2Cos + localXSin);
		HX_STACK_LINE(116)
		this->offset[(int)4] = (localX2Cos - localY2Sin);
		HX_STACK_LINE(117)
		this->offset[(int)5] = (localY2Cos + localX2Sin);
		HX_STACK_LINE(118)
		this->offset[(int)6] = (localX2Cos - localYSin);
		HX_STACK_LINE(119)
		this->offset[(int)7] = (localYCos + localX2Sin);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RegionAttachment_obj,updateOffset,(void))


RegionAttachment_obj::RegionAttachment_obj()
{
}

void RegionAttachment_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegionAttachment);
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(region,"region");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RegionAttachment_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(region,"region");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic RegionAttachment_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		if (HX_FIELD_EQ(inName,"getY") ) { return getY_dyn(); }
		if (HX_FIELD_EQ(inName,"setX") ) { return setX_dyn(); }
		if (HX_FIELD_EQ(inName,"getX") ) { return getX_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setWidth") ) { return setWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"vertices") ) { return vertices; }
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setHeight") ) { return setHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleY") ) { return setScaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"getScaleY") ) { return getScaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleX") ) { return setScaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"getScaleX") ) { return getScaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegion") ) { return getRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"setRegion") ) { return setRegion_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"getRotation") ) { return getRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertices") ) { return getVertices_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateOffset") ) { return updateOffset_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateVertices") ) { return updateVertices_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RegionAttachment_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::spinehx::atlas::TextureRegion >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegionAttachment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("vertices"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("region"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("setHeight"),
	HX_CSTRING("getHeight"),
	HX_CSTRING("setWidth"),
	HX_CSTRING("getWidth"),
	HX_CSTRING("setRotation"),
	HX_CSTRING("getRotation"),
	HX_CSTRING("setScaleY"),
	HX_CSTRING("getScaleY"),
	HX_CSTRING("setScaleX"),
	HX_CSTRING("getScaleX"),
	HX_CSTRING("setY"),
	HX_CSTRING("getY"),
	HX_CSTRING("setX"),
	HX_CSTRING("getX"),
	HX_CSTRING("getVertices"),
	HX_CSTRING("updateVertices"),
	HX_CSTRING("getRegion"),
	HX_CSTRING("setRegion"),
	HX_CSTRING("updateOffset"),
	HX_CSTRING("offset"),
	HX_CSTRING("vertices"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("rotation"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("region"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegionAttachment_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegionAttachment_obj::__mClass,"__mClass");
};

Class RegionAttachment_obj::__mClass;

void RegionAttachment_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.attachments.RegionAttachment"), hx::TCanCast< RegionAttachment_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void RegionAttachment_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace attachments
