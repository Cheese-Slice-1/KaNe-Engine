// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_SaveFileDialogBase
#include <haxe/ui/backend/SaveFileDialogBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_SaveFileDialogImpl
#include <haxe/ui/backend/SaveFileDialogImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_SaveFileDialog
#include <haxe/ui/containers/dialogs/SaveFileDialog.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_755f405eb7608fba_5_new,"haxe.ui.containers.dialogs.SaveFileDialog","new",0x4b6be600,"haxe.ui.containers.dialogs.SaveFileDialog.new","haxe/ui/containers/dialogs/SaveFileDialog.hx",5,0xd9feb4ce)
namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{

void SaveFileDialog_obj::__construct( ::Dynamic options, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_755f405eb7608fba_5_new)
HXDLIN(   5)		super::__construct(options,callback);
            	}

Dynamic SaveFileDialog_obj::__CreateEmpty() { return new SaveFileDialog_obj; }

void *SaveFileDialog_obj::_hx_vtable = 0;

Dynamic SaveFileDialog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SaveFileDialog_obj > _hx_result = new SaveFileDialog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SaveFileDialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x29838600) {
		if (inClassId<=(int)0x050c34d4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x050c34d4;
		} else {
			return inClassId==(int)0x29838600;
		}
	} else {
		return inClassId==(int)0x2e2d1ccf;
	}
}


::hx::ObjectPtr< SaveFileDialog_obj > SaveFileDialog_obj::__new( ::Dynamic options, ::Dynamic callback) {
	::hx::ObjectPtr< SaveFileDialog_obj > __this = new SaveFileDialog_obj();
	__this->__construct(options,callback);
	return __this;
}

::hx::ObjectPtr< SaveFileDialog_obj > SaveFileDialog_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic options, ::Dynamic callback) {
	SaveFileDialog_obj *__this = (SaveFileDialog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SaveFileDialog_obj), true, "haxe.ui.containers.dialogs.SaveFileDialog"));
	*(void **)__this = SaveFileDialog_obj::_hx_vtable;
	__this->__construct(options,callback);
	return __this;
}

SaveFileDialog_obj::SaveFileDialog_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SaveFileDialog_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SaveFileDialog_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SaveFileDialog_obj::__mClass;

void SaveFileDialog_obj::__register()
{
	SaveFileDialog_obj _hx_dummy;
	SaveFileDialog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.dialogs.SaveFileDialog",0e,26,89,6a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SaveFileDialog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SaveFileDialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SaveFileDialog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs
