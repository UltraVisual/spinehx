#ifndef INCLUDED_spinehx_platform_openfl_renderers_SkeletonRendererDebug
#define INCLUDED_spinehx_platform_openfl_renderers_SkeletonRendererDebug

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS4(spinehx,platform,openfl,renderers,SkeletonRendererDebug)
namespace spinehx{
namespace platform{
namespace openfl{
namespace renderers{


class HXCPP_CLASS_ATTRIBUTES  SkeletonRendererDebug_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef SkeletonRendererDebug_obj OBJ_;
		SkeletonRendererDebug_obj();
		Void __construct(::spinehx::Skeleton skeleton);

	public:
		static hx::ObjectPtr< SkeletonRendererDebug_obj > __new(::spinehx::Skeleton skeleton);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SkeletonRendererDebug_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SkeletonRendererDebug"); }

		virtual Void draw( );
		Dynamic draw_dyn();

		::spinehx::Skeleton skeleton;
};

} // end namespace spinehx
} // end namespace platform
} // end namespace openfl
} // end namespace renderers

#endif /* INCLUDED_spinehx_platform_openfl_renderers_SkeletonRendererDebug */ 
