// Generated by Haxe 4.3.6
#ifndef INCLUDED_yaml_schema_DefaultSchema
#define INCLUDED_yaml_schema_DefaultSchema

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_yaml_Schema
#include <yaml/Schema.h>
#endif
HX_DECLARE_CLASS1(yaml,Schema)
HX_DECLARE_CLASS2(yaml,schema,DefaultSchema)

namespace yaml{
namespace schema{


class HXCPP_CLASS_ATTRIBUTES DefaultSchema_obj : public  ::yaml::Schema_obj
{
	public:
		typedef  ::yaml::Schema_obj super;
		typedef DefaultSchema_obj OBJ_;
		DefaultSchema_obj();

	public:
		enum { _hx_ClassId = 0x202c5a1a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="yaml.schema.DefaultSchema")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"yaml.schema.DefaultSchema"); }
		static ::hx::ObjectPtr< DefaultSchema_obj > __new();
		static ::hx::ObjectPtr< DefaultSchema_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DefaultSchema_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DefaultSchema",a2,43,2a,83); }

};

} // end namespace yaml
} // end namespace schema

#endif /* INCLUDED_yaml_schema_DefaultSchema */ 
