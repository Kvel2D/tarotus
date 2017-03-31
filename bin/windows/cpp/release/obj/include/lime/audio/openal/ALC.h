// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_audio_openal_ALC
#define INCLUDED_lime_audio_openal_ALC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,audio,openal,ALC)

namespace lime{
namespace audio{
namespace openal{


class HXCPP_CLASS_ATTRIBUTES ALC_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ALC_obj OBJ_;
		ALC_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.audio.openal.ALC")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.audio.openal.ALC"); }
		static hx::ObjectPtr< ALC_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALC_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ALC","\xf8","\x94","\x31","\x00"); }

		static void __boot();
		static Int FALSE;
		static Int TRUE;
		static Int FREQUENCY;
		static Int REFRESH;
		static Int SYNC;
		static Int MONO_SOURCES;
		static Int STEREO_SOURCES;
		static Int NO_ERROR;
		static Int INVALID_DEVICE;
		static Int INVALID_CONTEXT;
		static Int INVALID_ENUM;
		static Int INVALID_VALUE;
		static Int OUT_OF_MEMORY;
		static Int ATTRIBUTES_SIZE;
		static Int ALL_ATTRIBUTES;
		static Int DEFAULT_DEVICE_SPECIFIER;
		static Int DEVICE_SPECIFIER;
		static Int EXTENSIONS;
		static Int ENUMERATE_ALL_EXT;
		static Int DEFAULT_ALL_DEVICES_SPECIFIER;
		static Int ALL_DEVICES_SPECIFIER;
		static Bool closeDevice( ::Dynamic device);
		static ::Dynamic closeDevice_dyn();

		static  ::Dynamic createContext( ::Dynamic device,::Array< Int > attrlist);
		static ::Dynamic createContext_dyn();

		static void destroyContext( ::Dynamic context);
		static ::Dynamic destroyContext_dyn();

		static  ::Dynamic getContextsDevice( ::Dynamic context);
		static ::Dynamic getContextsDevice_dyn();

		static  ::Dynamic getCurrentContext();
		static ::Dynamic getCurrentContext_dyn();

		static Int getError( ::Dynamic device);
		static ::Dynamic getError_dyn();

		static ::String getErrorString( ::Dynamic device);
		static ::Dynamic getErrorString_dyn();

		static ::Array< Int > getIntegerv( ::Dynamic device,Int param,Int size);
		static ::Dynamic getIntegerv_dyn();

		static ::String getString( ::Dynamic device,Int param);
		static ::Dynamic getString_dyn();

		static Bool makeContextCurrent( ::Dynamic context);
		static ::Dynamic makeContextCurrent_dyn();

		static  ::Dynamic openDevice(::String deviceName);
		static ::Dynamic openDevice_dyn();

		static void processContext( ::Dynamic context);
		static ::Dynamic processContext_dyn();

		static void suspendContext( ::Dynamic context);
		static ::Dynamic suspendContext_dyn();

		static Bool lime_alc_close_device( ::Dynamic device);
		static ::Dynamic lime_alc_close_device_dyn();

		static  ::Dynamic lime_alc_create_context( ::Dynamic device, ::Dynamic attrlist);
		static ::Dynamic lime_alc_create_context_dyn();

		static void lime_alc_destroy_context( ::Dynamic context);
		static ::Dynamic lime_alc_destroy_context_dyn();

		static  ::Dynamic lime_alc_get_contexts_device( ::Dynamic context);
		static ::Dynamic lime_alc_get_contexts_device_dyn();

		static  ::Dynamic lime_alc_get_current_context();
		static ::Dynamic lime_alc_get_current_context_dyn();

		static Int lime_alc_get_error( ::Dynamic device);
		static ::Dynamic lime_alc_get_error_dyn();

		static  ::Dynamic lime_alc_get_integerv( ::Dynamic device,Int param,Int size);
		static ::Dynamic lime_alc_get_integerv_dyn();

		static  ::Dynamic lime_alc_get_string( ::Dynamic device,Int param);
		static ::Dynamic lime_alc_get_string_dyn();

		static Bool lime_alc_make_context_current( ::Dynamic context);
		static ::Dynamic lime_alc_make_context_current_dyn();

		static  ::Dynamic lime_alc_open_device(::String devicename);
		static ::Dynamic lime_alc_open_device_dyn();

		static void lime_alc_process_context( ::Dynamic context);
		static ::Dynamic lime_alc_process_context_dyn();

		static void lime_alc_suspend_context( ::Dynamic context);
		static ::Dynamic lime_alc_suspend_context_dyn();

		static ::cpp::Function<  Bool( ::hx::Object *) > cffi_lime_alc_close_device;
		static ::cpp::Function<  Bool( ::hx::Object *) > &cffi_lime_alc_close_device_dyn() { return cffi_lime_alc_close_device;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *, ::hx::Object *) > cffi_lime_alc_create_context;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *, ::hx::Object *) > &cffi_lime_alc_create_context_dyn() { return cffi_lime_alc_create_context;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_alc_destroy_context;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_alc_destroy_context_dyn() { return cffi_lime_alc_destroy_context;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > cffi_lime_alc_get_contexts_device;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > &cffi_lime_alc_get_contexts_device_dyn() { return cffi_lime_alc_get_contexts_device;}
		static ::cpp::Function<   ::hx::Object *() > cffi_lime_alc_get_current_context;
		static ::cpp::Function<   ::hx::Object *() > &cffi_lime_alc_get_current_context_dyn() { return cffi_lime_alc_get_current_context;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_alc_get_error;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_alc_get_error_dyn() { return cffi_lime_alc_get_error;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *,Int,Int) > cffi_lime_alc_get_integerv;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *,Int,Int) > &cffi_lime_alc_get_integerv_dyn() { return cffi_lime_alc_get_integerv;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *,Int) > cffi_lime_alc_get_string;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *,Int) > &cffi_lime_alc_get_string_dyn() { return cffi_lime_alc_get_string;}
		static ::cpp::Function<  Bool( ::hx::Object *) > cffi_lime_alc_make_context_current;
		static ::cpp::Function<  Bool( ::hx::Object *) > &cffi_lime_alc_make_context_current_dyn() { return cffi_lime_alc_make_context_current;}
		static ::cpp::Function<   ::hx::Object *(::String) > cffi_lime_alc_open_device;
		static ::cpp::Function<   ::hx::Object *(::String) > &cffi_lime_alc_open_device_dyn() { return cffi_lime_alc_open_device;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_alc_process_context;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_alc_process_context_dyn() { return cffi_lime_alc_process_context;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_alc_suspend_context;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_alc_suspend_context_dyn() { return cffi_lime_alc_suspend_context;}
};

} // end namespace lime
} // end namespace audio
} // end namespace openal

#endif /* INCLUDED_lime_audio_openal_ALC */ 
