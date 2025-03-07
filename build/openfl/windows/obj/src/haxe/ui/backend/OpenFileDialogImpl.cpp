// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_OpenFileDialogBase
#include <haxe/ui/backend/OpenFileDialogBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_OpenFileDialogImpl
#include <haxe/ui/backend/OpenFileDialogImpl.h>
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
#ifndef INCLUDED_openfl_net_FileFilter
#include <openfl/net/FileFilter.h>
#endif
#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
#endif
#ifndef INCLUDED_openfl_net_FileReferenceList
#include <openfl/net/FileReferenceList.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_7ec9e42b9f4b584e_17_new,"haxe.ui.backend.OpenFileDialogImpl","new",0xf0397e8c,"haxe.ui.backend.OpenFileDialogImpl.new","haxe/ui/backend/OpenFileDialogImpl.hx",17,0x0146c623)
HX_LOCAL_STACK_FRAME(_hx_pos_7ec9e42b9f4b584e_48_show,"haxe.ui.backend.OpenFileDialogImpl","show",0x45658d51,"haxe.ui.backend.OpenFileDialogImpl.show","haxe/ui/backend/OpenFileDialogImpl.hx",48,0x0146c623)
HX_LOCAL_STACK_FRAME(_hx_pos_7ec9e42b9f4b584e_57_buildFileFilters,"haxe.ui.backend.OpenFileDialogImpl","buildFileFilters",0x56a63865,"haxe.ui.backend.OpenFileDialogImpl.buildFileFilters","haxe/ui/backend/OpenFileDialogImpl.hx",57,0x0146c623)
HX_LOCAL_STACK_FRAME(_hx_pos_7ec9e42b9f4b584e_87_onSelect,"haxe.ui.backend.OpenFileDialogImpl","onSelect",0x4c5783cf,"haxe.ui.backend.OpenFileDialogImpl.onSelect","haxe/ui/backend/OpenFileDialogImpl.hx",87,0x0146c623)
HX_LOCAL_STACK_FRAME(_hx_pos_7ec9e42b9f4b584e_114_onFileComplete,"haxe.ui.backend.OpenFileDialogImpl","onFileComplete",0xd335b068,"haxe.ui.backend.OpenFileDialogImpl.onFileComplete","haxe/ui/backend/OpenFileDialogImpl.hx",114,0x0146c623)
HX_LOCAL_STACK_FRAME(_hx_pos_7ec9e42b9f4b584e_136_isMapEmpty,"haxe.ui.backend.OpenFileDialogImpl","isMapEmpty",0x86c36baf,"haxe.ui.backend.OpenFileDialogImpl.isMapEmpty","haxe/ui/backend/OpenFileDialogImpl.hx",136,0x0146c623)
HX_LOCAL_STACK_FRAME(_hx_pos_7ec9e42b9f4b584e_149_onCancel,"haxe.ui.backend.OpenFileDialogImpl","onCancel",0x9a58564d,"haxe.ui.backend.OpenFileDialogImpl.onCancel","haxe/ui/backend/OpenFileDialogImpl.hx",149,0x0146c623)
HX_LOCAL_STACK_FRAME(_hx_pos_7ec9e42b9f4b584e_154_destroyFileRef,"haxe.ui.backend.OpenFileDialogImpl","destroyFileRef",0x555dcfb1,"haxe.ui.backend.OpenFileDialogImpl.destroyFileRef","haxe/ui/backend/OpenFileDialogImpl.hx",154,0x0146c623)
namespace haxe{
namespace ui{
namespace backend{

void OpenFileDialogImpl_obj::__construct( ::Dynamic options, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_7ec9e42b9f4b584e_17_new)
HXLINE(  44)		this->_fr = null();
HXLINE(  17)		super::__construct(options,callback);
            	}

Dynamic OpenFileDialogImpl_obj::__CreateEmpty() { return new OpenFileDialogImpl_obj; }

void *OpenFileDialogImpl_obj::_hx_vtable = 0;

Dynamic OpenFileDialogImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OpenFileDialogImpl_obj > _hx_result = new OpenFileDialogImpl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OpenFileDialogImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x01036ef9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x01036ef9;
	} else {
		return inClassId==(int)0x05ad05c8;
	}
}

void OpenFileDialogImpl_obj::show(){
            	HX_GC_STACKFRAME(&_hx_pos_7ec9e42b9f4b584e_48_show)
HXLINE(  49)		this->_refToInfo =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  50)		this->_infos = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  51)		this->_fr =  ::openfl::net::FileReferenceList_obj::__alloc( HX_CTX );
HXLINE(  52)		this->_fr->addEventListener(HX_("select",fc,1a,33,6a),this->onSelect_dyn(),false,0,true);
HXLINE(  53)		this->_fr->addEventListener(HX_("cancel",7a,ed,33,b8),this->onCancel_dyn(),false,0,true);
HXLINE(  54)		 ::openfl::net::FileReferenceList _hx_tmp = this->_fr;
HXDLIN(  54)		_hx_tmp->browse(this->buildFileFilters());
            	}


