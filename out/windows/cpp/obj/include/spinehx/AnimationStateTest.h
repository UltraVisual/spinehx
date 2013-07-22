#ifndef INCLUDED_spinehx_AnimationStateTest
#define INCLUDED_spinehx_AnimationStateTest

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
HX_DECLARE_CLASS1(spinehx,AnimationState)
HX_DECLARE_CLASS1(spinehx,AnimationStateTest)
HX_DECLARE_CLASS1(spinehx,Bone)
HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS2(spinehx,atlas,TextureAtlas)
HX_DECLARE_CLASS4(spinehx,platform,openfl,renderers,SkeletonRenderer)
HX_DECLARE_CLASS4(spinehx,platform,openfl,renderers,SkeletonRendererDebug)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  AnimationStateTest_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef AnimationStateTest_obj OBJ_;
		AnimationStateTest_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< AnimationStateTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AnimationStateTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AnimationStateTest"); }

		virtual Void render( ::flash::events::Event e);
		Dynamic render_dyn();

		virtual Void onClick( ::flash::events::Event e);
		Dynamic onClick_dyn();

		virtual Void added( ::flash::events::Event e);
		Dynamic added_dyn();

		int mode;
		Float lastTime;
		::spinehx::AnimationState state;
		::spinehx::Bone root_;
		::spinehx::Skeleton skeleton;
		::spinehx::atlas::TextureAtlas atlas;
		::spinehx::platform::openfl::renderers::SkeletonRendererDebug debugRenderer;
		::spinehx::platform::openfl::renderers::SkeletonRenderer renderer;
};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_AnimationStateTest */ 
