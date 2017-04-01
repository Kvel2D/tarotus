// Generated by Haxe 3.3.0
#ifndef INCLUDED_haxegon_Mouse
#define INCLUDED_haxegon_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxegon,Mouse)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES Mouse_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxegon.Mouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxegon.Mouse"); }
		static hx::ObjectPtr< Mouse_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mouse_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Mouse","\x05","\x86","\x92","\x9f"); }

		static void __boot();
		static Bool flash_menu_on;
		static Int x;
		static Int y;
		static Int mousewheel;
		static Bool mouseoffstage;
		static Bool isdragging;
		static Int _current;
		static Int _last;
		static Int _middlecurrent;
		static Int _middlelast;
		static Int _rightcurrent;
		static Int _rightlast;
		static Bool left_held();
		static ::Dynamic left_held_dyn();

		static Bool left_click();
		static ::Dynamic left_click_dyn();

		static Bool left_released();
		static ::Dynamic left_released_dyn();

		static Bool right_held();
		static ::Dynamic right_held_dyn();

		static Bool right_click();
		static ::Dynamic right_click_dyn();

		static Bool right_released();
		static ::Dynamic right_released_dyn();

		static Bool middle_held();
		static ::Dynamic middle_held_dyn();

		static Bool middle_click();
		static ::Dynamic middle_click_dyn();

		static Bool middle_released();
		static ::Dynamic middle_released_dyn();

		static void init( ::openfl::display::DisplayObject stage);
		static ::Dynamic init_dyn();

		static void unload( ::openfl::display::DisplayObject stage);
		static ::Dynamic unload_dyn();

		static void mouse_leave( ::openfl::events::Event e);
		static ::Dynamic mouse_leave_dyn();

		static void mouse_over( ::openfl::events::MouseEvent e);
		static ::Dynamic mouse_over_dyn();

		static void mousewheel_handler( ::openfl::events::MouseEvent e);
		static ::Dynamic mousewheel_handler_dyn();

		static void show();
		static ::Dynamic show_dyn();

		static void hide();
		static ::Dynamic hide_dyn();

		static void update(Int X,Int Y);
		static ::Dynamic update_dyn();

		static void reset();
		static ::Dynamic reset_dyn();

		static void right_down( ::openfl::events::MouseEvent event);
		static ::Dynamic right_down_dyn();

		static void right_up( ::openfl::events::MouseEvent event);
		static ::Dynamic right_up_dyn();

		static void middle_down( ::openfl::events::MouseEvent event);
		static ::Dynamic middle_down_dyn();

		static void middle_up( ::openfl::events::MouseEvent event);
		static ::Dynamic middle_up_dyn();

		static void mouse_down( ::openfl::events::MouseEvent event);
		static ::Dynamic mouse_down_dyn();

		static void mouse_up( ::openfl::events::MouseEvent event);
		static ::Dynamic mouse_up_dyn();

};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Mouse */ 