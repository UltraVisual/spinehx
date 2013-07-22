#ifndef INCLUDED_spinehx_ColorTimeline
#define INCLUDED_spinehx_ColorTimeline

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <spinehx/CurveTimeline.h>
HX_DECLARE_CLASS1(spinehx,ColorTimeline)
HX_DECLARE_CLASS1(spinehx,CurveTimeline)
HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS1(spinehx,Timeline)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  ColorTimeline_obj : public ::spinehx::CurveTimeline_obj{
	public:
		typedef ::spinehx::CurveTimeline_obj super;
		typedef ColorTimeline_obj OBJ_;
		ColorTimeline_obj();
		Void __construct(int frameCount);

	public:
		static hx::ObjectPtr< ColorTimeline_obj > __new(int frameCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ColorTimeline_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ColorTimeline"); }

		virtual Void apply( ::spinehx::Skeleton skeleton,Float time,Float alpha);

		virtual Void setFrame( int frameIndex,Float time,Float r,Float g,Float b,Float a);
		Dynamic setFrame_dyn();

		virtual Array< Float > getFrames( );
		Dynamic getFrames_dyn();

		virtual int getSlotIndex( );
		Dynamic getSlotIndex_dyn();

		virtual Void setSlotIndex( int slotIndex);
		Dynamic setSlotIndex_dyn();

		Array< Float > frames;
		int slotIndex;
};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_ColorTimeline */ 
