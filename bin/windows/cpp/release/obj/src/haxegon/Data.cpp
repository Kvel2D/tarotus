// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxegon_Data
#include <haxegon/Data.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif

namespace haxegon{

void Data_obj::__construct() { }

Dynamic Data_obj::__CreateEmpty() { return new Data_obj; }

hx::ObjectPtr< Data_obj > Data_obj::__new()
{
	hx::ObjectPtr< Data_obj > _hx_result = new Data_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Data_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Data_obj > _hx_result = new Data_obj();
	_hx_result->__construct();
	return _hx_result;
}

void Data_obj::print_vector_print_2dvector_T(::cpp::VirtualArray vector){
            	HX_STACK_FRAME("haxegon.Data","print_vector_print_2dvector_T",0x8c5b9530,"haxegon.Data.print_vector_print_2dvector_T","haxegon/Data.hx",49,0x29798f45)
            	HX_STACK_ARG(vector,"vector")
HXLINE(  50)		HX_VARI( ::String,line) = HX_("[",5b,00,00,00);
HXLINE(  51)		{
HXLINE(  51)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  51)			HX_VARI( Int,_g) = vector->get_length();
HXDLIN(  51)			while((_g1 < _g)){
HXLINE(  51)				HX_VARI( Int,i) = _g1++;
HXLINE(  52)				::String _hx_tmp = ::Std_obj::string(_hx_array_unsafe_get(vector,i));
HXDLIN(  52)				hx::AddEq(line,(HX_(" ",20,00,00,00) + _hx_tmp));
            			}
            		}
HXLINE(  54)		hx::AddEq(line,HX_("]",5d,00,00,00));
HXLINE(  55)		::haxe::Log_obj::trace(line,hx::SourceInfo(HX_("Data.hx",b4,ca,0d,df),55,HX_("haxegon.Data",98,14,39,96),HX_("print_vector",d5,79,c2,99)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,print_vector_print_2dvector_T,(void))

void Data_obj::print_array_print_2darray_T(::cpp::VirtualArray array){
            	HX_STACK_FRAME("haxegon.Data","print_array_print_2darray_T",0xa85009dc,"haxegon.Data.print_array_print_2darray_T","haxegon/Data.hx",30,0x29798f45)
            	HX_STACK_ARG(array,"array")
HXLINE(  31)		HX_VARI( ::String,line) = HX_("[",5b,00,00,00);
HXLINE(  32)		{
HXLINE(  32)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  32)			HX_VARI( Int,_g) = array->get_length();
HXDLIN(  32)			while((_g1 < _g)){
HXLINE(  32)				HX_VARI( Int,i) = _g1++;
HXLINE(  33)				 ::Dynamic _hx_tmp = array->__get(i);
HXDLIN(  33)				::String _hx_tmp1 = ::Std_obj::string(_hx_tmp);
HXDLIN(  33)				hx::AddEq(line,(HX_(" ",20,00,00,00) + _hx_tmp1));
            			}
            		}
HXLINE(  35)		hx::AddEq(line,HX_("]",5d,00,00,00));
HXLINE(  36)		::haxe::Log_obj::trace(line,hx::SourceInfo(HX_("Data.hx",b4,ca,0d,df),36,HX_("haxegon.Data",98,14,39,96),HX_("print_array",c7,ec,59,14)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,print_array_print_2darray_T,(void))

void Data_obj::print_vector_print_array_of_vectors_T(::cpp::VirtualArray vector){
            	HX_STACK_FRAME("haxegon.Data","print_vector_print_array_of_vectors_T",0x3fbf5d49,"haxegon.Data.print_vector_print_array_of_vectors_T","haxegon/Data.hx",49,0x29798f45)
            	HX_STACK_ARG(vector,"vector")
HXLINE(  50)		HX_VARI( ::String,line) = HX_("[",5b,00,00,00);
HXLINE(  51)		{
HXLINE(  51)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  51)			HX_VARI( Int,_g) = vector->get_length();
HXDLIN(  51)			while((_g1 < _g)){
HXLINE(  51)				HX_VARI( Int,i) = _g1++;
HXLINE(  52)				::String _hx_tmp = ::Std_obj::string(_hx_array_unsafe_get(vector,i));
HXDLIN(  52)				hx::AddEq(line,(HX_(" ",20,00,00,00) + _hx_tmp));
            			}
            		}
HXLINE(  54)		hx::AddEq(line,HX_("]",5d,00,00,00));
HXLINE(  55)		::haxe::Log_obj::trace(line,hx::SourceInfo(HX_("Data.hx",b4,ca,0d,df),55,HX_("haxegon.Data",98,14,39,96),HX_("print_vector",d5,79,c2,99)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,print_vector_print_array_of_vectors_T,(void))

Int Data_obj::width;

Int Data_obj::height;

::String Data_obj::tempstring;

::Array< Int > Data_obj::int_1dvector(Int length){
            	HX_STACK_FRAME("haxegon.Data","int_1dvector",0x6cfcba3c,"haxegon.Data.int_1dvector","haxegon/Data.hx",58,0x29798f45)
            	HX_STACK_ARG(length,"length")
HXLINE(  59)		HX_VARI_NAME( ::Array< Int >,this1,"this") = ::Array_obj< Int >::__new();
HXDLIN(  59)		_hx_array_set_size_exact(this1,length);
HXDLIN(  59)		HX_VARI( ::Array< Int >,vector) = this1;
HXLINE(  60)		{
HXLINE(  60)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  60)			while((_g1 < length)){
HXLINE(  60)				HX_VARI( Int,i) = _g1++;
HXLINE(  61)				vector->__unsafe_set(i,(int)0);
            			}
            		}
HXLINE(  63)		return vector;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,int_1dvector,return )

::Array< ::Dynamic> Data_obj::bool_2dvector(Int width,Int height,hx::Null< Bool >  __o_default_value){
Bool default_value = __o_default_value.Default(false);
            	HX_STACK_FRAME("haxegon.Data","bool_2dvector",0x3fbbe5d4,"haxegon.Data.bool_2dvector","haxegon/Data.hx",66,0x29798f45)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(default_value,"default_value")
HXLINE(  67)		HX_VARI_NAME( ::Array< ::Dynamic>,this1,"this") = ::Array_obj< ::Dynamic>::__new();
HXDLIN(  67)		_hx_array_set_size_exact(this1,width);
HXDLIN(  67)		HX_VARI( ::Array< ::Dynamic>,vector) = this1;
HXLINE(  68)		{
HXLINE(  68)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  68)			while((_g1 < width)){
HXLINE(  68)				HX_VARI( Int,i) = _g1++;
HXLINE(  69)				{
HXLINE(  69)					HX_VARI_NAME( ::Array< Bool >,this2,"this") = ::Array_obj< Bool >::__new();
HXDLIN(  69)					_hx_array_set_size_exact(this2,height);
HXDLIN(  69)					vector->__unsafe_set(i,this2);
            				}
HXLINE(  70)				{
HXLINE(  70)					HX_VARI( Int,_g3) = (int)0;
HXDLIN(  70)					while((_g3 < height)){
HXLINE(  70)						HX_VARI( Int,j) = _g3++;
HXLINE(  71)						{
HXLINE(  71)							::Array< Bool > this3 = ( (::Array< Bool >)(_hx_array_unsafe_get(vector,i)) );
HXDLIN(  71)							this3->__unsafe_set(j,default_value);
            						}
            					}
            				}
            			}
            		}
HXLINE(  74)		return vector;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Data_obj,bool_2dvector,return )

::Array< ::Dynamic> Data_obj::int_2dvector(Int width,Int height,hx::Null< Int >  __o_default_value){
Int default_value = __o_default_value.Default(0);
            	HX_STACK_FRAME("haxegon.Data","int_2dvector",0xa62f2c5b,"haxegon.Data.int_2dvector","haxegon/Data.hx",77,0x29798f45)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(default_value,"default_value")
HXLINE(  78)		HX_VARI_NAME( ::Array< ::Dynamic>,this1,"this") = ::Array_obj< ::Dynamic>::__new();
HXDLIN(  78)		_hx_array_set_size_exact(this1,width);
HXDLIN(  78)		HX_VARI( ::Array< ::Dynamic>,vector) = this1;
HXLINE(  79)		{
HXLINE(  79)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  79)			while((_g1 < width)){
HXLINE(  79)				HX_VARI( Int,i) = _g1++;
HXLINE(  80)				{
HXLINE(  80)					HX_VARI_NAME( ::Array< Int >,this2,"this") = ::Array_obj< Int >::__new();
HXDLIN(  80)					_hx_array_set_size_exact(this2,height);
HXDLIN(  80)					vector->__unsafe_set(i,this2);
            				}
HXLINE(  81)				{
HXLINE(  81)					HX_VARI( Int,_g3) = (int)0;
HXDLIN(  81)					while((_g3 < height)){
HXLINE(  81)						HX_VARI( Int,j) = _g3++;
HXLINE(  82)						{
HXLINE(  82)							::Array< Int > this3 = ( (::Array< Int >)(_hx_array_unsafe_get(vector,i)) );
HXDLIN(  82)							this3->__unsafe_set(j,default_value);
            						}
            					}
            				}
            			}
            		}
HXLINE(  85)		return vector;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Data_obj,int_2dvector,return )

::Array< ::Dynamic> Data_obj::int_3dvector(Int width,Int height,Int depth){
            	HX_STACK_FRAME("haxegon.Data","int_3dvector",0xdf619e7a,"haxegon.Data.int_3dvector","haxegon/Data.hx",88,0x29798f45)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(depth,"depth")
HXLINE(  89)		HX_VARI_NAME( ::Array< ::Dynamic>,this1,"this") = ::Array_obj< ::Dynamic>::__new();
HXDLIN(  89)		_hx_array_set_size_exact(this1,width);
HXDLIN(  89)		HX_VARI( ::Array< ::Dynamic>,vector) = this1;
HXLINE(  90)		{
HXLINE(  90)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  90)			while((_g1 < width)){
HXLINE(  90)				HX_VARI( Int,i) = _g1++;
HXLINE(  91)				{
HXLINE(  91)					HX_VARI_NAME( ::Array< ::Dynamic>,this2,"this") = ::Array_obj< ::Dynamic>::__new();
HXDLIN(  91)					_hx_array_set_size_exact(this2,height);
HXDLIN(  91)					vector->__unsafe_set(i,this2);
            				}
HXLINE(  92)				{
HXLINE(  92)					HX_VARI( Int,_g3) = (int)0;
HXDLIN(  92)					while((_g3 < height)){
HXLINE(  92)						HX_VARI( Int,j) = _g3++;
HXLINE(  93)						{
HXLINE(  93)							::Array< ::Dynamic> this3 = ( (::Array< ::Dynamic>)(_hx_array_unsafe_get(vector,i)) );
HXDLIN(  93)							HX_VARI_NAME( ::Array< Int >,this4,"this") = ::Array_obj< Int >::__new();
HXDLIN(  93)							_hx_array_set_size_exact(this4,depth);
HXDLIN(  93)							this3->__unsafe_set(j,this4);
            						}
            					}
            				}
            			}
            		}
HXLINE(  96)		return vector;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Data_obj,int_3dvector,return )

