#ifndef INCLUDED_spinehx_attachments_Mode
#define INCLUDED_spinehx_attachments_Mode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(spinehx,attachments,Mode)
namespace spinehx{
namespace attachments{


class Mode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Mode_obj OBJ_;

	public:
		Mode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("spinehx.attachments.Mode"); }
		::String __ToString() const { return HX_CSTRING("Mode.") + tag; }

		static ::spinehx::attachments::Mode backward;
		static inline ::spinehx::attachments::Mode backward_dyn() { return backward; }
		static ::spinehx::attachments::Mode backwardLoop;
		static inline ::spinehx::attachments::Mode backwardLoop_dyn() { return backwardLoop; }
		static ::spinehx::attachments::Mode forward;
		static inline ::spinehx::attachments::Mode forward_dyn() { return forward; }
		static ::spinehx::attachments::Mode forwardLoop;
		static inline ::spinehx::attachments::Mode forwardLoop_dyn() { return forwardLoop; }
		static ::spinehx::attachments::Mode pingPong;
		static inline ::spinehx::attachments::Mode pingPong_dyn() { return pingPong; }
		static ::spinehx::attachments::Mode random;
		static inline ::spinehx::attachments::Mode random_dyn() { return random; }
};

} // end namespace spinehx
} // end namespace attachments

#endif /* INCLUDED_spinehx_attachments_Mode */ 
