// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsBase
#include <haxe/ui/backend/ComponentGraphicsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsImpl
#include <haxe/ui/backend/ComponentGraphicsImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Canvas
#include <haxe/ui/components/Canvas.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Canvas_DataSourceBehaviour
#include <haxe/ui/components/_Canvas/DataSourceBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_graphics_ComponentGraphics
#include <haxe/ui/graphics/ComponentGraphics.h>
#endif
#ifndef INCLUDED_haxe_ui_graphics_DrawCommand
#include <haxe/ui/graphics/DrawCommand.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b96dc308b2e6ed24_15_new,"haxe.ui.components.Canvas","new",0xdd8989f0,"haxe.ui.components.Canvas.new","haxe/ui/components/Canvas.hx",15,0x66f0c1ff)
HX_LOCAL_STACK_FRAME(_hx_pos_b96dc308b2e6ed24_20_validateComponentLayout,"haxe.ui.components.Canvas","validateComponentLayout",0xbd69f0e1,"haxe.ui.components.Canvas.validateComponentLayout","haxe/ui/components/Canvas.hx",20,0x66f0c1ff)
HX_LOCAL_STACK_FRAME(_hx_pos_b96dc308b2e6ed24_29_cloneComponent,"haxe.ui.components.Canvas","cloneComponent",0x6d277a10,"haxe.ui.components.Canvas.cloneComponent","haxe/ui/components/Canvas.hx",29,0x66f0c1ff)
HX_LOCAL_STACK_FRAME(_hx_pos_5790446160793ebf_550_registerBehaviours,"haxe.ui.components.Canvas","registerBehaviours",0x53a13049,"haxe.ui.components.Canvas.registerBehaviours","haxe/ui/macros/Macros.hx",550,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_5790446160793ebf_597_get_dataSource,"haxe.ui.components.Canvas","get_dataSource",0xda998f5e,"haxe.ui.components.Canvas.get_dataSource","haxe/ui/macros/Macros.hx",597,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_5790446160793ebf_648_set_dataSource,"haxe.ui.components.Canvas","set_dataSource",0xfab977d2,"haxe.ui.components.Canvas.set_dataSource","haxe/ui/macros/Macros.hx",648,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_5790446160793ebf_521_self,"haxe.ui.components.Canvas","self",0xfe1d2ffc,"haxe.ui.components.Canvas.self","haxe/ui/macros/Macros.hx",521,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Canvas_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b96dc308b2e6ed24_15_new)
HXLINE(  16)		super::__construct();
HXLINE(  17)		this->componentGraphics =  ::haxe::ui::graphics::ComponentGraphics_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic Canvas_obj::__CreateEmpty() { return new Canvas_obj; }

void *Canvas_obj::_hx_vtable = 0;

Dynamic Canvas_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Canvas_obj > _hx_result = new Canvas_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Canvas_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x72c347e4) {
			if (inClassId<=(int)0x6b353933) {
				return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
			} else {
				return inClassId==(int)0x72c347e4;
			}
		} else {
			return inClassId==(int)0x7d7b3d88;
		}
	}
}

static ::haxe::ui::core::IDataComponent_obj _hx_haxe_ui_components_Canvas__hx_haxe_ui_core_IDataComponent= {
	(  ::haxe::ui::data::DataSource (::hx::Object::*)())&::haxe::ui::components::Canvas_obj::get_dataSource,
	(  ::haxe::ui::data::DataSource (::hx::Object::*)( ::haxe::ui::data::DataSource))&::haxe::ui::components::Canvas_obj::set_dataSource,
};

void *Canvas_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xfafb3fc3: return &_hx_haxe_ui_components_Canvas__hx_haxe_ui_core_IDataComponent;
	}
	return super::_hx_getInterface(inHash);
}

bool Canvas_obj::validateComponentLayout(){
            	HX_STACKFRAME(&_hx_pos_b96dc308b2e6ed24_20_validateComponentLayout)
HXLINE(  21)		bool b = this->super::validateComponentLayout();
HXLINE(  22)		bool _hx_tmp;
HXDLIN(  22)		if (!((this->get_width() <= 0))) {
HXLINE(  22)			_hx_tmp = (this->get_height() <= 0);
            		}
            		else {
HXLINE(  22)			_hx_tmp = true;
            		}
HXDLIN(  22)		if (_hx_tmp) {
HXLINE(  23)			return b;
            		}
HXLINE(  25)		 ::haxe::ui::graphics::ComponentGraphics _hx_tmp1 = this->componentGraphics;
HXDLIN(  25)		Float _hx_tmp2 = this->get_width();
HXDLIN(  25)		_hx_tmp1->resize(_hx_tmp2,this->get_height());
HXLINE(  26)		return b;
            	}


 ::haxe::ui::backend::ComponentBase Canvas_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_b96dc308b2e6ed24_29_cloneComponent)
