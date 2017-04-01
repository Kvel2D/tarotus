// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_GameInputEvent
#include <openfl/events/GameInputEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInput
#include <openfl/ui/GameInput.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputControl
#include <openfl/ui/GameInputControl.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif

namespace openfl{
namespace ui{

void GameInput_obj::__construct(){
            	HX_STACK_FRAME("openfl.ui.GameInput","new",0x178f028e,"openfl.ui.GameInput.new","openfl/ui/GameInput.hx",26,0x96cdaf42)
            	HX_STACK_THIS(this)
HXLINE(  28)		super::__construct(null());
HXLINE(  30)		::openfl::ui::GameInput_obj::_hx___instances->push(hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic GameInput_obj::__CreateEmpty() { return new GameInput_obj; }

hx::ObjectPtr< GameInput_obj > GameInput_obj::__new()
{
	hx::ObjectPtr< GameInput_obj > _hx_result = new GameInput_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic GameInput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GameInput_obj > _hx_result = new GameInput_obj();
	_hx_result->__construct();
	return _hx_result;
}

Bool GameInput_obj::isSupported;

Int GameInput_obj::numDevices;

::Array< ::Dynamic> GameInput_obj::_hx___deviceList;

 ::haxe::ds::ObjectMap GameInput_obj::_hx___devices;

::Array< ::Dynamic> GameInput_obj::_hx___instances;

 ::openfl::ui::GameInputDevice GameInput_obj::getDeviceAt(Int index){
            	HX_STACK_FRAME("openfl.ui.GameInput","getDeviceAt",0x22aaba0d,"openfl.ui.GameInput.getDeviceAt","openfl/ui/GameInput.hx",35,0x96cdaf42)
            	HX_STACK_ARG(index,"index")
HXLINE(  37)		Bool _hx_tmp;
HXDLIN(  37)		if ((index >= (int)0)) {
HXLINE(  37)			_hx_tmp = (index < ::openfl::ui::GameInput_obj::_hx___deviceList->length);
            		}
            		else {
HXLINE(  37)			_hx_tmp = false;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  39)			return ::openfl::ui::GameInput_obj::_hx___deviceList->__get(index).StaticCast<  ::openfl::ui::GameInputDevice >();
            		}
HXLINE(  43)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,getDeviceAt,return )

 ::openfl::ui::GameInputDevice GameInput_obj::_hx___getDevice( ::lime::ui::Gamepad gamepad){
            	HX_STACK_FRAME("openfl.ui.GameInput","__getDevice",0x7418beda,"openfl.ui.GameInput.__getDevice","openfl/ui/GameInput.hx",48,0x96cdaf42)
            	HX_STACK_ARG(gamepad,"gamepad")
HXLINE(  50)		Bool _hx_tmp = hx::IsNull( gamepad );
HXDLIN(  50)		if (_hx_tmp) {
HXLINE(  50)			return null();
            		}
HXLINE(  52)		Bool _hx_tmp1 = !(::openfl::ui::GameInput_obj::_hx___devices->exists(gamepad));
HXDLIN(  52)		if (_hx_tmp1) {
HXLINE(  54)			Int id = gamepad->id;
HXDLIN(  54)			 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::ui::Gamepad_obj::cffi_lime_gamepad_get_device_guid(id)) );
HXDLIN(  54)			 ::Dynamic _hx_tmp2 = Dynamic(hx::DynamicPtr(inVal));
HXDLIN(  54)			::String _hx_tmp3 = ( (::String)(_hx_tmp2) );
HXDLIN(  54)			Int id1 = gamepad->id;
HXDLIN(  54)			 ::hx::Object * inVal1 = ( ( ::hx::Object *)(::lime::ui::Gamepad_obj::cffi_lime_gamepad_get_device_name(id1)) );
HXDLIN(  54)			 ::Dynamic _hx_tmp4 = Dynamic(hx::DynamicPtr(inVal1));
HXDLIN(  54)			HX_VARI(  ::openfl::ui::GameInputDevice,device) =  ::openfl::ui::GameInputDevice_obj::__new(_hx_tmp3,( (::String)(_hx_tmp4) ));
HXLINE(  55)			::openfl::ui::GameInput_obj::_hx___deviceList->push(device);
HXLINE(  56)			::openfl::ui::GameInput_obj::_hx___devices->set(gamepad,device);
HXLINE(  57)			::openfl::ui::GameInput_obj::numDevices = ::openfl::ui::GameInput_obj::_hx___deviceList->length;
            		}
HXLINE(  61)		return ::openfl::ui::GameInput_obj::_hx___devices->get(gamepad).StaticCast<  ::openfl::ui::GameInputDevice >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,_hx___getDevice,return )

void GameInput_obj::_hx___onGamepadAxisMove( ::lime::ui::Gamepad gamepad,Int axis,Float value){
            	HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadAxisMove",0x7bd40ec2,"openfl.ui.GameInput.__onGamepadAxisMove","openfl/ui/GameInput.hx",66,0x96cdaf42)
            	HX_STACK_ARG(gamepad,"gamepad")
            	HX_STACK_ARG(axis,"axis")
            	HX_STACK_ARG(value,"value")
HXLINE(  68)		HX_VARI(  ::openfl::ui::GameInputDevice,device) = ::openfl::ui::GameInput_obj::_hx___getDevice(gamepad);
HXLINE(  69)		Bool _hx_tmp = hx::IsNull( device );
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  69)			return;
            		}
