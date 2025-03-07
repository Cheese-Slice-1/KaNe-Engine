// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_DialogBase
#include <haxe/ui/backend/DialogBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_SaveFileDialogBase
#include <haxe/ui/backend/SaveFileDialogBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#include <haxe/ui/containers/dialogs/Dialog.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_DialogEvent
#include <haxe/ui/containers/dialogs/DialogEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialogs
#include <haxe/ui/containers/dialogs/Dialogs.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentContainer
#include <haxe/ui/core/IComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_extensions_Draggable
#include <haxe/ui/extensions/Draggable.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a24c1c0193bc1b76_15_new,"haxe.ui.backend.SaveFileDialogBase","new",0x5f823470,"haxe.ui.backend.SaveFileDialogBase.new","haxe/ui/backend/SaveFileDialogBase.hx",15,0x3e9e58bf)
HX_LOCAL_STACK_FRAME(_hx_pos_a24c1c0193bc1b76_32_get_options,"haxe.ui.backend.SaveFileDialogBase","get_options",0x1f418785,"haxe.ui.backend.SaveFileDialogBase.get_options","haxe/ui/backend/SaveFileDialogBase.hx",32,0x3e9e58bf)
HX_LOCAL_STACK_FRAME(_hx_pos_a24c1c0193bc1b76_34_set_options,"haxe.ui.backend.SaveFileDialogBase","set_options",0x29ae8e91,"haxe.ui.backend.SaveFileDialogBase.set_options","haxe/ui/backend/SaveFileDialogBase.hx",34,0x3e9e58bf)
HX_LOCAL_STACK_FRAME(_hx_pos_a24c1c0193bc1b76_41_validateOptions,"haxe.ui.backend.SaveFileDialogBase","validateOptions",0xd450a578,"haxe.ui.backend.SaveFileDialogBase.validateOptions","haxe/ui/backend/SaveFileDialogBase.hx",41,0x3e9e58bf)
HX_LOCAL_STACK_FRAME(_hx_pos_a24c1c0193bc1b76_47_show,"haxe.ui.backend.SaveFileDialogBase","show",0x35bbfeed,"haxe.ui.backend.SaveFileDialogBase.show","haxe/ui/backend/SaveFileDialogBase.hx",47,0x3e9e58bf)
HX_LOCAL_STACK_FRAME(_hx_pos_a24c1c0193bc1b76_50_dialogConfirmed,"haxe.ui.backend.SaveFileDialogBase","dialogConfirmed",0xd7247387,"haxe.ui.backend.SaveFileDialogBase.dialogConfirmed","haxe/ui/backend/SaveFileDialogBase.hx",50,0x3e9e58bf)
HX_LOCAL_STACK_FRAME(_hx_pos_a24c1c0193bc1b76_62_dialogCancelled,"haxe.ui.backend.SaveFileDialogBase","dialogCancelled",0x31bdc4b9,"haxe.ui.backend.SaveFileDialogBase.dialogCancelled","haxe/ui/backend/SaveFileDialogBase.hx",62,0x3e9e58bf)
namespace haxe{
namespace ui{
namespace backend{

void SaveFileDialogBase_obj::__construct( ::Dynamic options, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_a24c1c0193bc1b76_15_new)
HXLINE(  29)		this->_options = null();
HXLINE(  21)		this->fileInfo = null();
HXLINE(  19)		this->onDialogClosed = null();
HXLINE(  18)		this->callback = null();
HXLINE(  17)		this->fullPath = null();
HXLINE(  16)		this->saveResult = false;
HXLINE(  25)		this->set_options(options);
HXLINE(  26)		this->callback = callback;
            	}

Dynamic SaveFileDialogBase_obj::__CreateEmpty() { return new SaveFileDialogBase_obj; }

void *SaveFileDialogBase_obj::_hx_vtable = 0;

Dynamic SaveFileDialogBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SaveFileDialogBase_obj > _hx_result = new SaveFileDialogBase_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SaveFileDialogBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29838600;
}

 ::Dynamic SaveFileDialogBase_obj::get_options(){
            	HX_STACKFRAME(&_hx_pos_a24c1c0193bc1b76_32_get_options)
HXDLIN(  32)		return this->_options;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SaveFileDialogBase_obj,get_options,return )

 ::Dynamic SaveFileDialogBase_obj::set_options( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_a24c1c0193bc1b76_34_set_options)
HXLINE(  35)		this->_options = value;
HXLINE(  36)		this->validateOptions();
HXLINE(  37)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SaveFileDialogBase_obj,set_options,return )

void SaveFileDialogBase_obj::validateOptions(){
            	HX_STACKFRAME(&_hx_pos_a24c1c0193bc1b76_41_validateOptions)
HXDLIN(  41)		if (::hx::IsNull( this->_options )) {
HXLINE(  42)			this->set_options( ::Dynamic(::hx::Anon_obj::Create(0)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SaveFileDialogBase_obj,validateOptions,(void))

void SaveFileDialogBase_obj::show(){
            	HX_STACKFRAME(&_hx_pos_a24c1c0193bc1b76_47_show)
HXDLIN(  47)		::haxe::ui::containers::dialogs::Dialogs_obj::messageBox(HX_("SaveFileDialog has no implementation on this backend",7f,d7,d8,3a),HX_("Save File",3f,02,ba,38),HX_("error",c8,cb,29,73),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SaveFileDialogBase_obj,show,(void))

void SaveFileDialogBase_obj::dialogConfirmed(){
            	HX_GC_STACKFRAME(&_hx_pos_a24c1c0193bc1b76_50_dialogConfirmed)
HXLINE(  51)		this->saveResult = true;
HXLINE(  52)		if (::hx::IsNotNull( this->callback )) {
HXLINE(  53)			this->callback(HX_("{{ok}}",1c,09,df,49),this->saveResult,this->fullPath);
            		}
HXLINE(  55)		if (::hx::IsNotNull( this->onDialogClosed )) {
HXLINE(  56)			 ::haxe::ui::containers::dialogs::DialogEvent event =  ::haxe::ui::containers::dialogs::DialogEvent_obj::__alloc( HX_CTX ,HX_("dialogClosed",94,e8,f8,2e),false,this->saveResult);
HXLINE(  57)			event->button = HX_("{{ok}}",1c,09,df,49);
HXLINE(  58)			this->onDialogClosed(event);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SaveFileDialogBase_obj,dialogConfirmed,(void))

void SaveFileDialogBase_obj::dialogCancelled(){
            	HX_GC_STACKFRAME(&_hx_pos_a24c1c0193bc1b76_62_dialogCancelled)
HXLINE(  63)		this->saveResult = false;
HXLINE(  64)		if (::hx::IsNotNull( this->callback )) {
HXLINE(  65)			this->callback(HX_("{{cancel}}",fa,38,eb,dc),this->saveResult,null());
            		}
HXLINE(  67)		if (::hx::IsNotNull( this->onDialogClosed )) {
HXLINE(  68)			 ::haxe::ui::containers::dialogs::DialogEvent event =  ::haxe::ui::containers::dialogs::DialogEvent_obj::__alloc( HX_CTX ,HX_("dialogClosed",94,e8,f8,2e),false,this->saveResult);
HXLINE(  69)			event->button = HX_("{{cancel}}",fa,38,eb,dc);
HXLINE(  70)			this->onDialogClosed(event);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SaveFileDialogBase_obj,dialogCancelled,(void))


::hx::ObjectPtr< SaveFileDialogBase_obj > SaveFileDialogBase_obj::__new( ::Dynamic options, ::Dynamic callback) {
	::hx::ObjectPtr< SaveFileDialogBase_obj > __this = new SaveFileDialogBase_obj();
	__this->__construct(options,callback);
	return __this;
}

::hx::ObjectPtr< SaveFileDialogBase_obj > SaveFileDialogBase_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic options, ::Dynamic callback) {
	SaveFileDialogBase_obj *__this = (SaveFileDialogBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SaveFileDialogBase_obj), true, "haxe.ui.backend.SaveFileDialogBase"));
	*(void **)__this = SaveFileDialogBase_obj::_hx_vtable;
	__this->__construct(options,callback);
	return __this;
}

SaveFileDialogBase_obj::SaveFileDialogBase_obj()
{
}

void SaveFileDialogBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SaveFileDialogBase);
	HX_MARK_MEMBER_NAME(saveResult,"saveResult");
	HX_MARK_MEMBER_NAME(fullPath,"fullPath");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(onDialogClosed,"onDialogClosed");
	HX_MARK_MEMBER_NAME(fileInfo,"fileInfo");
	HX_MARK_MEMBER_NAME(_options,"_options");
	HX_MARK_END_CLASS();
}

void SaveFileDialogBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(saveResult,"saveResult");
	HX_VISIT_MEMBER_NAME(fullPath,"fullPath");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(onDialogClosed,"onDialogClosed");
	HX_VISIT_MEMBER_NAME(fileInfo,"fileInfo");
	HX_VISIT_MEMBER_NAME(_options,"_options");
}

