#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_StringInput
#include <haxe/io/StringInput.h>
#endif
#ifndef INCLUDED_spinehx_Exception
#include <spinehx/Exception.h>
#endif
#ifndef INCLUDED_spinehx_atlas_Page
#include <spinehx/atlas/Page.h>
#endif
#ifndef INCLUDED_spinehx_atlas_Region
#include <spinehx/atlas/Region.h>
#endif
#ifndef INCLUDED_spinehx_atlas_TextureAtlasData
#include <spinehx/atlas/TextureAtlasData.h>
#endif
namespace spinehx{
namespace atlas{

Void TextureAtlasData_obj::__construct(::String packFileData,::String imagesDir,bool flip)
{
HX_STACK_PUSH("TextureAtlasData::new","spinehx/atlas/TextureAtlas.hx",81);
{
	HX_STACK_LINE(82)
	this->tuple = Array_obj< ::String >::__new().Add(null()).Add(null()).Add(null()).Add(null());
	HX_STACK_LINE(83)
	this->pages = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(84)
	this->regions = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(86)
	::haxe::io::StringInput reader = ::haxe::io::StringInput_obj::__new(packFileData);		HX_STACK_VAR(reader,"reader");
	HX_STACK_LINE(87)
	try{
		HX_STACK_LINE(88)
		::spinehx::atlas::Page pageImage = null();		HX_STACK_VAR(pageImage,"pageImage");
		HX_STACK_LINE(89)
		while((true)){
			HX_STACK_LINE(90)
			::String line = null();		HX_STACK_VAR(line,"line");
			HX_STACK_LINE(91)
			try{
				HX_STACK_LINE(91)
				line = reader->readLine();
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::haxe::io::Eof >() ){
					HX_STACK_BEGIN_CATCH
					::haxe::io::Eof e = __e;{
						HX_STACK_LINE(91)
						break;
					}
				}
				else throw(__e);
			}
			HX_STACK_LINE(92)
			if (((line == null()))){
				HX_STACK_LINE(92)
				break;
			}
			HX_STACK_LINE(93)
			if (((::StringTools_obj::trim(line).length == (int)0))){
				HX_STACK_LINE(94)
				pageImage = null();
			}
			else{
				HX_STACK_LINE(95)
				if (((pageImage == null()))){
					HX_STACK_LINE(96)
					::String file = (imagesDir + line);		HX_STACK_VAR(file,"file");
					HX_STACK_LINE(98)
					::String format = this->readValue(reader);		HX_STACK_VAR(format,"format");
					HX_STACK_LINE(100)
					this->readTuple(reader);
					HX_STACK_LINE(101)
					::String min = this->tuple->__get((int)0);		HX_STACK_VAR(min,"min");
					HX_STACK_LINE(102)
					::String max = this->tuple->__get((int)1);		HX_STACK_VAR(max,"max");
					HX_STACK_LINE(104)
					::String direction = this->readValue(reader);		HX_STACK_VAR(direction,"direction");
					HX_STACK_LINE(105)
					::String repeatX = HX_CSTRING("ClampToEdge");		HX_STACK_VAR(repeatX,"repeatX");
					HX_STACK_LINE(106)
					::String repeatY = HX_CSTRING("ClampToEdge");		HX_STACK_VAR(repeatY,"repeatY");
					HX_STACK_LINE(107)
					if (((direction == HX_CSTRING("x")))){
						HX_STACK_LINE(108)
						repeatX = HX_CSTRING("Repeat");
					}
					else{
						HX_STACK_LINE(109)
						if (((direction == HX_CSTRING("y")))){
							HX_STACK_LINE(110)
							repeatY = HX_CSTRING("Repeat");
						}
						else{
							HX_STACK_LINE(111)
							if (((direction == HX_CSTRING("xy")))){
								HX_STACK_LINE(112)
								repeatX = HX_CSTRING("Repeat");
								HX_STACK_LINE(113)
								repeatY = HX_CSTRING("Repeat");
							}
						}
					}
					HX_STACK_LINE(116)
					pageImage = ::spinehx::atlas::Page_obj::__new(file,(min == HX_CSTRING("MipMap")),format,min,max,repeatX,repeatY);
					HX_STACK_LINE(117)
					this->pages->push(pageImage);
				}
				else{
					HX_STACK_LINE(119)
					bool rotate = (this->readValue(reader) == HX_CSTRING("true"));		HX_STACK_VAR(rotate,"rotate");
					HX_STACK_LINE(121)
					this->readTuple(reader);
					HX_STACK_LINE(122)
					int left = ::Std_obj::parseInt(this->tuple->__get((int)0));		HX_STACK_VAR(left,"left");
					HX_STACK_LINE(123)
					int top = ::Std_obj::parseInt(this->tuple->__get((int)1));		HX_STACK_VAR(top,"top");
					HX_STACK_LINE(125)
					this->readTuple(reader);
					HX_STACK_LINE(126)
					int width = ::Std_obj::parseInt(this->tuple->__get((int)0));		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(127)
					int height = ::Std_obj::parseInt(this->tuple->__get((int)1));		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(129)
					::spinehx::atlas::Region region = ::spinehx::atlas::Region_obj::__new();		HX_STACK_VAR(region,"region");
					HX_STACK_LINE(130)
					region->page = pageImage;
					HX_STACK_LINE(131)
					region->left = left;
					HX_STACK_LINE(132)
					region->top = top;
					HX_STACK_LINE(133)
					region->width = width;
					HX_STACK_LINE(134)
					region->height = height;
					HX_STACK_LINE(135)
					region->name = line;
					HX_STACK_LINE(136)
					region->rotate = rotate;
					HX_STACK_LINE(138)
					if (((this->readTuple(reader) == (int)4))){
						HX_STACK_LINE(139)
						region->splits = Array_obj< int >::__new().Add(::Std_obj::parseInt(this->tuple->__get((int)0))).Add(::Std_obj::parseInt(this->tuple->__get((int)1))).Add(::Std_obj::parseInt(this->tuple->__get((int)2))).Add(::Std_obj::parseInt(this->tuple->__get((int)3)));
						HX_STACK_LINE(142)
						if (((this->readTuple(reader) == (int)4))){
							HX_STACK_LINE(143)
							region->pads = Array_obj< int >::__new().Add(::Std_obj::parseInt(this->tuple->__get((int)0))).Add(::Std_obj::parseInt(this->tuple->__get((int)1))).Add(::Std_obj::parseInt(this->tuple->__get((int)2))).Add(::Std_obj::parseInt(this->tuple->__get((int)3)));
							HX_STACK_LINE(146)
							this->readTuple(reader);
						}
					}
					HX_STACK_LINE(150)
					region->originalWidth = ::Std_obj::parseInt(this->tuple->__get((int)0));
					HX_STACK_LINE(151)
					region->originalHeight = ::Std_obj::parseInt(this->tuple->__get((int)1));
					HX_STACK_LINE(153)
					this->readTuple(reader);
					HX_STACK_LINE(154)
					region->offsetX = ::Std_obj::parseInt(this->tuple->__get((int)0));
					HX_STACK_LINE(155)
					region->offsetY = ::Std_obj::parseInt(this->tuple->__get((int)1));
					HX_STACK_LINE(157)
					region->index = ::Std_obj::parseInt(this->readValue(reader));
					HX_STACK_LINE(159)
					if ((flip)){
						HX_STACK_LINE(159)
						region->flip = true;
					}
					HX_STACK_LINE(161)
					this->regions->push(region);
				}
			}
		}
		HX_STACK_LINE(164)
		try{
			HX_STACK_LINE(164)
			reader->close();
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic ignored = __e;{
				}
			}
		}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic ex = __e;{
				HX_STACK_LINE(166)
				try{
					HX_STACK_LINE(166)
					reader->close();
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic ignored = __e;{
						}
					}
				}
				HX_STACK_LINE(167)
				hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Error reading pack file: ") + ::Std_obj::string(ex))));
			}
		}
	}

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int run(::spinehx::atlas::Region region1,::spinehx::atlas::Region region2){
		HX_STACK_PUSH("*::_Function_1_1","spinehx/atlas/TextureAtlas.hx",170);
		HX_STACK_ARG(region1,"region1");
		HX_STACK_ARG(region2,"region2");
		{
			HX_STACK_LINE(171)
			int MAX_VALUE = (int)16777215;		HX_STACK_VAR(MAX_VALUE,"MAX_VALUE");
			HX_STACK_LINE(172)
			int i1 = region1->index;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(173)
			if (((i1 == (int)-1))){
				HX_STACK_LINE(173)
				i1 = MAX_VALUE;
			}
			HX_STACK_LINE(174)
			int i2 = region2->index;		HX_STACK_VAR(i2,"i2");
			HX_STACK_LINE(175)
			if (((i2 == (int)-1))){
				HX_STACK_LINE(175)
				i2 = MAX_VALUE;
			}
			HX_STACK_LINE(176)
			return (i1 - i2);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(170)
	this->regions->sort( Dynamic(new _Function_1_1()));
}
;
	return null();
}

TextureAtlasData_obj::~TextureAtlasData_obj() { }

Dynamic TextureAtlasData_obj::__CreateEmpty() { return  new TextureAtlasData_obj; }
hx::ObjectPtr< TextureAtlasData_obj > TextureAtlasData_obj::__new(::String packFileData,::String imagesDir,bool flip)
{  hx::ObjectPtr< TextureAtlasData_obj > result = new TextureAtlasData_obj();
	result->__construct(packFileData,imagesDir,flip);
	return result;}

Dynamic TextureAtlasData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextureAtlasData_obj > result = new TextureAtlasData_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Array< ::Dynamic > TextureAtlasData_obj::getRegions( ){
	HX_STACK_PUSH("TextureAtlasData::getRegions","spinehx/atlas/TextureAtlas.hx",213);
	HX_STACK_THIS(this);
	HX_STACK_LINE(213)
	return this->regions;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureAtlasData_obj,getRegions,return )

Array< ::Dynamic > TextureAtlasData_obj::getPages( ){
	HX_STACK_PUSH("TextureAtlasData::getPages","spinehx/atlas/TextureAtlas.hx",209);
	HX_STACK_THIS(this);
	HX_STACK_LINE(209)
	return this->pages;
}


HX_DEFINE_DYNAMIC_FUNC0(TextureAtlasData_obj,getPages,return )

