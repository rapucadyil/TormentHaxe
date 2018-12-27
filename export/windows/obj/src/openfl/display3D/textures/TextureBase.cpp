// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeOpenGLRenderContext
#include <lime/_internal/backend/native/NativeOpenGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_SamplerState
#include <openfl/_internal/renderer/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6659164148434b5e_58_new,"openfl.display3D.textures.TextureBase","new",0x670078a1,"openfl.display3D.textures.TextureBase.new","openfl/display3D/textures/TextureBase.hx",58,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_145_dispose,"openfl.display3D.textures.TextureBase","dispose",0xa678dd60,"openfl.display3D.textures.TextureBase.dispose","openfl/display3D/textures/TextureBase.hx",145,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_160___getGLFramebuffer,"openfl.display3D.textures.TextureBase","__getGLFramebuffer",0xf27dbc71,"openfl.display3D.textures.TextureBase.__getGLFramebuffer","openfl/display3D/textures/TextureBase.hx",160,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_233___getImage,"openfl.display3D.textures.TextureBase","__getImage",0x67fff3e4,"openfl.display3D.textures.TextureBase.__getImage","openfl/display3D/textures/TextureBase.hx",233,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_296___getTexture,"openfl.display3D.textures.TextureBase","__getTexture",0x3c3c91a4,"openfl.display3D.textures.TextureBase.__getTexture","openfl/display3D/textures/TextureBase.hx",296,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_301___setSamplerState,"openfl.display3D.textures.TextureBase","__setSamplerState",0x8e361f8c,"openfl.display3D.textures.TextureBase.__setSamplerState","openfl/display3D/textures/TextureBase.hx",301,0x7b0f92ae)
HX_LOCAL_STACK_FRAME(_hx_pos_6659164148434b5e_34_boot,"openfl.display3D.textures.TextureBase","boot",0xb18214d1,"openfl.display3D.textures.TextureBase.boot","openfl/display3D/textures/TextureBase.hx",34,0x7b0f92ae)
namespace openfl{
namespace display3D{
namespace textures{

void TextureBase_obj::__construct( ::openfl::display3D::Context3D context){
            	HX_GC_STACKFRAME(&_hx_pos_6659164148434b5e_58_new)
HXLINE(  60)		super::__construct(null());
HXLINE(  62)		this->_hx___context = context;
HXLINE(  63)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE(  66)		this->_hx___textureID = gl->createTexture();
HXLINE(  67)		this->_hx___textureContext = this->_hx___context->_hx___context;
HXLINE(  69)		if (hx::IsNull( ::openfl::display3D::textures::TextureBase_obj::_hx___supportsBGRA )) {
HXLINE(  71)			::openfl::display3D::textures::TextureBase_obj::_hx___textureInternalFormat = gl->RGBA;
HXLINE(  73)			 ::Dynamic bgraExtension = null();
HXLINE(  75)			bgraExtension = gl->getExtension(HX_("EXT_bgra",72,74,1a,40));
HXLINE(  76)			if (hx::IsNull( bgraExtension )) {
HXLINE(  77)				bgraExtension = gl->getExtension(HX_("EXT_texture_format_BGRA8888",5a,d2,bd,b2));
            			}
HXLINE(  78)			if (hx::IsNull( bgraExtension )) {
HXLINE(  79)				bgraExtension = gl->getExtension(HX_("APPLE_texture_format_BGRA8888",13,8a,88,e2));
            			}
HXLINE(  82)			if (hx::IsNotNull( bgraExtension )) {
HXLINE(  84)				::openfl::display3D::textures::TextureBase_obj::_hx___supportsBGRA = true;
HXLINE(  85)				::openfl::display3D::textures::TextureBase_obj::_hx___textureFormat = ( (int)(bgraExtension->__Field(HX_("BGRA_EXT",36,94,c4,bc),hx::paccDynamic)) );
HXLINE(  88)				if ((context->_hx___context->type == HX_("opengles",9d,f6,c9,fa))) {
HXLINE(  89)					::openfl::display3D::textures::TextureBase_obj::_hx___textureInternalFormat = ( (int)(bgraExtension->__Field(HX_("BGRA_EXT",36,94,c4,bc),hx::paccDynamic)) );
            				}
            			}
            			else {
HXLINE(  95)				::openfl::display3D::textures::TextureBase_obj::_hx___supportsBGRA = false;
HXLINE(  96)				::openfl::display3D::textures::TextureBase_obj::_hx___textureFormat = gl->RGBA;
            			}
HXLINE( 100)			::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormats =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 101)			::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormatsAlpha =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 109)			 ::Dynamic dxtExtension = gl->getExtension(HX_("EXT_texture_compression_s3tc",6a,86,aa,80));
HXLINE( 110)			 ::Dynamic etc1Extension = gl->getExtension(HX_("OES_compressed_ETC1_RGB8_texture",cd,f1,a0,b8));
HXLINE( 111)			 ::Dynamic pvrtcExtension = gl->getExtension(HX_("IMG_texture_compression_pvrtc",02,61,85,d1));
HXLINE( 114)			if (hx::IsNotNull( dxtExtension )) {
HXLINE( 115)				{
HXLINE( 115)					int v = ( (int)(dxtExtension->__Field(HX_("COMPRESSED_RGBA_S3TC_DXT1_EXT",b6,6f,45,f9),hx::paccDynamic)) );
HXDLIN( 115)					::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormats->set((int)0,v);
            				}
HXLINE( 116)				{
HXLINE( 116)					int v1 = ( (int)(dxtExtension->__Field(HX_("COMPRESSED_RGBA_S3TC_DXT5_EXT",ba,c1,df,46),hx::paccDynamic)) );
HXDLIN( 116)					::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormatsAlpha->set((int)0,v1);
            				}
            			}
HXLINE( 119)			if (hx::IsNotNull( etc1Extension )) {
HXLINE( 124)				{
HXLINE( 124)					int v2 = ( (int)(etc1Extension->__Field(HX_("ETC1_RGB8_OES",ab,04,61,eb),hx::paccDynamic)) );
HXDLIN( 124)					::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormats->set((int)2,v2);
            				}
HXLINE( 125)				{
HXLINE( 125)					int v3 = ( (int)(etc1Extension->__Field(HX_("ETC1_RGB8_OES",ab,04,61,eb),hx::paccDynamic)) );
HXDLIN( 125)					::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormatsAlpha->set((int)2,v3);
            				}
            			}
HXLINE( 129)			if (hx::IsNotNull( pvrtcExtension )) {
HXLINE( 130)				{
HXLINE( 130)					int v4 = ( (int)(pvrtcExtension->__Field(HX_("COMPRESSED_RGB_PVRTC_4BPPV1_IMG",a1,18,41,ce),hx::paccDynamic)) );
HXDLIN( 130)					::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormats->set((int)1,v4);
            				}
HXLINE( 131)				{
HXLINE( 131)					int v5 = ( (int)(pvrtcExtension->__Field(HX_("COMPRESSED_RGBA_PVRTC_4BPPV1_IMG",be,45,75,bf),hx::paccDynamic)) );
HXDLIN( 131)					::openfl::display3D::textures::TextureBase_obj::_hx___compressedFormatsAlpha->set((int)1,v5);
            				}
            			}
            		}
HXLINE( 136)		this->_hx___internalFormat = ::openfl::display3D::textures::TextureBase_obj::_hx___textureInternalFormat;
HXLINE( 137)		this->_hx___format = ::openfl::display3D::textures::TextureBase_obj::_hx___textureFormat;
            	}

Dynamic TextureBase_obj::__CreateEmpty() { return new TextureBase_obj; }

void *TextureBase_obj::_hx_vtable = 0;

Dynamic TextureBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextureBase_obj > _hx_result = new TextureBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextureBase_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19affbf1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x19affbf1;
	} else {
		return inClassId==(int)0x1b123bf8;
	}
}

void TextureBase_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_6659164148434b5e_145_dispose)
HXLINE( 147)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 149)		if (hx::IsNotNull( this->_hx___alphaTexture )) {
HXLINE( 151)			this->_hx___alphaTexture->dispose();
            		}
HXLINE( 155)		gl->deleteTexture(this->_hx___textureID);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureBase_obj,dispose,(void))

 ::lime::graphics::opengl::GLObject TextureBase_obj::_hx___getGLFramebuffer(bool enableDepthAndStencil,int antiAlias,int surfaceSelector){
            	HX_STACKFRAME(&_hx_pos_6659164148434b5e_160___getGLFramebuffer)
HXLINE( 162)		 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 164)		if (hx::IsNull( this->_hx___glFramebuffer )) {
HXLINE( 166)			this->_hx___glFramebuffer = gl->createFramebuffer();
HXLINE( 167)			this->_hx___context->_hx___bindGLFramebuffer(this->_hx___glFramebuffer);
HXLINE( 168)			gl->framebufferTexture2D(gl->FRAMEBUFFER,gl->COLOR_ATTACHMENT0,gl->TEXTURE_2D,this->_hx___textureID,(int)0);
HXLINE( 170)			if (this->_hx___context->_hx___enableErrorChecking) {
HXLINE( 172)				int code = gl->checkFramebufferStatus(gl->FRAMEBUFFER);
HXLINE( 174)				if ((code != gl->FRAMEBUFFER_COMPLETE)) {
HXLINE( 176)					 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 176)					_hx_tmp((((((HX_("Error: Context3D.setRenderToTexture status:",4c,0a,86,52) + code) + HX_(" width:",94,67,ab,7e)) + this->_hx___width) + HX_(" height:",53,26,89,26)) + this->_hx___height),hx::SourceInfo(HX_("TextureBase.hx",d2,8f,e6,f9),176,HX_("openfl.display3D.textures.TextureBase",2f,94,15,bc),HX_("__getGLFramebuffer",92,f3,72,c9)));
            				}
            			}
            		}
