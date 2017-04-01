// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoRenderer
#define INCLUDED_openfl__internal_renderer_cairo_CairoRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS4(openfl,_internal,renderer,cairo,CairoRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES CairoRenderer_obj : public  ::openfl::_internal::renderer::AbstractRenderer_obj
{
	public:
		typedef  ::openfl::_internal::renderer::AbstractRenderer_obj super;
		typedef CairoRenderer_obj OBJ_;
		CairoRenderer_obj();

	public:
		void __construct(Int width,Int height, ::lime::graphics::cairo::Cairo cairo);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.cairo.CairoRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.cairo.CairoRenderer"); }
		static hx::ObjectPtr< CairoRenderer_obj > __new(Int width,Int height, ::lime::graphics::cairo::Cairo cairo);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoRenderer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CairoRenderer","\xcb","\xc9","\x86","\xaa"); }

		 ::lime::graphics::cairo::Cairo cairo;
		void render( ::openfl::display::Stage stage);

		void renderDisplayObject( ::openfl::display::DisplayObject object);
		::Dynamic renderDisplayObject_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo

#endif /* INCLUDED_openfl__internal_renderer_cairo_CairoRenderer */ 