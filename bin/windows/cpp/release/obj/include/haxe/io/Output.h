// Generated by Haxe 3.3.0
#ifndef INCLUDED_haxe_io_Output
#define INCLUDED_haxe_io_Output

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Output)

namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES Output_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Output_obj OBJ_;
		Output_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.io.Output")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.io.Output"); }
		static hx::ObjectPtr< Output_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Output_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Output","\x21","\x83","\x15","\x41"); }

		virtual void writeByte(Int c);
		::Dynamic writeByte_dyn();

		virtual Int writeBytes( ::haxe::io::Bytes s,Int pos,Int len);
		::Dynamic writeBytes_dyn();

		void write( ::haxe::io::Bytes s);
		::Dynamic write_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_Output */ 
