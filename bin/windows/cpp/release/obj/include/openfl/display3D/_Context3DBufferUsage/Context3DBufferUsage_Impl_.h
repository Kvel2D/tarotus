// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_display3D__Context3DBufferUsage_Context3DBufferUsage_Impl_
#define INCLUDED_openfl_display3D__Context3DBufferUsage_Context3DBufferUsage_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display3D,_Context3DBufferUsage,Context3DBufferUsage_Impl_)

namespace openfl{
namespace display3D{
namespace _Context3DBufferUsage{


class HXCPP_CLASS_ATTRIBUTES Context3DBufferUsage_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Context3DBufferUsage_Impl__obj OBJ_;
		Context3DBufferUsage_Impl__obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_"); }
		static hx::ObjectPtr< Context3DBufferUsage_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DBufferUsage_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Context3DBufferUsage_Impl_","\x01","\x5f","\x3c","\xc9"); }

		static void __boot();
		static  ::Dynamic DYNAMIC_DRAW;
		static  ::Dynamic STATIC_DRAW;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString(Int value);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DBufferUsage

#endif /* INCLUDED_openfl_display3D__Context3DBufferUsage_Context3DBufferUsage_Impl_ */ 
