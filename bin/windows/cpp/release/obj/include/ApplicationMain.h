// Generated by Haxe 3.3.0
#ifndef INCLUDED_ApplicationMain
#define INCLUDED_ApplicationMain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ApplicationMain)
HX_DECLARE_CLASS2(lime,app,Preloader)
HX_DECLARE_CLASS2(openfl,display,Preloader)



class HXCPP_CLASS_ATTRIBUTES ApplicationMain_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ApplicationMain_obj OBJ_;
		ApplicationMain_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="ApplicationMain")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"ApplicationMain"); }
		static hx::ObjectPtr< ApplicationMain_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ApplicationMain_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ApplicationMain","\x89","\xff","\x39","\x4a"); }

		static  ::Dynamic config;
		static  ::openfl::display::Preloader preloader;
		static void create();
		static ::Dynamic create_dyn();

		static void init();
		static ::Dynamic init_dyn();

		static void main();
		static ::Dynamic main_dyn();

		static void start();
		static ::Dynamic start_dyn();

};


#endif /* INCLUDED_ApplicationMain */ 
