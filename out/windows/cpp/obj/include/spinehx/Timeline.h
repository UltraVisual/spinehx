#ifndef INCLUDED_spinehx_Timeline
#define INCLUDED_spinehx_Timeline

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,Skeleton)
HX_DECLARE_CLASS1(spinehx,Timeline)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  Timeline_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Timeline_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void apply( ::spinehx::Skeleton skeleton,Float time,Float alpha)=0;
		Dynamic apply_dyn();
};

#define DELEGATE_spinehx_Timeline \
virtual Void apply( ::spinehx::Skeleton skeleton,Float time,Float alpha) { return mDelegate->apply(skeleton,time,alpha);}  \
virtual Dynamic apply_dyn() { return mDelegate->apply_dyn();}  \


template<typename IMPL>
class Timeline_delegate_ : public Timeline_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Timeline_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_spinehx_Timeline
};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_Timeline */ 