::Array< ::Dynamic> Data_obj::float_2dvector(Int width,Int height){
            	HX_STACK_FRAME("haxegon.Data","float_2dvector",0xde66878e,"haxegon.Data.float_2dvector","haxegon/Data.hx",99,0x29798f45)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE( 100)		HX_VARI_NAME( ::Array< ::Dynamic>,this1,"this") = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 100)		_hx_array_set_size_exact(this1,width);
HXDLIN( 100)		HX_VARI( ::Array< ::Dynamic>,vector) = this1;
HXLINE( 101)		{
HXLINE( 101)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 101)			while((_g1 < width)){
HXLINE( 101)				HX_VARI( Int,i) = _g1++;
HXLINE( 102)				{
HXLINE( 102)					HX_VARI_NAME( ::Array< Float >,this2,"this") = ::Array_obj< Float >::__new();
HXDLIN( 102)					_hx_array_set_size_exact(this2,height);
HXDLIN( 102)					vector->__unsafe_set(i,this2);
            				}
            			}
            		}
HXLINE( 104)		return vector;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Data_obj,float_2dvector,return )

::Array< ::Dynamic> Data_obj::float_3dvector(Int width,Int height,Int depth){
            	HX_STACK_FRAME("haxegon.Data","float_3dvector",0x1798f9ad,"haxegon.Data.float_3dvector","haxegon/Data.hx",107,0x29798f45)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(depth,"depth")
HXLINE( 108)		HX_VARI_NAME( ::Array< ::Dynamic>,this1,"this") = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 108)		_hx_array_set_size_exact(this1,width);
HXDLIN( 108)		HX_VARI( ::Array< ::Dynamic>,vector) = this1;
HXLINE( 109)		{
HXLINE( 109)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 109)			while((_g1 < width)){
HXLINE( 109)				HX_VARI( Int,i) = _g1++;
HXLINE( 110)				{
HXLINE( 110)					HX_VARI_NAME( ::Array< ::Dynamic>,this2,"this") = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 110)					_hx_array_set_size_exact(this2,height);
HXDLIN( 110)					vector->__unsafe_set(i,this2);
            				}
