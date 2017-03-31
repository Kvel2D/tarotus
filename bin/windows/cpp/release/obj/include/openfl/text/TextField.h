// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_text_TextField
#define INCLUDED_openfl_text_TextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS3(openfl,_internal,text,TextEngine)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(openfl,text,TextLineMetrics)

namespace openfl{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextField_obj : public  ::openfl::display::InteractiveObject_obj
{
	public:
		typedef  ::openfl::display::InteractiveObject_obj super;
		typedef TextField_obj OBJ_;
		TextField_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.text.TextField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.text.TextField"); }
		static hx::ObjectPtr< TextField_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextField_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextField","\xad","\x04","\x54","\x3b"); }

		static  ::openfl::text::TextFormat _hx___defaultTextFormat;
		 ::openfl::geom::Rectangle _hx___bounds;
		Int _hx___caretIndex;
		 ::haxe::Timer _hx___cursorTimer;
		Bool _hx___dirty;
		Bool _hx___inputEnabled;
		Bool _hx___isHTML;
		Bool _hx___layoutDirty;
		Int _hx___selectionIndex;
		Bool _hx___showCursor;
		 ::openfl::_internal::text::TextEngine _hx___textEngine;
		 ::openfl::text::TextFormat _hx___textFormat;
		void appendText(::String text);
		::Dynamic appendText_dyn();

		 ::openfl::geom::Rectangle getCharBoundaries(Int charIndex);
		::Dynamic getCharBoundaries_dyn();

		Int getCharIndexAtPoint(Float x,Float y);
		::Dynamic getCharIndexAtPoint_dyn();

		Int getFirstCharInParagraph(Int charIndex);
		::Dynamic getFirstCharInParagraph_dyn();

		Int getLineIndexAtPoint(Float x,Float y);
		::Dynamic getLineIndexAtPoint_dyn();

		Int getLineIndexOfChar(Int charIndex);
		::Dynamic getLineIndexOfChar_dyn();

		Int getLineLength(Int lineIndex);
		::Dynamic getLineLength_dyn();

		 ::openfl::text::TextLineMetrics getLineMetrics(Int lineIndex);
		::Dynamic getLineMetrics_dyn();

		Int getLineOffset(Int lineIndex);
		::Dynamic getLineOffset_dyn();

		::String getLineText(Int lineIndex);
		::Dynamic getLineText_dyn();

		Int getParagraphLength(Int charIndex);
		::Dynamic getParagraphLength_dyn();

		 ::openfl::text::TextFormat getTextFormat(hx::Null< Int >  beginIndex,hx::Null< Int >  endIndex);
		::Dynamic getTextFormat_dyn();

		void replaceSelectedText(::String value);
		::Dynamic replaceSelectedText_dyn();

		void replaceText(Int beginIndex,Int endIndex,::String newText);
		::Dynamic replaceText_dyn();

		void setSelection(Int beginIndex,Int endIndex);
		::Dynamic setSelection_dyn();

		void setTextFormat( ::openfl::text::TextFormat format,hx::Null< Int >  beginIndex,hx::Null< Int >  endIndex);
		::Dynamic setTextFormat_dyn();

		void _hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);

		::hx::EnumBase _hx___getCursor();

		Int _hx___getPosition(Float x,Float y);
		::Dynamic _hx___getPosition_dyn();

		Bool _hx___hitTest(Float x,Float y,Bool shapeFlag,::Array< ::Dynamic> stack,Bool interactiveOnly, ::openfl::display::DisplayObject hitObject);

		Bool _hx___hitTestMask(Float x,Float y);

		void _hx___renderCairo( ::openfl::_internal::renderer::RenderSession renderSession);

