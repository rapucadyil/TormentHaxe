// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Point
#include <lime/utils/ObjectPool_openfl_geom_Point.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_129_new,"openfl.display.Sprite","new",0x3ff0c061,"openfl.display.Sprite.new","openfl/display/Sprite.hx",129,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_161_startDrag,"openfl.display.Sprite","startDrag",0x20ea0c37,"openfl.display.Sprite.startDrag","openfl/display/Sprite.hx",161,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_182_stopDrag,"openfl.display.Sprite","stopDrag",0x4d02dd75,"openfl.display.Sprite.stopDrag","openfl/display/Sprite.hx",182,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_196___getCursor,"openfl.display.Sprite","__getCursor",0x4a69b9ed,"openfl.display.Sprite.__getCursor","openfl/display/Sprite.hx",196,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_201___hitTest,"openfl.display.Sprite","__hitTest",0x895417e6,"openfl.display.Sprite.__hitTest","openfl/display/Sprite.hx",201,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_245___hitTestHitArea,"openfl.display.Sprite","__hitTestHitArea",0x980a9c3a,"openfl.display.Sprite.__hitTestHitArea","openfl/display/Sprite.hx",245,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_272___hitTestMask,"openfl.display.Sprite","__hitTestMask",0x9c046ff2,"openfl.display.Sprite.__hitTestMask","openfl/display/Sprite.hx",272,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_296_get_graphics,"openfl.display.Sprite","get_graphics",0x451134b3,"openfl.display.Sprite.get_graphics","openfl/display/Sprite.hx",296,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_311_get_tabEnabled,"openfl.display.Sprite","get_tabEnabled",0x5c66fc94,"openfl.display.Sprite.get_tabEnabled","openfl/display/Sprite.hx",311,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_318_get_buttonMode,"openfl.display.Sprite","get_buttonMode",0xceb5485d,"openfl.display.Sprite.get_buttonMode","openfl/display/Sprite.hx",318,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_325_set_buttonMode,"openfl.display.Sprite","set_buttonMode",0xeed530d1,"openfl.display.Sprite.set_buttonMode","openfl/display/Sprite.hx",325,0xd5438ced)
namespace openfl{
namespace display{

void Sprite_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_129_new)
HXLINE( 131)		super::__construct();
HXLINE( 133)		this->_hx___buttonMode = false;
HXLINE( 134)		this->useHandCursor = true;
            	}

Dynamic Sprite_obj::__CreateEmpty() { return new Sprite_obj; }

void *Sprite_obj::_hx_vtable = 0;

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sprite_obj > _hx_result = new Sprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19c29573) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x19c29573;
		}
	} else {
		return inClassId==(int)0x1b123bf8 || inClassId==(int)0x3f2b00af;
	}
}

void Sprite_obj::startDrag(hx::Null< bool >  __o_lockCenter, ::openfl::geom::Rectangle bounds){
bool lockCenter = __o_lockCenter.Default(false);
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_161_startDrag)
HXDLIN( 161)		if (hx::IsNotNull( this->stage )) {
HXLINE( 163)			this->stage->_hx___startDrag(hx::ObjectPtr<OBJ_>(this),lockCenter,bounds);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Sprite_obj,startDrag,(void))

void Sprite_obj::stopDrag(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_182_stopDrag)
HXDLIN( 182)		if (hx::IsNotNull( this->stage )) {
HXLINE( 184)			this->stage->_hx___stopDrag(hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,stopDrag,(void))

 ::lime::ui::MouseCursor Sprite_obj::_hx___getCursor(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_196___getCursor)
HXDLIN( 196)		bool _hx_tmp;
HXDLIN( 196)		if (this->_hx___buttonMode) {
HXDLIN( 196)			_hx_tmp = this->useHandCursor;
            		}
            		else {
HXDLIN( 196)			_hx_tmp = false;
            		}
HXDLIN( 196)		if (_hx_tmp) {
HXDLIN( 196)			return ::lime::ui::MouseCursor_obj::POINTER_dyn();
            		}
            		else {
HXDLIN( 196)			return null();
            		}
HXDLIN( 196)		return null();
            	}


