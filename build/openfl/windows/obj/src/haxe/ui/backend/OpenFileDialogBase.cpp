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
#ifndef INCLUDED_haxe_ui_backend_OpenFileDialogBase
#include <haxe/ui/backend/OpenFileDialogBase.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_afef8cac4e069c7d_16_new,"haxe.ui.backend.OpenFileDialogBase","new",0x981ad43d,"haxe.ui.backend.OpenFileDialogBase.new","haxe/ui/backend/OpenFileDialogBase.hx",16,0xc77b7192)
HX_LOCAL_STACK_FRAME(_hx_pos_afef8cac4e069c7d_29_get_options,"haxe.ui.backend.OpenFileDialogBase","get_options",0x8b623c52,"haxe.ui.backend.OpenFileDialogBase.get_options","haxe/ui/backend/OpenFileDialogBase.hx",29,0xc77b7192)
HX_LOCAL_STACK_FRAME(_hx_pos_afef8cac4e069c7d_31_set_options,"haxe.ui.backend.OpenFileDialogBase","set_options",0x95cf435e,"haxe.ui.backend.OpenFileDialogBase.set_options","haxe/ui/backend/OpenFileDialogBase.hx",31,0xc77b7192)
HX_LOCAL_STACK_FRAME(_hx_pos_afef8cac4e069c7d_37_validateOptions,"haxe.ui.backend.OpenFileDialogBase","validateOptions",0xfa0044c5,"haxe.ui.backend.OpenFileDialogBase.validateOptions","haxe/ui/backend/OpenFileDialogBase.hx",37,0xc77b7192)
HX_LOCAL_STACK_FRAME(_hx_pos_afef8cac4e069c7d_54_show,"haxe.ui.backend.OpenFileDialogBase","show",0x82af3280,"haxe.ui.backend.OpenFileDialogBase.show","haxe/ui/backend/OpenFileDialogBase.hx",54,0xc77b7192)
HX_LOCAL_STACK_FRAME(_hx_pos_afef8cac4e069c7d_57_dialogConfirmed,"haxe.ui.backend.OpenFileDialogBase","dialogConfirmed",0xfcd412d4,"haxe.ui.backend.OpenFileDialogBase.dialogConfirmed","haxe/ui/backend/OpenFileDialogBase.hx",57,0xc77b7192)
HX_LOCAL_STACK_FRAME(_hx_pos_afef8cac4e069c7d_69_dialogCancelled,"haxe.ui.backend.OpenFileDialogBase","dialogCancelled",0x576d6406,"haxe.ui.backend.OpenFileDialogBase.dialogCancelled","haxe/ui/backend/OpenFileDialogBase.hx",69,0xc77b7192)
namespace haxe{
namespace ui{
namespace backend{

void OpenFileDialogBase_obj::__construct( ::Dynamic options, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_afef8cac4e069c7d_16_new)
HXLINE(  26)		this->_options = null();
HXLINE(  19)		this->onDialogClosed = null();
HXLINE(  18)		this->callback = null();
HXLINE(  17)		this->selectedFiles = null();
HXLINE(  22)		this->set_options(options);
HXLINE(  23)		this->callback = callback;
            	}

Dynamic OpenFileDialogBase_obj::__CreateEmpty() { return new OpenFileDialogBase_obj; }

void *OpenFileDialogBase_obj::_hx_vtable = 0;

Dynamic OpenFileDialogBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OpenFileDialogBase_obj > _hx_result = new OpenFileDialogBase_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OpenFileDialogBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01036ef9;
}

 ::Dynamic OpenFileDialogBase_obj::get_options(){
            	HX_STACKFRAME(&_hx_pos_afef8cac4e069c7d_29_get_options)
HXDLIN(  29)		return this->_options;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenFileDialogBase_obj,get_options,return )

 ::Dynamic OpenFileDialogBase_obj::set_options( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_afef8cac4e069c7d_31_set_options)
HXLINE(  32)		this->_options = value;
HXLINE(  33)		this->validateOptions();
HXLINE(  34)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenFileDialogBase_obj,set_options,return )

