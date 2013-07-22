#ifndef INCLUDED_spinehx_Skeleton
#define INCLUDED_spinehx_Skeleton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,Bone)
HX_DECLARE_CLASS1(spinehx,Color)
HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS1(spinehx,SkeletonData)
HX_DECLARE_CLASS1(spinehx,Skin)
HX_DECLARE_CLASS1(spinehx,Slot)
HX_DECLARE_CLASS2(spinehx,attachments,Attachment)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  Skeleton_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Skeleton_obj OBJ_;
		Skeleton_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Skeleton_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Skeleton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Skeleton"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void update( Float delta);
		Dynamic update_dyn();

		virtual Void setTime( Float time);
		Dynamic setTime_dyn();

		virtual Float getTime( );
		Dynamic getTime_dyn();

		virtual Void setY( Float y);
		Dynamic setY_dyn();

		virtual Float getY( );
		Dynamic getY_dyn();

		virtual Void setX( Float x);
		Dynamic setX_dyn();

		virtual Float getX( );
		Dynamic getX_dyn();

		virtual Void setFlipY( bool flipY);
		Dynamic setFlipY_dyn();

		virtual bool getFlipY( );
		Dynamic getFlipY_dyn();

		virtual Void setFlipX( bool flipX);
		Dynamic setFlipX_dyn();

		virtual bool getFlipX( );
		Dynamic getFlipX_dyn();

		virtual ::spinehx::Color getColor( );
		Dynamic getColor_dyn();

		virtual Void setAttachment( ::String slotName,::String attachmentName);
		Dynamic setAttachment_dyn();

		virtual ::spinehx::attachments::Attachment getAttachment( int slotIndex,::String attachmentName);
		Dynamic getAttachment_dyn();

		virtual ::spinehx::attachments::Attachment getAttachmentByName( ::String slotName,::String attachmentName);
		Dynamic getAttachmentByName_dyn();

		virtual Void setSkin( ::spinehx::Skin newSkin);
		Dynamic setSkin_dyn();

		virtual Void setSkinByName( ::String skinName);
		Dynamic setSkinByName_dyn();

		virtual ::spinehx::Skin getSkin( );
		Dynamic getSkin_dyn();

		virtual Array< ::Dynamic > getDrawOrder( );
		Dynamic getDrawOrder_dyn();

		virtual int findSlotIndex( ::String slotName);
		Dynamic findSlotIndex_dyn();

		virtual ::spinehx::Slot findSlot( ::String slotName);
		Dynamic findSlot_dyn();

		virtual Array< ::Dynamic > getSlots( );
		Dynamic getSlots_dyn();

		virtual int findBoneIndex( ::String boneName);
		Dynamic findBoneIndex_dyn();

		virtual ::spinehx::Bone findBone( ::String boneName);
		Dynamic findBone_dyn();

		virtual ::spinehx::Bone getRootBone( );
		Dynamic getRootBone_dyn();

		virtual Array< ::Dynamic > getBones( );
		Dynamic getBones_dyn();

		virtual ::spinehx::SkeletonData getData( );
		Dynamic getData_dyn();

		virtual Void setSlotsToSetupPose( );
		Dynamic setSlotsToSetupPose_dyn();

		virtual Void setBonesToSetupPose( );
		Dynamic setBonesToSetupPose_dyn();

		virtual Void setToSetupPose( );
		Dynamic setToSetupPose_dyn();

		virtual Void updateWorldTransform( );
		Dynamic updateWorldTransform_dyn();

		Float y;
		Float x;
		bool flipY;
		bool flipX;
		Float time;
		::spinehx::Color color;
		::spinehx::Skin skin;
		Array< ::Dynamic > drawOrder;
		Array< ::Dynamic > slots;
		Array< ::Dynamic > bones;
		::spinehx::SkeletonData data;
		static ::spinehx::Skeleton create( ::spinehx::SkeletonData data);
		static Dynamic create_dyn();

		static ::spinehx::Skeleton copy( ::spinehx::Skeleton skeleton);
		static Dynamic copy_dyn();

};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_Skeleton */ 
