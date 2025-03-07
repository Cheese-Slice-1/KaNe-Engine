// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_yaml_Schema
#include <yaml/Schema.h>
#endif
#ifndef INCLUDED_yaml_YamlException
#include <yaml/YamlException.h>
#endif
#ifndef INCLUDED_yaml_YamlType
#include <yaml/YamlType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_92480a305f913e74_19_new,"yaml.Schema","new",0xe3c0f79a,"yaml.Schema.new","yaml/Schema.hx",19,0xe857f0f5)
HX_LOCAL_STACK_FRAME(_hx_pos_92480a305f913e74_38_create,"yaml.Schema","create",0xa86b0002,"yaml.Schema.create","yaml/Schema.hx",38,0xe857f0f5)
HX_LOCAL_STACK_FRAME(_hx_pos_92480a305f913e74_49_compileList,"yaml.Schema","compileList",0xce2494ab,"yaml.Schema.compileList","yaml/Schema.hx",49,0xe857f0f5)
HX_LOCAL_STACK_FRAME(_hx_pos_92480a305f913e74_86_compileMap,"yaml.Schema","compileMap",0x8617daef,"yaml.Schema.compileMap","yaml/Schema.hx",86,0xe857f0f5)
namespace yaml{

void Schema_obj::__construct(::Array< ::Dynamic> include,::Array< ::Dynamic> _hx_explicit,::Array< ::Dynamic> implicit){
            	HX_GC_STACKFRAME(&_hx_pos_92480a305f913e74_19_new)
HXLINE(  20)		::Array< ::Dynamic> _hx_tmp;
HXDLIN(  20)		if (::hx::IsNull( include )) {
HXLINE(  20)			_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  20)			_hx_tmp = include;
            		}
HXDLIN(  20)		this->include = _hx_tmp;
HXLINE(  21)		::Array< ::Dynamic> _hx_tmp1;
HXDLIN(  21)		if (::hx::IsNull( implicit )) {
HXLINE(  21)			_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  21)			_hx_tmp1 = implicit;
            		}
HXDLIN(  21)		this->implicit = _hx_tmp1;
HXLINE(  22)		::Array< ::Dynamic> _hx_tmp2;
HXDLIN(  22)		if (::hx::IsNull( _hx_explicit )) {
HXLINE(  22)			_hx_tmp2 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  22)			_hx_tmp2 = _hx_explicit;
            		}
HXDLIN(  22)		this->_hx_explicit = _hx_tmp2;
HXLINE(  24)		{
HXLINE(  24)			int _g = 0;
HXDLIN(  24)			::Array< ::Dynamic> _g1 = this->implicit;
HXDLIN(  24)			while((_g < _g1->length)){
HXLINE(  24)				 ::yaml::YamlType type = _g1->__get(_g).StaticCast<  ::yaml::YamlType >();
HXDLIN(  24)				_g = (_g + 1);
HXLINE(  26)				bool _hx_tmp3;
HXDLIN(  26)				if (::hx::IsNotNull( type->loader )) {
HXLINE(  26)					_hx_tmp3 = ::hx::IsNotEq( HX_("string",d1,28,30,11),type->loader->__Field(HX_("kind",54,e1,09,47),::hx::paccDynamic) );
            				}
            				else {
HXLINE(  26)					_hx_tmp3 = false;
            				}
HXDLIN(  26)				if (_hx_tmp3) {
HXLINE(  28)					HX_STACK_DO_THROW( ::yaml::YamlException_obj::__alloc( HX_CTX ,HX_("There is a non-scalar type in the implicit list of a schema. Implicit resolving of such types is not supported.",ef,45,73,9b),null(),::hx::SourceInfo(HX_("yaml/Schema.hx",f5,f0,57,e8),28,HX_("yaml.Schema",a8,e2,9a,a5),HX_("new",60,d0,53,00))));
            				}
            			}
            		}
