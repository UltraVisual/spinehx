#ifndef INCLUDED_spinehx_AnimationState
#define INCLUDED_spinehx_AnimationState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,Animation)
HX_DECLARE_CLASS1(spinehx,AnimationState)
HX_DECLARE_CLASS1(spinehx,AnimationStateData)
HX_DECLARE_CLASS1(spinehx,QueueEntry)
HX_DECLARE_CLASS1(spinehx,Skeleton)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  AnimationState_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AnimationState_obj OBJ_;
		AnimationState_obj();
		Void __construct(::spinehx::AnimationStateData data);

	public:
		static hx::ObjectPtr< AnimationState_obj > __new(::spinehx::AnimationStateData data);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AnimationState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AnimationState"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::spinehx::AnimationStateData getData( );
		Dynamic getData_dyn();

		virtual bool isComplete( );
		Dynamic isComplete_dyn();

		virtual Void setTime( Float time);
		Dynamic setTime_dyn();

		virtual Float getTime( );
		Dynamic getTime_dyn();

		virtual ::spinehx::Animation getAnimation( );
		Dynamic getAnimation_dyn();

		virtual Void addAnimation( ::spinehx::Animation animation,bool loop,Float delay);
		Dynamic addAnimation_dyn();

		virtual Void addAnimationSimple( ::spinehx::Animation animation,bool loop);
		Dynamic addAnimationSimple_dyn();

		virtual Void addAnimationByName( ::String animationName,bool loop,Float delay);
		Dynamic addAnimationByName_dyn();

		virtual Void addAnimationByNameSimple( ::String animationName,bool loop);
		Dynamic addAnimationByNameSimple_dyn();

		virtual Void setAnimation( ::spinehx::Animation animation,bool loop);
		Dynamic setAnimation_dyn();

		virtual Void setAnimationByName( ::String animationName,bool loop);
		Dynamic setAnimationByName_dyn();

		virtual Void setAnimationInternal( ::spinehx::Animation animation,bool loop);
		Dynamic setAnimationInternal_dyn();

		virtual Void clearQueue( );
		Dynamic clearQueue_dyn();

		virtual Void clearAnimation( );
		Dynamic clearAnimation_dyn();

		virtual Void apply( ::spinehx::Skeleton skeleton);
		Dynamic apply_dyn();

		virtual Void update( Float delta);
		Dynamic update_dyn();

		Array< ::Dynamic > queue;
		Float mixDuration;
		Float mixTime;
		bool previousLoop;
		bool currentLoop;
		Float previousTime;
		Float currentTime;
		::spinehx::Animation previous;
		::spinehx::Animation current;
		::spinehx::AnimationStateData data;
};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_AnimationState */ 
