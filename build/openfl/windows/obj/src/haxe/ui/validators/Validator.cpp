// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
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
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_haxe_ui_validators_IValidator
#include <haxe/ui/validators/IValidator.h>
#endif
#ifndef INCLUDED_haxe_ui_validators_Validator
#include <haxe/ui/validators/Validator.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_41b409a8dd4d451b_5_new,"haxe.ui.validators.Validator","new",0x1db575e9,"haxe.ui.validators.Validator.new","haxe/ui/validators/Validator.hx",5,0x20239488)
HX_LOCAL_STACK_FRAME(_hx_pos_41b409a8dd4d451b_17_setup,"haxe.ui.validators.Validator","setup",0xef6c8846,"haxe.ui.validators.Validator.setup","haxe/ui/validators/Validator.hx",17,0x20239488)
HX_LOCAL_STACK_FRAME(_hx_pos_41b409a8dd4d451b_21_validate,"haxe.ui.validators.Validator","validate",0x71507a6d,"haxe.ui.validators.Validator.validate","haxe/ui/validators/Validator.hx",21,0x20239488)
HX_LOCAL_STACK_FRAME(_hx_pos_41b409a8dd4d451b_24_validateInternal,"haxe.ui.validators.Validator","validateInternal",0x204c52ca,"haxe.ui.validators.Validator.validateInternal","haxe/ui/validators/Validator.hx",24,0x20239488)
HX_LOCAL_STACK_FRAME(_hx_pos_41b409a8dd4d451b_65_onReset,"haxe.ui.validators.Validator","onReset",0x5e838639,"haxe.ui.validators.Validator.onReset","haxe/ui/validators/Validator.hx",65,0x20239488)
HX_LOCAL_STACK_FRAME(_hx_pos_41b409a8dd4d451b_69_onValid,"haxe.ui.validators.Validator","onValid",0xa973b166,"haxe.ui.validators.Validator.onValid","haxe/ui/validators/Validator.hx",69,0x20239488)
HX_LOCAL_STACK_FRAME(_hx_pos_41b409a8dd4d451b_73_onInvalid,"haxe.ui.validators.Validator","onInvalid",0x859a85e1,"haxe.ui.validators.Validator.onInvalid","haxe/ui/validators/Validator.hx",73,0x20239488)
HX_LOCAL_STACK_FRAME(_hx_pos_41b409a8dd4d451b_77_validateString,"haxe.ui.validators.Validator","validateString",0x8250271e,"haxe.ui.validators.Validator.validateString","haxe/ui/validators/Validator.hx",77,0x20239488)
HX_LOCAL_STACK_FRAME(_hx_pos_41b409a8dd4d451b_81_setProperty,"haxe.ui.validators.Validator","setProperty",0x3ed8e8a0,"haxe.ui.validators.Validator.setProperty","haxe/ui/validators/Validator.hx",81,0x20239488)
namespace haxe{
namespace ui{
namespace validators{

void Validator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_41b409a8dd4d451b_5_new)
HXLINE(  12)		this->invalidStyleName = HX_("invalid-value",5b,aa,a4,00);
HXLINE(  11)		this->validStyleName = HX_("valid-value",20,16,70,24);
HXLINE(   9)		this->applyInvalid = true;
HXLINE(   8)		this->applyValid = true;
            	}

Dynamic Validator_obj::__CreateEmpty() { return new Validator_obj; }

void *Validator_obj::_hx_vtable = 0;

Dynamic Validator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Validator_obj > _hx_result = new Validator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Validator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x227df7b7;
}

static ::haxe::ui::validators::IValidator_obj _hx_haxe_ui_validators_Validator__hx_haxe_ui_validators_IValidator= {
	( void (::hx::Object::*)( ::haxe::ui::core::Component))&::haxe::ui::validators::Validator_obj::setup,
	(  ::Dynamic (::hx::Object::*)( ::haxe::ui::core::Component))&::haxe::ui::validators::Validator_obj::validate,
	( void (::hx::Object::*)(::String, ::Dynamic))&::haxe::ui::validators::Validator_obj::setProperty,
};

void *Validator_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc5d6bfe4: return &_hx_haxe_ui_validators_Validator__hx_haxe_ui_validators_IValidator;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void Validator_obj::setup( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_41b409a8dd4d451b_17_setup)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Validator_obj,setup,(void))

 ::Dynamic Validator_obj::validate( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_41b409a8dd4d451b_21_validate)
HXDLIN(  21)		return this->validateInternal(component);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Validator_obj,validate,return )

 ::Dynamic Validator_obj::validateInternal( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_41b409a8dd4d451b_24_validateInternal)