HXLINE(  32)		this->compiledImplicit = ::yaml::Schema_obj::compileList(::hx::ObjectPtr<OBJ_>(this),HX_("implicit",25,51,46,67),::Array_obj< ::Dynamic>::__new(0));
HXLINE(  33)		this->compiledExplicit = ::yaml::Schema_obj::compileList(::hx::ObjectPtr<OBJ_>(this),HX_("explicit",f4,a2,e8,4b),::Array_obj< ::Dynamic>::__new(0));
HXLINE(  34)		this->compiledTypeMap = ::yaml::Schema_obj::compileMap(::Array_obj< ::Dynamic>::__new(2)->init(0,this->compiledImplicit)->init(1,this->compiledExplicit));
            	}

Dynamic Schema_obj::__CreateEmpty() { return new Schema_obj; }

void *Schema_obj::_hx_vtable = 0;

Dynamic Schema_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Schema_obj > _hx_result = new Schema_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Schema_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1bafaa14;
}

 ::yaml::Schema Schema_obj::DEFAULT;

 ::yaml::Schema Schema_obj::create(::Array< ::Dynamic> types,::Array< ::Dynamic> schemas){
            	HX_GC_STACKFRAME(&_hx_pos_92480a305f913e74_38_create)
HXLINE(  39)		if (::hx::IsNull( schemas )) {
HXLINE(  40)			schemas = ::Array_obj< ::Dynamic>::__new(1)->init(0,::yaml::Schema_obj::DEFAULT);
            		}
            		else {
HXLINE(  41)			if ((schemas->length == 0)) {
HXLINE(  42)				schemas->push(::yaml::Schema_obj::DEFAULT);
            			}
            		}
HXLINE(  44)		return  ::yaml::Schema_obj::__alloc( HX_CTX ,schemas,types,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Schema_obj,create,return )

::Array< ::Dynamic> Schema_obj::compileList( ::yaml::Schema schema,::String name,::Array< ::Dynamic> result){
            	HX_GC_STACKFRAME(&_hx_pos_92480a305f913e74_49_compileList)
HXLINE(  50)		::Array< int > exclude = ::Array_obj< int >::__new(0);
HXLINE(  52)		{
HXLINE(  52)			int _g = 0;
HXDLIN(  52)			::Array< ::Dynamic> _g1 = schema->include;
HXDLIN(  52)			while((_g < _g1->length)){
HXLINE(  52)				 ::yaml::Schema includedSchema = _g1->__get(_g).StaticCast<  ::yaml::Schema >();
HXDLIN(  52)				_g = (_g + 1);
HXLINE(  54)				result = ::yaml::Schema_obj::compileList(includedSchema,name,result);
            			}
            		}
HXLINE(  57)		::Array< ::Dynamic> types;
HXDLIN(  57)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("explicit",f4,a2,e8,4b)) ){
HXLINE(  57)			types = schema->_hx_explicit;
HXDLIN(  57)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("implicit",25,51,46,67)) ){
HXLINE(  57)			types = schema->implicit;
HXDLIN(  57)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE(  61)			HX_STACK_DO_THROW( ::yaml::YamlException_obj::__alloc( HX_CTX ,(HX_("unknown type list type: ",52,42,2f,bf) + name),null(),::hx::SourceInfo(HX_("yaml/Schema.hx",f5,f0,57,e8),61,HX_("yaml.Schema",a8,e2,9a,a5),HX_("compileList",71,a3,06,a4))));
            		}
            		_hx_goto_4:;
