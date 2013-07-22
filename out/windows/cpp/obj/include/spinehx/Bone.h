#ifndef INCLUDED_spinehx_Bone
#define INCLUDED_spinehx_Bone

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,Bone)
HX_DECLARE_CLASS1(spinehx,BoneData)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  Bone_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Bone_obj OBJ_;
		Bone_obj();
		Void __construct(::spinehx::BoneData data,::spinehx::Bone parent);

	public:
		static hx::ObjectPtr< Bone_obj > __new(::spinehx::BoneData data,::spinehx::Bone parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Bone_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Bone"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float getWorldScaleY( );
		Dynamic getWorldScaleY_dyn();

		virtual Float getWorldScaleX( );
		Dynamic getWorldScaleX_dyn();

		virtual Float getWorldRotation( );
		Dynamic getWorldRotation_dyn();

		virtual Float getWorldY( );
		Dynamic getWorldY_dyn();

		virtual Float getWorldX( );
		Dynamic getWorldX_dyn();

		virtual Float getM11( );
		Dynamic getM11_dyn();

		virtual Float getM10( );
		Dynamic getM10_dyn();

		virtual Float getM01( );
		Dynamic getM01_dyn();

		virtual Float getM00( );
		Dynamic getM00_dyn();

		virtual Void setScaleY( Float scaleY);
		Dynamic setScaleY_dyn();

		virtual Float getScaleY( );
		Dynamic getScaleY_dyn();

		virtual Void setScaleX( Float scaleX);
		Dynamic setScaleX_dyn();

		virtual Float getScaleX( );
		Dynamic getScaleX_dyn();

		virtual Void setRotation( Float rotation);
		Dynamic setRotation_dyn();

		virtual Float getRotation( );
		Dynamic getRotation_dyn();

		virtual Void setY( Float y);
		Dynamic setY_dyn();

		virtual Float getY( );
		Dynamic getY_dyn();

		virtual Void setX( Float x);
		Dynamic setX_dyn();

		virtual Float getX( );
		Dynamic getX_dyn();

		virtual ::spinehx::Bone getParent( );
		Dynamic getParent_dyn();

		virtual ::spinehx::BoneData getData( );
		Dynamic getData_dyn();

		virtual Void setToSetupPose( );
		Dynamic setToSetupPose_dyn();

		virtual Void updateWorldTransform( bool flipX,bool flipY);
		Dynamic updateWorldTransform_dyn();

		Float worldScaleY;
		Float worldScaleX;
		Float worldRotation;
		Float worldY;
		Float m11;
		Float m10;
		Float worldX;
		Float m01;
		Float m00;
		Float scaleY;
		Float scaleX;
		Float rotation;
		Float y;
		Float x;
		::spinehx::Bone parent;
		::spinehx::BoneData data;
		static ::spinehx::Bone copy( ::spinehx::Bone bone,::spinehx::Bone parent);
		static Dynamic copy_dyn();

};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_Bone */ 
