// Generated by Haxe 4.3.6
#ifndef INCLUDED_haxe_ui_util_ExpressionUtil
#define INCLUDED_haxe_ui_util_ExpressionUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,util,ExpressionUtil)

namespace haxe{
namespace ui{
namespace util{


class HXCPP_CLASS_ATTRIBUTES ExpressionUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ExpressionUtil_obj OBJ_;
		ExpressionUtil_obj();

	public:
		enum { _hx_ClassId = 0x6a73fe3a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ui.util.ExpressionUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ui.util.ExpressionUtil"); }

		inline static ::hx::ObjectPtr< ExpressionUtil_obj > __new() {
			::hx::ObjectPtr< ExpressionUtil_obj > __this = new ExpressionUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ExpressionUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ExpressionUtil_obj *__this = (ExpressionUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ExpressionUtil_obj), false, "haxe.ui.util.ExpressionUtil"));
			*(void **)__this = ExpressionUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ExpressionUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ExpressionUtil",da,d5,c0,a1); }

		static ::String stringToLanguageExpression(::String s,::String localeManager);
		static ::Dynamic stringToLanguageExpression_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_ExpressionUtil */ 