		void _hx___renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession);

		void _hx___renderDOM( ::openfl::_internal::renderer::RenderSession renderSession);

		void _hx___renderGL( ::openfl::_internal::renderer::RenderSession renderSession);

		void _hx___startCursorTimer();
		::Dynamic _hx___startCursorTimer_dyn();

		void _hx___startTextInput();
		::Dynamic _hx___startTextInput_dyn();

		void _hx___stopCursorTimer();
		::Dynamic _hx___stopCursorTimer_dyn();

		void _hx___stopTextInput();
		::Dynamic _hx___stopTextInput_dyn();

		void _hx___updateLayout();
		::Dynamic _hx___updateLayout_dyn();

		 ::Dynamic get_antiAliasType();
		::Dynamic get_antiAliasType_dyn();

		 ::Dynamic set_antiAliasType( ::Dynamic value);
		::Dynamic set_antiAliasType_dyn();

		 ::Dynamic get_autoSize();
		::Dynamic get_autoSize_dyn();

		 ::Dynamic set_autoSize( ::Dynamic value);
		::Dynamic set_autoSize_dyn();

		Bool get_background();
		::Dynamic get_background_dyn();

		Bool set_background(Bool value);
		::Dynamic set_background_dyn();

		Int get_backgroundColor();
		::Dynamic get_backgroundColor_dyn();

		Int set_backgroundColor(Int value);
		::Dynamic set_backgroundColor_dyn();

		Bool get_border();
		::Dynamic get_border_dyn();

		Bool set_border(Bool value);
		::Dynamic set_border_dyn();

		Int get_borderColor();
		::Dynamic get_borderColor_dyn();

		Int set_borderColor(Int value);
		::Dynamic set_borderColor_dyn();

		Int get_bottomScrollV();
		::Dynamic get_bottomScrollV_dyn();

		Int get_caretIndex();
		::Dynamic get_caretIndex_dyn();

		 ::openfl::text::TextFormat get_defaultTextFormat();
		::Dynamic get_defaultTextFormat_dyn();

		 ::openfl::text::TextFormat set_defaultTextFormat( ::openfl::text::TextFormat value);
		::Dynamic set_defaultTextFormat_dyn();

		Bool get_displayAsPassword();
		::Dynamic get_displayAsPassword_dyn();

		Bool set_displayAsPassword(Bool value);
		::Dynamic set_displayAsPassword_dyn();

		Bool get_embedFonts();
		::Dynamic get_embedFonts_dyn();

		Bool set_embedFonts(Bool value);
		::Dynamic set_embedFonts_dyn();

		 ::Dynamic get_gridFitType();
		::Dynamic get_gridFitType_dyn();

		 ::Dynamic set_gridFitType( ::Dynamic value);
		::Dynamic set_gridFitType_dyn();

		Float get_height();

		Float set_height(Float value);

		::String get_htmlText();
		::Dynamic get_htmlText_dyn();

		::String set_htmlText(::String value);
		::Dynamic set_htmlText_dyn();

		Int get_length();
		::Dynamic get_length_dyn();

		Int get_maxChars();
		::Dynamic get_maxChars_dyn();

		Int set_maxChars(Int value);
		::Dynamic set_maxChars_dyn();

		Int get_maxScrollH();
		::Dynamic get_maxScrollH_dyn();

		Int get_maxScrollV();
		::Dynamic get_maxScrollV_dyn();

		Bool get_multiline();
		::Dynamic get_multiline_dyn();

		Bool set_multiline(Bool value);
		::Dynamic set_multiline_dyn();

		Int get_numLines();
		::Dynamic get_numLines_dyn();

		::String get_restrict();
		::Dynamic get_restrict_dyn();

		::String set_restrict(::String value);
		::Dynamic set_restrict_dyn();

		Int get_scrollH();
		::Dynamic get_scrollH_dyn();

		Int set_scrollH(Int value);
		::Dynamic set_scrollH_dyn();

		Int get_scrollV();
		::Dynamic get_scrollV_dyn();

		Int set_scrollV(Int value);
		::Dynamic set_scrollV_dyn();

		Bool get_selectable();
		::Dynamic get_selectable_dyn();

		Bool set_selectable(Bool value);
		::Dynamic set_selectable_dyn();

		Int get_selectionBeginIndex();
		::Dynamic get_selectionBeginIndex_dyn();

		Int get_selectionEndIndex();
		::Dynamic get_selectionEndIndex_dyn();

		Float get_sharpness();
		::Dynamic get_sharpness_dyn();

		Float set_sharpness(Float value);
		::Dynamic set_sharpness_dyn();

		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String value);
		::Dynamic set_text_dyn();

		Int get_textColor();
		::Dynamic get_textColor_dyn();

		Int set_textColor(Int value);
		::Dynamic set_textColor_dyn();

		Float get_textWidth();
		::Dynamic get_textWidth_dyn();

		Float get_textHeight();
		::Dynamic get_textHeight_dyn();

		 ::Dynamic get_type();
		::Dynamic get_type_dyn();

		 ::Dynamic set_type( ::Dynamic value);
		::Dynamic set_type_dyn();

		Float get_width();

		Float set_width(Float value);

		Bool get_wordWrap();
		::Dynamic get_wordWrap_dyn();

		Bool set_wordWrap(Bool value);
		::Dynamic set_wordWrap_dyn();

		void stage_onMouseMove( ::openfl::events::MouseEvent event);
		::Dynamic stage_onMouseMove_dyn();

		void stage_onMouseUp( ::openfl::events::MouseEvent event);
		::Dynamic stage_onMouseUp_dyn();

		void this_onAddedToStage( ::openfl::events::Event event);
		::Dynamic this_onAddedToStage_dyn();

		void this_onFocusIn( ::openfl::events::FocusEvent event);
		::Dynamic this_onFocusIn_dyn();

		void this_onFocusOut( ::openfl::events::FocusEvent event);
		::Dynamic this_onFocusOut_dyn();

		void this_onMouseDown( ::openfl::events::MouseEvent event);
		::Dynamic this_onMouseDown_dyn();

		void window_onKeyDown(Int key,Int modifier);
		::Dynamic window_onKeyDown_dyn();

		void window_onTextInput(::String value);
		::Dynamic window_onTextInput_dyn();

};

} // end namespace openfl
} // end namespace text

#endif /* INCLUDED_openfl_text_TextField */ 
