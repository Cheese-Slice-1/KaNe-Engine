// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Decorator
#include <haxe/ui/components/Decorator.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_8690930a3dac2d03_8_new,"haxe.ui.components.Decorator","new",0x3a1a2cc7,"haxe.ui.components.Decorator.new","haxe/ui/components/Decorator.hx",8,0xe803e36a)
HX_LOCAL_STACK_FRAME(_hx_pos_8690930a3dac2d03_9_set_icon,"haxe.ui.components.Decorator","set_icon",0x10394aaf,"haxe.ui.components.Decorator.set_icon","haxe/ui/components/Decorator.hx",9,0xe803e36a)
HX_LOCAL_STACK_FRAME(_hx_pos_8690930a3dac2d03_19_applyStyle,"haxe.ui.components.Decorator","applyStyle",0x7eb82f5c,"haxe.ui.components.Decorator.applyStyle","haxe/ui/components/Decorator.hx",19,0xe803e36a)
HX_LOCAL_STACK_FRAME(_hx_pos_1f2be513e770d0e5_551_registerBehaviours,"haxe.ui.components.Decorator","registerBehaviours",0x5c895752,"haxe.ui.components.Decorator.registerBehaviours","haxe/ui/macros/Macros.hx",551,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_7241ab010bd93ec2_700_cloneComponent,"haxe.ui.components.Decorator","cloneComponent",0x95bb2899,"haxe.ui.components.Decorator.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_1f2be513e770d0e5_521_self,"haxe.ui.components.Decorator","self",0xa01b0945,"haxe.ui.components.Decorator.self","haxe/ui/macros/Macros.hx",521,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Decorator_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8690930a3dac2d03_8_new)
HXDLIN(   8)		super::__construct();
            	}

Dynamic Decorator_obj::__CreateEmpty() { return new Decorator_obj; }

void *Decorator_obj::_hx_vtable = 0;

Dynamic Decorator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Decorator_obj > _hx_result = new Decorator_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Decorator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x0f2dd418;
			}
		} else {
			return inClassId==(int)0x13d76ae7 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x6b353933) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x241810fb || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x6b353933;
			}
		} else {
			return inClassId==(int)0x6d5fe40b || inClassId==(int)0x72c347e4;
		}
	}
}

 ::haxe::ui::util::VariantType Decorator_obj::set_icon( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_8690930a3dac2d03_9_set_icon)
HXLINE(  10)		 ::haxe::ui::components::Image image = ( ( ::haxe::ui::components::Image)(this->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Image >(),null(),null())) );
HXLINE(  11)		if (::hx::IsNull( image )) {
HXLINE(  12)			image =  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
HXLINE(  13)			this->addComponent(image);
            		}
HXLINE(  15)		image->set_resource(value);
HXLINE(  16)		return value;
            	}


void Decorator_obj::applyStyle( ::haxe::ui::styles::Style style){
            	HX_STACKFRAME(&_hx_pos_8690930a3dac2d03_19_applyStyle)
HXLINE(  20)		this->super::applyStyle(style);
HXLINE(  22)		if (::hx::IsNotNull( style->icon )) {
HXLINE(  23)			this->set_icon(style->icon);
            		}
            	}


void Decorator_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_1f2be513e770d0e5_551_registerBehaviours)
HXDLIN( 551)		this->super::registerBehaviours();
            	}


 ::haxe::ui::backend::ComponentBase Decorator_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_7241ab010bd93ec2_700_cloneComponent)
HXLINE( 469)		 ::haxe::ui::components::Decorator c = ( ( ::haxe::ui::components::Decorator)(this->super::cloneComponent()) );
HXLINE( 484)		{
HXLINE( 485)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 485)			if (::hx::IsNull( this->_children )) {
HXLINE( 485)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 485)				_hx_tmp = this->_children;
            			}
HXDLIN( 485)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 485)			if (::hx::IsNull( c->_children )) {
HXLINE( 485)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 485)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 485)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 486)				int _g = 0;
HXDLIN( 486)				::Array< ::Dynamic> _g1;
HXDLIN( 486)				if (::hx::IsNull( this->_children )) {
HXLINE( 486)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 486)					_g1 = this->_children;
            				}
HXDLIN( 486)				while((_g < _g1->length)){
HXLINE( 486)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 486)					_g = (_g + 1);
HXLINE( 487)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 491)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 493)		return c;
            	}


 ::haxe::ui::backend::ComponentBase Decorator_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_1f2be513e770d0e5_521_self)
HXDLIN( 521)		return  ::haxe::ui::components::Decorator_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Decorator_obj > Decorator_obj::__new() {
	::hx::ObjectPtr< Decorator_obj > __this = new Decorator_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Decorator_obj > Decorator_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Decorator_obj *__this = (Decorator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Decorator_obj), true, "haxe.ui.components.Decorator"));
	*(void **)__this = Decorator_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Decorator_obj::Decorator_obj()
{
}

::hx::Val Decorator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_icon") ) { return ::hx::Val( set_icon_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return ::hx::Val( applyStyle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Decorator_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Decorator_obj_sStaticStorageInfo = 0;
#endif

static ::String Decorator_obj_sMemberFields[] = {
	HX_("set_icon",76,fc,ca,73),
	HX_("applyStyle",e3,20,6f,2f),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Decorator_obj::__mClass;

void Decorator_obj::__register()
{
	Decorator_obj _hx_dummy;
	Decorator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Decorator",55,bd,ac,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Decorator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Decorator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Decorator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Decorator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
