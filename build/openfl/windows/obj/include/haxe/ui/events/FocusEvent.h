// Generated by Haxe 4.3.6
#ifndef INCLUDED_haxe_ui_events_FocusEvent
#define INCLUDED_haxe_ui_events_FocusEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,EventBase)
HX_DECLARE_CLASS3(haxe,ui,backend,EventImpl)
HX_DECLARE_CLASS3(haxe,ui,events,FocusEvent)
HX_DECLARE_CLASS3(haxe,ui,events,UIEvent)

namespace haxe{
namespace ui{
namespace events{


class HXCPP_CLASS_ATTRIBUTES FocusEvent_obj : public  ::haxe::ui::events::UIEvent_obj
{
	public:
		typedef  ::haxe::ui::events::UIEvent_obj super;
		typedef FocusEvent_obj OBJ_;
		FocusEvent_obj();

	public:
		enum { _hx_ClassId = 0x0fd7761d };

		void __construct(::String type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.events.FocusEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.events.FocusEvent"); }
		static ::hx::ObjectPtr< FocusEvent_obj > __new(::String type);
		static ::hx::ObjectPtr< FocusEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FocusEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FocusEvent",42,6d,d7,2e); }

		static void __boot();
		static ::String FOCUS_IN;
		static ::String FOCUS_OUT;
		 ::haxe::ui::events::UIEvent clone();

};

} // end namespace haxe
} // end namespace ui
} // end namespace events

#endif /* INCLUDED_haxe_ui_events_FocusEvent */ 
