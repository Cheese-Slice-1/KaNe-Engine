// Generated by Haxe 4.3.6
#ifndef INCLUDED_haxe_ui_validators_EmailValidator
#define INCLUDED_haxe_ui_validators_EmailValidator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_validators_PatternValidator
#include <haxe/ui/validators/PatternValidator.h>
#endif
HX_DECLARE_CLASS3(haxe,ui,validators,EmailValidator)
HX_DECLARE_CLASS3(haxe,ui,validators,IValidator)
HX_DECLARE_CLASS3(haxe,ui,validators,PatternValidator)
HX_DECLARE_CLASS3(haxe,ui,validators,Validator)

namespace haxe{
namespace ui{
namespace validators{


class HXCPP_CLASS_ATTRIBUTES EmailValidator_obj : public  ::haxe::ui::validators::PatternValidator_obj
{
	public:
		typedef  ::haxe::ui::validators::PatternValidator_obj super;
		typedef EmailValidator_obj OBJ_;
		EmailValidator_obj();

	public:
		enum { _hx_ClassId = 0x5f9775d9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.validators.EmailValidator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.validators.EmailValidator"); }
		static ::hx::ObjectPtr< EmailValidator_obj > __new();
		static ::hx::ObjectPtr< EmailValidator_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EmailValidator_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EmailValidator",36,9d,1f,f4); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace validators

#endif /* INCLUDED_haxe_ui_validators_EmailValidator */ 
