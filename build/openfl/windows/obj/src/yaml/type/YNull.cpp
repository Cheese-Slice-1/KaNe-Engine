// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_yaml_YamlType
#include <yaml/YamlType.h>
#endif
#ifndef INCLUDED_yaml_type_YNull
#include <yaml/type/YNull.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0c1c621a6a4c148c_19_new,"yaml.type.YNull","new",0x82f44325,"yaml.type.YNull.new","yaml/type/YNull.hx",19,0x2b71e44b)
HX_LOCAL_STACK_FRAME(_hx_pos_0c1c621a6a4c148c_24_resolve,"yaml.type.YNull","resolve",0xd611cc31,"yaml.type.YNull.resolve","yaml/type/YNull.hx",24,0x2b71e44b)
HX_LOCAL_STACK_FRAME(_hx_pos_0c1c621a6a4c148c_29_represent,"yaml.type.YNull","represent",0x83ca582d,"yaml.type.YNull.represent","yaml/type/YNull.hx",29,0x2b71e44b)
HX_LOCAL_STACK_FRAME(_hx_pos_0c1c621a6a4c148c_8_boot,"yaml.type.YNull","boot",0x0adf7dcd,"yaml.type.YNull.boot","yaml/type/YNull.hx",8,0x2b71e44b)
namespace yaml{
namespace type{

void YNull_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0c1c621a6a4c148c_19_new)
HXDLIN(  19)		super::__construct(HX_("tag:yaml.org,2002:null",d2,30,12,e2), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("kind",54,e1,09,47),HX_("string",d1,28,30,11))), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("defaultStyle",b0,e0,78,39),HX_("lowercase",31,ad,a5,66))
            			->setFixed(1,HX_("kind",54,e1,09,47),HX_("null",87,9e,0e,49))));
            	}

Dynamic YNull_obj::__CreateEmpty() { return new YNull_obj; }

void *YNull_obj::_hx_vtable = 0;

Dynamic YNull_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< YNull_obj > _hx_result = new YNull_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool YNull_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21a43634) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21a43634;
	} else {
		return inClassId==(int)0x22f77c3f;
	}
}

 ::Dynamic YNull_obj::resolve( ::Dynamic _tmp_object, ::Dynamic __o_usingMaps, ::Dynamic __o__hx_explicit){
            		 ::Dynamic usingMaps = __o_usingMaps;
            		if (::hx::IsNull(__o_usingMaps)) usingMaps = true;
            		 ::Dynamic _hx_explicit = __o__hx_explicit;
            		if (::hx::IsNull(__o__hx_explicit)) _hx_explicit = false;
            	HX_STACKFRAME(&_hx_pos_0c1c621a6a4c148c_24_resolve)
HXDLIN(  24)		::String object = ( (::String)(_tmp_object) );
HXDLIN(  24)		if (::yaml::type::YNull_obj::YAML_NULL_MAP->exists(object)) {
HXDLIN(  24)			return null();
            		}
            		else {
HXDLIN(  24)			return this->cantResolveType(::hx::SourceInfo(HX_("yaml/type/YNull.hx",4b,e4,71,2b),24,HX_("yaml.type.YNull",b3,cc,28,e1),HX_("resolve",ec,12,60,67)));
            		}
HXDLIN(  24)		return null();
            	}


::String YNull_obj::represent( ::Dynamic _tmp_object,::String style){
            	HX_STACKFRAME(&_hx_pos_0c1c621a6a4c148c_29_represent)
HXDLIN(  29)		 ::Dynamic object = _tmp_object;
HXDLIN(  29)		if (::hx::IsNull( style )) {
HXLINE(  35)			return HX_("~",7e,00,00,00);
            		}
            		else {
HXDLIN(  29)			::String _hx_switch_0 = style;
            			if (  (_hx_switch_0==HX_("camelcase",e6,9f,28,c7)) ){
HXLINE(  34)				return HX_("Null",a7,ca,e7,33);
HXDLIN(  34)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("canonical",f4,97,15,1b)) ){
HXLINE(  31)				return HX_("~",7e,00,00,00);
HXDLIN(  31)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("lowercase",31,ad,a5,66)) ){
HXLINE(  32)				return HX_("null",87,9e,0e,49);
HXDLIN(  32)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("uppercase",12,91,3e,e7)) ){
HXLINE(  33)				return HX_("NULL",87,66,cf,33);
HXDLIN(  33)				goto _hx_goto_2;
            			}
            			/* default */{
HXLINE(  35)				return HX_("~",7e,00,00,00);
            			}
            			_hx_goto_2:;
            		}
HXLINE(  29)		return null();
            	}


 ::haxe::ds::StringMap YNull_obj::YAML_NULL_MAP;


::hx::ObjectPtr< YNull_obj > YNull_obj::__new() {
	::hx::ObjectPtr< YNull_obj > __this = new YNull_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< YNull_obj > YNull_obj::__alloc(::hx::Ctx *_hx_ctx) {
	YNull_obj *__this = (YNull_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(YNull_obj), true, "yaml.type.YNull"));
	*(void **)__this = YNull_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

YNull_obj::YNull_obj()
{
}

::hx::Val YNull_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"represent") ) { return ::hx::Val( represent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool YNull_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"YAML_NULL_MAP") ) { outValue = ( YAML_NULL_MAP ); return true; }
	}
	return false;
}

bool YNull_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"YAML_NULL_MAP") ) { YAML_NULL_MAP=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *YNull_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo YNull_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &YNull_obj::YAML_NULL_MAP,HX_("YAML_NULL_MAP",dc,e8,b6,b2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String YNull_obj_sMemberFields[] = {
	HX_("resolve",ec,12,60,67),
	HX_("represent",a8,03,44,ba),
	::String(null()) };

static void YNull_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(YNull_obj::YAML_NULL_MAP,"YAML_NULL_MAP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void YNull_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(YNull_obj::YAML_NULL_MAP,"YAML_NULL_MAP");
};

#endif

::hx::Class YNull_obj::__mClass;

static ::String YNull_obj_sStaticFields[] = {
	HX_("YAML_NULL_MAP",dc,e8,b6,b2),
	::String(null())
};

void YNull_obj::__register()
{
	YNull_obj _hx_dummy;
	YNull_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("yaml.type.YNull",b3,cc,28,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &YNull_obj::__GetStatic;
	__mClass->mSetStaticField = &YNull_obj::__SetStatic;
	__mClass->mMarkFunc = YNull_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(YNull_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(YNull_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< YNull_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = YNull_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = YNull_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = YNull_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void YNull_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_0c1c621a6a4c148c_8_boot)
HXLINE(   9)			 ::haxe::ds::StringMap hash =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  10)			hash->set(HX_("~",7e,00,00,00),true);
HXLINE(  11)			hash->set(HX_("null",87,9e,0e,49),true);
HXLINE(  12)			hash->set(HX_("Null",a7,ca,e7,33),true);
HXLINE(  13)			hash->set(HX_("NULL",87,66,cf,33),true);
HXLINE(  14)			return hash;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_0c1c621a6a4c148c_8_boot)
HXDLIN(   8)		YAML_NULL_MAP = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace yaml
} // end namespace type
