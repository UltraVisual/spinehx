#ifndef INCLUDED_spinehx_BoneData
#define INCLUDED_spinehx_BoneData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,BoneData)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  BoneData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BoneData_obj OBJ_;
		BoneData_obj();
		Void __construct(::String name,::spinehx::BoneData parent);

	public:
		static hx::ObjectPtr< BoneData_obj > __new(::String name,::spinehx::BoneData parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BoneData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BoneData"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void setInheritRotation( bool inheritRotation);
		Dynamic setInheritRotation_dyn();

		virtual bool getInheritRotation( );
		Dynamic getInheritRotation_dyn();

		virtual Void setInheritScale( bool inheritScale);
		Dynamic setInheritScale_dyn();

		virtual bool getInheritScale( );
		Dynamic getInheritScale_dyn();

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

		virtual Void setLength( Float length);
		Dynamic setLength_dyn();

		virtual Float getLength( );
		Dynamic getLength_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual ::spinehx::BoneData getParent( );
		Dynamic getParent_dyn();

		bool inheritRotation;
		bool inheritScale;
		Float scaleY;
		Float scaleX;
		Float rotation;
		Float y;
		Float x;
		Float length;
		::String name;
		::spinehx::BoneData parent;
		static ::spinehx::BoneData copy( ::spinehx::BoneData bone,::spinehx::BoneData parent);
		static Dynamic copy_dyn();

};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_BoneData */ 
