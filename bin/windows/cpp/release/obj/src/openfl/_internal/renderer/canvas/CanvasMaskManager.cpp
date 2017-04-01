// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasMaskManager
#include <openfl/_internal/renderer/canvas/CanvasMaskManager.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

void CanvasMaskManager_obj::__construct( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","new",0x7f907a00,"openfl._internal.renderer.canvas.CanvasMaskManager.new","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",17,0x595783d2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE(  17)		super::__construct(renderSession);
            	}

Dynamic CanvasMaskManager_obj::__CreateEmpty() { return new CanvasMaskManager_obj; }

hx::ObjectPtr< CanvasMaskManager_obj > CanvasMaskManager_obj::__new( ::openfl::_internal::renderer::RenderSession renderSession)
{
	hx::ObjectPtr< CanvasMaskManager_obj > _hx_result = new CanvasMaskManager_obj();
	_hx_result->__construct(renderSession);
	return _hx_result;
}

Dynamic CanvasMaskManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CanvasMaskManager_obj > _hx_result = new CanvasMaskManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void CanvasMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","pushMask",0x279fe646,"openfl._internal.renderer.canvas.CanvasMaskManager.pushMask","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",22,0x595783d2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(mask,"mask")
HXLINE(  24)		HX_VARI(  ::lime::graphics::CanvasRenderContext,context) = this->renderSession->context;
HXLINE(  26)		context->save();
HXLINE(  29)		HX_VARI(  ::openfl::geom::Matrix,transform) = mask->_hx___getRenderTransform();
HXLINE(  31)		context->setTransform(transform->a,transform->b,transform->c,transform->d,transform->tx,transform->ty);
HXLINE(  33)		context->beginPath();
HXLINE(  34)		mask->_hx___renderCanvasMask(this->renderSession);
HXLINE(  36)		context->clip();
            	}


void CanvasMaskManager_obj::pushObject( ::openfl::display::DisplayObject object,hx::Null< Bool >  __o_handleScrollRect){
Bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","pushObject",0x9640ae99,"openfl._internal.renderer.canvas.CanvasMaskManager.pushObject","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",43,0x595783d2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
HXLINE(  45)		Bool _hx_tmp;
HXDLIN(  45)		if (handleScrollRect) {
HXLINE(  45)			 ::openfl::geom::Rectangle _hx_tmp1 = object->get_scrollRect();
HXDLIN(  45)			_hx_tmp = hx::IsNotNull( _hx_tmp1 );
            		}
            		else {
HXLINE(  45)			_hx_tmp = false;
            		}
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  47)			 ::openfl::geom::Rectangle _hx_tmp2 = object->get_scrollRect();
HXDLIN(  47)			this->pushRect(_hx_tmp2,object->_hx___renderTransform);
            		}
HXLINE(  51)		Bool _hx_tmp3 = hx::IsNotNull( object->_hx___mask );
HXDLIN(  51)		if (_hx_tmp3) {
HXLINE(  53)			this->pushMask(object->_hx___mask);
            		}
            	}


void CanvasMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","pushRect",0x2af0f27e,"openfl._internal.renderer.canvas.CanvasMaskManager.pushRect","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",60,0x595783d2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(transform,"transform")
HXLINE(  62)		HX_VARI(  ::lime::graphics::CanvasRenderContext,context) = this->renderSession->context;
HXLINE(  63)		context->save();
HXLINE(  65)		context->setTransform(transform->a,transform->b,transform->c,transform->d,transform->tx,transform->ty);
HXLINE(  67)		context->beginPath();
HXLINE(  68)		context->rect(rect->x,rect->y,rect->width,rect->height);
HXLINE(  69)		context->clip();
            	}


void CanvasMaskManager_obj::popMask(){
            	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","popMask",0xe87360bd,"openfl._internal.renderer.canvas.CanvasMaskManager.popMask","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",76,0x595783d2)
            	HX_STACK_THIS(this)
HXLINE(  76)		this->renderSession->context->restore();
            	}


void CanvasMaskManager_obj::popObject( ::openfl::display::DisplayObject object,hx::Null< Bool >  __o_handleScrollRect){
Bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","popObject",0xcec0f4d0,"openfl._internal.renderer.canvas.CanvasMaskManager.popObject","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",81,0x595783d2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
HXLINE(  83)		Bool _hx_tmp = hx::IsNotNull( object->_hx___mask );
HXDLIN(  83)		if (_hx_tmp) {
HXLINE(  85)			this->popMask();
            		}
HXLINE(  89)		Bool _hx_tmp1;
HXDLIN(  89)		if (handleScrollRect) {
HXLINE(  89)			 ::openfl::geom::Rectangle _hx_tmp2 = object->get_scrollRect();
HXDLIN(  89)			_hx_tmp1 = hx::IsNotNull( _hx_tmp2 );
            		}
            		else {
HXLINE(  89)			_hx_tmp1 = false;
            		}
HXDLIN(  89)		if (_hx_tmp1) {
HXLINE(  91)			this->popRect();
            		}
            	}


void CanvasMaskManager_obj::popRect(){
            	HX_STACK_FRAME("openfl._internal.renderer.canvas.CanvasMaskManager","popRect",0xebc46cf5,"openfl._internal.renderer.canvas.CanvasMaskManager.popRect","openfl/_internal/renderer/canvas/CanvasMaskManager.hx",100,0x595783d2)
            	HX_STACK_THIS(this)
HXLINE( 100)		this->renderSession->context->restore();
            	}



CanvasMaskManager_obj::CanvasMaskManager_obj()
{
}

hx::Val CanvasMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return hx::Val( popMask_dyn()); }
		if (HX_FIELD_EQ(inName,"popRect") ) { return hx::Val( popRect_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return hx::Val( pushMask_dyn()); }
		if (HX_FIELD_EQ(inName,"pushRect") ) { return hx::Val( pushRect_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popObject") ) { return hx::Val( popObject_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushObject") ) { return hx::Val( pushObject_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CanvasMaskManager_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CanvasMaskManager_obj_sStaticStorageInfo = 0;
#endif

static ::String CanvasMaskManager_obj_sMemberFields[] = {
	HX_HCSTRING("pushMask","\xe6","\x73","\x47","\x17"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("pushRect","\x1e","\x80","\x98","\x1a"),
	HX_HCSTRING("popMask","\x1d","\x67","\x11","\x43"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	HX_HCSTRING("popRect","\x55","\x73","\x62","\x46"),
	::String(null()) };

static void CanvasMaskManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CanvasMaskManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasMaskManager_obj::__mClass;

void CanvasMaskManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasMaskManager","\x0e","\xba","\xd3","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CanvasMaskManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CanvasMaskManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CanvasMaskManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CanvasMaskManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasMaskManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasMaskManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas