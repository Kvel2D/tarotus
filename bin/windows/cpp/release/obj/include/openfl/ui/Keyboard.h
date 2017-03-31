// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_ui_Keyboard
#define INCLUDED_openfl_ui_Keyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,ui,Keyboard)

namespace openfl{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Keyboard_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Keyboard_obj OBJ_;
		Keyboard_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.ui.Keyboard")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.ui.Keyboard"); }
		static hx::ObjectPtr< Keyboard_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Keyboard_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Keyboard","\xc7","\x78","\xdb","\x41"); }

		static void __boot();
		static Int NUMBER_0;
		static Int NUMBER_1;
		static Int NUMBER_2;
		static Int NUMBER_3;
		static Int NUMBER_4;
		static Int NUMBER_5;
		static Int NUMBER_6;
		static Int NUMBER_7;
		static Int NUMBER_8;
		static Int NUMBER_9;
		static Int A;
		static Int B;
		static Int C;
		static Int D;
		static Int E;
		static Int F;
		static Int G;
		static Int H;
		static Int I;
		static Int J;
		static Int K;
		static Int L;
		static Int M;
		static Int N;
		static Int O;
		static Int P;
		static Int Q;
		static Int R;
		static Int S;
		static Int T;
		static Int U;
		static Int V;
		static Int W;
		static Int X;
		static Int Y;
		static Int Z;
		static Int NUMPAD_0;
		static Int NUMPAD_1;
		static Int NUMPAD_2;
		static Int NUMPAD_3;
		static Int NUMPAD_4;
		static Int NUMPAD_5;
		static Int NUMPAD_6;
		static Int NUMPAD_7;
		static Int NUMPAD_8;
		static Int NUMPAD_9;
		static Int NUMPAD_MULTIPLY;
		static Int NUMPAD_ADD;
		static Int NUMPAD_ENTER;
		static Int NUMPAD_SUBTRACT;
		static Int NUMPAD_DECIMAL;
		static Int NUMPAD_DIVIDE;
		static Int F1;
		static Int F2;
		static Int F3;
		static Int F4;
		static Int F5;
		static Int F6;
		static Int F7;
		static Int F8;
		static Int F9;
		static Int F10;
		static Int F11;
		static Int F12;
		static Int F13;
		static Int F14;
		static Int F15;
		static Int BACKSPACE;
		static Int TAB;
		static Int ALTERNATE;
		static Int ENTER;
		static Int COMMAND;
		static Int SHIFT;
		static Int CONTROL;
		static Int BREAK;
		static Int CAPS_LOCK;
		static Int NUMPAD;
		static Int ESCAPE;
		static Int SPACE;
		static Int PAGE_UP;
		static Int PAGE_DOWN;
		static Int END;
		static Int HOME;
		static Int LEFT;
		static Int RIGHT;
		static Int UP;
		static Int DOWN;
		static Int INSERT;
		static Int DELETE;
		static Int NUMLOCK;
		static Int SEMICOLON;
		static Int EQUAL;
		static Int COMMA;
		static Int MINUS;
		static Int PERIOD;
		static Int SLASH;
		static Int BACKQUOTE;
		static Int LEFTBRACKET;
		static Int BACKSLASH;
		static Int RIGHTBRACKET;
		static Int QUOTE;
		static Bool capsLock;
		static Bool numLock;
		static Bool isAccessible();
		static ::Dynamic isAccessible_dyn();

		static Int _hx___convertKeyCode(Int key);
		static ::Dynamic _hx___convertKeyCode_dyn();

		static Int _hx___getCharCode(Int key,hx::Null< Bool >  shift);
		static ::Dynamic _hx___getCharCode_dyn();

		static Int _hx___getKeyLocation(Int key);
		static ::Dynamic _hx___getKeyLocation_dyn();

};

} // end namespace openfl
} // end namespace ui

#endif /* INCLUDED_openfl_ui_Keyboard */ 
