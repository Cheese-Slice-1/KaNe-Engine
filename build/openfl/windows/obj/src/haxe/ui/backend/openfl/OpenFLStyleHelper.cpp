// Generated by Haxe 4.3.6
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_openfl_BitmapCache
#include <haxe/ui/backend/openfl/BitmapCache.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_openfl_OpenFLStyleHelper
#include <haxe/ui/backend/openfl/OpenFLStyleHelper.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Slice9
#include <haxe/ui/geom/Slice9.h>
#endif
#ifndef INCLUDED_haxe_ui_loaders_image_ImageLoader
#include <haxe/ui/loaders/image/ImageLoader.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ecceac342b7f1e2d_21_new,"haxe.ui.backend.openfl.OpenFLStyleHelper","new",0xd967916f,"haxe.ui.backend.openfl.OpenFLStyleHelper.new","haxe/ui/backend/openfl/OpenFLStyleHelper.hx",21,0x0b0c2061)
HX_LOCAL_STACK_FRAME(_hx_pos_ecceac342b7f1e2d_24_paintStyleSection,"haxe.ui.backend.openfl.OpenFLStyleHelper","paintStyleSection",0x5648d6c1,"haxe.ui.backend.openfl.OpenFLStyleHelper.paintStyleSection","haxe/ui/backend/openfl/OpenFLStyleHelper.hx",24,0x0b0c2061)
static const int _hx_array_data_03f0adfd_2[] = {
	(int)0,(int)255,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ecceac342b7f1e2d_199_paintStyleSection,"haxe.ui.backend.openfl.OpenFLStyleHelper","paintStyleSection",0x5648d6c1,"haxe.ui.backend.openfl.OpenFLStyleHelper.paintStyleSection","haxe/ui/backend/openfl/OpenFLStyleHelper.hx",199,0x0b0c2061)
HX_LOCAL_STACK_FRAME(_hx_pos_ecceac342b7f1e2d_206_paintBitmapBackground,"haxe.ui.backend.openfl.OpenFLStyleHelper","paintBitmapBackground",0x5f88e94a,"haxe.ui.backend.openfl.OpenFLStyleHelper.paintBitmapBackground","haxe/ui/backend/openfl/OpenFLStyleHelper.hx",206,0x0b0c2061)
HX_LOCAL_STACK_FRAME(_hx_pos_ecceac342b7f1e2d_335_paintBitmap,"haxe.ui.backend.openfl.OpenFLStyleHelper","paintBitmap",0x53f3ae3c,"haxe.ui.backend.openfl.OpenFLStyleHelper.paintBitmap","haxe/ui/backend/openfl/OpenFLStyleHelper.hx",335,0x0b0c2061)
HX_LOCAL_STACK_FRAME(_hx_pos_ecceac342b7f1e2d_372_convertToOpenFLRectArr,"haxe.ui.backend.openfl.OpenFLStyleHelper","convertToOpenFLRectArr",0xb1903b10,"haxe.ui.backend.openfl.OpenFLStyleHelper.convertToOpenFLRectArr","haxe/ui/backend/openfl/OpenFLStyleHelper.hx",372,0x0b0c2061)
HX_LOCAL_STACK_FRAME(_hx_pos_ecceac342b7f1e2d_381_convertToOpenFLRect,"haxe.ui.backend.openfl.OpenFLStyleHelper","convertToOpenFLRect",0x7ba0f3d1,"haxe.ui.backend.openfl.OpenFLStyleHelper.convertToOpenFLRect","haxe/ui/backend/openfl/OpenFLStyleHelper.hx",381,0x0b0c2061)
HX_LOCAL_STACK_FRAME(_hx_pos_ecceac342b7f1e2d_385_convertToHaxeUIRect,"haxe.ui.backend.openfl.OpenFLStyleHelper","convertToHaxeUIRect",0xeb167d3b,"haxe.ui.backend.openfl.OpenFLStyleHelper.convertToHaxeUIRect","haxe/ui/backend/openfl/OpenFLStyleHelper.hx",385,0x0b0c2061)
namespace haxe{
namespace ui{
namespace backend{
namespace openfl{

void OpenFLStyleHelper_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ecceac342b7f1e2d_21_new)
            	}

Dynamic OpenFLStyleHelper_obj::__CreateEmpty() { return new OpenFLStyleHelper_obj; }

void *OpenFLStyleHelper_obj::_hx_vtable = 0;

Dynamic OpenFLStyleHelper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OpenFLStyleHelper_obj > _hx_result = new OpenFLStyleHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OpenFLStyleHelper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02e263c5;
}

void OpenFLStyleHelper_obj::paintStyleSection( ::openfl::display::Graphics graphics, ::haxe::ui::styles::Style style,Float width,Float height,::hx::Null< Float >  __o_left,::hx::Null< Float >  __o_top,::hx::Null< bool >  __o_clear){
            		Float left = __o_left.Default(0);
            		Float top = __o_top.Default(0);
            		bool clear = __o_clear.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_ecceac342b7f1e2d_24_paintStyleSection)
HXLINE(  25)		if ((clear == true)) {
HXLINE(  26)			graphics->clear();
            		}
HXLINE(  29)		bool _hx_tmp;
HXDLIN(  29)		if (!((width <= 0))) {
HXLINE(  29)			_hx_tmp = (height <= 0);
            		}
            		else {
HXLINE(  29)			_hx_tmp = true;
            		}
HXDLIN(  29)		if (_hx_tmp) {
HXLINE(  30)			return;
            		}
HXLINE(  40)		left = ( (Float)(::Std_obj::_hx_int(left)) );
HXLINE(  41)		top = ( (Float)(::Std_obj::_hx_int(top)) );
HXLINE(  42)		width = ( (Float)(::Std_obj::_hx_int(width)) );
HXLINE(  43)		height = ( (Float)(::Std_obj::_hx_int(height)) );
HXLINE(  45)		bool hasFullStyledBorder = false;
HXLINE(  46)		::String borderStyle = style->borderStyle;
HXLINE(  47)		if (::hx::IsNull( borderStyle )) {
HXLINE(  48)			borderStyle = HX_("solid",2b,b4,c5,80);
            		}
HXLINE(  51)		 ::openfl::geom::Rectangle rc =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,top,left,width,height);
HXLINE(  52)		Float borderRadius = ( (Float)(0) );
HXLINE(  53)		if (::hx::IsNotNull( style->borderRadius )) {
HXLINE(  54)			borderRadius = ( (Float)(style->borderRadius) );
            		}
HXLINE(  57)		bool _hx_tmp1;
HXDLIN(  57)		bool _hx_tmp2;
HXDLIN(  57)		bool _hx_tmp3;
HXDLIN(  57)		bool _hx_tmp4;
HXDLIN(  57)		bool _hx_tmp5;
HXDLIN(  57)		bool _hx_tmp6;
HXDLIN(  57)		bool _hx_tmp7;
HXDLIN(  57)		bool _hx_tmp8;
HXDLIN(  57)		if (::hx::IsNotNull( style->borderLeftSize )) {
HXLINE(  57)			_hx_tmp8 = ::hx::IsNotEq( style->borderLeftSize,0 );
            		}
            		else {
HXLINE(  57)			_hx_tmp8 = false;
            		}
HXDLIN(  57)		if (_hx_tmp8) {
HXLINE(  57)			_hx_tmp7 = ::hx::IsEq( style->borderLeftSize,style->borderRightSize );
            		}
            		else {
HXLINE(  57)			_hx_tmp7 = false;
            		}
HXDLIN(  57)		if (_hx_tmp7) {
HXLINE(  57)			_hx_tmp6 = ::hx::IsEq( style->borderLeftSize,style->borderBottomSize );
            		}
            		else {
HXLINE(  57)			_hx_tmp6 = false;
            		}
HXDLIN(  57)		if (_hx_tmp6) {
HXLINE(  57)			_hx_tmp5 = ::hx::IsEq( style->borderLeftSize,style->borderTopSize );
            		}
            		else {
HXLINE(  57)			_hx_tmp5 = false;
            		}
HXDLIN(  57)		if (_hx_tmp5) {
HXLINE(  57)			_hx_tmp4 = ::hx::IsNotNull( style->borderLeftColor );
            		}
            		else {
HXLINE(  57)			_hx_tmp4 = false;
            		}
HXDLIN(  57)		if (_hx_tmp4) {
HXLINE(  57)			_hx_tmp3 = ::hx::IsEq( style->borderLeftColor,style->borderRightColor );
            		}
            		else {
HXLINE(  57)			_hx_tmp3 = false;
            		}
HXDLIN(  57)		if (_hx_tmp3) {
HXLINE(  57)			_hx_tmp2 = ::hx::IsEq( style->borderLeftColor,style->borderBottomColor );
            		}
            		else {
HXLINE(  57)			_hx_tmp2 = false;
            		}
HXDLIN(  57)		if (_hx_tmp2) {
HXLINE(  57)			_hx_tmp1 = ::hx::IsEq( style->borderLeftColor,style->borderTopColor );
            		}
            		else {
HXLINE(  57)			_hx_tmp1 = false;
            		}
HXDLIN(  57)		if (_hx_tmp1) {
HXLINE(  74)			graphics->lineStyle(style->borderLeftSize,style->borderLeftColor,null(),null(),null(),null(),null(),null());
HXLINE(  75)			 ::openfl::geom::Rectangle rc1 = rc;
HXDLIN(  75)			Float _hx_tmp9 = rc->get_left();
HXDLIN(  75)			rc1->set_left((_hx_tmp9 + (( (Float)(style->borderLeftSize) ) / ( (Float)(2) ))));
HXLINE(  76)			 ::openfl::geom::Rectangle rc2 = rc;
HXDLIN(  76)			Float _hx_tmp10 = rc->get_top();
HXDLIN(  76)			rc2->set_top((_hx_tmp10 + (( (Float)(style->borderLeftSize) ) / ( (Float)(2) ))));
HXLINE(  77)			 ::openfl::geom::Rectangle rc3 = rc;
HXDLIN(  77)			Float _hx_tmp11 = rc->get_bottom();
HXDLIN(  77)			rc3->set_bottom((_hx_tmp11 - (( (Float)(style->borderLeftSize) ) / ( (Float)(2) ))));
HXLINE(  78)			 ::openfl::geom::Rectangle rc4 = rc;
HXDLIN(  78)			Float _hx_tmp12 = rc->get_right();
HXDLIN(  78)			rc4->set_right((_hx_tmp12 - (( (Float)(style->borderLeftSize) ) / ( (Float)(2) ))));
            		}
            		else {
HXLINE(  81)			bool _hx_tmp13;
HXDLIN(  81)			bool _hx_tmp14;
HXDLIN(  81)			bool _hx_tmp15;
HXDLIN(  81)			bool _hx_tmp16;
HXDLIN(  81)			if (::hx::IsNotNull( style->borderTopSize )) {
HXLINE(  81)				_hx_tmp16 = ::hx::IsGreater( style->borderTopSize,0 );
            			}
            			else {
HXLINE(  81)				_hx_tmp16 = false;
            			}
HXDLIN(  81)			if (!(_hx_tmp16)) {
HXLINE(  82)				if (::hx::IsNotNull( style->borderBottomSize )) {
HXLINE(  81)					_hx_tmp15 = ::hx::IsGreater( style->borderBottomSize,0 );
            				}
            				else {
HXLINE(  81)					_hx_tmp15 = false;
            				}
            			}
            			else {
HXLINE(  81)				_hx_tmp15 = true;
            			}
HXDLIN(  81)			if (!(_hx_tmp15)) {
HXLINE(  83)				if (::hx::IsNotNull( style->borderLeftSize )) {
HXLINE(  81)					_hx_tmp14 = ::hx::IsGreater( style->borderLeftSize,0 );
            				}
            				else {
HXLINE(  81)					_hx_tmp14 = false;
            				}
            			}
            			else {
HXLINE(  81)				_hx_tmp14 = true;
            			}
HXDLIN(  81)			if (!(_hx_tmp14)) {
HXLINE(  84)				if (::hx::IsNotNull( style->borderRightSize )) {
HXLINE(  81)					_hx_tmp13 = ::hx::IsGreater( style->borderRightSize,0 );
            				}
            				else {
HXLINE(  81)					_hx_tmp13 = false;
            				}
            			}
            			else {
HXLINE(  81)				_hx_tmp13 = true;
            			}
HXDLIN(  81)			if (_hx_tmp13) {
HXLINE(  86)				 ::openfl::geom::Rectangle org = rc->clone();
HXLINE(  88)				bool _hx_tmp17;
HXDLIN(  88)				if (::hx::IsNotNull( style->borderTopSize )) {
HXLINE(  88)					_hx_tmp17 = ::hx::IsGreater( style->borderTopSize,0 );
            				}
            				else {
HXLINE(  88)					_hx_tmp17 = false;
            				}
HXDLIN(  88)				if (_hx_tmp17) {
HXLINE(  89)					graphics->beginFill(style->borderTopColor,null());
HXLINE(  90)					graphics->drawRect(( (Float)(0) ),( (Float)(0) ),org->width,( (Float)(style->borderTopSize) ));
HXLINE(  91)					graphics->endFill();
HXLINE(  93)					 ::openfl::geom::Rectangle rc5 = rc;
HXDLIN(  93)					Float _hx_tmp18 = rc->get_top();
HXDLIN(  93)					rc5->set_top((_hx_tmp18 + style->borderTopSize));
            				}
HXLINE(  96)				bool _hx_tmp19;
HXDLIN(  96)				if (::hx::IsNotNull( style->borderBottomSize )) {
HXLINE(  96)					_hx_tmp19 = ::hx::IsGreater( style->borderBottomSize,0 );
            				}
            				else {
HXLINE(  96)					_hx_tmp19 = false;
            				}
HXDLIN(  96)				if (_hx_tmp19) {
HXLINE(  97)					graphics->beginFill(style->borderBottomColor,null());
HXLINE(  98)					graphics->drawRect(( (Float)(0) ),(org->height - ( (Float)(style->borderBottomSize) )),org->width,( (Float)(style->borderBottomSize) ));
HXLINE(  99)					graphics->endFill();
HXLINE( 101)					 ::openfl::geom::Rectangle rc6 = rc;
HXDLIN( 101)					Float _hx_tmp20 = rc->get_bottom();
HXDLIN( 101)					rc6->set_bottom((_hx_tmp20 - ( (Float)(style->borderBottomSize) )));
            				}
HXLINE( 104)				bool _hx_tmp21;
HXDLIN( 104)				if (::hx::IsNotNull( style->borderLeftSize )) {
HXLINE( 104)					_hx_tmp21 = ::hx::IsGreater( style->borderLeftSize,0 );
            				}
            				else {
HXLINE( 104)					_hx_tmp21 = false;
            				}
HXDLIN( 104)				if (_hx_tmp21) {
HXLINE( 105)					graphics->beginFill(style->borderLeftColor,null());
HXLINE( 106)					 ::openfl::display::Graphics graphics1 = graphics;
HXDLIN( 106)					Float _hx_tmp22 = rc->get_top();
HXDLIN( 106)					 ::Dynamic style1 = style->borderLeftSize;
HXDLIN( 106)					Float org1 = org->height;
HXDLIN( 106)					graphics1->drawRect(( (Float)(0) ),_hx_tmp22,( (Float)(style1) ),(org1 - rc->get_top()));
HXLINE( 107)					graphics->endFill();
HXLINE( 109)					 ::openfl::geom::Rectangle rc7 = rc;
HXDLIN( 109)					Float _hx_tmp23 = rc->get_left();
HXDLIN( 109)					rc7->set_left((_hx_tmp23 + style->borderLeftSize));
            				}
HXLINE( 112)				bool _hx_tmp24;
HXDLIN( 112)				if (::hx::IsNotNull( style->borderRightSize )) {
HXLINE( 112)					_hx_tmp24 = ::hx::IsGreater( style->borderRightSize,0 );
            				}
            				else {
HXLINE( 112)					_hx_tmp24 = false;
            				}
HXDLIN( 112)				if (_hx_tmp24) {
HXLINE( 113)					graphics->beginFill(style->borderRightColor,null());
HXLINE( 114)					 ::openfl::display::Graphics graphics2 = graphics;
HXDLIN( 114)					Float _hx_tmp25 = (org->width - ( (Float)(style->borderRightSize) ));
HXDLIN( 114)					Float _hx_tmp26 = rc->get_top();
HXDLIN( 114)					 ::Dynamic style2 = style->borderRightSize;
HXDLIN( 114)					Float org2 = org->height;
HXDLIN( 114)					graphics2->drawRect(_hx_tmp25,_hx_tmp26,( (Float)(style2) ),(org2 - rc->get_top()));
HXLINE( 115)					graphics->endFill();
HXLINE( 117)					 ::openfl::geom::Rectangle rc8 = rc;
HXDLIN( 117)					Float _hx_tmp27 = rc->get_right();
HXDLIN( 117)					rc8->set_right((_hx_tmp27 - ( (Float)(style->borderRightSize) )));
            				}
            			}
            		}
HXLINE( 122)		 ::Dynamic backgroundColor = style->backgroundColor;
HXLINE( 123)		 ::Dynamic backgroundColorEnd = style->backgroundColorEnd;
HXLINE( 124)		 ::Dynamic backgroundOpacity = style->backgroundOpacity;
HXLINE( 131)		if (::hx::IsNull( backgroundOpacity )) {
HXLINE( 132)			backgroundOpacity = 1;
            		}
HXLINE( 135)		if (::hx::IsNotNull( backgroundColor )) {
HXLINE( 136)			if (::hx::IsNotNull( backgroundColorEnd )) {
HXLINE( 137)				int w = ::Std_obj::_hx_int(rc->width);
HXLINE( 138)				int h = ::Std_obj::_hx_int(rc->height);
HXLINE( 139)				::Array< int > colors = ::Array_obj< int >::__new(2)->init(0,backgroundColor)->init(1,backgroundColorEnd);
HXLINE( 140)				::Array< Float > alphas = ::Array_obj< Float >::__new(2)->init(0,backgroundOpacity)->init(1,backgroundOpacity);
HXLINE( 141)				::Array< int > ratios = ::Array_obj< int >::fromData( _hx_array_data_03f0adfd_2,2);
HXLINE( 142)				 ::openfl::geom::Matrix matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 144)				::String gradientType = HX_("vertical",76,bc,15,6a);
HXLINE( 145)				if (::hx::IsNotNull( style->backgroundGradientStyle )) {
HXLINE( 146)					gradientType = style->backgroundGradientStyle;
            				}
HXLINE( 149)				if ((gradientType == HX_("vertical",76,bc,15,6a))) {
HXLINE( 150)					matrix->createGradientBox(( (Float)((w - 2)) ),( (Float)((h - 2)) ),(::Math_obj::PI / ( (Float)(2) )),0,0);
            				}
            				else {
HXLINE( 151)					if ((gradientType == HX_("horizontal",e4,fc,c3,15))) {
HXLINE( 152)						matrix->createGradientBox(( (Float)((w - 2)) ),( (Float)((h - 2)) ),0,0,0);
            					}
            				}
HXLINE( 155)				graphics->beginGradientFill(0,colors,alphas,ratios,matrix,0,0,0);
            			}
            			else {
HXLINE( 164)				graphics->beginFill(backgroundColor,backgroundOpacity);
            			}
            		}
HXLINE( 168)		if ((borderRadius == 0)) {
HXLINE( 169)			bool _hx_tmp28;
HXDLIN( 169)			bool _hx_tmp29;
HXDLIN( 169)			bool _hx_tmp30;
HXDLIN( 169)			if (::hx::IsNull( style->borderRadiusTopLeft )) {
HXLINE( 169)				_hx_tmp30 = ::hx::IsNotNull( style->borderRadiusTopRight );
            			}
            			else {
HXLINE( 169)				_hx_tmp30 = true;
            			}
HXDLIN( 169)			if (!(_hx_tmp30)) {
HXLINE( 169)				_hx_tmp29 = ::hx::IsNotNull( style->borderRadiusBottomLeft );
            			}
            			else {
HXLINE( 169)				_hx_tmp29 = true;
            			}
HXDLIN( 169)			if (!(_hx_tmp29)) {
HXLINE( 169)				_hx_tmp28 = ::hx::IsNotNull( style->borderRadiusBottomRight );
            			}
            			else {
HXLINE( 169)				_hx_tmp28 = true;
            			}
HXDLIN( 169)			if (_hx_tmp28) {
HXLINE( 170)				 ::openfl::display::Graphics graphics3 = graphics;
HXDLIN( 170)				Float _hx_tmp31 = rc->get_left();
HXDLIN( 170)				Float _hx_tmp32 = rc->get_top();
HXDLIN( 170)				graphics3->drawRoundRectComplex(_hx_tmp31,_hx_tmp32,rc->width,rc->height,( (Float)(style->borderRadiusTopLeft) ),( (Float)(style->borderRadiusTopRight) ),( (Float)(style->borderRadiusBottomLeft) ),( (Float)(style->borderRadiusBottomRight) ));
            			}
            			else {
HXLINE( 171)				if (hasFullStyledBorder) {
HXLINE( 183)					 ::openfl::display::Graphics graphics4 = graphics;
HXDLIN( 183)					Float _hx_tmp33 = rc->get_left();
HXDLIN( 183)					Float _hx_tmp34 = rc->get_top();
HXDLIN( 183)					graphics4->drawRect(_hx_tmp33,_hx_tmp34,rc->width,rc->height);
            				}
            				else {
HXLINE( 186)					 ::openfl::display::Graphics graphics5 = graphics;
HXDLIN( 186)					Float _hx_tmp35 = rc->get_left();
HXDLIN( 186)					Float _hx_tmp36 = rc->get_top();
HXDLIN( 186)					graphics5->drawRect(_hx_tmp35,_hx_tmp36,rc->width,rc->height);
            				}
            			}
            		}
            		else {
HXLINE( 189)			bool _hx_tmp37;
HXDLIN( 189)			if ((rc->width == rc->height)) {
HXLINE( 189)				_hx_tmp37 = (borderRadius >= (rc->width / ( (Float)(2) )));
            			}
            			else {
HXLINE( 189)				_hx_tmp37 = false;
            			}
HXDLIN( 189)			if (_hx_tmp37) {
HXLINE( 190)				borderRadius = (rc->width - ( (Float)(1) ));
            			}
HXLINE( 192)			 ::openfl::display::Graphics graphics6 = graphics;
HXDLIN( 192)			Float _hx_tmp38 = rc->get_left();
HXDLIN( 192)			Float _hx_tmp39 = rc->get_top();
HXDLIN( 192)			graphics6->drawRoundRect(_hx_tmp38,_hx_tmp39,rc->width,rc->height,(borderRadius + 1),(borderRadius + 1));
            		}
