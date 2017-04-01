// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMMaskManager
#include <openfl/_internal/renderer/dom/DOMMaskManager.h>
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
namespace dom{

void DOMMaskManager_obj::__construct( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","new",0x8d658c18,"openfl._internal.renderer.dom.DOMMaskManager.new","openfl/_internal/renderer/dom/DOMMaskManager.hx",17,0x08bbb658)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE(  17)		super::__construct(renderSession);
            	}

Dynamic DOMMaskManager_obj::__CreateEmpty() { return new DOMMaskManager_obj; }

hx::ObjectPtr< DOMMaskManager_obj > DOMMaskManager_obj::__new( ::openfl::_internal::renderer::RenderSession renderSession)
{
	hx::ObjectPtr< DOMMaskManager_obj > _hx_result = new DOMMaskManager_obj();
	_hx_result->__construct(renderSession);
	return _hx_result;
}

Dynamic DOMMaskManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DOMMaskManager_obj > _hx_result = new DOMMaskManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void DOMMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","pushMask",0xdaba3d2e,"openfl._internal.renderer.dom.DOMMaskManager.pushMask","openfl/_internal/renderer/dom/DOMMaskManager.hx",22,0x08bbb658)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(mask,"mask")
            	}


void DOMMaskManager_obj::pushObject( ::openfl::display::DisplayObject object,hx::Null< Bool >  __o_handleScrollRect){
Bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","pushObject",0x05cc8f81,"openfl._internal.renderer.dom.DOMMaskManager.pushObject","openfl/_internal/renderer/dom/DOMMaskManager.hx",45,0x08bbb658)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
HXLINE(  45)		Bool _hx_tmp = hx::IsNotNull( object->_hx___mask );
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  47)			this->renderSession->maskManager->pushMask(object->_hx___mask);
            		}
            	}


void DOMMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","pushRect",0xde0b4966,"openfl._internal.renderer.dom.DOMMaskManager.pushRect","openfl/_internal/renderer/dom/DOMMaskManager.hx",56,0x08bbb658)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(transform,"transform")
            	}


void DOMMaskManager_obj::popMask(){
            	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","popMask",0x0cd75ed5,"openfl._internal.renderer.dom.DOMMaskManager.popMask","openfl/_internal/renderer/dom/DOMMaskManager.hx",70,0x08bbb658)
            	HX_STACK_THIS(this)
            	}


void DOMMaskManager_obj::popObject( ::openfl::display::DisplayObject object,hx::Null< Bool >  __o_handleScrollRect){
Bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMMaskManager","popObject",0xd2b2a8e8,"openfl._internal.renderer.dom.DOMMaskManager.popObject","openfl/_internal/renderer/dom/DOMMaskManager.hx",79,0x08bbb658)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
HXLINE(  79)		Bool _hx_tmp = hx::IsNotNull( object->_hx___mask );
HXDLIN(  79)		if (_hx_tmp) {
HXLINE(  81)			this->renderSession->maskManager->popMask();
            		}
            	}



DOMMaskManager_obj::DOMMaskManager_obj()
{
}

hx::Val DOMMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return hx::Val( popMask_dyn()); }
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
static hx::StorageInfo *DOMMaskManager_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DOMMaskManager_obj_sStaticStorageInfo = 0;
#endif

static ::String DOMMaskManager_obj_sMemberFields[] = {
	HX_HCSTRING("pushMask","\xe6","\x73","\x47","\x17"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("pushRect","\x1e","\x80","\x98","\x1a"),
	HX_HCSTRING("popMask","\x1d","\x67","\x11","\x43"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	::String(null()) };

static void DOMMaskManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DOMMaskManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMMaskManager_obj::__mClass;

void DOMMaskManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMMaskManager","\x26","\xe0","\xff","\x5f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DOMMaskManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DOMMaskManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DOMMaskManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DOMMaskManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMMaskManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMMaskManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom