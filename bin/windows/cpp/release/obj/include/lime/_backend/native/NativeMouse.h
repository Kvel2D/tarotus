// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime__backend_native_NativeMouse
#define INCLUDED_lime__backend_native_NativeMouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeMouse)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS2(lime,ui,Window)

namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeMouse_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NativeMouse_obj OBJ_;
		NativeMouse_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._backend.native.NativeMouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime._backend.native.NativeMouse"); }
		static hx::ObjectPtr< NativeMouse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeMouse_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("NativeMouse","\xee","\x30","\x93","\x57"); }

		static void __boot();
		static ::hx::EnumBase _hx___cursor;
		static Bool _hx___hidden;
		static Bool _hx___lock;
		static void hide();
		static ::Dynamic hide_dyn();

		static void show();
		static ::Dynamic show_dyn();

		static void warp(Int x,Int y, ::lime::ui::Window window);
		static ::Dynamic warp_dyn();

		static ::hx::EnumBase get_cursor();
		static ::Dynamic get_cursor_dyn();

		static ::hx::EnumBase set_cursor(::hx::EnumBase value);
		static ::Dynamic set_cursor_dyn();

		static Bool get_lock();
		static ::Dynamic get_lock_dyn();

		static Bool set_lock(Bool value);
		static ::Dynamic set_lock_dyn();

		static void lime_mouse_hide();
		static ::Dynamic lime_mouse_hide_dyn();

		static void lime_mouse_set_cursor(Int cursor);
		static ::Dynamic lime_mouse_set_cursor_dyn();

		static void lime_mouse_set_lock(Bool lock);
		static ::Dynamic lime_mouse_set_lock_dyn();

		static void lime_mouse_show();
		static ::Dynamic lime_mouse_show_dyn();

		static void lime_mouse_warp(Int x,Int y, ::Dynamic window);
		static ::Dynamic lime_mouse_warp_dyn();

		static ::cpp::Function<  void() > cffi_lime_mouse_hide;
		static ::cpp::Function<  void() > &cffi_lime_mouse_hide_dyn() { return cffi_lime_mouse_hide;}
		static ::cpp::Function<  void(Int) > cffi_lime_mouse_set_cursor;
		static ::cpp::Function<  void(Int) > &cffi_lime_mouse_set_cursor_dyn() { return cffi_lime_mouse_set_cursor;}
		static ::cpp::Function<  void(Bool) > cffi_lime_mouse_set_lock;
		static ::cpp::Function<  void(Bool) > &cffi_lime_mouse_set_lock_dyn() { return cffi_lime_mouse_set_lock;}
		static ::cpp::Function<  void() > cffi_lime_mouse_show;
		static ::cpp::Function<  void() > &cffi_lime_mouse_show_dyn() { return cffi_lime_mouse_show;}
		static ::cpp::Function<  void(Int,Int, ::hx::Object *) > cffi_lime_mouse_warp;
		static ::cpp::Function<  void(Int,Int, ::hx::Object *) > &cffi_lime_mouse_warp_dyn() { return cffi_lime_mouse_warp;}
};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeMouse */ 