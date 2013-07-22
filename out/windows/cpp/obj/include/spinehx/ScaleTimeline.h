#ifndef INCLUDED_spinehx_ScaleTimeline
#define INCLUDED_spinehx_ScaleTimeline

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <spinehx/TranslateTimeline.h>
HX_DECLARE_CLASS1(spinehx,CurveTimeline)
HX_DECLARE_CLASS1(spinehx,ScaleTimeline)
HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS1(spinehx,Timeline)
HX_DECLARE_CLASS1(spinehx,TranslateTimeline)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  ScaleTimeline_obj : public ::spinehx::TranslateTimeline_obj{
	public:
		typedef ::spinehx::TranslateTimeline_obj super;
		typedef ScaleTimeline_obj OBJ_;
		ScaleTimeline_obj();
		Void __construct(int frameCount);

	public:
		static hx::ObjectPtr< ScaleTimeline_obj > __new(int frameCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ScaleTimeline_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ScaleTimeline"); }

		virtual Void apply( ::spinehx::Skeleton skeleton,Float time,Float alpha);

};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_ScaleTimeline */ 
