// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_yaml_ParserOptions
#include <yaml/ParserOptions.h>
#endif
#ifndef INCLUDED_yaml_Schema
#include <yaml/Schema.h>
#endif
#ifndef INCLUDED_yaml_schema_DefaultSchema
#include <yaml/schema/DefaultSchema.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f0d5049e8d86e75_27_new,"yaml.ParserOptions","new",0x69fe218a,"yaml.ParserOptions.new","yaml/Parser.hx",27,0xa5fc7ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_1f0d5049e8d86e75_42_useMaps,"yaml.ParserOptions","useMaps",0x817cf468,"yaml.ParserOptions.useMaps","yaml/Parser.hx",42,0xa5fc7ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_1f0d5049e8d86e75_53_useObjects,"yaml.ParserOptions","useObjects",0x5cfb1363,"yaml.ParserOptions.useObjects","yaml/Parser.hx",53,0xa5fc7ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_1f0d5049e8d86e75_64_setSchema,"yaml.ParserOptions","setSchema",0xc2ab220d,"yaml.ParserOptions.setSchema","yaml/Parser.hx",64,0xa5fc7ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_1f0d5049e8d86e75_73_strictMode,"yaml.ParserOptions","strictMode",0xe89e7f62,"yaml.ParserOptions.strictMode","yaml/Parser.hx",73,0xa5fc7ef7)
HX_LOCAL_STACK_FRAME(_hx_pos_1f0d5049e8d86e75_82_validate,"yaml.ParserOptions","validate",0x0631072c,"yaml.ParserOptions.validate","yaml/Parser.hx",82,0xa5fc7ef7)
namespace yaml{

void ParserOptions_obj::__construct( ::yaml::Schema schema){
            	HX_GC_STACKFRAME(&_hx_pos_1f0d5049e8d86e75_27_new)
HXLINE(  28)		 ::yaml::Schema _hx_tmp;
HXDLIN(  28)		if (::hx::IsNull( schema )) {
HXLINE(  28)			_hx_tmp =  ::yaml::schema::DefaultSchema_obj::__alloc( HX_CTX );
            		}
            		else {
HXLINE(  28)			_hx_tmp = schema;
            		}
HXDLIN(  28)		this->schema = _hx_tmp;
HXLINE(  30)		this->strict = false;
HXLINE(  31)		this->resolve = true;
HXLINE(  32)		this->validation = true;
HXLINE(  33)		this->maps = true;
            	}

Dynamic ParserOptions_obj::__CreateEmpty() { return new ParserOptions_obj; }

void *ParserOptions_obj::_hx_vtable = 0;

Dynamic ParserOptions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ParserOptions_obj > _hx_result = new ParserOptions_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ParserOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e4b6b58;
}

 ::yaml::ParserOptions ParserOptions_obj::useMaps(){
            	HX_STACKFRAME(&_hx_pos_1f0d5049e8d86e75_42_useMaps)
HXLINE(  43)		this->maps = true;
HXLINE(  44)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ParserOptions_obj,useMaps,return )

 ::yaml::ParserOptions ParserOptions_obj::useObjects(){
            	HX_STACKFRAME(&_hx_pos_1f0d5049e8d86e75_53_useObjects)
HXLINE(  54)		this->maps = false;
HXLINE(  55)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ParserOptions_obj,useObjects,return )

 ::yaml::ParserOptions ParserOptions_obj::setSchema( ::yaml::Schema schema){
            	HX_STACKFRAME(&_hx_pos_1f0d5049e8d86e75_64_setSchema)
HXLINE(  65)		this->schema = schema;
HXLINE(  66)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ParserOptions_obj,setSchema,return )

 ::yaml::ParserOptions ParserOptions_obj::strictMode( ::Dynamic __o_value){
            		 ::Dynamic value = __o_value;
            		if (::hx::IsNull(__o_value)) value = true;
            	HX_STACKFRAME(&_hx_pos_1f0d5049e8d86e75_73_strictMode)
HXLINE(  74)		this->strict = ( (bool)(value) );
HXLINE(  75)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ParserOptions_obj,strictMode,return )

 ::yaml::ParserOptions ParserOptions_obj::validate( ::Dynamic __o_value){
            		 ::Dynamic value = __o_value;
            		if (::hx::IsNull(__o_value)) value = true;
            	HX_STACKFRAME(&_hx_pos_1f0d5049e8d86e75_82_validate)
HXLINE(  83)		this->validation = ( (bool)(value) );
HXLINE(  84)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ParserOptions_obj,validate,return )


