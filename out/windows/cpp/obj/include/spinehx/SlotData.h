#ifndef INCLUDED_spinehx_SlotData
#define INCLUDED_spinehx_SlotData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,BoneData)
HX_DECLARE_CLASS1(spinehx,Color)
HX_DECLARE_CLASS1(spinehx,SlotData)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  SlotData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SlotData_obj OBJ_;
		SlotData_obj();
		Void __construct(::String name,::spinehx::BoneData boneData);

	public:
		static hx::ObjectPtr< SlotData_obj > __new(::String name,::spinehx::BoneData boneData);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SlotData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SlotData"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void setAdditiveBlending( bool additiveBlending);
		Dynamic setAdditiveBlending_dyn();

		virtual bool getAdditiveBlending( );
		Dynamic getAdditiveBlending_dyn();

		virtual ::String getAttachmentName( );
		Dynamic getAttachmentName_dyn();

		virtual Void setAttachmentName( ::String attachmentName);
		Dynamic setAttachmentName_dyn();

		virtual ::spinehx::Color getColor( );
		Dynamic getColor_dyn();

		virtual ::spinehx::BoneData getBoneData( );
		Dynamic getBoneData_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

		bool additiveBlending;
		::String attachmentName;
		::spinehx::Color color;
		::spinehx::BoneData boneData;
		::String name;
};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_SlotData */ 
