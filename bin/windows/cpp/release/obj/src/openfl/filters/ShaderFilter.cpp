// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ShaderFilter
#include <openfl/filters/ShaderFilter.h>
#endif

namespace openfl{
namespace filters{

void ShaderFilter_obj::__construct( ::openfl::display::Shader shader){
            	HX_STACK_FRAME("openfl.filters.ShaderFilter","new",0xe9b87900,"openfl.filters.ShaderFilter.new","openfl/filters/ShaderFilter.hx",17,0x3faaafae)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(shader,"shader")
HXLINE(  19)		super::__construct();
HXLINE(  21)		this->shader = shader;
            	}

Dynamic ShaderFilter_obj::__CreateEmpty() { return new ShaderFilter_obj; }

hx::ObjectPtr< ShaderFilter_obj > ShaderFilter_obj::__new( ::openfl::display::Shader shader)
{
	hx::ObjectPtr< ShaderFilter_obj > _hx_result = new ShaderFilter_obj();
	_hx_result->__construct(shader);
	return _hx_result;
}

Dynamic ShaderFilter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ShaderFilter_obj > _hx_result = new ShaderFilter_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

 ::openfl::filters::BitmapFilter ShaderFilter_obj::clone(){
            	HX_STACK_FRAME("openfl.filters.ShaderFilter","clone",0xd2bb23fd,"openfl.filters.ShaderFilter.clone","openfl/filters/ShaderFilter.hx",26,0x3faaafae)
            	HX_STACK_THIS(this)
HXLINE(  28)		HX_VARI(  ::openfl::filters::ShaderFilter,filter) =  ::openfl::filters::ShaderFilter_obj::__new(this->shader);
HXLINE(  29)		filter->bottomExtension = this->bottomExtension;
HXLINE(  30)		filter->leftExtension = this->leftExtension;
HXLINE(  31)		filter->rightExtension = this->rightExtension;
HXLINE(  32)		filter->topExtension = this->topExtension;
HXLINE(  33)		return filter;
            	}



ShaderFilter_obj::ShaderFilter_obj()
{
}

void ShaderFilter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderFilter);
	HX_MARK_MEMBER_NAME(bottomExtension,"bottomExtension");
	HX_MARK_MEMBER_NAME(leftExtension,"leftExtension");
	HX_MARK_MEMBER_NAME(rightExtension,"rightExtension");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(topExtension,"topExtension");
	HX_MARK_END_CLASS();
}

void ShaderFilter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bottomExtension,"bottomExtension");
	HX_VISIT_MEMBER_NAME(leftExtension,"leftExtension");
	HX_VISIT_MEMBER_NAME(rightExtension,"rightExtension");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(topExtension,"topExtension");
}

hx::Val ShaderFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return hx::Val( shader); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"topExtension") ) { return hx::Val( topExtension); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"leftExtension") ) { return hx::Val( leftExtension); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightExtension") ) { return hx::Val( rightExtension); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bottomExtension") ) { return hx::Val( bottomExtension); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ShaderFilter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::openfl::display::Shader >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"topExtension") ) { topExtension=inValue.Cast< Int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"leftExtension") ) { leftExtension=inValue.Cast< Int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightExtension") ) { rightExtension=inValue.Cast< Int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bottomExtension") ) { bottomExtension=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bottomExtension","\x14","\xd7","\x79","\x1e"));
	outFields->push(HX_HCSTRING("leftExtension","\x78","\xb2","\xfb","\x5e"));
	outFields->push(HX_HCSTRING("rightExtension","\x03","\x0c","\x25","\xc4"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("topExtension","\x2a","\x12","\xa6","\x52"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ShaderFilter_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ShaderFilter_obj,bottomExtension),HX_HCSTRING("bottomExtension","\x14","\xd7","\x79","\x1e")},
	{hx::fsInt,(int)offsetof(ShaderFilter_obj,leftExtension),HX_HCSTRING("leftExtension","\x78","\xb2","\xfb","\x5e")},
	{hx::fsInt,(int)offsetof(ShaderFilter_obj,rightExtension),HX_HCSTRING("rightExtension","\x03","\x0c","\x25","\xc4")},
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(ShaderFilter_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsInt,(int)offsetof(ShaderFilter_obj,topExtension),HX_HCSTRING("topExtension","\x2a","\x12","\xa6","\x52")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ShaderFilter_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderFilter_obj_sMemberFields[] = {
	HX_HCSTRING("bottomExtension","\x14","\xd7","\x79","\x1e"),
	HX_HCSTRING("leftExtension","\x78","\xb2","\xfb","\x5e"),
	HX_HCSTRING("rightExtension","\x03","\x0c","\x25","\xc4"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("topExtension","\x2a","\x12","\xa6","\x52"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void ShaderFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShaderFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderFilter_obj::__mClass;

void ShaderFilter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.ShaderFilter","\x0e","\x39","\x50","\x7c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ShaderFilter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ShaderFilter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShaderFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShaderFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderFilter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters