// Generated by Haxe 3.4.7
#ifndef INCLUDED_openfl_display3D_textures_VideoTexture
#define INCLUDED_openfl_display3D_textures_VideoTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS3(openfl,display3D,textures,VideoTexture)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,net,NetStream)

namespace openfl{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES VideoTexture_obj : public  ::openfl::display3D::textures::TextureBase_obj
{
	public:
		typedef  ::openfl::display3D::textures::TextureBase_obj super;
		typedef VideoTexture_obj OBJ_;
		VideoTexture_obj();

	public:
		enum { _hx_ClassId = 0x72cfd49b };

		void __construct( ::openfl::display3D::Context3D context);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.textures.VideoTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D.textures.VideoTexture"); }
		static hx::ObjectPtr< VideoTexture_obj > __new( ::openfl::display3D::Context3D context);
		static hx::ObjectPtr< VideoTexture_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VideoTexture_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("VideoTexture","\xc0","\x7d","\xef","\x80"); }

		int videoHeight;
		int videoWidth;
		 ::openfl::net::NetStream _hx___netStream;
		void attachNetStream( ::openfl::net::NetStream netStream);
		::Dynamic attachNetStream_dyn();

		 ::lime::graphics::opengl::GLObject _hx___getTexture();

		void _hx___textureReady();
		::Dynamic _hx___textureReady_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_VideoTexture */ 
