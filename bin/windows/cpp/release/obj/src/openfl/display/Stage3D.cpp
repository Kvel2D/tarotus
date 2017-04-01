// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
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
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace openfl{
namespace display{

void Stage3D_obj::__construct(){
            	HX_STACK_FRAME("openfl.display.Stage3D","new",0x52647737,"openfl.display.Stage3D.new","openfl/display/Stage3D.hx",46,0x37141b9b)
            	HX_STACK_THIS(this)
HXLINE(  48)		super::__construct(null());
HXLINE(  50)		this->set_x((int)0);
HXLINE(  51)		this->set_y((int)0);
HXLINE(  53)		this->visible = true;
            	}

Dynamic Stage3D_obj::__CreateEmpty() { return new Stage3D_obj; }

hx::ObjectPtr< Stage3D_obj > Stage3D_obj::__new()
{
	hx::ObjectPtr< Stage3D_obj > _hx_result = new Stage3D_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Stage3D_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stage3D_obj > _hx_result = new Stage3D_obj();
	_hx_result->__construct();
	return _hx_result;
}

void Stage3D_obj::requestContext3D( ::Dynamic __o_context3DRenderMode, ::Dynamic __o_profile){
 ::Dynamic context3DRenderMode = __o_context3DRenderMode.Default(0);
 ::Dynamic profile = __o_profile.Default(0);
            	HX_STACK_FRAME("openfl.display.Stage3D","requestContext3D",0x80c219da,"openfl.display.Stage3D.requestContext3D","openfl/display/Stage3D.hx",60,0x37141b9b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context3DRenderMode,"context3DRenderMode")
            	HX_STACK_ARG(profile,"profile")
HXLINE(  60)		this->_hx___contextRequested = true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,requestContext3D,(void))

void Stage3D_obj::requestContext3DMatchingProfiles( ::openfl::_Vector::ObjectVector profiles){
            	HX_STACK_FRAME("openfl.display.Stage3D","requestContext3DMatchingProfiles",0x5b5ae301,"openfl.display.Stage3D.requestContext3DMatchingProfiles","openfl/display/Stage3D.hx",67,0x37141b9b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(profiles,"profiles")
HXLINE(  67)		this->requestContext3D(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,requestContext3DMatchingProfiles,(void))

void Stage3D_obj::_hx___createContext( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl.display.Stage3D","__createContext",0x1987b48a,"openfl.display.Stage3D.__createContext","openfl/display/Stage3D.hx",72,0x37141b9b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(renderSession,"renderSession")
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,_hx___createContext,(void))

void Stage3D_obj::_hx___renderDOM( ::openfl::display::Stage stage, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl.display.Stage3D","__renderDOM",0x9069cb83,"openfl.display.Stage3D.__renderDOM","openfl/display/Stage3D.hx",79,0x37141b9b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(stage,"stage")
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE(  81)		if (!(this->visible)) {
HXLINE(  81)			return;
            		}
HXLINE(  83)		Bool _hx_tmp = this->_hx___contextRequested;
HXDLIN(  83)		if (_hx_tmp) {
HXLINE(  85)			Bool _hx_tmp1 = hx::IsNull( this->context3D );
HXLINE( 145)			this->_hx___contextRequested = false;
            		}
HXLINE( 149)		Bool _hx_tmp2 = hx::IsNotNull( this->context3D );
HXDLIN( 149)		if (_hx_tmp2) {
HXLINE( 151)			this->_hx___resetContext3DStates();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,_hx___renderDOM,(void))

void Stage3D_obj::_hx___renderGL( ::openfl::display::Stage stage, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl.display.Stage3D","__renderGL",0x25621024,"openfl.display.Stage3D.__renderGL","openfl/display/Stage3D.hx",159,0x37141b9b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(stage,"stage")
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE( 161)		if (!(this->visible)) {
HXLINE( 161)			return;
            		}
HXLINE( 163)		Bool _hx_tmp = this->_hx___contextRequested;
HXDLIN( 163)		if (_hx_tmp) {
HXLINE( 165)			Bool _hx_tmp1 = hx::IsNull( this->context3D );
HXDLIN( 165)			if (_hx_tmp1) {
HXLINE( 167)				this->context3D =  ::openfl::display3D::Context3D_obj::__new(hx::ObjectPtr<OBJ_>(this),renderSession);
HXLINE( 168)				this->dispatchEvent( ::openfl::events::Event_obj::__new(HX_("context3DCreate",7c,bf,59,7b),null(),null()));
            			}
HXLINE( 172)			this->_hx___contextRequested = false;
            		}
HXLINE( 176)		Bool _hx_tmp2 = hx::IsNotNull( this->context3D );
HXDLIN( 176)		if (_hx_tmp2) {
HXLINE( 178)			this->_hx___resetContext3DStates();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,_hx___renderGL,(void))

void Stage3D_obj::_hx___resize(Int width,Int height){
            	HX_STACK_FRAME("openfl.display.Stage3D","__resize",0x193af2dd,"openfl.display.Stage3D.__resize","openfl/display/Stage3D.hx",186,0x37141b9b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,_hx___resize,(void))

void Stage3D_obj::_hx___resetContext3DStates(){
            	HX_STACK_FRAME("openfl.display.Stage3D","__resetContext3DStates",0x6c934f5c,"openfl.display.Stage3D.__resetContext3DStates","openfl/display/Stage3D.hx",200,0x37141b9b)
            	HX_STACK_THIS(this)
HXLINE( 203)		this->context3D->_hx___updateBlendFactors();
HXLINE( 205)		this->context3D->_hx___updateBackbufferViewport();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,_hx___resetContext3DStates,(void))

Float Stage3D_obj::set_x(Float value){
            	HX_STACK_FRAME("openfl.display.Stage3D","set_x",0xeed8e5f2,"openfl.display.Stage3D.set_x","openfl/display/Stage3D.hx",210,0x37141b9b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 212)		this->x = value;
HXLINE( 214)		Bool _hx_tmp = hx::IsNotNull( this->context3D );
HXDLIN( 214)		if (_hx_tmp) {
HXLINE( 216)			this->context3D->_hx___updateBackbufferViewport();
            		}
HXLINE( 220)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,set_x,return )

Float Stage3D_obj::set_y(Float value){
            	HX_STACK_FRAME("openfl.display.Stage3D","set_y",0xeed8e5f3,"openfl.display.Stage3D.set_y","openfl/display/Stage3D.hx",225,0x37141b9b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 227)		this->y = value;
HXLINE( 229)		Bool _hx_tmp = hx::IsNotNull( this->context3D );
HXDLIN( 229)		if (_hx_tmp) {
HXLINE( 231)			this->context3D->_hx___updateBackbufferViewport();
            		}
HXLINE( 235)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,set_y,return )


Stage3D_obj::Stage3D_obj()
{
}

void Stage3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3D);
	HX_MARK_MEMBER_NAME(context3D,"context3D");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(_hx___contextRequested,"__contextRequested");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context3D,"context3D");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(_hx___contextRequested,"__contextRequested");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Stage3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return hx::Val( set_x_dyn()); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return hx::Val( set_y_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return hx::Val( visible); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__resize") ) { return hx::Val( _hx___resize_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { return hx::Val( context3D); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return hx::Val( _hx___renderGL_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return hx::Val( _hx___renderDOM_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__createContext") ) { return hx::Val( _hx___createContext_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"requestContext3D") ) { return hx::Val( requestContext3D_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__contextRequested") ) { return hx::Val( _hx___contextRequested); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__resetContext3DStates") ) { return hx::Val( _hx___resetContext3DStates_dyn()); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"requestContext3DMatchingProfiles") ) { return hx::Val( requestContext3DMatchingProfiles_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Stage3D_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_x(inValue) );x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_y(inValue) );y=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< Bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { context3D=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__contextRequested") ) { _hx___contextRequested=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("__contextRequested","\x9f","\x10","\x4e","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Stage3D_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(Stage3D_obj,context3D),HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16")},
	{hx::fsBool,(int)offsetof(Stage3D_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Stage3D_obj,_hx___contextRequested),HX_HCSTRING("__contextRequested","\x9f","\x10","\x4e","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Stage3D_obj_sStaticStorageInfo = 0;
#endif

static ::String Stage3D_obj_sMemberFields[] = {
	HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("__contextRequested","\x9f","\x10","\x4e","\x81"),
	HX_HCSTRING("requestContext3D","\x11","\x7b","\x31","\xf9"),
	HX_HCSTRING("requestContext3DMatchingProfiles","\x38","\x62","\xbe","\x66"),
	HX_HCSTRING("__createContext","\x33","\xa7","\x6c","\x89"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__resetContext3DStates","\xd3","\xf3","\x5d","\xf3"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void Stage3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stage3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
};

#endif

hx::Class Stage3D_obj::__mClass;

void Stage3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Stage3D","\xc5","\x0f","\x85","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Stage3D_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stage3D_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stage3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stage3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stage3D_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display