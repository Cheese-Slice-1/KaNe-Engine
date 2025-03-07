// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_ui_util_GUID
#include <haxe/ui/util/GUID.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_772ffb5154efc714_5_randomIntegerWithinRange,"haxe.ui.util.GUID","randomIntegerWithinRange",0xd0fc83c2,"haxe.ui.util.GUID.randomIntegerWithinRange","haxe/ui/util/GUID.hx",5,0xa433033a)
HX_LOCAL_STACK_FRAME(_hx_pos_772ffb5154efc714_8_createRandomIdentifier,"haxe.ui.util.GUID","createRandomIdentifier",0x04349253,"haxe.ui.util.GUID.createRandomIdentifier","haxe/ui/util/GUID.hx",8,0xa433033a)
static const ::String _hx_array_data_89f7d023_3[] = {
	HX_("0",30,00,00,00),HX_("1",31,00,00,00),HX_("2",32,00,00,00),HX_("3",33,00,00,00),HX_("4",34,00,00,00),HX_("5",35,00,00,00),HX_("6",36,00,00,00),HX_("7",37,00,00,00),HX_("8",38,00,00,00),HX_("9",39,00,00,00),HX_("A",41,00,00,00),HX_("B",42,00,00,00),HX_("C",43,00,00,00),HX_("D",44,00,00,00),HX_("E",45,00,00,00),HX_("F",46,00,00,00),HX_("G",47,00,00,00),HX_("H",48,00,00,00),HX_("I",49,00,00,00),HX_("J",4a,00,00,00),HX_("K",4b,00,00,00),HX_("L",4c,00,00,00),HX_("M",4d,00,00,00),HX_("N",4e,00,00,00),HX_("O",4f,00,00,00),HX_("P",50,00,00,00),HX_("Q",51,00,00,00),HX_("R",52,00,00,00),HX_("S",53,00,00,00),HX_("T",54,00,00,00),HX_("U",55,00,00,00),HX_("V",56,00,00,00),HX_("W",57,00,00,00),HX_("X",58,00,00,00),HX_("Y",59,00,00,00),HX_("Z",5a,00,00,00),HX_("a",61,00,00,00),HX_("b",62,00,00,00),HX_("c",63,00,00,00),HX_("d",64,00,00,00),HX_("e",65,00,00,00),HX_("f",66,00,00,00),HX_("g",67,00,00,00),HX_("h",68,00,00,00),HX_("i",69,00,00,00),HX_("j",6a,00,00,00),HX_("k",6b,00,00,00),HX_("l",6c,00,00,00),HX_("m",6d,00,00,00),HX_("n",6e,00,00,00),HX_("o",6f,00,00,00),HX_("p",70,00,00,00),HX_("q",71,00,00,00),HX_("r",72,00,00,00),HX_("s",73,00,00,00),HX_("t",74,00,00,00),HX_("u",75,00,00,00),HX_("v",76,00,00,00),HX_("w",77,00,00,00),HX_("x",78,00,00,00),HX_("y",79,00,00,00),HX_("z",7a,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_772ffb5154efc714_24_uuid,"haxe.ui.util.GUID","uuid",0xfa519a66,"haxe.ui.util.GUID.uuid","haxe/ui/util/GUID.hx",24,0xa433033a)
static const ::String _hx_array_data_89f7d023_5[] = {
	HX_("8",38,00,00,00),HX_("9",39,00,00,00),HX_("A",41,00,00,00),HX_("B",42,00,00,00),
};
namespace haxe{
namespace ui{
namespace util{

void GUID_obj::__construct() { }

Dynamic GUID_obj::__CreateEmpty() { return new GUID_obj; }

void *GUID_obj::_hx_vtable = 0;

Dynamic GUID_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GUID_obj > _hx_result = new GUID_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GUID_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x52976a85;
}

int GUID_obj::randomIntegerWithinRange(int min,int max){
            	HX_STACKFRAME(&_hx_pos_772ffb5154efc714_5_randomIntegerWithinRange)
HXDLIN(   5)		return ::Math_obj::floor(((::Math_obj::random() * ( (Float)(((1 + max) - min)) )) + min));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GUID_obj,randomIntegerWithinRange,return )

::String GUID_obj::createRandomIdentifier(int length,::hx::Null< int >  __o_radix){
            		int radix = __o_radix.Default(61);
            	HX_STACKFRAME(&_hx_pos_772ffb5154efc714_8_createRandomIdentifier)
HXLINE(  10)		::Array< ::String > characters = ::Array_obj< ::String >::fromData( _hx_array_data_89f7d023_3,62);
HXLINE(  14)		::Array< ::String > id = ::Array_obj< ::String >::__new(0);
HXLINE(  15)		if ((radix > 61)) {
HXLINE(  15)			radix = 61;
            		}
HXLINE(  17)		while(true){
HXLINE(  17)			length = (length - 1);
HXDLIN(  17)			if (!(((length + 1) > 0))) {
HXLINE(  17)				goto _hx_goto_1;
            			}
HXLINE(  18)			id->push(characters->__get(::Math_obj::floor((::Math_obj::random() * ( (Float)((1 + radix)) )))));
            		}
            		_hx_goto_1:;
HXLINE(  21)		return id->join(HX_("",00,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GUID_obj,createRandomIdentifier,return )

::String GUID_obj::uuid(){
            	HX_STACKFRAME(&_hx_pos_772ffb5154efc714_24_uuid)
HXLINE(  25)		::Array< ::String > specialChars = ::Array_obj< ::String >::fromData( _hx_array_data_89f7d023_5,4);
HXLINE(  27)		::String _hx_tmp = (::haxe::ui::util::GUID_obj::createRandomIdentifier(8,15) + HX_("-",2d,00,00,00));
HXDLIN(  27)		::String _hx_tmp1 = ((_hx_tmp + ::haxe::ui::util::GUID_obj::createRandomIdentifier(4,15)) + HX_("-4",67,27,00,00));
HXDLIN(  27)		::String _hx_tmp2 = ((_hx_tmp1 + ::haxe::ui::util::GUID_obj::createRandomIdentifier(3,15)) + HX_("-",2d,00,00,00));
HXDLIN(  27)		::String _hx_tmp3 = (_hx_tmp2 + specialChars->__get(::Math_obj::floor((::Math_obj::random() * ( (Float)(4) )))));
HXDLIN(  27)		::String _hx_tmp4 = ((_hx_tmp3 + ::haxe::ui::util::GUID_obj::createRandomIdentifier(3,15)) + HX_("-",2d,00,00,00));
HXDLIN(  27)		return (_hx_tmp4 + ::haxe::ui::util::GUID_obj::createRandomIdentifier(12,15));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GUID_obj,uuid,return )


GUID_obj::GUID_obj()
{
}

bool GUID_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { outValue = uuid_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createRandomIdentifier") ) { outValue = createRandomIdentifier_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"randomIntegerWithinRange") ) { outValue = randomIntegerWithinRange_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GUID_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GUID_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GUID_obj::__mClass;

static ::String GUID_obj_sStaticFields[] = {
	HX_("randomIntegerWithinRange",17,cc,4f,3c),
	HX_("createRandomIdentifier",68,ab,bf,23),
	HX_("uuid",3b,1a,af,4d),
	::String(null())
};

void GUID_obj::__register()
{
	GUID_obj _hx_dummy;
	GUID_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.util.GUID",23,d0,f7,89);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GUID_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GUID_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GUID_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GUID_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GUID_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace util
