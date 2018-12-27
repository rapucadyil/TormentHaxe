// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DGraphics
#include <openfl/_internal/renderer/context3D/Context3DGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DMaskShader
#include <openfl/_internal/renderer/context3D/Context3DMaskShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_context3D_Context3DShape
#include <openfl/_internal/renderer/context3D/Context3DShape.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_41639727e8ecbcfa_35_render,"openfl._internal.renderer.context3D.Context3DShape","render",0xd076fdda,"openfl._internal.renderer.context3D.Context3DShape.render","openfl/_internal/renderer/context3D/Context3DShape.hx",35,0x5ed8a254)
HX_LOCAL_STACK_FRAME(_hx_pos_41639727e8ecbcfa_85_renderMask,"openfl._internal.renderer.context3D.Context3DShape","renderMask",0x5cc35fe6,"openfl._internal.renderer.context3D.Context3DShape.renderMask","openfl/_internal/renderer/context3D/Context3DShape.hx",85,0x5ed8a254)
namespace openfl{
namespace _internal{
namespace renderer{
namespace context3D{

void Context3DShape_obj::__construct() { }

Dynamic Context3DShape_obj::__CreateEmpty() { return new Context3DShape_obj; }

void *Context3DShape_obj::_hx_vtable = 0;

Dynamic Context3DShape_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DShape_obj > _hx_result = new Context3DShape_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DShape_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07fb96fa;
}

void Context3DShape_obj::render( ::openfl::display::DisplayObject shape, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_41639727e8ecbcfa_35_render)
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		if (!(!(shape->_hx___renderable))) {
HXLINE(  37)			_hx_tmp = (shape->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE(  37)			_hx_tmp = true;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  37)			return;
            		}
HXLINE(  39)		 ::openfl::display::Graphics graphics = shape->_hx___graphics;
HXLINE(  41)		if (hx::IsNotNull( graphics )) {
HXLINE(  43)			renderer->_hx___setBlendMode(shape->_hx___worldBlendMode);
HXLINE(  44)			renderer->_hx___pushMaskObject(shape,null());
HXLINE(  47)			::openfl::_internal::renderer::context3D::Context3DGraphics_obj::render(graphics,renderer);
HXLINE(  49)			 ::openfl::geom::Rectangle bounds = graphics->_hx___bounds;
HXLINE(  51)			bool _hx_tmp1;
HXDLIN(  51)			if (hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE(  51)				_hx_tmp1 = graphics->_hx___visible;
            			}
            			else {
HXLINE(  51)				_hx_tmp1 = false;
            			}
HXDLIN(  51)			if (_hx_tmp1) {
HXLINE(  53)				 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE(  55)				 ::openfl::display::Shader shader = renderer->_hx___initDisplayShader(shape->_hx___worldShader);
HXLINE(  56)				renderer->setShader(shader);
HXLINE(  57)				renderer->applyBitmapData(graphics->_hx___bitmap,renderer->_hx___allowSmoothing,null());
HXLINE(  58)				renderer->applyMatrix(renderer->_hx___getMatrix(graphics->_hx___worldTransform,(int)1));
HXLINE(  59)				renderer->applyAlpha(shape->_hx___worldAlpha);
HXLINE(  60)				renderer->applyColorTransform(shape->_hx___worldColorTransform);
HXLINE(  61)				renderer->updateShader();
HXLINE(  63)				 ::openfl::display3D::VertexBuffer3D vertexBuffer = graphics->_hx___bitmap->getVertexBuffer(context);
HXLINE(  64)				if (hx::IsNotNull( shader->_hx___position )) {
HXLINE(  64)					context->setVertexBufferAt(shader->_hx___position->index,vertexBuffer,(int)0,(int)3);
            				}
HXLINE(  65)				if (hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE(  65)					context->setVertexBufferAt(shader->_hx___textureCoord->index,vertexBuffer,(int)3,(int)2);
            				}
HXLINE(  66)				 ::openfl::display3D::IndexBuffer3D indexBuffer = graphics->_hx___bitmap->getIndexBuffer(context);
HXLINE(  67)				context->drawTriangles(indexBuffer,null(),null());
HXLINE(  73)				renderer->_hx___clearShader();
            			}
HXLINE(  78)			renderer->_hx___popMaskObject(shape,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DShape_obj,render,(void))

void Context3DShape_obj::renderMask( ::openfl::display::DisplayObject shape, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_41639727e8ecbcfa_85_renderMask)
HXLINE(  87)		 ::openfl::display::Graphics graphics = shape->_hx___graphics;
HXLINE(  89)		if (hx::IsNotNull( graphics )) {
HXLINE(  93)			::openfl::_internal::renderer::context3D::Context3DGraphics_obj::renderMask(graphics,renderer);
HXLINE(  95)			 ::openfl::geom::Rectangle bounds = graphics->_hx___bounds;
HXLINE(  97)			if (hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE(  99)				 ::openfl::display3D::Context3D context = renderer->_hx___context3D;
HXLINE( 101)				 ::openfl::_internal::renderer::context3D::Context3DMaskShader shader = renderer->_hx___maskShader;
HXLINE( 102)				renderer->setShader(shader);
HXLINE( 103)				renderer->applyBitmapData(graphics->_hx___bitmap,renderer->_hx___allowSmoothing,null());
HXLINE( 104)				renderer->applyMatrix(renderer->_hx___getMatrix(graphics->_hx___worldTransform,(int)1));
HXLINE( 105)				renderer->updateShader();
HXLINE( 107)				 ::openfl::display3D::VertexBuffer3D vertexBuffer = graphics->_hx___bitmap->getVertexBuffer(context);
HXLINE( 108)				if (hx::IsNotNull( shader->_hx___position )) {
HXLINE( 108)					context->setVertexBufferAt(shader->_hx___position->index,vertexBuffer,(int)0,(int)3);
            				}
HXLINE( 109)				if (hx::IsNotNull( shader->_hx___textureCoord )) {
HXLINE( 109)					context->setVertexBufferAt(shader->_hx___textureCoord->index,vertexBuffer,(int)3,(int)2);
            				}
HXLINE( 110)				 ::openfl::display3D::IndexBuffer3D indexBuffer = graphics->_hx___bitmap->getIndexBuffer(context);
HXLINE( 111)				context->drawTriangles(indexBuffer,null(),null());
HXLINE( 117)				renderer->_hx___clearShader();
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Context3DShape_obj,renderMask,(void))


Context3DShape_obj::Context3DShape_obj()
{
}

bool Context3DShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Context3DShape_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Context3DShape_obj_sStaticStorageInfo = 0;
#endif

static void Context3DShape_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DShape_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DShape_obj::__mClass,"__mClass");
};

#endif

hx::Class Context3DShape_obj::__mClass;

static ::String Context3DShape_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderMask","\x62","\x3b","\x60","\xe5"),
	::String(null())
};

void Context3DShape_obj::__register()
{
	hx::Object *dummy = new Context3DShape_obj;
	Context3DShape_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.context3D.Context3DShape","\x6a","\xa5","\xdf","\x69");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DShape_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DShape_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DShape_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DShape_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DShape_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace context3D
