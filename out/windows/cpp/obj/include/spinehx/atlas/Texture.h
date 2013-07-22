#ifndef INCLUDED_spinehx_atlas_Texture
#define INCLUDED_spinehx_atlas_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(spinehx,atlas,Texture)
namespace spinehx{
namespace atlas{


class HXCPP_CLASS_ATTRIBUTES  Texture_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Texture_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void setFilter( ::String minFilter,::String magFilter)=0;
		Dynamic setFilter_dyn();
virtual Void setWrap( ::String uWrap,::String vWrap)=0;
		Dynamic setWrap_dyn();
virtual Void dispose( )=0;
		Dynamic dispose_dyn();
virtual int getHeight( )=0;
		Dynamic getHeight_dyn();
virtual int getWidth( )=0;
		Dynamic getWidth_dyn();
};

#define DELEGATE_spinehx_atlas_Texture \
virtual Void setFilter( ::String minFilter,::String magFilter) { return mDelegate->setFilter(minFilter,magFilter);}  \
virtual Dynamic setFilter_dyn() { return mDelegate->setFilter_dyn();}  \
virtual Void setWrap( ::String uWrap,::String vWrap) { return mDelegate->setWrap(uWrap,vWrap);}  \
virtual Dynamic setWrap_dyn() { return mDelegate->setWrap_dyn();}  \
virtual Void dispose( ) { return mDelegate->dispose();}  \
virtual Dynamic dispose_dyn() { return mDelegate->dispose_dyn();}  \
virtual int getHeight( ) { return mDelegate->getHeight();}  \
virtual Dynamic getHeight_dyn() { return mDelegate->getHeight_dyn();}  \
virtual int getWidth( ) { return mDelegate->getWidth();}  \
virtual Dynamic getWidth_dyn() { return mDelegate->getWidth_dyn();}  \


template<typename IMPL>
class Texture_delegate_ : public Texture_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Texture_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_spinehx_atlas_Texture
};

} // end namespace spinehx
} // end namespace atlas

#endif /* INCLUDED_spinehx_atlas_Texture */ 
