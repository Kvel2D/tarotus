// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_LogHelper
#include <lime/tools/helpers/LogHelper.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_PlatformHelper
#include <lime/tools/helpers/PlatformHelper.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif

static const ::String _hx_array_data_0[] = {
	HX_("colors",b0,c5,86,c6),
};
namespace lime{
namespace tools{
namespace helpers{

void LogHelper_obj::__construct() { }

Dynamic LogHelper_obj::__CreateEmpty() { return new LogHelper_obj; }

hx::ObjectPtr< LogHelper_obj > LogHelper_obj::__new()
{
	hx::ObjectPtr< LogHelper_obj > _hx_result = new LogHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic LogHelper_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LogHelper_obj > _hx_result = new LogHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

::String LogHelper_obj::accentColor;

Bool LogHelper_obj::enableColor;

Bool LogHelper_obj::mute;

::String LogHelper_obj::resetColor;

Bool LogHelper_obj::verbose;

 ::EReg LogHelper_obj::colorCodes;

 ::Dynamic LogHelper_obj::colorSupported;

 ::haxe::ds::StringMap LogHelper_obj::sentWarnings;

void LogHelper_obj::error(::String message,::String __o_verboseMessage, ::Dynamic e){
::String verboseMessage = __o_verboseMessage.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACK_FRAME("lime.tools.helpers.LogHelper","error",0xc5e443b7,"lime.tools.helpers.LogHelper.error","lime/tools/helpers/LogHelper.hx",30,0x73a4c904)
            	HX_STACK_ARG(message,"message")
            	HX_STACK_ARG(verboseMessage,"verboseMessage")
            	HX_STACK_ARG(e,"e")
HXLINE(  32)		Bool _hx_tmp;
HXDLIN(  32)		if ((message != HX_("",00,00,00,00))) {
HXLINE(  32)			_hx_tmp = !(::lime::tools::helpers::LogHelper_obj::mute);
            		}
            		else {
HXLINE(  32)			_hx_tmp = false;
            		}
HXDLIN(  32)		if (_hx_tmp) {
HXLINE(  34)			HX_VAR( ::String,output);
HXLINE(  36)			Bool _hx_tmp1;
HXDLIN(  36)			if (::lime::tools::helpers::LogHelper_obj::verbose) {
HXLINE(  36)				_hx_tmp1 = (verboseMessage != HX_("",00,00,00,00));
            			}
            			else {
HXLINE(  36)				_hx_tmp1 = false;
            			}
HXDLIN(  36)			if (_hx_tmp1) {
HXLINE(  38)				output = ((HX_("\x1b""[31;1mError:\x1b""[0m\x1b""[1m ",5c,1a,05,73) + verboseMessage) + HX_("\x1b""[0m\n",4d,df,1c,c8));
            			}
            			else {
HXLINE(  42)				output = ((HX_("\x1b""[31;1mError:\x1b""[0m \x1b""[1m",d4,03,d8,29) + message) + HX_("\x1b""[0m\n",4d,df,1c,c8));
            			}
HXLINE(  46)			 ::haxe::io::Output _hx_tmp2 = ::Sys_obj::_hx_stderr();
HXDLIN(  46)			::String _hx_tmp3 = ::lime::tools::helpers::LogHelper_obj::stripColor(output);
HXDLIN(  46)			_hx_tmp2->write(::haxe::io::Bytes_obj::ofString(_hx_tmp3));
            		}
HXLINE(  50)		Bool _hx_tmp4;
HXDLIN(  50)		if (::lime::tools::helpers::LogHelper_obj::verbose) {
HXLINE(  50)			_hx_tmp4 = hx::IsNotNull( e );
            		}
            		else {
HXLINE(  50)			_hx_tmp4 = false;
            		}
HXDLIN(  50)		if (_hx_tmp4) {
HXLINE(  52)			::cpp::Lib_obj::rethrow(e);
            		}
HXLINE(  56)		::Sys_obj::exit((int)1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LogHelper_obj,error,(void))

void LogHelper_obj::info(::String message,::String __o_verboseMessage){
::String verboseMessage = __o_verboseMessage.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACK_FRAME("lime.tools.helpers.LogHelper","info",0x5878535f,"lime.tools.helpers.LogHelper.info","lime/tools/helpers/LogHelper.hx",63,0x73a4c904)
            	HX_STACK_ARG(message,"message")
            	HX_STACK_ARG(verboseMessage,"verboseMessage")
HXLINE(  63)		Bool _hx_tmp = !(::lime::tools::helpers::LogHelper_obj::mute);
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  65)			Bool _hx_tmp1;
HXDLIN(  65)			if (::lime::tools::helpers::LogHelper_obj::verbose) {
HXLINE(  65)				_hx_tmp1 = (verboseMessage != HX_("",00,00,00,00));
            			}
            			else {
HXLINE(  65)				_hx_tmp1 = false;
            			}
HXDLIN(  65)			if (_hx_tmp1) {
HXLINE(  67)				::lime::tools::helpers::LogHelper_obj::println(verboseMessage);
            			}
            			else {
HXLINE(  69)				if ((message != HX_("",00,00,00,00))) {
HXLINE(  71)					::lime::tools::helpers::LogHelper_obj::println(message);
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LogHelper_obj,info,(void))

void LogHelper_obj::print(::String message){
            	HX_STACK_FRAME("lime.tools.helpers.LogHelper","print",0x1b45d01c,"lime.tools.helpers.LogHelper.print","lime/tools/helpers/LogHelper.hx",82,0x73a4c904)
            	HX_STACK_ARG(message,"message")
HXLINE(  82)		::String _hx_tmp = ::lime::tools::helpers::LogHelper_obj::stripColor(message);
HXDLIN(  82)		::Sys_obj::print(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LogHelper_obj,print,(void))

void LogHelper_obj::println(::String message){
            	HX_STACK_FRAME("lime.tools.helpers.LogHelper","println",0xd46f6d9e,"lime.tools.helpers.LogHelper.println","lime/tools/helpers/LogHelper.hx",89,0x73a4c904)
            	HX_STACK_ARG(message,"message")
HXLINE(  89)		::String _hx_tmp = ::lime::tools::helpers::LogHelper_obj::stripColor(message);
HXDLIN(  89)		::Sys_obj::println(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LogHelper_obj,println,(void))

::String LogHelper_obj::stripColor(::String output){
            	HX_STACK_FRAME("lime.tools.helpers.LogHelper","stripColor",0xb55fa51c,"lime.tools.helpers.LogHelper.stripColor","lime/tools/helpers/LogHelper.hx",94,0x73a4c904)
            	HX_STACK_ARG(output,"output")
HXLINE(  96)		Bool _hx_tmp = hx::IsNull( ::lime::tools::helpers::LogHelper_obj::colorSupported );
HXDLIN(  96)		if (_hx_tmp) {
HXLINE(  98)			::String _hx_tmp1 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();
HXDLIN(  98)			if ((_hx_tmp1 != HX_("windows",83,de,74,e8))) {
HXLINE( 100)				HX_VARI( Int,result) = (int)-1;
HXLINE( 102)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 104)					HX_VARI(  ::sys::io::Process,process) =  ::sys::io::Process_obj::__new(HX_("tput",db,22,02,4d),::Array_obj< ::String >::fromData( _hx_array_data_0,1));
HXLINE( 105)					result = process->exitCode();
HXLINE( 106)					process->close();
            				}
            				catch( ::Dynamic _hx_e){
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic e = _hx_e;
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 110)				::lime::tools::helpers::LogHelper_obj::colorSupported = (result == (int)0);
            			}
            			else {
HXLINE( 114)				::lime::tools::helpers::LogHelper_obj::colorSupported = false;
HXLINE( 116)				Bool _hx_tmp2;
HXDLIN( 116)				::String _hx_tmp3 = ::Sys_obj::getEnv(HX_("TERM",6c,8f,ba,37));
HXDLIN( 116)				if ((_hx_tmp3 != HX_("xterm",e4,63,0f,65))) {
HXLINE( 116)					::String _hx_tmp4 = ::Sys_obj::getEnv(HX_("ANSICON",3f,21,7f,b9));
HXDLIN( 116)					_hx_tmp2 = hx::IsNotNull( _hx_tmp4 );
            				}
            				else {
HXLINE( 116)					_hx_tmp2 = true;
            				}
HXDLIN( 116)				if (_hx_tmp2) {
HXLINE( 118)					::lime::tools::helpers::LogHelper_obj::colorSupported = true;
            				}
            			}
            		}
HXLINE( 126)		Bool _hx_tmp5;
HXDLIN( 126)		if (::lime::tools::helpers::LogHelper_obj::enableColor) {
HXLINE( 126)			_hx_tmp5 = ::lime::tools::helpers::LogHelper_obj::colorSupported;
            		}
            		else {
HXLINE( 126)			_hx_tmp5 = false;
            		}
HXDLIN( 126)		if (_hx_tmp5) {
HXLINE( 128)			return output;
            		}
            		else {
HXLINE( 132)			return ::lime::tools::helpers::LogHelper_obj::colorCodes->replace(output,HX_("",00,00,00,00));
            		}
HXLINE( 126)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LogHelper_obj,stripColor,return )

void LogHelper_obj::warn(::String message,::String __o_verboseMessage,hx::Null< Bool >  __o_allowRepeat){
::String verboseMessage = __o_verboseMessage.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Bool allowRepeat = __o_allowRepeat.Default(false);
            	HX_STACK_FRAME("lime.tools.helpers.LogHelper","warn",0x61af7d37,"lime.tools.helpers.LogHelper.warn","lime/tools/helpers/LogHelper.hx",141,0x73a4c904)
            	HX_STACK_ARG(message,"message")
            	HX_STACK_ARG(verboseMessage,"verboseMessage")
            	HX_STACK_ARG(allowRepeat,"allowRepeat")
HXLINE( 141)		Bool _hx_tmp = !(::lime::tools::helpers::LogHelper_obj::mute);
HXDLIN( 141)		if (_hx_tmp) {
HXLINE( 143)			HX_VARI( ::String,output) = HX_("",00,00,00,00);
HXLINE( 145)			Bool _hx_tmp1;
HXDLIN( 145)			if (::lime::tools::helpers::LogHelper_obj::verbose) {
HXLINE( 145)				_hx_tmp1 = (verboseMessage != HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 145)				_hx_tmp1 = false;
            			}
HXDLIN( 145)			if (_hx_tmp1) {
HXLINE( 147)				output = ((HX_("\x1b""[33;1mWarning:\x1b""[0m \x1b""[1m",2a,58,ec,55) + verboseMessage) + HX_("\x1b""[0m",1d,fa,1d,12));
            			}
            			else {
HXLINE( 149)				if ((message != HX_("",00,00,00,00))) {
HXLINE( 151)					output = ((HX_("\x1b""[33;1mWarning:\x1b""[0m \x1b""[1m",2a,58,ec,55) + message) + HX_("\x1b""[0m",1d,fa,1d,12));
            				}
            			}
HXLINE( 155)			Bool _hx_tmp2;
HXDLIN( 155)			if (!(allowRepeat)) {
HXLINE( 155)				_hx_tmp2 = ::lime::tools::helpers::LogHelper_obj::sentWarnings->exists(output);
            			}
            			else {
HXLINE( 155)				_hx_tmp2 = false;
            			}
HXDLIN( 155)			if (_hx_tmp2) {
HXLINE( 157)				return;
            			}
HXLINE( 161)			::lime::tools::helpers::LogHelper_obj::sentWarnings->set(output,true);
HXLINE( 162)			::lime::tools::helpers::LogHelper_obj::println(output);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LogHelper_obj,warn,(void))


LogHelper_obj::LogHelper_obj()
{
}

bool LogHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mute") ) { outValue = mute; return true; }
		if (HX_FIELD_EQ(inName,"info") ) { outValue = info_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"warn") ) { outValue = warn_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { outValue = verbose; return true; }
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetColor") ) { outValue = resetColor; return true; }
		if (HX_FIELD_EQ(inName,"colorCodes") ) { outValue = colorCodes; return true; }
		if (HX_FIELD_EQ(inName,"stripColor") ) { outValue = stripColor_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accentColor") ) { outValue = accentColor; return true; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { outValue = enableColor; return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sentWarnings") ) { outValue = sentWarnings; return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorSupported") ) { outValue = colorSupported; return true; }
	}
	return false;
}

bool LogHelper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mute") ) { mute=ioValue.Cast< Bool >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=ioValue.Cast< Bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetColor") ) { resetColor=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"colorCodes") ) { colorCodes=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"accentColor") ) { accentColor=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { enableColor=ioValue.Cast< Bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sentWarnings") ) { sentWarnings=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorSupported") ) { colorSupported=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LogHelper_obj_sMemberStorageInfo = 0;
static hx::StaticInfo LogHelper_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &LogHelper_obj::accentColor,HX_HCSTRING("accentColor","\xb9","\x63","\x7e","\x72")},
	{hx::fsBool,(void *) &LogHelper_obj::enableColor,HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15")},
	{hx::fsBool,(void *) &LogHelper_obj::mute,HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48")},
	{hx::fsString,(void *) &LogHelper_obj::resetColor,HX_HCSTRING("resetColor","\x14","\xa9","\xf8","\x32")},
	{hx::fsBool,(void *) &LogHelper_obj::verbose,HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71")},
	{hx::fsObject /*::EReg*/ ,(void *) &LogHelper_obj::colorCodes,HX_HCSTRING("colorCodes","\x43","\x6e","\xc2","\x6e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &LogHelper_obj::colorSupported,HX_HCSTRING("colorSupported","\x4b","\x70","\xb6","\x7c")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &LogHelper_obj::sentWarnings,HX_HCSTRING("sentWarnings","\x0f","\x98","\x66","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void LogHelper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogHelper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LogHelper_obj::accentColor,"accentColor");
	HX_MARK_MEMBER_NAME(LogHelper_obj::enableColor,"enableColor");
	HX_MARK_MEMBER_NAME(LogHelper_obj::mute,"mute");
	HX_MARK_MEMBER_NAME(LogHelper_obj::resetColor,"resetColor");
	HX_MARK_MEMBER_NAME(LogHelper_obj::verbose,"verbose");
	HX_MARK_MEMBER_NAME(LogHelper_obj::colorCodes,"colorCodes");
	HX_MARK_MEMBER_NAME(LogHelper_obj::colorSupported,"colorSupported");
	HX_MARK_MEMBER_NAME(LogHelper_obj::sentWarnings,"sentWarnings");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LogHelper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogHelper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::accentColor,"accentColor");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::enableColor,"enableColor");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::mute,"mute");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::resetColor,"resetColor");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::verbose,"verbose");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::colorCodes,"colorCodes");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::colorSupported,"colorSupported");
	HX_VISIT_MEMBER_NAME(LogHelper_obj::sentWarnings,"sentWarnings");
};

