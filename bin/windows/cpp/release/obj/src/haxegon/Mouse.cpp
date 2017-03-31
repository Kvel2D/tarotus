// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxegon_Input
#include <haxegon/Input.h>
#endif
#ifndef INCLUDED_haxegon_Key
#include <haxegon/Key.h>
#endif
#ifndef INCLUDED_haxegon_Mouse
#include <haxegon/Mouse.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_ui_Mouse
#include <openfl/ui/Mouse.h>
#endif

namespace haxegon{

void Mouse_obj::__construct() { }

Dynamic Mouse_obj::__CreateEmpty() { return new Mouse_obj; }

hx::ObjectPtr< Mouse_obj > Mouse_obj::__new()
{
	hx::ObjectPtr< Mouse_obj > _hx_result = new Mouse_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Mouse_obj > _hx_result = new Mouse_obj();
	_hx_result->__construct();
	return _hx_result;
}

Bool Mouse_obj::flash_menu_on;

Int Mouse_obj::x;

Int Mouse_obj::y;

Int Mouse_obj::mousewheel;

Bool Mouse_obj::mouseoffstage;

Bool Mouse_obj::isdragging;

Int Mouse_obj::_current;

Int Mouse_obj::_last;

Int Mouse_obj::_middlecurrent;

Int Mouse_obj::_middlelast;

Int Mouse_obj::_rightcurrent;

Int Mouse_obj::_rightlast;

Bool Mouse_obj::left_held(){
            	HX_STACK_FRAME("haxegon.Mouse","left_held",0x371a89f6,"haxegon.Mouse.left_held","haxegon/Mouse.hx",30,0x5196c828)
HXLINE(  30)		return (::haxegon::Mouse_obj::_current > (int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,left_held,return )

Bool Mouse_obj::left_click(){
            	HX_STACK_FRAME("haxegon.Mouse","left_click",0x23bb7de7,"haxegon.Mouse.left_click","haxegon/Mouse.hx",31,0x5196c828)
HXLINE(  31)		return (::haxegon::Mouse_obj::_current == (int)2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,left_click,return )

Bool Mouse_obj::left_released(){
            	HX_STACK_FRAME("haxegon.Mouse","left_released",0x65fa147e,"haxegon.Mouse.left_released","haxegon/Mouse.hx",32,0x5196c828)
HXLINE(  32)		return (::haxegon::Mouse_obj::_current == (int)-1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,left_released,return )

Bool Mouse_obj::right_held(){
            	HX_STACK_FRAME("haxegon.Mouse","right_held",0x4cad384f,"haxegon.Mouse.right_held","haxegon/Mouse.hx",34,0x5196c828)
HXLINE(  34)		return (::haxegon::Mouse_obj::_rightcurrent > (int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,right_held,return )

Bool Mouse_obj::right_click(){
            	HX_STACK_FRAME("haxegon.Mouse","right_click",0xee815d6e,"haxegon.Mouse.right_click","haxegon/Mouse.hx",35,0x5196c828)
HXLINE(  35)		return (::haxegon::Mouse_obj::_rightcurrent == (int)2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,right_click,return )

Bool Mouse_obj::right_released(){
            	HX_STACK_FRAME("haxegon.Mouse","right_released",0xa4256357,"haxegon.Mouse.right_released","haxegon/Mouse.hx",36,0x5196c828)
HXLINE(  36)		return (::haxegon::Mouse_obj::_rightcurrent == (int)-1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,right_released,return )

Bool Mouse_obj::middle_held(){
            	HX_STACK_FRAME("haxegon.Mouse","middle_held",0xd5c18828,"haxegon.Mouse.middle_held","haxegon/Mouse.hx",38,0x5196c828)
HXLINE(  38)		return (::haxegon::Mouse_obj::_middlecurrent > (int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,middle_held,return )

Bool Mouse_obj::middle_click(){
            	HX_STACK_FRAME("haxegon.Mouse","middle_click",0x5732eb75,"haxegon.Mouse.middle_click","haxegon/Mouse.hx",39,0x5196c828)
HXLINE(  39)		return (::haxegon::Mouse_obj::_middlecurrent == (int)2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,middle_click,return )

Bool Mouse_obj::middle_released(){
            	HX_STACK_FRAME("haxegon.Mouse","middle_released",0xe10113b0,"haxegon.Mouse.middle_released","haxegon/Mouse.hx",40,0x5196c828)
HXLINE(  40)		return (::haxegon::Mouse_obj::_middlecurrent == (int)-1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,middle_released,return )

void Mouse_obj::init( ::openfl::display::DisplayObject stage){
            	HX_STACK_FRAME("haxegon.Mouse","init",0x7abab2e7,"haxegon.Mouse.init","haxegon/Mouse.hx",42,0x5196c828)
            	HX_STACK_ARG(stage,"stage")
HXLINE(  49)		Bool _hx_tmp = !(::haxegon::Mouse_obj::flash_menu_on);
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  50)			stage->addEventListener(HX_("rightMouseDown",ab,29,d7,cd),::haxegon::Mouse_obj::right_down_dyn(),null(),null(),null());
HXLINE(  51)			stage->addEventListener(HX_("rightMouseUp",64,83,21,ab),::haxegon::Mouse_obj::right_up_dyn(),null(),null(),null());
            		}
HXLINE(  53)		stage->addEventListener(HX_("mouseDown",27,b1,c2,ee),::haxegon::Mouse_obj::mouse_down_dyn(),null(),null(),null());
HXLINE(  54)		stage->addEventListener(HX_("mouseUp",e0,f3,72,c0),::haxegon::Mouse_obj::mouse_up_dyn(),null(),null(),null());
HXLINE(  55)		stage->addEventListener(HX_("middleMouseDown",12,2b,fe,01),::haxegon::Mouse_obj::middle_down_dyn(),null(),null(),null());
HXLINE(  56)		stage->addEventListener(HX_("middleMouseUp",0b,8d,f5,3a),::haxegon::Mouse_obj::middle_up_dyn(),null(),null(),null());
HXLINE(  57)		stage->addEventListener(HX_("mouseWheel",36,28,87,e7),::haxegon::Mouse_obj::mousewheel_handler_dyn(),null(),null(),null());
HXLINE(  58)		stage->addEventListener(HX_("mouseMove",d6,9b,b5,f4),::haxegon::Mouse_obj::mouse_over_dyn(),null(),null(),null());
HXLINE(  59)		stage->addEventListener(HX_("mouseLeave",92,28,20,90),::haxegon::Mouse_obj::mouse_leave_dyn(),null(),null(),null());
HXLINE(  60)		::haxegon::Mouse_obj::x = (int)0;
HXLINE(  61)		::haxegon::Mouse_obj::y = (int)0;
HXLINE(  62)		::haxegon::Mouse_obj::_rightcurrent = (int)0;
HXLINE(  63)		::haxegon::Mouse_obj::_rightlast = (int)0;
HXLINE(  64)		::haxegon::Mouse_obj::_middlecurrent = (int)0;
HXLINE(  65)		::haxegon::Mouse_obj::_middlelast = (int)0;
HXLINE(  66)		::haxegon::Mouse_obj::_current = (int)0;
HXLINE(  67)		::haxegon::Mouse_obj::_last = (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,init,(void))

void Mouse_obj::unload( ::openfl::display::DisplayObject stage){
            	HX_STACK_FRAME("haxegon.Mouse","unload",0x733afc96,"haxegon.Mouse.unload","haxegon/Mouse.hx",70,0x5196c828)
            	HX_STACK_ARG(stage,"stage")
HXLINE(  71)		Bool _hx_tmp = !(::haxegon::Mouse_obj::flash_menu_on);
HXDLIN(  71)		if (_hx_tmp) {
HXLINE(  72)			stage->removeEventListener(HX_("rightMouseDown",ab,29,d7,cd),::haxegon::Mouse_obj::right_down_dyn(),null());
HXLINE(  73)			stage->removeEventListener(HX_("rightMouseUp",64,83,21,ab),::haxegon::Mouse_obj::right_up_dyn(),null());
            		}
HXLINE(  75)		stage->removeEventListener(HX_("mouseDown",27,b1,c2,ee),::haxegon::Mouse_obj::mouse_down_dyn(),null());
HXLINE(  76)		stage->removeEventListener(HX_("mouseUp",e0,f3,72,c0),::haxegon::Mouse_obj::mouse_up_dyn(),null());
HXLINE(  77)		stage->removeEventListener(HX_("middleMouseDown",12,2b,fe,01),::haxegon::Mouse_obj::middle_down_dyn(),null());
HXLINE(  78)		stage->removeEventListener(HX_("middleMouseUp",0b,8d,f5,3a),::haxegon::Mouse_obj::middle_up_dyn(),null());
HXLINE(  79)		stage->removeEventListener(HX_("mouseWheel",36,28,87,e7),::haxegon::Mouse_obj::mousewheel_handler_dyn(),null());
HXLINE(  80)		stage->removeEventListener(HX_("mouseMove",d6,9b,b5,f4),::haxegon::Mouse_obj::mouse_over_dyn(),null());
HXLINE(  81)		stage->removeEventListener(HX_("mouseLeave",92,28,20,90),::haxegon::Mouse_obj::mouse_leave_dyn(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,unload,(void))

void Mouse_obj::mouse_leave( ::openfl::events::Event e){
            	HX_STACK_FRAME("haxegon.Mouse","mouse_leave",0xa4797d26,"haxegon.Mouse.mouse_leave","haxegon/Mouse.hx",84,0x5196c828)
            	HX_STACK_ARG(e,"e")
HXLINE(  85)		::haxegon::Mouse_obj::mouseoffstage = true;
HXLINE(  86)		::haxegon::Mouse_obj::_current = (int)0;
HXLINE(  87)		::haxegon::Mouse_obj::_last = (int)0;
HXLINE(  88)		::haxegon::Mouse_obj::isdragging = false;
HXLINE(  89)		::haxegon::Mouse_obj::_rightcurrent = (int)0;
HXLINE(  90)		::haxegon::Mouse_obj::_rightlast = (int)0;
HXLINE(  91)		::haxegon::Mouse_obj::_middlecurrent = (int)0;
HXLINE(  92)		::haxegon::Mouse_obj::_middlelast = (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,mouse_leave,(void))

void Mouse_obj::mouse_over( ::openfl::events::MouseEvent e){
            	HX_STACK_FRAME("haxegon.Mouse","mouse_over",0x6c62a405,"haxegon.Mouse.mouse_over","haxegon/Mouse.hx",96,0x5196c828)
            	HX_STACK_ARG(e,"e")
HXLINE(  96)		::haxegon::Mouse_obj::mouseoffstage = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,mouse_over,(void))

void Mouse_obj::mousewheel_handler( ::openfl::events::MouseEvent e){
            	HX_STACK_FRAME("haxegon.Mouse","mousewheel_handler",0x214de9b8,"haxegon.Mouse.mousewheel_handler","haxegon/Mouse.hx",100,0x5196c828)
            	HX_STACK_ARG(e,"e")
HXLINE( 100)		::haxegon::Mouse_obj::mousewheel = e->delta;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,mousewheel_handler,(void))

void Mouse_obj::show(){
            	HX_STACK_FRAME("haxegon.Mouse","show",0x81524cd4,"haxegon.Mouse.show","haxegon/Mouse.hx",104,0x5196c828)
HXLINE( 104)		::openfl::ui::Mouse_obj::show();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,show,(void))

void Mouse_obj::hide(){
            	HX_STACK_FRAME("haxegon.Mouse","hide",0x7a0dac99,"haxegon.Mouse.hide","haxegon/Mouse.hx",108,0x5196c828)
HXLINE( 108)		::openfl::ui::Mouse_obj::hide();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

void Mouse_obj::update(Int X,Int Y){
            	HX_STACK_FRAME("haxegon.Mouse","update",0x94b3e1a0,"haxegon.Mouse.update","haxegon/Mouse.hx",111,0x5196c828)
            	HX_STACK_ARG(X,"X")
            	HX_STACK_ARG(Y,"Y")
HXLINE( 112)		::haxegon::Mouse_obj::x = X;
HXLINE( 113)		::haxegon::Mouse_obj::y = Y;
HXLINE( 115)		Bool _hx_tmp;
HXDLIN( 115)		if ((::haxegon::Mouse_obj::_last == (int)-1)) {
HXLINE( 115)			_hx_tmp = (::haxegon::Mouse_obj::_current == (int)-1);
            		}
            		else {
HXLINE( 115)			_hx_tmp = false;
            		}
HXDLIN( 115)		if (_hx_tmp) {
HXLINE( 116)			::haxegon::Mouse_obj::_current = (int)0;
            		}
            		else {
HXLINE( 117)			Bool _hx_tmp1;
HXDLIN( 117)			if ((::haxegon::Mouse_obj::_last == (int)2)) {
HXLINE( 117)				_hx_tmp1 = (::haxegon::Mouse_obj::_current == (int)2);
            			}
            			else {
HXLINE( 117)				_hx_tmp1 = false;
            			}
HXDLIN( 117)			if (_hx_tmp1) {
HXLINE( 118)				::haxegon::Mouse_obj::_current = (int)1;
            			}
            		}
HXLINE( 119)		::haxegon::Mouse_obj::_last = ::haxegon::Mouse_obj::_current;
HXLINE( 121)		Bool _hx_tmp2;
HXDLIN( 121)		if ((::haxegon::Mouse_obj::_rightlast == (int)-1)) {
HXLINE( 121)			_hx_tmp2 = (::haxegon::Mouse_obj::_rightcurrent == (int)-1);
            		}
            		else {
HXLINE( 121)			_hx_tmp2 = false;
            		}
HXDLIN( 121)		if (_hx_tmp2) {
HXLINE( 122)			::haxegon::Mouse_obj::_rightcurrent = (int)0;
            		}
            		else {
HXLINE( 123)			Bool _hx_tmp3;
HXDLIN( 123)			if ((::haxegon::Mouse_obj::_rightlast == (int)2)) {
HXLINE( 123)				_hx_tmp3 = (::haxegon::Mouse_obj::_rightcurrent == (int)2);
            			}
            			else {
HXLINE( 123)				_hx_tmp3 = false;
            			}
HXDLIN( 123)			if (_hx_tmp3) {
HXLINE( 124)				::haxegon::Mouse_obj::_rightcurrent = (int)1;
            			}
            		}
HXLINE( 125)		::haxegon::Mouse_obj::_rightlast = ::haxegon::Mouse_obj::_rightcurrent;
HXLINE( 127)		Bool _hx_tmp4;
HXDLIN( 127)		if ((::haxegon::Mouse_obj::_middlelast == (int)-1)) {
HXLINE( 127)			_hx_tmp4 = (::haxegon::Mouse_obj::_middlecurrent == (int)-1);
            		}
            		else {
HXLINE( 127)			_hx_tmp4 = false;
            		}
HXDLIN( 127)		if (_hx_tmp4) {
HXLINE( 128)			::haxegon::Mouse_obj::_middlecurrent = (int)0;
            		}
            		else {
HXLINE( 129)			Bool _hx_tmp5;
HXDLIN( 129)			if ((::haxegon::Mouse_obj::_middlelast == (int)2)) {
HXLINE( 129)				_hx_tmp5 = (::haxegon::Mouse_obj::_middlecurrent == (int)2);
            			}
            			else {
HXLINE( 129)				_hx_tmp5 = false;
            			}
HXDLIN( 129)			if (_hx_tmp5) {
HXLINE( 130)				::haxegon::Mouse_obj::_middlecurrent = (int)1;
            			}
            		}
HXLINE( 131)		::haxegon::Mouse_obj::_middlelast = ::haxegon::Mouse_obj::_middlecurrent;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Mouse_obj,update,(void))

void Mouse_obj::reset(){
            	HX_STACK_FRAME("haxegon.Mouse","reset",0x1151ae18,"haxegon.Mouse.reset","haxegon/Mouse.hx",134,0x5196c828)
HXLINE( 135)		::haxegon::Mouse_obj::_current = (int)0;
HXLINE( 136)		::haxegon::Mouse_obj::_last = (int)0;
HXLINE( 137)		::haxegon::Mouse_obj::_rightcurrent = (int)0;
HXLINE( 138)		::haxegon::Mouse_obj::_rightlast = (int)0;
HXLINE( 139)		::haxegon::Mouse_obj::_middlecurrent = (int)0;
HXLINE( 140)		::haxegon::Mouse_obj::_middlelast = (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,reset,(void))

void Mouse_obj::right_down( ::openfl::events::MouseEvent event){
            	HX_STACK_FRAME("haxegon.Mouse","right_down",0x4a0ffdfc,"haxegon.Mouse.right_down","haxegon/Mouse.hx",145,0x5196c828)
            	HX_STACK_ARG(event,"event")
HXLINE( 145)		Bool _hx_tmp = (::haxegon::Mouse_obj::_rightcurrent > (int)0);
HXDLIN( 145)		if (_hx_tmp) {
HXLINE( 146)			::haxegon::Mouse_obj::_rightcurrent = (int)1;
            		}
            		else {
HXLINE( 148)			::haxegon::Mouse_obj::_rightcurrent = (int)2;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,right_down,(void))

void Mouse_obj::right_up( ::openfl::events::MouseEvent event){
            	HX_STACK_FRAME("haxegon.Mouse","right_up",0x7ed5f175,"haxegon.Mouse.right_up","haxegon/Mouse.hx",152,0x5196c828)
            	HX_STACK_ARG(event,"event")
HXLINE( 152)		Bool _hx_tmp = (::haxegon::Mouse_obj::_rightcurrent > (int)0);
HXDLIN( 152)		if (_hx_tmp) {
HXLINE( 154)			::haxegon::Mouse_obj::_rightcurrent = (int)-1;
            		}
            		else {
HXLINE( 156)			::haxegon::Mouse_obj::_rightcurrent = (int)0;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,right_up,(void))

void Mouse_obj::middle_down( ::openfl::events::MouseEvent event){
            	HX_STACK_FRAME("haxegon.Mouse","middle_down",0xd3244dd5,"haxegon.Mouse.middle_down","haxegon/Mouse.hx",161,0x5196c828)
            	HX_STACK_ARG(event,"event")
HXLINE( 161)		Bool _hx_tmp = (::haxegon::Mouse_obj::_middlecurrent > (int)0);
HXDLIN( 161)		if (_hx_tmp) {
HXLINE( 162)			::haxegon::Mouse_obj::_middlecurrent = (int)1;
            		}
            		else {
HXLINE( 164)			::haxegon::Mouse_obj::_middlecurrent = (int)2;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,middle_down,(void))

void Mouse_obj::middle_up( ::openfl::events::MouseEvent event){
            	HX_STACK_FRAME("haxegon.Mouse","middle_up",0xb02a690e,"haxegon.Mouse.middle_up","haxegon/Mouse.hx",168,0x5196c828)
            	HX_STACK_ARG(event,"event")
HXLINE( 168)		Bool _hx_tmp = (::haxegon::Mouse_obj::_middlecurrent > (int)0);
HXDLIN( 168)		if (_hx_tmp) {
HXLINE( 169)			::haxegon::Mouse_obj::_middlecurrent = (int)-1;
            		}
            		else {
HXLINE( 171)			::haxegon::Mouse_obj::_middlecurrent = (int)0;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,middle_up,(void))

void Mouse_obj::mouse_down( ::openfl::events::MouseEvent event){
            	HX_STACK_FRAME("haxegon.Mouse","mouse_down",0x65180b13,"haxegon.Mouse.mouse_down","haxegon/Mouse.hx",176,0x5196c828)
            	HX_STACK_ARG(event,"event")
HXLINE( 176)		Bool _hx_tmp = ::haxegon::Input_obj::pressed(::haxegon::Key_obj::CONTROL_dyn());
HXDLIN( 176)		if (_hx_tmp) {
HXLINE( 177)			Bool _hx_tmp1 = (::haxegon::Mouse_obj::_rightcurrent > (int)0);
HXDLIN( 177)			if (_hx_tmp1) {
HXLINE( 177)				::haxegon::Mouse_obj::_rightcurrent = (int)1;
            			}
            			else {
HXLINE( 178)				::haxegon::Mouse_obj::_rightcurrent = (int)2;
            			}
            		}
            		else {
HXLINE( 180)			Bool _hx_tmp2 = (::haxegon::Mouse_obj::_current > (int)0);
HXDLIN( 180)			if (_hx_tmp2) {
HXLINE( 180)				::haxegon::Mouse_obj::_current = (int)1;
            			}
            			else {
HXLINE( 181)				::haxegon::Mouse_obj::_current = (int)2;
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,mouse_down,(void))

void Mouse_obj::mouse_up( ::openfl::events::MouseEvent event){
            	HX_STACK_FRAME("haxegon.Mouse","mouse_up",0x3ed7bacc,"haxegon.Mouse.mouse_up","haxegon/Mouse.hx",185,0x5196c828)
            	HX_STACK_ARG(event,"event")
HXLINE( 186)		Bool _hx_tmp = (::haxegon::Mouse_obj::_rightcurrent > (int)0);
HXDLIN( 186)		if (_hx_tmp) {
HXLINE( 186)			::haxegon::Mouse_obj::_rightcurrent = (int)-1;
            		}
            		else {
HXLINE( 187)			::haxegon::Mouse_obj::_rightcurrent = (int)0;
            		}
HXLINE( 189)		Bool _hx_tmp1 = (::haxegon::Mouse_obj::_current > (int)0);
HXDLIN( 189)		if (_hx_tmp1) {
HXLINE( 189)			::haxegon::Mouse_obj::_current = (int)-1;
            		}
            		else {
HXLINE( 190)			::haxegon::Mouse_obj::_current = (int)0;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,mouse_up,(void))


Mouse_obj::Mouse_obj()
{
}

bool Mouse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { outValue = x; return true; }
		if (HX_FIELD_EQ(inName,"y") ) { outValue = y; return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"show") ) { outValue = show_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hide") ) { outValue = hide_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { outValue = _last; return true; }
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { outValue = unload_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { outValue = _current; return true; }
		if (HX_FIELD_EQ(inName,"right_up") ) { outValue = right_up_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mouse_up") ) { outValue = mouse_up_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"left_held") ) { outValue = left_held_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"middle_up") ) { outValue = middle_up_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mousewheel") ) { outValue = mousewheel; return true; }
		if (HX_FIELD_EQ(inName,"isdragging") ) { outValue = isdragging; return true; }
		if (HX_FIELD_EQ(inName,"_rightlast") ) { outValue = _rightlast; return true; }
		if (HX_FIELD_EQ(inName,"left_click") ) { outValue = left_click_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"right_held") ) { outValue = right_held_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mouse_over") ) { outValue = mouse_over_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"right_down") ) { outValue = right_down_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mouse_down") ) { outValue = mouse_down_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_middlelast") ) { outValue = _middlelast; return true; }
		if (HX_FIELD_EQ(inName,"right_click") ) { outValue = right_click_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"middle_held") ) { outValue = middle_held_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mouse_leave") ) { outValue = mouse_leave_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"middle_down") ) { outValue = middle_down_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"middle_click") ) { outValue = middle_click_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"flash_menu_on") ) { outValue = flash_menu_on; return true; }
		if (HX_FIELD_EQ(inName,"mouseoffstage") ) { outValue = mouseoffstage; return true; }
		if (HX_FIELD_EQ(inName,"_rightcurrent") ) { outValue = _rightcurrent; return true; }
		if (HX_FIELD_EQ(inName,"left_released") ) { outValue = left_released_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_middlecurrent") ) { outValue = _middlecurrent; return true; }
		if (HX_FIELD_EQ(inName,"right_released") ) { outValue = right_released_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"middle_released") ) { outValue = middle_released_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mousewheel_handler") ) { outValue = mousewheel_handler_dyn(); return true; }
	}
	return false;
}

bool Mouse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=ioValue.Cast< Int >(); return true; }
		if (HX_FIELD_EQ(inName,"y") ) { y=ioValue.Cast< Int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { _last=ioValue.Cast< Int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=ioValue.Cast< Int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mousewheel") ) { mousewheel=ioValue.Cast< Int >(); return true; }
		if (HX_FIELD_EQ(inName,"isdragging") ) { isdragging=ioValue.Cast< Bool >(); return true; }
		if (HX_FIELD_EQ(inName,"_rightlast") ) { _rightlast=ioValue.Cast< Int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_middlelast") ) { _middlelast=ioValue.Cast< Int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"flash_menu_on") ) { flash_menu_on=ioValue.Cast< Bool >(); return true; }
		if (HX_FIELD_EQ(inName,"mouseoffstage") ) { mouseoffstage=ioValue.Cast< Bool >(); return true; }
		if (HX_FIELD_EQ(inName,"_rightcurrent") ) { _rightcurrent=ioValue.Cast< Int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_middlecurrent") ) { _middlecurrent=ioValue.Cast< Int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Mouse_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Mouse_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Mouse_obj::flash_menu_on,HX_HCSTRING("flash_menu_on","\x30","\xfe","\x5a","\x63")},
	{hx::fsInt,(void *) &Mouse_obj::x,HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Mouse_obj::y,HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Mouse_obj::mousewheel,HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54")},
	{hx::fsBool,(void *) &Mouse_obj::mouseoffstage,HX_HCSTRING("mouseoffstage","\x14","\x48","\x2e","\x60")},
	{hx::fsBool,(void *) &Mouse_obj::isdragging,HX_HCSTRING("isdragging","\xb9","\x92","\x89","\xd8")},
	{hx::fsInt,(void *) &Mouse_obj::_current,HX_HCSTRING("_current","\xba","\xf5","\x9b","\x05")},
	{hx::fsInt,(void *) &Mouse_obj::_last,HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa")},
	{hx::fsInt,(void *) &Mouse_obj::_middlecurrent,HX_HCSTRING("_middlecurrent","\xc5","\xfd","\x66","\xb7")},
	{hx::fsInt,(void *) &Mouse_obj::_middlelast,HX_HCSTRING("_middlelast","\x4a","\x79","\x0a","\x6b")},
	{hx::fsInt,(void *) &Mouse_obj::_rightcurrent,HX_HCSTRING("_rightcurrent","\xbc","\x96","\xaf","\xcb")},
	{hx::fsInt,(void *) &Mouse_obj::_rightlast,HX_HCSTRING("_rightlast","\xf3","\xaf","\x3c","\x23")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Mouse_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Mouse_obj::flash_menu_on,"flash_menu_on");
	HX_MARK_MEMBER_NAME(Mouse_obj::x,"x");
	HX_MARK_MEMBER_NAME(Mouse_obj::y,"y");
	HX_MARK_MEMBER_NAME(Mouse_obj::mousewheel,"mousewheel");
	HX_MARK_MEMBER_NAME(Mouse_obj::mouseoffstage,"mouseoffstage");
	HX_MARK_MEMBER_NAME(Mouse_obj::isdragging,"isdragging");
	HX_MARK_MEMBER_NAME(Mouse_obj::_current,"_current");
	HX_MARK_MEMBER_NAME(Mouse_obj::_last,"_last");
	HX_MARK_MEMBER_NAME(Mouse_obj::_middlecurrent,"_middlecurrent");
	HX_MARK_MEMBER_NAME(Mouse_obj::_middlelast,"_middlelast");
	HX_MARK_MEMBER_NAME(Mouse_obj::_rightcurrent,"_rightcurrent");
	HX_MARK_MEMBER_NAME(Mouse_obj::_rightlast,"_rightlast");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Mouse_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mouse_obj::flash_menu_on,"flash_menu_on");
	HX_VISIT_MEMBER_NAME(Mouse_obj::x,"x");
	HX_VISIT_MEMBER_NAME(Mouse_obj::y,"y");
	HX_VISIT_MEMBER_NAME(Mouse_obj::mousewheel,"mousewheel");
	HX_VISIT_MEMBER_NAME(Mouse_obj::mouseoffstage,"mouseoffstage");
	HX_VISIT_MEMBER_NAME(Mouse_obj::isdragging,"isdragging");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_current,"_current");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_last,"_last");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_middlecurrent,"_middlecurrent");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_middlelast,"_middlelast");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_rightcurrent,"_rightcurrent");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_rightlast,"_rightlast");
};

#endif

hx::Class Mouse_obj::__mClass;

static ::String Mouse_obj_sStaticFields[] = {
	HX_HCSTRING("flash_menu_on","\x30","\xfe","\x5a","\x63"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("mousewheel","\x56","\xb8","\x59","\x54"),
	HX_HCSTRING("mouseoffstage","\x14","\x48","\x2e","\x60"),
	HX_HCSTRING("isdragging","\xb9","\x92","\x89","\xd8"),
	HX_HCSTRING("_current","\xba","\xf5","\x9b","\x05"),
	HX_HCSTRING("_last","\x35","\x26","\xbe","\xfa"),
	HX_HCSTRING("_middlecurrent","\xc5","\xfd","\x66","\xb7"),
	HX_HCSTRING("_middlelast","\x4a","\x79","\x0a","\x6b"),
	HX_HCSTRING("_rightcurrent","\xbc","\x96","\xaf","\xcb"),
	HX_HCSTRING("_rightlast","\xf3","\xaf","\x3c","\x23"),
	HX_HCSTRING("left_held","\x2d","\xcd","\xce","\x79"),
	HX_HCSTRING("left_click","\xd0","\x0a","\xc2","\x3e"),
	HX_HCSTRING("left_released","\x35","\xbf","\x95","\x96"),
	HX_HCSTRING("right_held","\x38","\xc5","\xb3","\x67"),
	HX_HCSTRING("right_click","\x65","\x1c","\x36","\x79"),
	HX_HCSTRING("right_released","\xc0","\x18","\xbf","\xfb"),
	HX_HCSTRING("middle_held","\x1f","\x47","\x76","\x60"),
	HX_HCSTRING("middle_click","\x9e","\x44","\xa5","\x2a"),
	HX_HCSTRING("middle_released","\x27","\x1a","\xe6","\x2f"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("mouse_leave","\x1d","\x3c","\x2e","\x2f"),
	HX_HCSTRING("mouse_over","\xee","\x30","\x69","\x87"),
	HX_HCSTRING("mousewheel_handler","\xa1","\x07","\x79","\xb5"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("right_down","\xe5","\x8a","\x16","\x65"),
	HX_HCSTRING("right_up","\x1e","\x42","\x28","\xe4"),
	HX_HCSTRING("middle_down","\xcc","\x0c","\xd9","\x5d"),
	HX_HCSTRING("middle_up","\x45","\xac","\xde","\xf2"),
	HX_HCSTRING("mouse_down","\xfc","\x97","\x1e","\x80"),
	HX_HCSTRING("mouse_up","\x75","\x0b","\x2a","\xa4"),
	::String(null())
};

void Mouse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Mouse","\xf7","\xf7","\x95","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mouse_obj::__GetStatic;
	__mClass->mSetStaticField = &Mouse_obj::__SetStatic;
	__mClass->mMarkFunc = Mouse_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Mouse_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Mouse_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Mouse_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mouse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mouse_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Mouse_obj::__boot()
{
{
            	HX_STACK_FRAME("haxegon.Mouse","boot",0x761afc09,"haxegon.Mouse.boot","haxegon/Mouse.hx",12,0x5196c828)
HXLINE(  12)		flash_menu_on = false;
            	}
{
            	HX_STACK_FRAME("haxegon.Mouse","boot",0x761afc09,"haxegon.Mouse.boot","haxegon/Mouse.hx",17,0x5196c828)
HXLINE(  17)		mousewheel = (int)0;
            	}
}

} // end namespace haxegon