bool Sprite_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_201___hitTest)
HXLINE( 203)		bool _hx_tmp;
HXDLIN( 203)		bool _hx_tmp1;
HXDLIN( 203)		if (interactiveOnly) {
HXLINE( 203)			_hx_tmp1 = !(this->mouseEnabled);
            		}
            		else {
HXLINE( 203)			_hx_tmp1 = false;
            		}
HXDLIN( 203)		if (_hx_tmp1) {
HXLINE( 203)			_hx_tmp = !(this->mouseChildren);
            		}
            		else {
HXLINE( 203)			_hx_tmp = false;
            		}
HXDLIN( 203)		if (_hx_tmp) {
HXLINE( 203)			return false;
            		}
HXLINE( 204)		bool _hx_tmp2;
HXDLIN( 204)		if (!(!(hitObject->get_visible()))) {
HXLINE( 204)			_hx_tmp2 = this->_hx___isMask;
            		}
            		else {
HXLINE( 204)			_hx_tmp2 = true;
            		}
HXDLIN( 204)		if (_hx_tmp2) {
HXLINE( 204)			return this->_hx___hitTestHitArea(x,y,shapeFlag,stack,interactiveOnly,hitObject);
            		}
HXLINE( 205)		bool _hx_tmp3;
HXDLIN( 205)		if (hx::IsNotNull( this->get_mask() )) {
HXLINE( 205)			_hx_tmp3 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE( 205)			_hx_tmp3 = false;
            		}
HXDLIN( 205)		if (_hx_tmp3) {
HXLINE( 205)			return this->_hx___hitTestHitArea(x,y,shapeFlag,stack,interactiveOnly,hitObject);
            		}
HXLINE( 207)		if (hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 209)			 ::openfl::geom::Point point = ::openfl::geom::Point_obj::_hx___pool->get();
HXLINE( 210)			point->setTo(x,y);
HXLINE( 211)			{
HXLINE( 211)				 ::openfl::geom::Matrix _this = this->_hx___getRenderTransform();
HXDLIN( 211)				Float norm = (_this->a * _this->d);
HXDLIN( 211)				Float norm1 = (norm - (_this->b * _this->c));
HXDLIN( 211)				if ((norm1 == (int)0)) {
HXLINE( 211)					point->x = -(_this->tx);
HXDLIN( 211)					point->y = -(_this->ty);
            				}
            				else {
HXLINE( 211)					Float _this1 = _this->c;
HXDLIN( 211)					Float px = (_this1 * (_this->ty - point->y));
HXDLIN( 211)					Float _this2 = _this->d;
HXDLIN( 211)					Float px1 = (((Float)((Float)1.0) / (Float)norm1) * (px + (_this2 * (point->x - _this->tx))));
HXDLIN( 211)					Float _this3 = _this->a;
HXDLIN( 211)					Float _hx_tmp4 = (_this3 * (point->y - _this->ty));
HXDLIN( 211)					Float _this4 = _this->b;
HXDLIN( 211)					point->y = (((Float)((Float)1.0) / (Float)norm1) * (_hx_tmp4 + (_this4 * (_this->tx - point->x))));
HXDLIN( 211)					point->x = px1;
            				}
            			}
HXLINE( 213)			if (!(this->_hx___scrollRect->containsPoint(point))) {
HXLINE( 215)				::openfl::geom::Point_obj::_hx___pool->release(point);
HXLINE( 216)				return this->_hx___hitTestHitArea(x,y,shapeFlag,stack,true,hitObject);
            			}
HXLINE( 220)			::openfl::geom::Point_obj::_hx___pool->release(point);
            		}