HXLINE(  64)		{
HXLINE(  64)			int _g2 = 0;
HXDLIN(  64)			while((_g2 < types->length)){
HXLINE(  64)				 ::yaml::YamlType currenYamlType = types->__get(_g2).StaticCast<  ::yaml::YamlType >();
HXDLIN(  64)				_g2 = (_g2 + 1);
HXLINE(  66)				{
HXLINE(  66)					int _g3 = 0;
HXDLIN(  66)					int _g4 = result->length;
HXDLIN(  66)					while((_g3 < _g4)){
HXLINE(  66)						_g3 = (_g3 + 1);
HXDLIN(  66)						int previousIndex = (_g3 - 1);
HXLINE(  68)						 ::yaml::YamlType previousType = result->__get(previousIndex).StaticCast<  ::yaml::YamlType >();
HXLINE(  69)						if ((previousType->tag == currenYamlType->tag)) {
HXLINE(  71)							exclude->push(previousIndex);
            						}
            					}
            				}
HXLINE(  74)				result->push(currenYamlType);
            			}
            		}
HXLINE(  77)		::Array< ::Dynamic> filteredResult = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  78)		{
HXLINE(  78)			int _g5 = 0;
HXDLIN(  78)			int _g6 = result->length;
HXDLIN(  78)			while((_g5 < _g6)){
HXLINE(  78)				_g5 = (_g5 + 1);
HXDLIN(  78)				int i = (_g5 - 1);
HXLINE(  79)				if (!(::Lambda_obj::has(exclude,i))) {
HXLINE(  80)					filteredResult->push(result->__get(i).StaticCast<  ::yaml::YamlType >());
            				}
            			}
            		}
HXLINE(  82)		return filteredResult;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Schema_obj,compileList,return )

 ::haxe::ds::StringMap Schema_obj::compileMap(::Array< ::Dynamic> list){
            	HX_GC_STACKFRAME(&_hx_pos_92480a305f913e74_86_compileMap)
HXLINE(  87)		 ::haxe::ds::StringMap result =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  89)		{
HXLINE(  89)			int _g = 0;
HXDLIN(  89)			while((_g < list->length)){
HXLINE(  89)				::Array< ::Dynamic> member = list->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  89)				_g = (_g + 1);
HXLINE(  90)				{
HXLINE(  90)					int _g1 = 0;
HXDLIN(  90)					while((_g1 < member->length)){
HXLINE(  90)						 ::yaml::YamlType type = member->__get(_g1).StaticCast<  ::yaml::YamlType >();
HXDLIN(  90)						_g1 = (_g1 + 1);
HXLINE(  91)						result->set(type->tag,type);
            					}
            				}
            			}
            		}
HXLINE(  93)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Schema_obj,compileMap,return )


::hx::ObjectPtr< Schema_obj > Schema_obj::__new(::Array< ::Dynamic> include,::Array< ::Dynamic> _hx_explicit,::Array< ::Dynamic> implicit) {
	::hx::ObjectPtr< Schema_obj > __this = new Schema_obj();
	__this->__construct(include,_hx_explicit,implicit);
	return __this;
}

::hx::ObjectPtr< Schema_obj > Schema_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> include,::Array< ::Dynamic> _hx_explicit,::Array< ::Dynamic> implicit) {
	Schema_obj *__this = (Schema_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Schema_obj), true, "yaml.Schema"));
	*(void **)__this = Schema_obj::_hx_vtable;
	__this->__construct(include,_hx_explicit,implicit);
	return __this;
}

Schema_obj::Schema_obj()
{
}

void Schema_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Schema);
	HX_MARK_MEMBER_NAME(compiledImplicit,"compiledImplicit");
	HX_MARK_MEMBER_NAME(compiledExplicit,"compiledExplicit");
	HX_MARK_MEMBER_NAME(compiledTypeMap,"compiledTypeMap");
	HX_MARK_MEMBER_NAME(implicit,"implicit");
	HX_MARK_MEMBER_NAME(_hx_explicit,"explicit");
	HX_MARK_MEMBER_NAME(include,"include");
	HX_MARK_END_CLASS();
}

