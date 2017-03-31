// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_BoolVector
#include <openfl/_Vector/BoolVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_FunctionVector
#include <openfl/_Vector/FunctionVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_Vector_Impl_
#include <openfl/_Vector/Vector_Impl_.h>
#endif

namespace openfl{
namespace _Vector{

void Vector_Impl__obj::__construct() { }

Dynamic Vector_Impl__obj::__CreateEmpty() { return new Vector_Impl__obj; }

hx::ObjectPtr< Vector_Impl__obj > Vector_Impl__obj::__new()
{
	hx::ObjectPtr< Vector_Impl__obj > _hx_result = new Vector_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Vector_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Vector_Impl__obj > _hx_result = new Vector_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::openfl::_Vector::ObjectVector Vector_Impl__obj::concat(::Dynamic this1, ::openfl::_Vector::ObjectVector a){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","concat",0x0c502a95,"openfl._Vector.Vector_Impl_.concat","openfl/Vector.hx",22,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(a,"a")
HXLINE(  22)		return ( ( ::openfl::_Vector::ObjectVector)(::openfl::_Vector::IVector_obj::concat(this1,a)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,concat,return )

 ::openfl::_Vector::ObjectVector Vector_Impl__obj::copy(::Dynamic this1){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","copy",0x7571caf6,"openfl._Vector.Vector_Impl_.copy","openfl/Vector.hx",29,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  29)		return ( ( ::openfl::_Vector::ObjectVector)(::openfl::_Vector::IVector_obj::copy(this1)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,copy,return )

 ::Dynamic Vector_Impl__obj::get(::Dynamic this1,Int index){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","get",0x456ad475,"openfl._Vector.Vector_Impl_.get","openfl/Vector.hx",36,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(index,"index")
HXLINE(  36)		return ::openfl::_Vector::IVector_obj::get(this1,index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,get,return )

Int Vector_Impl__obj::indexOf(::Dynamic this1, ::Dynamic x, ::Dynamic __o_from){
 ::Dynamic from = __o_from.Default(0);
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","indexOf",0x8c5c7828,"openfl._Vector.Vector_Impl_.indexOf","openfl/Vector.hx",43,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(from,"from")
HXLINE(  43)		return ::openfl::_Vector::IVector_obj::indexOf(this1,x,from);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,indexOf,return )

void Vector_Impl__obj::insertAt(::Dynamic this1,Int index, ::Dynamic element){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","insertAt",0x400bc04d,"openfl._Vector.Vector_Impl_.insertAt","openfl/Vector.hx",50,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(element,"element")
HXLINE(  50)		::openfl::_Vector::IVector_obj::insertAt(this1,index,element);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,insertAt,(void))

 ::Dynamic Vector_Impl__obj::iterator(::Dynamic this1){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","iterator",0x11868daf,"openfl._Vector.Vector_Impl_.iterator","openfl/Vector.hx",57,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  57)		return ::openfl::_Vector::IVector_obj::iterator(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,iterator,return )

::String Vector_Impl__obj::join(::Dynamic this1,::String sep){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","join",0x7a12432b,"openfl._Vector.Vector_Impl_.join","openfl/Vector.hx",64,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(sep,"sep")
HXLINE(  64)		return ::openfl::_Vector::IVector_obj::join(this1,sep);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,join,return )

Int Vector_Impl__obj::lastIndexOf(::Dynamic this1, ::Dynamic x, ::Dynamic __o_from){
 ::Dynamic from = __o_from.Default(0);
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","lastIndexOf",0x5bdcc7f2,"openfl._Vector.Vector_Impl_.lastIndexOf","openfl/Vector.hx",71,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(from,"from")
HXLINE(  71)		return ::openfl::_Vector::IVector_obj::lastIndexOf(this1,x,from);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,lastIndexOf,return )

 ::Dynamic Vector_Impl__obj::pop(::Dynamic this1){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","pop",0x4571b170,"openfl._Vector.Vector_Impl_.pop","openfl/Vector.hx",78,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  78)		return ::openfl::_Vector::IVector_obj::pop(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,pop,return )

Int Vector_Impl__obj::push(::Dynamic this1, ::Dynamic x){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","push",0x7e0e211b,"openfl._Vector.Vector_Impl_.push","openfl/Vector.hx",85,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(x,"x")
HXLINE(  85)		return ::openfl::_Vector::IVector_obj::push(this1,x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,push,return )

void Vector_Impl__obj::reverse(::Dynamic this1){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","reverse",0xc6996881,"openfl._Vector.Vector_Impl_.reverse","openfl/Vector.hx",92,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  92)		::openfl::_Vector::IVector_obj::reverse(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,reverse,(void))

 ::Dynamic Vector_Impl__obj::set(::Dynamic this1,Int index, ::Dynamic value){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","set",0x4573ef81,"openfl._Vector.Vector_Impl_.set","openfl/Vector.hx",99,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(value,"value")
HXLINE(  99)		return ::openfl::_Vector::IVector_obj::set(this1,index,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,set,return )

 ::Dynamic Vector_Impl__obj::shift(::Dynamic this1){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","shift",0x7fe33621,"openfl._Vector.Vector_Impl_.shift","openfl/Vector.hx",106,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 106)		return ::openfl::_Vector::IVector_obj::shift(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,shift,return )

 ::openfl::_Vector::ObjectVector Vector_Impl__obj::slice(::Dynamic this1, ::Dynamic pos, ::Dynamic end){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","slice",0x82880df1,"openfl._Vector.Vector_Impl_.slice","openfl/Vector.hx",113,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(end,"end")
HXLINE( 113)		return ( ( ::openfl::_Vector::ObjectVector)(::openfl::_Vector::IVector_obj::slice(this1,pos,end)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,slice,return )

void Vector_Impl__obj::sort(::Dynamic this1, ::Dynamic f){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","sort",0x8005369f,"openfl._Vector.Vector_Impl_.sort","openfl/Vector.hx",120,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(f,"f")
HXLINE( 120)		::openfl::_Vector::IVector_obj::sort(this1,f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,sort,(void))

 ::openfl::_Vector::ObjectVector Vector_Impl__obj::splice(::Dynamic this1,Int pos,Int len){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","splice",0x041ea6fd,"openfl._Vector.Vector_Impl_.splice","openfl/Vector.hx",127,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(len,"len")
HXLINE( 127)		return ( ( ::openfl::_Vector::ObjectVector)(::openfl::_Vector::IVector_obj::splice(this1,pos,len)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,splice,return )

::String Vector_Impl__obj::toString(::Dynamic this1){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toString",0xb65b146d,"openfl._Vector.Vector_Impl_.toString","openfl/Vector.hx",134,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 134)		return ::openfl::_Vector::IVector_obj::toString(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,toString,return )

void Vector_Impl__obj::unshift(::Dynamic this1, ::Dynamic x){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","unshift",0x245112e8,"openfl._Vector.Vector_Impl_.unshift","openfl/Vector.hx",141,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(x,"x")
HXLINE( 141)		::openfl::_Vector::IVector_obj::unshift(this1,x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,unshift,(void))

 ::openfl::_Vector::ObjectVector Vector_Impl__obj::ofArray(::cpp::VirtualArray a){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","ofArray",0x348f5861,"openfl._Vector.Vector_Impl_.ofArray","openfl/Vector.hx",146,0x4a01873c)
            	HX_STACK_ARG(a,"a")
HXLINE( 148)		Int length = null();
HXDLIN( 148)		Bool fixed = null();
HXDLIN( 148)		HX_VARI(  ::openfl::_Vector::ObjectVector,vector) =  ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());
HXLINE( 150)		{
HXLINE( 150)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 150)			HX_VARI( Int,_g) = a->get_length();
HXDLIN( 150)			while((_g1 < _g)){
HXLINE( 150)				HX_VARI( Int,i) = _g1++;
HXLINE( 152)				vector->set(i,a->__get(i));
            			}
            		}
HXLINE( 156)		return vector;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,ofArray,return )

::Dynamic Vector_Impl__obj::convert(::Dynamic v){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","convert",0xc6672d52,"openfl._Vector.Vector_Impl_.convert","openfl/Vector.hx",163,0x4a01873c)
            	HX_STACK_ARG(v,"v")
HXLINE( 163)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,convert,return )

 ::openfl::_Vector::BoolVector Vector_Impl__obj::toBoolVector(::Dynamic t,Int length,Bool fixed){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toBoolVector",0xb60d0e29,"openfl._Vector.Vector_Impl_.toBoolVector","openfl/Vector.hx",170,0x4a01873c)
            	HX_STACK_ARG(t,"t")
            	HX_STACK_ARG(length,"length")
            	HX_STACK_ARG(fixed,"fixed")
HXLINE( 170)		return  ::openfl::_Vector::BoolVector_obj::__new(length,fixed,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,toBoolVector,return )

 ::openfl::_Vector::IntVector Vector_Impl__obj::toIntVector(::Dynamic t,Int length,Bool fixed){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toIntVector",0xe9b44cf6,"openfl._Vector.Vector_Impl_.toIntVector","openfl/Vector.hx",177,0x4a01873c)
            	HX_STACK_ARG(t,"t")
            	HX_STACK_ARG(length,"length")
            	HX_STACK_ARG(fixed,"fixed")
HXLINE( 177)		return  ::openfl::_Vector::IntVector_obj::__new(length,fixed,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,toIntVector,return )

 ::openfl::_Vector::FloatVector Vector_Impl__obj::toFloatVector(::Dynamic t,Int length,Bool fixed){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toFloatVector",0xde8c8663,"openfl._Vector.Vector_Impl_.toFloatVector","openfl/Vector.hx",184,0x4a01873c)
            	HX_STACK_ARG(t,"t")
            	HX_STACK_ARG(length,"length")
            	HX_STACK_ARG(fixed,"fixed")
HXLINE( 184)		return  ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,toFloatVector,return )

 ::openfl::_Vector::FunctionVector Vector_Impl__obj::toFunctionVector(::Dynamic t,Int length,Bool fixed){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toFunctionVector",0xabc41997,"openfl._Vector.Vector_Impl_.toFunctionVector","openfl/Vector.hx",191,0x4a01873c)
            	HX_STACK_ARG(t,"t")
            	HX_STACK_ARG(length,"length")
            	HX_STACK_ARG(fixed,"fixed")
HXLINE( 191)		return  ::openfl::_Vector::FunctionVector_obj::__new(length,fixed,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,toFunctionVector,return )

 ::openfl::_Vector::ObjectVector Vector_Impl__obj::toObjectVector(::Dynamic t,Int length,Bool fixed){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","toObjectVector",0xdd29457e,"openfl._Vector.Vector_Impl_.toObjectVector","openfl/Vector.hx",198,0x4a01873c)
            	HX_STACK_ARG(t,"t")
            	HX_STACK_ARG(length,"length")
            	HX_STACK_ARG(fixed,"fixed")
HXLINE( 198)		return  ::openfl::_Vector::ObjectVector_obj::__new(length,fixed,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,toObjectVector,return )

 ::openfl::_Vector::ObjectVector Vector_Impl__obj::fromBoolVector( ::openfl::_Vector::BoolVector vector){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","fromBoolVector",0x5de98118,"openfl._Vector.Vector_Impl_.fromBoolVector","openfl/Vector.hx",205,0x4a01873c)
            	HX_STACK_ARG(vector,"vector")
HXLINE( 205)		return ( ( ::openfl::_Vector::ObjectVector)(vector) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromBoolVector,return )

 ::openfl::_Vector::ObjectVector Vector_Impl__obj::fromIntVector( ::openfl::_Vector::IntVector vector){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","fromIntVector",0xcee7cce7,"openfl._Vector.Vector_Impl_.fromIntVector","openfl/Vector.hx",212,0x4a01873c)
            	HX_STACK_ARG(vector,"vector")
HXLINE( 212)		return ( ( ::openfl::_Vector::ObjectVector)(vector) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromIntVector,return )

 ::openfl::_Vector::ObjectVector Vector_Impl__obj::fromFloatVector( ::openfl::_Vector::FloatVector vector){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","fromFloatVector",0x1794a494,"openfl._Vector.Vector_Impl_.fromFloatVector","openfl/Vector.hx",219,0x4a01873c)
            	HX_STACK_ARG(vector,"vector")
HXLINE( 219)		return ( ( ::openfl::_Vector::ObjectVector)(vector) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromFloatVector,return )

 ::openfl::_Vector::ObjectVector Vector_Impl__obj::fromFunctionVector( ::openfl::_Vector::FunctionVector vector){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","fromFunctionVector",0xbc863006,"openfl._Vector.Vector_Impl_.fromFunctionVector","openfl/Vector.hx",226,0x4a01873c)
            	HX_STACK_ARG(vector,"vector")
HXLINE( 226)		return ( ( ::openfl::_Vector::ObjectVector)(vector) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromFunctionVector,return )

 ::openfl::_Vector::ObjectVector Vector_Impl__obj::fromObjectVector( ::openfl::_Vector::ObjectVector vector){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","fromObjectVector",0x8b3b922d,"openfl._Vector.Vector_Impl_.fromObjectVector","openfl/Vector.hx",233,0x4a01873c)
            	HX_STACK_ARG(vector,"vector")
HXLINE( 233)		return vector;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromObjectVector,return )

Bool Vector_Impl__obj::get_fixed(::Dynamic this1){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","get_fixed",0xf51a5aea,"openfl._Vector.Vector_Impl_.get_fixed","openfl/Vector.hx",247,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 247)		return ( (Bool)(this1->__Field(HX_("fixed",74,f9,a1,00),hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_fixed,return )

Bool Vector_Impl__obj::set_fixed(::Dynamic this1,Bool value){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","set_fixed",0xd86b46f6,"openfl._Vector.Vector_Impl_.set_fixed","openfl/Vector.hx",254,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(value,"value")
HXLINE( 254)		return (this1->__SetField(HX_("fixed",74,f9,a1,00),value,hx::paccDynamic));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_fixed,return )

Int Vector_Impl__obj::get_length(::Dynamic this1){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","get_length",0x93e47ab0,"openfl._Vector.Vector_Impl_.get_length","openfl/Vector.hx",261,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 261)		return ( (Int)( ::Dynamic(this1->__Field(HX_("get_length",af,04,8f,8f),hx::paccDynamic))()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_length,return )

Int Vector_Impl__obj::set_length(::Dynamic this1,Int value){
            	HX_STACK_FRAME("openfl._Vector.Vector_Impl_","set_length",0x97621924,"openfl._Vector.Vector_Impl_.set_length","openfl/Vector.hx",268,0x4a01873c)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(value,"value")
HXLINE( 268)		return ( (Int)( ::Dynamic(this1->__Field(HX_("set_length",23,a3,0c,93),hx::paccDynamic))(value)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_length,return )


Vector_Impl__obj::Vector_Impl__obj()
{
}

bool Vector_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pop") ) { outValue = pop_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"join") ) { outValue = join_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"push") ) { outValue = push_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { outValue = shift_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"slice") ) { outValue = slice_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { outValue = concat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"splice") ) { outValue = splice_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indexOf") ) { outValue = indexOf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reverse") ) { outValue = reverse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"unshift") ) { outValue = unshift_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofArray") ) { outValue = ofArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"convert") ) { outValue = convert_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"insertAt") ) { outValue = insertAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_fixed") ) { outValue = get_fixed_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_fixed") ) { outValue = set_fixed_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_length") ) { outValue = set_length_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { outValue = lastIndexOf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toIntVector") ) { outValue = toIntVector_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toBoolVector") ) { outValue = toBoolVector_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toFloatVector") ) { outValue = toFloatVector_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromIntVector") ) { outValue = fromIntVector_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toObjectVector") ) { outValue = toObjectVector_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromBoolVector") ) { outValue = fromBoolVector_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromFloatVector") ) { outValue = fromFloatVector_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"toFunctionVector") ) { outValue = toFunctionVector_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromObjectVector") ) { outValue = fromObjectVector_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"fromFunctionVector") ) { outValue = fromFunctionVector_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Vector_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Vector_Impl__obj_sStaticStorageInfo = 0;
#endif

static void Vector_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Vector_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Vector_Impl__obj::__mClass;

static ::String Vector_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("insertAt","\x8c","\x7c","\x1f","\xc2"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("lastIndexOf","\x13","\xfd","\x6a","\x95"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("ofArray","\x02","\x29","\xf2","\x88"),
	HX_HCSTRING("convert","\xf3","\xfd","\xc9","\x1a"),
	HX_HCSTRING("toBoolVector","\xe8","\x55","\xed","\xd8"),
	HX_HCSTRING("toIntVector","\x17","\x82","\x42","\x23"),
	HX_HCSTRING("toFloatVector","\xc4","\x05","\xeb","\x3f"),
	HX_HCSTRING("toFunctionVector","\xd6","\xac","\x5c","\x2b"),
	HX_HCSTRING("toObjectVector","\xfd","\x3a","\x7a","\xae"),
	HX_HCSTRING("fromBoolVector","\x97","\x76","\x3a","\x2f"),
	HX_HCSTRING("fromIntVector","\x48","\x4c","\x46","\x30"),
	HX_HCSTRING("fromFloatVector","\x35","\x7e","\x1a","\x6d"),
	HX_HCSTRING("fromFunctionVector","\x05","\x51","\xd9","\xc1"),
	HX_HCSTRING("fromObjectVector","\x6c","\x25","\xd4","\x0a"),
	HX_HCSTRING("get_fixed","\xcb","\x55","\x4b","\x44"),
	HX_HCSTRING("set_fixed","\xd7","\x41","\x9c","\x27"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null())
};

void Vector_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.Vector_Impl_","\xcd","\x98","\xe3","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Vector_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Vector_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Vector_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Vector_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Vector_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Vector_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _Vector