HXLINE( 184)		bool _hx_tmp1;
HXDLIN( 184)		if (enableDepthAndStencil) {
HXLINE( 184)			_hx_tmp1 = hx::IsNull( this->_hx___glDepthRenderbuffer );
            		}
            		else {
HXLINE( 184)			_hx_tmp1 = false;
            		}
HXDLIN( 184)		if (_hx_tmp1) {
HXLINE( 186)			this->_hx___context->_hx___bindGLFramebuffer(this->_hx___glFramebuffer);
HXLINE( 188)			if ((::openfl::display3D::Context3D_obj::GL_DEPTH_STENCIL != (int)0)) {
HXLINE( 190)				this->_hx___glDepthRenderbuffer = gl->createRenderbuffer();
HXLINE( 191)				this->_hx___glStencilRenderbuffer = this->_hx___glDepthRenderbuffer;
HXLINE( 193)				gl->bindRenderbuffer(gl->RENDERBUFFER,this->_hx___glDepthRenderbuffer);
HXLINE( 194)				gl->renderbufferStorage(gl->RENDERBUFFER,::openfl::display3D::Context3D_obj::GL_DEPTH_STENCIL,this->_hx___width,this->_hx___height);
HXLINE( 195)				gl->framebufferRenderbuffer(gl->FRAMEBUFFER,gl->DEPTH_STENCIL_ATTACHMENT,gl->RENDERBUFFER,this->_hx___glDepthRenderbuffer);
            			}
            			else {
HXLINE( 199)				this->_hx___glDepthRenderbuffer = gl->createRenderbuffer();
HXLINE( 200)				this->_hx___glStencilRenderbuffer = gl->createRenderbuffer();
HXLINE( 202)				gl->bindRenderbuffer(gl->RENDERBUFFER,this->_hx___glDepthRenderbuffer);
HXLINE( 203)				gl->renderbufferStorage(gl->RENDERBUFFER,gl->DEPTH_COMPONENT16,this->_hx___width,this->_hx___height);
HXLINE( 204)				gl->bindRenderbuffer(gl->RENDERBUFFER,this->_hx___glStencilRenderbuffer);
HXLINE( 205)				gl->renderbufferStorage(gl->RENDERBUFFER,gl->STENCIL_INDEX8,this->_hx___width,this->_hx___height);
HXLINE( 207)				gl->framebufferRenderbuffer(gl->FRAMEBUFFER,gl->DEPTH_ATTACHMENT,gl->RENDERBUFFER,this->_hx___glDepthRenderbuffer);
HXLINE( 208)				gl->framebufferRenderbuffer(gl->FRAMEBUFFER,gl->STENCIL_ATTACHMENT,gl->RENDERBUFFER,this->_hx___glStencilRenderbuffer);
            			}
HXLINE( 212)			if (this->_hx___context->_hx___enableErrorChecking) {
HXLINE( 214)				int code1 = gl->checkFramebufferStatus(gl->FRAMEBUFFER);
HXLINE( 216)				if ((code1 != gl->FRAMEBUFFER_COMPLETE)) {
HXLINE( 218)					 ::Dynamic _hx_tmp2 = ::haxe::Log_obj::trace;
HXDLIN( 218)					_hx_tmp2((((((HX_("Error: Context3D.setRenderToTexture status:",4c,0a,86,52) + code1) + HX_(" width:",94,67,ab,7e)) + this->_hx___width) + HX_(" height:",53,26,89,26)) + this->_hx___height),hx::SourceInfo(HX_("TextureBase.hx",d2,8f,e6,f9),218,HX_("openfl.display3D.textures.TextureBase",2f,94,15,bc),HX_("__getGLFramebuffer",92,f3,72,c9)));
            				}
            			}
HXLINE( 224)			gl->bindRenderbuffer(gl->RENDERBUFFER,null());
            		}
