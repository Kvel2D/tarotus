// Generated by Haxe 3.3.0
#ifndef INCLUDED_sys_FileSystem
#define INCLUDED_sys_FileSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(sys,FileSystem)

namespace sys{


class HXCPP_CLASS_ATTRIBUTES FileSystem_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FileSystem_obj OBJ_;
		FileSystem_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="sys.FileSystem")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"sys.FileSystem"); }
		static hx::ObjectPtr< FileSystem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FileSystem_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FileSystem","\xab","\xe2","\x17","\xca"); }

		static Bool exists(::String path);
		static ::Dynamic exists_dyn();

		static  ::Dynamic stat(::String path);
		static ::Dynamic stat_dyn();

		static ::String fullPath(::String relPath);
		static ::Dynamic fullPath_dyn();

		static ::String absolutePath(::String relPath);
		static ::Dynamic absolutePath_dyn();

		static Bool isDirectory(::String path);
		static ::Dynamic isDirectory_dyn();

		static void createDirectory(::String path);
		static ::Dynamic createDirectory_dyn();

		static void deleteFile(::String path);
		static ::Dynamic deleteFile_dyn();

		static void deleteDirectory(::String path);
		static ::Dynamic deleteDirectory_dyn();

		static ::Array< ::String > readDirectory(::String path);
		static ::Dynamic readDirectory_dyn();

};

} // end namespace sys

#endif /* INCLUDED_sys_FileSystem */ 