::Array< ::Dynamic> OpenFileDialogImpl_obj::buildFileFilters(){
            	HX_STACKFRAME(&_hx_pos_7ec9e42b9f4b584e_57_buildFileFilters)
HXLINE(  58)		::Array< ::Dynamic> f = null();
HXLINE(  84)		return f;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenFileDialogImpl_obj,buildFileFilters,return )

void OpenFileDialogImpl_obj::onSelect( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_7ec9e42b9f4b584e_87_onSelect)
HXLINE(  88)		::Array< ::Dynamic> fileList = this->_fr->fileList;
HXLINE(  89)		this->destroyFileRef();
HXLINE(  90)		::Array< ::Dynamic> infos = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  91)		{
HXLINE(  91)			int _g = 0;
HXDLIN(  91)			while((_g < fileList->length)){
HXLINE(  91)				 ::openfl::net::FileReference fileRef = fileList->__get(_g).StaticCast<  ::openfl::net::FileReference >();
HXDLIN(  91)				_g = (_g + 1);
HXLINE(  94)				::String info = fileRef->get_name();
HXLINE(  92)				 ::Dynamic info1 =  ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("isBinary",8b,57,75,45),false)
            					->setFixed(1,HX_("name",4b,72,ff,48),info)
            					->setFixed(2,HX_("fullPath",d4,6e,65,5e),fileRef->_hx___path));
HXLINE(  97)				if (::hx::IsEq( this->get_options()->__Field(HX_("readContents",90,52,59,6a),::hx::paccDynamic),true )) {
HXLINE(  98)					this->_refToInfo->set(fileRef,info1);
            				}
HXLINE( 100)				infos->push(info1);
            			}
            		}
