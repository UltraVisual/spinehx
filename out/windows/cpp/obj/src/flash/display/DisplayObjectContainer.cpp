#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_errors_ArgumentError
#include <flash/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_flash_errors_Error
#include <flash/errors/Error.h>
#endif
#ifndef INCLUDED_flash_errors_RangeError
#include <flash/errors/RangeError.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
namespace flash{
namespace display{

Void DisplayObjectContainer_obj::__construct(Dynamic handle,::String type)
{
HX_STACK_PUSH("DisplayObjectContainer::new","flash/display/DisplayObjectContainer.hx",21);
{
	HX_STACK_LINE(23)
	super::__construct(handle,type);
	HX_STACK_LINE(24)
	this->__children = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new(Dynamic handle,::String type)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct(handle,type);
	return result;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool DisplayObjectContainer_obj::set_tabChildren( bool value){
	HX_STACK_PUSH("DisplayObjectContainer::set_tabChildren","flash/display/DisplayObjectContainer.hx",485);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(485)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_tabChildren,return )

bool DisplayObjectContainer_obj::get_tabChildren( ){
	HX_STACK_PUSH("DisplayObjectContainer::get_tabChildren","flash/display/DisplayObjectContainer.hx",484);
	HX_STACK_THIS(this);
	HX_STACK_LINE(484)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_tabChildren,return )

int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_PUSH("DisplayObjectContainer::get_numChildren","flash/display/DisplayObjectContainer.hx",483);
	HX_STACK_THIS(this);
	HX_STACK_LINE(483)
	return this->__children->length;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )

bool DisplayObjectContainer_obj::set_mouseChildren( bool value){
	HX_STACK_PUSH("DisplayObjectContainer::set_mouseChildren","flash/display/DisplayObjectContainer.hx",475);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(477)
	::flash::display::DisplayObjectContainer_obj::nme_doc_set_mouse_children(this->__handle,value);
	HX_STACK_LINE(478)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_mouseChildren,return )

bool DisplayObjectContainer_obj::get_mouseChildren( ){
	HX_STACK_PUSH("DisplayObjectContainer::get_mouseChildren","flash/display/DisplayObjectContainer.hx",474);
	HX_STACK_THIS(this);
	HX_STACK_LINE(474)
	return ::flash::display::DisplayObjectContainer_obj::nme_doc_get_mouse_children(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_mouseChildren,return )

Void DisplayObjectContainer_obj::__swapChildrenAt( int index1,int index2){
{
		HX_STACK_PUSH("DisplayObjectContainer::__swapChildrenAt","flash/display/DisplayObjectContainer.hx",447);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index1,"index1");
		HX_STACK_ARG(index2,"index2");
		HX_STACK_LINE(449)
		if (((bool((bool((bool((index1 < (int)0)) || bool((index2 < (int)0)))) || bool((index1 > this->__children->length)))) || bool((index2 > this->__children->length))))){
			HX_STACK_LINE(449)
			hx::Throw (::flash::errors::RangeError_obj::__new(HX_CSTRING("swapChildrenAt : index out of bounds")));
		}
		HX_STACK_LINE(455)
		if (((index1 != index2))){
			HX_STACK_LINE(457)
			::flash::display::DisplayObject temp = this->__children->__get(index1).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(458)
			this->__children[index1] = this->__children->__get(index2).StaticCast< ::flash::display::DisplayObject >();
			HX_STACK_LINE(459)
			this->__children[index2] = temp;
			HX_STACK_LINE(460)
			::flash::display::DisplayObjectContainer_obj::nme_doc_swap_children(this->__handle,index1,index2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,__swapChildrenAt,(void))

Void DisplayObjectContainer_obj::__setChildIndex( ::flash::display::DisplayObject child,int index){
{
		HX_STACK_PUSH("DisplayObjectContainer::__setChildIndex","flash/display/DisplayObjectContainer.hx",369);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(371)
		if (((index > this->__children->length))){
			HX_STACK_LINE(371)
			hx::Throw ((HX_CSTRING("Invalid index position ") + index));
		}
		HX_STACK_LINE(377)
		int firstIndex = this->__getChildIndex(child);		HX_STACK_VAR(firstIndex,"firstIndex");
		HX_STACK_LINE(379)
		if (((firstIndex < (int)0))){
			HX_STACK_LINE(381)
			::String msg = ((HX_CSTRING("setChildIndex : object ") + child->toString()) + HX_CSTRING(" not found."));		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(383)
			if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(385)
				int actualIndex = (int)-1;		HX_STACK_VAR(actualIndex,"actualIndex");
				HX_STACK_LINE(387)
				{
					HX_STACK_LINE(387)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->__children->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(387)
					while(((_g1 < _g))){
						HX_STACK_LINE(387)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(389)
						if (((this->__children->__get(i).StaticCast< ::flash::display::DisplayObject >() == child))){
							HX_STACK_LINE(391)
							actualIndex = i;
							HX_STACK_LINE(392)
							break;
						}
					}
				}
				HX_STACK_LINE(398)
				if (((actualIndex != (int)-1))){
					HX_STACK_LINE(398)
					hx::AddEq(msg,(HX_CSTRING("Internal error: Real child index was ") + ::Std_obj::string(actualIndex)));
				}
				else{
					HX_STACK_LINE(402)
					hx::AddEq(msg,HX_CSTRING("Internal error: Child was not in __children array!"));
				}
			}
			HX_STACK_LINE(410)
			hx::Throw (msg);
		}
		HX_STACK_LINE(414)
		::flash::display::DisplayObjectContainer_obj::nme_doc_set_child_index(this->__handle,child->__handle,index);
		HX_STACK_LINE(416)
		if (((index < firstIndex))){
			HX_STACK_LINE(418)
			int i = firstIndex;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(420)
			while(((i > index))){
				HX_STACK_LINE(422)
				this->__children[i] = this->__children->__get((i - (int)1)).StaticCast< ::flash::display::DisplayObject >();
				HX_STACK_LINE(423)
				(i)--;
			}
			HX_STACK_LINE(427)
			this->__children[index] = child;
		}
		else{
			HX_STACK_LINE(429)
			if (((firstIndex < index))){
				HX_STACK_LINE(431)
				int i = firstIndex;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(433)
				while(((i < index))){
					HX_STACK_LINE(435)
					this->__children[i] = this->__children->__get((i + (int)1)).StaticCast< ::flash::display::DisplayObject >();
					HX_STACK_LINE(436)
					(i)++;
				}
				HX_STACK_LINE(440)
				this->__children[index] = child;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,__setChildIndex,(void))

Void DisplayObjectContainer_obj::__removeChildFromArray( ::flash::display::DisplayObject child){
{
		HX_STACK_PUSH("DisplayObjectContainer::__removeChildFromArray","flash/display/DisplayObjectContainer.hx",355);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_LINE(357)
		int i = this->__getChildIndex(child);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(359)
		if (((i >= (int)0))){
			HX_STACK_LINE(361)
			::flash::display::DisplayObjectContainer_obj::nme_doc_remove_child(this->__handle,i);
			HX_STACK_LINE(362)
			this->__children->splice(i,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,__removeChildFromArray,(void))

Void DisplayObjectContainer_obj::__onRemoved( ::flash::display::DisplayObject object,bool wasOnStage){
{
		HX_STACK_PUSH("DisplayObjectContainer::__onRemoved","flash/display/DisplayObjectContainer.hx",342);
		HX_STACK_THIS(this);
		HX_STACK_ARG(object,"object");
		HX_STACK_ARG(wasOnStage,"wasOnStage");
		HX_STACK_LINE(344)
		this->super::__onRemoved(object,wasOnStage);
		HX_STACK_LINE(346)
		{
			HX_STACK_LINE(346)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(346)
			while(((_g < _g1->length))){
				HX_STACK_LINE(346)
				::flash::display::DisplayObject child = _g1->__get(_g).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(346)
				++(_g);
				HX_STACK_LINE(348)
				child->__onRemoved(object,wasOnStage);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__onAdded( ::flash::display::DisplayObject object,bool isOnStage){
{
		HX_STACK_PUSH("DisplayObjectContainer::__onAdded","flash/display/DisplayObjectContainer.hx",329);
		HX_STACK_THIS(this);
		HX_STACK_ARG(object,"object");
		HX_STACK_ARG(isOnStage,"isOnStage");
		HX_STACK_LINE(331)
		this->super::__onAdded(object,isOnStage);
		HX_STACK_LINE(333)
		{
			HX_STACK_LINE(333)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(333)
			while(((_g < _g1->length))){
				HX_STACK_LINE(333)
				::flash::display::DisplayObject child = _g1->__get(_g).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(333)
				++(_g);
				HX_STACK_LINE(335)
				child->__onAdded(object,isOnStage);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getObjectsUnderPoint( ::flash::geom::Point point,Array< ::Dynamic > result){
{
		HX_STACK_PUSH("DisplayObjectContainer::__getObjectsUnderPoint","flash/display/DisplayObjectContainer.hx",316);
		HX_STACK_THIS(this);
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(result,"result");
		HX_STACK_LINE(318)
		this->super::__getObjectsUnderPoint(point,result);
		HX_STACK_LINE(320)
		{
			HX_STACK_LINE(320)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(320)
			while(((_g < _g1->length))){
				HX_STACK_LINE(320)
				::flash::display::DisplayObject child = _g1->__get(_g).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(320)
				++(_g);
				HX_STACK_LINE(322)
				child->__getObjectsUnderPoint(point,result);
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::__getChildIndex( ::flash::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::__getChildIndex","flash/display/DisplayObjectContainer.hx",299);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(301)
	{
		HX_STACK_LINE(301)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->__children->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(301)
		while(((_g1 < _g))){
			HX_STACK_LINE(301)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(303)
			if (((this->__children->__get(i).StaticCast< ::flash::display::DisplayObject >() == child))){
				HX_STACK_LINE(303)
				return i;
			}
		}
	}
	HX_STACK_LINE(311)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,__getChildIndex,return )

::flash::display::DisplayObject DisplayObjectContainer_obj::__findByID( int id){
	HX_STACK_PUSH("DisplayObjectContainer::__findByID","flash/display/DisplayObjectContainer.hx",272);
	HX_STACK_THIS(this);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(274)
	if (((this->__id == id))){
		HX_STACK_LINE(274)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(280)
	::flash::display::DisplayObject found;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(282)
	{
		HX_STACK_LINE(282)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(282)
		while(((_g < _g1->length))){
			HX_STACK_LINE(282)
			::flash::display::DisplayObject child = _g1->__get(_g).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(282)
			++(_g);
			HX_STACK_LINE(284)
			found = child->__findByID(id);
			HX_STACK_LINE(286)
			if (((found != null()))){
				HX_STACK_LINE(286)
				return found;
			}
		}
	}
	HX_STACK_LINE(294)
	return this->super::__findByID(id);
}


Void DisplayObjectContainer_obj::__broadcast( ::flash::events::Event event){
{
		HX_STACK_PUSH("DisplayObjectContainer::__broadcast","flash/display/DisplayObjectContainer.hx",232);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(234)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(236)
		if (((this->__children->length > (int)0))){
			HX_STACK_LINE(238)
			::flash::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(240)
			while((true)){
				HX_STACK_LINE(242)
				child = this->__children->__get(i).StaticCast< ::flash::display::DisplayObject >();
				HX_STACK_LINE(243)
				child->__broadcast(event);
				HX_STACK_LINE(245)
				if (((i >= this->__children->length))){
					HX_STACK_LINE(245)
					break;
				}
				HX_STACK_LINE(251)
				if (((this->__children->__get(i).StaticCast< ::flash::display::DisplayObject >() == child))){
					HX_STACK_LINE(253)
					(i)++;
					HX_STACK_LINE(255)
					if (((i >= this->__children->length))){
						HX_STACK_LINE(255)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(267)
		this->super::__broadcast(event);
	}
return null();
}


Void DisplayObjectContainer_obj::__addChild( ::flash::display::DisplayObject child){
{
		HX_STACK_PUSH("DisplayObjectContainer::__addChild","flash/display/DisplayObjectContainer.hx",209);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_LINE(211)
		if (((child == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(211)
			hx::Throw (HX_CSTRING("Adding to self"));
		}
		HX_STACK_LINE(217)
		if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(217)
			this->setChildIndex(child,(this->__children->length - (int)1));
		}
		else{
			HX_STACK_LINE(223)
			child->__setParent(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(224)
			this->__children->push(child);
			HX_STACK_LINE(225)
			::flash::display::DisplayObjectContainer_obj::nme_doc_add_child(this->__handle,child->__handle);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,__addChild,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int index1,int index2){
{
		HX_STACK_PUSH("DisplayObjectContainer::swapChildrenAt","flash/display/DisplayObjectContainer.hx",202);
		HX_STACK_THIS(this);
		HX_STACK_ARG(index1,"index1");
		HX_STACK_ARG(index2,"index2");
		HX_STACK_LINE(204)
		if (((bool((bool((bool((index1 < (int)0)) || bool((index2 < (int)0)))) || bool((index1 > this->__children->length)))) || bool((index2 > this->__children->length))))){
			HX_STACK_LINE(204)
			hx::Throw (::flash::errors::RangeError_obj::__new(HX_CSTRING("swapChildrenAt : index out of bounds")));
		}
		HX_STACK_LINE(204)
		if (((index1 != index2))){
			HX_STACK_LINE(204)
			::flash::display::DisplayObject temp = this->__children->__get(index1).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(204)
			this->__children[index1] = this->__children->__get(index2).StaticCast< ::flash::display::DisplayObject >();
			HX_STACK_LINE(204)
			this->__children[index2] = temp;
			HX_STACK_LINE(204)
			::flash::display::DisplayObjectContainer_obj::nme_doc_swap_children(this->__handle,index1,index2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

Void DisplayObjectContainer_obj::swapChildren( ::flash::display::DisplayObject child1,::flash::display::DisplayObject child2){
{
		HX_STACK_PUSH("DisplayObjectContainer::swapChildren","flash/display/DisplayObjectContainer.hx",186);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child1,"child1");
		HX_STACK_ARG(child2,"child2");
		HX_STACK_LINE(188)
		int index1 = this->__getChildIndex(child1);		HX_STACK_VAR(index1,"index1");
		HX_STACK_LINE(189)
		int index2 = this->__getChildIndex(child2);		HX_STACK_VAR(index2,"index2");
		HX_STACK_LINE(191)
		if (((bool((index1 < (int)0)) || bool((index2 < (int)0))))){
			HX_STACK_LINE(191)
			hx::Throw (HX_CSTRING("swapChildren:Could not find children"));
		}
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			if (((bool((bool((bool((index1 < (int)0)) || bool((index2 < (int)0)))) || bool((index1 > this->__children->length)))) || bool((index2 > this->__children->length))))){
				HX_STACK_LINE(197)
				hx::Throw (::flash::errors::RangeError_obj::__new(HX_CSTRING("swapChildrenAt : index out of bounds")));
			}
			HX_STACK_LINE(197)
			if (((index1 != index2))){
				HX_STACK_LINE(197)
				::flash::display::DisplayObject temp = this->__children->__get(index1).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(197)
				this->__children[index1] = this->__children->__get(index2).StaticCast< ::flash::display::DisplayObject >();
				HX_STACK_LINE(197)
				this->__children[index2] = temp;
				HX_STACK_LINE(197)
				::flash::display::DisplayObjectContainer_obj::nme_doc_swap_children(this->__handle,index1,index2);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::setChildIndex( ::flash::display::DisplayObject child,int index){
{
		HX_STACK_PUSH("DisplayObjectContainer::setChildIndex","flash/display/DisplayObjectContainer.hx",179);
		HX_STACK_THIS(this);
		HX_STACK_ARG(child,"child");
		HX_STACK_ARG(index,"index");
		HX_STACK_LINE(181)
		if (((index > this->__children->length))){
			HX_STACK_LINE(181)
			hx::Throw ((HX_CSTRING("Invalid index position ") + index));
		}
		HX_STACK_LINE(181)
		int firstIndex = this->__getChildIndex(child);		HX_STACK_VAR(firstIndex,"firstIndex");
		HX_STACK_LINE(181)
		if (((firstIndex < (int)0))){
			HX_STACK_LINE(181)
			::String msg = ((HX_CSTRING("setChildIndex : object ") + child->toString()) + HX_CSTRING(" not found."));		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(181)
			if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(181)
				int actualIndex = (int)-1;		HX_STACK_VAR(actualIndex,"actualIndex");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->__children->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(181)
					while(((_g1 < _g))){
						HX_STACK_LINE(181)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(181)
						if (((this->__children->__get(i).StaticCast< ::flash::display::DisplayObject >() == child))){
							HX_STACK_LINE(181)
							actualIndex = i;
							HX_STACK_LINE(181)
							break;
						}
					}
				}
				HX_STACK_LINE(181)
				if (((actualIndex != (int)-1))){
					HX_STACK_LINE(181)
					hx::AddEq(msg,(HX_CSTRING("Internal error: Real child index was ") + ::Std_obj::string(actualIndex)));
				}
				else{
					HX_STACK_LINE(181)
					hx::AddEq(msg,HX_CSTRING("Internal error: Child was not in __children array!"));
				}
			}
			HX_STACK_LINE(181)
			hx::Throw (msg);
		}
		HX_STACK_LINE(181)
		::flash::display::DisplayObjectContainer_obj::nme_doc_set_child_index(this->__handle,child->__handle,index);
		HX_STACK_LINE(181)
		if (((index < firstIndex))){
			HX_STACK_LINE(181)
			int i = firstIndex;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(181)
			while(((i > index))){
				HX_STACK_LINE(181)
				this->__children[i] = this->__children->__get((i - (int)1)).StaticCast< ::flash::display::DisplayObject >();
				HX_STACK_LINE(181)
				(i)--;
			}
			HX_STACK_LINE(181)
			this->__children[index] = child;
		}
		else{
			HX_STACK_LINE(181)
			if (((firstIndex < index))){
				HX_STACK_LINE(181)
				int i = firstIndex;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(181)
				while(((i < index))){
					HX_STACK_LINE(181)
					this->__children[i] = this->__children->__get((i + (int)1)).StaticCast< ::flash::display::DisplayObject >();
					HX_STACK_LINE(181)
					(i)++;
				}
				HX_STACK_LINE(181)
				this->__children[index] = child;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

::flash::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_PUSH("DisplayObjectContainer::removeChildAt","flash/display/DisplayObjectContainer.hx",164);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(166)
	if (((bool((index >= (int)0)) && bool((index < this->__children->length))))){
		HX_STACK_LINE(168)
		::flash::display::DisplayObject result = this->__children->__get(index).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(169)
		result->__setParent(null());
		HX_STACK_LINE(170)
		return result;
	}
	HX_STACK_LINE(174)
	hx::Throw (::flash::errors::ArgumentError_obj::__new(HX_CSTRING("The supplied DisplayObject must be a child of the caller."),null()));
	HX_STACK_LINE(174)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

::flash::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::flash::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::removeChild","flash/display/DisplayObjectContainer.hx",148);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(150)
	int index = this->__getChildIndex(child);		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(152)
	if (((index >= (int)0))){
		HX_STACK_LINE(154)
		child->__setParent(null());
		HX_STACK_LINE(155)
		return child;
	}
	HX_STACK_LINE(159)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::flash::geom::Point point){
	HX_STACK_PUSH("DisplayObjectContainer::getObjectsUnderPoint","flash/display/DisplayObjectContainer.hx",120);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(123)
	bool onStage = (this->get_stage() != null());		HX_STACK_VAR(onStage,"onStage");
	HX_STACK_LINE(124)
	bool cacheVisible = this->get_visible();		HX_STACK_VAR(cacheVisible,"cacheVisible");
	HX_STACK_LINE(126)
	if ((!(onStage))){
		HX_STACK_LINE(128)
		this->set_visible(false);
		HX_STACK_LINE(129)
		::flash::Lib_obj::get_stage()->addChild(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(133)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(134)
	this->__getObjectsUnderPoint(point,result);
	HX_STACK_LINE(136)
	if ((!(onStage))){
		HX_STACK_LINE(138)
		::flash::Lib_obj::get_stage()->removeChild(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(139)
		this->set_visible(cacheVisible);
	}
	HX_STACK_LINE(143)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

int DisplayObjectContainer_obj::getChildIndex( ::flash::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::getChildIndex","flash/display/DisplayObjectContainer.hx",113);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(113)
	return this->__getChildIndex(child);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

::flash::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_PUSH("DisplayObjectContainer::getChildByName","flash/display/DisplayObjectContainer.hx",96);
	HX_STACK_THIS(this);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(98)
		while(((_g < _g1->length))){
			HX_STACK_LINE(98)
			::flash::display::DisplayObject child = _g1->__get(_g).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(98)
			++(_g);
			HX_STACK_LINE(100)
			if (((name == child->get_name()))){
				HX_STACK_LINE(100)
				return child;
			}
		}
	}
	HX_STACK_LINE(108)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

::flash::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_PUSH("DisplayObjectContainer::getChildAt","flash/display/DisplayObjectContainer.hx",82);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(84)
	if (((bool((index >= (int)0)) && bool((index < this->__children->length))))){
		HX_STACK_LINE(84)
		return this->__children->__get(index).StaticCast< ::flash::display::DisplayObject >();
	}
	HX_STACK_LINE(90)
	hx::Throw (::flash::errors::RangeError_obj::__new((((HX_CSTRING("getChildAt : index out of bounds ") + index) + HX_CSTRING("/")) + this->__children->length)));
	HX_STACK_LINE(91)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

bool DisplayObjectContainer_obj::contains( ::flash::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::contains","flash/display/DisplayObjectContainer.hx",53);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(55)
	if (((child == null()))){
		HX_STACK_LINE(55)
		return false;
	}
	HX_STACK_LINE(61)
	if (((hx::ObjectPtr<OBJ_>(this) == child))){
		HX_STACK_LINE(61)
		return true;
	}
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(67)
		while(((_g < _g1->length))){
			HX_STACK_LINE(67)
			::flash::display::DisplayObject c = _g1->__get(_g).StaticCast< ::flash::display::DisplayObject >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(67)
			++(_g);
			HX_STACK_LINE(69)
			if (((c == child))){
				HX_STACK_LINE(69)
				return true;
			}
		}
	}
	HX_STACK_LINE(77)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::flash::geom::Point point){
	HX_STACK_PUSH("DisplayObjectContainer::areInaccessibleObjectsUnderPoint","flash/display/DisplayObjectContainer.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(46)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

::flash::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::flash::display::DisplayObject child,int index){
	HX_STACK_PUSH("DisplayObjectContainer::addChildAt","flash/display/DisplayObjectContainer.hx",37);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_ARG(index,"index");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		if (((child == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(39)
			hx::Throw (HX_CSTRING("Adding to self"));
		}
		HX_STACK_LINE(39)
		if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(39)
			this->setChildIndex(child,(this->__children->length - (int)1));
		}
		else{
			HX_STACK_LINE(39)
			child->__setParent(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(39)
			this->__children->push(child);
			HX_STACK_LINE(39)
			::flash::display::DisplayObjectContainer_obj::nme_doc_add_child(this->__handle,child->__handle);
		}
	}
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		if (((index > this->__children->length))){
			HX_STACK_LINE(40)
			hx::Throw ((HX_CSTRING("Invalid index position ") + index));
		}
		HX_STACK_LINE(40)
		int firstIndex = this->__getChildIndex(child);		HX_STACK_VAR(firstIndex,"firstIndex");
		HX_STACK_LINE(40)
		if (((firstIndex < (int)0))){
			HX_STACK_LINE(40)
			::String msg = ((HX_CSTRING("setChildIndex : object ") + child->toString()) + HX_CSTRING(" not found."));		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(40)
			if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
				HX_STACK_LINE(40)
				int actualIndex = (int)-1;		HX_STACK_VAR(actualIndex,"actualIndex");
				HX_STACK_LINE(40)
				{
					HX_STACK_LINE(40)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->__children->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(40)
					while(((_g1 < _g))){
						HX_STACK_LINE(40)
						int i = (_g1)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(40)
						if (((this->__children->__get(i).StaticCast< ::flash::display::DisplayObject >() == child))){
							HX_STACK_LINE(40)
							actualIndex = i;
							HX_STACK_LINE(40)
							break;
						}
					}
				}
				HX_STACK_LINE(40)
				if (((actualIndex != (int)-1))){
					HX_STACK_LINE(40)
					hx::AddEq(msg,(HX_CSTRING("Internal error: Real child index was ") + ::Std_obj::string(actualIndex)));
				}
				else{
					HX_STACK_LINE(40)
					hx::AddEq(msg,HX_CSTRING("Internal error: Child was not in __children array!"));
				}
			}
			HX_STACK_LINE(40)
			hx::Throw (msg);
		}
		HX_STACK_LINE(40)
		::flash::display::DisplayObjectContainer_obj::nme_doc_set_child_index(this->__handle,child->__handle,index);
		HX_STACK_LINE(40)
		if (((index < firstIndex))){
			HX_STACK_LINE(40)
			int i = firstIndex;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(40)
			while(((i > index))){
				HX_STACK_LINE(40)
				this->__children[i] = this->__children->__get((i - (int)1)).StaticCast< ::flash::display::DisplayObject >();
				HX_STACK_LINE(40)
				(i)--;
			}
			HX_STACK_LINE(40)
			this->__children[index] = child;
		}
		else{
			HX_STACK_LINE(40)
			if (((firstIndex < index))){
				HX_STACK_LINE(40)
				int i = firstIndex;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(40)
				while(((i < index))){
					HX_STACK_LINE(40)
					this->__children[i] = this->__children->__get((i + (int)1)).StaticCast< ::flash::display::DisplayObject >();
					HX_STACK_LINE(40)
					(i)++;
				}
				HX_STACK_LINE(40)
				this->__children[index] = child;
			}
		}
	}
	HX_STACK_LINE(41)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

::flash::display::DisplayObject DisplayObjectContainer_obj::addChild( ::flash::display::DisplayObject child){
	HX_STACK_PUSH("DisplayObjectContainer::addChild","flash/display/DisplayObjectContainer.hx",29);
	HX_STACK_THIS(this);
	HX_STACK_ARG(child,"child");
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		if (((child == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(31)
			hx::Throw (HX_CSTRING("Adding to self"));
		}
		HX_STACK_LINE(31)
		if (((child->__parent == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(31)
			this->setChildIndex(child,(this->__children->length - (int)1));
		}
		else{
			HX_STACK_LINE(31)
			child->__setParent(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(31)
			this->__children->push(child);
			HX_STACK_LINE(31)
			::flash::display::DisplayObjectContainer_obj::nme_doc_add_child(this->__handle,child->__handle);
		}
	}
	HX_STACK_LINE(32)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

Dynamic DisplayObjectContainer_obj::nme_create_display_object_container;

Dynamic DisplayObjectContainer_obj::nme_doc_add_child;

Dynamic DisplayObjectContainer_obj::nme_doc_remove_child;

Dynamic DisplayObjectContainer_obj::nme_doc_set_child_index;

Dynamic DisplayObjectContainer_obj::nme_doc_get_mouse_children;

Dynamic DisplayObjectContainer_obj::nme_doc_set_mouse_children;

Dynamic DisplayObjectContainer_obj::nme_doc_swap_children;


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(__children,"__children");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__children,"__children");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__onAdded") ) { return __onAdded_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__findByID") ) { return __findByID_dyn(); }
		if (HX_FIELD_EQ(inName,"__addChild") ) { return __addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__onRemoved") ) { return __onRemoved_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return get_tabChildren(); }
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp ? get_numChildren() : numChildren; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return get_mouseChildren(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"set_tabChildren") ) { return set_tabChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tabChildren") ) { return get_tabChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__setChildIndex") ) { return __setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"__getChildIndex") ) { return __getChildIndex_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__swapChildrenAt") ) { return __swapChildrenAt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_doc_add_child") ) { return nme_doc_add_child; }
		if (HX_FIELD_EQ(inName,"set_mouseChildren") ) { return set_mouseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseChildren") ) { return get_mouseChildren_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_doc_remove_child") ) { return nme_doc_remove_child; }
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_doc_swap_children") ) { return nme_doc_swap_children; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__removeChildFromArray") ) { return __removeChildFromArray_dyn(); }
		if (HX_FIELD_EQ(inName,"__getObjectsUnderPoint") ) { return __getObjectsUnderPoint_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_doc_set_child_index") ) { return nme_doc_set_child_index; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_doc_get_mouse_children") ) { return nme_doc_get_mouse_children; }
		if (HX_FIELD_EQ(inName,"nme_doc_set_mouse_children") ) { return nme_doc_set_mouse_children; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_create_display_object_container") ) { return nme_create_display_object_container; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return set_tabChildren(inValue); }
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return set_mouseChildren(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_doc_add_child") ) { nme_doc_add_child=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_doc_remove_child") ) { nme_doc_remove_child=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_doc_swap_children") ) { nme_doc_swap_children=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_doc_set_child_index") ) { nme_doc_set_child_index=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_doc_get_mouse_children") ) { nme_doc_get_mouse_children=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nme_doc_set_mouse_children") ) { nme_doc_set_mouse_children=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_create_display_object_container") ) { nme_create_display_object_container=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__children"));
	outFields->push(HX_CSTRING("tabChildren"));
	outFields->push(HX_CSTRING("numChildren"));
	outFields->push(HX_CSTRING("mouseChildren"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nme_create_display_object_container"),
	HX_CSTRING("nme_doc_add_child"),
	HX_CSTRING("nme_doc_remove_child"),
	HX_CSTRING("nme_doc_set_child_index"),
	HX_CSTRING("nme_doc_get_mouse_children"),
	HX_CSTRING("nme_doc_set_mouse_children"),
	HX_CSTRING("nme_doc_swap_children"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_tabChildren"),
	HX_CSTRING("get_tabChildren"),
	HX_CSTRING("get_numChildren"),
	HX_CSTRING("set_mouseChildren"),
	HX_CSTRING("get_mouseChildren"),
	HX_CSTRING("__swapChildrenAt"),
	HX_CSTRING("__setChildIndex"),
	HX_CSTRING("__removeChildFromArray"),
	HX_CSTRING("__onRemoved"),
	HX_CSTRING("__onAdded"),
	HX_CSTRING("__getObjectsUnderPoint"),
	HX_CSTRING("__getChildIndex"),
	HX_CSTRING("__findByID"),
	HX_CSTRING("__broadcast"),
	HX_CSTRING("__addChild"),
	HX_CSTRING("swapChildrenAt"),
	HX_CSTRING("swapChildren"),
	HX_CSTRING("setChildIndex"),
	HX_CSTRING("removeChildAt"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("getObjectsUnderPoint"),
	HX_CSTRING("getChildIndex"),
	HX_CSTRING("getChildByName"),
	HX_CSTRING("getChildAt"),
	HX_CSTRING("contains"),
	HX_CSTRING("areInaccessibleObjectsUnderPoint"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("addChild"),
	HX_CSTRING("__children"),
	HX_CSTRING("numChildren"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_create_display_object_container,"nme_create_display_object_container");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_add_child,"nme_doc_add_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_remove_child,"nme_doc_remove_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_child_index,"nme_doc_set_child_index");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_get_mouse_children,"nme_doc_get_mouse_children");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_mouse_children,"nme_doc_set_mouse_children");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_swap_children,"nme_doc_swap_children");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_create_display_object_container,"nme_create_display_object_container");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_add_child,"nme_doc_add_child");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_remove_child,"nme_doc_remove_child");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_child_index,"nme_doc_set_child_index");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_get_mouse_children,"nme_doc_get_mouse_children");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_mouse_children,"nme_doc_set_mouse_children");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_swap_children,"nme_doc_swap_children");
};

Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flash.display.DisplayObjectContainer"), hx::TCanCast< DisplayObjectContainer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void DisplayObjectContainer_obj::__boot()
{
	nme_create_display_object_container= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_create_display_object_container"),(int)0);
	nme_doc_add_child= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_doc_add_child"),(int)2);
	nme_doc_remove_child= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_doc_remove_child"),(int)2);
	nme_doc_set_child_index= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_doc_set_child_index"),(int)3);
	nme_doc_get_mouse_children= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_doc_get_mouse_children"),(int)1);
	nme_doc_set_mouse_children= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_doc_set_mouse_children"),(int)2);
	nme_doc_swap_children= ::flash::Lib_obj::load(HX_CSTRING("nme"),HX_CSTRING("nme_doc_swap_children"),(int)3);
}

} // end namespace flash
} // end namespace display
