#ifndef INCLUDED_spinehx_Slot
#define INCLUDED_spinehx_Slot

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,Bone)
HX_DECLARE_CLASS1(spinehx,Color)
HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS1(spinehx,Slot)
HX_DECLARE_CLASS1(spinehx,SlotData)
HX_DECLARE_CLASS2(spinehx,attachments,Attachment)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  Slot_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Slot_obj OBJ_;
		Slot_obj();
		Void __construct(::spinehx::SlotData data,::spinehx::Skeleton skeleton,::spinehx::Bone bone);

	public:
		static hx::ObjectPtr< Slot_obj > __new(::spinehx::SlotData data,::spinehx::Skeleton skeleton,::spinehx::Bone bone);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Slot_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Slot"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void setToSetupPoseDefault( );
		Dynamic setToSetupPoseDefault_dyn();

		virtual Void setToSetupPose( int slotIndex);
		Dynamic setToSetupPose_dyn();

		virtual Float getAttachmentTime( );
		Dynamic getAttachmentTime_dyn();

		virtual Void setAttachmentTime( Float time);
		Dynamic setAttachmentTime_dyn();

		virtual Void setAttachment( ::spinehx::attachments::Attachment attachment);
		Dynamic setAttachment_dyn();

		virtual ::spinehx::attachments::Attachment getAttachment( );
		Dynamic getAttachment_dyn();

		virtual ::spinehx::Color getColor( );
		Dynamic getColor_dyn();

		virtual ::spinehx::Bone getBone( );
		Dynamic getBone_dyn();

		virtual ::spinehx::Skeleton getSkeleton( );
		Dynamic getSkeleton_dyn();

		virtual ::spinehx::SlotData getData( );
		Dynamic getData_dyn();

		Float attachmentTime;
		::spinehx::attachments::Attachment attachment;
		::spinehx::Color color;
		::spinehx::Skeleton skeleton;
		::spinehx::Bone bone;
		::spinehx::SlotData data;
		static ::spinehx::Slot copy( ::spinehx::Slot slot,::spinehx::Skeleton skeleton,::spinehx::Bone bone);
		static Dynamic copy_dyn();

};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_Slot */ 
