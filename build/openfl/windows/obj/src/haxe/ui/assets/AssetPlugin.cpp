// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_assets_AssetPlugin
#include <haxe/ui/assets/AssetPlugin.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_784947f27432f816_6_new,"haxe.ui.assets.AssetPlugin","new",0x641af5bc,"haxe.ui.assets.AssetPlugin.new","haxe/ui/assets/AssetPlugin.hx",6,0xeacd3a55)
HX_LOCAL_STACK_FRAME(_hx_pos_784947f27432f816_11_invoke,"haxe.ui.assets.AssetPlugin","invoke",0x442e139c,"haxe.ui.assets.AssetPlugin.invoke","haxe/ui/assets/AssetPlugin.hx",11,0xeacd3a55)
HX_LOCAL_STACK_FRAME(_hx_pos_784947f27432f816_14_setProperty,"haxe.ui.assets.AssetPlugin","setProperty",0x924ef373,"haxe.ui.assets.AssetPlugin.setProperty","haxe/ui/assets/AssetPlugin.hx",14,0xeacd3a55)
HX_LOCAL_STACK_FRAME(_hx_pos_784947f27432f816_21_getProperty,"haxe.ui.assets.AssetPlugin","getProperty",0x87e1ec67,"haxe.ui.assets.AssetPlugin.getProperty","haxe/ui/assets/AssetPlugin.hx",21,0xeacd3a55)
namespace haxe{
namespace ui{
namespace assets{

void AssetPlugin_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_784947f27432f816_6_new)
            	}

Dynamic AssetPlugin_obj::__CreateEmpty() { return new AssetPlugin_obj; }

void *AssetPlugin_obj::_hx_vtable = 0;

Dynamic AssetPlugin_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetPlugin_obj > _hx_result = new AssetPlugin_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetPlugin_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ee059ee;
}

 ::Dynamic AssetPlugin_obj::invoke( ::Dynamic asset){
            	HX_STACKFRAME(&_hx_pos_784947f27432f816_11_invoke)
HXDLIN(  11)		return asset;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetPlugin_obj,invoke,return )

void AssetPlugin_obj::setProperty(::String name,::String value){
            	HX_GC_STACKFRAME(&_hx_pos_784947f27432f816_14_setProperty)
HXLINE(  15)		if (::hx::IsNull( this->_props )) {
HXLINE(  16)			this->_props =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  18)		this->_props->set(name,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetPlugin_obj,setProperty,(void))

::String AssetPlugin_obj::getProperty(::String name,::String defaultValue){
            	HX_STACKFRAME(&_hx_pos_784947f27432f816_21_getProperty)
HXLINE(  22)		if (::hx::IsNull( this->_props )) {
HXLINE(  23)			return defaultValue;
            		}
HXLINE(  25)		::String v = this->_props->get_string(name);
HXLINE(  26)		if (::hx::IsNull( v )) {
HXLINE(  27)			v = defaultValue;
            		}
HXLINE(  29)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetPlugin_obj,getProperty,return )


::hx::ObjectPtr< AssetPlugin_obj > AssetPlugin_obj::__new() {
	::hx::ObjectPtr< AssetPlugin_obj > __this = new AssetPlugin_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AssetPlugin_obj > AssetPlugin_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AssetPlugin_obj *__this = (AssetPlugin_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetPlugin_obj), true, "haxe.ui.assets.AssetPlugin"));
	*(void **)__this = AssetPlugin_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetPlugin_obj::AssetPlugin_obj()
{
}

void AssetPlugin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetPlugin);
	HX_MARK_MEMBER_NAME(_props,"_props");
	HX_MARK_END_CLASS();
}

void AssetPlugin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_props,"_props");
}

::hx::Val AssetPlugin_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_props") ) { return ::hx::Val( _props ); }
		if (HX_FIELD_EQ(inName,"invoke") ) { return ::hx::Val( invoke_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setProperty") ) { return ::hx::Val( setProperty_dyn() ); }
		if (HX_FIELD_EQ(inName,"getProperty") ) { return ::hx::Val( getProperty_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AssetPlugin_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_props") ) { _props=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetPlugin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_props",b1,2e,77,c4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AssetPlugin_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(AssetPlugin_obj,_props),HX_("_props",b1,2e,77,c4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AssetPlugin_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetPlugin_obj_sMemberFields[] = {
	HX_("_props",b1,2e,77,c4),
	HX_("invoke",78,77,e0,9f),
	HX_("setProperty",17,12,99,dc),
	HX_("getProperty",0b,0b,2c,d2),
	::String(null()) };

::hx::Class AssetPlugin_obj::__mClass;

void AssetPlugin_obj::__register()
{
	AssetPlugin_obj _hx_dummy;
	AssetPlugin_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.assets.AssetPlugin",ca,a7,8e,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AssetPlugin_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AssetPlugin_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetPlugin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetPlugin_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace assets
