// Generated by Haxe 4.3.6
#ifndef INCLUDED_yaml_type_YNull
#define INCLUDED_yaml_type_YNull

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_yaml_YamlType
#include <yaml/YamlType.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(yaml,YamlType)
HX_DECLARE_CLASS2(yaml,type,YNull)

namespace yaml{
namespace type{


class HXCPP_CLASS_ATTRIBUTES YNull_obj : public  ::yaml::YamlType_obj
{
	public:
		typedef  ::yaml::YamlType_obj super;
		typedef YNull_obj OBJ_;
		YNull_obj();

	public:
		enum { _hx_ClassId = 0x22f77c3f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="yaml.type.YNull")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"yaml.type.YNull"); }
		static ::hx::ObjectPtr< YNull_obj > __new();
		static ::hx::ObjectPtr< YNull_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~YNull_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("YNull",80,6b,91,72); }

		static void __boot();
		static  ::haxe::ds::StringMap YAML_NULL_MAP;
		 ::Dynamic resolve( ::Dynamic _tmp_object, ::Dynamic usingMaps, ::Dynamic _hx_explicit);

		::String represent( ::Dynamic _tmp_object,::String style);

};

} // end namespace yaml
} // end namespace type

#endif /* INCLUDED_yaml_type_YNull */ 
