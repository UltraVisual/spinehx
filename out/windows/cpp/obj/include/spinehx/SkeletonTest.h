#ifndef INCLUDED_spinehx_SkeletonTest
#define INCLUDED_spinehx_SkeletonTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(spinehx,Animation)
HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS1(spinehx,SkeletonData)
HX_DECLARE_CLASS1(spinehx,SkeletonTest)
HX_DECLARE_CLASS4(spinehx,platform,openfl,renderers,SkeletonRenderer)
HX_DECLARE_CLASS4(spinehx,platform,openfl,renderers,SkeletonRendererDebug)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  SkeletonTest_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef SkeletonTest_obj OBJ_;
		SkeletonTest_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SkeletonTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SkeletonTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SkeletonTest"); }

		virtual Void render( ::flash::events::Event e);
		Dynamic render_dyn();

		virtual Void onClick( ::flash::events::Event e);
		Dynamic onClick_dyn();

		virtual Void added( ::flash::events::Event e);
		Dynamic added_dyn();

		int mode;
		Float lastTime;
		::spinehx::Animation animation;
		::spinehx::Skeleton skeleton;
		::spinehx::SkeletonData skeletonData;
		::spinehx::platform::openfl::renderers::SkeletonRendererDebug debugRenderer;
		::spinehx::platform::openfl::renderers::SkeletonRenderer renderer;
		Float time;
};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_SkeletonTest */ 