HXLINE( 195)		graphics->endFill();
HXLINE( 197)		if (::hx::IsNotNull( style->backgroundImage )) {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::styles::Style,style, ::openfl::geom::Rectangle,rc, ::openfl::display::Graphics,graphics) HXARGC(1)
            			void _hx_run( ::Dynamic imageInfo){
            				HX_GC_STACKFRAME(&_hx_pos_ecceac342b7f1e2d_199_paintStyleSection)
HXLINE( 199)				bool _hx_tmp;
HXDLIN( 199)				if (::hx::IsNotNull( imageInfo )) {
HXLINE( 199)					_hx_tmp = ::hx::IsNotNull( imageInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 199)					_hx_tmp = false;
            				}
HXDLIN( 199)				if (_hx_tmp) {
HXLINE( 200)					::haxe::ui::backend::openfl::OpenFLStyleHelper_obj::paintBitmapBackground(graphics,( ( ::openfl::display::BitmapData)(imageInfo->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic)) ),style,rc);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 198)			::haxe::ui::loaders::image::ImageLoader_obj::get_instance()->load(style->backgroundImage, ::Dynamic(new _hx_Closure_0(style,rc,graphics)),null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(OpenFLStyleHelper_obj,paintStyleSection,(void))

void OpenFLStyleHelper_obj::paintBitmapBackground( ::openfl::display::Graphics graphics, ::openfl::display::BitmapData data, ::haxe::ui::styles::Style style, ::openfl::geom::Rectangle rc){
            	HX_GC_STACKFRAME(&_hx_pos_ecceac342b7f1e2d_206_paintBitmapBackground)
HXLINE( 207)		 ::openfl::display::BitmapData fillBmp = null();
HXLINE( 208)		 ::openfl::geom::Rectangle fillRect = rc;
HXLINE( 210)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::openfl::display::BitmapData >())) {
HXLINE( 211)			fillBmp = data;
            		}
            		else {
HXLINE( 221)			return;
            		}
HXLINE( 224)		::String cacheId = ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(style->backgroundImage);
HXLINE( 225)		bool _hx_tmp;
HXDLIN( 225)		bool _hx_tmp1;
HXDLIN( 225)		bool _hx_tmp2;
HXDLIN( 225)		if (::hx::IsNotNull( style->backgroundImageClipTop )) {
HXLINE( 225)			_hx_tmp2 = ::hx::IsNotNull( style->backgroundImageClipLeft );
            		}
            		else {
HXLINE( 225)			_hx_tmp2 = false;
            		}
HXDLIN( 225)		if (_hx_tmp2) {
HXLINE( 225)			_hx_tmp1 = ::hx::IsNotNull( style->backgroundImageClipBottom );
            		}
            		else {
HXLINE( 225)			_hx_tmp1 = false;
            		}
HXDLIN( 225)		if (_hx_tmp1) {
HXLINE( 225)			_hx_tmp = ::hx::IsNotNull( style->backgroundImageClipRight );
            		}
            		else {
HXLINE( 225)			_hx_tmp = false;
            		}
HXDLIN( 225)		if (_hx_tmp) {
HXLINE( 230)			 ::openfl::geom::Rectangle clip =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,style->backgroundImageClipLeft,style->backgroundImageClipTop,(( (Float)(style->backgroundImageClipRight) ) - ( (Float)(style->backgroundImageClipLeft) )),(( (Float)(style->backgroundImageClipBottom) ) - ( (Float)(style->backgroundImageClipTop) )));
HXLINE( 234)			cacheId = (cacheId + (HX_("_",5f,00,00,00) + ::haxe::ui::backend::openfl::BitmapCache_obj::rectId(clip)));
HXLINE( 235)			 ::openfl::display::BitmapData clipBmp = ::haxe::ui::backend::openfl::BitmapCache_obj::get_instance()->get(cacheId);
HXLINE( 236)			if (::hx::IsNull( clipBmp )) {
HXLINE( 237)				int clipBmp1 = ::Std_obj::_hx_int(clip->width);
HXDLIN( 237)				clipBmp =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,clipBmp1,::Std_obj::_hx_int(clip->height),true,0);
HXLINE( 238)				clipBmp->copyPixels(fillBmp,clip, ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0),null(),null(),null());
HXLINE( 239)				::haxe::ui::backend::openfl::BitmapCache_obj::get_instance()->set(cacheId,clipBmp);
            			}
HXLINE( 241)			fillBmp = clipBmp;
            		}
HXLINE( 244)		Float borderSize = ( (Float)(0) );
HXLINE( 245)		bool _hx_tmp3;
HXDLIN( 245)		if (::hx::IsNotNull( style->borderSize )) {
HXLINE( 245)			_hx_tmp3 = ::hx::IsGreater( style->borderSize,0 );
            		}
            		else {
HXLINE( 245)			_hx_tmp3 = false;
            		}
HXDLIN( 245)		if (_hx_tmp3) {
HXLINE( 246)			borderSize = ( (Float)(style->borderSize) );
HXLINE( 247)			fillRect->inflate(-((( (Float)(style->borderSize) ) / ( (Float)(2) ))),-((( (Float)(style->borderSize) ) / ( (Float)(2) ))));
            		}
HXLINE( 250)		 ::openfl::geom::Rectangle slice = null();
HXLINE( 251)		bool _hx_tmp4;
HXDLIN( 251)		bool _hx_tmp5;
HXDLIN( 251)		bool _hx_tmp6;
HXDLIN( 251)		if (::hx::IsNotNull( style->backgroundImageSliceTop )) {
HXLINE( 251)			_hx_tmp6 = ::hx::IsNotNull( style->backgroundImageSliceLeft );
            		}
            		else {
HXLINE( 251)			_hx_tmp6 = false;
            		}
HXDLIN( 251)		if (_hx_tmp6) {
HXLINE( 251)			_hx_tmp5 = ::hx::IsNotNull( style->backgroundImageSliceBottom );
            		}
            		else {
HXLINE( 251)			_hx_tmp5 = false;
            		}
HXDLIN( 251)		if (_hx_tmp5) {
HXLINE( 251)			_hx_tmp4 = ::hx::IsNotNull( style->backgroundImageSliceRight );
            		}
            		else {
HXLINE( 251)			_hx_tmp4 = false;
            		}
HXDLIN( 251)		if (_hx_tmp4) {
HXLINE( 255)			slice =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,style->backgroundImageSliceLeft,style->backgroundImageSliceTop,(( (Float)(style->backgroundImageSliceRight) ) - ( (Float)(style->backgroundImageSliceLeft) )),(( (Float)(style->backgroundImageSliceBottom) ) - ( (Float)(style->backgroundImageSliceTop) )));
            		}
HXLINE( 262)		if (::hx::IsNull( slice )) {
HXLINE( 263)			bool smooth = true;
HXLINE( 264)			if ((style->imageRendering == HX_("pixelated",98,91,26,0f))) {
HXLINE( 265)				smooth = false;
            			}
HXLINE( 268)			 ::openfl::geom::Matrix matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 269)			matrix->translate(( (Float)(style->backgroundPositionX) ),( (Float)(style->backgroundPositionY) ));
HXLINE( 270)			Float scaleX = ( (Float)(1) );
HXLINE( 271)			Float scaleY = ( (Float)(1) );
HXLINE( 272)			bool repeat = (style->backgroundImageRepeat == HX_("repeat",5b,97,7c,06));
HXLINE( 273)			bool _hx_tmp7;
HXDLIN( 273)			bool _hx_tmp8;
HXDLIN( 273)			if (::hx::IsNotNull( style->backgroundImageRepeat )) {
HXLINE( 273)				_hx_tmp8 = (style->backgroundImageRepeat == HX_("no-repeat",27,11,5d,c6));
            			}
            			else {
HXLINE( 273)				_hx_tmp8 = true;
            			}
HXDLIN( 273)			if (!(_hx_tmp8)) {
HXLINE( 273)				_hx_tmp7 = (style->backgroundImageRepeat == HX_("repeat",5b,97,7c,06));
            			}
            			else {
HXLINE( 273)				_hx_tmp7 = true;
            			}
HXDLIN( 273)			if (_hx_tmp7) {
HXLINE( 274)				if (::hx::IsNotNull( style->backgroundWidth )) {
HXLINE( 275)					scaleX = (( (Float)(style->backgroundWidth) ) / ( (Float)(fillBmp->width) ));
            				}
            				else {
HXLINE( 276)					if (::hx::IsNotNull( style->backgroundWidthPercent )) {
HXLINE( 277)						scaleX = (((fillRect->width / ( (Float)(fillBmp->width) )) * ( (Float)(style->backgroundWidthPercent) )) / ( (Float)(100) ));
            					}
            				}
HXLINE( 279)				if (::hx::IsNotNull( style->backgroundHeight )) {
HXLINE( 280)					scaleY = (( (Float)(style->backgroundHeight) ) / ( (Float)(fillBmp->height) ));
            				}
            				else {
HXLINE( 281)					if (::hx::IsNotNull( style->backgroundHeightPercent )) {
HXLINE( 282)						scaleY = (((fillRect->height / ( (Float)(fillBmp->height) )) * ( (Float)(style->backgroundHeightPercent) )) / ( (Float)(100) ));
            					}
            				}
HXLINE( 284)				bool _hx_tmp9;
HXDLIN( 284)				if ((scaleX == 1)) {
HXLINE( 284)					_hx_tmp9 = (scaleY != 1);
            				}
            				else {
HXLINE( 284)					_hx_tmp9 = true;
            				}
HXDLIN( 284)				if (_hx_tmp9) {
HXLINE( 285)					matrix->scale(scaleX,scaleY);
            				}
            			}
            			else {
HXLINE( 287)				if ((style->backgroundImageRepeat == HX_("stretch",05,3e,53,f6))) {
HXLINE( 288)					scaleX = (fillRect->width / ( (Float)(fillBmp->width) ));
HXLINE( 289)					scaleY = (fillRect->height / ( (Float)(fillBmp->height) ));
HXLINE( 290)					matrix->scale(scaleX,scaleY);
            				}
            			}
HXLINE( 293)			graphics->beginBitmapFill(fillBmp,matrix,repeat,smooth);
HXLINE( 294)			bool _hx_tmp10;
HXDLIN( 294)			if (::hx::IsNotNull( style->backgroundImageRepeat )) {
HXLINE( 294)				_hx_tmp10 = (style->backgroundImageRepeat == HX_("no-repeat",27,11,5d,c6));
            			}
            			else {
HXLINE( 294)				_hx_tmp10 = true;
            			}
HXDLIN( 294)			if (_hx_tmp10) {
HXLINE( 295)				bool _hx_tmp11;
HXDLIN( 295)				if ((scaleX == 1)) {
HXLINE( 295)					_hx_tmp11 = (scaleY == 1);
            				}
            				else {
HXLINE( 295)					_hx_tmp11 = false;
            				}
HXDLIN( 295)				if (_hx_tmp11) {
HXLINE( 296)					fillRect->width = ( (Float)(fillBmp->width) );
HXLINE( 297)					fillRect->height = ( (Float)(fillBmp->height) );
            				}
            			}
HXLINE( 301)			Float borderRadius = ( (Float)(0) );
HXLINE( 302)			if (::hx::IsNotNull( style->borderRadius )) {
HXLINE( 303)				borderRadius = ( (Float)(style->borderRadius) );
            			}
HXLINE( 306)			graphics->lineStyle(0,0,0,null(),null(),null(),null(),null());
HXLINE( 307)			fillRect->set_left(( (Float)(::Std_obj::_hx_int(fillRect->get_left())) ));
HXLINE( 308)			fillRect->set_top(( (Float)(::Std_obj::_hx_int(fillRect->get_top())) ));
HXLINE( 309)			fillRect->set_bottom(( (Float)(::Std_obj::_hx_int(fillRect->get_bottom())) ));
HXLINE( 310)			fillRect->set_right(( (Float)(::Std_obj::_hx_int(fillRect->get_right())) ));
HXLINE( 312)			Float _hx_tmp12 = fillRect->get_left();
HXDLIN( 312)			fillRect->set_left((_hx_tmp12 + style->backgroundPositionX));
HXLINE( 313)			Float _hx_tmp13 = fillRect->get_top();
HXDLIN( 313)			fillRect->set_top((_hx_tmp13 + style->backgroundPositionY));
HXLINE( 315)			Float _hx_tmp14 = fillRect->get_left();
HXDLIN( 315)			Float _hx_tmp15 = fillRect->get_top();
HXDLIN( 315)			graphics->drawRect(_hx_tmp14,_hx_tmp15,fillRect->width,fillRect->height);
HXLINE( 316)			graphics->endFill();
            		}
            		else {
HXLINE( 318)			graphics->clear();
HXLINE( 320)			Float w = (rc->width + borderSize);
HXLINE( 321)			Float h = (rc->height + borderSize);
HXLINE( 322)			int fillBmp1 = fillBmp->width;
HXDLIN( 322)			int fillBmp2 = fillBmp->height;
HXDLIN( 322)			 ::Dynamic rects = ::haxe::ui::geom::Slice9_obj::buildRects(w,h,( (Float)(fillBmp1) ),( (Float)(fillBmp2) ),::haxe::ui::backend::openfl::OpenFLStyleHelper_obj::convertToHaxeUIRect(slice));
HXLINE( 323)			::Array< ::Dynamic> srcRects = ::haxe::ui::backend::openfl::OpenFLStyleHelper_obj::convertToOpenFLRectArr(( (::Array< ::Dynamic>)(rects->__Field(HX_("src",e4,a6,57,00),::hx::paccDynamic)) ));
HXLINE( 324)			::Array< ::Dynamic> dstRects = ::haxe::ui::backend::openfl::OpenFLStyleHelper_obj::convertToOpenFLRectArr(( (::Array< ::Dynamic>)(rects->__Field(HX_("dst",05,46,4c,00),::hx::paccDynamic)) ));
HXLINE( 325)			{
HXLINE( 325)				int _g = 0;
HXDLIN( 325)				int _g1 = srcRects->length;
HXDLIN( 325)				while((_g < _g1)){
HXLINE( 325)					_g = (_g + 1);
HXDLIN( 325)					int i = (_g - 1);
HXLINE( 326)					 ::openfl::geom::Rectangle srcRect = srcRects->__get(i).StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 327)					 ::openfl::geom::Rectangle dstRect = dstRects->__get(i).StaticCast<  ::openfl::geom::Rectangle >();
HXLINE( 328)					 ::openfl::geom::Rectangle dstRect1 = dstRect;
HXDLIN( 328)					dstRect1->x = (dstRect1->x + style->backgroundPositionX);
HXLINE( 329)					 ::openfl::geom::Rectangle dstRect2 = dstRect;
HXDLIN( 329)					dstRect2->y = (dstRect2->y + style->backgroundPositionY);
HXLINE( 330)					::haxe::ui::backend::openfl::OpenFLStyleHelper_obj::paintBitmap(graphics,fillBmp,cacheId,srcRect,dstRect);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(OpenFLStyleHelper_obj,paintBitmapBackground,(void))

void OpenFLStyleHelper_obj::paintBitmap( ::openfl::display::Graphics graphics, ::openfl::display::BitmapData bmp,::String cacheId, ::openfl::geom::Rectangle srcRect, ::openfl::geom::Rectangle dstRect){
            	HX_GC_STACKFRAME(&_hx_pos_ecceac342b7f1e2d_335_paintBitmap)
HXLINE( 336)		srcRect->set_left(( (Float)(::Std_obj::_hx_int(srcRect->get_left())) ));
HXLINE( 337)		srcRect->set_top(( (Float)(::Std_obj::_hx_int(srcRect->get_top())) ));
HXLINE( 338)		srcRect->set_bottom(( (Float)(::Std_obj::_hx_int(srcRect->get_bottom())) ));
HXLINE( 339)		srcRect->set_right(( (Float)(::Std_obj::_hx_int(srcRect->get_right())) ));
HXLINE( 340)		dstRect->set_left(( (Float)(::Std_obj::_hx_int(dstRect->get_left())) ));
HXLINE( 341)		dstRect->set_top(( (Float)(::Std_obj::_hx_int(dstRect->get_top())) ));
HXLINE( 342)		dstRect->set_bottom(( (Float)(::Std_obj::_hx_int(dstRect->get_bottom())) ));
HXLINE( 343)		dstRect->set_right(( (Float)(::Std_obj::_hx_int(dstRect->get_right())) ));
HXLINE( 345)		bool _hx_tmp;
HXDLIN( 345)		if (!((srcRect->width <= 0))) {
HXLINE( 345)			_hx_tmp = (srcRect->height <= 0);
            		}
            		else {
HXLINE( 345)			_hx_tmp = true;
            		}
HXDLIN( 345)		if (_hx_tmp) {
HXLINE( 346)			return;
            		}
HXLINE( 349)		bool _hx_tmp1;
HXDLIN( 349)		if (!((dstRect->width <= 0))) {
HXLINE( 349)			_hx_tmp1 = (dstRect->height <= 0);
            		}
            		else {
HXLINE( 349)			_hx_tmp1 = true;
            		}
HXDLIN( 349)		if (_hx_tmp1) {
HXLINE( 350)			return;
            		}
HXLINE( 353)		cacheId = (cacheId + (HX_("__",20,53,00,00) + ::haxe::ui::backend::openfl::BitmapCache_obj::rectId(srcRect)));
HXLINE( 354)		 ::openfl::display::BitmapData srcBmp = ::haxe::ui::backend::openfl::BitmapCache_obj::get_instance()->get(cacheId);
HXLINE( 355)		if (::hx::IsNull( srcBmp )) {
HXLINE( 356)			int srcBmp1 = ::Std_obj::_hx_int(srcRect->width);
HXDLIN( 356)			srcBmp =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,srcBmp1,::Std_obj::_hx_int(srcRect->height),true,0);
HXLINE( 357)			srcBmp->copyPixels(bmp,srcRect, ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0),null(),null(),null());
            		}
HXLINE( 361)		 ::openfl::geom::Matrix mat =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 362)		mat->scale((dstRect->width / ( (Float)(srcBmp->width) )),(dstRect->height / ( (Float)(srcBmp->height) )));
HXLINE( 363)		Float _hx_tmp2 = dstRect->get_left();
HXDLIN( 363)		mat->translate(_hx_tmp2,dstRect->get_top());
HXLINE( 365)		graphics->lineStyle(0,0,0,null(),null(),null(),null(),null());
HXLINE( 366)		graphics->beginBitmapFill(srcBmp,mat,false,false);
HXLINE( 367)		graphics->drawRect(dstRect->x,dstRect->y,dstRect->width,dstRect->height);
HXLINE( 368)		graphics->endFill();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(OpenFLStyleHelper_obj,paintBitmap,(void))

