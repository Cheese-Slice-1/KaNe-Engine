// Generated by Haxe 4.3.6
#ifndef INCLUDED_haxe_ui_components__TextArea_TextAreaLayout
#define INCLUDED_haxe_ui_components__TextArea_TextAreaLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,components,_TextArea,TextAreaLayout)
HX_DECLARE_CLASS3(haxe,ui,geom,Size)
HX_DECLARE_CLASS3(haxe,ui,layouts,DefaultLayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,ILayout)
HX_DECLARE_CLASS3(haxe,ui,layouts,Layout)

namespace haxe{
namespace ui{
namespace components{
namespace _TextArea{


class HXCPP_CLASS_ATTRIBUTES TextAreaLayout_obj : public  ::haxe::ui::layouts::DefaultLayout_obj
{
	public:
		typedef  ::haxe::ui::layouts::DefaultLayout_obj super;
		typedef TextAreaLayout_obj OBJ_;
		TextAreaLayout_obj();

	public:
		enum { _hx_ClassId = 0x50cff1cd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.components._TextArea.TextAreaLayout")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.components._TextArea.TextAreaLayout"); }
		static ::hx::ObjectPtr< TextAreaLayout_obj > __new();
		static ::hx::ObjectPtr< TextAreaLayout_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextAreaLayout_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextAreaLayout",44,35,94,3e); }

		::String iconPosition;
		::String get_iconPosition();
		::Dynamic get_iconPosition_dyn();

		void repositionChildren();

		void resizeChildren();

		 ::haxe::ui::geom::Size get_usableSize();

		 ::haxe::ui::layouts::Layout cloneLayout();

		 ::haxe::ui::layouts::Layout self();

};

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _TextArea

#endif /* INCLUDED_haxe_ui_components__TextArea_TextAreaLayout */ 
