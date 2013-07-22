#ifndef INCLUDED_spinehx_TranslateTimeline
#define INCLUDED_spinehx_TranslateTimeline

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <spinehx/CurveTimeline.h>
HX_DECLARE_CLASS1(spinehx,CurveTimeline)
HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS1(spinehx,Timeline)
HX_DECLARE_CLASS1(spinehx,TranslateTimeline)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  TranslateTimeline_obj : public ::spinehx::CurveTimeline_obj{
	public:
		typedef ::spinehx::CurveTimeline_obj super;
		typedef TranslateTimeline_obj OBJ_;
		TranslateTimeline_obj();
		Void __construct(int frameCount);

	public:
		static hx::ObjectPtr< TranslateTimeline_obj > __new(int frameCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TranslateTimeline_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TranslateTimeline"); }

		virtual Void apply( ::spinehx::Skeleton skeleton,Float time,Float alpha);

		virtual Void setFrame( int frameIndex,Float time,Float x,Float y);
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

#endif /* INCLUDED_spinehx_TranslateTimeline */ 