HXLINE( 224)		if (this->super::_hx___hitTest(x,y,shapeFlag,stack,interactiveOnly,hitObject)) {
HXLINE( 226)			if (hx::IsNotNull( stack )) {
HXLINE( 226)				return interactiveOnly;
            			}
            			else {
HXLINE( 226)				return true;
            			}
            		}
            		else {
HXLINE( 228)			bool _hx_tmp5;
HXDLIN( 228)			bool _hx_tmp6;
HXDLIN( 228)			if (hx::IsNull( this->hitArea )) {
HXLINE( 228)				_hx_tmp6 = hx::IsNotNull( this->_hx___graphics );
            			}
            			else {
HXLINE( 228)				_hx_tmp6 = false;
            			}
HXDLIN( 228)			if (_hx_tmp6) {
HXLINE( 228)				 ::openfl::display::Graphics _hx_tmp7 = this->_hx___graphics;
HXDLIN( 228)				_hx_tmp5 = _hx_tmp7->_hx___hitTest(x,y,shapeFlag,this->_hx___getRenderTransform());
            			}
            			else {
HXLINE( 228)				_hx_tmp5 = false;
            			}
HXDLIN( 228)			if (_hx_tmp5) {
HXLINE( 230)				bool _hx_tmp8;
HXDLIN( 230)				if (hx::IsNotNull( stack )) {
HXLINE( 230)					if (!(!(interactiveOnly))) {
HXLINE( 230)						_hx_tmp8 = this->mouseEnabled;
            					}
            					else {
HXLINE( 230)						_hx_tmp8 = true;
            					}
            				}
            				else {
HXLINE( 230)					_hx_tmp8 = false;
            				}
HXDLIN( 230)				if (_hx_tmp8) {
HXLINE( 232)					stack->push(hitObject);
            				}
HXLINE( 236)				return true;
            			}
            		}
HXLINE( 240)		return this->_hx___hitTestHitArea(x,y,shapeFlag,stack,interactiveOnly,hitObject);
            	}


bool Sprite_obj::_hx___hitTestHitArea(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_245___hitTestHitArea)
HXLINE( 247)		if (hx::IsNotNull( this->hitArea )) {
HXLINE( 249)			if (!(this->hitArea->mouseEnabled)) {
HXLINE( 251)				this->hitArea->mouseEnabled = true;
HXLINE( 252)				bool hitTest = this->hitArea->_hx___hitTest(x,y,shapeFlag,null(),true,hitObject);
HXLINE( 253)				this->hitArea->mouseEnabled = false;
HXLINE( 255)				bool _hx_tmp;
HXDLIN( 255)				if (hx::IsNotNull( stack )) {
HXLINE( 255)					_hx_tmp = hitTest;
            				}
            				else {
HXLINE( 255)					_hx_tmp = false;
            				}
HXDLIN( 255)				if (_hx_tmp) {
HXLINE( 257)					stack[stack->length] = hitObject;
            				}
HXLINE( 261)				return hitTest;
            			}
            		}
HXLINE( 267)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC6(Sprite_obj,_hx___hitTestHitArea,return )

bool Sprite_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_272___hitTestMask)
HXLINE( 274)		if (this->super::_hx___hitTestMask(x,y)) {
HXLINE( 276)			return true;
            		}
            		else {
HXLINE( 278)			bool _hx_tmp;
HXDLIN( 278)			if (hx::IsNotNull( this->_hx___graphics )) {
HXLINE( 278)				 ::openfl::display::Graphics _hx_tmp1 = this->_hx___graphics;
HXDLIN( 278)				_hx_tmp = _hx_tmp1->_hx___hitTest(x,y,true,this->_hx___getRenderTransform());
            			}
            			else {
HXLINE( 278)				_hx_tmp = false;
            			}
HXDLIN( 278)			if (_hx_tmp) {
HXLINE( 280)				return true;
            			}
            		}
HXLINE( 284)		return false;
            	}


 ::openfl::display::Graphics Sprite_obj::get_graphics(){
            	HX_GC_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_296_get_graphics)
HXLINE( 298)		if (hx::IsNull( this->_hx___graphics )) {
HXLINE( 300)			this->_hx___graphics =  ::openfl::display::Graphics_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 304)		return this->_hx___graphics;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_graphics,return )

bool Sprite_obj::get_tabEnabled(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_311_get_tabEnabled)
HXDLIN( 311)		if (hx::IsNull( this->_hx___tabEnabled )) {
HXDLIN( 311)			return this->_hx___buttonMode;
            		}
            		else {
HXDLIN( 311)			return this->_hx___tabEnabled;
            		}
HXDLIN( 311)		return false;
            	}


bool Sprite_obj::get_buttonMode(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_318_get_buttonMode)
HXDLIN( 318)		return this->_hx___buttonMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_buttonMode,return )

