// Generated by Haxe 4.3.6
#ifndef INCLUDED_yaml_YamlException
#define INCLUDED_yaml_YamlException

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(yaml,YamlException)

namespace yaml{


class HXCPP_CLASS_ATTRIBUTES YamlException_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef YamlException_obj OBJ_;
		YamlException_obj();

	public:
		enum { _hx_ClassId = 0x36abd85d };

		void __construct(::String __o_message, ::Dynamic cause, ::Dynamic info);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="yaml.YamlException")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"yaml.YamlException"); }
		static ::hx::ObjectPtr< YamlException_obj > __new(::String __o_message, ::Dynamic cause, ::Dynamic info);
		static ::hx::ObjectPtr< YamlException_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_message, ::Dynamic cause, ::Dynamic info);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~YamlException_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("YamlException",08,58,ff,12); }

		::String name;
		::String get_name();
		::Dynamic get_name_dyn();

		::String message;
		::String get_message();
		::Dynamic get_message_dyn();

		 ::Dynamic cause;
		 ::Dynamic info;
		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace yaml

#endif /* INCLUDED_yaml_YamlException */ 