HXLINE( 228)		return this->_hx___glFramebuffer;
            	}


HX_DEFINE_DYNAMIC_FUNC3(TextureBase_obj,_hx___getGLFramebuffer,return )

 ::lime::graphics::Image TextureBase_obj::_hx___getImage( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_6659164148434b5e_233___getImage)
HXLINE( 235)		 ::lime::graphics::Image image = bitmapData->image;
HXLINE( 237)		bool _hx_tmp;
HXDLIN( 237)		if (!(!(bitmapData->_hx___isValid))) {
HXLINE( 237)			_hx_tmp = hx::IsNull( image );
            		}
            		else {
HXLINE( 237)			_hx_tmp = true;
            		}
HXDLIN( 237)		if (_hx_tmp) {
HXLINE( 239)			return null();
            		}
HXLINE( 277)		bool _hx_tmp1;
HXDLIN( 277)		if (!(image->get_premultiplied())) {
HXLINE( 277)			_hx_tmp1 = image->get_transparent();
            		}
            		else {
HXLINE( 277)			_hx_tmp1 = false;
            		}
HXDLIN( 277)		if (_hx_tmp1) {
HXLINE( 279)			image = image->clone();
HXLINE( 280)			image->set_premultiplied(true);
            		}
HXLINE( 289)		return image;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,_hx___getImage,return )

 ::lime::graphics::opengl::GLObject TextureBase_obj::_hx___getTexture(){
            	HX_STACKFRAME(&_hx_pos_6659164148434b5e_296___getTexture)
HXDLIN( 296)		return this->_hx___textureID;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextureBase_obj,_hx___getTexture,return )

bool TextureBase_obj::_hx___setSamplerState( ::openfl::_internal::renderer::SamplerState state){
            	HX_GC_STACKFRAME(&_hx_pos_6659164148434b5e_301___setSamplerState)
HXLINE( 303)		if (!(state->equals(this->_hx___samplerState))) {
HXLINE( 305)			 ::lime::_internal::backend::native::NativeOpenGLRenderContext gl = this->_hx___context->gl;
HXLINE( 307)			this->_hx___context->_hx___bindGLTexture2D(this->_hx___textureID);
HXLINE( 309)			int wrapModeS = (int)0;
HXDLIN( 309)			int wrapModeT = (int)0;
HXLINE( 311)			{
HXLINE( 311)				 ::Dynamic _g = state->wrap;
HXDLIN( 311)				 ::Dynamic _hx_switch_0 = _g;
            				if (  (_hx_switch_0==(int)0) ){
HXLINE( 313)					wrapModeS = gl->CLAMP_TO_EDGE;
HXLINE( 314)					wrapModeT = gl->CLAMP_TO_EDGE;
HXLINE( 312)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==(int)1) ){
HXLINE( 316)					wrapModeS = gl->CLAMP_TO_EDGE;
HXLINE( 317)					wrapModeT = gl->REPEAT;
HXLINE( 315)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==(int)2) ){
HXLINE( 319)					wrapModeS = gl->REPEAT;
HXLINE( 320)					wrapModeT = gl->REPEAT;
HXLINE( 318)					goto _hx_goto_5;
            				}
            				if (  (_hx_switch_0==(int)3) ){
HXLINE( 322)					wrapModeS = gl->REPEAT;
HXLINE( 323)					wrapModeT = gl->CLAMP_TO_EDGE;
HXLINE( 321)					goto _hx_goto_5;
            				}
            				/* default */{
HXLINE( 325)					HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("wrap bad enum",52,1c,4c,59),null()));
            				}
            				_hx_goto_5:;
            			}
