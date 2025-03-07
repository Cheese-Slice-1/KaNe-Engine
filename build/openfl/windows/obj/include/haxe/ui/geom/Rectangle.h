// Generated by Haxe 4.3.6
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#define INCLUDED_haxe_ui_geom_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,geom,Rectangle)

namespace haxe{
namespace ui{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES Rectangle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();

	public:
		enum { _hx_ClassId = 0x72cf5d19 };

		void __construct(::hx::Null< Float >  __o_left,::hx::Null< Float >  __o_top,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ui.geom.Rectangle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.ui.geom.Rectangle"); }
		static ::hx::ObjectPtr< Rectangle_obj > __new(::hx::Null< Float >  __o_left,::hx::Null< Float >  __o_top,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		static ::hx::ObjectPtr< Rectangle_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_left,::hx::Null< Float >  __o_top,::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Rectangle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Rectangle",0f,b4,4f,bb); }

		Float left;
		Float top;
		Float width;
		Float height;
		void set(::hx::Null< Float >  left,::hx::Null< Float >  top,::hx::Null< Float >  width,::hx::Null< Float >  height);
		::Dynamic set_dyn();

		Float get_right();
		::Dynamic get_right_dyn();

		Float set_right(Float value);
		::Dynamic set_right_dyn();

		Float get_bottom();
		::Dynamic get_bottom_dyn();

		Float set_bottom(Float value);
		::Dynamic set_bottom_dyn();

		void inflate(Float dx,Float dy);
		::Dynamic inflate_dyn();

		bool equals( ::haxe::ui::geom::Rectangle rc);
		::Dynamic equals_dyn();

		bool containsPoint(Float x,Float y);
		::Dynamic containsPoint_dyn();

		bool containsRect( ::haxe::ui::geom::Rectangle rect);
		::Dynamic containsRect_dyn();

		bool intersects( ::haxe::ui::geom::Rectangle rect);
		::Dynamic intersects_dyn();

		 ::haxe::ui::geom::Rectangle _intersectionCache;
		 ::haxe::ui::geom::Rectangle intersection( ::haxe::ui::geom::Rectangle rect,::hx::Null< bool >  noAlloc);
		::Dynamic intersection_dyn();

		void toInts();
		::Dynamic toInts_dyn();

		 ::haxe::ui::geom::Rectangle copy();
		::Dynamic copy_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace geom

#endif /* INCLUDED_haxe_ui_geom_Rectangle */ 