::hx::ObjectPtr< ParserOptions_obj > ParserOptions_obj::__new( ::yaml::Schema schema) {
	::hx::ObjectPtr< ParserOptions_obj > __this = new ParserOptions_obj();
	__this->__construct(schema);
	return __this;
}

::hx::ObjectPtr< ParserOptions_obj > ParserOptions_obj::__alloc(::hx::Ctx *_hx_ctx, ::yaml::Schema schema) {
	ParserOptions_obj *__this = (ParserOptions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ParserOptions_obj), true, "yaml.ParserOptions"));
	*(void **)__this = ParserOptions_obj::_hx_vtable;
	__this->__construct(schema);
	return __this;
}

ParserOptions_obj::ParserOptions_obj()
{
}

void ParserOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ParserOptions);
	HX_MARK_MEMBER_NAME(schema,"schema");
	HX_MARK_MEMBER_NAME(resolve,"resolve");
	HX_MARK_MEMBER_NAME(validation,"validation");
	HX_MARK_MEMBER_NAME(strict,"strict");
	HX_MARK_MEMBER_NAME(maps,"maps");
	HX_MARK_END_CLASS();
}

void ParserOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(schema,"schema");
	HX_VISIT_MEMBER_NAME(resolve,"resolve");
	HX_VISIT_MEMBER_NAME(validation,"validation");
	HX_VISIT_MEMBER_NAME(strict,"strict");
	HX_VISIT_MEMBER_NAME(maps,"maps");
}

::hx::Val ParserOptions_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"maps") ) { return ::hx::Val( maps ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"schema") ) { return ::hx::Val( schema ); }
		if (HX_FIELD_EQ(inName,"strict") ) { return ::hx::Val( strict ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return ::hx::Val( resolve ); }
		if (HX_FIELD_EQ(inName,"useMaps") ) { return ::hx::Val( useMaps_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { return ::hx::Val( validate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setSchema") ) { return ::hx::Val( setSchema_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"validation") ) { return ::hx::Val( validation ); }
		if (HX_FIELD_EQ(inName,"useObjects") ) { return ::hx::Val( useObjects_dyn() ); }
		if (HX_FIELD_EQ(inName,"strictMode") ) { return ::hx::Val( strictMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ParserOptions_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"maps") ) { maps=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"schema") ) { schema=inValue.Cast<  ::yaml::Schema >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strict") ) { strict=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { resolve=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"validation") ) { validation=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ParserOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("schema",21,20,c1,40));
	outFields->push(HX_("resolve",ec,12,60,67));
	outFields->push(HX_("validation",39,0c,ed,e1));
	outFields->push(HX_("strict",49,1f,30,11));
	outFields->push(HX_("maps",57,3e,56,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ParserOptions_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::yaml::Schema */ ,(int)offsetof(ParserOptions_obj,schema),HX_("schema",21,20,c1,40)},
	{::hx::fsBool,(int)offsetof(ParserOptions_obj,resolve),HX_("resolve",ec,12,60,67)},
	{::hx::fsBool,(int)offsetof(ParserOptions_obj,validation),HX_("validation",39,0c,ed,e1)},
	{::hx::fsBool,(int)offsetof(ParserOptions_obj,strict),HX_("strict",49,1f,30,11)},
	{::hx::fsBool,(int)offsetof(ParserOptions_obj,maps),HX_("maps",57,3e,56,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ParserOptions_obj_sStaticStorageInfo = 0;
#endif

static ::String ParserOptions_obj_sMemberFields[] = {
	HX_("schema",21,20,c1,40),
	HX_("resolve",ec,12,60,67),
	HX_("validation",39,0c,ed,e1),
	HX_("strict",49,1f,30,11),
	HX_("maps",57,3e,56,48),
	HX_("useMaps",3e,c6,01,57),
	HX_("useObjects",4d,8b,02,85),
	HX_("setSchema",63,95,68,a0),
	HX_("strictMode",4c,f7,a5,10),
	HX_("validate",96,d0,e3,04),
	::String(null()) };

::hx::Class ParserOptions_obj::__mClass;

void ParserOptions_obj::__register()
{
	ParserOptions_obj _hx_dummy;
	ParserOptions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("yaml.ParserOptions",98,54,a0,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ParserOptions_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ParserOptions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ParserOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ParserOptions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace yaml
