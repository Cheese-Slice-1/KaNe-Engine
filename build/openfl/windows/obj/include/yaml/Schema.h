// Generated by Haxe 4.3.6
#ifndef INCLUDED_yaml_Schema
#define INCLUDED_yaml_Schema

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(yaml,Schema)
HX_DECLARE_CLASS1(yaml,YamlType)

namespace yaml{


class HXCPP_CLASS_ATTRIBUTES Schema_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Schema_obj OBJ_;
		Schema_obj();

	public:
		enum { _hx_ClassId = 0x1bafaa14 };

		void __construct(::Array< ::Dynamic> include,::Array< ::Dynamic> _hx_explicit,::Array< ::Dynamic> implicit);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="yaml.Schema")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"yaml.Schema"); }
		static ::hx::ObjectPtr< Schema_obj > __new(::Array< ::Dynamic> include,::Array< ::Dynamic> _hx_explicit,::Array< ::Dynamic> implicit);
		static ::hx::ObjectPtr< Schema_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> include,::Array< ::Dynamic> _hx_explicit,::Array< ::Dynamic> implicit);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Schema_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Schema",41,94,55,75); }

		static  ::yaml::Schema DEFAULT;
		static  ::yaml::Schema create(::Array< ::Dynamic> types,::Array< ::Dynamic> schemas);
		static ::Dynamic create_dyn();

		static ::Array< ::Dynamic> compileList( ::yaml::Schema schema,::String name,::Array< ::Dynamic> result);
		static ::Dynamic compileList_dyn();

		static  ::haxe::ds::StringMap compileMap(::Array< ::Dynamic> list);
		static ::Dynamic compileMap_dyn();

		::Array< ::Dynamic> compiledImplicit;
		::Array< ::Dynamic> compiledExplicit;
		 ::haxe::ds::StringMap compiledTypeMap;
		::Array< ::Dynamic> implicit;
		::Array< ::Dynamic> _hx_explicit;
		::Array< ::Dynamic> include;
};

} // end namespace yaml

#endif /* INCLUDED_yaml_Schema */ 
