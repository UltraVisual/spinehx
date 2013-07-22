#ifndef INCLUDED_spinehx_SkeletonData
#define INCLUDED_spinehx_SkeletonData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,Animation)
HX_DECLARE_CLASS1(spinehx,BoneData)
HX_DECLARE_CLASS1(spinehx,SkeletonData)
HX_DECLARE_CLASS1(spinehx,Skin)
HX_DECLARE_CLASS1(spinehx,SlotData)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  SkeletonData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SkeletonData_obj OBJ_;
		SkeletonData_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SkeletonData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SkeletonData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SkeletonData"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void setName( ::String name);
		Dynamic setName_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual ::spinehx::Animation findAnimation( ::String animationName);
		Dynamic findAnimation_dyn();

		virtual Array< ::Dynamic > getAnimations( );
		Dynamic getAnimations_dyn();

		virtual Void addAnimation( ::spinehx::Animation animation);
		Dynamic addAnimation_dyn();

		virtual Array< ::Dynamic > getSkins( );
		Dynamic getSkins_dyn();

		virtual ::spinehx::Skin findSkin( ::String skinName);
		Dynamic findSkin_dyn();

		virtual Void addSkin( ::spinehx::Skin skin);
		Dynamic addSkin_dyn();

		virtual Void setDefaultSkin( ::spinehx::Skin defaultSkin);
		Dynamic setDefaultSkin_dyn();

		virtual ::spinehx::Skin getDefaultSkin( );
		Dynamic getDefaultSkin_dyn();

		virtual int findSlotIndex( ::String slotName);
		Dynamic findSlotIndex_dyn();

		virtual ::spinehx::SlotData findSlot( ::String slotName);
		Dynamic findSlot_dyn();

		virtual Array< ::Dynamic > getSlots( );
		Dynamic getSlots_dyn();

		virtual Void addSlot( ::spinehx::SlotData slot);
		Dynamic addSlot_dyn();

		virtual int findBoneIndex( ::String boneName);
		Dynamic findBoneIndex_dyn();

		virtual ::spinehx::BoneData findBone( ::String boneName);
		Dynamic findBone_dyn();

		virtual Array< ::Dynamic > getBones( );
		Dynamic getBones_dyn();

		virtual Void addBone( ::spinehx::BoneData bone);
		Dynamic addBone_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		::spinehx::Skin defaultSkin;
		Array< ::Dynamic > animations;
		Array< ::Dynamic > skins;
		Array< ::Dynamic > slots;
		Array< ::Dynamic > bones;
		::String name;
};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_SkeletonData */ 
