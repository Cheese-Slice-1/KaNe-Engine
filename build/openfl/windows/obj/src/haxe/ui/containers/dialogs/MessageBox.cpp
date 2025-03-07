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
#ifndef INCLUDED_haxe_ui_backend_MessageBoxBase
#include <haxe/ui/backend/MessageBoxBase.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_Dialog
#include <haxe/ui/containers/dialogs/Dialog.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs_MessageBox
#include <haxe/ui/containers/dialogs/MessageBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_dialogs__Dialog_DialogButton_Impl_
#include <haxe/ui/containers/dialogs/_Dialog/DialogButton_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_57af72f30942e4a4_19_new,"haxe.ui.containers.dialogs.MessageBox","new",0x4d350583,"haxe.ui.containers.dialogs.MessageBox.new","haxe/ui/containers/dialogs/MessageBox.hx",19,0x05c2afab)
HX_LOCAL_STACK_FRAME(_hx_pos_57af72f30942e4a4_24_onInitialize,"haxe.ui.containers.dialogs.MessageBox","onInitialize",0x08fd61cc,"haxe.ui.containers.dialogs.MessageBox.onInitialize","haxe/ui/containers/dialogs/MessageBox.hx",24,0x05c2afab)
HX_LOCAL_STACK_FRAME(_hx_pos_17885a1c11a87dcd_551_registerBehaviours,"haxe.ui.containers.dialogs.MessageBox","registerBehaviours",0xc0bfb216,"haxe.ui.containers.dialogs.MessageBox.registerBehaviours","haxe/ui/macros/Macros.hx",551,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_679593b0b8a98bb4_700_cloneComponent,"haxe.ui.containers.dialogs.MessageBox","cloneComponent",0x51f3d15d,"haxe.ui.containers.dialogs.MessageBox.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_17885a1c11a87dcd_521_self,"haxe.ui.containers.dialogs.MessageBox","self",0x447dd509,"haxe.ui.containers.dialogs.MessageBox.self","haxe/ui/macros/Macros.hx",521,0x27866361)
namespace haxe{
namespace ui{
namespace containers{
namespace dialogs{

void MessageBox_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_57af72f30942e4a4_19_new)
HXLINE(  20)		super::__construct();
HXLINE(  21)		this->set_title(HX_("Message",a7,5d,62,67));
            	}

Dynamic MessageBox_obj::__CreateEmpty() { return new MessageBox_obj; }

void *MessageBox_obj::_hx_vtable = 0;

Dynamic MessageBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MessageBox_obj > _hx_result = new MessageBox_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MessageBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241810fb) {
		if (inClassId<=(int)0x13d76ae7) {
			if (inClassId<=(int)0x0c89e854) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x0c89e854;
				}
			} else {
				return inClassId==(int)0x0f2dd418 || inClassId==(int)0x13d76ae7;
			}
		} else {
			if (inClassId<=(int)0x1f4df417) {
				return inClassId==(int)0x1e1df847 || inClassId==(int)0x1f4df417;
			} else {
				return inClassId==(int)0x241810fb;
			}
		}
	} else {
		if (inClassId<=(int)0x72c347e4) {
			if (inClassId<=(int)0x6b353933) {
				if (inClassId<=(int)0x4af7dd8e) {
					return inClassId==(int)0x3424f103 || inClassId==(int)0x4af7dd8e;
				} else {
					return inClassId==(int)0x6b353933;
				}
			} else {
				return inClassId==(int)0x72c347e4;
			}
		} else {
			return inClassId==(int)0x7b5df583 || inClassId==(int)0x7f2ed947;
		}
	}
}

void MessageBox_obj::onInitialize(){
            	HX_STACKFRAME(&_hx_pos_57af72f30942e4a4_24_onInitialize)
HXLINE(  25)		this->super::onInitialize();
HXLINE(  26)		if ((::haxe::ui::containers::dialogs::_Dialog::DialogButton_Impl__obj::toArray(this->buttons)->length == 0)) {
HXLINE(  27)			::String _hx_switch_0 = this->get_type();
            			if (  (_hx_switch_0==HX_("error",c8,cb,29,73)) ){
HXLINE(  35)				this->buttons = HX_("{{close}}",78,2b,5d,4e);
HXDLIN(  35)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("info",6e,38,bb,45)) ){
HXLINE(  29)				this->buttons = HX_("{{ok}}",1c,09,df,49);
HXDLIN(  29)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("question",26,9b,b0,26)) ){
HXLINE(  31)				::Array< ::String > larr = HX_("{{yes}}",a7,de,4b,17).split(HX_("|",7c,00,00,00));
HXDLIN(  31)				::Array< ::String > rarr = HX_("{{no}}",81,db,38,49).split(HX_("|",7c,00,00,00));
HXDLIN(  31)				{
HXLINE(  31)					int _g = 0;
HXDLIN(  31)					while((_g < rarr->length)){
HXLINE(  31)						::String r = rarr->__get(_g);
HXDLIN(  31)						_g = (_g + 1);
HXDLIN(  31)						if ((larr->indexOf(r,null()) == -1)) {
HXLINE(  31)							larr->push(r);
            						}
            					}
            				}
HXDLIN(  31)				::String lhs = larr->join(HX_("|",7c,00,00,00));
HXDLIN(  31)				::String larr1;
HXDLIN(  31)				if (::hx::IsNull( lhs )) {
HXLINE(  31)					larr1 = HX_("null",87,9e,0e,49);
            				}
            				else {
HXLINE(  31)					larr1 = ::haxe::ui::containers::dialogs::_Dialog::DialogButton_Impl__obj::toString(lhs);
            				}
HXDLIN(  31)				::Array< ::String > larr2 = larr1.split(HX_("|",7c,00,00,00));
HXDLIN(  31)				::String rarr1;
HXDLIN(  31)				if (::hx::IsNull( HX_("{{cancel}}",fa,38,eb,dc) )) {
HXLINE(  31)					rarr1 = HX_("null",87,9e,0e,49);
            				}
            				else {
HXLINE(  31)					rarr1 = ::haxe::ui::containers::dialogs::_Dialog::DialogButton_Impl__obj::toString(HX_("{{cancel}}",fa,38,eb,dc));
            				}
HXDLIN(  31)				::Array< ::String > rarr2 = rarr1.split(HX_("|",7c,00,00,00));
HXDLIN(  31)				{
HXLINE(  31)					int _g1 = 0;
HXDLIN(  31)					while((_g1 < rarr2->length)){
HXLINE(  31)						::String r1 = rarr2->__get(_g1);
HXDLIN(  31)						_g1 = (_g1 + 1);
HXDLIN(  31)						if ((larr2->indexOf(r1,null()) == -1)) {
HXLINE(  31)							larr2->push(r1);
            						}
            					}
            				}
HXDLIN(  31)				this->buttons = larr2->join(HX_("|",7c,00,00,00));
HXDLIN(  31)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("warning",5c,da,cb,09)) ){
HXLINE(  33)				this->buttons = HX_("{{close}}",78,2b,5d,4e);
HXDLIN(  33)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("yesno",28,61,96,ee)) ){
HXLINE(  37)				::String larr3;
HXDLIN(  37)				if (::hx::IsNull( HX_("{{yes}}",a7,de,4b,17) )) {
HXLINE(  37)					larr3 = HX_("null",87,9e,0e,49);
            				}
            				else {
HXLINE(  37)					larr3 = ::haxe::ui::containers::dialogs::_Dialog::DialogButton_Impl__obj::toString(HX_("{{yes}}",a7,de,4b,17));
            				}
HXDLIN(  37)				::Array< ::String > larr4 = larr3.split(HX_("|",7c,00,00,00));
HXDLIN(  37)				::String rarr3;
HXDLIN(  37)				if (::hx::IsNull( HX_("{{no}}",81,db,38,49) )) {
HXLINE(  37)					rarr3 = HX_("null",87,9e,0e,49);
            				}
            				else {
HXLINE(  37)					rarr3 = ::haxe::ui::containers::dialogs::_Dialog::DialogButton_Impl__obj::toString(HX_("{{no}}",81,db,38,49));
            				}
HXDLIN(  37)				::Array< ::String > rarr4 = rarr3.split(HX_("|",7c,00,00,00));
HXDLIN(  37)				{
HXLINE(  37)					int _g2 = 0;
HXDLIN(  37)					while((_g2 < rarr4->length)){
HXLINE(  37)						::String r2 = rarr4->__get(_g2);
HXDLIN(  37)						_g2 = (_g2 + 1);
HXDLIN(  37)						if ((larr4->indexOf(r2,null()) == -1)) {
HXLINE(  37)							larr4->push(r2);
            						}
            					}
            				}
HXDLIN(  37)				this->buttons = larr4->join(HX_("|",7c,00,00,00));
HXDLIN(  37)				goto _hx_goto_1;
            			}
            			_hx_goto_1:;
