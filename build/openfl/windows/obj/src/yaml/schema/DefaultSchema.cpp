// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_yaml_Schema
#include <yaml/Schema.h>
#endif
#ifndef INCLUDED_yaml_YamlType
#include <yaml/YamlType.h>
#endif
#ifndef INCLUDED_yaml_schema_DefaultSchema
#include <yaml/schema/DefaultSchema.h>
#endif
#ifndef INCLUDED_yaml_schema_SafeSchema
#include <yaml/schema/SafeSchema.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_105020b0c5f4c6e9_9_new,"yaml.schema.DefaultSchema","new",0x64cefa2e,"yaml.schema.DefaultSchema.new","yaml/schema/DefaultSchema.hx",9,0x7c8e9722)
namespace yaml{
namespace schema{

void DefaultSchema_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_105020b0c5f4c6e9_9_new)
HXDLIN(   9)		super::__construct(::Array_obj< ::Dynamic>::__new(1)->init(0, ::yaml::schema::SafeSchema_obj::__alloc( HX_CTX )),null(),null());
            	}

Dynamic DefaultSchema_obj::__CreateEmpty() { return new DefaultSchema_obj; }

void *DefaultSchema_obj::_hx_vtable = 0;

Dynamic DefaultSchema_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DefaultSchema_obj > _hx_result = new DefaultSchema_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DefaultSchema_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1bafaa14) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1bafaa14;
	} else {
		return inClassId==(int)0x202c5a1a;
	}
}


::hx::ObjectPtr< DefaultSchema_obj > DefaultSchema_obj::__new() {
	::hx::ObjectPtr< DefaultSchema_obj > __this = new DefaultSchema_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DefaultSchema_obj > DefaultSchema_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DefaultSchema_obj *__this = (DefaultSchema_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DefaultSchema_obj), true, "yaml.schema.DefaultSchema"));
	*(void **)__this = DefaultSchema_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DefaultSchema_obj::DefaultSchema_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DefaultSchema_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DefaultSchema_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DefaultSchema_obj::__mClass;

void DefaultSchema_obj::__register()
{
	DefaultSchema_obj _hx_dummy;
	DefaultSchema_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("yaml.schema.DefaultSchema",3c,0b,27,b2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DefaultSchema_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultSchema_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultSchema_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace yaml
} // end namespace schema
