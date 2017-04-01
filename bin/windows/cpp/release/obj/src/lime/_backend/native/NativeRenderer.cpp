// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif

namespace lime{
namespace _backend{
namespace native{

void NativeRenderer_obj::__construct( ::lime::graphics::Renderer parent){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","new",0x43f11223,"lime._backend.native.NativeRenderer.new","lime/_backend/native/NativeRenderer.hx",43,0x398cc96c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(parent,"parent")
HXLINE(  43)		this->parent = parent;
            	}

Dynamic NativeRenderer_obj::__CreateEmpty() { return new NativeRenderer_obj; }

hx::ObjectPtr< NativeRenderer_obj > NativeRenderer_obj::__new( ::lime::graphics::Renderer parent)
{
	hx::ObjectPtr< NativeRenderer_obj > _hx_result = new NativeRenderer_obj();
	_hx_result->__construct(parent);
	return _hx_result;
}

Dynamic NativeRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NativeRenderer_obj > _hx_result = new NativeRenderer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void NativeRenderer_obj::create(){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","create",0x10556119,"lime._backend.native.NativeRenderer.create","lime/_backend/native/NativeRenderer.hx",48,0x398cc96c)
            	HX_STACK_THIS(this)
HXLINE(  51)		 ::Dynamic window = this->parent->window->backend->handle;
HXDLIN(  51)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_create(hx::DynamicPtr(window))) );
HXDLIN(  51)		 ::Dynamic _hx_tmp = Dynamic(hx::DynamicPtr(inVal));
HXDLIN(  51)		this->handle = _hx_tmp;
HXLINE(  53)		 ::Dynamic handle = this->handle;
HXDLIN(  53)		Float _hx_tmp1 = ( (Float)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_scale(hx::DynamicPtr(handle))) );
HXDLIN(  53)		this->parent->window->_hx___scale = _hx_tmp1;
HXLINE(  63)		 ::Dynamic handle1 = this->handle;
HXDLIN(  63)		 ::hx::Object * inVal1 = ( ( ::hx::Object *)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_type(hx::DynamicPtr(handle1))) );
HXDLIN(  63)		HX_VARI( ::String,type) = ( (::String)(Dynamic(hx::DynamicPtr(inVal1))) );
HXLINE(  65)		if ((type == HX_("opengl",6f,64,94,21))) {
HXLINE(  69)			this->useHardware = true;
HXLINE(  70)			this->parent->context = ::lime::graphics::RenderContext_obj::OPENGL( ::lime::graphics::GLRenderContext_obj::__new());
HXLINE(  71)			this->parent->type = ::lime::graphics::RendererType_obj::OPENGL_dyn();
            		}
            		else {
HXLINE(  75)			this->useHardware = false;
HXLINE(  78)			this->render();
HXLINE(  79)			this->parent->context = ::lime::graphics::RenderContext_obj::CAIRO(this->cairo);
HXLINE(  81)			this->parent->type = ::lime::graphics::RendererType_obj::CAIRO_dyn();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,create,(void))