HXLINE(  25)		 ::Dynamic valid = null();
HXLINE(  26)		{
HXLINE(  26)			 ::ValueType _g = ::Type_obj::_hx_typeof(component->get_value());
HXDLIN(  26)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE(  34)					valid = this->validateString(null());
            				}
            				break;
            				case (int)4: {
HXLINE(  36)					valid = this->validateString(component->get_text());
            				}
            				break;
            				case (int)6: {
HXLINE(  27)					if (::hx::IsPointerEq( _g->_hx_getObject(0).StaticCast< ::hx::Class >(),::hx::ClassOf< ::String >() )) {
HXLINE(  28)						::String stringValue = null();
HXLINE(  29)						if (::hx::IsNotNull( component->get_value() )) {
HXLINE(  30)							stringValue = ::Std_obj::string(component->get_value());
            						}
HXLINE(  32)						valid = this->validateString(stringValue);
            					}
            					else {
HXLINE(  38)						 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  38)						 ::ValueType _hx_tmp1 = ::Type_obj::_hx_typeof(component->get_value());
HXDLIN(  38)						::String _hx_tmp2 = component->get_id();
HXDLIN(  38)						::String _hx_tmp3 = component->get_className();
HXDLIN(  38)						_hx_tmp(HX_("unsupported",b5,4c,b0,9a), ::Dynamic(::hx::Anon_obj::Create(5)
            							->setFixed(0,HX_("className",a3,92,3d,dc),HX_("haxe.ui.validators.Validator",77,4d,a0,4f))
            							->setFixed(1,HX_("customParams",d7,51,18,ed),::cpp::VirtualArray_obj::__new(4)->init(0,_hx_tmp1)->init(1,_hx_tmp2)->init(2,_hx_tmp3)->init(3,component->get_value()))
            							->setFixed(2,HX_("methodName",cc,19,0f,12),HX_("validateInternal",f3,79,cf,e0))
            							->setFixed(3,HX_("fileName",e7,5a,43,62),HX_("haxe/ui/validators/Validator.hx",88,94,23,20))
            							->setFixed(4,HX_("lineNumber",dd,81,22,76),38)));
            					}
            				}
            				break;
            				default:{
HXLINE(  38)					 ::Dynamic _hx_tmp4 = ::haxe::Log_obj::trace;
HXDLIN(  38)					 ::ValueType _hx_tmp5 = ::Type_obj::_hx_typeof(component->get_value());
HXDLIN(  38)					::String _hx_tmp6 = component->get_id();
HXDLIN(  38)					::String _hx_tmp7 = component->get_className();
HXDLIN(  38)					_hx_tmp4(HX_("unsupported",b5,4c,b0,9a), ::Dynamic(::hx::Anon_obj::Create(5)
            						->setFixed(0,HX_("className",a3,92,3d,dc),HX_("haxe.ui.validators.Validator",77,4d,a0,4f))
            						->setFixed(1,HX_("customParams",d7,51,18,ed),::cpp::VirtualArray_obj::__new(4)->init(0,_hx_tmp5)->init(1,_hx_tmp6)->init(2,_hx_tmp7)->init(3,component->get_value()))
            						->setFixed(2,HX_("methodName",cc,19,0f,12),HX_("validateInternal",f3,79,cf,e0))
            						->setFixed(3,HX_("fileName",e7,5a,43,62),HX_("haxe/ui/validators/Validator.hx",88,94,23,20))
            						->setFixed(4,HX_("lineNumber",dd,81,22,76),38)));
            				}
            			}
            		}
HXLINE(  41)		if (::hx::IsNull( valid )) {
HXLINE(  42)			this->onReset(component);
HXLINE(  43)			return valid;
            		}
HXLINE(  46)		if (( (bool)(valid) )) {
HXLINE(  47)			if (this->applyValid) {
HXLINE(  48)				this->onValid(component);
            			}
            			else {
HXLINE(  50)				this->onReset(component);
            			}
            		}
            		else {
HXLINE(  53)			if (this->applyInvalid) {
HXLINE(  54)				this->onInvalid(component);
            			}
            			else {
HXLINE(  56)				this->onReset(component);
            			}
            		}
HXLINE(  60)		return valid;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Validator_obj,validateInternal,return )

void Validator_obj::onReset( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_41b409a8dd4d451b_65_onReset)
HXDLIN(  65)		component->removeClasses(::Array_obj< ::String >::__new(2)->init(0,this->validStyleName)->init(1,this->invalidStyleName),true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Validator_obj,onReset,(void))

void Validator_obj::onValid( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_41b409a8dd4d451b_69_onValid)
HXDLIN(  69)		component->swapClass(this->validStyleName,this->invalidStyleName,true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Validator_obj,onValid,(void))

void Validator_obj::onInvalid( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_41b409a8dd4d451b_73_onInvalid)
HXDLIN(  73)		component->swapClass(this->invalidStyleName,this->validStyleName,true,true);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Validator_obj,onInvalid,(void))

 ::Dynamic Validator_obj::validateString(::String s){
            	HX_STACKFRAME(&_hx_pos_41b409a8dd4d451b_77_validateString)
HXDLIN(  77)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Validator_obj,validateString,return )