void Schema_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(compiledImplicit,"compiledImplicit");
	HX_VISIT_MEMBER_NAME(compiledExplicit,"compiledExplicit");
	HX_VISIT_MEMBER_NAME(compiledTypeMap,"compiledTypeMap");
	HX_VISIT_MEMBER_NAME(implicit,"implicit");
	HX_VISIT_MEMBER_NAME(_hx_explicit,"explicit");
	HX_VISIT_MEMBER_NAME(include,"include");
}

::hx::Val Schema_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"include") ) { return ::hx::Val( include ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"implicit") ) { return ::hx::Val( implicit ); }
		if (HX_FIELD_EQ(inName,"explicit") ) { return ::hx::Val( _hx_explicit ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"compiledTypeMap") ) { return ::hx::Val( compiledTypeMap ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"compiledImplicit") ) { return ::hx::Val( compiledImplicit ); }
		if (HX_FIELD_EQ(inName,"compiledExplicit") ) { return ::hx::Val( compiledExplicit ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Schema_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { outValue = ( DEFAULT ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"compileMap") ) { outValue = compileMap_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"compileList") ) { outValue = compileList_dyn(); return true; }
	}
	return false;
}

::hx::Val Schema_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"include") ) { include=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"implicit") ) { implicit=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explicit") ) { _hx_explicit=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"compiledTypeMap") ) { compiledTypeMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"compiledImplicit") ) { compiledImplicit=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"compiledExplicit") ) { compiledExplicit=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Schema_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"DEFAULT") ) { DEFAULT=ioValue.Cast<  ::yaml::Schema >(); return true; }
	}
	return false;
}

void Schema_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("compiledImplicit",d6,25,bd,e2));
	outFields->push(HX_("compiledExplicit",a5,77,5f,c7));
	outFields->push(HX_("compiledTypeMap",71,cc,da,ce));
	outFields->push(HX_("implicit",25,51,46,67));
	outFields->push(HX_("explicit",f4,a2,e8,4b));
	outFields->push(HX_("include",28,fe,f6,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Schema_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Schema_obj,compiledImplicit),HX_("compiledImplicit",d6,25,bd,e2)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Schema_obj,compiledExplicit),HX_("compiledExplicit",a5,77,5f,c7)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Schema_obj,compiledTypeMap),HX_("compiledTypeMap",71,cc,da,ce)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Schema_obj,implicit),HX_("implicit",25,51,46,67)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Schema_obj,_hx_explicit),HX_("explicit",f4,a2,e8,4b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Schema_obj,include),HX_("include",28,fe,f6,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Schema_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::yaml::Schema */ ,(void *) &Schema_obj::DEFAULT,HX_("DEFAULT",a1,ac,97,1b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Schema_obj_sMemberFields[] = {
	HX_("compiledImplicit",d6,25,bd,e2),
	HX_("compiledExplicit",a5,77,5f,c7),
	HX_("compiledTypeMap",71,cc,da,ce),
	HX_("implicit",25,51,46,67),
	HX_("explicit",f4,a2,e8,4b),
	HX_("include",28,fe,f6,51),
	::String(null()) };

static void Schema_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Schema_obj::DEFAULT,"DEFAULT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Schema_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Schema_obj::DEFAULT,"DEFAULT");
};

#endif

::hx::Class Schema_obj::__mClass;

static ::String Schema_obj_sStaticFields[] = {
	HX_("DEFAULT",a1,ac,97,1b),
	HX_("create",fc,66,0f,7c),
	HX_("compileList",71,a3,06,a4),
	HX_("compileMap",e9,46,14,cd),
	::String(null())
};

void Schema_obj::__register()
{
	Schema_obj _hx_dummy;
	Schema_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("yaml.Schema",a8,e2,9a,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Schema_obj::__GetStatic;
	__mClass->mSetStaticField = &Schema_obj::__SetStatic;
	__mClass->mMarkFunc = Schema_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Schema_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Schema_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Schema_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Schema_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Schema_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Schema_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace yaml