HXLINE(  71)		Bool _hx_tmp1 = device->enabled;
HXDLIN(  71)		if (_hx_tmp1) {
HXLINE(  73)			Bool _hx_tmp2 = !(device->_hx___axis->exists(axis));
HXDLIN(  73)			if (_hx_tmp2) {
HXLINE(  75)				::String _hx_tmp3;
HXDLIN(  75)				switch((int)(axis)){
            					case (int)0: {
HXLINE(  75)						_hx_tmp3 = HX_("LEFT_X",e0,72,4a,4c);
            					}
            					break;
            					case (int)1: {
HXLINE(  75)						_hx_tmp3 = HX_("LEFT_Y",e1,72,4a,4c);
            					}
            					break;
            					case (int)2: {
HXLINE(  75)						_hx_tmp3 = HX_("RIGHT_X",d5,fd,37,93);
            					}
            					break;
            					case (int)3: {
HXLINE(  75)						_hx_tmp3 = HX_("RIGHT_Y",d6,fd,37,93);
            					}
            					break;
            					case (int)4: {
HXLINE(  75)						_hx_tmp3 = HX_("TRIGGER_LEFT",ce,cb,4a,f1);
            					}
            					break;
            					case (int)5: {
HXLINE(  75)						_hx_tmp3 = HX_("TRIGGER_RIGHT",15,96,34,a7);
            					}
            					break;
            					default:{
HXLINE(  75)						_hx_tmp3 = ((HX_("UNKNOWN (",f2,41,8b,8c) + axis) + HX_(")",29,00,00,00));
            					}
            				}
HXDLIN(  75)				HX_VARI(  ::openfl::ui::GameInputControl,control) =  ::openfl::ui::GameInputControl_obj::__new(device,(HX_("AXIS_",9e,28,6e,a7) + _hx_tmp3),(int)-1,(int)1,null());
HXLINE(  76)				device->_hx___axis->set(axis,control);
HXLINE(  77)				device->_hx___controls->push(control);
            			}
HXLINE(  81)			HX_VARI_NAME(  ::openfl::ui::GameInputControl,control1,"control") = device->_hx___axis->get(axis).StaticCast<  ::openfl::ui::GameInputControl >();
HXLINE(  82)			control1->value = value;
HXLINE(  83)			control1->dispatchEvent( ::openfl::events::Event_obj::__new(HX_("change",70,91,72,b7),null(),null()));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GameInput_obj,_hx___onGamepadAxisMove,(void))

void GameInput_obj::_hx___onGamepadButtonDown( ::lime::ui::Gamepad gamepad,Int button){
            	HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadButtonDown",0xedf461e4,"openfl.ui.GameInput.__onGamepadButtonDown","openfl/ui/GameInput.hx",90,0x96cdaf42)
            	HX_STACK_ARG(gamepad,"gamepad")
            	HX_STACK_ARG(button,"button")
HXLINE(  92)		HX_VARI(  ::openfl::ui::GameInputDevice,device) = ::openfl::ui::GameInput_obj::_hx___getDevice(gamepad);
HXLINE(  93)		Bool _hx_tmp = hx::IsNull( device );
HXDLIN(  93)		if (_hx_tmp) {
HXLINE(  93)			return;
            		}
HXLINE(  95)		Bool _hx_tmp1 = device->enabled;
HXDLIN(  95)		if (_hx_tmp1) {
HXLINE(  97)			Bool _hx_tmp2 = !(device->_hx___button->exists(button));
HXDLIN(  97)			if (_hx_tmp2) {
HXLINE(  99)				::String _hx_tmp3;
HXDLIN(  99)				switch((int)(button)){
            					case (int)0: {
HXLINE(  99)						_hx_tmp3 = HX_("A",41,00,00,00);
            					}
            					break;
            					case (int)1: {
HXLINE(  99)						_hx_tmp3 = HX_("B",42,00,00,00);
            					}
            					break;
            					case (int)2: {
HXLINE(  99)						_hx_tmp3 = HX_("X",58,00,00,00);
            					}
            					break;
            					case (int)3: {
HXLINE(  99)						_hx_tmp3 = HX_("Y",59,00,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE(  99)						_hx_tmp3 = HX_("BACK",27,a2,d1,2b);
            					}
            					break;
            					case (int)5: {
HXLINE(  99)						_hx_tmp3 = HX_("GUIDE",9c,f2,d9,19);
            					}
            					break;
            					case (int)6: {
HXLINE(  99)						_hx_tmp3 = HX_("START",42,ac,f9,01);
            					}
            					break;
            					case (int)7: {
HXLINE(  99)						_hx_tmp3 = HX_("LEFT_STICK",b8,07,ea,37);
            					}
            					break;
            					case (int)8: {
HXLINE(  99)						_hx_tmp3 = HX_("RIGHT_STICK",2d,b1,90,56);
            					}
            					break;
            					case (int)9: {
HXLINE(  99)						_hx_tmp3 = HX_("LEFT_SHOULDER",d8,b1,a9,01);
            					}
            					break;
            					case (int)10: {
HXLINE(  99)						_hx_tmp3 = HX_("RIGHT_SHOULDER",83,9f,28,11);
            					}
            					break;
            					case (int)11: {
HXLINE(  99)						_hx_tmp3 = HX_("DPAD_UP",6b,00,87,a2);
            					}
            					break;
            					case (int)12: {
HXLINE(  99)						_hx_tmp3 = HX_("DPAD_DOWN",72,1a,5b,87);
            					}
            					break;
            					case (int)13: {
HXLINE(  99)						_hx_tmp3 = HX_("DPAD_LEFT",17,2a,9d,8c);
            					}
            					break;
            					case (int)14: {
HXLINE(  99)						_hx_tmp3 = HX_("DPAD_RIGHT",ac,b7,f4,f3);
            					}
            					break;
            					default:{
HXLINE(  99)						_hx_tmp3 = ((HX_("UNKNOWN (",f2,41,8b,8c) + button) + HX_(")",29,00,00,00));
            					}
            				}
HXDLIN(  99)				HX_VARI(  ::openfl::ui::GameInputControl,control) =  ::openfl::ui::GameInputControl_obj::__new(device,(HX_("BUTTON_",2d,26,49,4a) + _hx_tmp3),(int)0,(int)1,null());
HXLINE( 100)				device->_hx___button->set(button,control);
HXLINE( 101)				device->_hx___controls->push(control);
            			}
HXLINE( 105)			HX_VARI_NAME(  ::openfl::ui::GameInputControl,control1,"control") = device->_hx___button->get(button).StaticCast<  ::openfl::ui::GameInputControl >();
HXLINE( 106)			control1->value = (int)1;
HXLINE( 107)			control1->dispatchEvent( ::openfl::events::Event_obj::__new(HX_("change",70,91,72,b7),null(),null()));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameInput_obj,_hx___onGamepadButtonDown,(void))

void GameInput_obj::_hx___onGamepadButtonUp( ::lime::ui::Gamepad gamepad,Int button){
            	HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadButtonUp",0x48120b5d,"openfl.ui.GameInput.__onGamepadButtonUp","openfl/ui/GameInput.hx",114,0x96cdaf42)
            	HX_STACK_ARG(gamepad,"gamepad")
            	HX_STACK_ARG(button,"button")
HXLINE( 116)		HX_VARI(  ::openfl::ui::GameInputDevice,device) = ::openfl::ui::GameInput_obj::_hx___getDevice(gamepad);
HXLINE( 117)		Bool _hx_tmp = hx::IsNull( device );
HXDLIN( 117)		if (_hx_tmp) {
HXLINE( 117)			return;
            		}
HXLINE( 119)		Bool _hx_tmp1 = device->enabled;
HXDLIN( 119)		if (_hx_tmp1) {
HXLINE( 121)			Bool _hx_tmp2 = !(device->_hx___button->exists(button));
HXDLIN( 121)			if (_hx_tmp2) {
HXLINE( 123)				::String _hx_tmp3;
HXDLIN( 123)				switch((int)(button)){
            					case (int)0: {
HXLINE( 123)						_hx_tmp3 = HX_("A",41,00,00,00);
            					}
            					break;
            					case (int)1: {
HXLINE( 123)						_hx_tmp3 = HX_("B",42,00,00,00);
            					}
            					break;
            					case (int)2: {
HXLINE( 123)						_hx_tmp3 = HX_("X",58,00,00,00);
            					}
            					break;
            					case (int)3: {
HXLINE( 123)						_hx_tmp3 = HX_("Y",59,00,00,00);
            					}
            					break;
            					case (int)4: {
HXLINE( 123)						_hx_tmp3 = HX_("BACK",27,a2,d1,2b);
            					}
            					break;
            					case (int)5: {
HXLINE( 123)						_hx_tmp3 = HX_("GUIDE",9c,f2,d9,19);
            					}
            					break;
            					case (int)6: {
HXLINE( 123)						_hx_tmp3 = HX_("START",42,ac,f9,01);
            					}
            					break;
            					case (int)7: {
HXLINE( 123)						_hx_tmp3 = HX_("LEFT_STICK",b8,07,ea,37);
            					}
            					break;
            					case (int)8: {
HXLINE( 123)						_hx_tmp3 = HX_("RIGHT_STICK",2d,b1,90,56);
            					}
            					break;
            					case (int)9: {
HXLINE( 123)						_hx_tmp3 = HX_("LEFT_SHOULDER",d8,b1,a9,01);
            					}
            					break;
            					case (int)10: {
HXLINE( 123)						_hx_tmp3 = HX_("RIGHT_SHOULDER",83,9f,28,11);
            					}
            					break;
            					case (int)11: {
HXLINE( 123)						_hx_tmp3 = HX_("DPAD_UP",6b,00,87,a2);
            					}
            					break;
            					case (int)12: {
HXLINE( 123)						_hx_tmp3 = HX_("DPAD_DOWN",72,1a,5b,87);
            					}
            					break;
            					case (int)13: {
HXLINE( 123)						_hx_tmp3 = HX_("DPAD_LEFT",17,2a,9d,8c);
            					}
            					break;
            					case (int)14: {
HXLINE( 123)						_hx_tmp3 = HX_("DPAD_RIGHT",ac,b7,f4,f3);
            					}
            					break;
            					default:{
HXLINE( 123)						_hx_tmp3 = ((HX_("UNKNOWN (",f2,41,8b,8c) + button) + HX_(")",29,00,00,00));
            					}
            				}
HXDLIN( 123)				HX_VARI(  ::openfl::ui::GameInputControl,control) =  ::openfl::ui::GameInputControl_obj::__new(device,(HX_("BUTTON_",2d,26,49,4a) + _hx_tmp3),(int)0,(int)1,null());
HXLINE( 124)				device->_hx___button->set(button,control);
HXLINE( 125)				device->_hx___controls->push(control);
            			}
HXLINE( 129)			HX_VARI_NAME(  ::openfl::ui::GameInputControl,control1,"control") = device->_hx___button->get(button).StaticCast<  ::openfl::ui::GameInputControl >();
HXLINE( 130)			control1->value = (int)0;
HXLINE( 131)			control1->dispatchEvent( ::openfl::events::Event_obj::__new(HX_("change",70,91,72,b7),null(),null()));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GameInput_obj,_hx___onGamepadButtonUp,(void))

void GameInput_obj::_hx___onGamepadConnect( ::lime::ui::Gamepad gamepad){
            	HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadConnect",0xce3c5b7a,"openfl.ui.GameInput.__onGamepadConnect","openfl/ui/GameInput.hx",138,0x96cdaf42)
            	HX_STACK_ARG(gamepad,"gamepad")
HXLINE( 140)		HX_VARI(  ::openfl::ui::GameInputDevice,device) = ::openfl::ui::GameInput_obj::_hx___getDevice(gamepad);
HXLINE( 141)		Bool _hx_tmp = hx::IsNull( device );
HXDLIN( 141)		if (_hx_tmp) {
HXLINE( 141)			return;
            		}
HXLINE( 143)		{
HXLINE( 143)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 143)			HX_VARI( ::Array< ::Dynamic>,_g1) = ::openfl::ui::GameInput_obj::_hx___instances;
HXDLIN( 143)			while((_g < _g1->length)){
HXLINE( 143)				HX_VARI(  ::openfl::ui::GameInput,instance) = _g1->__get(_g).StaticCast<  ::openfl::ui::GameInput >();
HXDLIN( 143)				++_g;
HXLINE( 145)				instance->dispatchEvent( ::openfl::events::GameInputEvent_obj::__new(HX_("deviceAdded",4a,08,84,0b),null(),null(),device));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,_hx___onGamepadConnect,(void))

void GameInput_obj::_hx___onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
            	HX_STACK_FRAME("openfl.ui.GameInput","__onGamepadDisconnect",0xaad45ecc,"openfl.ui.GameInput.__onGamepadDisconnect","openfl/ui/GameInput.hx",152,0x96cdaf42)
            	HX_STACK_ARG(gamepad,"gamepad")
HXLINE( 154)		HX_VARI(  ::openfl::ui::GameInputDevice,device) = ::openfl::ui::GameInput_obj::_hx___devices->get(gamepad).StaticCast<  ::openfl::ui::GameInputDevice >();
HXLINE( 156)		Bool _hx_tmp = hx::IsNotNull( device );
HXDLIN( 156)		if (_hx_tmp) {
HXLINE( 158)			Bool _hx_tmp1 = ::openfl::ui::GameInput_obj::_hx___devices->exists(gamepad);
HXDLIN( 158)			if (_hx_tmp1) {
HXLINE( 160)				::openfl::ui::GameInput_obj::_hx___deviceList->remove(::openfl::ui::GameInput_obj::_hx___devices->get(gamepad).StaticCast<  ::openfl::ui::GameInputDevice >());
HXLINE( 161)				::openfl::ui::GameInput_obj::_hx___devices->remove(gamepad);
            			}
HXLINE( 165)			::openfl::ui::GameInput_obj::numDevices = ::openfl::ui::GameInput_obj::_hx___deviceList->length;
HXLINE( 167)			{
HXLINE( 167)				HX_VARI( Int,_g) = (int)0;
HXDLIN( 167)				HX_VARI( ::Array< ::Dynamic>,_g1) = ::openfl::ui::GameInput_obj::_hx___instances;
HXDLIN( 167)				while((_g < _g1->length)){
HXLINE( 167)					HX_VARI(  ::openfl::ui::GameInput,instance) = _g1->__get(_g).StaticCast<  ::openfl::ui::GameInput >();
HXDLIN( 167)					++_g;
HXLINE( 169)					instance->dispatchEvent( ::openfl::events::GameInputEvent_obj::__new(HX_("deviceRemoved",aa,c9,5b,59),null(),null(),device));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GameInput_obj,_hx___onGamepadDisconnect,(void))


GameInput_obj::GameInput_obj()
{
}

bool GameInput_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__devices") ) { outValue = _hx___devices; return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numDevices") ) { outValue = numDevices; return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { outValue = isSupported; return true; }
		if (HX_FIELD_EQ(inName,"__instances") ) { outValue = _hx___instances; return true; }
		if (HX_FIELD_EQ(inName,"getDeviceAt") ) { outValue = getDeviceAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__getDevice") ) { outValue = _hx___getDevice_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__deviceList") ) { outValue = _hx___deviceList; return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__onGamepadConnect") ) { outValue = _hx___onGamepadConnect_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__onGamepadAxisMove") ) { outValue = _hx___onGamepadAxisMove_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__onGamepadButtonUp") ) { outValue = _hx___onGamepadButtonUp_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__onGamepadButtonDown") ) { outValue = _hx___onGamepadButtonDown_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__onGamepadDisconnect") ) { outValue = _hx___onGamepadDisconnect_dyn(); return true; }
	}
	return false;
}

bool GameInput_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__devices") ) { _hx___devices=ioValue.Cast<  ::haxe::ds::ObjectMap >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numDevices") ) { numDevices=ioValue.Cast< Int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=ioValue.Cast< Bool >(); return true; }
		if (HX_FIELD_EQ(inName,"__instances") ) { _hx___instances=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__deviceList") ) { _hx___deviceList=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GameInput_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GameInput_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &GameInput_obj::isSupported,HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3")},
	{hx::fsInt,(void *) &GameInput_obj::numDevices,HX_HCSTRING("numDevices","\x77","\x65","\x89","\x07")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GameInput_obj::_hx___deviceList,HX_HCSTRING("__deviceList","\x34","\xa3","\xd0","\xe9")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(void *) &GameInput_obj::_hx___devices,HX_HCSTRING("__devices","\xfd","\x77","\xb7","\x58")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &GameInput_obj::_hx___instances,HX_HCSTRING("__instances","\x1e","\xcc","\x46","\x79")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GameInput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameInput_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameInput_obj::isSupported,"isSupported");
	HX_MARK_MEMBER_NAME(GameInput_obj::numDevices,"numDevices");
	HX_MARK_MEMBER_NAME(GameInput_obj::_hx___deviceList,"__deviceList");
	HX_MARK_MEMBER_NAME(GameInput_obj::_hx___devices,"__devices");
	HX_MARK_MEMBER_NAME(GameInput_obj::_hx___instances,"__instances");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameInput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameInput_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameInput_obj::isSupported,"isSupported");
	HX_VISIT_MEMBER_NAME(GameInput_obj::numDevices,"numDevices");
	HX_VISIT_MEMBER_NAME(GameInput_obj::_hx___deviceList,"__deviceList");
	HX_VISIT_MEMBER_NAME(GameInput_obj::_hx___devices,"__devices");
	HX_VISIT_MEMBER_NAME(GameInput_obj::_hx___instances,"__instances");
};