::hx::Val SaveFileDialogBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_options() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullPath") ) { return ::hx::Val( fullPath ); }
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"fileInfo") ) { return ::hx::Val( fileInfo ); }
		if (HX_FIELD_EQ(inName,"_options") ) { return ::hx::Val( _options ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"saveResult") ) { return ::hx::Val( saveResult ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_options") ) { return ::hx::Val( get_options_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_options") ) { return ::hx::Val( set_options_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onDialogClosed") ) { return ::hx::Val( onDialogClosed ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"validateOptions") ) { return ::hx::Val( validateOptions_dyn() ); }
		if (HX_FIELD_EQ(inName,"dialogConfirmed") ) { return ::hx::Val( dialogConfirmed_dyn() ); }
		if (HX_FIELD_EQ(inName,"dialogCancelled") ) { return ::hx::Val( dialogCancelled_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SaveFileDialogBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_options(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fullPath") ) { fullPath=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fileInfo") ) { fileInfo=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_options") ) { _options=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"saveResult") ) { saveResult=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onDialogClosed") ) { onDialogClosed=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SaveFileDialogBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("saveResult",fa,f3,3d,51));
	outFields->push(HX_("fullPath",d4,6e,65,5e));
	outFields->push(HX_("fileInfo",0a,21,ff,5e));
	outFields->push(HX_("_options",df,8c,b6,19));
	outFields->push(HX_("options",5e,33,fe,df));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SaveFileDialogBase_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(SaveFileDialogBase_obj,saveResult),HX_("saveResult",fa,f3,3d,51)},
	{::hx::fsString,(int)offsetof(SaveFileDialogBase_obj,fullPath),HX_("fullPath",d4,6e,65,5e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SaveFileDialogBase_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SaveFileDialogBase_obj,onDialogClosed),HX_("onDialogClosed",53,48,e8,58)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SaveFileDialogBase_obj,fileInfo),HX_("fileInfo",0a,21,ff,5e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SaveFileDialogBase_obj,_options),HX_("_options",df,8c,b6,19)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SaveFileDialogBase_obj_sStaticStorageInfo = 0;
#endif

static ::String SaveFileDialogBase_obj_sMemberFields[] = {
	HX_("saveResult",fa,f3,3d,51),
	HX_("fullPath",d4,6e,65,5e),
	HX_("callback",c5,99,06,7f),
	HX_("onDialogClosed",53,48,e8,58),
	HX_("fileInfo",0a,21,ff,5e),
	HX_("_options",df,8c,b6,19),
	HX_("get_options",75,93,f8,65),
	HX_("set_options",81,9a,65,70),
	HX_("validateOptions",68,69,14,db),
	HX_("show",fd,d4,52,4c),
	HX_("dialogConfirmed",77,37,e8,dd),
	HX_("dialogCancelled",a9,88,81,38),
	::String(null()) };

::hx::Class SaveFileDialogBase_obj::__mClass;

void SaveFileDialogBase_obj::__register()
{
	SaveFileDialogBase_obj _hx_dummy;
	SaveFileDialogBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.SaveFileDialogBase",7e,7c,db,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SaveFileDialogBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SaveFileDialogBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SaveFileDialogBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SaveFileDialogBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
