// Generated by Haxe 4.3.6
#ifndef INCLUDED_haxe_ui_backend_openfl_EventMapper
#define INCLUDED_haxe_ui_backend_openfl_EventMapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,backend,openfl,EventMapper)

namespace haxe{
namespace ui{
namespace backend{
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES EventMapper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EventMapper_obj OBJ_;
		EventMapper_obj();

	public:
		enum { _hx_ClassId = 0x11251af1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.backend.openfl.EventMapper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.backend.openfl.EventMapper"); }

		inline static ::hx::ObjectPtr< EventMapper_obj > __new() {
			::hx::ObjectPtr< EventMapper_obj > __this = new EventMapper_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EventMapper_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EventMapper_obj *__this = (EventMapper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EventMapper_obj), false, "haxe.ui.backend.openfl.EventMapper"));
			*(void **)__this = EventMapper_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EventMapper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EventMapper",5b,b7,a1,f0); }

		static void __boot();
		static  ::haxe::ds::StringMap HAXEUI_TO_OPENFL;
		static  ::haxe::ds::StringMap OPENFL_TO_HAXEUI;
};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl

#endif /* INCLUDED_haxe_ui_backend_openfl_EventMapper */ 
