// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif

static const ::String _hx_array_data_0[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("text",ad,cc,f9,4c),HX_("errorID",a3,8d,0a,ea),
};
namespace openfl{
namespace events{

void ErrorEvent_obj::__construct(::String type,hx::Null< Bool >  __o_bubbles,hx::Null< Bool >  __o_cancelable,::String __o_text,hx::Null< Int >  __o_id){
Bool bubbles = __o_bubbles.Default(false);
Bool cancelable = __o_cancelable.Default(false);
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Int id = __o_id.Default(0);
            	HX_STACK_FRAME("openfl.events.ErrorEvent","new",0x1354a39b,"openfl.events.ErrorEvent.new","openfl/events/ErrorEvent.hx",12,0x9d2fc215)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(bubbles,"bubbles")
            	HX_STACK_ARG(cancelable,"cancelable")
            	HX_STACK_ARG(text,"text")
            	HX_STACK_ARG(id,"id")
HXLINE(  14)		super::__construct(type,bubbles,cancelable,text);
HXLINE(  15)		this->errorID = id;
            	}

Dynamic ErrorEvent_obj::__CreateEmpty() { return new ErrorEvent_obj; }

hx::ObjectPtr< ErrorEvent_obj > ErrorEvent_obj::__new(::String type,hx::Null< Bool >  __o_bubbles,hx::Null< Bool >  __o_cancelable,::String __o_text,hx::Null< Int >  __o_id)
{
	hx::ObjectPtr< ErrorEvent_obj > _hx_result = new ErrorEvent_obj();
	_hx_result->__construct(type,__o_bubbles,__o_cancelable,__o_text,__o_id);
	return _hx_result;
}

Dynamic ErrorEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ErrorEvent_obj > _hx_result = new ErrorEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

 ::openfl::events::Event ErrorEvent_obj::clone(){
            	HX_STACK_FRAME("openfl.events.ErrorEvent","clone",0xbbab6b58,"openfl.events.ErrorEvent.clone","openfl/events/ErrorEvent.hx",20,0x9d2fc215)
            	HX_STACK_THIS(this)
HXLINE(  22)		HX_VARI(  ::openfl::events::ErrorEvent,event) =  ::openfl::events::ErrorEvent_obj::__new(this->type,this->bubbles,this->cancelable,this->text,this->errorID);
HXLINE(  23)		event->target = this->target;
HXLINE(  24)		event->currentTarget = this->currentTarget;
HXLINE(  25)		event->eventPhase = this->eventPhase;
HXLINE(  26)		return event;
            	}


::String ErrorEvent_obj::toString(){
            	HX_STACK_FRAME("openfl.events.ErrorEvent","toString",0x299f6791,"openfl.events.ErrorEvent.toString","openfl/events/ErrorEvent.hx",33,0x9d2fc215)
            	HX_STACK_THIS(this)
HXLINE(  33)		return this->_hx___formatToString(HX_("ErrorEvent",52,bb,79,e1),::Array_obj< ::String >::fromData( _hx_array_data_0,5));
            	}


::String ErrorEvent_obj::ERROR;


ErrorEvent_obj::ErrorEvent_obj()
{
}

hx::Val ErrorEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { return hx::Val( errorID); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ErrorEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { errorID=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ErrorEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ErrorEvent_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ErrorEvent_obj,errorID),HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ErrorEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ErrorEvent_obj::ERROR,HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ErrorEvent_obj_sMemberFields[] = {
	HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void ErrorEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ErrorEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ErrorEvent_obj::ERROR,"ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ErrorEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ErrorEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ErrorEvent_obj::ERROR,"ERROR");
};

#endif

hx::Class ErrorEvent_obj::__mClass;

static ::String ErrorEvent_obj_sStaticFields[] = {
	HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),
	::String(null())
};

void ErrorEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.ErrorEvent","\x29","\x3a","\x86","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ErrorEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ErrorEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ErrorEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ErrorEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ErrorEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ErrorEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ErrorEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ErrorEvent_obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.events.ErrorEvent","boot",0xced38497,"openfl.events.ErrorEvent.boot","openfl/events/ErrorEvent.hx",7,0x9d2fc215)
HXLINE(   7)		ERROR = HX_("error",c8,cb,29,73);
            	}
}

} // end namespace openfl
} // end namespace events