::Array< ::Dynamic> OpenFLStyleHelper_obj::convertToOpenFLRectArr(::Array< ::Dynamic> arr){
            	HX_STACKFRAME(&_hx_pos_ecceac342b7f1e2d_372_convertToOpenFLRectArr)
HXLINE( 373)		::Array< ::Dynamic> r = ::Array_obj< ::Dynamic>::__new();
HXLINE( 374)		{
HXLINE( 374)			int _g = 0;
HXDLIN( 374)			while((_g < arr->length)){
HXLINE( 374)				 ::haxe::ui::geom::Rectangle a = arr->__get(_g).StaticCast<  ::haxe::ui::geom::Rectangle >();
HXDLIN( 374)				_g = (_g + 1);
HXLINE( 375)				r->push(::haxe::ui::backend::openfl::OpenFLStyleHelper_obj::convertToOpenFLRect(a));
            			}
            		}
HXLINE( 377)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFLStyleHelper_obj,convertToOpenFLRectArr,return )

 ::openfl::geom::Rectangle OpenFLStyleHelper_obj::convertToOpenFLRect( ::haxe::ui::geom::Rectangle rc){
            	HX_GC_STACKFRAME(&_hx_pos_ecceac342b7f1e2d_381_convertToOpenFLRect)
HXDLIN( 381)		return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,rc->left,rc->top,rc->width,rc->height);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFLStyleHelper_obj,convertToOpenFLRect,return )

 ::haxe::ui::geom::Rectangle OpenFLStyleHelper_obj::convertToHaxeUIRect( ::openfl::geom::Rectangle rc){
            	HX_GC_STACKFRAME(&_hx_pos_ecceac342b7f1e2d_385_convertToHaxeUIRect)
HXDLIN( 385)		return  ::haxe::ui::geom::Rectangle_obj::__alloc( HX_CTX ,rc->x,rc->y,rc->width,rc->height);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OpenFLStyleHelper_obj,convertToHaxeUIRect,return )


OpenFLStyleHelper_obj::OpenFLStyleHelper_obj()
{
}

bool OpenFLStyleHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"paintBitmap") ) { outValue = paintBitmap_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"paintStyleSection") ) { outValue = paintStyleSection_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"convertToOpenFLRect") ) { outValue = convertToOpenFLRect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"convertToHaxeUIRect") ) { outValue = convertToHaxeUIRect_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"paintBitmapBackground") ) { outValue = paintBitmapBackground_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"convertToOpenFLRectArr") ) { outValue = convertToOpenFLRectArr_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OpenFLStyleHelper_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OpenFLStyleHelper_obj_sStaticStorageInfo = 0;
#endif

::hx::Class OpenFLStyleHelper_obj::__mClass;

static ::String OpenFLStyleHelper_obj_sStaticFields[] = {
	HX_("paintStyleSection",72,f9,c6,73),
	HX_("paintBitmapBackground",7b,b8,ac,9d),
	HX_("paintBitmap",2d,c6,91,53),
	HX_("convertToOpenFLRectArr",bf,b6,c1,d2),
	HX_("convertToOpenFLRect",c2,e4,f1,8e),
	HX_("convertToHaxeUIRect",2c,6e,67,fe),
	::String(null())
};

void OpenFLStyleHelper_obj::__register()
{
	OpenFLStyleHelper_obj _hx_dummy;
	OpenFLStyleHelper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.openfl.OpenFLStyleHelper",fd,ad,f0,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OpenFLStyleHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OpenFLStyleHelper_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OpenFLStyleHelper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OpenFLStyleHelper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OpenFLStyleHelper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
} // end namespace openfl
