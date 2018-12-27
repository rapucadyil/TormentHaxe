// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime__internal_graphics_ImageDataUtil
#include <lime/_internal/graphics/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters_BlurFilter
#include <openfl/filters/BlurFilter.h>
#endif
#ifndef INCLUDED_openfl_filters__BlurFilter_BlurShader
#include <openfl/filters/_BlurFilter/BlurShader.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6e95f8db175a4230_167_new,"openfl.filters.BlurFilter","new",0x2ff6acc2,"openfl.filters.BlurFilter.new","openfl/filters/BlurFilter.hx",167,0x46563eac)
HX_LOCAL_STACK_FRAME(_hx_pos_6e95f8db175a4230_184_clone,"openfl.filters.BlurFilter","clone",0xcbbf4c3f,"openfl.filters.BlurFilter.clone","openfl/filters/BlurFilter.hx",184,0x46563eac)
HX_LOCAL_STACK_FRAME(_hx_pos_6e95f8db175a4230_189___applyFilter,"openfl.filters.BlurFilter","__applyFilter",0x511b0b88,"openfl.filters.BlurFilter.__applyFilter","openfl/filters/BlurFilter.hx",189,0x46563eac)
HX_LOCAL_STACK_FRAME(_hx_pos_6e95f8db175a4230_198___initShader,"openfl.filters.BlurFilter","__initShader",0xc19d1cd3,"openfl.filters.BlurFilter.__initShader","openfl/filters/BlurFilter.hx",198,0x46563eac)
HX_LOCAL_STACK_FRAME(_hx_pos_6e95f8db175a4230_230_get_blurX,"openfl.filters.BlurFilter","get_blurX",0xeb11be0a,"openfl.filters.BlurFilter.get_blurX","openfl/filters/BlurFilter.hx",230,0x46563eac)
HX_LOCAL_STACK_FRAME(_hx_pos_6e95f8db175a4230_235_set_blurX,"openfl.filters.BlurFilter","set_blurX",0xce62aa16,"openfl.filters.BlurFilter.set_blurX","openfl/filters/BlurFilter.hx",235,0x46563eac)
HX_LOCAL_STACK_FRAME(_hx_pos_6e95f8db175a4230_250_get_blurY,"openfl.filters.BlurFilter","get_blurY",0xeb11be0b,"openfl.filters.BlurFilter.get_blurY","openfl/filters/BlurFilter.hx",250,0x46563eac)
HX_LOCAL_STACK_FRAME(_hx_pos_6e95f8db175a4230_255_set_blurY,"openfl.filters.BlurFilter","set_blurY",0xce62aa17,"openfl.filters.BlurFilter.set_blurY","openfl/filters/BlurFilter.hx",255,0x46563eac)
HX_LOCAL_STACK_FRAME(_hx_pos_6e95f8db175a4230_270_get_quality,"openfl.filters.BlurFilter","get_quality",0xa28f7338,"openfl.filters.BlurFilter.get_quality","openfl/filters/BlurFilter.hx",270,0x46563eac)
HX_LOCAL_STACK_FRAME(_hx_pos_6e95f8db175a4230_275_set_quality,"openfl.filters.BlurFilter","set_quality",0xacfc7a44,"openfl.filters.BlurFilter.set_quality","openfl/filters/BlurFilter.hx",275,0x46563eac)
HX_LOCAL_STACK_FRAME(_hx_pos_6e95f8db175a4230_77_boot,"openfl.filters.BlurFilter","boot",0xbff97d90,"openfl.filters.BlurFilter.boot","openfl/filters/BlurFilter.hx",77,0x46563eac)
namespace openfl{
namespace filters{

void BlurFilter_obj::__construct(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality){
Float blurX = __o_blurX.Default(4);
Float blurY = __o_blurY.Default(4);
int quality = __o_quality.Default(1);
            	HX_STACKFRAME(&_hx_pos_6e95f8db175a4230_167_new)
HXLINE( 169)		super::__construct();
HXLINE( 171)		this->set_blurX(blurX);
HXLINE( 172)		this->set_blurY(blurY);
HXLINE( 173)		this->set_quality(quality);
HXLINE( 175)		this->_hx___needSecondBitmapData = true;
HXLINE( 176)		this->_hx___preserveObject = false;
HXLINE( 177)		this->_hx___renderDirty = true;
            	}

Dynamic BlurFilter_obj::__CreateEmpty() { return new BlurFilter_obj; }

void *BlurFilter_obj::_hx_vtable = 0;

Dynamic BlurFilter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BlurFilter_obj > _hx_result = new BlurFilter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool BlurFilter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4c5fda8a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4c5fda8a;
	} else {
		return inClassId==(int)0x4f68d692;
	}
}

 ::openfl::filters::BitmapFilter BlurFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_6e95f8db175a4230_184_clone)
