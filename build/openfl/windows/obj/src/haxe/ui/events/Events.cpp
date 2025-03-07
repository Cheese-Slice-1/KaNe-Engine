// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
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
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b23cba198f770d4a_11_new,"haxe.ui.events.Events","new",0x7bd2388e,"haxe.ui.events.Events.new","haxe/ui/events/Events.hx",11,0x92158121)
HX_LOCAL_STACK_FRAME(_hx_pos_b23cba198f770d4a_14_register,"haxe.ui.events.Events","register",0x6e52d775,"haxe.ui.events.Events.register","haxe/ui/events/Events.hx",14,0x92158121)
HX_LOCAL_STACK_FRAME(_hx_pos_b23cba198f770d4a_17_unregister,"haxe.ui.events.Events","unregister",0x2c12a74e,"haxe.ui.events.Events.unregister","haxe/ui/events/Events.hx",17,0x92158121)
HX_LOCAL_STACK_FRAME(_hx_pos_b23cba198f770d4a_20_onDispose,"haxe.ui.events.Events","onDispose",0xf20ef7ee,"haxe.ui.events.Events.onDispose","haxe/ui/events/Events.hx",20,0x92158121)
HX_LOCAL_STACK_FRAME(_hx_pos_b23cba198f770d4a_23_registerEvent,"haxe.ui.events.Events","registerEvent",0xf3b53865,"haxe.ui.events.Events.registerEvent","haxe/ui/events/Events.hx",23,0x92158121)
HX_LOCAL_STACK_FRAME(_hx_pos_b23cba198f770d4a_32_hasEvent,"haxe.ui.events.Events","hasEvent",0x9fd04372,"haxe.ui.events.Events.hasEvent","haxe/ui/events/Events.hx",32,0x92158121)
HX_LOCAL_STACK_FRAME(_hx_pos_b23cba198f770d4a_39_unregisterEvent,"haxe.ui.events.Events","unregisterEvent",0xa4b855ec,"haxe.ui.events.Events.unregisterEvent","haxe/ui/events/Events.hx",39,0x92158121)
HX_LOCAL_STACK_FRAME(_hx_pos_b23cba198f770d4a_46_dispatch,"haxe.ui.events.Events","dispatch",0xbc16ffcc,"haxe.ui.events.Events.dispatch","haxe/ui/events/Events.hx",46,0x92158121)
namespace haxe{
namespace ui{
namespace events{

void Events_obj::__construct( ::haxe::ui::core::Component target){
            	HX_STACKFRAME(&_hx_pos_b23cba198f770d4a_11_new)
HXDLIN(  11)		this->_target = target;
            	}

Dynamic Events_obj::__CreateEmpty() { return new Events_obj; }

void *Events_obj::_hx_vtable = 0;

Dynamic Events_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Events_obj > _hx_result = new Events_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Events_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0548a7cc;
}

void Events_obj::_hx_register(){
            	HX_STACKFRAME(&_hx_pos_b23cba198f770d4a_14_register)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,_hx_register,(void))

void Events_obj::unregister(){
            	HX_STACKFRAME(&_hx_pos_b23cba198f770d4a_17_unregister)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,unregister,(void))

void Events_obj::onDispose(){
            	HX_STACKFRAME(&_hx_pos_b23cba198f770d4a_20_onDispose)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Events_obj,onDispose,(void))

void Events_obj::registerEvent(::String type, ::Dynamic listener,::hx::Null< int >  __o_priority){
            		int priority = __o_priority.Default(0);
            	HX_STACKFRAME(&_hx_pos_b23cba198f770d4a_23_registerEvent)
HXLINE(  24)		bool _hx_tmp;
HXDLIN(  24)		if (::hx::IsNotNull( this->_target )) {
HXLINE(  24)			_hx_tmp = this->_target->_isDisposed;
            		}
            		else {
HXLINE(  24)			_hx_tmp = true;
            		}
HXDLIN(  24)		if (_hx_tmp) {
HXLINE(  25)			return;
            		}
HXLINE(  27)		if ((this->hasEvent(type,listener) == false)) {
HXLINE(  28)			this->_target->registerEvent(type,listener,priority);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Events_obj,registerEvent,(void))

bool Events_obj::hasEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b23cba198f770d4a_32_hasEvent)
HXLINE(  33)		bool _hx_tmp;
HXDLIN(  33)		if (::hx::IsNotNull( this->_target )) {
HXLINE(  33)			_hx_tmp = this->_target->_isDisposed;
            		}
            		else {
HXLINE(  33)			_hx_tmp = true;
            		}
HXDLIN(  33)		if (_hx_tmp) {
HXLINE(  34)			return false;
            		}
HXLINE(  36)		return this->_target->hasEvent(type,listener);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Events_obj,hasEvent,return )

void Events_obj::unregisterEvent(::String type, ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b23cba198f770d4a_39_unregisterEvent)
HXLINE(  40)		bool _hx_tmp;
HXDLIN(  40)		if (::hx::IsNotNull( this->_target )) {
HXLINE(  40)			_hx_tmp = this->_target->_isDisposed;
            		}
            		else {
HXLINE(  40)			_hx_tmp = true;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  41)			return;
            		}
HXLINE(  43)		this->_target->unregisterEvent(type,listener);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Events_obj,unregisterEvent,(void))

void Events_obj::dispatch( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_b23cba198f770d4a_46_dispatch)
HXLINE(  47)		bool _hx_tmp;
HXDLIN(  47)		if (::hx::IsNotNull( this->_target )) {
HXLINE(  47)			_hx_tmp = this->_target->_isDisposed;
            		}
            		else {
HXLINE(  47)			_hx_tmp = true;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  48)			return;
            		}
HXLINE(  50)		this->_target->dispatch(event,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Events_obj,dispatch,(void))


::hx::ObjectPtr< Events_obj > Events_obj::__new( ::haxe::ui::core::Component target) {
	::hx::ObjectPtr< Events_obj > __this = new Events_obj();
	__this->__construct(target);
	return __this;
}

::hx::ObjectPtr< Events_obj > Events_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component target) {
	Events_obj *__this = (Events_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Events_obj), true, "haxe.ui.events.Events"));
	*(void **)__this = Events_obj::_hx_vtable;
	__this->__construct(target);
	return __this;
}

Events_obj::Events_obj()
{
}

void Events_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Events);
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_END_CLASS();
}

void Events_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_target,"_target");
}

::hx::Val Events_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasEvent") ) { return ::hx::Val( hasEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return ::hx::Val( dispatch_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onDispose") ) { return ::hx::Val( onDispose_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unregister") ) { return ::hx::Val( unregister_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"registerEvent") ) { return ::hx::Val( registerEvent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unregisterEvent") ) { return ::hx::Val( unregisterEvent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Events_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Events_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_target",f0,04,64,f5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Events_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(Events_obj,_target),HX_("_target",f0,04,64,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Events_obj_sStaticStorageInfo = 0;
#endif

static ::String Events_obj_sMemberFields[] = {
	HX_("_target",f0,04,64,f5),
	HX_("register",63,a6,9f,d0),
	HX_("unregister",bc,8d,63,56),
	HX_("onDispose",40,39,f7,92),
	HX_("registerEvent",b7,8a,2d,6b),
	HX_("hasEvent",60,12,1d,02),
	HX_("unregisterEvent",be,60,a7,28),
	HX_("dispatch",ba,ce,63,1e),
	::String(null()) };

::hx::Class Events_obj::__mClass;

void Events_obj::__register()
{
	Events_obj _hx_dummy;
	Events_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.events.Events",9c,99,53,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Events_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Events_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Events_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Events_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace events
