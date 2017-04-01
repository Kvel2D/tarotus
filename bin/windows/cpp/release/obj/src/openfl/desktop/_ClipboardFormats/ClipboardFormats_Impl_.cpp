// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_desktop__ClipboardFormats_ClipboardFormats_Impl_
#include <openfl/desktop/_ClipboardFormats/ClipboardFormats_Impl_.h>
#endif

namespace openfl{
namespace desktop{
namespace _ClipboardFormats{

void ClipboardFormats_Impl__obj::__construct() { }

Dynamic ClipboardFormats_Impl__obj::__CreateEmpty() { return new ClipboardFormats_Impl__obj; }

hx::ObjectPtr< ClipboardFormats_Impl__obj > ClipboardFormats_Impl__obj::__new()
{
	hx::ObjectPtr< ClipboardFormats_Impl__obj > _hx_result = new ClipboardFormats_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic ClipboardFormats_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ClipboardFormats_Impl__obj > _hx_result = new ClipboardFormats_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic ClipboardFormats_Impl__obj::HTML_FORMAT;

 ::Dynamic ClipboardFormats_Impl__obj::RICH_TEXT_FORMAT;

 ::Dynamic ClipboardFormats_Impl__obj::TEXT_FORMAT;

 ::Dynamic ClipboardFormats_Impl__obj::fromString(::String value){
            	HX_STACK_FRAME("openfl.desktop._ClipboardFormats.ClipboardFormats_Impl_","fromString",0xd137946a,"openfl.desktop._ClipboardFormats.ClipboardFormats_Impl_.fromString","openfl/desktop/ClipboardFormats.hx",12,0x1f520f06)
            	HX_STACK_ARG(value,"value")
HXLINE(  12)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("air:html",db,4f,6e,f9)) ){
HXLINE(  12)			return (int)0;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("air:rtf",f4,49,76,87)) ){
HXLINE(  12)			return (int)1;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("air:text",1d,87,51,01)) ){
HXLINE(  12)			return (int)2;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  12)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  12)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClipboardFormats_Impl__obj,fromString,return )

::String ClipboardFormats_Impl__obj::toString(Int value){
            	HX_STACK_FRAME("openfl.desktop._ClipboardFormats.ClipboardFormats_Impl_","toString",0x5898257b,"openfl.desktop._ClipboardFormats.ClipboardFormats_Impl_.toString","openfl/desktop/ClipboardFormats.hx",25,0x1f520f06)
            	HX_STACK_ARG(value,"value")
HXLINE(  25)		switch((int)(value)){
            			case (int)0: {
HXLINE(  25)				return HX_("air:html",db,4f,6e,f9);
            			}
            			break;
            			case (int)1: {
HXLINE(  25)				return HX_("air:rtf",f4,49,76,87);
            			}
            			break;
            			case (int)2: {
HXLINE(  25)				return HX_("air:text",1d,87,51,01);
            			}
            			break;
            			default:{
HXLINE(  25)				return null();
            			}
            		}
HXDLIN(  25)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClipboardFormats_Impl__obj,toString,return )


ClipboardFormats_Impl__obj::ClipboardFormats_Impl__obj()
{
}

bool ClipboardFormats_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ClipboardFormats_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo ClipboardFormats_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &ClipboardFormats_Impl__obj::HTML_FORMAT,HX_HCSTRING("HTML_FORMAT","\xcb","\x42","\x1c","\xe3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ClipboardFormats_Impl__obj::RICH_TEXT_FORMAT,HX_HCSTRING("RICH_TEXT_FORMAT","\xe6","\xdd","\xd6","\xc3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ClipboardFormats_Impl__obj::TEXT_FORMAT,HX_HCSTRING("TEXT_FORMAT","\xc9","\x57","\x1f","\x83")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ClipboardFormats_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClipboardFormats_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ClipboardFormats_Impl__obj::HTML_FORMAT,"HTML_FORMAT");
	HX_MARK_MEMBER_NAME(ClipboardFormats_Impl__obj::RICH_TEXT_FORMAT,"RICH_TEXT_FORMAT");
	HX_MARK_MEMBER_NAME(ClipboardFormats_Impl__obj::TEXT_FORMAT,"TEXT_FORMAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ClipboardFormats_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClipboardFormats_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ClipboardFormats_Impl__obj::HTML_FORMAT,"HTML_FORMAT");
	HX_VISIT_MEMBER_NAME(ClipboardFormats_Impl__obj::RICH_TEXT_FORMAT,"RICH_TEXT_FORMAT");
	HX_VISIT_MEMBER_NAME(ClipboardFormats_Impl__obj::TEXT_FORMAT,"TEXT_FORMAT");
};

#endif

hx::Class ClipboardFormats_Impl__obj::__mClass;

static ::String ClipboardFormats_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("HTML_FORMAT","\xcb","\x42","\x1c","\xe3"),
	HX_HCSTRING("RICH_TEXT_FORMAT","\xe6","\xdd","\xd6","\xc3"),
	HX_HCSTRING("TEXT_FORMAT","\xc9","\x57","\x1f","\x83"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void ClipboardFormats_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.desktop._ClipboardFormats.ClipboardFormats_Impl_","\x7f","\xe1","\x04","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ClipboardFormats_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ClipboardFormats_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ClipboardFormats_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ClipboardFormats_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ClipboardFormats_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClipboardFormats_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClipboardFormats_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ClipboardFormats_Impl__obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.desktop._ClipboardFormats.ClipboardFormats_Impl_","boot",0x43888581,"openfl.desktop._ClipboardFormats.ClipboardFormats_Impl_.boot","openfl/desktop/ClipboardFormats.hx",6,0x1f520f06)
HXLINE(   6)		HTML_FORMAT = (int)0;
            	}
{
            	HX_STACK_FRAME("openfl.desktop._ClipboardFormats.ClipboardFormats_Impl_","boot",0x43888581,"openfl.desktop._ClipboardFormats.ClipboardFormats_Impl_.boot","openfl/desktop/ClipboardFormats.hx",7,0x1f520f06)
HXLINE(   7)		RICH_TEXT_FORMAT = (int)1;
            	}
{
            	HX_STACK_FRAME("openfl.desktop._ClipboardFormats.ClipboardFormats_Impl_","boot",0x43888581,"openfl.desktop._ClipboardFormats.ClipboardFormats_Impl_.boot","openfl/desktop/ClipboardFormats.hx",8,0x1f520f06)
HXLINE(   8)		TEXT_FORMAT = (int)2;
            	}
}

} // end namespace openfl
} // end namespace desktop
} // end namespace _ClipboardFormats