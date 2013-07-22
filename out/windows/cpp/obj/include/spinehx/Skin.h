#ifndef INCLUDED_spinehx_Skin
#define INCLUDED_spinehx_Skin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS1(spinehx,Skin)
HX_DECLARE_CLASS2(spinehx,attachments,Attachment)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  Skin_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Skin_obj OBJ_;
		Skin_obj();
		Void __construct(::String name);

	public:
		static hx::ObjectPtr< Skin_obj > __new(::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Skin_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Skin"); }

		virtual Void attachAll( ::spinehx::Skeleton skeleton,::spinehx::Skin oldSkin);
		Dynamic attachAll_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void findAttachmentsForSlot( int slotIndex,Array< ::Dynamic > attachments);
		Dynamic findAttachmentsForSlot_dyn();

		virtual Void findNamesForSlot( int slotIndex,Array< ::String > names);
		Dynamic findNamesForSlot_dyn();

		virtual ::spinehx::attachments::Attachment getAttachment( int slotIndex,::String name);
		Dynamic getAttachment_dyn();

		virtual Void addAttachment( int slotIndex,::String name,::spinehx::attachments::Attachment attachment);
		Dynamic addAttachment_dyn();

		::haxe::ds::StringMap attachments;
		::String name;
};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_Skin */ 
