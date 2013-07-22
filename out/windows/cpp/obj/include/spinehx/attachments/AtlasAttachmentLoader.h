#ifndef INCLUDED_spinehx_attachments_AtlasAttachmentLoader
#define INCLUDED_spinehx_attachments_AtlasAttachmentLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <spinehx/attachments/AttachmentLoader.h>
HX_DECLARE_CLASS1(spinehx,Skin)
HX_DECLARE_CLASS2(spinehx,atlas,TextureAtlas)
HX_DECLARE_CLASS2(spinehx,attachments,AtlasAttachmentLoader)
HX_DECLARE_CLASS2(spinehx,attachments,Attachment)
HX_DECLARE_CLASS2(spinehx,attachments,AttachmentLoader)
HX_DECLARE_CLASS2(spinehx,attachments,AttachmentType)
namespace spinehx{
namespace attachments{


class HXCPP_CLASS_ATTRIBUTES  AtlasAttachmentLoader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AtlasAttachmentLoader_obj OBJ_;
		AtlasAttachmentLoader_obj();
		Void __construct(::spinehx::atlas::TextureAtlas atlas);

	public:
		static hx::ObjectPtr< AtlasAttachmentLoader_obj > __new(::spinehx::atlas::TextureAtlas atlas);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AtlasAttachmentLoader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::spinehx::attachments::AttachmentLoader_obj *()
			{ return new ::spinehx::attachments::AttachmentLoader_delegate_< AtlasAttachmentLoader_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("AtlasAttachmentLoader"); }

		virtual ::spinehx::attachments::Attachment newAttachment( ::spinehx::Skin skin,::spinehx::attachments::AttachmentType type,::String name);
		Dynamic newAttachment_dyn();

		::spinehx::atlas::TextureAtlas atlas;
};

} // end namespace spinehx
} // end namespace attachments

#endif /* INCLUDED_spinehx_attachments_AtlasAttachmentLoader */ 
