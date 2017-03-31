// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__Vector_FunctionVector
#define INCLUDED_openfl__Vector_FunctionVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,FunctionVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)

namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES FunctionVector_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FunctionVector_obj OBJ_;
		FunctionVector_obj();

	public:
		void __construct( ::Dynamic length, ::Dynamic fixed,::cpp::VirtualArray array);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._Vector.FunctionVector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._Vector.FunctionVector"); }
		static hx::ObjectPtr< FunctionVector_obj > __new( ::Dynamic length, ::Dynamic fixed,::cpp::VirtualArray array);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FunctionVector_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("FunctionVector","\x1b","\xc6","\x6f","\x50"); }

		Bool fixed;
		::cpp::VirtualArray _hx___array;
		::Dynamic concat(::Dynamic a);
		::Dynamic concat_dyn();

		::Dynamic copy();
		::Dynamic copy_dyn();

		 ::Dynamic get(Int index);
		::Dynamic get_dyn();

		Int indexOf( ::Dynamic x, ::Dynamic from);
		::Dynamic indexOf_dyn();

		void insertAt(Int index, ::Dynamic element);
		::Dynamic insertAt_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		::String join(::String sep);
		::Dynamic join_dyn();

		Int lastIndexOf( ::Dynamic x, ::Dynamic from);
		::Dynamic lastIndexOf_dyn();

		 ::Dynamic pop();
		::Dynamic pop_dyn();

		Int push( ::Dynamic x);
		::Dynamic push_dyn();

		void reverse();
		::Dynamic reverse_dyn();

		 ::Dynamic set(Int index, ::Dynamic value);
		::Dynamic set_dyn();

		 ::Dynamic shift();
		::Dynamic shift_dyn();

		::Dynamic slice( ::Dynamic startIndex, ::Dynamic endIndex);
		::Dynamic slice_dyn();

		void sort( ::Dynamic f);
		::Dynamic sort_dyn();

		::Dynamic splice(Int pos,Int len);
		::Dynamic splice_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void unshift( ::Dynamic x);
		::Dynamic unshift_dyn();

		Int get_length();
		::Dynamic get_length_dyn();

		Int set_length(Int value);
		::Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_FunctionVector */ 