HXLINE( 103)		if (::hx::IsEq( this->get_options()->__Field(HX_("readContents",90,52,59,6a),::hx::paccDynamic),false )) {
HXLINE( 104)			this->dialogConfirmed(infos);
            		}
            		else {
HXLINE( 106)			 ::Dynamic fileRef1 = this->_refToInfo->keys();
HXDLIN( 106)			while(( (bool)(fileRef1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 106)				 ::openfl::net::FileReference fileRef2 = ( ( ::openfl::net::FileReference)(fileRef1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 107)				fileRef2->addEventListener(HX_("complete",b9,00,c8,7f),this->onFileComplete_dyn(),false,0,true);
HXLINE( 108)				fileRef2->load();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenFileDialogImpl_obj,onSelect,(void))

void OpenFileDialogImpl_obj::onFileComplete( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_7ec9e42b9f4b584e_114_onFileComplete)
HXLINE( 115)		 ::openfl::net::FileReference fileRef = ::hx::TCast<  ::openfl::net::FileReference >::cast(e->target);
HXLINE( 116)		fileRef->removeEventListener(HX_("complete",b9,00,c8,7f),this->onFileComplete_dyn(),null());
HXLINE( 117)		 ::Dynamic info = this->_refToInfo->get(fileRef);
HXLINE( 118)		if (::hx::IsEq( this->get_options()->__Field(HX_("readAsBinary",09,14,17,b7),::hx::paccDynamic),true )) {
HXLINE( 119)			info->__SetField(HX_("isBinary",8b,57,75,45),true,::hx::paccDynamic);
HXLINE( 120)			info->__SetField(HX_("bytes",6b,08,98,bd),::haxe::io::Bytes_obj::ofData(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytesData(fileRef->data)),::hx::paccDynamic);
            		}
            		else {
HXLINE( 122)			info->__SetField(HX_("isBinary",8b,57,75,45),false,::hx::paccDynamic);
HXLINE( 123)			info->__SetField(HX_("text",ad,cc,f9,4c),fileRef->data->toString(),::hx::paccDynamic);
            		}
HXLINE( 126)		this->_infos->push(info);
HXLINE( 127)		this->_refToInfo->remove(fileRef);
HXLINE( 128)		if (this->isMapEmpty()) {
HXLINE( 129)			::Array< ::Dynamic> copy = this->_infos->copy();
HXLINE( 130)			this->_infos = null();
HXLINE( 131)			this->_refToInfo = null();
HXLINE( 132)			this->dialogConfirmed(copy);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenFileDialogImpl_obj,onFileComplete,(void))

bool OpenFileDialogImpl_obj::isMapEmpty(){
            	HX_STACKFRAME(&_hx_pos_7ec9e42b9f4b584e_136_isMapEmpty)
HXLINE( 137)		if (::hx::IsNull( this->_refToInfo )) {
HXLINE( 138)			return true;
            		}
HXLINE( 141)		int n = 0;
HXLINE( 142)		{
HXLINE( 142)			 ::Dynamic _ = this->_refToInfo->keys();
HXDLIN( 142)			while(( (bool)(_->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 142)				 ::openfl::net::FileReference _1 = ( ( ::openfl::net::FileReference)(_->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 143)				n = (n + 1);
            			}
            		}
HXLINE( 146)		return (n == 0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenFileDialogImpl_obj,isMapEmpty,return )

void OpenFileDialogImpl_obj::onCancel( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_7ec9e42b9f4b584e_149_onCancel)
HXLINE( 150)		this->destroyFileRef();
HXLINE( 151)		this->dialogCancelled();
            	}


HX_DEFINE_DYNAMIC_FUNC1(OpenFileDialogImpl_obj,onCancel,(void))

void OpenFileDialogImpl_obj::destroyFileRef(){
            	HX_STACKFRAME(&_hx_pos_7ec9e42b9f4b584e_154_destroyFileRef)
HXLINE( 155)		if (::hx::IsNull( this->_fr )) {
HXLINE( 156)			return;
            		}
HXLINE( 159)		this->_fr->removeEventListener(HX_("select",fc,1a,33,6a),this->onSelect_dyn(),null());
HXLINE( 160)		this->_fr->removeEventListener(HX_("cancel",7a,ed,33,b8),this->onCancel_dyn(),null());
HXLINE( 161)		this->_fr = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OpenFileDialogImpl_obj,destroyFileRef,(void))


::hx::ObjectPtr< OpenFileDialogImpl_obj > OpenFileDialogImpl_obj::__new( ::Dynamic options, ::Dynamic callback) {
	::hx::ObjectPtr< OpenFileDialogImpl_obj > __this = new OpenFileDialogImpl_obj();
	__this->__construct(options,callback);
	return __this;
}

::hx::ObjectPtr< OpenFileDialogImpl_obj > OpenFileDialogImpl_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic options, ::Dynamic callback) {
	OpenFileDialogImpl_obj *__this = (OpenFileDialogImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OpenFileDialogImpl_obj), true, "haxe.ui.backend.OpenFileDialogImpl"));
	*(void **)__this = OpenFileDialogImpl_obj::_hx_vtable;
	__this->__construct(options,callback);
	return __this;
}

OpenFileDialogImpl_obj::OpenFileDialogImpl_obj()
{
}

void OpenFileDialogImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OpenFileDialogImpl);
	HX_MARK_MEMBER_NAME(_fr,"_fr");
	HX_MARK_MEMBER_NAME(_refToInfo,"_refToInfo");
	HX_MARK_MEMBER_NAME(_infos,"_infos");
	 ::haxe::ui::backend::OpenFileDialogBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OpenFileDialogImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_fr,"_fr");
	HX_VISIT_MEMBER_NAME(_refToInfo,"_refToInfo");
	HX_VISIT_MEMBER_NAME(_infos,"_infos");
	 ::haxe::ui::backend::OpenFileDialogBase_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OpenFileDialogImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fr") ) { return ::hx::Val( _fr ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return ::hx::Val( show_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_infos") ) { return ::hx::Val( _infos ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onSelect") ) { return ::hx::Val( onSelect_dyn() ); }
		if (HX_FIELD_EQ(inName,"onCancel") ) { return ::hx::Val( onCancel_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_refToInfo") ) { return ::hx::Val( _refToInfo ); }
		if (HX_FIELD_EQ(inName,"isMapEmpty") ) { return ::hx::Val( isMapEmpty_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onFileComplete") ) { return ::hx::Val( onFileComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroyFileRef") ) { return ::hx::Val( destroyFileRef_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"buildFileFilters") ) { return ::hx::Val( buildFileFilters_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OpenFileDialogImpl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fr") ) { _fr=inValue.Cast<  ::openfl::net::FileReferenceList >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_infos") ) { _infos=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_refToInfo") ) { _refToInfo=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OpenFileDialogImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_fr",6b,6f,48,00));
	outFields->push(HX_("_refToInfo",fd,ac,a0,1d));
	outFields->push(HX_("_infos",86,6f,fd,b9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OpenFileDialogImpl_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::net::FileReferenceList */ ,(int)offsetof(OpenFileDialogImpl_obj,_fr),HX_("_fr",6b,6f,48,00)},
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(OpenFileDialogImpl_obj,_refToInfo),HX_("_refToInfo",fd,ac,a0,1d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(OpenFileDialogImpl_obj,_infos),HX_("_infos",86,6f,fd,b9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OpenFileDialogImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String OpenFileDialogImpl_obj_sMemberFields[] = {
	HX_("_fr",6b,6f,48,00),
	HX_("_refToInfo",fd,ac,a0,1d),
	HX_("_infos",86,6f,fd,b9),
	HX_("show",fd,d4,52,4c),
	HX_("buildFileFilters",11,52,36,cd),
	HX_("onSelect",7b,11,e0,49),
	HX_("onFileComplete",14,c7,91,e9),
	HX_("isMapEmpty",5b,bc,cb,61),
	HX_("onCancel",f9,e3,e0,97),
	HX_("destroyFileRef",5d,e6,b9,6b),
	::String(null()) };

::hx::Class OpenFileDialogImpl_obj::__mClass;

void OpenFileDialogImpl_obj::__register()
{
	OpenFileDialogImpl_obj _hx_dummy;
	OpenFileDialogImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.OpenFileDialogImpl",9a,88,e4,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OpenFileDialogImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OpenFileDialogImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OpenFileDialogImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OpenFileDialogImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
