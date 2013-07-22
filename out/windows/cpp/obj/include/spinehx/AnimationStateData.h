#ifndef INCLUDED_spinehx_AnimationStateData
#define INCLUDED_spinehx_AnimationStateData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(spinehx,Animation)
HX_DECLARE_CLASS1(spinehx,AnimationStateData)
HX_DECLARE_CLASS1(spinehx,SkeletonData)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  AnimationStateData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AnimationStateData_obj OBJ_;
		AnimationStateData_obj();
		Void __construct(::spinehx::SkeletonData skeletonData);

	public:
		static hx::ObjectPtr< AnimationStateData_obj > __new(::spinehx::SkeletonData skeletonData);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AnimationStateData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AnimationStateData"); }

		virtual Float getMix( ::spinehx::Animation _from,::spinehx::Animation _to);
		Dynamic getMix_dyn();

		virtual Void setMix( ::spinehx::Animation _from,::spinehx::Animation _to,Float duration);
		Dynamic setMix_dyn();

		virtual Void setMixByName( ::String fromName,::String toName,Float duration);
		Dynamic setMixByName_dyn();

		virtual ::spinehx::SkeletonData getSkeletonData( );
		Dynamic getSkeletonData_dyn();

		::haxe::ds::StringMap animationToMixTime;
		::spinehx::SkeletonData skeletonData;
		static ::String makeIdByName( ::String name1,::String name2);
		static Dynamic makeIdByName_dyn();

		static ::String makeId( ::spinehx::Animation a1,::spinehx::Animation a2);
		static Dynamic makeId_dyn();

};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_AnimationStateData */ 