void Validator_obj::setProperty(::String name, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_41b409a8dd4d451b_81_setProperty)
HXDLIN(  81)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("applyInvalid",29,27,b5,7a)) ){
HXLINE(  85)			this->applyInvalid = ( (bool)(value) );
HXDLIN(  85)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("applyValid",ae,f0,09,dd)) ){
HXLINE(  83)			this->applyValid = ( (bool)(value) );
HXDLIN(  83)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("invalidMessage",90,df,d5,57)) ){
HXLINE(  87)			this->invalidMessage = ( (::String)(value) );
HXDLIN(  87)			goto _hx_goto_8;
            		}
            		_hx_goto_8:;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Validator_obj,setProperty,(void))


::hx::ObjectPtr< Validator_obj > Validator_obj::__new() {
	::hx::ObjectPtr< Validator_obj > __this = new Validator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Validator_obj > Validator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Validator_obj *__this = (Validator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Validator_obj), true, "haxe.ui.validators.Validator"));
	*(void **)__this = Validator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Validator_obj::Validator_obj()
{
}

void Validator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Validator);
	HX_MARK_MEMBER_NAME(invalidMessage,"invalidMessage");
	HX_MARK_MEMBER_NAME(applyValid,"applyValid");
	HX_MARK_MEMBER_NAME(applyInvalid,"applyInvalid");
	HX_MARK_MEMBER_NAME(validStyleName,"validStyleName");
	HX_MARK_MEMBER_NAME(invalidStyleName,"invalidStyleName");
	HX_MARK_END_CLASS();
}

void Validator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(invalidMessage,"invalidMessage");
	HX_VISIT_MEMBER_NAME(applyValid,"applyValid");
	HX_VISIT_MEMBER_NAME(applyInvalid,"applyInvalid");
	HX_VISIT_MEMBER_NAME(validStyleName,"validStyleName");
	HX_VISIT_MEMBER_NAME(invalidStyleName,"invalidStyleName");
}

::hx::Val Validator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return ::hx::Val( setup_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onReset") ) { return ::hx::Val( onReset_dyn() ); }
		if (HX_FIELD_EQ(inName,"onValid") ) { return ::hx::Val( onValid_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return ::hx::Val( validate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onInvalid") ) { return ::hx::Val( onInvalid_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyValid") ) { return ::hx::Val( applyValid ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setProperty") ) { return ::hx::Val( setProperty_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"applyInvalid") ) { return ::hx::Val( applyInvalid ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"invalidMessage") ) { return ::hx::Val( invalidMessage ); }
		if (HX_FIELD_EQ(inName,"validStyleName") ) { return ::hx::Val( validStyleName ); }
		if (HX_FIELD_EQ(inName,"validateString") ) { return ::hx::Val( validateString_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidStyleName") ) { return ::hx::Val( invalidStyleName ); }
		if (HX_FIELD_EQ(inName,"validateInternal") ) { return ::hx::Val( validateInternal_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Validator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"applyValid") ) { applyValid=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"applyInvalid") ) { applyInvalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"invalidMessage") ) { invalidMessage=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"validStyleName") ) { validStyleName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidStyleName") ) { invalidStyleName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Validator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("invalidMessage",90,df,d5,57));
	outFields->push(HX_("applyValid",ae,f0,09,dd));
	outFields->push(HX_("applyInvalid",29,27,b5,7a));
	outFields->push(HX_("validStyleName",80,1b,89,5f));
	outFields->push(HX_("invalidStyleName",25,9e,68,16));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Validator_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Validator_obj,invalidMessage),HX_("invalidMessage",90,df,d5,57)},
	{::hx::fsBool,(int)offsetof(Validator_obj,applyValid),HX_("applyValid",ae,f0,09,dd)},
	{::hx::fsBool,(int)offsetof(Validator_obj,applyInvalid),HX_("applyInvalid",29,27,b5,7a)},
	{::hx::fsString,(int)offsetof(Validator_obj,validStyleName),HX_("validStyleName",80,1b,89,5f)},
	{::hx::fsString,(int)offsetof(Validator_obj,invalidStyleName),HX_("invalidStyleName",25,9e,68,16)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Validator_obj_sStaticStorageInfo = 0;
#endif

static ::String Validator_obj_sMemberFields[] = {
	HX_("invalidMessage",90,df,d5,57),
	HX_("applyValid",ae,f0,09,dd),
	HX_("applyInvalid",29,27,b5,7a),
	HX_("validStyleName",80,1b,89,5f),
	HX_("invalidStyleName",25,9e,68,16),
	HX_("setup",7d,ae,2f,7a),
	HX_("validate",96,d0,e3,04),
	HX_("validateInternal",f3,79,cf,e0),
	HX_("onReset",30,e8,05,7d),
	HX_("onValid",5d,13,f6,c7),
	HX_("onInvalid",98,93,f2,12),
	HX_("validateString",07,02,f8,64),
	HX_("setProperty",17,12,99,dc),
	::String(null()) };

::hx::Class Validator_obj::__mClass;

void Validator_obj::__register()
{
	Validator_obj _hx_dummy;
	Validator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.validators.Validator",77,4d,a0,4f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Validator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Validator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Validator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Validator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace validators
