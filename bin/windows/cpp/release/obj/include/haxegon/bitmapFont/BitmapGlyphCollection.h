// Generated by Haxe 3.3.0
#ifndef INCLUDED_haxegon_bitmapFont_BitmapGlyphCollection
#define INCLUDED_haxegon_bitmapFont_BitmapGlyphCollection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapFont)
HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapGlyph)
HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapGlyphCollection)

namespace haxegon{
namespace bitmapFont{


class HXCPP_CLASS_ATTRIBUTES BitmapGlyphCollection_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BitmapGlyphCollection_obj OBJ_;
		BitmapGlyphCollection_obj();

	public:
		void __construct( ::haxegon::bitmapFont::BitmapFont font,Float scale,Int color,hx::Null< Bool >  __o_useColor,hx::Null< Bool >  __o_smoothing);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxegon.bitmapFont.BitmapGlyphCollection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxegon.bitmapFont.BitmapGlyphCollection"); }
		static hx::ObjectPtr< BitmapGlyphCollection_obj > __new( ::haxegon::bitmapFont::BitmapFont font,Float scale,Int color,hx::Null< Bool >  __o_useColor,hx::Null< Bool >  __o_smoothing);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapGlyphCollection_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BitmapGlyphCollection","\xdb","\x8b","\x99","\x5e"); }

		Float minOffsetX;
		 ::haxe::ds::IntMap glyphMap;
		::Array< ::Dynamic> glyphs;
		Int color;
		Float scale;
		Float spaceWidth;
		 ::haxegon::bitmapFont::BitmapFont font;
		void prepareGlyphs(hx::Null< Bool >  smoothing);
		::Dynamic prepareGlyphs_dyn();

		void dispose();
		::Dynamic dispose_dyn();

};

} // end namespace haxegon
} // end namespace bitmapFont

#endif /* INCLUDED_haxegon_bitmapFont_BitmapGlyphCollection */ 
