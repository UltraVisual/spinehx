#ifndef INCLUDED_spinehx_AttachmentTimeline
#define INCLUDED_spinehx_AttachmentTimeline

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <spinehx/Timeline.h>
HX_DECLARE_CLASS1(spinehx,AttachmentTimeline)
HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS1(spinehx,Timeline)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  AttachmentTimeline_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AttachmentTimeline_obj OBJ_;
		AttachmentTimeline_obj();
		Void __construct(int frameCount);

	public:
		static hx::ObjectPtr< AttachmentTimeline_obj > __new(int frameCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AttachmentTimeline_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::spinehx::Timeline_obj *()
			{ return new ::spinehx::Timeline_delegate_< AttachmentTimeline_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AttachmentTimeline"); }

		virtual Void apply( ::spinehx::Skeleton skeleton,Float time,Float alpha);
		Dynamic apply_dyn();

		virtual Void setFrame( int frameIndex,Float time,::String attachmentName);
		Dynamic setFrame_dyn();

		virtual Array< ::String > getAttachmentNames( );
		Dynamic getAttachmentNames_dyn();

		virtual Array< Float > getFrames( );
		Dynamic getFrames_dyn();

		virtual Void setSlotIndex( int slotIndex);
		Dynamic setSlotIndex_dyn();

		virtual int getSlotIndex( );
		Dynamic getSlotIndex_dyn();

		virtual int getFrameCount( );
		Dynamic getFrameCount_dyn();

		Array< ::String > attachmentNames;
		Array< Float > frames;
		int slotIndex;
};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_AttachmentTimeline */ 