HXLINE( 111)				{
HXLINE( 111)					HX_VARI( Int,_g3) = (int)0;
HXDLIN( 111)					while((_g3 < height)){
HXLINE( 111)						HX_VARI( Int,j) = _g3++;
HXLINE( 112)						{
HXLINE( 112)							::Array< ::Dynamic> this3 = ( (::Array< ::Dynamic>)(_hx_array_unsafe_get(vector,i)) );
HXDLIN( 112)							HX_VARI_NAME( ::Array< Float >,this4,"this") = ::Array_obj< Float >::__new();
HXDLIN( 112)							_hx_array_set_size_exact(this4,depth);
HXDLIN( 112)							this3->__unsafe_set(j,this4);
            						}
            					}
            				}
            			}
            		}
HXLINE( 115)		return vector;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Data_obj,float_3dvector,return )

::Array< ::String > Data_obj::load_text(::String textfile){
            	HX_STACK_FRAME("haxegon.Data","load_text",0xf1601150,"haxegon.Data.load_text","haxegon/Data.hx",118,0x29798f45)
            	HX_STACK_ARG(textfile,"textfile")
HXLINE( 119)		::haxegon::Data_obj::tempstring = ::openfl::Assets_obj::getText(((HX_("data/text/",fd,91,6c,8f) + textfile) + HX_(".txt",02,3f,c0,1e)));
HXLINE( 120)		Bool _hx_tmp = hx::IsNull( ::haxegon::Data_obj::tempstring );
HXDLIN( 120)		if (_hx_tmp) {
HXLINE( 121)			::haxe::Log_obj::trace(((HX_("load_text() couldn't find a file named ",f2,3e,4b,fb) + textfile) + HX_(".txt",02,3f,c0,1e)),hx::SourceInfo(HX_("Data.hx",b4,ca,0d,df),121,HX_("haxegon.Data",98,14,39,96),HX_("load_text",a6,c4,14,88)));
HXLINE( 122)			return null();
            		}
HXLINE( 124)		::haxegon::Data_obj::tempstring = ::haxegon::Data_obj::replacechar(::haxegon::Data_obj::tempstring,HX_("\r",0d,00,00,00),HX_("",00,00,00,00));
HXLINE( 125)		return ::haxegon::Data_obj::tempstring.split(HX_("\n",0a,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,load_text,return )

::String Data_obj::mid(::String currentstring,hx::Null< Int >  __o_start,hx::Null< Int >  __o_length){
Int start = __o_start.Default(0);
Int length = __o_length.Default(1);
            	HX_STACK_FRAME("haxegon.Data","mid",0x4df622b2,"haxegon.Data.mid","haxegon/Data.hx",197,0x29798f45)
            	HX_STACK_ARG(currentstring,"currentstring")
            	HX_STACK_ARG(start,"start")
            	HX_STACK_ARG(length,"length")
HXLINE( 197)		return currentstring.substr(start,length);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Data_obj,mid,return )

::String Data_obj::replacechar(::String currentstring,::String __o_ch,::String __o_ch2){
::String ch = __o_ch.Default(HX_HCSTRING("|","\x7c","\x00","\x00","\x00"));
::String ch2 = __o_ch2.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACK_FRAME("haxegon.Data","replacechar",0x37b91c34,"haxegon.Data.replacechar","haxegon/Data.hx",200,0x29798f45)
            	HX_STACK_ARG(currentstring,"currentstring")
            	HX_STACK_ARG(ch,"ch")
            	HX_STACK_ARG(ch2,"ch2")
HXLINE( 201)		HX_VARI( ::String,fixedstring) = HX_("",00,00,00,00);
HXLINE( 202)		{
HXLINE( 202)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 202)			HX_VARI( Int,_g) = currentstring.length;
HXDLIN( 202)			while((_g1 < _g)){
HXLINE( 202)				HX_VARI( Int,i) = _g1++;
HXLINE( 203)				::String _hx_tmp = ::haxegon::Data_obj::mid(currentstring,i,null());
HXDLIN( 203)				if ((_hx_tmp == ch)) {
HXLINE( 204)					hx::AddEq(fixedstring,ch2);
            				}
            				else {
HXLINE( 206)					::String _hx_tmp1 = ::haxegon::Data_obj::mid(currentstring,i,null());
HXDLIN( 206)					hx::AddEq(fixedstring,_hx_tmp1);
            				}
            			}
            		}
HXLINE( 209)		return fixedstring;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Data_obj,replacechar,return )


Data_obj::Data_obj()
{
}

bool Data_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mid") ) { outValue = mid_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { outValue = width; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { outValue = height; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"load_text") ) { outValue = load_text_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tempstring") ) { outValue = tempstring; return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"replacechar") ) { outValue = replacechar_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"int_1dvector") ) { outValue = int_1dvector_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"int_2dvector") ) { outValue = int_2dvector_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"int_3dvector") ) { outValue = int_3dvector_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"bool_2dvector") ) { outValue = bool_2dvector_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"float_2dvector") ) { outValue = float_2dvector_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"float_3dvector") ) { outValue = float_3dvector_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"print_array_print_2darray_T") ) { outValue = print_array_print_2darray_T_dyn(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"print_vector_print_2dvector_T") ) { outValue = print_vector_print_2dvector_T_dyn(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"print_vector_print_array_of_vectors_T") ) { outValue = print_vector_print_array_of_vectors_T_dyn(); return true; }
	}
	return false;
}

bool Data_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=ioValue.Cast< Int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=ioValue.Cast< Int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tempstring") ) { tempstring=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Data_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Data_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Data_obj::width,HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(void *) &Data_obj::height,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsString,(void *) &Data_obj::tempstring,HX_HCSTRING("tempstring","\xe5","\x72","\x0b","\xf8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Data_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Data_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Data_obj::width,"width");
	HX_MARK_MEMBER_NAME(Data_obj::height,"height");
	HX_MARK_MEMBER_NAME(Data_obj::tempstring,"tempstring");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Data_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Data_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Data_obj::width,"width");
	HX_VISIT_MEMBER_NAME(Data_obj::height,"height");
	HX_VISIT_MEMBER_NAME(Data_obj::tempstring,"tempstring");
};

#endif

hx::Class Data_obj::__mClass;

static ::String Data_obj_sStaticFields[] = {
	HX_HCSTRING("print_vector_print_2dvector_T","\x86","\x37","\x50","\xbd"),
	HX_HCSTRING("print_array_print_2darray_T","\xb2","\x4a","\x92","\xd3"),
	HX_HCSTRING("print_vector_print_array_of_vectors_T","\x9f","\x45","\x3f","\x26"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("tempstring","\xe5","\x72","\x0b","\xf8"),
	HX_HCSTRING("int_1dvector","\xa6","\x40","\xd2","\x88"),
	HX_HCSTRING("bool_2dvector","\x2a","\xfc","\xbb","\x7e"),
	HX_HCSTRING("int_2dvector","\xc5","\xb2","\x04","\xc2"),
	HX_HCSTRING("int_3dvector","\xe4","\x24","\x37","\xfb"),
	HX_HCSTRING("float_2dvector","\x78","\xfc","\x79","\xbf"),
	HX_HCSTRING("float_3dvector","\x97","\x6e","\xac","\xf8"),
	HX_HCSTRING("load_text","\xa6","\xc4","\x14","\x88"),
	HX_HCSTRING("mid","\x88","\x11","\x53","\x00"),
	HX_HCSTRING("replacechar","\x0a","\xd1","\x81","\x6b"),
	::String(null())
};

void Data_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Data","\x98","\x14","\x39","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Data_obj::__GetStatic;
	__mClass->mSetStaticField = &Data_obj::__SetStatic;
	__mClass->mMarkFunc = Data_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Data_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Data_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Data_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Data_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Data_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Data_obj::__boot()
{
{
            	HX_STACK_FRAME("haxegon.Data","boot",0xe22777c8,"haxegon.Data.boot","haxegon/Data.hx",7,0x29798f45)
HXLINE(   7)		width = (int)0;
            	}
{
            	HX_STACK_FRAME("haxegon.Data","boot",0xe22777c8,"haxegon.Data.boot","haxegon/Data.hx",8,0x29798f45)
HXLINE(   8)		height = (int)0;
            	}
}

} // end namespace haxegon