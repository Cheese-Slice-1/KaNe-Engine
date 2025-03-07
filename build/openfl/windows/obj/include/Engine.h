// Generated by Haxe 4.3.6
#ifndef INCLUDED_Engine
#define INCLUDED_Engine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Engine)
HX_DECLARE_CLASS0(Note)
HX_DECLARE_CLASS2(haxe,io,Bytes)



class HXCPP_CLASS_ATTRIBUTES Engine_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Engine_obj OBJ_;
		Engine_obj();

	public:
		enum { _hx_ClassId = 0x5efd876a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Engine")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Engine"); }

		inline static ::hx::ObjectPtr< Engine_obj > __new() {
			::hx::ObjectPtr< Engine_obj > __this = new Engine_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Engine_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Engine_obj *__this = (Engine_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Engine_obj), false, "Engine"));
			*(void **)__this = Engine_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Engine_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Engine",e2,bb,18,31); }

		static  ::Dynamic importSinger1(::String _voice,::String _path);
		static ::Dynamic importSinger1_dyn();

		static ::String play( ::Note note,::String sym);
		static ::Dynamic play_dyn();

		static void loadAndPlayAudio( ::haxe::io::Bytes sound,Float pitch);
		static ::Dynamic loadAndPlayAudio_dyn();

		static Float getPitchFromNote( ::Note note);
		static ::Dynamic getPitchFromNote_dyn();

		void importSinger2();
		::Dynamic importSinger2_dyn();

};


#endif /* INCLUDED_Engine */ 
