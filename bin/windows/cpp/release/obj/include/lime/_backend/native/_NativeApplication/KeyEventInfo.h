// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,KeyEventInfo)

namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES KeyEventInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef KeyEventInfo_obj OBJ_;
		KeyEventInfo_obj();

	public:
		void __construct( ::Dynamic type,hx::Null< Int >  __o_windowID,hx::Null< Int >  __o_keyCode,hx::Null< Int >  __o_modifier);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.KeyEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime._backend.native._NativeApplication.KeyEventInfo"); }
		static hx::ObjectPtr< KeyEventInfo_obj > __new( ::Dynamic type,hx::Null< Int >  __o_windowID,hx::Null< Int >  __o_keyCode,hx::Null< Int >  __o_modifier);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyEventInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("KeyEventInfo","\x29","\x38","\xa3","\x94"); }

		Int keyCode;
		Int modifier;
		Int type;
		Int windowID;
		 ::lime::_backend::native::_NativeApplication::KeyEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo */ 