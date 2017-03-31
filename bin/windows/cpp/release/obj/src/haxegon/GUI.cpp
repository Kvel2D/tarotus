// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxegon_Col
#include <haxegon/Col.h>
#endif
#ifndef INCLUDED_haxegon_GUI
#include <haxegon/GUI.h>
#endif
#ifndef INCLUDED_haxegon_Gfx
#include <haxegon/Gfx.h>
#endif
#ifndef INCLUDED_haxegon_MathExtensions
#include <haxegon/MathExtensions.h>
#endif
#ifndef INCLUDED_haxegon_Mouse
#include <haxegon/Mouse.h>
#endif
#ifndef INCLUDED_haxegon_Text
#include <haxegon/Text.h>
#endif

namespace haxegon{

void GUI_obj::__construct(){
            	HX_STACK_FRAME("haxegon.GUI","new",0xbcfee73f,"haxegon.GUI.new","haxegon/GUI.hx",143,0xbd5f7bd2)
            	HX_STACK_THIS(this)
            	}

Dynamic GUI_obj::__CreateEmpty() { return new GUI_obj; }

hx::ObjectPtr< GUI_obj > GUI_obj::__new()
{
	hx::ObjectPtr< GUI_obj > _hx_result = new GUI_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic GUI_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GUI_obj > _hx_result = new GUI_obj();
	_hx_result->__construct();
	return _hx_result;
}

Float GUI_obj::x;

Float GUI_obj::y;

 ::Dynamic GUI_obj::slider_cache;

Int GUI_obj::button_off_color;

Int GUI_obj::button_on_color;

Int GUI_obj::button_text_color;

Int GUI_obj::slider_background_color;

Int GUI_obj::slider_handle_color;

Int GUI_obj::slider_text_color;

void GUI_obj::set_pallete(Int passive,Int active,Int text){
            	HX_STACK_FRAME("haxegon.GUI","set_pallete",0x605ba407,"haxegon.GUI.set_pallete","haxegon/GUI.hx",20,0xbd5f7bd2)
            	HX_STACK_ARG(passive,"passive")
            	HX_STACK_ARG(active,"active")
            	HX_STACK_ARG(text,"text")
HXLINE(  21)		::haxegon::GUI_obj::button_off_color = passive;
HXLINE(  22)		::haxegon::GUI_obj::slider_background_color = passive;
HXLINE(  24)		::haxegon::GUI_obj::button_on_color = active;
HXLINE(  25)		::haxegon::GUI_obj::slider_handle_color = active;
HXLINE(  27)		::haxegon::GUI_obj::button_text_color = text;
HXLINE(  28)		::haxegon::GUI_obj::slider_text_color = text;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GUI_obj,set_pallete,(void))

void GUI_obj::image_button(Float x,Float y,::String image, ::Dynamic button_function){
            	HX_STACK_FRAME("haxegon.GUI","image_button",0x27ef5ad7,"haxegon.GUI.image_button","haxegon/GUI.hx",31,0xbd5f7bd2)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(image,"image")
            	HX_STACK_ARG(button_function,"button_function")
HXLINE(  32)		HX_VARI( Int,image_width) = ::haxegon::Gfx_obj::image_width(image);
HXLINE(  33)		HX_VARI( Int,image_height) = ::haxegon::Gfx_obj::image_height(image);
HXLINE(  34)		HX_VARI( Float,button_width) = (image_width * ((Float)1.1));
HXLINE(  35)		HX_VARI( Float,button_height) = (image_height * ((Float)1.1));
HXLINE(  37)		Bool _hx_tmp;
HXDLIN(  37)		if (::haxegon::Mouse_obj::left_click()) {
HXLINE(  37)			_hx_tmp = ::haxegon::MathExtensions_obj::point_box_intersect(hx::ClassOf< ::Math >(),::haxegon::Mouse_obj::x,::haxegon::Mouse_obj::y,x,y,button_width,button_height);
            		}
            		else {
HXLINE(  37)			_hx_tmp = false;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  38)			button_function();
            		}
HXLINE(  40)		::haxegon::Gfx_obj::draw_image(x,y,image);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GUI_obj,image_button,(void))

void GUI_obj::auto_text_button(::String text, ::Dynamic button_function,hx::Null< Int >  __o_skips){
Int skips = __o_skips.Default(0);
            	HX_STACK_FRAME("haxegon.GUI","auto_text_button",0xb06a8835,"haxegon.GUI.auto_text_button","haxegon/GUI.hx",43,0xbd5f7bd2)
            	HX_STACK_ARG(text,"text")
            	HX_STACK_ARG(button_function,"button_function")
            	HX_STACK_ARG(skips,"skips")
HXLINE(  44)		HX_VARI( Float,text_height) = ::haxegon::Text_obj::height();
HXLINE(  45)		HX_VARI( Float,button_height) = (text_height * ((Float)1.25));
HXLINE(  46)		hx::AddEq(::haxegon::GUI_obj::y,((button_height + (int)2) * skips));
HXLINE(  48)		::haxegon::GUI_obj::text_button(::haxegon::GUI_obj::x,::haxegon::GUI_obj::y,text,button_function);
HXLINE(  50)		hx::AddEq(::haxegon::GUI_obj::y,(button_height + (int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GUI_obj,auto_text_button,(void))

void GUI_obj::text_button(Float button_x,Float button_y,::String text, ::Dynamic button_function){
            	HX_STACK_FRAME("haxegon.GUI","text_button",0xb581d463,"haxegon.GUI.text_button","haxegon/GUI.hx",53,0xbd5f7bd2)
            	HX_STACK_ARG(button_x,"button_x")
            	HX_STACK_ARG(button_y,"button_y")
            	HX_STACK_ARG(text,"text")
            	HX_STACK_ARG(button_function,"button_function")
HXLINE(  54)		HX_VARI( Float,text_width) = ::haxegon::Text_obj::width(text);
HXLINE(  55)		HX_VARI( Float,text_height) = ::haxegon::Text_obj::height();
HXLINE(  56)		HX_VARI( Float,button_width) = (text_width * ((Float)1.1));
HXLINE(  57)		HX_VARI( Float,button_height) = (text_height * ((Float)1.25));
HXLINE(  59)		Bool _hx_tmp = ::haxegon::MathExtensions_obj::point_box_intersect(hx::ClassOf< ::Math >(),::haxegon::Mouse_obj::x,::haxegon::Mouse_obj::y,button_x,button_y,button_width,button_height);
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  60)			::haxegon::Gfx_obj::fill_box(button_x,button_y,button_width,button_height,::haxegon::GUI_obj::button_on_color,null());
HXLINE(  61)			if (::haxegon::Mouse_obj::left_click()) {
HXLINE(  62)				button_function();
            			}
            		}
            		else {
HXLINE(  65)			::haxegon::Gfx_obj::fill_box(button_x,button_y,button_width,button_height,::haxegon::GUI_obj::button_off_color,null());
            		}
HXLINE(  67)		::haxegon::Text_obj::display(button_x,button_y,text,::haxegon::GUI_obj::button_text_color);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GUI_obj,text_button,(void))

void GUI_obj::auto_slider(::String text, ::Dynamic set_function,Float current,Float min,Float max,Float handle_width,Float area_width,hx::Null< Int >  __o_skips){
Int skips = __o_skips.Default(0);
            	HX_STACK_FRAME("haxegon.GUI","auto_slider",0x5609e210,"haxegon.GUI.auto_slider","haxegon/GUI.hx",71,0xbd5f7bd2)
            	HX_STACK_ARG(text,"text")
            	HX_STACK_ARG(set_function,"set_function")
            	HX_STACK_ARG(current,"current")
            	HX_STACK_ARG(min,"min")
            	HX_STACK_ARG(max,"max")
            	HX_STACK_ARG(handle_width,"handle_width")
            	HX_STACK_ARG(area_width,"area_width")
            	HX_STACK_ARG(skips,"skips")
HXLINE(  72)		::haxegon::Text_obj::width(text);
HXLINE(  73)		HX_VARI( Float,text_height) = ::haxegon::Text_obj::height();
HXLINE(  74)		HX_VARI( Float,height) = (text_height * ((Float)1.25));
HXLINE(  75)		hx::AddEq(::haxegon::GUI_obj::y,((height + (int)2) * skips));
HXLINE(  77)		::haxegon::GUI_obj::slider(::haxegon::GUI_obj::x,::haxegon::GUI_obj::y,text,set_function,current,min,max,handle_width,area_width,null());
HXLINE(  79)		hx::AddEq(::haxegon::GUI_obj::y,(height + (int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(GUI_obj,auto_slider,(void))

void GUI_obj::slider(Float slider_x,Float slider_y,::String text, ::Dynamic set_function,Float current,Float min,Float max,Float handle_width,Float area_width,hx::Null< Int >  __o_skips){
Int skips = __o_skips.Default(0);
            	HX_STACK_FRAME("haxegon.GUI","slider",0xce5204a2,"haxegon.GUI.slider","haxegon/GUI.hx",84,0xbd5f7bd2)
            	HX_STACK_ARG(slider_x,"slider_x")
            	HX_STACK_ARG(slider_y,"slider_y")
            	HX_STACK_ARG(text,"text")
            	HX_STACK_ARG(set_function,"set_function")
            	HX_STACK_ARG(current,"current")
            	HX_STACK_ARG(min,"min")
            	HX_STACK_ARG(max,"max")
            	HX_STACK_ARG(handle_width,"handle_width")
            	HX_STACK_ARG(area_width,"area_width")
            	HX_STACK_ARG(skips,"skips")
HXLINE(  85)		HX_VARI( Float,text_width) = ::haxegon::Text_obj::width(text);
HXLINE(  86)		HX_VARI( Float,text_height) = ::haxegon::Text_obj::height();
HXLINE(  87)		HX_VARI( Float,height) = (text_height * ((Float)1.25));
HXLINE(  90)		::haxegon::Gfx_obj::fill_box(slider_x,slider_y,(area_width + (text_width * ((Float)1.2))),height,::haxegon::GUI_obj::slider_background_color,null());
HXLINE(  91)		::haxegon::Gfx_obj::fill_box((slider_x + ((Float)(area_width * (current - min)) / (Float)(max - min))),(slider_y + (height * ((Float)0.05))),handle_width,(height * ((Float)0.9)),::haxegon::GUI_obj::slider_handle_color,null());
HXLINE(  93)		HX_VARI( ::String,hash) = (((((HX_("",00,00,00,00) + text) + HX_("_",5f,00,00,00)) + slider_x) + HX_("_",5f,00,00,00)) + slider_y);
HXLINE(  94)		if ((( (::String)(::haxegon::GUI_obj::slider_cache->__Field(HX_("hash",ce,2f,08,45),hx::paccDynamic)) ) == hash)) {
HXLINE(  95)			Bool _hx_tmp;
HXDLIN(  95)			if (( (Bool)(::haxegon::GUI_obj::slider_cache->__Field(HX_("dragged",12,45,53,f1),hx::paccDynamic)) )) {
HXLINE(  95)				_hx_tmp = ::haxegon::Mouse_obj::left_held();
            			}
            			else {
HXLINE(  95)				_hx_tmp = false;
            			}
HXDLIN(  95)			if (_hx_tmp) {
HXLINE(  96)				HX_VARI( Float,value) = current;
HXLINE(  97)				if ((::haxegon::Mouse_obj::x < slider_x)) {
HXLINE(  98)					value = min;
            				}
            				else {
HXLINE(  99)					if ((::haxegon::Mouse_obj::x > (slider_x + area_width))) {
HXLINE( 100)						value = max;
            					}
            					else {
HXLINE( 102)						value = ((((Float)(::haxegon::Mouse_obj::x - slider_x) / (Float)area_width) * (max - min)) + min);
            					}
            				}
HXLINE( 104)				set_function(value);
            			}
            			else {
HXLINE( 106)				::haxegon::GUI_obj::slider_cache->__SetField(HX_("hash",ce,2f,08,45),HX_("",00,00,00,00),hx::paccDynamic);
            			}
            		}
            		else {
HXLINE( 109)			Bool _hx_tmp1;
HXDLIN( 109)			if (::haxegon::Mouse_obj::left_click()) {
HXLINE( 109)				_hx_tmp1 = ::haxegon::MathExtensions_obj::point_box_intersect(hx::ClassOf< ::Math >(),::haxegon::Mouse_obj::x,::haxegon::Mouse_obj::y,(slider_x - (area_width * ((Float)0.1))),(::haxegon::GUI_obj::y - (height * ((Float)0.5))),(area_width * ((Float)1.2)),(height * ((Float)1.1)));
            			}
            			else {
HXLINE( 109)				_hx_tmp1 = false;
            			}
HXDLIN( 109)			if (_hx_tmp1) {
HXLINE( 110)				::haxegon::GUI_obj::slider_cache->__SetField(HX_("hash",ce,2f,08,45),hash,hx::paccDynamic);
HXLINE( 111)				::haxegon::GUI_obj::slider_cache->__SetField(HX_("dragged",12,45,53,f1),true,hx::paccDynamic);
            			}
            		}
HXLINE( 115)		HX_VARI( ::String,value_string) = ::haxegon::MathExtensions_obj::fixed_float(hx::ClassOf< ::Math >(),current,(int)3);
HXLINE( 116)		Float _hx_tmp2 = (slider_x + ((Float)area_width / (Float)(int)2));
HXDLIN( 116)		Float _hx_tmp3 = ::haxegon::Text_obj::width(value_string);
HXDLIN( 116)		::haxegon::Text_obj::display((_hx_tmp2 - ((Float)_hx_tmp3 / (Float)(int)2)),::haxegon::GUI_obj::y,value_string,::haxegon::Col_obj::WHITE);
HXLINE( 117)		::haxegon::Text_obj::display(((slider_x + area_width) + handle_width),::haxegon::GUI_obj::y,text,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(GUI_obj,slider,(void))

void GUI_obj::enum_setter(Float setter_x,Float setter_y, ::Dynamic set_function, ::Dynamic current, ::Dynamic enum_type){
            	HX_STACK_FRAME("haxegon.GUI","enum_setter",0x778a3a1c,"haxegon.GUI.enum_setter","haxegon/GUI.hx",120,0xbd5f7bd2)
            	HX_STACK_ARG(setter_x,"setter_x")
            	HX_STACK_ARG(setter_y,"setter_y")
            	HX_STACK_ARG(set_function,"set_function")
            	HX_STACK_ARG(current,"current")
            	HX_STACK_ARG(enum_type,"enum_type")
HXLINE( 121)		HX_VARI( Float,temp_x) = ::haxegon::GUI_obj::x;
HXLINE( 122)		HX_VARI( Float,temp_y) = ::haxegon::GUI_obj::y;
HXLINE( 123)		HX_VARI( Int,temp_color) = ::haxegon::Col_obj::WHITE;
HXLINE( 124)		::haxegon::GUI_obj::x = setter_x;
HXLINE( 125)		::haxegon::GUI_obj::y = setter_y;
HXLINE( 127)		HX_VARI( ::Array< ::String >,enums) = ::Type_obj::allEnums(enum_type);
HXLINE( 128)		{
HXLINE( 128)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 128)			HX_VARI( Int,_g) = enums->length;
HXDLIN( 128)			while((_g1 < _g)){
            				HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0, ::Dynamic,set_function, ::Dynamic,enum_type,Int,i) HXARGC(0)
            				void _hx_run(){
            					HX_STACK_FRAME("haxegon.GUI","enum_setter",0x778a3a1c,"haxegon.GUI.enum_setter","haxegon/GUI.hx",133,0xbd5f7bd2)
HXLINE( 133)					::cpp::VirtualArray _hx_tmp2 = ::Type_obj::allEnums(enum_type);
HXDLIN( 133)					 ::Dynamic _hx_tmp3 = _hx_tmp2->__get(i);
HXDLIN( 133)					set_function(_hx_tmp3);
            				}
            				HX_END_LOCAL_FUNC0((void))

HXLINE( 128)				HX_VARI( Int,i) = _g1++;
HXLINE( 129)				Bool _hx_tmp = hx::IsEq( enums->__get(i),current );
HXDLIN( 129)				if (_hx_tmp) {
HXLINE( 130)					temp_color = ::haxegon::GUI_obj::button_off_color;
HXLINE( 131)					::haxegon::GUI_obj::button_off_color = ::haxegon::Col_obj::GREEN;
            				}
HXLINE( 133)				::String _hx_tmp1 = (HX_("",00,00,00,00) + enums->__get(i));
HXDLIN( 133)				::haxegon::GUI_obj::auto_text_button(_hx_tmp1, ::Dynamic(new _hx_Closure_0(set_function,enum_type,i)),null());
HXLINE( 134)				Bool _hx_tmp4 = hx::IsEq( enums->__get(i),current );
HXDLIN( 134)				if (_hx_tmp4) {
HXLINE( 135)					::haxegon::GUI_obj::button_off_color = temp_color;
            				}
            			}
            		}
HXLINE( 139)		::haxegon::GUI_obj::x = temp_x;
HXLINE( 140)		::haxegon::GUI_obj::y = temp_y;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(GUI_obj,enum_setter,(void))


GUI_obj::GUI_obj()
{
}

bool GUI_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { outValue = x; return true; }
		if (HX_FIELD_EQ(inName,"y") ) { outValue = y; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"slider") ) { outValue = slider_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_pallete") ) { outValue = set_pallete_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"text_button") ) { outValue = text_button_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"auto_slider") ) { outValue = auto_slider_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"enum_setter") ) { outValue = enum_setter_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"slider_cache") ) { outValue = slider_cache; return true; }
		if (HX_FIELD_EQ(inName,"image_button") ) { outValue = image_button_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"button_on_color") ) { outValue = button_on_color; return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"button_off_color") ) { outValue = button_off_color; return true; }
		if (HX_FIELD_EQ(inName,"auto_text_button") ) { outValue = auto_text_button_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"button_text_color") ) { outValue = button_text_color; return true; }
		if (HX_FIELD_EQ(inName,"slider_text_color") ) { outValue = slider_text_color; return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"slider_handle_color") ) { outValue = slider_handle_color; return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"slider_background_color") ) { outValue = slider_background_color; return true; }
	}
	return false;
}