HXDLIN( 184)		return  ::openfl::filters::BlurFilter_obj::__alloc( HX_CTX ,this->_hx___blurX,this->_hx___blurY,this->_hx___quality);
            	}


 ::openfl::display::BitmapData BlurFilter_obj::_hx___applyFilter( ::openfl::display::BitmapData bitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint){
            	HX_STACKFRAME(&_hx_pos_6e95f8db175a4230_189___applyFilter)
HXLINE( 191)		 ::lime::graphics::Image bitmapData1 = bitmapData->image;
HXDLIN( 191)		 ::lime::graphics::Image sourceBitmapData1 = sourceBitmapData->image;
HXDLIN( 191)		 ::lime::math::Rectangle finalImage = sourceRect->_hx___toLimeRectangle();
HXDLIN( 191)		 ::lime::math::Vector2 finalImage1 = destPoint->_hx___toLimeVector2();
HXDLIN( 191)		 ::lime::graphics::Image finalImage2 = ::lime::_internal::graphics::ImageDataUtil_obj::gaussianBlur(bitmapData1,sourceBitmapData1,finalImage,finalImage1,this->_hx___blurX,this->_hx___blurY,this->_hx___quality,null(),null());
HXLINE( 192)		if (hx::IsEq( finalImage2,bitmapData->image )) {
HXLINE( 192)			return bitmapData;
            		}
HXLINE( 193)		return sourceBitmapData;
            	}


 ::openfl::display::Shader BlurFilter_obj::_hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass){
            	HX_STACKFRAME(&_hx_pos_6e95f8db175a4230_198___initShader)
HXLINE( 201)		if ((pass <= this->_hx___horizontalPasses)) {
HXLINE( 203)			Float scale = ::Math_obj::pow(((Float)0.5),((int)pass >> (int)(int)1));
HXLINE( 204)			::Array< Float > _hx_tmp = ::openfl::filters::BlurFilter_obj::_hx___blurShader->uRadius->value;
HXDLIN( 204)			_hx_tmp[(int)0] = (this->get_blurX() * scale);
HXLINE( 205)			::openfl::filters::BlurFilter_obj::_hx___blurShader->uRadius->value[(int)1] = (int)0;
            		}
            		else {
HXLINE( 209)			Float scale1 = ::Math_obj::pow(((Float)0.5),((int)(pass - this->_hx___horizontalPasses) >> (int)(int)1));
HXLINE( 210)			::openfl::filters::BlurFilter_obj::_hx___blurShader->uRadius->value[(int)0] = (int)0;
HXLINE( 211)			::Array< Float > _hx_tmp1 = ::openfl::filters::BlurFilter_obj::_hx___blurShader->uRadius->value;
HXDLIN( 211)			_hx_tmp1[(int)1] = (this->get_blurY() * scale1);
            		}
HXLINE( 216)		return ::openfl::filters::BlurFilter_obj::_hx___blurShader;
            	}


Float BlurFilter_obj::get_blurX(){
            	HX_STACKFRAME(&_hx_pos_6e95f8db175a4230_230_get_blurX)
HXDLIN( 230)		return this->_hx___blurX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BlurFilter_obj,get_blurX,return )

Float BlurFilter_obj::set_blurX(Float value){
            	HX_STACKFRAME(&_hx_pos_6e95f8db175a4230_235_set_blurX)
HXLINE( 237)		if ((value != this->_hx___blurX)) {
HXLINE( 238)			this->_hx___blurX = value;
HXLINE( 239)			this->_hx___renderDirty = true;
HXLINE( 240)			int _hx_tmp;
HXDLIN( 240)			if ((value > (int)0)) {
HXLINE( 240)				_hx_tmp = ::Math_obj::ceil(value);
            			}
            			else {
HXLINE( 240)				_hx_tmp = (int)0;
            			}
HXDLIN( 240)			this->_hx___leftExtension = _hx_tmp;
HXLINE( 241)			this->_hx___rightExtension = this->_hx___leftExtension;
            		}
HXLINE( 243)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlurFilter_obj,set_blurX,return )

Float BlurFilter_obj::get_blurY(){
            	HX_STACKFRAME(&_hx_pos_6e95f8db175a4230_250_get_blurY)
HXDLIN( 250)		return this->_hx___blurY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BlurFilter_obj,get_blurY,return )

Float BlurFilter_obj::set_blurY(Float value){
            	HX_STACKFRAME(&_hx_pos_6e95f8db175a4230_255_set_blurY)
HXLINE( 257)		if ((value != this->_hx___blurY)) {
HXLINE( 258)			this->_hx___blurY = value;
HXLINE( 259)			this->_hx___renderDirty = true;
HXLINE( 260)			int _hx_tmp;
HXDLIN( 260)			if ((value > (int)0)) {
HXLINE( 260)				_hx_tmp = ::Math_obj::ceil(value);
            			}
            			else {
HXLINE( 260)				_hx_tmp = (int)0;
            			}
HXDLIN( 260)			this->_hx___topExtension = _hx_tmp;
HXLINE( 261)			this->_hx___bottomExtension = this->_hx___topExtension;
            		}
HXLINE( 263)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlurFilter_obj,set_blurY,return )

int BlurFilter_obj::get_quality(){
            	HX_STACKFRAME(&_hx_pos_6e95f8db175a4230_270_get_quality)
HXDLIN( 270)		return this->_hx___quality;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BlurFilter_obj,get_quality,return )

int BlurFilter_obj::set_quality(int value){
            	HX_STACKFRAME(&_hx_pos_6e95f8db175a4230_275_set_quality)
HXLINE( 279)		int _hx_tmp;
HXDLIN( 279)		if ((this->_hx___blurX <= (int)0)) {
HXLINE( 279)			_hx_tmp = (int)0;
            		}
            		else {
HXLINE( 279)			Float _hx_tmp1 = this->_hx___blurX;
HXDLIN( 279)			_hx_tmp = (::Math_obj::round((_hx_tmp1 * ((Float)value / (Float)(int)4))) + (int)1);
            		}
HXDLIN( 279)		this->_hx___horizontalPasses = _hx_tmp;
HXLINE( 280)		int _hx_tmp2;
HXDLIN( 280)		if ((this->_hx___blurY <= (int)0)) {
HXLINE( 280)			_hx_tmp2 = (int)0;
            		}
            		else {
HXLINE( 280)			Float _hx_tmp3 = this->_hx___blurY;
HXDLIN( 280)			_hx_tmp2 = (::Math_obj::round((_hx_tmp3 * ((Float)value / (Float)(int)4))) + (int)1);
            		}
HXDLIN( 280)		this->_hx___verticalPasses = _hx_tmp2;
HXLINE( 282)		this->_hx___numShaderPasses = (this->_hx___horizontalPasses + this->_hx___verticalPasses);
HXLINE( 284)		if ((value != this->_hx___quality)) {
HXLINE( 284)			this->_hx___renderDirty = true;
            		}
HXLINE( 285)		return (this->_hx___quality = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlurFilter_obj,set_quality,return )

 ::openfl::filters::_BlurFilter::BlurShader BlurFilter_obj::_hx___blurShader;


hx::ObjectPtr< BlurFilter_obj > BlurFilter_obj::__new(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality) {
	hx::ObjectPtr< BlurFilter_obj > __this = new BlurFilter_obj();
	__this->__construct(__o_blurX,__o_blurY,__o_quality);
	return __this;
}

hx::ObjectPtr< BlurFilter_obj > BlurFilter_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality) {
	BlurFilter_obj *__this = (BlurFilter_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BlurFilter_obj), true, "openfl.filters.BlurFilter"));
	*(void **)__this = BlurFilter_obj::_hx_vtable;
	__this->__construct(__o_blurX,__o_blurY,__o_quality);
	return __this;
}

BlurFilter_obj::BlurFilter_obj()
{
}

hx::Val BlurFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blurX") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_blurX() ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_blurY() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_quality() ); }
		if (HX_FIELD_EQ(inName,"__blurX") ) { return hx::Val( _hx___blurX ); }
		if (HX_FIELD_EQ(inName,"__blurY") ) { return hx::Val( _hx___blurY ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__quality") ) { return hx::Val( _hx___quality ); }
		if (HX_FIELD_EQ(inName,"get_blurX") ) { return hx::Val( get_blurX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blurX") ) { return hx::Val( set_blurX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_blurY") ) { return hx::Val( get_blurY_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_blurY") ) { return hx::Val( set_blurY_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_quality") ) { return hx::Val( get_quality_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_quality") ) { return hx::Val( set_quality_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initShader") ) { return hx::Val( _hx___initShader_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return hx::Val( _hx___applyFilter_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__verticalPasses") ) { return hx::Val( _hx___verticalPasses ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__horizontalPasses") ) { return hx::Val( _hx___horizontalPasses ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BlurFilter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__blurShader") ) { outValue = ( _hx___blurShader ); return true; }
	}
	return false;
}

hx::Val BlurFilter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blurX") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_blurX(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"blurY") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_blurY(inValue.Cast< Float >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_quality(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"__blurX") ) { _hx___blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blurY") ) { _hx___blurY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__quality") ) { _hx___quality=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__verticalPasses") ) { _hx___verticalPasses=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__horizontalPasses") ) { _hx___horizontalPasses=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BlurFilter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__blurShader") ) { _hx___blurShader=ioValue.Cast<  ::openfl::filters::_BlurFilter::BlurShader >(); return true; }
	}
	return false;
}

void BlurFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("blurX","\xd1","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("blurY","\xd2","\x0f","\x01","\xb5"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("__blurX","\xb1","\x68","\x5f","\x1f"));
	outFields->push(HX_HCSTRING("__blurY","\xb2","\x68","\x5f","\x1f"));
	outFields->push(HX_HCSTRING("__horizontalPasses","\xa3","\x9a","\x5d","\x02"));
	outFields->push(HX_HCSTRING("__quality","\x9f","\x55","\x9a","\xc5"));
	outFields->push(HX_HCSTRING("__verticalPasses","\xb5","\x4b","\xf5","\xec"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BlurFilter_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BlurFilter_obj,_hx___blurX),HX_HCSTRING("__blurX","\xb1","\x68","\x5f","\x1f")},
	{hx::fsFloat,(int)offsetof(BlurFilter_obj,_hx___blurY),HX_HCSTRING("__blurY","\xb2","\x68","\x5f","\x1f")},
	{hx::fsInt,(int)offsetof(BlurFilter_obj,_hx___horizontalPasses),HX_HCSTRING("__horizontalPasses","\xa3","\x9a","\x5d","\x02")},
	{hx::fsInt,(int)offsetof(BlurFilter_obj,_hx___quality),HX_HCSTRING("__quality","\x9f","\x55","\x9a","\xc5")},
	{hx::fsInt,(int)offsetof(BlurFilter_obj,_hx___verticalPasses),HX_HCSTRING("__verticalPasses","\xb5","\x4b","\xf5","\xec")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo BlurFilter_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::filters::_BlurFilter::BlurShader*/ ,(void *) &BlurFilter_obj::_hx___blurShader,HX_HCSTRING("__blurShader","\x4c","\xe8","\x3f","\xcd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String BlurFilter_obj_sMemberFields[] = {
	HX_HCSTRING("__blurX","\xb1","\x68","\x5f","\x1f"),
	HX_HCSTRING("__blurY","\xb2","\x68","\x5f","\x1f"),
	HX_HCSTRING("__horizontalPasses","\xa3","\x9a","\x5d","\x02"),
	HX_HCSTRING("__quality","\x9f","\x55","\x9a","\xc5"),
	HX_HCSTRING("__verticalPasses","\xb5","\x4b","\xf5","\xec"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__applyFilter","\xa6","\x20","\xa8","\x09"),
	HX_HCSTRING("__initShader","\x75","\x95","\xf9","\x59"),
	HX_HCSTRING("get_blurX","\x28","\x6c","\xaa","\xf8"),
	HX_HCSTRING("set_blurX","\x34","\x58","\xfb","\xdb"),
	HX_HCSTRING("get_blurY","\x29","\x6c","\xaa","\xf8"),
	HX_HCSTRING("set_blurY","\x35","\x58","\xfb","\xdb"),
	HX_HCSTRING("get_quality","\xd6","\x64","\x46","\xca"),
	HX_HCSTRING("set_quality","\xe2","\x6b","\xb3","\xd4"),
	::String(null()) };

static void BlurFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlurFilter_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BlurFilter_obj::_hx___blurShader,"__blurShader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BlurFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlurFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlurFilter_obj::_hx___blurShader,"__blurShader");
};

#endif

hx::Class BlurFilter_obj::__mClass;

static ::String BlurFilter_obj_sStaticFields[] = {
	HX_HCSTRING("__blurShader","\x4c","\xe8","\x3f","\xcd"),
	::String(null())
};

void BlurFilter_obj::__register()
{
	hx::Object *dummy = new BlurFilter_obj;
	BlurFilter_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.BlurFilter","\xd0","\xe3","\x34","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BlurFilter_obj::__GetStatic;
	__mClass->mSetStaticField = &BlurFilter_obj::__SetStatic;
	__mClass->mMarkFunc = BlurFilter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BlurFilter_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BlurFilter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BlurFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BlurFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlurFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlurFilter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BlurFilter_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_6e95f8db175a4230_77_boot)
HXDLIN(  77)		_hx___blurShader =  ::openfl::filters::_BlurFilter::BlurShader_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace filters
