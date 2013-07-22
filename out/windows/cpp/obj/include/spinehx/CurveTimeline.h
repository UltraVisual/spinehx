#ifndef INCLUDED_spinehx_CurveTimeline
#define INCLUDED_spinehx_CurveTimeline

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <spinehx/Timeline.h>
HX_DECLARE_CLASS1(spinehx,CurveTimeline)
HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS1(spinehx,Timeline)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  CurveTimeline_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CurveTimeline_obj OBJ_;
		CurveTimeline_obj();
		Void __construct(int frameCount);

	public:
		static hx::ObjectPtr< CurveTimeline_obj > __new(int frameCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CurveTimeline_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::spinehx::Timeline_obj *()
			{ return new ::spinehx::Timeline_delegate_< CurveTimeline_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("CurveTimeline"); }

		virtual Float getCurvePercent( int frameIndex,Float percent);
		Dynamic getCurvePercent_dyn();

		virtual Void setCurve( int frameIndex,Float cx1,Float cy1,Float cx2,Float cy2);
		Dynamic setCurve_dyn();

		virtual Void setStepped( int frameIndex);
		Dynamic setStepped_dyn();

		virtual Void setLinear( int frameIndex);
		Dynamic setLinear_dyn();

		virtual int getFrameCount( );
		Dynamic getFrameCount_dyn();

		virtual Void apply( ::spinehx::Skeleton skeleton,Float time,Float alpha);
		Dynamic apply_dyn();

		Array< Float > curves;
};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_CurveTimeline */ 
