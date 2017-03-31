// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

static const ::String _hx_array_data_0[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("touchPointID",2c,be,83,7b),HX_("isPrimaryTouchPoint",29,3f,07,49),HX_("localX",8d,74,bf,59),HX_("localY",8e,74,bf,59),HX_("sizeX",77,08,d9,7c),HX_("sizeY",78,08,d9,7c),HX_("pressure",c5,ab,1d,70),HX_("relatedObject",0a,bf,cb,e8),HX_("ctrlKey",b4,35,7d,61),HX_("altKey",f6,a7,ca,44),HX_("shiftKey",3d,92,9f,99),HX_("commandKey",14,71,9b,43),HX_("controlKey",42,8e,a5,04),
};
namespace openfl{
namespace events{

void TouchEvent_obj::__construct(::String type,hx::Null< Bool >  __o_bubbles,hx::Null< Bool >  __o_cancelable,hx::Null< Int >  __o_touchPointID,hx::Null< Bool >  __o_isPrimaryTouchPoint,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,hx::Null< Float >  __o_sizeX,hx::Null< Float >  __o_sizeY,hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,hx::Null< Bool >  __o_ctrlKey,hx::Null< Bool >  __o_altKey,hx::Null< Bool >  __o_shiftKey,hx::Null< Bool >  __o_commandKey,hx::Null< Bool >  __o_controlKey,hx::Null< Float >  __o_timestamp,::String touchIntent, ::openfl::utils::ByteArrayData samples,hx::Null< Bool >  __o_isTouchPointCanceled){
Bool bubbles = __o_bubbles.Default(true);
Bool cancelable = __o_cancelable.Default(false);
Int touchPointID = __o_touchPointID.Default(0);
Bool isPrimaryTouchPoint = __o_isPrimaryTouchPoint.Default(false);
Float localX = __o_localX.Default(0);
Float localY = __o_localY.Default(0);
Float sizeX = __o_sizeX.Default(0);
Float sizeY = __o_sizeY.Default(0);
Float pressure = __o_pressure.Default(0);
Bool ctrlKey = __o_ctrlKey.Default(false);
Bool altKey = __o_altKey.Default(false);
Bool shiftKey = __o_shiftKey.Default(false);
Bool commandKey = __o_commandKey.Default(false);
Bool controlKey = __o_controlKey.Default(false);
Float timestamp = __o_timestamp.Default(0);
Bool isTouchPointCanceled = __o_isTouchPointCanceled.Default(false);
            	HX_STACK_FRAME("openfl.events.TouchEvent","new",0xe223a0c4,"openfl.events.TouchEvent.new","openfl/events/TouchEvent.hx",39,0x2fe85d0c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(bubbles,"bubbles")
            	HX_STACK_ARG(cancelable,"cancelable")
            	HX_STACK_ARG(touchPointID,"touchPointID")
            	HX_STACK_ARG(isPrimaryTouchPoint,"isPrimaryTouchPoint")
            	HX_STACK_ARG(localX,"localX")
            	HX_STACK_ARG(localY,"localY")
            	HX_STACK_ARG(sizeX,"sizeX")
            	HX_STACK_ARG(sizeY,"sizeY")
            	HX_STACK_ARG(pressure,"pressure")
            	HX_STACK_ARG(relatedObject,"relatedObject")
            	HX_STACK_ARG(ctrlKey,"ctrlKey")
            	HX_STACK_ARG(altKey,"altKey")
            	HX_STACK_ARG(shiftKey,"shiftKey")
            	HX_STACK_ARG(commandKey,"commandKey")
            	HX_STACK_ARG(controlKey,"controlKey")
            	HX_STACK_ARG(timestamp,"timestamp")
            	HX_STACK_ARG(touchIntent,"touchIntent")
            	HX_STACK_ARG(samples,"samples")
            	HX_STACK_ARG(isTouchPointCanceled,"isTouchPointCanceled")
HXLINE(  41)		super::__construct(type,bubbles,cancelable);
HXLINE(  43)		this->touchPointID = touchPointID;
HXLINE(  44)		this->isPrimaryTouchPoint = isPrimaryTouchPoint;
HXLINE(  45)		this->localX = localX;
HXLINE(  46)		this->localY = localY;
HXLINE(  47)		this->sizeX = sizeX;
HXLINE(  48)		this->sizeY = sizeY;
HXLINE(  49)		this->pressure = pressure;
HXLINE(  50)		this->relatedObject = relatedObject;
HXLINE(  51)		this->ctrlKey = ctrlKey;
HXLINE(  52)		this->altKey = altKey;
HXLINE(  53)		this->shiftKey = shiftKey;
HXLINE(  54)		this->commandKey = commandKey;
HXLINE(  55)		this->controlKey = controlKey;
            	}

Dynamic TouchEvent_obj::__CreateEmpty() { return new TouchEvent_obj; }

hx::ObjectPtr< TouchEvent_obj > TouchEvent_obj::__new(::String type,hx::Null< Bool >  __o_bubbles,hx::Null< Bool >  __o_cancelable,hx::Null< Int >  __o_touchPointID,hx::Null< Bool >  __o_isPrimaryTouchPoint,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,hx::Null< Float >  __o_sizeX,hx::Null< Float >  __o_sizeY,hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,hx::Null< Bool >  __o_ctrlKey,hx::Null< Bool >  __o_altKey,hx::Null< Bool >  __o_shiftKey,hx::Null< Bool >  __o_commandKey,hx::Null< Bool >  __o_controlKey,hx::Null< Float >  __o_timestamp,::String touchIntent, ::openfl::utils::ByteArrayData samples,hx::Null< Bool >  __o_isTouchPointCanceled)
{
	hx::ObjectPtr< TouchEvent_obj > _hx_result = new TouchEvent_obj();
	_hx_result->__construct(type,__o_bubbles,__o_cancelable,__o_touchPointID,__o_isPrimaryTouchPoint,__o_localX,__o_localY,__o_sizeX,__o_sizeY,__o_pressure,relatedObject,__o_ctrlKey,__o_altKey,__o_shiftKey,__o_commandKey,__o_controlKey,__o_timestamp,touchIntent,samples,__o_isTouchPointCanceled);
	return _hx_result;
}

Dynamic TouchEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TouchEvent_obj > _hx_result = new TouchEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14],inArgs[15],inArgs[16],inArgs[17],inArgs[18],inArgs[19]);
	return _hx_result;
}

 ::openfl::events::Event TouchEvent_obj::clone(){
            	HX_STACK_FRAME("openfl.events.TouchEvent","clone",0x1a12c4c1,"openfl.events.TouchEvent.clone","openfl/events/TouchEvent.hx",60,0x2fe85d0c)
            	HX_STACK_THIS(this)
HXLINE(  62)		HX_VARI(  ::openfl::events::TouchEvent,event) =  ::openfl::events::TouchEvent_obj::__new(this->type,this->bubbles,this->cancelable,this->touchPointID,this->isPrimaryTouchPoint,this->localX,this->localY,this->sizeX,this->sizeY,this->pressure,this->relatedObject,this->ctrlKey,this->altKey,this->shiftKey,this->commandKey,this->controlKey,null(),null(),null(),null());
HXLINE(  63)		event->target = this->target;
HXLINE(  64)		event->currentTarget = this->currentTarget;
HXLINE(  65)		event->eventPhase = this->eventPhase;
HXLINE(  66)		return event;
            	}


::String TouchEvent_obj::toString(){
            	HX_STACK_FRAME("openfl.events.TouchEvent","toString",0x9efd15c8,"openfl.events.TouchEvent.toString","openfl/events/TouchEvent.hx",73,0x2fe85d0c)
            	HX_STACK_THIS(this)
HXLINE(  73)		return this->_hx___formatToString(HX_("TouchEvent",fb,af,06,66),::Array_obj< ::String >::fromData( _hx_array_data_0,16));
            	}


void TouchEvent_obj::updateAfterEvent(){
            	HX_STACK_FRAME("openfl.events.TouchEvent","updateAfterEvent",0xeb0abce3,"openfl.events.TouchEvent.updateAfterEvent","openfl/events/TouchEvent.hx",78,0x2fe85d0c)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TouchEvent_obj,updateAfterEvent,(void))

::String TouchEvent_obj::TOUCH_BEGIN;

::String TouchEvent_obj::TOUCH_END;

::String TouchEvent_obj::TOUCH_MOVE;

::String TouchEvent_obj::TOUCH_OUT;

::String TouchEvent_obj::TOUCH_OVER;

::String TouchEvent_obj::TOUCH_ROLL_OUT;

::String TouchEvent_obj::TOUCH_ROLL_OVER;

::String TouchEvent_obj::TOUCH_TAP;

 ::openfl::events::TouchEvent TouchEvent_obj::_hx___create(::String type, ::Dynamic touch,Float stageX,Float stageY, ::openfl::geom::Point local, ::openfl::display::InteractiveObject target){
            	HX_STACK_FRAME("openfl.events.TouchEvent","__create",0x8acd1738,"openfl.events.TouchEvent.__create","openfl/events/TouchEvent.hx",85,0x2fe85d0c)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(touch,"touch")
            	HX_STACK_ARG(stageX,"stageX")
            	HX_STACK_ARG(stageY,"stageY")
            	HX_STACK_ARG(local,"local")
            	HX_STACK_ARG(target,"target")
HXLINE(  87)		HX_VARI(  ::openfl::events::TouchEvent,evt) =  ::openfl::events::TouchEvent_obj::__new(type,true,false,(int)0,true,local->x,local->y,(int)1,(int)1,(int)1,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  88)		evt->stageX = stageX;
HXLINE(  89)		evt->stageY = stageY;
HXLINE(  90)		evt->target = target;
HXLINE(  92)		return evt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(TouchEvent_obj,_hx___create,return )


TouchEvent_obj::TouchEvent_obj()
{
}

void TouchEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TouchEvent);
	HX_MARK_MEMBER_NAME(altKey,"altKey");
	HX_MARK_MEMBER_NAME(commandKey,"commandKey");
	HX_MARK_MEMBER_NAME(controlKey,"controlKey");
	HX_MARK_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_MARK_MEMBER_NAME(delta,"delta");
	HX_MARK_MEMBER_NAME(isPrimaryTouchPoint,"isPrimaryTouchPoint");
	HX_MARK_MEMBER_NAME(localX,"localX");
	HX_MARK_MEMBER_NAME(localY,"localY");
	HX_MARK_MEMBER_NAME(pressure,"pressure");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	HX_MARK_MEMBER_NAME(sizeX,"sizeX");
	HX_MARK_MEMBER_NAME(sizeY,"sizeY");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	HX_MARK_MEMBER_NAME(touchPointID,"touchPointID");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TouchEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(altKey,"altKey");
	HX_VISIT_MEMBER_NAME(commandKey,"commandKey");
	HX_VISIT_MEMBER_NAME(controlKey,"controlKey");
	HX_VISIT_MEMBER_NAME(ctrlKey,"ctrlKey");
	HX_VISIT_MEMBER_NAME(delta,"delta");
	HX_VISIT_MEMBER_NAME(isPrimaryTouchPoint,"isPrimaryTouchPoint");
	HX_VISIT_MEMBER_NAME(localX,"localX");
	HX_VISIT_MEMBER_NAME(localY,"localY");
	HX_VISIT_MEMBER_NAME(pressure,"pressure");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	HX_VISIT_MEMBER_NAME(sizeX,"sizeX");
	HX_VISIT_MEMBER_NAME(sizeY,"sizeY");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	HX_VISIT_MEMBER_NAME(touchPointID,"touchPointID");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TouchEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { return hx::Val( delta); }
		if (HX_FIELD_EQ(inName,"sizeX") ) { return hx::Val( sizeX); }
		if (HX_FIELD_EQ(inName,"sizeY") ) { return hx::Val( sizeY); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { return hx::Val( altKey); }
		if (HX_FIELD_EQ(inName,"localX") ) { return hx::Val( localX); }
		if (HX_FIELD_EQ(inName,"localY") ) { return hx::Val( localY); }
		if (HX_FIELD_EQ(inName,"stageX") ) { return hx::Val( stageX); }
		if (HX_FIELD_EQ(inName,"stageY") ) { return hx::Val( stageY); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { return hx::Val( ctrlKey); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { return hx::Val( pressure); }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return hx::Val( shiftKey); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandKey") ) { return hx::Val( commandKey); }
		if (HX_FIELD_EQ(inName,"controlKey") ) { return hx::Val( controlKey); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return hx::Val( touchPointID); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return hx::Val( relatedObject); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateAfterEvent") ) { return hx::Val( updateAfterEvent_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { return hx::Val( isPrimaryTouchPoint); }
	}
	return super::__Field(inName,inCallProp);
}

bool TouchEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__create") ) { outValue = _hx___create_dyn(); return true; }
	}
	return false;
}