int TextureAtlasData_obj::readTuple( ::haxe::io::Input reader){
	HX_STACK_PUSH("TextureAtlasData::readTuple","spinehx/atlas/TextureAtlas.hx",188);
	HX_STACK_THIS(this);
	HX_STACK_ARG(reader,"reader");
	HX_STACK_LINE(189)
	::String line = reader->readLine();		HX_STACK_VAR(line,"line");
	HX_STACK_LINE(190)
	int colon = line.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(colon,"colon");
	HX_STACK_LINE(191)
	if (((colon == (int)-1))){
		HX_STACK_LINE(191)
		hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Invalid line: ") + line)));
	}
	HX_STACK_LINE(192)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(193)
	int lastMatch = (colon + (int)1);		HX_STACK_VAR(lastMatch,"lastMatch");
	HX_STACK_LINE(194)
	while(((i < (int)3))){
		HX_STACK_LINE(195)
		int comma = line.indexOf(HX_CSTRING(","),lastMatch);		HX_STACK_VAR(comma,"comma");
		HX_STACK_LINE(196)
		if (((comma == (int)-1))){
			HX_STACK_LINE(197)
			if (((i == (int)0))){
				HX_STACK_LINE(197)
				hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Invalid line: ") + line)));
			}
			HX_STACK_LINE(198)
			break;
		}
		HX_STACK_LINE(200)
		this->tuple[i] = ::StringTools_obj::trim(line.substring(lastMatch,comma));
		HX_STACK_LINE(201)
		lastMatch = (comma + (int)1);
		HX_STACK_LINE(202)
		(i)++;
	}
	HX_STACK_LINE(204)
	this->tuple[i] = ::StringTools_obj::trim(line.substring(lastMatch,null()));
	HX_STACK_LINE(205)
	return (i + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(TextureAtlasData_obj,readTuple,return )

::String TextureAtlasData_obj::readValue( ::haxe::io::Input reader){
	HX_STACK_PUSH("TextureAtlasData::readValue","spinehx/atlas/TextureAtlas.hx",180);
	HX_STACK_THIS(this);
	HX_STACK_ARG(reader,"reader");
	HX_STACK_LINE(181)
	::String line = reader->readLine();		HX_STACK_VAR(line,"line");
	HX_STACK_LINE(182)
	int colon = line.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(colon,"colon");
	HX_STACK_LINE(183)
	if (((colon == (int)-1))){
		HX_STACK_LINE(183)
		hx::Throw (::spinehx::Exception_obj::__new((HX_CSTRING("Invalid line: ") + line)));
	}
	HX_STACK_LINE(184)
	return ::StringTools_obj::trim(line.substring((colon + (int)1),null()));
}


HX_DEFINE_DYNAMIC_FUNC1(TextureAtlasData_obj,readValue,return )


TextureAtlasData_obj::TextureAtlasData_obj()
{
}

void TextureAtlasData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureAtlasData);
	HX_MARK_MEMBER_NAME(tuple,"tuple");
	HX_MARK_MEMBER_NAME(regions,"regions");
	HX_MARK_MEMBER_NAME(pages,"pages");
	HX_MARK_END_CLASS();
}

void TextureAtlasData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tuple,"tuple");
	HX_VISIT_MEMBER_NAME(regions,"regions");
	HX_VISIT_MEMBER_NAME(pages,"pages");
}

Dynamic TextureAtlasData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tuple") ) { return tuple; }
		if (HX_FIELD_EQ(inName,"pages") ) { return pages; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regions") ) { return regions; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getPages") ) { return getPages_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readTuple") ) { return readTuple_dyn(); }
		if (HX_FIELD_EQ(inName,"readValue") ) { return readValue_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getRegions") ) { return getRegions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextureAtlasData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"tuple") ) { tuple=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pages") ) { pages=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regions") ) { regions=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextureAtlasData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tuple"));
	outFields->push(HX_CSTRING("regions"));
	outFields->push(HX_CSTRING("pages"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getRegions"),
	HX_CSTRING("getPages"),
	HX_CSTRING("readTuple"),
	HX_CSTRING("readValue"),
	HX_CSTRING("tuple"),
	HX_CSTRING("regions"),
	HX_CSTRING("pages"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureAtlasData_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureAtlasData_obj::__mClass,"__mClass");
};

Class TextureAtlasData_obj::__mClass;

void TextureAtlasData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spinehx.atlas.TextureAtlasData"), hx::TCanCast< TextureAtlasData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void TextureAtlasData_obj::__boot()
{
}

} // end namespace spinehx
} // end namespace atlas
