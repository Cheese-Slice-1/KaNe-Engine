// Generated by Haxe 4.3.6
#ifndef INCLUDED_haxe_ui_util_SimpleExpressionEvaluatorOperation
#define INCLUDED_haxe_ui_util_SimpleExpressionEvaluatorOperation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,util,SimpleExpressionEvaluatorOperation)
namespace haxe{
namespace ui{
namespace util{


class SimpleExpressionEvaluatorOperation_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef SimpleExpressionEvaluatorOperation_obj OBJ_;

	public:
		SimpleExpressionEvaluatorOperation_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.ui.util.SimpleExpressionEvaluatorOperation",bc,6e,51,da); }
		::String __ToString() const { return HX_("SimpleExpressionEvaluatorOperation.",4c,37,4a,01) + _hx_tag; }

		static ::haxe::ui::util::SimpleExpressionEvaluatorOperation Add;
		static inline ::haxe::ui::util::SimpleExpressionEvaluatorOperation Add_dyn() { return Add; }
		static ::haxe::ui::util::SimpleExpressionEvaluatorOperation Divide;
		static inline ::haxe::ui::util::SimpleExpressionEvaluatorOperation Divide_dyn() { return Divide; }
		static ::haxe::ui::util::SimpleExpressionEvaluatorOperation Equals;
		static inline ::haxe::ui::util::SimpleExpressionEvaluatorOperation Equals_dyn() { return Equals; }
		static ::haxe::ui::util::SimpleExpressionEvaluatorOperation GreaterThan;
		static inline ::haxe::ui::util::SimpleExpressionEvaluatorOperation GreaterThan_dyn() { return GreaterThan; }
		static ::haxe::ui::util::SimpleExpressionEvaluatorOperation GreaterThanOrEquals;
		static inline ::haxe::ui::util::SimpleExpressionEvaluatorOperation GreaterThanOrEquals_dyn() { return GreaterThanOrEquals; }
		static ::haxe::ui::util::SimpleExpressionEvaluatorOperation LessThan;
		static inline ::haxe::ui::util::SimpleExpressionEvaluatorOperation LessThan_dyn() { return LessThan; }
		static ::haxe::ui::util::SimpleExpressionEvaluatorOperation LessThanOrEquals;
		static inline ::haxe::ui::util::SimpleExpressionEvaluatorOperation LessThanOrEquals_dyn() { return LessThanOrEquals; }
		static ::haxe::ui::util::SimpleExpressionEvaluatorOperation LogicalAnd;
		static inline ::haxe::ui::util::SimpleExpressionEvaluatorOperation LogicalAnd_dyn() { return LogicalAnd; }
		static ::haxe::ui::util::SimpleExpressionEvaluatorOperation LogicalOr;
		static inline ::haxe::ui::util::SimpleExpressionEvaluatorOperation LogicalOr_dyn() { return LogicalOr; }
		static ::haxe::ui::util::SimpleExpressionEvaluatorOperation Multiply;
		static inline ::haxe::ui::util::SimpleExpressionEvaluatorOperation Multiply_dyn() { return Multiply; }
		static ::haxe::ui::util::SimpleExpressionEvaluatorOperation NotEquals;
		static inline ::haxe::ui::util::SimpleExpressionEvaluatorOperation NotEquals_dyn() { return NotEquals; }
		static ::haxe::ui::util::SimpleExpressionEvaluatorOperation Subtract;
		static inline ::haxe::ui::util::SimpleExpressionEvaluatorOperation Subtract_dyn() { return Subtract; }
};

} // end namespace haxe
} // end namespace ui
} // end namespace util

#endif /* INCLUDED_haxe_ui_util_SimpleExpressionEvaluatorOperation */ 
