// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_SaveFileDialogBase
#include <haxe/ui/backend/SaveFileDialogBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_SaveFileDialogImpl
#include <haxe/ui/backend/SaveFileDialogImpl.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37c778970cd0f7d4_10_new,"haxe.ui.backend.SaveFileDialogImpl","new",0xb7a0debf,"haxe.ui.backend.SaveFileDialogImpl.new","haxe/ui/backend/SaveFileDialogImpl.hx",10,0x7869ad50)
HX_LOCAL_STACK_FRAME(_hx_pos_37c778970cd0f7d4_39_show,"haxe.ui.backend.SaveFileDialogImpl","show",0xf87259be,"haxe.ui.backend.SaveFileDialogImpl.show","haxe/ui/backend/SaveFileDialogImpl.hx",39,0x7869ad50)
HX_LOCAL_STACK_FRAME(_hx_pos_37c778970cd0f7d4_54_onSelect,"haxe.ui.backend.SaveFileDialogImpl","onSelect",0xf6678abc,"haxe.ui.backend.SaveFileDialogImpl.onSelect","haxe/ui/backend/SaveFileDialogImpl.hx",54,0x7869ad50)
HX_LOCAL_STACK_FRAME(_hx_pos_37c778970cd0f7d4_59_onCancel,"haxe.ui.backend.SaveFileDialogImpl","onCancel",0x44685d3a,"haxe.ui.backend.SaveFileDialogImpl.onCancel","haxe/ui/backend/SaveFileDialogImpl.hx",59,0x7869ad50)
HX_LOCAL_STACK_FRAME(_hx_pos_37c778970cd0f7d4_64_destroyFileRef,"haxe.ui.backend.SaveFileDialogImpl","destroyFileRef",0xeb95465e,"haxe.ui.backend.SaveFileDialogImpl.destroyFileRef","haxe/ui/backend/SaveFileDialogImpl.hx",64,0x7869ad50)
namespace haxe{
namespace ui{
namespace backend{

void SaveFileDialogImpl_obj::__construct( ::Dynamic options, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_37c778970cd0f7d4_10_new)
HXLINE(  37)		this->_fr = null();
HXLINE(  10)		super::__construct(options,callback);
            	}

Dynamic SaveFileDialogImpl_obj::__CreateEmpty() { return new SaveFileDialogImpl_obj; }

void *SaveFileDialogImpl_obj::_hx_vtable = 0;

Dynamic SaveFileDialogImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SaveFileDialogImpl_obj > _hx_result = new SaveFileDialogImpl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SaveFileDialogImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x29838600) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x29838600;
	} else {
		return inClassId==(int)0x2e2d1ccf;
	}
}

void SaveFileDialogImpl_obj::show(){
            	HX_GC_STACKFRAME(&_hx_pos_37c778970cd0f7d4_39_show)
HXLINE(  40)		bool _hx_tmp;
HXDLIN(  40)		if (::hx::IsNotNull( this->fileInfo )) {
HXLINE(  40)			if (::hx::IsNull( this->fileInfo->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic) )) {
HXLINE(  40)				_hx_tmp = ::hx::IsNull( this->fileInfo->__Field(HX_("bytes",6b,08,98,bd),::hx::paccDynamic) );
            			}
            			else {
HXLINE(  40)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE(  40)			_hx_tmp = true;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  41)			HX_STACK_DO_THROW(HX_("Nothing to write",0d,23,2c,78));
            		}
HXLINE(  44)		 ::Dynamic data =  ::Dynamic(this->fileInfo->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic));
HXLINE(  45)		if (::hx::IsNull( data )) {
HXLINE(  46)			data = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(( ( ::haxe::io::Bytes)(this->fileInfo->__Field(HX_("bytes",6b,08,98,bd),::hx::paccDynamic)) ));
            		}
HXLINE(  48)		this->_fr =  ::openfl::net::FileReference_obj::__alloc( HX_CTX );
HXLINE(  49)		this->_fr->addEventListener(HX_("select",fc,1a,33,6a),this->onSelect_dyn(),false,0,true);
HXLINE(  50)		this->_fr->addEventListener(HX_("cancel",7a,ed,33,b8),this->onCancel_dyn(),false,0,true);
HXLINE(  51)		this->_fr->save(data,( (::String)(this->fileInfo->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ));
            	}


void SaveFileDialogImpl_obj::onSelect( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_37c778970cd0f7d4_54_onSelect)
HXLINE(  55)		this->destroyFileRef();
HXLINE(  56)		this->dialogConfirmed();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SaveFileDialogImpl_obj,onSelect,(void))

void SaveFileDialogImpl_obj::onCancel( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_37c778970cd0f7d4_59_onCancel)
HXLINE(  60)		this->destroyFileRef();
HXLINE(  61)		this->dialogCancelled();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SaveFileDialogImpl_obj,onCancel,(void))

void SaveFileDialogImpl_obj::destroyFileRef(){
            	HX_STACKFRAME(&_hx_pos_37c778970cd0f7d4_64_destroyFileRef)
HXLINE(  65)		if (::hx::IsNull( this->_fr )) {
HXLINE(  66)			return;
            		}
HXLINE(  69)		this->_fr->removeEventListener(HX_("select",fc,1a,33,6a),this->onSelect_dyn(),null());
HXLINE(  70)		this->_fr->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onCancel_dyn(),null());
HXLINE(  71)		this->_fr = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SaveFileDialogImpl_obj,destroyFileRef,(void))


::hx::ObjectPtr< SaveFileDialogImpl_obj > SaveFileDialogImpl_obj::__new( ::Dynamic options, ::Dynamic callback) {
	::hx::ObjectPtr< SaveFileDialogImpl_obj > __this = new SaveFileDialogImpl_obj();
	__this->__construct(options,callback);
	return __this;
}

::hx::ObjectPtr< SaveFileDialogImpl_obj > SaveFileDialogImpl_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic options, ::Dynamic callback) {
	SaveFileDialogImpl_obj *__this = (SaveFileDialogImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SaveFileDialogImpl_obj), true, "haxe.ui.backend.SaveFileDialogImpl"));
	*(void **)__this = SaveFileDialogImpl_obj::_hx_vtable;
	__this->__construct(options,callback);
	return __this;
}

SaveFileDialogImpl_obj::SaveFileDialogImpl_obj()
{
}

void SaveFileDialogImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SaveFileDialogImpl);
	HX_MARK_MEMBER_NAME(_fr,"_fr");
	 ::haxe::ui::backend::SaveFileDialogBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SaveFileDialogImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_fr,"_fr");
	 ::haxe::ui::backend::SaveFileDialogBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SaveFileDialogImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fr") ) { return ::hx::Val( _fr ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onSelect") ) { return ::hx::Val( onSelect_dyn() ); }
		if (HX_FIELD_EQ(inName,"onCancel") ) { return ::hx::Val( onCancel_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyFileRef") ) { return ::hx::Val( destroyFileRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SaveFileDialogImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fr") ) { _fr=inValue.Cast<  ::openfl::net::FileReference >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SaveFileDialogImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_fr",6b,6f,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SaveFileDialogImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::net::FileReference */ ,(int)offsetof(SaveFileDialogImpl_obj,_fr),HX_("_fr",6b,6f,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SaveFileDialogImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String SaveFileDialogImpl_obj_sMemberFields[] = {
	HX_("_fr",6b,6f,48,00),
	HX_("show",fd,d4,52,4c),
	HX_("onSelect",7b,11,e0,49),
	HX_("onCancel",f9,e3,e0,97),
	HX_("destroyFileRef",5d,e6,b9,6b),
	::String(null()) };

::hx::Class SaveFileDialogImpl_obj::__mClass;

void SaveFileDialogImpl_obj::__register()
{
	SaveFileDialogImpl_obj _hx_dummy;
	SaveFileDialogImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.SaveFileDialogImpl",4d,13,85,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SaveFileDialogImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SaveFileDialogImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SaveFileDialogImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SaveFileDialogImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