#endif

hx::Class LogHelper_obj::__mClass;

static ::String LogHelper_obj_sStaticFields[] = {
	HX_HCSTRING("accentColor","\xb9","\x63","\x7e","\x72"),
	HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15"),
	HX_HCSTRING("mute","\xd9","\x6e","\x65","\x48"),
	HX_HCSTRING("resetColor","\x14","\xa9","\xf8","\x32"),
	HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"),
	HX_HCSTRING("colorCodes","\x43","\x6e","\xc2","\x6e"),
	HX_HCSTRING("colorSupported","\x4b","\x70","\xb6","\x7c"),
	HX_HCSTRING("sentWarnings","\x0f","\x98","\x66","\xf8"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	HX_HCSTRING("stripColor","\x6b","\x3f","\x1e","\x23"),
	HX_HCSTRING("warn","\x46","\x62","\xf2","\x4e"),
	::String(null())
};

void LogHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.tools.helpers.LogHelper","\x1d","\x2b","\x2f","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LogHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &LogHelper_obj::__SetStatic;
	__mClass->mMarkFunc = LogHelper_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LogHelper_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LogHelper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LogHelper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogHelper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogHelper_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LogHelper_obj::__boot()
{
{
            	HX_STACK_FRAME("lime.tools.helpers.LogHelper","boot",0x53d89f23,"lime.tools.helpers.LogHelper.boot","lime/tools/helpers/LogHelper.hx",19,0x73a4c904)
HXLINE(  19)		accentColor = HX_("\x1b""[32;1m",f8,8c,e6,43);
            	}
{
            	HX_STACK_FRAME("lime.tools.helpers.LogHelper","boot",0x53d89f23,"lime.tools.helpers.LogHelper.boot","lime/tools/helpers/LogHelper.hx",20,0x73a4c904)
HXLINE(  20)		enableColor = true;
            	}
{
            	HX_STACK_FRAME("lime.tools.helpers.LogHelper","boot",0x53d89f23,"lime.tools.helpers.LogHelper.boot","lime/tools/helpers/LogHelper.hx",21,0x73a4c904)
HXLINE(  21)		mute = false;
            	}
{
            	HX_STACK_FRAME("lime.tools.helpers.LogHelper","boot",0x53d89f23,"lime.tools.helpers.LogHelper.boot","lime/tools/helpers/LogHelper.hx",22,0x73a4c904)
HXLINE(  22)		resetColor = HX_("\x1b""[0m",1d,fa,1d,12);
            	}
{
            	HX_STACK_FRAME("lime.tools.helpers.LogHelper","boot",0x53d89f23,"lime.tools.helpers.LogHelper.boot","lime/tools/helpers/LogHelper.hx",23,0x73a4c904)
HXLINE(  23)		verbose = false;
            	}
{
            	HX_STACK_FRAME("lime.tools.helpers.LogHelper","boot",0x53d89f23,"lime.tools.helpers.LogHelper.boot","lime/tools/helpers/LogHelper.hx",25,0x73a4c904)
HXLINE(  25)		colorCodes =  ::EReg_obj::__new(HX_("\\x1b\\[[^m]+m",c1,5f,72,b8),HX_("g",67,00,00,00));
            	}
{
            	HX_STACK_FRAME("lime.tools.helpers.LogHelper","boot",0x53d89f23,"lime.tools.helpers.LogHelper.boot","lime/tools/helpers/LogHelper.hx",27,0x73a4c904)
HXLINE(  27)		sentWarnings =  ::haxe::ds::StringMap_obj::__new();
            	}
}

} // end namespace lime
} // end namespace tools
} // end namespace helpers
