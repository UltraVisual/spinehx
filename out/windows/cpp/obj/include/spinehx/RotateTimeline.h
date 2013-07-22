#ifndef INCLUDED_spinehx_RotateTimeline
#define INCLUDED_spinehx_RotateTimeline

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <spinehx/CurveTimeline.h>
HX_DECLARE_CLASS1(spinehx,CurveTimeline)
HX_DECLARE_CLASS1(spinehx,RotateTimeline)
HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS1(spinehx,Timeline)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  RotateTimeline_obj : public ::spinehx::CurveTimeline_obj{
	public:
		typedef ::spinehx::CurveTimeline_obj super;
		typedef RotateTimeline_obj OBJ_;
		RotateTimeline_obj();
		Void __construct(int frameCount);

	public:
		static hx::ObjectPtr< RotateTimeline_obj > __new(int frameCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RotateTimeline_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RotateTimeline"); }

		virtual Void apply( ::spinehx::Skeleton skeleton,Float time,Float alpha);

		virtual Void setFrame( int frameIndex,Float time,Float angle);
		Dynamic setFrame_dyn();

		virtual Array< Float > getFrames( );
		Dynamic getFrames_dyn();

		virtual int getBoneIndex( );
		Dynamic getBoneIndex_dyn();

		virtual Void setBoneIndex( int boneIndex);
		Dynamic setBoneIndex_dyn();

		Array< Float > frames;
		int boneIndex;
};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_RotateTimeline */ 