bool GUI_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"y") ) { y=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"slider_cache") ) { slider_cache=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"button_on_color") ) { button_on_color=ioValue.Cast< Int >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"button_off_color") ) { button_off_color=ioValue.Cast< Int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"button_text_color") ) { button_text_color=ioValue.Cast< Int >(); return true; }
		if (HX_FIELD_EQ(inName,"slider_text_color") ) { slider_text_color=ioValue.Cast< Int >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"slider_handle_color") ) { slider_handle_color=ioValue.Cast< Int >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"slider_background_color") ) { slider_background_color=ioValue.Cast< Int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GUI_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GUI_obj_sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &GUI_obj::x,HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(void *) &GUI_obj::y,HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GUI_obj::slider_cache,HX_HCSTRING("slider_cache","\x64","\x76","\x1d","\x7e")},
	{hx::fsInt,(void *) &GUI_obj::button_off_color,HX_HCSTRING("button_off_color","\x86","\x89","\xfe","\x7e")},
	{hx::fsInt,(void *) &GUI_obj::button_on_color,HX_HCSTRING("button_on_color","\x30","\x02","\xe3","\x20")},
	{hx::fsInt,(void *) &GUI_obj::button_text_color,HX_HCSTRING("button_text_color","\x7e","\x71","\xc8","\x7c")},
	{hx::fsInt,(void *) &GUI_obj::slider_background_color,HX_HCSTRING("slider_background_color","\x30","\x26","\xdf","\x69")},
	{hx::fsInt,(void *) &GUI_obj::slider_handle_color,HX_HCSTRING("slider_handle_color","\x6a","\x36","\x99","\x46")},
	{hx::fsInt,(void *) &GUI_obj::slider_text_color,HX_HCSTRING("slider_text_color","\xaf","\xad","\x1b","\xea")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GUI_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GUI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GUI_obj::x,"x");
	HX_MARK_MEMBER_NAME(GUI_obj::y,"y");
	HX_MARK_MEMBER_NAME(GUI_obj::slider_cache,"slider_cache");
	HX_MARK_MEMBER_NAME(GUI_obj::button_off_color,"button_off_color");
	HX_MARK_MEMBER_NAME(GUI_obj::button_on_color,"button_on_color");
	HX_MARK_MEMBER_NAME(GUI_obj::button_text_color,"button_text_color");
	HX_MARK_MEMBER_NAME(GUI_obj::slider_background_color,"slider_background_color");
	HX_MARK_MEMBER_NAME(GUI_obj::slider_handle_color,"slider_handle_color");
	HX_MARK_MEMBER_NAME(GUI_obj::slider_text_color,"slider_text_color");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GUI_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GUI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GUI_obj::x,"x");
	HX_VISIT_MEMBER_NAME(GUI_obj::y,"y");
	HX_VISIT_MEMBER_NAME(GUI_obj::slider_cache,"slider_cache");
	HX_VISIT_MEMBER_NAME(GUI_obj::button_off_color,"button_off_color");
	HX_VISIT_MEMBER_NAME(GUI_obj::button_on_color,"button_on_color");
	HX_VISIT_MEMBER_NAME(GUI_obj::button_text_color,"button_text_color");
	HX_VISIT_MEMBER_NAME(GUI_obj::slider_background_color,"slider_background_color");
	HX_VISIT_MEMBER_NAME(GUI_obj::slider_handle_color,"slider_handle_color");
	HX_VISIT_MEMBER_NAME(GUI_obj::slider_text_color,"slider_text_color");
};

#endif

hx::Class GUI_obj::__mClass;

static ::String GUI_obj_sStaticFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("slider_cache","\x64","\x76","\x1d","\x7e"),
	HX_HCSTRING("button_off_color","\x86","\x89","\xfe","\x7e"),
	HX_HCSTRING("button_on_color","\x30","\x02","\xe3","\x20"),
	HX_HCSTRING("button_text_color","\x7e","\x71","\xc8","\x7c"),
	HX_HCSTRING("slider_background_color","\x30","\x26","\xdf","\x69"),
	HX_HCSTRING("slider_handle_color","\x6a","\x36","\x99","\x46"),
	HX_HCSTRING("slider_text_color","\xaf","\xad","\x1b","\xea"),
	HX_HCSTRING("set_pallete","\x28","\x16","\x60","\x01"),
	HX_HCSTRING("image_button","\x96","\xc5","\xce","\x6a"),
	HX_HCSTRING("auto_text_button","\x74","\xbe","\xcf","\xc1"),
	HX_HCSTRING("text_button","\x84","\x46","\x86","\x56"),
	HX_HCSTRING("auto_slider","\x31","\x54","\x0e","\xf7"),
	HX_HCSTRING("slider","\x21","\xc6","\x04","\x70"),
	HX_HCSTRING("enum_setter","\x3d","\xac","\x8e","\x18"),
	::String(null())
};

void GUI_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.GUI","\xcd","\xdb","\x14","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GUI_obj::__GetStatic;
	__mClass->mSetStaticField = &GUI_obj::__SetStatic;
	__mClass->mMarkFunc = GUI_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GUI_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GUI_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GUI_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GUI_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GUI_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GUI_obj::__boot()
{
{
            	HX_STACK_FRAME("haxegon.GUI","boot",0x9a247073,"haxegon.GUI.boot","haxegon/GUI.hx",8,0xbd5f7bd2)
HXLINE(   8)		x = ((Float)0);
            	}
{
            	HX_STACK_FRAME("haxegon.GUI","boot",0x9a247073,"haxegon.GUI.boot","haxegon/GUI.hx",9,0xbd5f7bd2)
HXLINE(   9)		y = ((Float)0);
            	}
{
            	HX_STACK_FRAME("haxegon.GUI","boot",0x9a247073,"haxegon.GUI.boot","haxegon/GUI.hx",10,0xbd5f7bd2)
HXLINE(  10)		slider_cache =  ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("dragged",12,45,53,f1),false)
            			->setFixed(1,HX_("hash",ce,2f,08,45),HX_("",00,00,00,00)));
            	}
{
            	HX_STACK_FRAME("haxegon.GUI","boot",0x9a247073,"haxegon.GUI.boot","haxegon/GUI.hx",12,0xbd5f7bd2)
HXLINE(  12)		button_off_color = ::haxegon::Col_obj::GRAY;
            	}
{
            	HX_STACK_FRAME("haxegon.GUI","boot",0x9a247073,"haxegon.GUI.boot","haxegon/GUI.hx",13,0xbd5f7bd2)
HXLINE(  13)		button_on_color = ::haxegon::Col_obj::PINK;
            	}
{
            	HX_STACK_FRAME("haxegon.GUI","boot",0x9a247073,"haxegon.GUI.boot","haxegon/GUI.hx",14,0xbd5f7bd2)
HXLINE(  14)		button_text_color = ::haxegon::Col_obj::WHITE;
            	}
{
            	HX_STACK_FRAME("haxegon.GUI","boot",0x9a247073,"haxegon.GUI.boot","haxegon/GUI.hx",15,0xbd5f7bd2)
HXLINE(  15)		slider_background_color = ::haxegon::Col_obj::GRAY;
            	}
{
            	HX_STACK_FRAME("haxegon.GUI","boot",0x9a247073,"haxegon.GUI.boot","haxegon/GUI.hx",16,0xbd5f7bd2)
HXLINE(  16)		slider_handle_color = ::haxegon::Col_obj::PINK;
            	}
{
            	HX_STACK_FRAME("haxegon.GUI","boot",0x9a247073,"haxegon.GUI.boot","haxegon/GUI.hx",17,0xbd5f7bd2)
HXLINE(  17)		slider_text_color = ::haxegon::Col_obj::WHITE;
            	}
}

} // end namespace haxegon