void NativeRenderer_obj::dispatch(){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","dispatch",0xcbb24a17,"lime._backend.native.NativeRenderer.dispatch","lime/_backend/native/NativeRenderer.hx",91,0x398cc96c)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,dispatch,(void))

void NativeRenderer_obj::flip(){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","flip",0x29ba5b8a,"lime._backend.native.NativeRenderer.flip","lime/_backend/native/NativeRenderer.hx",98,0x398cc96c)
            	HX_STACK_THIS(this)
HXLINE( 101)		Bool _hx_tmp = !(this->useHardware);
HXDLIN( 101)		if (_hx_tmp) {
HXLINE( 104)			Bool _hx_tmp1 = hx::IsNotNull( this->cairo );
HXDLIN( 104)			if (_hx_tmp1) {
HXLINE( 106)				::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(this->primarySurface);
            			}
HXLINE( 110)			{
HXLINE( 110)				 ::Dynamic handle = this->handle;
HXDLIN( 110)				::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_unlock(hx::DynamicPtr(handle));
            			}
            		}
HXLINE( 114)		{
HXLINE( 114)			 ::Dynamic handle1 = this->handle;
HXDLIN( 114)			::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_flip(hx::DynamicPtr(handle1));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,flip,(void))

 ::lime::graphics::Image NativeRenderer_obj::readPixels( ::lime::math::Rectangle rect){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","readPixels",0x008f9fc0,"lime._backend.native.NativeRenderer.readPixels","lime/_backend/native/NativeRenderer.hx",120,0x398cc96c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
HXLINE( 122)		 ::Dynamic handle = this->handle;
HXDLIN( 122)		 ::hx::Object * _hx_tmp = hx::DynamicPtr(handle);
HXDLIN( 122)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_read_pixels(_hx_tmp,hx::DynamicPtr(rect))) );
HXDLIN( 122)		HX_VARI(  ::Dynamic,data) = Dynamic(hx::DynamicPtr(inVal));
HXLINE( 124)		Bool _hx_tmp1 = hx::IsNotNull( data );
HXDLIN( 124)		if (_hx_tmp1) {
HXLINE( 126)			HX_VARI(  ::haxe::io::Bytes,buffer) =  ::haxe::io::Bytes_obj::__new( ::Dynamic( ::Dynamic(data->__Field(HX_("data",2a,56,63,42),hx::paccDynamic))->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)), ::Dynamic( ::Dynamic(data->__Field(HX_("data",2a,56,63,42),hx::paccDynamic))->__Field(HX_("b",62,00,00,00),hx::paccDynamic)));
HXDLIN( 126)			HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this1,"this");
HXDLIN( 126)			Bool _hx_tmp2 = hx::IsNotNull( buffer );
HXDLIN( 126)			if (_hx_tmp2) {
HXLINE( 126)				HX_VARI(  ::lime::utils::ArrayBufferView,_this) =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
HXDLIN( 126)				if ((hx::Mod((int)0,_this->bytesPerElement) != (int)0)) {
HXLINE( 126)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 126)				HX_VARI( Int,bufferByteLength) = buffer->length;
HXDLIN( 126)				{
HXLINE( 126)					if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 126)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 126)					if ((bufferByteLength < (int)0)) {
HXLINE( 126)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
            				}
HXDLIN( 126)				_this->buffer = buffer;
HXDLIN( 126)				_this->byteOffset = (int)0;
HXDLIN( 126)				_this->byteLength = bufferByteLength;
HXDLIN( 126)				Float _hx_tmp3 = ((Float)bufferByteLength / (Float)_this->bytesPerElement);
HXDLIN( 126)				_this->length = ::Std_obj::_hx_int(_hx_tmp3);
HXDLIN( 126)				this1 = _this;
            			}
            			else {
HXLINE( 126)				HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            			}
HXDLIN( 126)			HX_VARI_NAME(  ::lime::graphics::ImageBuffer,buffer1,"buffer") =  ::lime::graphics::ImageBuffer_obj::__new(this1, ::Dynamic(data->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic)), ::Dynamic(data->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic)), ::Dynamic(data->__Field(HX_("bitsPerPixel",8f,4d,ee,1c),hx::paccDynamic)),null());
HXLINE( 127)			buffer1->format = (int)0;
HXLINE( 129)			return  ::lime::graphics::Image_obj::__new(buffer1,null(),null(),null(),null(),null(),null());
            		}
HXLINE( 133)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,readPixels,return )

void NativeRenderer_obj::render(){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","render",0x996f6573,"lime._backend.native.NativeRenderer.render","lime/_backend/native/NativeRenderer.hx",138,0x398cc96c)
            	HX_STACK_THIS(this)
HXLINE( 141)		{
HXLINE( 141)			 ::Dynamic handle = this->handle;
HXDLIN( 141)			::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_make_current(hx::DynamicPtr(handle));
            		}
HXLINE( 143)		Bool _hx_tmp = !(this->useHardware);
HXDLIN( 143)		if (_hx_tmp) {
HXLINE( 146)			 ::Dynamic handle1 = this->handle;
HXDLIN( 146)			 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_lock(hx::DynamicPtr(handle1))) );
HXDLIN( 146)			HX_VARI(  ::Dynamic,lock) = Dynamic(hx::DynamicPtr(inVal));
HXLINE( 148)			Bool _hx_tmp1;
HXDLIN( 148)			Bool _hx_tmp2;
HXDLIN( 148)			Bool _hx_tmp3;
HXDLIN( 148)			Bool _hx_tmp4 = hx::IsNotNull( this->cacheLock );
HXDLIN( 148)			if (_hx_tmp4) {
HXLINE( 148)				_hx_tmp3 = hx::IsNotEq(  ::Dynamic(this->cacheLock->__Field(HX_("pixels",2d,ef,a9,8c),hx::paccDynamic)), ::Dynamic(lock->__Field(HX_("pixels",2d,ef,a9,8c),hx::paccDynamic)) );
            			}
            			else {
HXLINE( 148)				_hx_tmp3 = true;
            			}
