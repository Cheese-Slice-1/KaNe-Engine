// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformBase
#include <haxe/ui/backend/PlatformBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_PlatformImpl
#include <haxe/ui/backend/PlatformImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_components_HorizontalScroll
#include <haxe/ui/components/HorizontalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IComponentContainer
#include <haxe/ui/core/IComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ICompositeInteractiveComponent
#include <haxe/ui/core/ICompositeInteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IEventDispatcher
#include <haxe/ui/core/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IScroller
#include <haxe/ui/core/IScroller.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Platform
#include <haxe/ui/core/Platform.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ScrollViewLayout
#include <haxe/ui/layouts/ScrollViewLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c64222abbde4bc58_10_new,"haxe.ui.layouts.ScrollViewLayout","new",0xb5cf8485,"haxe.ui.layouts.ScrollViewLayout.new","haxe/ui/layouts/ScrollViewLayout.hx",10,0x4379a48a)
HX_LOCAL_STACK_FRAME(_hx_pos_c64222abbde4bc58_11_repositionChildren,"haxe.ui.layouts.ScrollViewLayout","repositionChildren",0xf08bbe36,"haxe.ui.layouts.ScrollViewLayout.repositionChildren","haxe/ui/layouts/ScrollViewLayout.hx",11,0x4379a48a)
HX_LOCAL_STACK_FRAME(_hx_pos_c64222abbde4bc58_43_resizeChildren,"haxe.ui.layouts.ScrollViewLayout","resizeChildren",0xf153e74e,"haxe.ui.layouts.ScrollViewLayout.resizeChildren","haxe/ui/layouts/ScrollViewLayout.hx",43,0x4379a48a)
HX_LOCAL_STACK_FRAME(_hx_pos_c64222abbde4bc58_89_get_usableSize,"haxe.ui.layouts.ScrollViewLayout","get_usableSize",0x6f19301d,"haxe.ui.layouts.ScrollViewLayout.get_usableSize","haxe/ui/layouts/ScrollViewLayout.hx",89,0x4379a48a)
HX_LOCAL_STACK_FRAME(_hx_pos_c64222abbde4bc58_120_calcAutoSize,"haxe.ui.layouts.ScrollViewLayout","calcAutoSize",0x6770a0c0,"haxe.ui.layouts.ScrollViewLayout.calcAutoSize","haxe/ui/layouts/ScrollViewLayout.hx",120,0x4379a48a)
HX_LOCAL_STACK_FRAME(_hx_pos_403b421688850d8a_700_cloneLayout,"haxe.ui.layouts.ScrollViewLayout","cloneLayout",0x58407b0c,"haxe.ui.layouts.ScrollViewLayout.cloneLayout","haxe/ui/macros/helpers/ClassBuilder.hx",700,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_92a40c09029655e3_113_self,"haxe.ui.layouts.ScrollViewLayout","self",0x631277c7,"haxe.ui.layouts.ScrollViewLayout.self","haxe/ui/macros/LayoutMacros.hx",113,0xe44eaad7)
namespace haxe{
namespace ui{
namespace layouts{

void ScrollViewLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_10_new)
HXDLIN(  10)		super::__construct();
            	}

Dynamic ScrollViewLayout_obj::__CreateEmpty() { return new ScrollViewLayout_obj; }

void *ScrollViewLayout_obj::_hx_vtable = 0;

Dynamic ScrollViewLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollViewLayout_obj > _hx_result = new ScrollViewLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ScrollViewLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23db4184) {
		if (inClassId<=(int)0x1d75bd8b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1d75bd8b;
		} else {
			return inClassId==(int)0x23db4184;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

void ScrollViewLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_11_repositionChildren)
HXLINE(  12)		 ::haxe::ui::core::Component contents = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  13)		if (::hx::IsNull( contents )) {
HXLINE(  14)			return;
            		}
HXLINE(  17)		 ::haxe::ui::components::HorizontalScroll hscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(  18)		 ::haxe::ui::components::VerticalScroll vscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(  19)		Float borderSize = this->get_borderSize();
HXLINE(  21)		bool _hx_tmp;
HXDLIN(  21)		if (::hx::IsNotNull( hscroll )) {
HXLINE(  21)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE(  21)			_hx_tmp = false;
            		}
