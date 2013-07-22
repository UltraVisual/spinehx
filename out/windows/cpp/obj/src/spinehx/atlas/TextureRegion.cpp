#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_atlas_Texture
#include <spinehx/atlas/Texture.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureRegion
#include <spinehx/atlas/TextureRegion.h>
#endif
namespace spinehx{
namespace atlas{

Void TextureRegion_obj::__construct()
{
HX_STACK_PUSH("TextureRegion::new","spinehx/atlas/TextureRegion.hx",37);
{
}
;
	return null();
}

TextureRegion_obj::~TextureRegion_obj() { }

Dynamic TextureRegion_obj::__CreateEmpty() { return  new TextureRegion_obj; }
hx::ObjectPtr< TextureRegion_obj > TextureRegion_obj::__new()
{  hx::ObjectPtr< TextureRegion_obj > result = new TextureRegion_obj();
	result->__construct();
	return result;}

Dynamic TextureRegion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureRegion_obj > result = new TextureRegion_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > TextureRegion_obj::split( int tileWidth,int tileHeight){
	HX_STACK_PUSH("TextureRegion::split","spinehx/atlas/TextureRegion.hx",250);
	HX_STACK_THIS(this);
	HX_STACK_ARG(tileWidth,"tileWidth");
	HX_STACK_ARG(tileHeight,"tileHeight");
	HX_STACK_LINE(251)
	int x = this->getRegionX();		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(252)
	int y = this->getRegionY();		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(253)
	int width = this->regionWidth;		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(254)
	int height = this->regionHeight;		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(256)
	int rows = ::Math_obj::floor((Float(height) / Float(tileHeight)));		HX_STACK_VAR(rows,"rows");
	HX_STACK_LINE(257)
	int cols = ::Math_obj::floor((Float(width) / Float(tileWidth)));		HX_STACK_VAR(cols,"cols");
	HX_STACK_LINE(259)
	int startX = x;		HX_STACK_VAR(startX,"startX");
	HX_STACK_LINE(260)
	Array< ::Dynamic > tiles = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tiles,"tiles");
	HX_STACK_LINE(261)
	{
		HX_STACK_LINE(261)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(261)
		while(((_g < rows))){
			HX_STACK_LINE(261)
			int rowIdx = (_g)++;		HX_STACK_VAR(rowIdx,"rowIdx");
			HX_STACK_LINE(262)
			Array< ::Dynamic > row = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(263)
			tiles[rowIdx] = row;
			HX_STACK_LINE(264)
			x = startX;
			HX_STACK_LINE(265)
			{
				HX_STACK_LINE(265)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(265)
				while(((_g1 < cols))){
					HX_STACK_LINE(265)
					int colIdx = (_g1)++;		HX_STACK_VAR(colIdx,"colIdx");
					HX_STACK_LINE(266)
					row[colIdx] = ::spinehx::atlas::TextureRegion_obj::fromTextureXYWH(this->texture,x,y,tileWidth,tileHeight);
					HX_STACK_LINE(267)
					hx::AddEq(x,tileWidth);
				}
			}
			HX_STACK_LINE(269)
			hx::AddEq(y,tileHeight);
		}
	}
	HX_STACK_LINE(272)
	return tiles;
}


HX_DEFINE_DYNAMIC_FUNC2(TextureRegion_obj,split,return )

Void TextureRegion_obj::scroll( Float xAmount,Float yAmount){
{
		HX_STACK_PUSH("TextureRegion::scroll","spinehx/atlas/TextureRegion.hx",230);
		HX_STACK_THIS(this);
		HX_STACK_ARG(xAmount,"xAmount");
		HX_STACK_ARG(yAmount,"yAmount");
		HX_STACK_LINE(231)
		if (((xAmount != (int)0))){
			HX_STACK_LINE(232)
			Float width = (((this->u2 - this->u)) * this->texture->getWidth());		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(233)
			this->u = hx::Mod(((this->u + xAmount)),(int)1);
			HX_STACK_LINE(234)
			this->u2 = (this->u + (Float(width) / Float(this->texture->getWidth())));
		}
		HX_STACK_LINE(236)
		if (((yAmount != (int)0))){
			HX_STACK_LINE(237)
			Float height = (((this->v2 - this->v)) * this->texture->getHeight());		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(238)
			this->v = hx::Mod(((this->v + yAmount)),(int)1);
			HX_STACK_LINE(239)
			this->v2 = (this->v + (Float(height) / Float(this->texture->getHeight())));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextureRegion_obj,scroll,(void))

bool TextureRegion_obj::isFlipY( ){
	HX_STACK_PUSH("TextureRegion::isFlipY","spinehx/atlas/TextureRegion.hx",222);
	HX_STACK_THIS(this);
	HX_STACK_LINE(222)
	return (this->v > this->v2);
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,isFlipY,return )

bool TextureRegion_obj::isFlipX( ){
	HX_STACK_PUSH("TextureRegion::isFlipX","spinehx/atlas/TextureRegion.hx",218);
	HX_STACK_THIS(this);
	HX_STACK_LINE(218)
	return (this->u > this->u2);
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,isFlipX,return )

Void TextureRegion_obj::flip( bool x,bool y){
{
		HX_STACK_PUSH("TextureRegion::flip","spinehx/atlas/TextureRegion.hx",205);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(206)
		if ((x)){
			HX_STACK_LINE(207)
			Float temp = this->u;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(208)
			this->u = this->u2;
			HX_STACK_LINE(209)
			this->u2 = temp;
		}
		HX_STACK_LINE(211)
		if ((y)){
			HX_STACK_LINE(212)
			Float temp = this->v;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(213)
			this->v = this->v2;
			HX_STACK_LINE(214)
			this->v2 = temp;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextureRegion_obj,flip,(void))

Void TextureRegion_obj::setRegionHeight( int height){
{
		HX_STACK_PUSH("TextureRegion::setRegionHeight","spinehx/atlas/TextureRegion.hx",201);
		HX_STACK_THIS(this);
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(201)
		this->setV2((this->v + (Float(hx::TCast< Float >::cast(height)) / Float(this->texture->getHeight()))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureRegion_obj,setRegionHeight,(void))

int TextureRegion_obj::getRegionHeight( ){
	HX_STACK_PUSH("TextureRegion::getRegionHeight","spinehx/atlas/TextureRegion.hx",197);
	HX_STACK_THIS(this);
	HX_STACK_LINE(197)
	return this->regionHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,getRegionHeight,return )

Void TextureRegion_obj::setRegionWidth( int width){
{
		HX_STACK_PUSH("TextureRegion::setRegionWidth","spinehx/atlas/TextureRegion.hx",192);
		HX_STACK_THIS(this);
		HX_STACK_ARG(width,"width");
		HX_STACK_LINE(192)
		this->setU2((this->u + (Float(hx::TCast< Float >::cast(width)) / Float(this->texture->getWidth()))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureRegion_obj,setRegionWidth,(void))

int TextureRegion_obj::getRegionWidth( ){
	HX_STACK_PUSH("TextureRegion::getRegionWidth","spinehx/atlas/TextureRegion.hx",188);
	HX_STACK_THIS(this);
	HX_STACK_LINE(188)
	return this->regionWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,getRegionWidth,return )

Void TextureRegion_obj::setRegionY( int y){
{
		HX_STACK_PUSH("TextureRegion::setRegionY","spinehx/atlas/TextureRegion.hx",183);
		HX_STACK_THIS(this);
		HX_STACK_ARG(y,"y");
		HX_STACK_LINE(183)
		this->setV((Float(hx::TCast< Float >::cast(y)) / Float(this->texture->getHeight())));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureRegion_obj,setRegionY,(void))

int TextureRegion_obj::getRegionY( ){
	HX_STACK_PUSH("TextureRegion::getRegionY","spinehx/atlas/TextureRegion.hx",179);
	HX_STACK_THIS(this);
	HX_STACK_LINE(179)
	return ::Math_obj::round((this->v * this->texture->getHeight()));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,getRegionY,return )

Void TextureRegion_obj::setRegionX( int x){
{
		HX_STACK_PUSH("TextureRegion::setRegionX","spinehx/atlas/TextureRegion.hx",175);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_LINE(175)
		this->setU((Float(hx::TCast< Float >::cast(x)) / Float(this->texture->getWidth())));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureRegion_obj,setRegionX,(void))

int TextureRegion_obj::getRegionX( ){
	HX_STACK_PUSH("TextureRegion::getRegionX","spinehx/atlas/TextureRegion.hx",171);
	HX_STACK_THIS(this);
	HX_STACK_LINE(171)
	return ::Math_obj::round((this->u * this->texture->getWidth()));
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,getRegionX,return )

Void TextureRegion_obj::setV2( Float v2){
{
		HX_STACK_PUSH("TextureRegion::setV2","spinehx/atlas/TextureRegion.hx",166);
		HX_STACK_THIS(this);
		HX_STACK_ARG(v2,"v2");
		HX_STACK_LINE(167)
		this->v2 = v2;
		HX_STACK_LINE(168)
		this->regionHeight = ::Math_obj::round((::Math_obj::abs((v2 - this->v)) * this->texture->getHeight()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureRegion_obj,setV2,(void))

Float TextureRegion_obj::getV2( ){
	HX_STACK_PUSH("TextureRegion::getV2","spinehx/atlas/TextureRegion.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_LINE(162)
	return this->v2;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,getV2,return )

Void TextureRegion_obj::setU2( Float u2){
{
		HX_STACK_PUSH("TextureRegion::setU2","spinehx/atlas/TextureRegion.hx",157);
		HX_STACK_THIS(this);
		HX_STACK_ARG(u2,"u2");
		HX_STACK_LINE(158)
		this->u2 = u2;
		HX_STACK_LINE(159)
		this->regionWidth = ::Math_obj::round((::Math_obj::abs((u2 - this->u)) * this->texture->getWidth()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureRegion_obj,setU2,(void))

Float TextureRegion_obj::getU2( ){
	HX_STACK_PUSH("TextureRegion::getU2","spinehx/atlas/TextureRegion.hx",153);
	HX_STACK_THIS(this);
	HX_STACK_LINE(153)
	return this->u2;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,getU2,return )

Void TextureRegion_obj::setV( Float v){
{
		HX_STACK_PUSH("TextureRegion::setV","spinehx/atlas/TextureRegion.hx",148);
		HX_STACK_THIS(this);
		HX_STACK_ARG(v,"v");
		HX_STACK_LINE(149)
		this->v = v;
		HX_STACK_LINE(150)
		this->regionHeight = ::Math_obj::round((::Math_obj::abs((this->v2 - v)) * this->texture->getHeight()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureRegion_obj,setV,(void))

Float TextureRegion_obj::getV( ){
	HX_STACK_PUSH("TextureRegion::getV","spinehx/atlas/TextureRegion.hx",144);
	HX_STACK_THIS(this);
	HX_STACK_LINE(144)
	return this->v;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,getV,return )

Void TextureRegion_obj::setU( Float u){
{
		HX_STACK_PUSH("TextureRegion::setU","spinehx/atlas/TextureRegion.hx",139);
		HX_STACK_THIS(this);
		HX_STACK_ARG(u,"u");
		HX_STACK_LINE(140)
		this->u = u;
		HX_STACK_LINE(141)
		this->regionWidth = ::Math_obj::round((::Math_obj::abs((this->u2 - u)) * this->texture->getWidth()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureRegion_obj,setU,(void))

Float TextureRegion_obj::getU( ){
	HX_STACK_PUSH("TextureRegion::getU","spinehx/atlas/TextureRegion.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_LINE(135)
	return this->u;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,getU,return )

Void TextureRegion_obj::setTexture( ::spinehx::atlas::Texture texture){
{
		HX_STACK_PUSH("TextureRegion::setTexture","spinehx/atlas/TextureRegion.hx",131);
		HX_STACK_THIS(this);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(131)
		this->texture = texture;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureRegion_obj,setTexture,(void))

::spinehx::atlas::Texture TextureRegion_obj::getTexture( ){
	HX_STACK_PUSH("TextureRegion::getTexture","spinehx/atlas/TextureRegion.hx",127);
	HX_STACK_THIS(this);
	HX_STACK_LINE(127)
	return this->texture;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureRegion_obj,getTexture,return )

Void TextureRegion_obj::setRegionRelXYWH( ::spinehx::atlas::TextureRegion region,int x,int y,int width,int height){
{
		HX_STACK_PUSH("TextureRegion::setRegionRelXYWH","spinehx/atlas/TextureRegion.hx",122);
		HX_STACK_THIS(this);
		HX_STACK_ARG(region,"region");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(123)
		this->texture = region->texture;
		HX_STACK_LINE(124)
		this->setRegionXYWH((region->getRegionX() + x),(region->getRegionY() + y),width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(TextureRegion_obj,setRegionRelXYWH,(void))

Void TextureRegion_obj::setRegionCopy( ::spinehx::atlas::TextureRegion region){
{
		HX_STACK_PUSH("TextureRegion::setRegionCopy","spinehx/atlas/TextureRegion.hx",116);
		HX_STACK_THIS(this);
		HX_STACK_ARG(region,"region");
		HX_STACK_LINE(117)
		this->texture = region->texture;
		HX_STACK_LINE(118)
		this->setRegionUV(region->u,region->v,region->u2,region->v2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureRegion_obj,setRegionCopy,(void))

Void TextureRegion_obj::setRegionUV( Float u,Float v,Float u2,Float v2){
{
		HX_STACK_PUSH("TextureRegion::setRegionUV","spinehx/atlas/TextureRegion.hx",106);
		HX_STACK_THIS(this);
		HX_STACK_ARG(u,"u");
		HX_STACK_ARG(v,"v");
		HX_STACK_ARG(u2,"u2");
		HX_STACK_ARG(v2,"v2");
		HX_STACK_LINE(107)
		this->u = u;
		HX_STACK_LINE(108)
		this->v = v;
		HX_STACK_LINE(109)
		this->u2 = u2;
		HX_STACK_LINE(110)
		this->v2 = v2;
		HX_STACK_LINE(111)
		this->regionWidth = ::Math_obj::round((::Math_obj::abs((u2 - u)) * this->texture->getWidth()));
		HX_STACK_LINE(112)
		this->regionHeight = ::Math_obj::round((::Math_obj::abs((v2 - v)) * this->texture->getHeight()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TextureRegion_obj,setRegionUV,(void))

Void TextureRegion_obj::setRegionXYWH( int x,int y,int width,int height){
{
		HX_STACK_PUSH("TextureRegion::setRegionXYWH","spinehx/atlas/TextureRegion.hx",98);
		HX_STACK_THIS(this);
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(99)
		Float invTexWidth = (Float(1.0) / Float(this->texture->getWidth()));		HX_STACK_VAR(invTexWidth,"invTexWidth");
		HX_STACK_LINE(100)
		Float invTexHeight = (Float(1.0) / Float(this->texture->getHeight()));		HX_STACK_VAR(invTexHeight,"invTexHeight");
		HX_STACK_LINE(101)
		this->setRegionUV((x * invTexWidth),(y * invTexHeight),(((x + width)) * invTexWidth),(((y + height)) * invTexHeight));
		HX_STACK_LINE(102)
		this->regionWidth = ::Math_obj::floor(::Math_obj::abs(width));
		HX_STACK_LINE(103)
		this->regionHeight = ::Math_obj::floor(::Math_obj::abs(height));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TextureRegion_obj,setRegionXYWH,(void))

Void TextureRegion_obj::setRegionTex( ::spinehx::atlas::Texture texture){
{
		HX_STACK_PUSH("TextureRegion::setRegionTex","spinehx/atlas/TextureRegion.hx",91);
		HX_STACK_THIS(this);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(92)
		this->texture = texture;
		HX_STACK_LINE(93)
		this->setRegionXYWH((int)0,(int)0,texture->getWidth(),texture->getHeight());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureRegion_obj,setRegionTex,(void))

::spinehx::atlas::TextureRegion TextureRegion_obj::fromTexture( ::spinehx::atlas::Texture texture){
	HX_STACK_PUSH("TextureRegion::fromTexture","spinehx/atlas/TextureRegion.hx",41);
	HX_STACK_ARG(texture,"texture");
	HX_STACK_LINE(42)
	if (((texture == null()))){
		HX_STACK_LINE(42)
		hx::Throw (::spinehx::Exception_obj::__new(HX_CSTRING("texture cannot be null.")));
	}
	HX_STACK_LINE(43)
	::spinehx::atlas::TextureRegion t = ::spinehx::atlas::TextureRegion_obj::__new();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(44)
	t->texture = texture;
	HX_STACK_LINE(45)
	t->setRegionXYWH((int)0,(int)0,texture->getWidth(),texture->getHeight());
	HX_STACK_LINE(46)
	return t;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureRegion_obj,fromTexture,return )

::spinehx::atlas::TextureRegion TextureRegion_obj::fromTextureWH( ::spinehx::atlas::Texture texture,int width,int height){
	HX_STACK_PUSH("TextureRegion::fromTextureWH","spinehx/atlas/TextureRegion.hx",51);
	HX_STACK_ARG(texture,"texture");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(52)
	::spinehx::atlas::TextureRegion t = ::spinehx::atlas::TextureRegion_obj::__new();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(53)
	t->texture = texture;
	HX_STACK_LINE(54)
	t->setRegionXYWH((int)0,(int)0,width,height);
	HX_STACK_LINE(55)
	return t;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TextureRegion_obj,fromTextureWH,return )

::spinehx::atlas::TextureRegion TextureRegion_obj::fromTextureXYWH( ::spinehx::atlas::Texture texture,int x,int y,int width,int height){
	HX_STACK_PUSH("TextureRegion::fromTextureXYWH","spinehx/atlas/TextureRegion.hx",60);
	HX_STACK_ARG(texture,"texture");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(61)
	::spinehx::atlas::TextureRegion t = ::spinehx::atlas::TextureRegion_obj::__new();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(62)
	t->texture = texture;
	HX_STACK_LINE(63)
	t->setRegionXYWH(x,y,width,height);
	HX_STACK_LINE(64)
	return t;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(TextureRegion_obj,fromTextureXYWH,return )

::spinehx::atlas::TextureRegion TextureRegion_obj::fromTextureUVUV( ::spinehx::atlas::Texture texture,Float u,Float v,Float u2,Float v2){
	HX_STACK_PUSH("TextureRegion::fromTextureUVUV","spinehx/atlas/TextureRegion.hx",67);
	HX_STACK_ARG(texture,"texture");
	HX_STACK_ARG(u,"u");
	HX_STACK_ARG(v,"v");
	HX_STACK_ARG(u2,"u2");
	HX_STACK_ARG(v2,"v2");
	HX_STACK_LINE(68)
	::spinehx::atlas::TextureRegion t = ::spinehx::atlas::TextureRegion_obj::__new();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(69)
	t->texture = texture;
	HX_STACK_LINE(70)
	t->setRegionUV(u,v,u2,v2);
	HX_STACK_LINE(71)
	return t;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(TextureRegion_obj,fromTextureUVUV,return )

::spinehx::atlas::TextureRegion TextureRegion_obj::copy( ::spinehx::atlas::TextureRegion region){
	HX_STACK_PUSH("TextureRegion::copy","spinehx/atlas/TextureRegion.hx",75);
	HX_STACK_ARG(region,"region");
	HX_STACK_LINE(76)
	::spinehx::atlas::TextureRegion t = ::spinehx::atlas::TextureRegion_obj::__new();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(77)
	t->setRegionCopy(region);
	HX_STACK_LINE(78)
	return t;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextureRegion_obj,copy,return )

::spinehx::atlas::TextureRegion TextureRegion_obj::createRelXYWH( ::spinehx::atlas::TextureRegion region,int x,int y,int width,int height){
	HX_STACK_PUSH("TextureRegion::createRelXYWH","spinehx/atlas/TextureRegion.hx",84);
	HX_STACK_ARG(region,"region");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(85)
	::spinehx::atlas::TextureRegion t = ::spinehx::atlas::TextureRegion_obj::__new();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(86)
	t->setRegionRelXYWH(region,x,y,width,height);
	HX_STACK_LINE(87)
	return t;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(TextureRegion_obj,createRelXYWH,return )

Array< ::Dynamic > TextureRegion_obj::splitTex( ::spinehx::atlas::Texture texture,int tileWidth,int tileHeight){
	HX_STACK_PUSH("TextureRegion::splitTex","spinehx/atlas/TextureRegion.hx",283);
	HX_STACK_ARG(texture,"texture");
	HX_STACK_ARG(tileWidth,"tileWidth");
	HX_STACK_ARG(tileHeight,"tileHeight");
	HX_STACK_LINE(284)
	::spinehx::atlas::TextureRegion region = ::spinehx::atlas::TextureRegion_obj::fromTexture(texture);		HX_STACK_VAR(region,"region");
	HX_STACK_LINE(285)
	return region->split(tileWidth,tileHeight);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TextureRegion_obj,splitTex,return )


TextureRegion_obj::TextureRegion_obj()
{
}

void TextureRegion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureRegion);
	HX_MARK_MEMBER_NAME(regionHeight,"regionHeight");
	HX_MARK_MEMBER_NAME(regionWidth,"regionWidth");
	HX_MARK_MEMBER_NAME(v2,"v2");
	HX_MARK_MEMBER_NAME(u2,"u2");
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_MEMBER_NAME(u,"u");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_END_CLASS();
}

void TextureRegion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(regionHeight,"regionHeight");
	HX_VISIT_MEMBER_NAME(regionWidth,"regionWidth");
	HX_VISIT_MEMBER_NAME(v2,"v2");
	HX_VISIT_MEMBER_NAME(u2,"u2");
	HX_VISIT_MEMBER_NAME(v,"v");
	HX_VISIT_MEMBER_NAME(u,"u");
	HX_VISIT_MEMBER_NAME(texture,"texture");
}

Dynamic TextureRegion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { return v; }
		if (HX_FIELD_EQ(inName,"u") ) { return u; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"v2") ) { return v2; }
		if (HX_FIELD_EQ(inName,"u2") ) { return u2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		if (HX_FIELD_EQ(inName,"flip") ) { return flip_dyn(); }
		if (HX_FIELD_EQ(inName,"setV") ) { return setV_dyn(); }
		if (HX_FIELD_EQ(inName,"getV") ) { return getV_dyn(); }
		if (HX_FIELD_EQ(inName,"setU") ) { return setU_dyn(); }
		if (HX_FIELD_EQ(inName,"getU") ) { return getU_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"split") ) { return split_dyn(); }
		if (HX_FIELD_EQ(inName,"setV2") ) { return setV2_dyn(); }
		if (HX_FIELD_EQ(inName,"getV2") ) { return getV2_dyn(); }
		if (HX_FIELD_EQ(inName,"setU2") ) { return setU2_dyn(); }
		if (HX_FIELD_EQ(inName,"getU2") ) { return getU2_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isFlipY") ) { return isFlipY_dyn(); }
		if (HX_FIELD_EQ(inName,"isFlipX") ) { return isFlipX_dyn(); }
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"splitTex") ) { return splitTex_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setRegionY") ) { return setRegionY_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegionY") ) { return getRegionY_dyn(); }
		if (HX_FIELD_EQ(inName,"setRegionX") ) { return setRegionX_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegionX") ) { return getRegionX_dyn(); }
		if (HX_FIELD_EQ(inName,"setTexture") ) { return setTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromTexture") ) { return fromTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"setRegionUV") ) { return setRegionUV_dyn(); }
		if (HX_FIELD_EQ(inName,"regionWidth") ) { return regionWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setRegionTex") ) { return setRegionTex_dyn(); }
		if (HX_FIELD_EQ(inName,"regionHeight") ) { return regionHeight; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromTextureWH") ) { return fromTextureWH_dyn(); }
		if (HX_FIELD_EQ(inName,"createRelXYWH") ) { return createRelXYWH_dyn(); }
		if (HX_FIELD_EQ(inName,"setRegionCopy") ) { return setRegionCopy_dyn(); }
		if (HX_FIELD_EQ(inName,"setRegionXYWH") ) { return setRegionXYWH_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setRegionWidth") ) { return setRegionWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegionWidth") ) { return getRegionWidth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromTextureXYWH") ) { return fromTextureXYWH_dyn(); }
		if (HX_FIELD_EQ(inName,"fromTextureUVUV") ) { return fromTextureUVUV_dyn(); }
		if (HX_FIELD_EQ(inName,"setRegionHeight") ) { return setRegionHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegionHeight") ) { return getRegionHeight_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setRegionRelXYWH") ) { return setRegionRelXYWH_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureRegion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"u") ) { u=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"v2") ) { v2=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"u2") ) { u2=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::spinehx::atlas::Texture >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"regionWidth") ) { regionWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"regionHeight") ) { regionHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureRegion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("regionHeight"));
	outFields->push(HX_CSTRING("regionWidth"));
	outFields->push(HX_CSTRING("v2"));
	outFields->push(HX_CSTRING("u2"));
	outFields->push(HX_CSTRING("v"));
	outFields->push(HX_CSTRING("u"));
	outFields->push(HX_CSTRING("texture"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromTexture"),
	HX_CSTRING("fromTextureWH"),
	HX_CSTRING("fromTextureXYWH"),
	HX_CSTRING("fromTextureUVUV"),
	HX_CSTRING("copy"),
	HX_CSTRING("createRelXYWH"),
	HX_CSTRING("splitTex"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("split"),
	HX_CSTRING("scroll"),
	HX_CSTRING("isFlipY"),
	HX_CSTRING("isFlipX"),
	HX_CSTRING("flip"),
	HX_CSTRING("setRegionHeight"),
	HX_CSTRING("getRegionHeight"),
	HX_CSTRING("setRegionWidth"),
	HX_CSTRING("getRegionWidth"),
	HX_CSTRING("setRegionY"),
	HX_CSTRING("getRegionY"),
	HX_CSTRING("setRegionX"),
	HX_CSTRING("getRegionX"),
	HX_CSTRING("setV2"),
	HX_CSTRING("getV2"),
	HX_CSTRING("setU2"),
	HX_CSTRING("getU2"),
	HX_CSTRING("setV"),
	HX_CSTRING("getV"),
	HX_CSTRING("setU"),
	HX_CSTRING("getU"),
	HX_CSTRING("setTexture"),
	HX_CSTRING("getTexture"),
	HX_CSTRING("setRegionRelXYWH"),
	HX_CSTRING("setRegionCopy"),
	HX_CSTRING("setRegionUV"),
	HX_CSTRING("setRegionXYWH"),
	HX_CSTRING("setRegionTex"),
	HX_CSTRING("regionHeight"),
	HX_CSTRING("regionWidth"),
	HX_CSTRING("v2"),
	HX_CSTRING("u2"),
	HX_CSTRING("v"),
	HX_CSTRING("u"),
	HX_CSTRING("texture"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureRegion_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureRegion_obj::__mClass,"__mClass");
};

Class TextureRegion_obj::__mClass;

void TextureRegion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.atlas.TextureRegion"), hx::TCanCast< TextureRegion_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TextureRegion_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace atlas