HXLINE(  39)			this->createButtons();
            		}
HXLINE(  41)		if ((this->get_title() == HX_("Message",a7,5d,62,67))) {
HXLINE(  42)			::String _hx_switch_1 = this->get_type();
            			if (  (_hx_switch_1==HX_("error",c8,cb,29,73)) ){
HXLINE(  50)				this->set_title(HX_("{{messagebox.title.error}}",a8,e6,b9,7a));
HXDLIN(  50)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_1==HX_("info",6e,38,bb,45)) ){
HXLINE(  44)				this->set_title(HX_("{{messagebox.title.info}}",ce,e1,c9,f1));
HXDLIN(  44)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_1==HX_("question",26,9b,b0,26)) ){
HXLINE(  46)				this->set_title(HX_("{{messagebox.title.question}}",86,a2,e3,2f));
HXDLIN(  46)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_1==HX_("warning",5c,da,cb,09)) ){
HXLINE(  48)				this->set_title(HX_("{{messagebox.title.warning}}",3c,a2,ad,73));
HXDLIN(  48)				goto _hx_goto_5;
            			}
            			if (  (_hx_switch_1==HX_("yesno",28,61,96,ee)) ){
HXLINE(  52)				this->set_title(HX_("{{messagebox.title.question}}",86,a2,e3,2f));
HXDLIN(  52)				goto _hx_goto_5;
            			}
            			_hx_goto_5:;
            		}
            	}


void MessageBox_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_17885a1c11a87dcd_551_registerBehaviours)
HXDLIN( 551)		this->super::registerBehaviours();
            	}


 ::haxe::ui::backend::ComponentBase MessageBox_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_679593b0b8a98bb4_700_cloneComponent)
HXLINE( 469)		 ::haxe::ui::containers::dialogs::MessageBox c = ( ( ::haxe::ui::containers::dialogs::MessageBox)(this->super::cloneComponent()) );
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


 ::haxe::ui::backend::ComponentBase MessageBox_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_17885a1c11a87dcd_521_self)
HXDLIN( 521)		return  ::haxe::ui::containers::dialogs::MessageBox_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< MessageBox_obj > MessageBox_obj::__new() {
	::hx::ObjectPtr< MessageBox_obj > __this = new MessageBox_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MessageBox_obj > MessageBox_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MessageBox_obj *__this = (MessageBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MessageBox_obj), true, "haxe.ui.containers.dialogs.MessageBox"));
	*(void **)__this = MessageBox_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MessageBox_obj::MessageBox_obj()
{
}

::hx::Val MessageBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onInitialize") ) { return ::hx::Val( onInitialize_dyn() ); }
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
static ::hx::StorageInfo *MessageBox_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MessageBox_obj_sStaticStorageInfo = 0;
#endif

static ::String MessageBox_obj_sMemberFields[] = {
	HX_("onInitialize",4f,d3,fe,c4),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class MessageBox_obj::__mClass;

void MessageBox_obj::__register()
{
	MessageBox_obj _hx_dummy;
	MessageBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.dialogs.MessageBox",11,88,45,5f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MessageBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MessageBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MessageBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MessageBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace dialogs
