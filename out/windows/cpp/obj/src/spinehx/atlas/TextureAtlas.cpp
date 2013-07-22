#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_spinehx_atlas_AtlasRegion
#include <spinehx/atlas/AtlasRegion.h>
#endif
#ifndef INCLUDED_spinehx_atlas_Page
#include <spinehx/atlas/Page.h>
#endif
#ifndef INCLUDED_spinehx_atlas_Region
#include <spinehx/atlas/Region.h>
#endif
#ifndef INCLUDED_spinehx_atlas_Texture
#include <spinehx/atlas/Texture.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureAtlas
#include <spinehx/atlas/TextureAtlas.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureAtlasData
#include <spinehx/atlas/TextureAtlasData.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureLoader
#include <spinehx/atlas/TextureLoader.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureRegion
#include <spinehx/atlas/TextureRegion.h>
#endif
namespace spinehx{
namespace atlas{

Void TextureAtlas_obj::__construct(::spinehx::atlas::TextureAtlasData data,::spinehx::atlas::TextureLoader textureLoader)
{
HX_STACK_PUSH("TextureAtlas::new","spinehx/atlas/TextureAtlas.hx",263);
{
	HX_STACK_LINE(264)
	this->textures = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(265)
	this->regions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(266)
	if (((data != null()))){
		HX_STACK_LINE(266)
		this->load(data,textureLoader);
	}
}
;
	return null();
}

TextureAtlas_obj::~TextureAtlas_obj() { }

Dynamic TextureAtlas_obj::__CreateEmpty() { return  new TextureAtlas_obj; }
hx::ObjectPtr< TextureAtlas_obj > TextureAtlas_obj::__new(::spinehx::atlas::TextureAtlasData data,::spinehx::atlas::TextureLoader textureLoader)
{  hx::ObjectPtr< TextureAtlas_obj > result = new TextureAtlas_obj();
	result->__construct(data,textureLoader);
	return result;}

Dynamic TextureAtlas_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureAtlas_obj > result = new TextureAtlas_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void TextureAtlas_obj::dispose( ){
{
		HX_STACK_PUSH("TextureAtlas::dispose","spinehx/atlas/TextureAtlas.hx",445);
		HX_STACK_THIS(this);
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->textures;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(446)
			while(((_g < _g1->length))){
				HX_STACK_LINE(446)
				::spinehx::atlas::Texture texture = _g1->__get(_g).StaticCast< ::spinehx::atlas::Texture >();		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(446)
				++(_g);
				HX_STACK_LINE(447)
				texture->dispose();
			}
		}
		HX_STACK_LINE(448)
		this->textures = Array_obj< ::Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextureAtlas_obj,dispose,(void))

Array< ::Dynamic > TextureAtlas_obj::getTextures( ){
	HX_STACK_PUSH("TextureAtlas::getTextures","spinehx/atlas/TextureAtlas.hx",439);
	HX_STACK_THIS(this);
	HX_STACK_LINE(439)
	return this->textures;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureAtlas_obj,getTextures,return )

Array< ::Dynamic > TextureAtlas_obj::findRegions( ::String name){
	HX_STACK_PUSH("TextureAtlas::findRegions","spinehx/atlas/TextureAtlas.hx",352);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(353)
	Array< ::Dynamic > matched = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(matched,"matched");
	HX_STACK_LINE(354)
	{
		HX_STACK_LINE(354)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->regions;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(354)
		while(((_g < _g1->length))){
			HX_STACK_LINE(354)
			::spinehx::atlas::AtlasRegion region = _g1->__get(_g).StaticCast< ::spinehx::atlas::AtlasRegion >();		HX_STACK_VAR(region,"region");
			HX_STACK_LINE(354)
			++(_g);
			HX_STACK_LINE(355)
			if (((region->name == name))){
				HX_STACK_LINE(355)
				matched->push(::spinehx::atlas::AtlasRegion_obj::copy(region));
			}
		}
	}
	HX_STACK_LINE(357)
	return matched;
}


HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,findRegions,return )

::spinehx::atlas::AtlasRegion TextureAtlas_obj::findRegionIdx( ::String name,int index){
	HX_STACK_PUSH("TextureAtlas::findRegionIdx","spinehx/atlas/TextureAtlas.hx",342);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(343)
	{
		HX_STACK_LINE(343)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->regions;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(343)
		while(((_g < _g1->length))){
			HX_STACK_LINE(343)
			::spinehx::atlas::AtlasRegion region = _g1->__get(_g).StaticCast< ::spinehx::atlas::AtlasRegion >();		HX_STACK_VAR(region,"region");
			HX_STACK_LINE(343)
			++(_g);
			HX_STACK_LINE(344)
			if (((bool((region->name == name)) && bool((region->index == index))))){
				HX_STACK_LINE(345)
				return region;
			}
		}
	}
	HX_STACK_LINE(347)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextureAtlas_obj,findRegionIdx,return )

::spinehx::atlas::AtlasRegion TextureAtlas_obj::findRegion( ::String name){
	HX_STACK_PUSH("TextureAtlas::findRegion","spinehx/atlas/TextureAtlas.hx",333);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(334)
	{
		HX_STACK_LINE(334)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->regions;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(334)
		while(((_g < _g1->length))){
			HX_STACK_LINE(334)
			::spinehx::atlas::AtlasRegion region = _g1->__get(_g).StaticCast< ::spinehx::atlas::AtlasRegion >();		HX_STACK_VAR(region,"region");
			HX_STACK_LINE(334)
			++(_g);
			HX_STACK_LINE(335)
			if (((region->name == name))){
				HX_STACK_LINE(335)
				return region;
			}
		}
	}
	HX_STACK_LINE(336)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,findRegion,return )

Array< ::Dynamic > TextureAtlas_obj::getRegions( ){
	HX_STACK_PUSH("TextureAtlas::getRegions","spinehx/atlas/TextureAtlas.hx",326);
	HX_STACK_THIS(this);
	HX_STACK_LINE(326)
	return this->regions;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureAtlas_obj,getRegions,return )

::spinehx::atlas::AtlasRegion TextureAtlas_obj::addRegionTex( ::String name,::spinehx::atlas::TextureRegion textureRegion){
	HX_STACK_PUSH("TextureAtlas::addRegionTex","spinehx/atlas/TextureAtlas.hx",320);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(textureRegion,"textureRegion");
	HX_STACK_LINE(320)
	return this->addRegion(name,textureRegion->texture,textureRegion->getRegionX(),textureRegion->getRegionY(),textureRegion->getRegionWidth(),textureRegion->getRegionHeight());
}


HX_DEFINE_DYNAMIC_FUNC2(TextureAtlas_obj,addRegionTex,return )

::spinehx::atlas::AtlasRegion TextureAtlas_obj::addRegion( ::String name,::spinehx::atlas::Texture texture,int x,int y,int width,int height){
	HX_STACK_PUSH("TextureAtlas::addRegion","spinehx/atlas/TextureAtlas.hx",308);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_ARG(texture,"texture");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(309)
	this->addTexture(texture);
	HX_STACK_LINE(310)
	::spinehx::atlas::AtlasRegion region = ::spinehx::atlas::AtlasRegion_obj::create(texture,x,y,width,height);		HX_STACK_VAR(region,"region");
	HX_STACK_LINE(311)
	region->name = name;
	HX_STACK_LINE(312)
	region->originalWidth = width;
	HX_STACK_LINE(313)
	region->originalHeight = height;
	HX_STACK_LINE(314)
	region->index = (int)-1;
	HX_STACK_LINE(315)
	this->regions->push(region);
	HX_STACK_LINE(316)
	return region;
}


HX_DEFINE_DYNAMIC_FUNC6(TextureAtlas_obj,addRegion,return )

Void TextureAtlas_obj::load( ::spinehx::atlas::TextureAtlasData data,::spinehx::atlas::TextureLoader textureLoader){
{
		HX_STACK_PUSH("TextureAtlas::load","spinehx/atlas/TextureAtlas.hx",271);
		HX_STACK_THIS(this);
		HX_STACK_ARG(data,"data");
		HX_STACK_ARG(textureLoader,"textureLoader");
		HX_STACK_LINE(272)
		::haxe::ds::ObjectMap pageToTexture = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(pageToTexture,"pageToTexture");
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = data->pages;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(273)
			while(((_g < _g1->length))){
				HX_STACK_LINE(273)
				::spinehx::atlas::Page page = _g1->__get(_g).StaticCast< ::spinehx::atlas::Page >();		HX_STACK_VAR(page,"page");
				HX_STACK_LINE(273)
				++(_g);
				HX_STACK_LINE(274)
				::spinehx::atlas::Texture texture = null();		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(275)
				if (((page->texture == null()))){
					HX_STACK_LINE(276)
					texture = textureLoader->loadTexture(page->textureFile,page->format,page->useMipMaps);
					HX_STACK_LINE(277)
					texture->setFilter(page->minFilter,page->magFilter);
					HX_STACK_LINE(278)
					texture->setWrap(page->uWrap,page->vWrap);
				}
				else{
					HX_STACK_LINE(280)
					texture = page->texture;
					HX_STACK_LINE(281)
					texture->setFilter(page->minFilter,page->magFilter);
					HX_STACK_LINE(282)
					texture->setWrap(page->uWrap,page->vWrap);
				}
				HX_STACK_LINE(284)
				this->addTexture(texture);
				HX_STACK_LINE(285)
				pageToTexture->__Internal->set(::__hxcpp_obj_id(page),texture);
			}
		}
		HX_STACK_LINE(288)
		{
			HX_STACK_LINE(288)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = data->regions;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(288)
			while(((_g < _g1->length))){
				HX_STACK_LINE(288)
				::spinehx::atlas::Region region = _g1->__get(_g).StaticCast< ::spinehx::atlas::Region >();		HX_STACK_VAR(region,"region");
				HX_STACK_LINE(288)
				++(_g);
				HX_STACK_LINE(289)
				int width = region->width;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(290)
				int height = region->height;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(291)
				::spinehx::atlas::AtlasRegion atlasRegion = ::spinehx::atlas::AtlasRegion_obj::create(pageToTexture->get(region->page),region->left,region->top,(  ((region->rotate)) ? int(height) : int(width) ),(  ((region->rotate)) ? int(width) : int(height) ));		HX_STACK_VAR(atlasRegion,"atlasRegion");
				HX_STACK_LINE(293)
				atlasRegion->index = region->index;
				HX_STACK_LINE(294)
				atlasRegion->name = region->name;
				HX_STACK_LINE(295)
				atlasRegion->offsetX = region->offsetX;
				HX_STACK_LINE(296)
				atlasRegion->offsetY = region->offsetY;
				HX_STACK_LINE(297)
				atlasRegion->originalHeight = region->originalHeight;
				HX_STACK_LINE(298)
				atlasRegion->originalWidth = region->originalWidth;
				HX_STACK_LINE(299)
				atlasRegion->rotate = region->rotate;
				HX_STACK_LINE(300)
				atlasRegion->splits = region->splits;
				HX_STACK_LINE(301)
				atlasRegion->pads = region->pads;
				HX_STACK_LINE(302)
				if ((region->flip)){
					HX_STACK_LINE(302)
					atlasRegion->flip(false,true);
				}
				HX_STACK_LINE(303)
				this->regions->push(atlasRegion);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextureAtlas_obj,load,(void))

Void TextureAtlas_obj::addTexture( ::spinehx::atlas::Texture texture){
{
		HX_STACK_PUSH("TextureAtlas::addTexture","spinehx/atlas/TextureAtlas.hx",227);
		HX_STACK_THIS(this);
		HX_STACK_ARG(texture,"texture");
		HX_STACK_LINE(227)
		if (((::Lambda_obj::indexOf(this->textures,texture) == (int)-1))){
			HX_STACK_LINE(228)
			this->textures->push(texture);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextureAtlas_obj,addTexture,(void))

::spinehx::atlas::TextureAtlas TextureAtlas_obj::create( ::String packFileData,::String imagesDir,::spinehx::atlas::TextureLoader textureLoader,hx::Null< bool >  __o_flip){
bool flip = __o_flip.Default(false);
	HX_STACK_PUSH("TextureAtlas::create","spinehx/atlas/TextureAtlas.hx",259);
	HX_STACK_ARG(packFileData,"packFileData");
	HX_STACK_ARG(imagesDir,"imagesDir");
	HX_STACK_ARG(textureLoader,"textureLoader");
	HX_STACK_ARG(flip,"flip");
{
		HX_STACK_LINE(259)
		return ::spinehx::atlas::TextureAtlas_obj::__new(::spinehx::atlas::TextureAtlasData_obj::__new(packFileData,imagesDir,flip),textureLoader);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TextureAtlas_obj,create,return )


TextureAtlas_obj::TextureAtlas_obj()
{
}

void TextureAtlas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureAtlas);
	HX_MARK_MEMBER_NAME(regions,"regions");
	HX_MARK_MEMBER_NAME(textures,"textures");
	HX_MARK_END_CLASS();
}

void TextureAtlas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(regions,"regions");
	HX_VISIT_MEMBER_NAME(textures,"textures");
}

Dynamic TextureAtlas_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"regions") ) { return regions; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { return textures; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addRegion") ) { return addRegion_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"findRegion") ) { return findRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"getRegions") ) { return getRegions_dyn(); }
		if (HX_FIELD_EQ(inName,"addTexture") ) { return addTexture_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getTextures") ) { return getTextures_dyn(); }
		if (HX_FIELD_EQ(inName,"findRegions") ) { return findRegions_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addRegionTex") ) { return addRegionTex_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"findRegionIdx") ) { return findRegionIdx_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureAtlas_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"regions") ) { regions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textures") ) { textures=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureAtlas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("regions"));
	outFields->push(HX_CSTRING("textures"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("getTextures"),
	HX_CSTRING("findRegions"),
	HX_CSTRING("findRegionIdx"),
	HX_CSTRING("findRegion"),
	HX_CSTRING("getRegions"),
	HX_CSTRING("addRegionTex"),
	HX_CSTRING("addRegion"),
	HX_CSTRING("load"),
	HX_CSTRING("addTexture"),
	HX_CSTRING("regions"),
	HX_CSTRING("textures"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureAtlas_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureAtlas_obj::__mClass,"__mClass");
};

Class TextureAtlas_obj::__mClass;

void TextureAtlas_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.atlas.TextureAtlas"), hx::TCanCast< TextureAtlas_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TextureAtlas_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace atlas