hx::Val TouchEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delta") ) { delta=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizeX") ) { sizeX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizeY") ) { sizeY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"altKey") ) { altKey=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localX") ) { localX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localY") ) { localY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ctrlKey") ) { ctrlKey=inValue.Cast< Bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< Bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"commandKey") ) { commandKey=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controlKey") ) { controlKey=inValue.Cast< Bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< Int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast<  ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { isPrimaryTouchPoint=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TouchEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"));
	outFields->push(HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43"));
	outFields->push(HX_HCSTRING("controlKey","\x42","\x8e","\xa5","\x04"));
	outFields->push(HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"));
	outFields->push(HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("isPrimaryTouchPoint","\x29","\x3f","\x07","\x49"));
	outFields->push(HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59"));
	outFields->push(HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"));
	outFields->push(HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"));
	outFields->push(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"));
	outFields->push(HX_HCSTRING("sizeX","\x77","\x08","\xd9","\x7c"));
	outFields->push(HX_HCSTRING("sizeY","\x78","\x08","\xd9","\x7c"));
	outFields->push(HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"));
	outFields->push(HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"));
	outFields->push(HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TouchEvent_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(TouchEvent_obj,altKey),HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44")},
	{hx::fsBool,(int)offsetof(TouchEvent_obj,commandKey),HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43")},
	{hx::fsBool,(int)offsetof(TouchEvent_obj,controlKey),HX_HCSTRING("controlKey","\x42","\x8e","\xa5","\x04")},
	{hx::fsBool,(int)offsetof(TouchEvent_obj,ctrlKey),HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61")},
	{hx::fsInt,(int)offsetof(TouchEvent_obj,delta),HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7")},
	{hx::fsBool,(int)offsetof(TouchEvent_obj,isPrimaryTouchPoint),HX_HCSTRING("isPrimaryTouchPoint","\x29","\x3f","\x07","\x49")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,localX),HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,localY),HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,pressure),HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(TouchEvent_obj,relatedObject),HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8")},
	{hx::fsBool,(int)offsetof(TouchEvent_obj,shiftKey),HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,sizeX),HX_HCSTRING("sizeX","\x77","\x08","\xd9","\x7c")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,sizeY),HX_HCSTRING("sizeY","\x78","\x08","\xd9","\x7c")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,stageX),HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,stageY),HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05")},
	{hx::fsInt,(int)offsetof(TouchEvent_obj,touchPointID),HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo TouchEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_BEGIN,HX_HCSTRING("TOUCH_BEGIN","\x29","\xba","\x86","\x7e")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_END,HX_HCSTRING("TOUCH_END","\xdb","\xef","\x2a","\x2a")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_MOVE,HX_HCSTRING("TOUCH_MOVE","\xf1","\x76","\xb1","\xc0")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_OUT,HX_HCSTRING("TOUCH_OUT","\x8e","\x8c","\x32","\x2a")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_OVER,HX_HCSTRING("TOUCH_OVER","\x34","\x25","\x09","\xc2")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_ROLL_OUT,HX_HCSTRING("TOUCH_ROLL_OUT","\x4c","\x73","\x76","\xde")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_ROLL_OVER,HX_HCSTRING("TOUCH_ROLL_OVER","\xb6","\x24","\x2f","\xc9")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_TAP,HX_HCSTRING("TOUCH_TAP","\x63","\x46","\x36","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String TouchEvent_obj_sMemberFields[] = {
	HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"),
	HX_HCSTRING("commandKey","\x14","\x71","\x9b","\x43"),
	HX_HCSTRING("controlKey","\x42","\x8e","\xa5","\x04"),
	HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"),
	HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"),
	HX_HCSTRING("isPrimaryTouchPoint","\x29","\x3f","\x07","\x49"),
	HX_HCSTRING("localX","\x8d","\x74","\xbf","\x59"),
	HX_HCSTRING("localY","\x8e","\x74","\xbf","\x59"),
	HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"),
	HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"),
	HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"),
	HX_HCSTRING("sizeX","\x77","\x08","\xd9","\x7c"),
	HX_HCSTRING("sizeY","\x78","\x08","\xd9","\x7c"),
	HX_HCSTRING("stageX","\xda","\xfb","\xf1","\x05"),
	HX_HCSTRING("stageY","\xdb","\xfb","\xf1","\x05"),
	HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("updateAfterEvent","\xc7","\xfb","\xc7","\x22"),
	::String(null()) };

static void TouchEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_END,"TOUCH_END");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_TAP,"TOUCH_TAP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TouchEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_END,"TOUCH_END");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_TAP,"TOUCH_TAP");
};

#endif

hx::Class TouchEvent_obj::__mClass;

static ::String TouchEvent_obj_sStaticFields[] = {
	HX_HCSTRING("TOUCH_BEGIN","\x29","\xba","\x86","\x7e"),
	HX_HCSTRING("TOUCH_END","\xdb","\xef","\x2a","\x2a"),
	HX_HCSTRING("TOUCH_MOVE","\xf1","\x76","\xb1","\xc0"),
	HX_HCSTRING("TOUCH_OUT","\x8e","\x8c","\x32","\x2a"),
	HX_HCSTRING("TOUCH_OVER","\x34","\x25","\x09","\xc2"),
	HX_HCSTRING("TOUCH_ROLL_OUT","\x4c","\x73","\x76","\xde"),
	HX_HCSTRING("TOUCH_ROLL_OVER","\xb6","\x24","\x2f","\xc9"),
	HX_HCSTRING("TOUCH_TAP","\x63","\x46","\x36","\x2a"),
	HX_HCSTRING("__create","\x1c","\xd2","\x3e","\x24"),
	::String(null())
};

void TouchEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.TouchEvent","\xd2","\x2e","\x13","\xe5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TouchEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TouchEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TouchEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TouchEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TouchEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TouchEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TouchEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TouchEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TouchEvent_obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",12,0x2fe85d0c)
HXLINE(  12)		TOUCH_BEGIN = HX_("touchBegin",ea,cd,e6,a9);
            	}
{
            	HX_STACK_FRAME("openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",13,0x2fe85d0c)
HXLINE(  13)		TOUCH_END = HX_("touchEnd",5c,c5,09,00);
            	}
{
            	HX_STACK_FRAME("openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",14,0x2fe85d0c)
HXLINE(  14)		TOUCH_MOVE = HX_("touchMove",70,72,cd,0d);
            	}
{
            	HX_STACK_FRAME("openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",15,0x2fe85d0c)
HXLINE(  15)		TOUCH_OUT = HX_("touchOut",0f,62,11,00);
            	}
{
            	HX_STACK_FRAME("openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",16,0x2fe85d0c)
HXLINE(  16)		TOUCH_OVER = HX_("touchOver",b3,20,25,0f);
            	}
{
            	HX_STACK_FRAME("openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",17,0x2fe85d0c)
HXLINE(  17)		TOUCH_ROLL_OUT = HX_("touchRollOut",12,0f,74,87);
            	}
{
            	HX_STACK_FRAME("openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",18,0x2fe85d0c)
HXLINE(  18)		TOUCH_ROLL_OVER = HX_("touchRollOver",50,d6,19,fe);
            	}
{
            	HX_STACK_FRAME("openfl.events.TouchEvent","boot",0xf5220b4e,"openfl.events.TouchEvent.boot","openfl/events/TouchEvent.hx",19,0x2fe85d0c)
HXLINE(  19)		TOUCH_TAP = HX_("touchTap",e4,1b,15,00);
            	}
}

} // end namespace openfl
} // end namespace events