HXDLIN( 148)			if (!(_hx_tmp3)) {
HXLINE( 148)				_hx_tmp2 = hx::IsNotEq(  ::Dynamic(this->cacheLock->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic)), ::Dynamic(lock->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic)) );
            			}
            			else {
HXLINE( 148)				_hx_tmp2 = true;
            			}
HXDLIN( 148)			if (!(_hx_tmp2)) {
HXLINE( 148)				_hx_tmp1 = hx::IsNotEq(  ::Dynamic(this->cacheLock->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic)), ::Dynamic(lock->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic)) );
            			}
            			else {
HXLINE( 148)				_hx_tmp1 = true;
            			}
HXDLIN( 148)			if (_hx_tmp1) {
HXLINE( 150)				this->primarySurface = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::create( ::Dynamic(lock->__Field(HX_("pixels",2d,ef,a9,8c),hx::paccDynamic)),(int)0, ::Dynamic(lock->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic)), ::Dynamic(lock->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic)), ::Dynamic(lock->__Field(HX_("pitch",c0,bb,a0,c2),hx::paccDynamic)));
HXLINE( 152)				Bool _hx_tmp5 = hx::IsNotNull( this->cairo );
HXDLIN( 152)				if (_hx_tmp5) {
HXLINE( 154)					this->cairo->recreate(this->primarySurface);
            				}
            				else {
HXLINE( 158)					this->cairo =  ::lime::graphics::cairo::Cairo_obj::__new(this->primarySurface);
            				}
            			}
HXLINE( 164)			this->cacheLock = lock;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeRenderer_obj,render,(void))

 ::Dynamic NativeRenderer_obj::lime_renderer_create( ::Dynamic window){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_create",0xcf0a582b,"lime._backend.native.NativeRenderer.lime_renderer_create","lime/_backend/native/NativeRenderer.hx",183,0x398cc96c)
            	HX_STACK_ARG(window,"window")
HXLINE( 183)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_create(hx::DynamicPtr(window))) );
HXDLIN( 183)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_create,return )

void NativeRenderer_obj::lime_renderer_flip( ::Dynamic handle){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_flip",0xb8790a1c,"lime._backend.native.NativeRenderer.lime_renderer_flip","lime/_backend/native/NativeRenderer.hx",184,0x398cc96c)
            	HX_STACK_ARG(handle,"handle")
HXLINE( 184)		::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_flip(hx::DynamicPtr(handle));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_flip,(void))

Float NativeRenderer_obj::lime_renderer_get_context( ::Dynamic handle){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_get_context",0x0ef35a77,"lime._backend.native.NativeRenderer.lime_renderer_get_context","lime/_backend/native/NativeRenderer.hx",185,0x398cc96c)
            	HX_STACK_ARG(handle,"handle")
HXLINE( 185)		return ( (Float)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_context(hx::DynamicPtr(handle))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_get_context,return )

Float NativeRenderer_obj::lime_renderer_get_scale( ::Dynamic handle){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_get_scale",0x6d3ae112,"lime._backend.native.NativeRenderer.lime_renderer_get_scale","lime/_backend/native/NativeRenderer.hx",186,0x398cc96c)
            	HX_STACK_ARG(handle,"handle")
HXLINE( 186)		return ( (Float)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_scale(hx::DynamicPtr(handle))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_get_scale,return )

 ::Dynamic NativeRenderer_obj::lime_renderer_get_type( ::Dynamic handle){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_get_type",0x09408932,"lime._backend.native.NativeRenderer.lime_renderer_get_type","lime/_backend/native/NativeRenderer.hx",187,0x398cc96c)
            	HX_STACK_ARG(handle,"handle")
HXLINE( 187)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_get_type(hx::DynamicPtr(handle))) );
HXDLIN( 187)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_get_type,return )

 ::Dynamic NativeRenderer_obj::lime_renderer_lock( ::Dynamic handle){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_lock",0xbc72935a,"lime._backend.native.NativeRenderer.lime_renderer_lock","lime/_backend/native/NativeRenderer.hx",188,0x398cc96c)
            	HX_STACK_ARG(handle,"handle")
HXLINE( 188)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_lock(hx::DynamicPtr(handle))) );
HXDLIN( 188)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_lock,return )

void NativeRenderer_obj::lime_renderer_make_current( ::Dynamic handle){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_make_current",0x92794c17,"lime._backend.native.NativeRenderer.lime_renderer_make_current","lime/_backend/native/NativeRenderer.hx",189,0x398cc96c)
            	HX_STACK_ARG(handle,"handle")
HXLINE( 189)		::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_make_current(hx::DynamicPtr(handle));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_make_current,(void))

 ::Dynamic NativeRenderer_obj::lime_renderer_read_pixels( ::Dynamic handle, ::Dynamic rect){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_read_pixels",0xf03cd0a7,"lime._backend.native.NativeRenderer.lime_renderer_read_pixels","lime/_backend/native/NativeRenderer.hx",190,0x398cc96c)
            	HX_STACK_ARG(handle,"handle")
            	HX_STACK_ARG(rect,"rect")
HXLINE( 190)		 ::hx::Object * _hx_tmp = hx::DynamicPtr(handle);
HXDLIN( 190)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_read_pixels(_hx_tmp,hx::DynamicPtr(rect))) );
HXDLIN( 190)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeRenderer_obj,lime_renderer_read_pixels,return )

void NativeRenderer_obj::lime_renderer_unlock( ::Dynamic handle){
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","lime_renderer_unlock",0xb88793f3,"lime._backend.native.NativeRenderer.lime_renderer_unlock","lime/_backend/native/NativeRenderer.hx",191,0x398cc96c)
            	HX_STACK_ARG(handle,"handle")
HXLINE( 191)		::lime::_backend::native::NativeRenderer_obj::cffi_lime_renderer_unlock(hx::DynamicPtr(handle));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeRenderer_obj,lime_renderer_unlock,(void))

::cpp::Function<   ::hx::Object *( ::hx::Object *) > NativeRenderer_obj::cffi_lime_renderer_create;

::cpp::Function<  void( ::hx::Object *) > NativeRenderer_obj::cffi_lime_renderer_flip;

::cpp::Function<  Float( ::hx::Object *) > NativeRenderer_obj::cffi_lime_renderer_get_context;

::cpp::Function<  Float( ::hx::Object *) > NativeRenderer_obj::cffi_lime_renderer_get_scale;

::cpp::Function<   ::hx::Object *( ::hx::Object *) > NativeRenderer_obj::cffi_lime_renderer_get_type;

::cpp::Function<   ::hx::Object *( ::hx::Object *) > NativeRenderer_obj::cffi_lime_renderer_lock;

::cpp::Function<  void( ::hx::Object *) > NativeRenderer_obj::cffi_lime_renderer_make_current;

::cpp::Function<   ::hx::Object *( ::hx::Object *, ::hx::Object *) > NativeRenderer_obj::cffi_lime_renderer_read_pixels;

::cpp::Function<  void( ::hx::Object *) > NativeRenderer_obj::cffi_lime_renderer_unlock;


NativeRenderer_obj::NativeRenderer_obj()
{
}

void NativeRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeRenderer);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(useHardware,"useHardware");
	HX_MARK_MEMBER_NAME(cacheLock,"cacheLock");
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	HX_MARK_MEMBER_NAME(primarySurface,"primarySurface");
	HX_MARK_END_CLASS();
}

void NativeRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(useHardware,"useHardware");
	HX_VISIT_MEMBER_NAME(cacheLock,"cacheLock");
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	HX_VISIT_MEMBER_NAME(primarySurface,"primarySurface");
}

hx::Val NativeRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flip") ) { return hx::Val( flip_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return hx::Val( cairo); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return hx::Val( handle); }
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent); }
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn()); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return hx::Val( dispatch_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheLock") ) { return hx::Val( cacheLock); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readPixels") ) { return hx::Val( readPixels_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useHardware") ) { return hx::Val( useHardware); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { return hx::Val( primarySurface); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"lime_renderer_flip") ) { outValue = lime_renderer_flip_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lime_renderer_lock") ) { outValue = lime_renderer_lock_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_renderer_create") ) { outValue = lime_renderer_create_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lime_renderer_unlock") ) { outValue = lime_renderer_unlock_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_renderer_get_type") ) { outValue = lime_renderer_get_type_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_renderer_get_scale") ) { outValue = lime_renderer_get_scale_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_flip") ) { outValue = cffi_lime_renderer_flip; return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_lock") ) { outValue = cffi_lime_renderer_lock; return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_renderer_get_context") ) { outValue = lime_renderer_get_context_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lime_renderer_read_pixels") ) { outValue = lime_renderer_read_pixels_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_create") ) { outValue = cffi_lime_renderer_create; return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_unlock") ) { outValue = cffi_lime_renderer_unlock; return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_renderer_make_current") ) { outValue = lime_renderer_make_current_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_type") ) { outValue = cffi_lime_renderer_get_type; return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_scale") ) { outValue = cffi_lime_renderer_get_scale; return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_context") ) { outValue = cffi_lime_renderer_get_context; return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_read_pixels") ) { outValue = cffi_lime_renderer_read_pixels; return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_make_current") ) { outValue = cffi_lime_renderer_make_current; return true; }
	}
	return false;
}

hx::Val NativeRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast<  ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::lime::graphics::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheLock") ) { cacheLock=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useHardware") ) { useHardware=inValue.Cast< Bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"primarySurface") ) { primarySurface=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeRenderer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_flip") ) { cffi_lime_renderer_flip=ioValue.Cast< ::cpp::Function<  void( ::hx::Object *) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_lock") ) { cffi_lime_renderer_lock=ioValue.Cast< ::cpp::Function<   ::hx::Object *( ::hx::Object *) > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_create") ) { cffi_lime_renderer_create=ioValue.Cast< ::cpp::Function<   ::hx::Object *( ::hx::Object *) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_unlock") ) { cffi_lime_renderer_unlock=ioValue.Cast< ::cpp::Function<  void( ::hx::Object *) > >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_type") ) { cffi_lime_renderer_get_type=ioValue.Cast< ::cpp::Function<   ::hx::Object *( ::hx::Object *) > >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_scale") ) { cffi_lime_renderer_get_scale=ioValue.Cast< ::cpp::Function<  Float( ::hx::Object *) > >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_get_context") ) { cffi_lime_renderer_get_context=ioValue.Cast< ::cpp::Function<  Float( ::hx::Object *) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_read_pixels") ) { cffi_lime_renderer_read_pixels=ioValue.Cast< ::cpp::Function<   ::hx::Object *( ::hx::Object *, ::hx::Object *) > >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_renderer_make_current") ) { cffi_lime_renderer_make_current=ioValue.Cast< ::cpp::Function<  void( ::hx::Object *) > >(); return true; }
	}
	return false;
}

void NativeRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf"));
	outFields->push(HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43"));
	outFields->push(HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"));
	outFields->push(HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo NativeRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsObject /*::lime::graphics::Renderer*/ ,(int)offsetof(NativeRenderer_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsBool,(int)offsetof(NativeRenderer_obj,useHardware),HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,cacheLock),HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(NativeRenderer_obj,cairo),HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeRenderer_obj,primarySurface),HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo NativeRenderer_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_create,HX_HCSTRING("cffi_lime_renderer_create","\xc7","\x6a","\x82","\x36")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_flip,HX_HCSTRING("cffi_lime_renderer_flip","\xb8","\xfd","\x97","\xe3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_get_context,HX_HCSTRING("cffi_lime_renderer_get_context","\x5b","\x52","\xa6","\x60")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_get_scale,HX_HCSTRING("cffi_lime_renderer_get_scale","\xf6","\x57","\xb7","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_get_type,HX_HCSTRING("cffi_lime_renderer_get_type","\xce","\x7a","\xd7","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_lock,HX_HCSTRING("cffi_lime_renderer_lock","\xf6","\x86","\x91","\xe7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_make_current,HX_HCSTRING("cffi_lime_renderer_make_current","\xb3","\x3b","\x5f","\xbd")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_read_pixels,HX_HCSTRING("cffi_lime_renderer_read_pixels","\x8b","\xc8","\xef","\x41")},
	{hx::fsObject /*Dynamic*/ ,(void *) &NativeRenderer_obj::cffi_lime_renderer_unlock,HX_HCSTRING("cffi_lime_renderer_unlock","\x8f","\xa6","\xff","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String NativeRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("useHardware","\x0f","\xea","\xde","\xcf"),
	HX_HCSTRING("cacheLock","\x4d","\xab","\x6c","\x43"),
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("primarySurface","\x8b","\xaa","\xee","\x10"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	HX_HCSTRING("flip","\xad","\x12","\xbe","\x43"),
	HX_HCSTRING("readPixels","\x23","\xd3","\x25","\x86"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void NativeRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_create,"cffi_lime_renderer_create");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_flip,"cffi_lime_renderer_flip");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_context,"cffi_lime_renderer_get_context");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_scale,"cffi_lime_renderer_get_scale");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_type,"cffi_lime_renderer_get_type");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_lock,"cffi_lime_renderer_lock");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_make_current,"cffi_lime_renderer_make_current");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_read_pixels,"cffi_lime_renderer_read_pixels");
	HX_MARK_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_unlock,"cffi_lime_renderer_unlock");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_create,"cffi_lime_renderer_create");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_flip,"cffi_lime_renderer_flip");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_context,"cffi_lime_renderer_get_context");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_scale,"cffi_lime_renderer_get_scale");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_get_type,"cffi_lime_renderer_get_type");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_lock,"cffi_lime_renderer_lock");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_make_current,"cffi_lime_renderer_make_current");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_read_pixels,"cffi_lime_renderer_read_pixels");
	HX_VISIT_MEMBER_NAME(NativeRenderer_obj::cffi_lime_renderer_unlock,"cffi_lime_renderer_unlock");
};

#endif

hx::Class NativeRenderer_obj::__mClass;

static ::String NativeRenderer_obj_sStaticFields[] = {
	HX_HCSTRING("lime_renderer_create","\x4e","\xc5","\x81","\x91"),
	HX_HCSTRING("lime_renderer_flip","\x7f","\xd8","\x55","\x6f"),
	HX_HCSTRING("lime_renderer_get_context","\x74","\x6e","\xee","\xe1"),
	HX_HCSTRING("lime_renderer_get_scale","\xcf","\x0b","\x88","\x72"),
	HX_HCSTRING("lime_renderer_get_type","\x15","\xc5","\x47","\xea"),
	HX_HCSTRING("lime_renderer_lock","\xbd","\x61","\x4f","\x73"),
	HX_HCSTRING("lime_renderer_make_current","\x7a","\xb5","\x2f","\x5b"),
	HX_HCSTRING("lime_renderer_read_pixels","\xa4","\xe4","\x37","\xc3"),
	HX_HCSTRING("lime_renderer_unlock","\x16","\x01","\xff","\x7a"),
	HX_HCSTRING("cffi_lime_renderer_create","\xc7","\x6a","\x82","\x36"),
	HX_HCSTRING("cffi_lime_renderer_flip","\xb8","\xfd","\x97","\xe3"),
	HX_HCSTRING("cffi_lime_renderer_get_context","\x5b","\x52","\xa6","\x60"),
	HX_HCSTRING("cffi_lime_renderer_get_scale","\xf6","\x57","\xb7","\x4d"),
	HX_HCSTRING("cffi_lime_renderer_get_type","\xce","\x7a","\xd7","\x4c"),
	HX_HCSTRING("cffi_lime_renderer_lock","\xf6","\x86","\x91","\xe7"),
	HX_HCSTRING("cffi_lime_renderer_make_current","\xb3","\x3b","\x5f","\xbd"),
	HX_HCSTRING("cffi_lime_renderer_read_pixels","\x8b","\xc8","\xef","\x41"),
	HX_HCSTRING("cffi_lime_renderer_unlock","\x8f","\xa6","\xff","\x1f"),
	::String(null())
};

void NativeRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeRenderer","\xb1","\xc4","\x96","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeRenderer_obj::__SetStatic;
	__mClass->mMarkFunc = NativeRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(NativeRenderer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(NativeRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NativeRenderer_obj::__boot()
{
{
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","boot",0x2717cd0f,"lime._backend.native.NativeRenderer.boot","lime/_backend/native/NativeRenderer.hx",183,0x398cc96c)
HXLINE( 183)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_renderer_create",4e,c5,81,91),HX_("oo",20,61,00,00),false);
HXDLIN( 183)		cffi_lime_renderer_create = inValue;
            	}
{
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","boot",0x2717cd0f,"lime._backend.native.NativeRenderer.boot","lime/_backend/native/NativeRenderer.hx",184,0x398cc96c)
HXLINE( 184)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_renderer_flip",7f,d8,55,6f),HX_("ov",27,61,00,00),false);
HXDLIN( 184)		cffi_lime_renderer_flip = inValue;
            	}
{
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","boot",0x2717cd0f,"lime._backend.native.NativeRenderer.boot","lime/_backend/native/NativeRenderer.hx",185,0x398cc96c)
HXLINE( 185)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_renderer_get_context",74,6e,ee,e1),HX_("od",15,61,00,00),false);
HXDLIN( 185)		cffi_lime_renderer_get_context = inValue;
            	}
{
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","boot",0x2717cd0f,"lime._backend.native.NativeRenderer.boot","lime/_backend/native/NativeRenderer.hx",186,0x398cc96c)
HXLINE( 186)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_renderer_get_scale",cf,0b,88,72),HX_("od",15,61,00,00),false);
HXDLIN( 186)		cffi_lime_renderer_get_scale = inValue;
            	}
{
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","boot",0x2717cd0f,"lime._backend.native.NativeRenderer.boot","lime/_backend/native/NativeRenderer.hx",187,0x398cc96c)
HXLINE( 187)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_renderer_get_type",15,c5,47,ea),HX_("oo",20,61,00,00),false);
HXDLIN( 187)		cffi_lime_renderer_get_type = inValue;
            	}
{
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","boot",0x2717cd0f,"lime._backend.native.NativeRenderer.boot","lime/_backend/native/NativeRenderer.hx",188,0x398cc96c)
HXLINE( 188)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_renderer_lock",bd,61,4f,73),HX_("oo",20,61,00,00),false);
HXDLIN( 188)		cffi_lime_renderer_lock = inValue;
            	}
{
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","boot",0x2717cd0f,"lime._backend.native.NativeRenderer.boot","lime/_backend/native/NativeRenderer.hx",189,0x398cc96c)
HXLINE( 189)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_renderer_make_current",7a,b5,2f,5b),HX_("ov",27,61,00,00),false);
HXDLIN( 189)		cffi_lime_renderer_make_current = inValue;
            	}
{
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","boot",0x2717cd0f,"lime._backend.native.NativeRenderer.boot","lime/_backend/native/NativeRenderer.hx",190,0x398cc96c)
HXLINE( 190)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_renderer_read_pixels",a4,e4,37,c3),HX_("ooo",4f,9b,54,00),false);
HXDLIN( 190)		cffi_lime_renderer_read_pixels = inValue;
            	}
{
            	HX_STACK_FRAME("lime._backend.native.NativeRenderer","boot",0x2717cd0f,"lime._backend.native.NativeRenderer.boot","lime/_backend/native/NativeRenderer.hx",191,0x398cc96c)
HXLINE( 191)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_renderer_unlock",16,01,ff,7a),HX_("ov",27,61,00,00),false);
HXDLIN( 191)		cffi_lime_renderer_unlock = inValue;
            	}
}

} // end namespace lime
} // end namespace _backend
} // end namespace native