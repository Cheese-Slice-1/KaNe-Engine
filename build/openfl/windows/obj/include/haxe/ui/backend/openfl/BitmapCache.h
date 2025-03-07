// Generated by Haxe 4.3.6
#ifndef INCLUDED_haxe_ui_backend_openfl_BitmapCache
#define INCLUDED_haxe_ui_backend_openfl_BitmapCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,backend,openfl,BitmapCache)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace haxe{
namespace ui{
namespace backend{
namespace openfl{


class HXCPP_CLASS_ATTRIBUTES BitmapCache_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BitmapCache_obj OBJ_;
		BitmapCache_obj();

	public:
		enum { _hx_ClassId = 0x1bdc1075 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.backend.openfl.BitmapCache")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.backend.openfl.BitmapCache"); }
		static ::hx::ObjectPtr< BitmapCache_obj > __new();
		static ::hx::ObjectPtr< BitmapCache_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BitmapCache_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BitmapCache",b3,6f,9d,65); }

		static  ::haxe::ui::backend::openfl::BitmapCache _instance;
		static  ::haxe::ui::backend::openfl::BitmapCache instance;
		static  ::haxe::ui::backend::openfl::BitmapCache get_instance();
		static ::Dynamic get_instance_dyn();

		static ::String rectId( ::openfl::geom::Rectangle rc);
		static ::Dynamic rectId_dyn();

		 ::haxe::ds::StringMap _cache;
		 ::openfl::display::BitmapData get(::String id);
		::Dynamic get_dyn();

		void set(::String id, ::openfl::display::BitmapData bmpData);
		::Dynamic set_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl

#endif /* INCLUDED_haxe_ui_backend_openfl_BitmapCache */ 
