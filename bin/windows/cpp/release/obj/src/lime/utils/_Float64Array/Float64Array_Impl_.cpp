// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__Float64Array_Float64Array_Impl_
#include <lime/utils/_Float64Array/Float64Array_Impl_.h>
#endif

namespace lime{
namespace utils{
namespace _Float64Array{

void Float64Array_Impl__obj::__construct() { }

Dynamic Float64Array_Impl__obj::__CreateEmpty() { return new Float64Array_Impl__obj; }

hx::ObjectPtr< Float64Array_Impl__obj > Float64Array_Impl__obj::__new()
{
	hx::ObjectPtr< Float64Array_Impl__obj > _hx_result = new Float64Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Float64Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Float64Array_Impl__obj > _hx_result = new Float64Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Int Float64Array_Impl__obj::BYTES_PER_ELEMENT;

 ::lime::utils::ArrayBufferView Float64Array_Impl__obj::subarray( ::lime::utils::ArrayBufferView this1,Int begin, ::Dynamic end){
            	HX_STACK_FRAME("lime.utils._Float64Array.Float64Array_Impl_","subarray",0x21ecbb22,"lime.utils._Float64Array.Float64Array_Impl_.subarray","lime/utils/Float64Array.hx",94,0x73d83bc7)
            	HX_STACK_ARG(this1,"this1")
            	HX_STACK_ARG(begin,"begin")
            	HX_STACK_ARG(end,"end")
HXLINE(  94)		Bool _hx_tmp = hx::IsNull( end );
HXDLIN(  94)		HX_VARI( Int,len) = (end - begin);
HXDLIN(  94)		HX_VARI( Int,byte_offset) = ((begin * this1->bytesPerElement) + this1->byteOffset);
HXDLIN(  94)		HX_VAR(  ::lime::utils::ArrayBufferView,view);
HXDLIN(  94)		HX_VARI( Int,_g) = this1->type;
HXDLIN(  94)		switch((int)(_g)){
            			case (int)0: {
HXLINE(  94)				HX_STACK_DO_THROW(HX_("subarray on a blank ArrayBufferView",39,87,fd,19));
            			}
            			break;
            			case (int)1: {
HXLINE(  94)				HX_VARI(  ::haxe::io::Bytes,buffer) = this1->buffer;
HXDLIN(  94)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this2,"this");
HXDLIN(  94)				Bool _hx_tmp1 = hx::IsNotNull( buffer );
HXDLIN(  94)				if (_hx_tmp1) {
HXLINE(  94)					HX_VARI(  ::lime::utils::ArrayBufferView,_this) =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);
HXDLIN(  94)					if ((byte_offset < (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					if ((hx::Mod(byte_offset,_this->bytesPerElement) != (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					HX_VARI( Int,bufferByteLength) = buffer->length;
HXDLIN(  94)					HX_VARI( Int,newByteLength) = bufferByteLength;
HXDLIN(  94)					Bool _hx_tmp2 = hx::IsNull( len );
HXDLIN(  94)					if (_hx_tmp2) {
HXLINE(  94)						newByteLength = (bufferByteLength - byte_offset);
HXDLIN(  94)						if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  94)						if ((newByteLength < (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  94)						newByteLength = (len * _this->bytesPerElement);
HXDLIN(  94)						if (((byte_offset + newByteLength) > bufferByteLength)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  94)					_this->buffer = buffer;
HXDLIN(  94)					_this->byteOffset = byte_offset;
HXDLIN(  94)					_this->byteLength = newByteLength;
HXDLIN(  94)					Float _hx_tmp3 = ((Float)newByteLength / (Float)_this->bytesPerElement);
HXDLIN(  94)					_this->length = ::Std_obj::_hx_int(_hx_tmp3);
HXDLIN(  94)					this2 = _this;
            				}
            				else {
HXLINE(  94)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int8Array",40,53,da,77));
            				}
HXDLIN(  94)				view = this2;
            			}
            			break;
            			case (int)2: {
HXLINE(  94)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer1,"buffer") = this1->buffer;
HXDLIN(  94)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this3,"this");
HXDLIN(  94)				Bool _hx_tmp4 = hx::IsNotNull( buffer1 );
HXDLIN(  94)				if (_hx_tmp4) {
HXLINE(  94)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this1,"_this") =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);
HXDLIN(  94)					if ((byte_offset < (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					if ((hx::Mod(byte_offset,_this1->bytesPerElement) != (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					HX_VARI_NAME( Int,bufferByteLength1,"bufferByteLength") = buffer1->length;
HXDLIN(  94)					HX_VARI_NAME( Int,newByteLength1,"newByteLength") = bufferByteLength1;
HXDLIN(  94)					Bool _hx_tmp5 = hx::IsNull( len );
HXDLIN(  94)					if (_hx_tmp5) {
HXLINE(  94)						newByteLength1 = (bufferByteLength1 - byte_offset);
HXDLIN(  94)						if ((hx::Mod(bufferByteLength1,_this1->bytesPerElement) != (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  94)						if ((newByteLength1 < (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  94)						newByteLength1 = (len * _this1->bytesPerElement);
HXDLIN(  94)						if (((byte_offset + newByteLength1) > bufferByteLength1)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  94)					_this1->buffer = buffer1;
HXDLIN(  94)					_this1->byteOffset = byte_offset;
HXDLIN(  94)					_this1->byteLength = newByteLength1;
HXDLIN(  94)					Float _hx_tmp6 = ((Float)newByteLength1 / (Float)_this1->bytesPerElement);
HXDLIN(  94)					_this1->length = ::Std_obj::_hx_int(_hx_tmp6);
HXDLIN(  94)					this3 = _this1;
            				}
            				else {
HXLINE(  94)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7));
            				}
HXDLIN(  94)				view = this3;
            			}
            			break;
            			case (int)3: {
HXLINE(  94)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer2,"buffer") = this1->buffer;
HXDLIN(  94)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this4,"this");
HXDLIN(  94)				Bool _hx_tmp7 = hx::IsNotNull( buffer2 );
HXDLIN(  94)				if (_hx_tmp7) {
HXLINE(  94)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this2,"_this") =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);
HXDLIN(  94)					if ((byte_offset < (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					if ((hx::Mod(byte_offset,_this2->bytesPerElement) != (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					HX_VARI_NAME( Int,bufferByteLength2,"bufferByteLength") = buffer2->length;
HXDLIN(  94)					HX_VARI_NAME( Int,newByteLength2,"newByteLength") = bufferByteLength2;
HXDLIN(  94)					Bool _hx_tmp8 = hx::IsNull( len );
HXDLIN(  94)					if (_hx_tmp8) {
HXLINE(  94)						newByteLength2 = (bufferByteLength2 - byte_offset);
HXDLIN(  94)						if ((hx::Mod(bufferByteLength2,_this2->bytesPerElement) != (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  94)						if ((newByteLength2 < (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  94)						newByteLength2 = (len * _this2->bytesPerElement);
HXDLIN(  94)						if (((byte_offset + newByteLength2) > bufferByteLength2)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  94)					_this2->buffer = buffer2;
HXDLIN(  94)					_this2->byteOffset = byte_offset;
HXDLIN(  94)					_this2->byteLength = newByteLength2;
HXDLIN(  94)					Float _hx_tmp9 = ((Float)newByteLength2 / (Float)_this2->bytesPerElement);
HXDLIN(  94)					_this2->length = ::Std_obj::_hx_int(_hx_tmp9);
HXDLIN(  94)					this4 = _this2;
            				}
            				else {
HXLINE(  94)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61));
            				}
HXDLIN(  94)				view = this4;
            			}
            			break;
            			case (int)4: {
HXLINE(  94)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer3,"buffer") = this1->buffer;
HXDLIN(  94)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this5,"this");
HXDLIN(  94)				Bool _hx_tmp10 = hx::IsNotNull( buffer3 );
HXDLIN(  94)				if (_hx_tmp10) {
HXLINE(  94)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this3,"_this") =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
HXDLIN(  94)					if ((byte_offset < (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					if ((hx::Mod(byte_offset,_this3->bytesPerElement) != (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					HX_VARI_NAME( Int,bufferByteLength3,"bufferByteLength") = buffer3->length;
HXDLIN(  94)					HX_VARI_NAME( Int,newByteLength3,"newByteLength") = bufferByteLength3;
HXDLIN(  94)					Bool _hx_tmp11 = hx::IsNull( len );
HXDLIN(  94)					if (_hx_tmp11) {
HXLINE(  94)						newByteLength3 = (bufferByteLength3 - byte_offset);
HXDLIN(  94)						if ((hx::Mod(bufferByteLength3,_this3->bytesPerElement) != (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  94)						if ((newByteLength3 < (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  94)						newByteLength3 = (len * _this3->bytesPerElement);
HXDLIN(  94)						if (((byte_offset + newByteLength3) > bufferByteLength3)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  94)					_this3->buffer = buffer3;
HXDLIN(  94)					_this3->byteOffset = byte_offset;
HXDLIN(  94)					_this3->byteLength = newByteLength3;
HXDLIN(  94)					Float _hx_tmp12 = ((Float)newByteLength3 / (Float)_this3->bytesPerElement);
HXDLIN(  94)					_this3->length = ::Std_obj::_hx_int(_hx_tmp12);
HXDLIN(  94)					this5 = _this3;
            				}
            				else {
HXLINE(  94)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            				}
HXDLIN(  94)				view = this5;
            			}
            			break;
            			case (int)5: {
HXLINE(  94)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer4,"buffer") = this1->buffer;
HXDLIN(  94)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this6,"this");
HXDLIN(  94)				Bool _hx_tmp13 = hx::IsNotNull( buffer4 );
HXDLIN(  94)				if (_hx_tmp13) {
HXLINE(  94)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this4,"_this") =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);
HXDLIN(  94)					if ((byte_offset < (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					if ((hx::Mod(byte_offset,_this4->bytesPerElement) != (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					HX_VARI_NAME( Int,bufferByteLength4,"bufferByteLength") = buffer4->length;
HXDLIN(  94)					HX_VARI_NAME( Int,newByteLength4,"newByteLength") = bufferByteLength4;
HXDLIN(  94)					Bool _hx_tmp14 = hx::IsNull( len );
HXDLIN(  94)					if (_hx_tmp14) {
HXLINE(  94)						newByteLength4 = (bufferByteLength4 - byte_offset);
HXDLIN(  94)						if ((hx::Mod(bufferByteLength4,_this4->bytesPerElement) != (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  94)						if ((newByteLength4 < (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  94)						newByteLength4 = (len * _this4->bytesPerElement);
HXDLIN(  94)						if (((byte_offset + newByteLength4) > bufferByteLength4)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  94)					_this4->buffer = buffer4;
HXDLIN(  94)					_this4->byteOffset = byte_offset;
HXDLIN(  94)					_this4->byteLength = newByteLength4;
HXDLIN(  94)					Float _hx_tmp15 = ((Float)newByteLength4 / (Float)_this4->bytesPerElement);
HXDLIN(  94)					_this4->length = ::Std_obj::_hx_int(_hx_tmp15);
HXDLIN(  94)					this6 = _this4;
            				}
            				else {
HXLINE(  94)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13));
            				}
HXDLIN(  94)				view = this6;
            			}
            			break;
            			case (int)6: {
HXLINE(  94)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer5,"buffer") = this1->buffer;
HXDLIN(  94)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this7,"this");
HXDLIN(  94)				Bool _hx_tmp16 = hx::IsNotNull( buffer5 );
HXDLIN(  94)				if (_hx_tmp16) {
HXLINE(  94)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this5,"_this") =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);
HXDLIN(  94)					if ((byte_offset < (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					if ((hx::Mod(byte_offset,_this5->bytesPerElement) != (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					HX_VARI_NAME( Int,bufferByteLength5,"bufferByteLength") = buffer5->length;
HXDLIN(  94)					HX_VARI_NAME( Int,newByteLength5,"newByteLength") = bufferByteLength5;
HXDLIN(  94)					Bool _hx_tmp17 = hx::IsNull( len );
HXDLIN(  94)					if (_hx_tmp17) {
HXLINE(  94)						newByteLength5 = (bufferByteLength5 - byte_offset);
HXDLIN(  94)						if ((hx::Mod(bufferByteLength5,_this5->bytesPerElement) != (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  94)						if ((newByteLength5 < (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  94)						newByteLength5 = (len * _this5->bytesPerElement);
HXDLIN(  94)						if (((byte_offset + newByteLength5) > bufferByteLength5)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  94)					_this5->buffer = buffer5;
HXDLIN(  94)					_this5->byteOffset = byte_offset;
HXDLIN(  94)					_this5->byteLength = newByteLength5;
HXDLIN(  94)					Float _hx_tmp18 = ((Float)newByteLength5 / (Float)_this5->bytesPerElement);
HXDLIN(  94)					_this5->length = ::Std_obj::_hx_int(_hx_tmp18);
HXDLIN(  94)					this7 = _this5;
            				}
            				else {
HXLINE(  94)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5));
            				}
HXDLIN(  94)				view = this7;
            			}
            			break;
            			case (int)7: {
HXLINE(  94)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer6,"buffer") = this1->buffer;
HXDLIN(  94)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this8,"this");
HXDLIN(  94)				Bool _hx_tmp19 = hx::IsNotNull( buffer6 );
HXDLIN(  94)				if (_hx_tmp19) {
HXLINE(  94)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this6,"_this") =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);
HXDLIN(  94)					if ((byte_offset < (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					if ((hx::Mod(byte_offset,_this6->bytesPerElement) != (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					HX_VARI_NAME( Int,bufferByteLength6,"bufferByteLength") = buffer6->length;
HXDLIN(  94)					HX_VARI_NAME( Int,newByteLength6,"newByteLength") = bufferByteLength6;
HXDLIN(  94)					Bool _hx_tmp20 = hx::IsNull( len );
HXDLIN(  94)					if (_hx_tmp20) {
HXLINE(  94)						newByteLength6 = (bufferByteLength6 - byte_offset);
HXDLIN(  94)						if ((hx::Mod(bufferByteLength6,_this6->bytesPerElement) != (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  94)						if ((newByteLength6 < (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  94)						newByteLength6 = (len * _this6->bytesPerElement);
HXDLIN(  94)						if (((byte_offset + newByteLength6) > bufferByteLength6)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  94)					_this6->buffer = buffer6;
HXDLIN(  94)					_this6->byteOffset = byte_offset;
HXDLIN(  94)					_this6->byteLength = newByteLength6;
HXDLIN(  94)					Float _hx_tmp21 = ((Float)newByteLength6 / (Float)_this6->bytesPerElement);
HXDLIN(  94)					_this6->length = ::Std_obj::_hx_int(_hx_tmp21);
HXDLIN(  94)					this8 = _this6;
            				}
            				else {
HXLINE(  94)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e));
            				}
HXDLIN(  94)				view = this8;
            			}
            			break;
            			case (int)8: {
HXLINE(  94)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer7,"buffer") = this1->buffer;
HXDLIN(  94)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this9,"this");
HXDLIN(  94)				Bool _hx_tmp22 = hx::IsNotNull( buffer7 );
HXDLIN(  94)				if (_hx_tmp22) {
HXLINE(  94)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this7,"_this") =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);
HXDLIN(  94)					if ((byte_offset < (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					if ((hx::Mod(byte_offset,_this7->bytesPerElement) != (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					HX_VARI_NAME( Int,bufferByteLength7,"bufferByteLength") = buffer7->length;
HXDLIN(  94)					HX_VARI_NAME( Int,newByteLength7,"newByteLength") = bufferByteLength7;
HXDLIN(  94)					Bool _hx_tmp23 = hx::IsNull( len );
HXDLIN(  94)					if (_hx_tmp23) {
HXLINE(  94)						newByteLength7 = (bufferByteLength7 - byte_offset);
HXDLIN(  94)						if ((hx::Mod(bufferByteLength7,_this7->bytesPerElement) != (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  94)						if ((newByteLength7 < (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  94)						newByteLength7 = (len * _this7->bytesPerElement);
HXDLIN(  94)						if (((byte_offset + newByteLength7) > bufferByteLength7)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  94)					_this7->buffer = buffer7;
HXDLIN(  94)					_this7->byteOffset = byte_offset;
HXDLIN(  94)					_this7->byteLength = newByteLength7;
HXDLIN(  94)					Float _hx_tmp24 = ((Float)newByteLength7 / (Float)_this7->bytesPerElement);
HXDLIN(  94)					_this7->length = ::Std_obj::_hx_int(_hx_tmp24);
HXDLIN(  94)					this9 = _this7;
            				}
            				else {
HXLINE(  94)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4));
            				}
HXDLIN(  94)				view = this9;
            			}
            			break;
            			case (int)9: {
HXLINE(  94)				HX_VARI_NAME(  ::haxe::io::Bytes,buffer8,"buffer") = this1->buffer;
HXDLIN(  94)				HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this10,"this");
HXDLIN(  94)				Bool _hx_tmp25 = hx::IsNotNull( buffer8 );
HXDLIN(  94)				if (_hx_tmp25) {
HXLINE(  94)					HX_VARI_NAME(  ::lime::utils::ArrayBufferView,_this8,"_this") =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
HXDLIN(  94)					if ((byte_offset < (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					if ((hx::Mod(byte_offset,_this8->bytesPerElement) != (int)0)) {
HXLINE(  94)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN(  94)					HX_VARI_NAME( Int,bufferByteLength8,"bufferByteLength") = buffer8->length;
HXDLIN(  94)					HX_VARI_NAME( Int,newByteLength8,"newByteLength") = bufferByteLength8;
HXDLIN(  94)					Bool _hx_tmp26 = hx::IsNull( len );
HXDLIN(  94)					if (_hx_tmp26) {
HXLINE(  94)						newByteLength8 = (bufferByteLength8 - byte_offset);
HXDLIN(  94)						if ((hx::Mod(bufferByteLength8,_this8->bytesPerElement) != (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
HXDLIN(  94)						if ((newByteLength8 < (int)0)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
            					else {
HXLINE(  94)						newByteLength8 = (len * _this8->bytesPerElement);
HXDLIN(  94)						if (((byte_offset + newByteLength8) > bufferByteLength8)) {
HXLINE(  94)							HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            						}
            					}
HXDLIN(  94)					_this8->buffer = buffer8;
HXDLIN(  94)					_this8->byteOffset = byte_offset;
HXDLIN(  94)					_this8->byteLength = newByteLength8;
HXDLIN(  94)					Float _hx_tmp27 = ((Float)newByteLength8 / (Float)_this8->bytesPerElement);
HXDLIN(  94)					_this8->length = ::Std_obj::_hx_int(_hx_tmp27);
HXDLIN(  94)					this10 = _this8;
            				}
            				else {
HXLINE(  94)					HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e));
            				}
HXDLIN(  94)				view = this10;
            			}
            			break;
            		}
HXDLIN(  94)		return view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float64Array_Impl__obj,subarray,return )

 ::lime::utils::ArrayBufferView Float64Array_Impl__obj::fromBytes( ::haxe::io::Bytes bytes, ::Dynamic __o_byteOffset, ::Dynamic len){
 ::Dynamic byteOffset = __o_byteOffset.Default(0);
            	HX_STACK_FRAME("lime.utils._Float64Array.Float64Array_Impl_","fromBytes",0x75afb378,"lime.utils._Float64Array.Float64Array_Impl_.fromBytes","lime/utils/Float64Array.hx",99,0x73d83bc7)
            	HX_STACK_ARG(bytes,"bytes")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(len,"len")
HXLINE(  99)		HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this1,"this");
HXDLIN(  99)		Bool _hx_tmp = hx::IsNotNull( bytes );
HXDLIN(  99)		if (_hx_tmp) {
HXLINE(  99)			HX_VARI(  ::lime::utils::ArrayBufferView,_this) =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);
HXDLIN(  99)			if (hx::IsLess( byteOffset,(int)0 )) {
HXLINE(  99)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  99)			if ((hx::Mod(byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE(  99)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  99)			HX_VARI( Int,bufferByteLength) = bytes->length;
HXDLIN(  99)			HX_VARI( Int,newByteLength) = bufferByteLength;
HXDLIN(  99)			Bool _hx_tmp1 = hx::IsNull( len );
HXDLIN(  99)			if (_hx_tmp1) {
HXLINE(  99)				newByteLength = (bufferByteLength - byteOffset);
HXDLIN(  99)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE(  99)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN(  99)				if ((newByteLength < (int)0)) {
HXLINE(  99)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
            			else {
HXLINE(  99)				newByteLength = (len * _this->bytesPerElement);
HXDLIN(  99)				if (((byteOffset + newByteLength) > bufferByteLength)) {
HXLINE(  99)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN(  99)			_this->buffer = bytes;
HXDLIN(  99)			_this->byteOffset = byteOffset;
HXDLIN(  99)			_this->byteLength = newByteLength;
HXDLIN(  99)			Float _hx_tmp2 = ((Float)newByteLength / (Float)_this->bytesPerElement);
HXDLIN(  99)			_this->length = ::Std_obj::_hx_int(_hx_tmp2);
HXDLIN(  99)			this1 = _this;
            		}
            		else {
HXLINE(  99)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e));
            		}
HXDLIN(  99)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float64Array_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes Float64Array_Impl__obj::toBytes( ::lime::utils::ArrayBufferView this1){
            	HX_STACK_FRAME("lime.utils._Float64Array.Float64Array_Impl_","toBytes",0xdbbc6207,"lime.utils._Float64Array.Float64Array_Impl_.toBytes","lime/utils/Float64Array.hx",103,0x73d83bc7)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 103)		return this1->buffer;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float64Array_Impl__obj,toBytes,return )

Int Float64Array_Impl__obj::get_length( ::lime::utils::ArrayBufferView this1){
            	HX_STACK_FRAME("lime.utils._Float64Array.Float64Array_Impl_","get_length",0xa8e8fff8,"lime.utils._Float64Array.Float64Array_Impl_.get_length","lime/utils/Float64Array.hx",108,0x73d83bc7)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 108)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float64Array_Impl__obj,get_length,return )

::String Float64Array_Impl__obj::toString( ::lime::utils::ArrayBufferView this1){
            	HX_STACK_FRAME("lime.utils._Float64Array.Float64Array_Impl_","toString",0x52da37b5,"lime.utils._Float64Array.Float64Array_Impl_.toString","lime/utils/Float64Array.hx",124,0x73d83bc7)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 124)		Bool _hx_tmp = hx::IsNotNull( this1 );
HXDLIN( 124)		if (_hx_tmp) {
HXLINE( 124)			return ((((HX_("Float64Array [byteLength:",32,73,38,ac) + this1->byteLength) + HX_(", length:",a0,04,67,ef)) + this1->length) + HX_("]",5d,00,00,00));
            		}
            		else {
HXLINE( 124)			return null();
            		}
HXDLIN( 124)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float64Array_Impl__obj,toString,return )


Float64Array_Impl__obj::Float64Array_Impl__obj()
{
}

bool Float64Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subarray") ) { outValue = subarray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Float64Array_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Float64Array_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Float64Array_Impl__obj::BYTES_PER_ELEMENT,HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Float64Array_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float64Array_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Float64Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Float64Array_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float64Array_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Float64Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class Float64Array_Impl__obj::__mClass;

static ::String Float64Array_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	HX_HCSTRING("subarray","\x19","\x54","\x81","\x07"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void Float64Array_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._Float64Array.Float64Array_Impl_","\x85","\xfe","\xf5","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Float64Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Float64Array_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Float64Array_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Float64Array_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Float64Array_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Float64Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Float64Array_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Float64Array_Impl__obj::__boot()
{
{
            	HX_STACK_FRAME("lime.utils._Float64Array.Float64Array_Impl_","boot",0x289272bb,"lime.utils._Float64Array.Float64Array_Impl_.boot","lime/utils/Float64Array.hx",66,0x73d83bc7)
HXLINE(  66)		BYTES_PER_ELEMENT = (int)8;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace _Float64Array
