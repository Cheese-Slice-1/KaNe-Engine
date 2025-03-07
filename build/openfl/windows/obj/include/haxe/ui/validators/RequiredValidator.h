// Generated by Haxe 4.3.6
#ifndef INCLUDED_haxe_ui_validators_RequiredValidator
#define INCLUDED_haxe_ui_validators_RequiredValidator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_validators_Validator
#include <haxe/ui/validators/Validator.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentBase)
HX_DECLARE_CLASS3(haxe,ui,backend,ComponentImpl)
HX_DECLARE_CLASS3(haxe,ui,core,Component)
HX_DECLARE_CLASS3(haxe,ui,core,IClonable)
HX_DECLARE_CLASS3(haxe,ui,core,IComponentContainer)
HX_DECLARE_CLASS3(haxe,ui,core,IEventDispatcher)
HX_DECLARE_CLASS3(haxe,ui,validation,IValidating)
HX_DECLARE_CLASS3(haxe,ui,validators,IValidator)
HX_DECLARE_CLASS3(haxe,ui,validators,RequiredValidator)
HX_DECLARE_CLASS3(haxe,ui,validators,Validator)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace haxe{
namespace ui{
namespace validators{


class HXCPP_CLASS_ATTRIBUTES RequiredValidator_obj : public  ::haxe::ui::validators::Validator_obj
{
	public:
		typedef  ::haxe::ui::validators::Validator_obj super;
		typedef RequiredValidator_obj OBJ_;
		RequiredValidator_obj();

	public:
		enum { _hx_ClassId = 0x175c8f58 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.validators.RequiredValidator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.validators.RequiredValidator"); }
		static ::hx::ObjectPtr< RequiredValidator_obj > __new();
		static ::hx::ObjectPtr< RequiredValidator_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RequiredValidator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RequiredValidator",53,26,b1,00); }

		void setup( ::haxe::ui::core::Component component);

		 ::Dynamic validateString(::String s);

		void onValid( ::haxe::ui::core::Component component);

		void onInvalid( ::haxe::ui::core::Component component);

};

} // end namespace haxe
} // end namespace ui
} // end namespace validators

#endif /* INCLUDED_haxe_ui_validators_RequiredValidator */ 
