// Generated by Haxe 4.3.6
#ifndef INCLUDED_haxe_ui_components__TextArea_TextAreaHelper
#define INCLUDED_haxe_ui_components__TextArea_TextAreaHelper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,components,TextArea)
HX_DECLARE_CLASS4(haxe,ui,components,_TextArea,TextAreaHelper)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,ICompositeInteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,core,IValueComponent)
HX_DECLARE_CLASS3(haxe,ui,core,InteractiveComponent)
HX_DECLARE_CLASS3(haxe,ui,focus,IFocusable)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace components{
namespace _TextArea{


class HXCPP_CLASS_ATTRIBUTES TextAreaHelper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextAreaHelper_obj OBJ_;
		TextAreaHelper_obj();

	public:
		enum { _hx_ClassId = 0x6b3c3ec9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.components._TextArea.TextAreaHelper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.components._TextArea.TextAreaHelper"); }

		inline static ::hx::ObjectPtr< TextAreaHelper_obj > __new() {
			::hx::ObjectPtr< TextAreaHelper_obj > __this = new TextAreaHelper_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TextAreaHelper_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TextAreaHelper_obj *__this = (TextAreaHelper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextAreaHelper_obj), false, "haxe.ui.components._TextArea.TextAreaHelper"));
			*(void **)__this = TextAreaHelper_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextAreaHelper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextAreaHelper",08,04,2a,ea); }

		static void validateText( ::haxe::ui::components::TextArea textarea,::String text);
		static ::Dynamic validateText_dyn();

		static void validateHtmlText( ::haxe::ui::components::TextArea textarea,::String htmlText);
		static ::Dynamic validateHtmlText_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextArea

#endif /* INCLUDED_haxe_ui_components__TextArea_TextAreaHelper */ 