HXDLIN(  21)		if (_hx_tmp) {
HXLINE(  25)			Float _hx_tmp1 = (this->get_paddingLeft() + borderSize);
HXDLIN(  25)			 ::Dynamic _hx_tmp2 = this->get_component()->get_componentHeight();
HXDLIN(  25)			Float _hx_tmp3 = (( (Float)(_hx_tmp2) ) - ( (Float)(hscroll->get_componentHeight()) ));
HXDLIN(  25)			Float _hx_tmp4 = (_hx_tmp3 - this->get_paddingBottom());
HXDLIN(  25)			hscroll->moveComponent(_hx_tmp1,::Math_obj::fround(((_hx_tmp4 + this->marginTop(hscroll)) - borderSize)));
            		}
HXLINE(  29)		bool _hx_tmp5;
HXDLIN(  29)		if (::hx::IsNotNull( vscroll )) {
HXLINE(  29)			_hx_tmp5 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE(  29)			_hx_tmp5 = false;
            		}
HXDLIN(  29)		if (_hx_tmp5) {
HXLINE(  33)			 ::Dynamic _hx_tmp6 = this->get_component()->get_componentWidth();
HXDLIN(  33)			Float _hx_tmp7 = (( (Float)(_hx_tmp6) ) - ( (Float)(vscroll->get_componentWidth()) ));
HXDLIN(  33)			Float _hx_tmp8 = (_hx_tmp7 - this->get_paddingRight());
HXDLIN(  33)			Float _hx_tmp9 = (::Math_obj::fround((_hx_tmp8 + this->marginLeft(vscroll))) - borderSize);
HXDLIN(  33)			vscroll->moveComponent(_hx_tmp9,(this->get_paddingTop() + borderSize));
            		}
HXLINE(  37)		 ::haxe::ui::core::Component contents1 = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE(  38)		if (::hx::IsNotNull( contents1 )) {
HXLINE(  39)			Float _hx_tmp10 = (this->get_paddingLeft() + borderSize);
HXDLIN(  39)			contents1->moveComponent(_hx_tmp10,(this->get_paddingTop() + borderSize));
            		}
            	}


void ScrollViewLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_43_resizeChildren)
HXLINE(  44)		this->super::resizeChildren();
HXLINE(  46)		 ::haxe::ui::containers::ScrollView scrollview = ::hx::TCast<  ::haxe::ui::containers::ScrollView >::cast(this->_component);
HXLINE(  48)		 ::haxe::ui::components::HorizontalScroll hscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(  49)		 ::haxe::ui::components::VerticalScroll vscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(  51)		 ::haxe::ui::geom::Size usableSize = this->get_usableSize();
HXLINE(  52)		Float percentWidth = ( (Float)(100) );
HXLINE(  53)		Float percentHeight = ( (Float)(100) );
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			 ::haxe::ui::core::Component _this = this->get_component();
HXDLIN(  54)			::Array< ::Dynamic> _g1;
HXDLIN(  54)			if (::hx::IsNull( _this->_children )) {
HXLINE(  54)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE(  54)				_g1 = _this->_children;
            			}