#endif

hx::Class GameInput_obj::__mClass;

static ::String GameInput_obj_sStaticFields[] = {
	HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3"),
	HX_HCSTRING("numDevices","\x77","\x65","\x89","\x07"),
	HX_HCSTRING("__deviceList","\x34","\xa3","\xd0","\xe9"),
	HX_HCSTRING("__devices","\xfd","\x77","\xb7","\x58"),
	HX_HCSTRING("__instances","\x1e","\xcc","\x46","\x79"),
	HX_HCSTRING("getDeviceAt","\xdf","\xa9","\x8c","\xca"),
	HX_HCSTRING("__getDevice","\xac","\xae","\xfa","\x1b"),
	HX_HCSTRING("__onGamepadAxisMove","\x94","\x20","\xc5","\xd7"),
	HX_HCSTRING("__onGamepadButtonDown","\x36","\x0c","\xab","\xf5"),
	HX_HCSTRING("__onGamepadButtonUp","\x2f","\x1d","\x03","\xa4"),
	HX_HCSTRING("__onGamepadConnect","\xe8","\xe9","\x67","\x58"),
	HX_HCSTRING("__onGamepadDisconnect","\x1e","\x09","\x8b","\xb2"),
	::String(null())
};

void GameInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.ui.GameInput","\x9c","\x63","\x63","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameInput_obj::__GetStatic;
	__mClass->mSetStaticField = &GameInput_obj::__SetStatic;
	__mClass->mMarkFunc = GameInput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GameInput_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GameInput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameInput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameInput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GameInput_obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",18,0x96cdaf42)
HXLINE(  18)		isSupported = true;
            	}
{
            	HX_STACK_FRAME("openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",19,0x96cdaf42)
HXLINE(  19)		numDevices = (int)0;
            	}
{
            	HX_STACK_FRAME("openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",21,0x96cdaf42)
HXLINE(  21)		_hx___deviceList = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACK_FRAME("openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",22,0x96cdaf42)
HXLINE(  22)		_hx___devices =  ::haxe::ds::ObjectMap_obj::__new();
            	}
{
            	HX_STACK_FRAME("openfl.ui.GameInput","boot",0x7dac3a44,"openfl.ui.GameInput.boot","openfl/ui/GameInput.hx",23,0x96cdaf42)
HXLINE(  23)		_hx___instances = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

} // end namespace openfl
} // end namespace ui