#ifndef INCLUDED_spinehx_Animation
#define INCLUDED_spinehx_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,Animation)
HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS1(spinehx,Timeline)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  Animation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();
		Void __construct(::String name,Array< ::Dynamic > timelines,Float duration);

	public:
		static hx::ObjectPtr< Animation_obj > __new(::String name,Array< ::Dynamic > timelines,Float duration);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Animation_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Animation"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual Void mix( ::spinehx::Skeleton skeleton,Float time,bool loop,Float alpha);
		Dynamic mix_dyn();

		virtual Void apply( ::spinehx::Skeleton skeleton,Float time,bool loop);
		Dynamic apply_dyn();

		virtual Void setDuration( Float duration);
		Dynamic setDuration_dyn();

		virtual Float getDuration( );
		Dynamic getDuration_dyn();

		virtual Array< ::Dynamic > getTimelines( );
		Dynamic getTimelines_dyn();

		Float duration;
		Array< ::Dynamic > timelines;
		::String name;
		static int binarySearch( Array< Float > values,Float target,int step);
		static Dynamic binarySearch_dyn();

		static int linearSearch( Array< Float > values,Float target,int step);
		static Dynamic linearSearch_dyn();

};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_Animation */ 