HXLINE( 469)		 ::haxe::ui::components::Canvas c = ( ( ::haxe::ui::components::Canvas)(this->super::cloneComponent()) );
HXLINE( 478)		if (::hx::IsNotNull( this->get_dataSource() )) {
HXLINE( 478)			c->set_dataSource(this->get_dataSource());
            		}
HXLINE(  30)		c->componentGraphics->_drawCommands = this->componentGraphics->_drawCommands->copy();
HXLINE(  31)		c->componentGraphics->replayDrawCommands();
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


void Canvas_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_5790446160793ebf_550_registerBehaviours)
HXLINE( 551)		this->super::registerBehaviours();
HXLINE( 667)		this->behaviours->_hx_register(HX_("dataSource",a5,76,d3,1d),::hx::ClassOf< ::haxe::ui::components::_Canvas::DataSourceBehaviour >(),null());
            	}


 ::haxe::ui::data::DataSource Canvas_obj::get_dataSource(){
            	HX_STACKFRAME(&_hx_pos_5790446160793ebf_597_get_dataSource)
HXLINE( 598)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 599)			return null();
            		}
HXLINE( 601)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->behaviours->get(HX_("dataSource",a5,76,d3,1d)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Canvas_obj,get_dataSource,return )

 ::haxe::ui::data::DataSource Canvas_obj::set_dataSource( ::haxe::ui::data::DataSource value){
            	HX_GC_STACKFRAME(&_hx_pos_5790446160793ebf_648_set_dataSource)
HXLINE( 649)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 650)			return value;
            		}
HXLINE( 652)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 652)		_hx_tmp->set(HX_("dataSource",a5,76,d3,1d),::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource(value));
HXLINE( 653)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,::haxe::ui::events::UIEvent_obj::PROPERTY_CHANGE,null(),HX_("dataSource",a5,76,d3,1d)),null());
HXLINE( 654)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Canvas_obj,set_dataSource,return )

 ::haxe::ui::backend::ComponentBase Canvas_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_5790446160793ebf_521_self)
HXDLIN( 521)		return  ::haxe::ui::components::Canvas_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Canvas_obj > Canvas_obj::__new() {
	::hx::ObjectPtr< Canvas_obj > __this = new Canvas_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Canvas_obj > Canvas_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Canvas_obj *__this = (Canvas_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Canvas_obj), true, "haxe.ui.components.Canvas"));
	*(void **)__this = Canvas_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Canvas_obj::Canvas_obj()
{
}

void Canvas_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Canvas);
	HX_MARK_MEMBER_NAME(componentGraphics,"componentGraphics");
	 ::haxe::ui::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Canvas_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(componentGraphics,"componentGraphics");
	 ::haxe::ui::core::Component_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Canvas_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_dataSource() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return ::hx::Val( get_dataSource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return ::hx::Val( set_dataSource_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentGraphics") ) { return ::hx::Val( componentGraphics ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"validateComponentLayout") ) { return ::hx::Val( validateComponentLayout_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Canvas_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_dataSource(inValue.Cast<  ::haxe::ui::data::DataSource >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentGraphics") ) { componentGraphics=inValue.Cast<  ::haxe::ui::graphics::ComponentGraphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Canvas_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("componentGraphics",a8,2a,18,15));
	outFields->push(HX_("dataSource",a5,76,d3,1d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Canvas_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::graphics::ComponentGraphics */ ,(int)offsetof(Canvas_obj,componentGraphics),HX_("componentGraphics",a8,2a,18,15)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Canvas_obj_sStaticStorageInfo = 0;
#endif

static ::String Canvas_obj_sMemberFields[] = {
	HX_("componentGraphics",a8,2a,18,15),
	HX_("validateComponentLayout",51,0f,38,5a),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_dataSource",ee,fe,c8,93),
	HX_("set_dataSource",62,e7,e8,b3),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Canvas_obj::__mClass;

void Canvas_obj::__register()
{
	Canvas_obj _hx_dummy;
	Canvas_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Canvas",fe,11,2a,52);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Canvas_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Canvas_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Canvas_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Canvas_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