void OpenFileDialogBase_obj::validateOptions(){
            	HX_STACKFRAME(&_hx_pos_afef8cac4e069c7d_37_validateOptions)
HXLINE(  38)		if (::hx::IsNull( this->_options )) {
HXLINE(  39)			this->set_options( ::Dynamic(::hx::Anon_obj::Create(0)));
            		}
HXLINE(  42)		if (::hx::IsNull( this->_options->__Field(HX_("readContents",90,52,59,6a),::hx::paccDynamic) )) {
HXLINE(  43)			this->_options->__SetField(HX_("readContents",90,52,59,6a),false,::hx::paccDynamic);
            		}
HXLINE(  45)		if (::hx::IsNull( this->_options->__Field(HX_("readAsBinary",09,14,17,b7),::hx::paccDynamic) )) {
HXLINE(  46)			this->_options->__SetField(HX_("readAsBinary",09,14,17,b7),false,::hx::paccDynamic);
            		}
HXLINE(  48)		if (::hx::IsNull( this->_options->__Field(HX_("multiple",10,e2,8c,9a),::hx::paccDynamic) )) {
HXLINE(  49)			this->_options->__SetField(HX_("multiple",10,e2,8c,9a),false,::hx::paccDynamic);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenFileDialogBase_obj,validateOptions,(void))

void OpenFileDialogBase_obj::show(){
            	HX_STACKFRAME(&_hx_pos_afef8cac4e069c7d_54_show)
HXDLIN(  54)		::haxe::ui::containers::dialogs::Dialogs_obj::messageBox(HX_("OpenFileDialog has no implementation on this backend",0c,4e,cb,1c),HX_("Open File",92,6a,32,1d),HX_("error",c8,cb,29,73),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenFileDialogBase_obj,show,(void))

void OpenFileDialogBase_obj::dialogConfirmed(::Array< ::Dynamic> files){
            	HX_GC_STACKFRAME(&_hx_pos_afef8cac4e069c7d_57_dialogConfirmed)
HXLINE(  58)		this->selectedFiles = files;
HXLINE(  59)		if (::hx::IsNotNull( this->callback )) {
HXLINE(  60)			this->callback(HX_("{{ok}}",1c,09,df,49),this->selectedFiles);
            		}
HXLINE(  62)		if (::hx::IsNotNull( this->onDialogClosed )) {
HXLINE(  63)			 ::haxe::ui::containers::dialogs::DialogEvent event =  ::haxe::ui::containers::dialogs::DialogEvent_obj::__alloc( HX_CTX ,HX_("dialogClosed",94,e8,f8,2e),false,this->selectedFiles);
HXLINE(  64)			event->button = HX_("{{ok}}",1c,09,df,49);
HXLINE(  65)			this->onDialogClosed(event);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenFileDialogBase_obj,dialogConfirmed,(void))

void OpenFileDialogBase_obj::dialogCancelled(){
            	HX_GC_STACKFRAME(&_hx_pos_afef8cac4e069c7d_69_dialogCancelled)
HXLINE(  70)		this->selectedFiles = null();
HXLINE(  71)		if (::hx::IsNotNull( this->callback )) {
HXLINE(  72)			this->callback(HX_("{{cancel}}",fa,38,eb,dc),this->selectedFiles);
            		}
HXLINE(  74)		if (::hx::IsNotNull( this->onDialogClosed )) {
HXLINE(  75)			 ::haxe::ui::containers::dialogs::DialogEvent event =  ::haxe::ui::containers::dialogs::DialogEvent_obj::__alloc( HX_CTX ,HX_("dialogClosed",94,e8,f8,2e),false,this->selectedFiles);
HXLINE(  76)			event->button = HX_("{{cancel}}",fa,38,eb,dc);
HXLINE(  77)			this->onDialogClosed(event);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenFileDialogBase_obj,dialogCancelled,(void))


::hx::ObjectPtr< OpenFileDialogBase_obj > OpenFileDialogBase_obj::__new( ::Dynamic options, ::Dynamic callback) {
	::hx::ObjectPtr< OpenFileDialogBase_obj > __this = new OpenFileDialogBase_obj();
	__this->__construct(options,callback);
	return __this;
}

::hx::ObjectPtr< OpenFileDialogBase_obj > OpenFileDialogBase_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic options, ::Dynamic callback) {
	OpenFileDialogBase_obj *__this = (OpenFileDialogBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OpenFileDialogBase_obj), true, "haxe.ui.backend.OpenFileDialogBase"));
	*(void **)__this = OpenFileDialogBase_obj::_hx_vtable;
	__this->__construct(options,callback);
	return __this;
}

OpenFileDialogBase_obj::OpenFileDialogBase_obj()
{
}

void OpenFileDialogBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OpenFileDialogBase);
	HX_MARK_MEMBER_NAME(selectedFiles,"selectedFiles");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(onDialogClosed,"onDialogClosed");
	HX_MARK_MEMBER_NAME(_options,"_options");
	HX_MARK_END_CLASS();
}

void OpenFileDialogBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(selectedFiles,"selectedFiles");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(onDialogClosed,"onDialogClosed");
	HX_VISIT_MEMBER_NAME(_options,"_options");
}

::hx::Val OpenFileDialogBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_options() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"_options") ) { return ::hx::Val( _options ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_options") ) { return ::hx::Val( get_options_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_options") ) { return ::hx::Val( set_options_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedFiles") ) { return ::hx::Val( selectedFiles ); }
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

::hx::Val OpenFileDialogBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_options(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_options") ) { _options=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedFiles") ) { selectedFiles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onDialogClosed") ) { onDialogClosed=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpenFileDialogBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("selectedFiles",1c,ba,da,f6));
	outFields->push(HX_("_options",df,8c,b6,19));
	outFields->push(HX_("options",5e,33,fe,df));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OpenFileDialogBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(OpenFileDialogBase_obj,selectedFiles),HX_("selectedFiles",1c,ba,da,f6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(OpenFileDialogBase_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(OpenFileDialogBase_obj,onDialogClosed),HX_("onDialogClosed",53,48,e8,58)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(OpenFileDialogBase_obj,_options),HX_("_options",df,8c,b6,19)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OpenFileDialogBase_obj_sStaticStorageInfo = 0;
#endif

static ::String OpenFileDialogBase_obj_sMemberFields[] = {
	HX_("selectedFiles",1c,ba,da,f6),
	HX_("callback",c5,99,06,7f),
	HX_("onDialogClosed",53,48,e8,58),
	HX_("_options",df,8c,b6,19),
	HX_("get_options",75,93,f8,65),
	HX_("set_options",81,9a,65,70),
	HX_("validateOptions",68,69,14,db),
	HX_("show",fd,d4,52,4c),
	HX_("dialogConfirmed",77,37,e8,dd),
	HX_("dialogCancelled",a9,88,81,38),
	::String(null()) };

::hx::Class OpenFileDialogBase_obj::__mClass;

void OpenFileDialogBase_obj::__register()
{
	OpenFileDialogBase_obj _hx_dummy;
	OpenFileDialogBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.OpenFileDialogBase",cb,f1,3a,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OpenFileDialogBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OpenFileDialogBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OpenFileDialogBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OpenFileDialogBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
