// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_CallLaterImpl
#include <haxe/ui/backend/CallLaterImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_TimerImpl
#include <haxe/ui/backend/TimerImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_util_Timer
#include <haxe/ui/util/Timer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ba418526ce7b3618_5_new,"haxe.ui.backend.CallLaterImpl","new",0xecae2eb4,"haxe.ui.backend.CallLaterImpl.new","haxe/ui/backend/CallLaterImpl.hx",5,0xcf690bdd)
namespace haxe{
namespace ui{
namespace backend{

void CallLaterImpl_obj::__construct( ::Dynamic fn){
            	HX_STACKFRAME(&_hx_pos_ba418526ce7b3618_5_new)
HXDLIN(   5)		::haxe::ui::util::Timer_obj::delay(fn,0);
            	}

Dynamic CallLaterImpl_obj::__CreateEmpty() { return new CallLaterImpl_obj; }

void *CallLaterImpl_obj::_hx_vtable = 0;

Dynamic CallLaterImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CallLaterImpl_obj > _hx_result = new CallLaterImpl_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CallLaterImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b00791c;
}


::hx::ObjectPtr< CallLaterImpl_obj > CallLaterImpl_obj::__new( ::Dynamic fn) {
	::hx::ObjectPtr< CallLaterImpl_obj > __this = new CallLaterImpl_obj();
	__this->__construct(fn);
	return __this;
}

::hx::ObjectPtr< CallLaterImpl_obj > CallLaterImpl_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic fn) {
	CallLaterImpl_obj *__this = (CallLaterImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CallLaterImpl_obj), false, "haxe.ui.backend.CallLaterImpl"));
	*(void **)__this = CallLaterImpl_obj::_hx_vtable;
	__this->__construct(fn);
	return __this;
}

CallLaterImpl_obj::CallLaterImpl_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CallLaterImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CallLaterImpl_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CallLaterImpl_obj::__mClass;

void CallLaterImpl_obj::__register()
{
	CallLaterImpl_obj _hx_dummy;
	CallLaterImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.CallLaterImpl",c2,04,e4,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CallLaterImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallLaterImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallLaterImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
