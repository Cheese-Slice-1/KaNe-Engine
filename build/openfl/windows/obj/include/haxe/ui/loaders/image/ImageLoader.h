// Generated by Haxe 4.3.6
#ifndef INCLUDED_haxe_ui_loaders_image_ImageLoader
#define INCLUDED_haxe_ui_loaders_image_ImageLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,loaders,image,ImageLoader)
HX_DECLARE_CLASS4(haxe,ui,loaders,image,ImageLoaderBase)
HX_DECLARE_CLASS3(haxe,ui,util,VariantType)

namespace haxe{
namespace ui{
namespace loaders{
namespace image{


class HXCPP_CLASS_ATTRIBUTES ImageLoader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ImageLoader_obj OBJ_;
		ImageLoader_obj();

	public:
		enum { _hx_ClassId = 0x1984e079 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.loaders.image.ImageLoader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.loaders.image.ImageLoader"); }
		static ::hx::ObjectPtr< ImageLoader_obj > __new();
		static ::hx::ObjectPtr< ImageLoader_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ImageLoader_obj();

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
		::String __ToString() const { return HX_("ImageLoader",ae,e9,e1,84); }

		static  ::haxe::ui::loaders::image::ImageLoader _instance;
		static  ::haxe::ui::loaders::image::ImageLoader instance;
		static  ::haxe::ui::loaders::image::ImageLoader get_instance();
		static ::Dynamic get_instance_dyn();

		 ::haxe::ds::StringMap _registeredLoaders;
		 ::Dynamic _defaultLoader;
		void load( ::haxe::ui::util::VariantType resource, ::Dynamic callback,::hx::Null< bool >  useCache);
		::Dynamic load_dyn();

		void _hx_register(::String prefix, ::Dynamic ctor,::String pattern,::hx::Null< bool >  isDefault,::hx::Null< bool >  singleInstance);
		::Dynamic _hx_register_dyn();

		 ::haxe::ui::loaders::image::ImageLoaderBase get(::String prefix,::String stringResource);
		::Dynamic get_dyn();

		 ::Dynamic findByPattern(::String stringResource);
		::Dynamic findByPattern_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace loaders
} // end namespace image

#endif /* INCLUDED_haxe_ui_loaders_image_ImageLoader */ 
