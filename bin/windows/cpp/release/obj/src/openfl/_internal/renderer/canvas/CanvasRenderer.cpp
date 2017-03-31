// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasMaskManager
#include <openfl/_internal/renderer/canvas/CanvasMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer
#include <openfl/_internal/renderer/canvas/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

void CanvasRenderer_obj::__construct(Int width,Int height, ::lime::graphics::CanvasRenderContext context){
            	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasRenderer","new",0x66327fe8,"openfl._internal.renderer.canvas.CanvasRenderer.new","openfl/_internal/renderer/canvas/CanvasRenderer.hx",18,0x1be544e6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(context,"context")
HXLINE(  20)		super::__construct(width,height);
HXLINE(  22)		this->context = context;
HXLINE(  24)		this->renderSession =  ::openfl::_internal::renderer::RenderSession_obj::__new();
HXLINE(  25)		this->renderSession->context = context;
HXLINE(  26)		this->renderSession->roundPixels = true;
HXLINE(  27)		this->renderSession->renderer = hx::ObjectPtr<OBJ_>(this);
HXLINE(  29)		this->renderSession->maskManager =  ::openfl::_internal::renderer::canvas::CanvasMaskManager_obj::__new(this->renderSession);
            	}

Dynamic CanvasRenderer_obj::__CreateEmpty() { return new CanvasRenderer_obj; }

hx::ObjectPtr< CanvasRenderer_obj > CanvasRenderer_obj::__new(Int width,Int height, ::lime::graphics::CanvasRenderContext context)
{
	hx::ObjectPtr< CanvasRenderer_obj > _hx_result = new CanvasRenderer_obj();
	_hx_result->__construct(width,height,context);
	return _hx_result;
}

Dynamic CanvasRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CanvasRenderer_obj > _hx_result = new CanvasRenderer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

void CanvasRenderer_obj::render( ::openfl::display::Stage stage){
            	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasRenderer","render",0x244720ce,"openfl._internal.renderer.canvas.CanvasRenderer.render","openfl/_internal/renderer/canvas/CanvasRenderer.hx",35,0x1be544e6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(stage,"stage")
HXLINE(  37)		this->context->setTransform((int)1,(int)0,(int)0,(int)1,(int)0,(int)0);
HXLINE(  38)		this->context->globalAlpha = (int)1;
HXLINE(  40)		Bool _hx_tmp;
HXDLIN(  40)		if (!(stage->_hx___transparent)) {
HXLINE(  40)			_hx_tmp = stage->_hx___clearBeforeRender;
            		}
            		else {
HXLINE(  40)			_hx_tmp = false;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  42)			this->context->fillStyle = stage->_hx___colorString;
HXLINE(  43)			this->context->fillRect((int)0,(int)0,stage->stageWidth,stage->stageHeight);
            		}
            		else {
HXLINE(  45)			Bool _hx_tmp1;
HXDLIN(  45)			if (stage->_hx___transparent) {
HXLINE(  45)				_hx_tmp1 = stage->_hx___clearBeforeRender;
            			}
            			else {
HXLINE(  45)				_hx_tmp1 = false;
            			}
HXDLIN(  45)			if (_hx_tmp1) {
HXLINE(  47)				this->context->clearRect((int)0,(int)0,stage->stageWidth,stage->stageHeight);
            			}
            		}
HXLINE(  51)		stage->_hx___renderCanvas(this->renderSession);
            	}



CanvasRenderer_obj::CanvasRenderer_obj()
{
}

void CanvasRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasRenderer);
	HX_MARK_MEMBER_NAME(context,"context");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CanvasRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CanvasRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return hx::Val( context); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CanvasRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::lime::graphics::CanvasRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CanvasRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::CanvasRenderContext*/ ,(int)offsetof(CanvasRenderer_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CanvasRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String CanvasRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void CanvasRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CanvasRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasRenderer_obj::__mClass;

void CanvasRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasRenderer","\xf6","\xab","\xb2","\xdc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CanvasRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CanvasRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CanvasRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CanvasRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