HXLINE( 328)			int magFilter = (int)0;
HXDLIN( 328)			int minFilter = (int)0;
HXLINE( 330)			{
HXLINE( 330)				 ::Dynamic _g1 = state->filter;
HXDLIN( 330)				if (hx::IsEq( _g1,(int)5 )) {
HXLINE( 332)					magFilter = gl->NEAREST;
            				}
            				else {
HXLINE( 334)					magFilter = gl->LINEAR;
            				}
            			}
HXLINE( 337)			{
HXLINE( 337)				 ::Dynamic _g2 = state->mipfilter;
HXDLIN( 337)				 ::Dynamic _hx_switch_1 = _g2;
            				if (  (_hx_switch_1==(int)0) ){
HXLINE( 339)					if (hx::IsEq( state->filter,(int)5 )) {
HXLINE( 339)						minFilter = gl->NEAREST_MIPMAP_LINEAR;
            					}
            					else {
HXLINE( 339)						minFilter = gl->LINEAR_MIPMAP_LINEAR;
            					}
HXDLIN( 339)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_1==(int)1) ){
HXLINE( 341)					if (hx::IsEq( state->filter,(int)5 )) {
HXLINE( 341)						minFilter = gl->NEAREST_MIPMAP_NEAREST;
            					}
            					else {
HXLINE( 341)						minFilter = gl->LINEAR_MIPMAP_NEAREST;
            					}
HXDLIN( 341)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_1==(int)2) ){
HXLINE( 343)					if (hx::IsEq( state->filter,(int)5 )) {
HXLINE( 343)						minFilter = gl->NEAREST;
            					}
            					else {
HXLINE( 343)						minFilter = gl->LINEAR;
            					}
HXDLIN( 343)					goto _hx_goto_6;
            				}
            				/* default */{
HXLINE( 345)					HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("mipfiter bad enum",b2,1b,09,c4),null()));
            				}
            				_hx_goto_6:;
            			}
HXLINE( 348)			gl->texParameteri(this->_hx___textureTarget,gl->TEXTURE_MIN_FILTER,minFilter);
HXLINE( 349)			gl->texParameteri(this->_hx___textureTarget,gl->TEXTURE_MAG_FILTER,magFilter);
HXLINE( 350)			gl->texParameteri(this->_hx___textureTarget,gl->TEXTURE_WRAP_S,wrapModeS);
HXLINE( 351)			gl->texParameteri(this->_hx___textureTarget,gl->TEXTURE_WRAP_T,wrapModeT);
HXLINE( 353)			bool _hx_tmp = (state->lodBias != ((Float)0.0));
HXLINE( 360)			if (hx::IsNull( this->_hx___samplerState )) {
HXLINE( 360)				this->_hx___samplerState = state->clone();
            			}
HXLINE( 361)			this->_hx___samplerState->copyFrom(state);
HXLINE( 363)			return true;
            		}
HXLINE( 367)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextureBase_obj,_hx___setSamplerState,return )

 ::haxe::ds::IntMap TextureBase_obj::_hx___compressedFormats;

 ::haxe::ds::IntMap TextureBase_obj::_hx___compressedFormatsAlpha;

 ::Dynamic TextureBase_obj::_hx___supportsBGRA;

int TextureBase_obj::_hx___textureFormat;

int TextureBase_obj::_hx___textureInternalFormat;


hx::ObjectPtr< TextureBase_obj > TextureBase_obj::__new( ::openfl::display3D::Context3D context) {
	hx::ObjectPtr< TextureBase_obj > __this = new TextureBase_obj();
	__this->__construct(context);
	return __this;
}

hx::ObjectPtr< TextureBase_obj > TextureBase_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context) {
	TextureBase_obj *__this = (TextureBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextureBase_obj), true, "openfl.display3D.textures.TextureBase"));
	*(void **)__this = TextureBase_obj::_hx_vtable;
	__this->__construct(context);
	return __this;
}

TextureBase_obj::TextureBase_obj()
{
}

void TextureBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextureBase);
	HX_MARK_MEMBER_NAME(_hx___alphaTexture,"__alphaTexture");
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___format,"__format");
	HX_MARK_MEMBER_NAME(_hx___glDepthRenderbuffer,"__glDepthRenderbuffer");
	HX_MARK_MEMBER_NAME(_hx___glFramebuffer,"__glFramebuffer");
	HX_MARK_MEMBER_NAME(_hx___glStencilRenderbuffer,"__glStencilRenderbuffer");
	HX_MARK_MEMBER_NAME(_hx___height,"__height");
	HX_MARK_MEMBER_NAME(_hx___internalFormat,"__internalFormat");
	HX_MARK_MEMBER_NAME(_hx___optimizeForRenderToTexture,"__optimizeForRenderToTexture");
	HX_MARK_MEMBER_NAME(_hx___samplerState,"__samplerState");
	HX_MARK_MEMBER_NAME(_hx___streamingLevels,"__streamingLevels");
	HX_MARK_MEMBER_NAME(_hx___textureContext,"__textureContext");
	HX_MARK_MEMBER_NAME(_hx___textureID,"__textureID");
	HX_MARK_MEMBER_NAME(_hx___textureTarget,"__textureTarget");
	HX_MARK_MEMBER_NAME(_hx___width,"__width");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextureBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___alphaTexture,"__alphaTexture");
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___format,"__format");
	HX_VISIT_MEMBER_NAME(_hx___glDepthRenderbuffer,"__glDepthRenderbuffer");
	HX_VISIT_MEMBER_NAME(_hx___glFramebuffer,"__glFramebuffer");
	HX_VISIT_MEMBER_NAME(_hx___glStencilRenderbuffer,"__glStencilRenderbuffer");
	HX_VISIT_MEMBER_NAME(_hx___height,"__height");
	HX_VISIT_MEMBER_NAME(_hx___internalFormat,"__internalFormat");
	HX_VISIT_MEMBER_NAME(_hx___optimizeForRenderToTexture,"__optimizeForRenderToTexture");
	HX_VISIT_MEMBER_NAME(_hx___samplerState,"__samplerState");
	HX_VISIT_MEMBER_NAME(_hx___streamingLevels,"__streamingLevels");
	HX_VISIT_MEMBER_NAME(_hx___textureContext,"__textureContext");
	HX_VISIT_MEMBER_NAME(_hx___textureID,"__textureID");
	HX_VISIT_MEMBER_NAME(_hx___textureTarget,"__textureTarget");
	HX_VISIT_MEMBER_NAME(_hx___width,"__width");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TextureBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { return hx::Val( _hx___width ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { return hx::Val( _hx___format ); }
		if (HX_FIELD_EQ(inName,"__height") ) { return hx::Val( _hx___height ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return hx::Val( _hx___context ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__getImage") ) { return hx::Val( _hx___getImage_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__textureID") ) { return hx::Val( _hx___textureID ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__getTexture") ) { return hx::Val( _hx___getTexture_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__alphaTexture") ) { return hx::Val( _hx___alphaTexture ); }
		if (HX_FIELD_EQ(inName,"__samplerState") ) { return hx::Val( _hx___samplerState ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glFramebuffer") ) { return hx::Val( _hx___glFramebuffer ); }
		if (HX_FIELD_EQ(inName,"__textureTarget") ) { return hx::Val( _hx___textureTarget ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__internalFormat") ) { return hx::Val( _hx___internalFormat ); }
		if (HX_FIELD_EQ(inName,"__textureContext") ) { return hx::Val( _hx___textureContext ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { return hx::Val( _hx___streamingLevels ); }
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return hx::Val( _hx___setSamplerState_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__getGLFramebuffer") ) { return hx::Val( _hx___getGLFramebuffer_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__glDepthRenderbuffer") ) { return hx::Val( _hx___glDepthRenderbuffer ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__glStencilRenderbuffer") ) { return hx::Val( _hx___glStencilRenderbuffer ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { return hx::Val( _hx___optimizeForRenderToTexture ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextureBase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { outValue = ( _hx___supportsBGRA ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureFormat") ) { outValue = ( _hx___textureFormat ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__compressedFormats") ) { outValue = ( _hx___compressedFormats ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__textureInternalFormat") ) { outValue = ( _hx___textureInternalFormat ); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__compressedFormatsAlpha") ) { outValue = ( _hx___compressedFormatsAlpha ); return true; }
	}
	return false;
}

hx::Val TextureBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { _hx___width=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { _hx___format=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__height") ) { _hx___height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__textureID") ) { _hx___textureID=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__alphaTexture") ) { _hx___alphaTexture=inValue.Cast<  ::openfl::display3D::textures::TextureBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerState") ) { _hx___samplerState=inValue.Cast<  ::openfl::_internal::renderer::SamplerState >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__glFramebuffer") ) { _hx___glFramebuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureTarget") ) { _hx___textureTarget=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__internalFormat") ) { _hx___internalFormat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__textureContext") ) { _hx___textureContext=inValue.Cast<  ::lime::graphics::RenderContext >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { _hx___streamingLevels=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__glDepthRenderbuffer") ) { _hx___glDepthRenderbuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__glStencilRenderbuffer") ) { _hx___glStencilRenderbuffer=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { _hx___optimizeForRenderToTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextureBase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"__supportsBGRA") ) { _hx___supportsBGRA=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__textureFormat") ) { _hx___textureFormat=ioValue.Cast< int >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__compressedFormats") ) { _hx___compressedFormats=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__textureInternalFormat") ) { _hx___textureInternalFormat=ioValue.Cast< int >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__compressedFormatsAlpha") ) { _hx___compressedFormatsAlpha=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
	}
	return false;
}

void TextureBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__alphaTexture","\x3d","\x94","\x14","\x53"));
	outFields->push(HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"));
	outFields->push(HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5"));
	outFields->push(HX_HCSTRING("__glDepthRenderbuffer","\x74","\x4f","\x5f","\x25"));
	outFields->push(HX_HCSTRING("__glFramebuffer","\xa8","\xa3","\x61","\xb3"));
	outFields->push(HX_HCSTRING("__glStencilRenderbuffer","\xad","\xa2","\xbe","\x0a"));
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("__internalFormat","\x74","\x81","\xbd","\x56"));
	outFields->push(HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"));
	outFields->push(HX_HCSTRING("__samplerState","\x09","\x67","\x80","\xdc"));
	outFields->push(HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07"));
	outFields->push(HX_HCSTRING("__textureContext","\x74","\x21","\x78","\x6f"));
	outFields->push(HX_HCSTRING("__textureID","\x56","\x7e","\x75","\xdd"));
	outFields->push(HX_HCSTRING("__textureTarget","\x6c","\xff","\xb6","\xa1"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextureBase_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::textures::TextureBase*/ ,(int)offsetof(TextureBase_obj,_hx___alphaTexture),HX_HCSTRING("__alphaTexture","\x3d","\x94","\x14","\x53")},
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(TextureBase_obj,_hx___context),HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,_hx___format),HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(TextureBase_obj,_hx___glDepthRenderbuffer),HX_HCSTRING("__glDepthRenderbuffer","\x74","\x4f","\x5f","\x25")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(TextureBase_obj,_hx___glFramebuffer),HX_HCSTRING("__glFramebuffer","\xa8","\xa3","\x61","\xb3")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(TextureBase_obj,_hx___glStencilRenderbuffer),HX_HCSTRING("__glStencilRenderbuffer","\xad","\xa2","\xbe","\x0a")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,_hx___height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,_hx___internalFormat),HX_HCSTRING("__internalFormat","\x74","\x81","\xbd","\x56")},
	{hx::fsBool,(int)offsetof(TextureBase_obj,_hx___optimizeForRenderToTexture),HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3")},
	{hx::fsObject /*::openfl::_internal::renderer::SamplerState*/ ,(int)offsetof(TextureBase_obj,_hx___samplerState),HX_HCSTRING("__samplerState","\x09","\x67","\x80","\xdc")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,_hx___streamingLevels),HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07")},
	{hx::fsObject /*::lime::graphics::RenderContext*/ ,(int)offsetof(TextureBase_obj,_hx___textureContext),HX_HCSTRING("__textureContext","\x74","\x21","\x78","\x6f")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(TextureBase_obj,_hx___textureID),HX_HCSTRING("__textureID","\x56","\x7e","\x75","\xdd")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,_hx___textureTarget),HX_HCSTRING("__textureTarget","\x6c","\xff","\xb6","\xa1")},
	{hx::fsInt,(int)offsetof(TextureBase_obj,_hx___width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo TextureBase_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &TextureBase_obj::_hx___compressedFormats,HX_HCSTRING("__compressedFormats","\xbb","\xc7","\x22","\xd3")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &TextureBase_obj::_hx___compressedFormatsAlpha,HX_HCSTRING("__compressedFormatsAlpha","\xa3","\x69","\xec","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextureBase_obj::_hx___supportsBGRA,HX_HCSTRING("__supportsBGRA","\x58","\x53","\x57","\x0f")},
	{hx::fsInt,(void *) &TextureBase_obj::_hx___textureFormat,HX_HCSTRING("__textureFormat","\x52","\x9b","\x58","\x18")},
	{hx::fsInt,(void *) &TextureBase_obj::_hx___textureInternalFormat,HX_HCSTRING("__textureInternalFormat","\x6f","\x15","\xaa","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String TextureBase_obj_sMemberFields[] = {
	HX_HCSTRING("__alphaTexture","\x3d","\x94","\x14","\x53"),
	HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"),
	HX_HCSTRING("__format","\x57","\xfa","\xbd","\xa5"),
	HX_HCSTRING("__glDepthRenderbuffer","\x74","\x4f","\x5f","\x25"),
	HX_HCSTRING("__glFramebuffer","\xa8","\xa3","\x61","\xb3"),
	HX_HCSTRING("__glStencilRenderbuffer","\xad","\xa2","\xbe","\x0a"),
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("__internalFormat","\x74","\x81","\xbd","\x56"),
	HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"),
	HX_HCSTRING("__samplerState","\x09","\x67","\x80","\xdc"),
	HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07"),
	HX_HCSTRING("__textureContext","\x74","\x21","\x78","\x6f"),
	HX_HCSTRING("__textureID","\x56","\x7e","\x75","\xdd"),
	HX_HCSTRING("__textureTarget","\x6c","\xff","\xb6","\xa1"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("__getGLFramebuffer","\x92","\xf3","\x72","\xc9"),
	HX_HCSTRING("__getImage","\x05","\xa2","\x78","\xc0"),
	HX_HCSTRING("__getTexture","\x05","\xca","\xd5","\x26"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	::String(null()) };

static void TextureBase_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureBase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextureBase_obj::_hx___compressedFormats,"__compressedFormats");
	HX_MARK_MEMBER_NAME(TextureBase_obj::_hx___compressedFormatsAlpha,"__compressedFormatsAlpha");
	HX_MARK_MEMBER_NAME(TextureBase_obj::_hx___supportsBGRA,"__supportsBGRA");
	HX_MARK_MEMBER_NAME(TextureBase_obj::_hx___textureFormat,"__textureFormat");
	HX_MARK_MEMBER_NAME(TextureBase_obj::_hx___textureInternalFormat,"__textureInternalFormat");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextureBase_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureBase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::_hx___compressedFormats,"__compressedFormats");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::_hx___compressedFormatsAlpha,"__compressedFormatsAlpha");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::_hx___supportsBGRA,"__supportsBGRA");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::_hx___textureFormat,"__textureFormat");
	HX_VISIT_MEMBER_NAME(TextureBase_obj::_hx___textureInternalFormat,"__textureInternalFormat");
};

#endif

hx::Class TextureBase_obj::__mClass;

static ::String TextureBase_obj_sStaticFields[] = {
	HX_HCSTRING("__compressedFormats","\xbb","\xc7","\x22","\xd3"),
	HX_HCSTRING("__compressedFormatsAlpha","\xa3","\x69","\xec","\x0f"),
	HX_HCSTRING("__supportsBGRA","\x58","\x53","\x57","\x0f"),
	HX_HCSTRING("__textureFormat","\x52","\x9b","\x58","\x18"),
	HX_HCSTRING("__textureInternalFormat","\x6f","\x15","\xaa","\xa7"),
	::String(null())
};

void TextureBase_obj::__register()
{
	hx::Object *dummy = new TextureBase_obj;
	TextureBase_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.TextureBase","\x2f","\x94","\x15","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextureBase_obj::__GetStatic;
	__mClass->mSetStaticField = &TextureBase_obj::__SetStatic;
	__mClass->mMarkFunc = TextureBase_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TextureBase_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextureBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextureBase_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextureBase_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextureBase_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6659164148434b5e_34_boot)
HXDLIN(  34)		_hx___supportsBGRA = null();
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
