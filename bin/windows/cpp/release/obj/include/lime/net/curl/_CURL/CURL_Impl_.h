// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_net_curl__CURL_CURL_Impl_
#define INCLUDED_lime_net_curl__CURL_CURL_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,net,curl,_CURL,CURL_Impl_)

namespace lime{
namespace net{
namespace curl{
namespace _CURL{


class HXCPP_CLASS_ATTRIBUTES CURL_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CURL_Impl__obj OBJ_;
		CURL_Impl__obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.net.curl._CURL.CURL_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.net.curl._CURL.CURL_Impl_"); }
		static hx::ObjectPtr< CURL_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CURL_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CURL_Impl_","\x8c","\x48","\xb6","\x54"); }

		static void __boot();
		static Int GLOBAL_SSL;
		static Int GLOBAL_WIN32;
		static Int GLOBAL_ALL;
		static Int GLOBAL_NOTHING;
		static Int GLOBAL_DEFAULT;
		static Int GLOBAL_ACK_EINTR;
		static Int getDate(::String date,Int now);
		static ::Dynamic getDate_dyn();

		static void globalCleanup();
		static ::Dynamic globalCleanup_dyn();

		static Int globalInit(Int flags);
		static ::Dynamic globalInit_dyn();

		static ::String version();
		static ::Dynamic version_dyn();

		static  ::Dynamic versionInfo(Int type);
		static ::Dynamic versionInfo_dyn();

		static Bool intGt(Float a,Float b);
		static ::Dynamic intGt_dyn();

		static Float lime_curl_getdate(::String date,Float now);
		static ::Dynamic lime_curl_getdate_dyn();

		static void lime_curl_global_cleanup();
		static ::Dynamic lime_curl_global_cleanup_dyn();

		static Int lime_curl_global_init(Int flags);
		static ::Dynamic lime_curl_global_init_dyn();

		static  ::Dynamic lime_curl_version();
		static ::Dynamic lime_curl_version_dyn();

		static  ::Dynamic lime_curl_version_info(Int type);
		static ::Dynamic lime_curl_version_info_dyn();

		static ::cpp::Function<  Float(::String,Float) > cffi_lime_curl_getdate;
		static ::cpp::Function<  Float(::String,Float) > &cffi_lime_curl_getdate_dyn() { return cffi_lime_curl_getdate;}
		static ::cpp::Function<  void() > cffi_lime_curl_global_cleanup;
		static ::cpp::Function<  void() > &cffi_lime_curl_global_cleanup_dyn() { return cffi_lime_curl_global_cleanup;}
		static ::cpp::Function<  Int(Int) > cffi_lime_curl_global_init;
		static ::cpp::Function<  Int(Int) > &cffi_lime_curl_global_init_dyn() { return cffi_lime_curl_global_init;}
		static ::cpp::Function<   ::hx::Object *() > cffi_lime_curl_version;
		static ::cpp::Function<   ::hx::Object *() > &cffi_lime_curl_version_dyn() { return cffi_lime_curl_version;}
		static ::cpp::Function<   ::hx::Object *(Int) > cffi_lime_curl_version_info;
		static ::cpp::Function<   ::hx::Object *(Int) > &cffi_lime_curl_version_info_dyn() { return cffi_lime_curl_version_info;}
};

} // end namespace lime
} // end namespace net
} // end namespace curl
} // end namespace _CURL

#endif /* INCLUDED_lime_net_curl__CURL_CURL_Impl_ */ 