bool Sprite_obj::set_buttonMode(bool value){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_325_set_buttonMode)
HXDLIN( 325)		return (this->_hx___buttonMode = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_buttonMode,return )


hx::ObjectPtr< Sprite_obj > Sprite_obj::__new() {
	hx::ObjectPtr< Sprite_obj > __this = new Sprite_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Sprite_obj > Sprite_obj::__alloc(hx::Ctx *_hx_ctx) {
	Sprite_obj *__this = (Sprite_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sprite_obj), true, "openfl.display.Sprite"));
	*(void **)__this = Sprite_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(dropTarget,"dropTarget");
	HX_MARK_MEMBER_NAME(hitArea,"hitArea");
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_MARK_MEMBER_NAME(_hx___buttonMode,"__buttonMode");
	 ::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dropTarget,"dropTarget");
	HX_VISIT_MEMBER_NAME(hitArea,"hitArea");
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_VISIT_MEMBER_NAME(_hx___buttonMode,"__buttonMode");
	 ::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Sprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hitArea") ) { return hx::Val( hitArea ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_graphics() ); }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return hx::Val( stopDrag_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startDrag") ) { return hx::Val( startDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return hx::Val( _hx___hitTest_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_buttonMode() ); }
		if (HX_FIELD_EQ(inName,"dropTarget") ) { return hx::Val( dropTarget ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return hx::Val( _hx___getCursor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__buttonMode") ) { return hx::Val( _hx___buttonMode ); }
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return hx::Val( get_graphics_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return hx::Val( useHandCursor ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return hx::Val( _hx___hitTestMask_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tabEnabled") ) { return hx::Val( get_tabEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_buttonMode") ) { return hx::Val( get_buttonMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_buttonMode") ) { return hx::Val( set_buttonMode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__hitTestHitArea") ) { return hx::Val( _hx___hitTestHitArea_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Sprite_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hitArea") ) { hitArea=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_buttonMode(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"dropTarget") ) { dropTarget=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__buttonMode") ) { _hx___buttonMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"));
	outFields->push(HX_HCSTRING("dropTarget","\xe0","\x6c","\x5c","\xc6"));
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	outFields->push(HX_HCSTRING("hitArea","\x80","\x23","\xfa","\xd5"));
	outFields->push(HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"));
	outFields->push(HX_HCSTRING("__buttonMode","\x95","\xbd","\xea","\xea"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Sprite_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Sprite_obj,dropTarget),HX_HCSTRING("dropTarget","\xe0","\x6c","\x5c","\xc6")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Sprite_obj,hitArea),HX_HCSTRING("hitArea","\x80","\x23","\xfa","\xd5")},
	{hx::fsBool,(int)offsetof(Sprite_obj,useHandCursor),HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89")},
	{hx::fsBool,(int)offsetof(Sprite_obj,_hx___buttonMode),HX_HCSTRING("__buttonMode","\x95","\xbd","\xea","\xea")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Sprite_obj_sStaticStorageInfo = 0;
#endif

static ::String Sprite_obj_sMemberFields[] = {
	HX_HCSTRING("dropTarget","\xe0","\x6c","\x5c","\xc6"),
	HX_HCSTRING("hitArea","\x80","\x23","\xfa","\xd5"),
	HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"),
	HX_HCSTRING("__buttonMode","\x95","\xbd","\xea","\xea"),
	HX_HCSTRING("startDrag","\x76","\xa5","\x63","\xfb"),
	HX_HCSTRING("stopDrag","\x16","\x71","\x2a","\x95"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestHitArea","\xdb","\x38","\x50","\x28"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("get_graphics","\xd4","\xac","\x81","\xc7"),
	HX_HCSTRING("get_tabEnabled","\xf5","\x7e","\xfe","\xb5"),
	HX_HCSTRING("get_buttonMode","\xbe","\xca","\x4c","\x28"),
	HX_HCSTRING("set_buttonMode","\x32","\xb3","\x6c","\x48"),
	::String(null()) };

static void Sprite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sprite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Object *dummy = new Sprite_obj;
	Sprite_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Sprite","\xef","\xfb","\xd6","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sprite_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Sprite_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sprite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sprite_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display