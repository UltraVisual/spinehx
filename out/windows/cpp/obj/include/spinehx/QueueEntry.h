#ifndef INCLUDED_spinehx_QueueEntry
#define INCLUDED_spinehx_QueueEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(spinehx,Animation)
HX_DECLARE_CLASS1(spinehx,QueueEntry)
namespace spinehx{


class HXCPP_CLASS_ATTRIBUTES  QueueEntry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QueueEntry_obj OBJ_;
		QueueEntry_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< QueueEntry_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~QueueEntry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("QueueEntry"); }

		Float delay;
		bool loop;
		::spinehx::Animation animation;
};

} // end namespace spinehx

#endif /* INCLUDED_spinehx_QueueEntry */ 