HXDLIN(  54)			while((_g < _g1->length)){
HXLINE(  54)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN(  54)				_g = (_g + 1);
HXLINE(  55)				bool _hx_tmp;
HXDLIN(  55)				if (::hx::IsInstanceNotEq( child,hscroll )) {
HXLINE(  55)					_hx_tmp = ::hx::IsInstanceNotEq( child,vscroll );
            				}
            				else {
HXLINE(  55)					_hx_tmp = false;
            				}
HXDLIN(  55)				if (_hx_tmp) {
HXLINE(  56)					continue;
            				}
HXLINE(  59)				 ::Dynamic cx = null();
HXLINE(  60)				 ::Dynamic cy = null();
HXLINE(  62)				if (::hx::IsNotNull( child->get_percentWidth() )) {
HXLINE(  63)					Float usableSize1 = usableSize->width;
HXDLIN(  63)					Float cx1 = ((usableSize1 * ( (Float)(child->get_percentWidth()) )) / percentWidth);
HXDLIN(  63)					Float cx2 = (cx1 - this->marginLeft(child));
HXDLIN(  63)					cx = (cx2 - this->marginRight(child));
            				}
HXLINE(  65)				if (::hx::IsNotNull( child->get_percentHeight() )) {
HXLINE(  66)					Float usableSize2 = usableSize->height;
HXDLIN(  66)					Float cy1 = ((usableSize2 * ( (Float)(child->get_percentHeight()) )) / percentHeight);
HXDLIN(  66)					Float cy2 = (cy1 - this->marginTop(child));
HXDLIN(  66)					cy = (cy2 - this->marginBottom(child));
            				}
HXLINE(  69)				bool _hx_tmp1;
HXDLIN(  69)				if (this->fixedMinWidth(child)) {
HXLINE(  69)					_hx_tmp1 = ::hx::IsNotNull( child->get_percentWidth() );
            				}
            				else {
HXLINE(  69)					_hx_tmp1 = false;
            				}
HXDLIN(  69)				if (_hx_tmp1) {
HXLINE(  70)					percentWidth = (percentWidth - ( (Float)(child->get_percentWidth()) ));
            				}
HXLINE(  72)				bool _hx_tmp2;
HXDLIN(  72)				if (this->fixedMinHeight(child)) {
HXLINE(  72)					_hx_tmp2 = ::hx::IsNotNull( child->get_percentHeight() );
            				}
            				else {
HXLINE(  72)					_hx_tmp2 = false;
            				}
HXDLIN(  72)				if (_hx_tmp2) {
HXLINE(  73)					percentHeight = (percentHeight - ( (Float)(child->get_percentHeight()) ));
            				}
HXLINE(  76)				if ((scrollview->get_autoHideScrolls() == true)) {
HXLINE(  77)					bool _hx_tmp3;
HXDLIN(  77)					bool _hx_tmp4;
HXDLIN(  77)					if (::hx::IsInstanceEq( child,hscroll )) {
HXLINE(  77)						_hx_tmp4 = ::hx::IsNotNull( vscroll );
            					}
            					else {
HXLINE(  77)						_hx_tmp4 = false;
            					}
HXDLIN(  77)					if (_hx_tmp4) {
HXLINE(  77)						_hx_tmp3 = (vscroll->get_hidden() == false);
            					}
            					else {
HXLINE(  77)						_hx_tmp3 = false;
            					}
HXDLIN(  77)					if (_hx_tmp3) {
HXLINE(  78)						cx = (cx - vscroll->get_width());
            					}
            					else {
HXLINE(  79)						bool _hx_tmp5;
HXDLIN(  79)						bool _hx_tmp6;
HXDLIN(  79)						if (::hx::IsInstanceEq( child,vscroll )) {
HXLINE(  79)							_hx_tmp6 = ::hx::IsNotNull( hscroll );
            						}
            						else {
HXLINE(  79)							_hx_tmp6 = false;
            						}
HXDLIN(  79)						if (_hx_tmp6) {
HXLINE(  79)							_hx_tmp5 = (hscroll->get_hidden() == false);
            						}
            						else {
HXLINE(  79)							_hx_tmp5 = false;
            						}
HXDLIN(  79)						if (_hx_tmp5) {
HXLINE(  80)							cy = (cy - hscroll->get_height());
            						}
            					}
            				}
HXLINE(  84)				child->resizeComponent(cx,cy);
            			}
            		}
            	}


 ::haxe::ui::geom::Size ScrollViewLayout_obj::get_usableSize(){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_89_get_usableSize)
HXLINE(  90)		 ::haxe::ui::geom::Size size = this->super::get_usableSize();
HXLINE(  91)		 ::haxe::ui::components::HorizontalScroll hscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE(  92)		 ::haxe::ui::components::VerticalScroll vscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE(  93)		bool _hx_tmp;
HXDLIN(  93)		bool _hx_tmp1;
HXDLIN(  93)		if (::hx::IsNotNull( hscroll )) {
HXLINE(  93)			_hx_tmp1 = (hscroll->get_includeInLayout() == true);
            		}
            		else {
HXLINE(  93)			_hx_tmp1 = false;
            		}
HXDLIN(  93)		if (_hx_tmp1) {
HXLINE(  93)			_hx_tmp = (this->hidden(hscroll) == false);
            		}
            		else {
HXLINE(  93)			_hx_tmp = false;
            		}
HXDLIN(  93)		if (_hx_tmp) {
HXLINE(  94)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN(  94)			Float size2 = size1->height;
HXDLIN(  94)			 ::Dynamic _hx_tmp2 = hscroll->get_componentHeight();
HXDLIN(  94)			size1->height = (size2 - (( (Float)(_hx_tmp2) ) - this->marginTop(hscroll)));
            		}
HXLINE(  96)		bool _hx_tmp3;
HXDLIN(  96)		bool _hx_tmp4;
HXDLIN(  96)		if (::hx::IsNotNull( vscroll )) {
HXLINE(  96)			_hx_tmp4 = (vscroll->get_includeInLayout() == true);
            		}
            		else {
HXLINE(  96)			_hx_tmp4 = false;
            		}
HXDLIN(  96)		if (_hx_tmp4) {
HXLINE(  96)			_hx_tmp3 = (this->hidden(vscroll) == false);
            		}
            		else {
HXLINE(  96)			_hx_tmp3 = false;
            		}
HXDLIN(  96)		if (_hx_tmp3) {
HXLINE(  97)			 ::haxe::ui::geom::Size size3 = size;
HXDLIN(  97)			Float size4 = size3->width;
HXDLIN(  97)			 ::Dynamic _hx_tmp5 = vscroll->get_componentWidth();
HXDLIN(  97)			size3->width = (size4 - (( (Float)(_hx_tmp5) ) - this->marginLeft(vscroll)));
            		}
HXLINE( 100)		bool _hx_tmp6;
HXDLIN( 100)		if (::hx::IsNotEq( this->get_component()->get_native(),true )) {
HXLINE( 100)			_hx_tmp6 = (this->_component->get_isNativeScroller() == true);
            		}
            		else {
HXLINE( 100)			_hx_tmp6 = true;
            		}
HXDLIN( 100)		if (_hx_tmp6) {
HXLINE( 101)			 ::haxe::ui::core::Component contents = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 102)			if (::hx::IsNotNull( contents )) {
HXLINE( 103)				 ::Dynamic _hx_tmp7 = contents->get_componentWidth();
HXDLIN( 103)				if (::hx::IsGreater( _hx_tmp7,size->width )) {
HXLINE( 104)					 ::haxe::ui::geom::Size size5 = size;
HXDLIN( 104)					Float size6 = size5->height;
HXDLIN( 104)					size5->height = (size6 - ::haxe::ui::core::Platform_obj::get_hscrollHeight());
            				}
HXLINE( 106)				 ::Dynamic _hx_tmp8 = contents->get_componentHeight();
HXDLIN( 106)				if (::hx::IsGreater( _hx_tmp8,size->height )) {
HXLINE( 107)					 ::haxe::ui::geom::Size size7 = size;
HXDLIN( 107)					Float size8 = size7->width;
HXDLIN( 107)					size7->width = (size8 - ::haxe::ui::core::Platform_obj::get_vscrollWidth());
            				}
            			}
            		}
HXLINE( 112)		Float borderSize = this->get_borderSize();
HXLINE( 113)		 ::haxe::ui::geom::Size size9 = size;
HXDLIN( 113)		size9->width = (size9->width - (borderSize * ( (Float)(2) )));
HXLINE( 114)		 ::haxe::ui::geom::Size size10 = size;
HXDLIN( 114)		size10->height = (size10->height - (borderSize * ( (Float)(2) )));
HXLINE( 116)		return size;
            	}


 ::haxe::ui::geom::Size ScrollViewLayout_obj::calcAutoSize(::Array< ::Dynamic> exclusions){
            	HX_STACKFRAME(&_hx_pos_c64222abbde4bc58_120_calcAutoSize)
HXLINE( 121)		 ::haxe::ui::components::HorizontalScroll hscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::HorizontalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::HorizontalScroll >();
HXLINE( 122)		 ::haxe::ui::components::VerticalScroll vscroll = this->get_component()->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),false,null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 123)		 ::haxe::ui::geom::Size size = this->super::calcAutoSize(::Array_obj< ::Dynamic>::__new(2)->init(0,hscroll)->init(1,vscroll));
HXLINE( 124)		bool _hx_tmp;
HXDLIN( 124)		if (::hx::IsNotNull( hscroll )) {
HXLINE( 124)			_hx_tmp = (hscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 124)			_hx_tmp = false;
            		}
HXDLIN( 124)		if (_hx_tmp) {
HXLINE( 125)			 ::haxe::ui::geom::Size size1 = size;
HXDLIN( 125)			Float size2 = size1->height;
HXDLIN( 125)			size1->height = (size2 + hscroll->get_componentHeight());
            		}
HXLINE( 127)		bool _hx_tmp1;
HXDLIN( 127)		if (::hx::IsNotNull( vscroll )) {
HXLINE( 127)			_hx_tmp1 = (vscroll->get_hidden() == false);
            		}
            		else {
HXLINE( 127)			_hx_tmp1 = false;
            		}
HXDLIN( 127)		if (_hx_tmp1) {
HXLINE( 128)			 ::haxe::ui::geom::Size size3 = size;
HXDLIN( 128)			Float size4 = size3->width;
HXDLIN( 128)			size3->width = (size4 + vscroll->get_componentWidth());
            		}
HXLINE( 131)		bool _hx_tmp2;
HXDLIN( 131)		if (::hx::IsNotEq( this->get_component()->get_native(),true )) {
HXLINE( 131)			_hx_tmp2 = (this->_component->get_isNativeScroller() == true);
            		}
            		else {
HXLINE( 131)			_hx_tmp2 = true;
            		}
HXDLIN( 131)		if (_hx_tmp2) {
HXLINE( 132)			 ::haxe::ui::core::Component contents = this->get_component()->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 133)			if (::hx::IsNotNull( contents )) {
HXLINE( 134)				Float _hx_tmp3 = contents->get_width();
HXDLIN( 134)				if ((_hx_tmp3 > this->get_component()->get_width())) {
HXLINE( 135)					 ::haxe::ui::geom::Size size5 = size;
HXDLIN( 135)					Float size6 = size5->height;
HXDLIN( 135)					size5->height = (size6 + ::haxe::ui::core::Platform_obj::get_hscrollHeight());
            				}
HXLINE( 137)				Float _hx_tmp4 = contents->get_height();
HXDLIN( 137)				if ((_hx_tmp4 > this->get_component()->get_height())) {
HXLINE( 138)					 ::haxe::ui::geom::Size size7 = size;
HXDLIN( 138)					Float size8 = size7->width;
HXDLIN( 138)					size7->width = (size8 + ::haxe::ui::core::Platform_obj::get_vscrollWidth());
            				}
            			}
            		}
HXLINE( 143)		 ::haxe::ui::geom::Size size9 = size;
HXDLIN( 143)		Float size10 = size9->width;
HXDLIN( 143)		size9->width = (size10 + (this->get_borderSize() * ( (Float)(2) )));
HXLINE( 144)		 ::haxe::ui::geom::Size size11 = size;
HXDLIN( 144)		Float size12 = size11->height;
HXDLIN( 144)		size11->height = (size12 + (this->get_borderSize() * ( (Float)(2) )));
HXLINE( 146)		return size;
            	}


 ::haxe::ui::layouts::Layout ScrollViewLayout_obj::cloneLayout(){
            	HX_STACKFRAME(&_hx_pos_403b421688850d8a_700_cloneLayout)
HXLINE(  85)		 ::haxe::ui::layouts::ScrollViewLayout c = ( ( ::haxe::ui::layouts::ScrollViewLayout)(this->super::cloneLayout()) );
HXLINE( 101)		return c;
            	}


 ::haxe::ui::layouts::Layout ScrollViewLayout_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_92a40c09029655e3_113_self)
HXDLIN( 113)		return  ::haxe::ui::layouts::ScrollViewLayout_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< ScrollViewLayout_obj > ScrollViewLayout_obj::__new() {
	::hx::ObjectPtr< ScrollViewLayout_obj > __this = new ScrollViewLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ScrollViewLayout_obj > ScrollViewLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ScrollViewLayout_obj *__this = (ScrollViewLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScrollViewLayout_obj), true, "haxe.ui.layouts.ScrollViewLayout"));
	*(void **)__this = ScrollViewLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ScrollViewLayout_obj::ScrollViewLayout_obj()
{
}

::hx::Val ScrollViewLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cloneLayout") ) { return ::hx::Val( cloneLayout_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"calcAutoSize") ) { return ::hx::Val( calcAutoSize_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_usableSize") ) { return ::hx::Val( get_usableSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ScrollViewLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ScrollViewLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollViewLayout_obj_sMemberFields[] = {
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("resizeChildren",53,43,30,c1),
	HX_("get_usableSize",22,8c,f5,3e),
	HX_("calcAutoSize",85,81,3f,fd),
	HX_("cloneLayout",e7,99,0c,f5),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class ScrollViewLayout_obj::__mClass;

void ScrollViewLayout_obj::__register()
{
	ScrollViewLayout_obj _hx_dummy;
	ScrollViewLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.layouts.ScrollViewLayout",13,de,2f,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollViewLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollViewLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollViewLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollViewLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace layouts
