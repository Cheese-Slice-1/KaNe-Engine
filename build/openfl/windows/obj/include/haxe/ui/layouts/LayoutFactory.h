// Generated by Haxe 4.3.6
#ifndef INCLUDED_haxe_ui_layouts_LayoutFactory
#define INCLUDED_haxe_ui_layouts_LayoutFactory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)
HX_DECLARE_CLASS3(haxe,ui,layouts,LayoutFactory)

namespace haxe{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES LayoutFactory_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LayoutFactory_obj OBJ_;
		LayoutFactory_obj();

	public:
		enum { _hx_ClassId = 0x08afed15 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.layouts.LayoutFactory")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.layouts.LayoutFactory"); }

		inline static ::hx::ObjectPtr< LayoutFactory_obj > __new() {
			::hx::ObjectPtr< LayoutFactory_obj > __this = new LayoutFactory_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LayoutFactory_obj > __alloc(::hx::Ctx *_hx_ctx) {
			LayoutFactory_obj *__this = (LayoutFactory_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LayoutFactory_obj), false, "haxe.ui.layouts.LayoutFactory"));
			*(void **)__this = LayoutFactory_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LayoutFactory_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LayoutFactory",20,6f,72,b0); }

		static void __boot();
		static  ::haxe::ds::StringMap _map;
		static  ::haxe::ui::layouts::Layout createFromName(::String name);
		static ::Dynamic createFromName_dyn();

		static void _hx_register(::String name,::String className);
		static ::Dynamic _hx_register_dyn();

		static ::String lookupClass(::String name);
		static ::Dynamic lookupClass_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_haxe_ui_layouts_LayoutFactory */ 
