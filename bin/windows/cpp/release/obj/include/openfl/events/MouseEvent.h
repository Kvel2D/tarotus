// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_events_MouseEvent
#define INCLUDED_openfl_events_MouseEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES MouseEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef MouseEvent_obj OBJ_;
		MouseEvent_obj();

	public:
		void __construct(::String type,hx::Null< Bool >  __o_bubbles,hx::Null< Bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY, ::openfl::display::InteractiveObject relatedObject,hx::Null< Bool >  __o_ctrlKey,hx::Null< Bool >  __o_altKey,hx::Null< Bool >  __o_shiftKey,hx::Null< Bool >  __o_buttonDown,hx::Null< Int >  __o_delta,hx::Null< Bool >  __o_commandKey,hx::Null< Int >  __o_clickCount);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.MouseEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.events.MouseEvent"); }
		static hx::ObjectPtr< MouseEvent_obj > __new(::String type,hx::Null< Bool >  __o_bubbles,hx::Null< Bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY, ::openfl::display::InteractiveObject relatedObject,hx::Null< Bool >  __o_ctrlKey,hx::Null< Bool >  __o_altKey,hx::Null< Bool >  __o_shiftKey,hx::Null< Bool >  __o_buttonDown,hx::Null< Int >  __o_delta,hx::Null< Bool >  __o_commandKey,hx::Null< Int >  __o_clickCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MouseEvent","\xd5","\xbf","\x42","\x8a"); }

		static void __boot();
		static ::String CLICK;
		static ::String DOUBLE_CLICK;
		static ::String MIDDLE_CLICK;
		static ::String MIDDLE_MOUSE_DOWN;
		static ::String MIDDLE_MOUSE_UP;
		static ::String MOUSE_DOWN;
		static ::String MOUSE_MOVE;
		static ::String MOUSE_OUT;
		static ::String MOUSE_OVER;
		static ::String MOUSE_UP;
		static ::String MOUSE_WHEEL;
		static ::String RIGHT_CLICK;
		static ::String RIGHT_MOUSE_DOWN;
		static ::String RIGHT_MOUSE_UP;
		static ::String ROLL_OUT;
		static ::String ROLL_OVER;
		static Bool _hx___altKey;
		static Bool _hx___buttonDown;
		static Bool _hx___commandKey;
		static Bool _hx___ctrlKey;
		static Bool _hx___shiftKey;
		static  ::openfl::events::MouseEvent _hx___create(::String type,Int button,Float stageX,Float stageY, ::openfl::geom::Point local, ::openfl::display::InteractiveObject target,hx::Null< Int >  delta);
		static ::Dynamic _hx___create_dyn();

		Bool altKey;
		Bool buttonDown;
		Bool commandKey;
		Int clickCount;
		Bool ctrlKey;
		Int delta;
		Float localX;
		Float localY;
		 ::openfl::display::InteractiveObject relatedObject;
		Bool shiftKey;
		Float stageX;
		Float stageY;
		 ::openfl::events::Event clone();

		virtual ::String toString();

		void updateAfterEvent();
		::Dynamic updateAfterEvent_dyn();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_MouseEvent */ 
