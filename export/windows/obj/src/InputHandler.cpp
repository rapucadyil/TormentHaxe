// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_InputHandler
#include <InputHandler.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_41faad681836e978_9_new,"InputHandler","new",0x6e1e75f2,"InputHandler.new","InputHandler.hx",9,0x8db20dbe)
HX_LOCAL_STACK_FRAME(_hx_pos_41faad681836e978_13_update,"InputHandler","update",0xc43127b7,"InputHandler.update","InputHandler.hx",13,0x8db20dbe)
HX_LOCAL_STACK_FRAME(_hx_pos_41faad681836e978_19_processUserInput,"InputHandler","processUserInput",0x18ea307e,"InputHandler.processUserInput","InputHandler.hx",19,0x8db20dbe)

void InputHandler_obj::__construct( ::Dynamic __o_X, ::Dynamic __o_Y){
 ::Dynamic X = __o_X.Default(0);
 ::Dynamic Y = __o_Y.Default(0);
            	HX_STACKFRAME(&_hx_pos_41faad681836e978_9_new)
HXDLIN(   9)		super::__construct(X,Y,null());
            	}

Dynamic InputHandler_obj::__CreateEmpty() { return new InputHandler_obj; }

void *InputHandler_obj::_hx_vtable = 0;

Dynamic InputHandler_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InputHandler_obj > _hx_result = new InputHandler_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool InputHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x247661c8) {
		if (inClassId<=(int)0x0b6ffd77) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
		} else {
			return inClassId==(int)0x247661c8;
		}
	} else {
		return inClassId==(int)0x25a685e0 || inClassId==(int)0x2e105115;
	}
}

void InputHandler_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_41faad681836e978_13_update)
HXLINE(  14)		this->super::update(elapsed);
HXLINE(  15)		this->processUserInput();
            	}


void InputHandler_obj::processUserInput(){
            	HX_STACKFRAME(&_hx_pos_41faad681836e978_19_processUserInput)
HXDLIN(  19)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  19)		if (_this->keyManager->checkStatus((int)27,_this->status)) {
HXLINE(  20)			::openfl::_hx_system::System_obj::exit((int)0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(InputHandler_obj,processUserInput,(void))


hx::ObjectPtr< InputHandler_obj > InputHandler_obj::__new( ::Dynamic __o_X, ::Dynamic __o_Y) {
	hx::ObjectPtr< InputHandler_obj > __this = new InputHandler_obj();
	__this->__construct(__o_X,__o_Y);
	return __this;
}

hx::ObjectPtr< InputHandler_obj > InputHandler_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic __o_X, ::Dynamic __o_Y) {
	InputHandler_obj *__this = (InputHandler_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InputHandler_obj), true, "InputHandler"));
	*(void **)__this = InputHandler_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y);
	return __this;
}

InputHandler_obj::InputHandler_obj()
{
}

hx::Val InputHandler_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"processUserInput") ) { return hx::Val( processUserInput_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *InputHandler_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *InputHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String InputHandler_obj_sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("processUserInput","\x50","\x69","\x5e","\x1f"),
	::String(null()) };

static void InputHandler_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InputHandler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InputHandler_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InputHandler_obj::__mClass,"__mClass");
};

#endif

hx::Class InputHandler_obj::__mClass;

void InputHandler_obj::__register()
{
	hx::Object *dummy = new InputHandler_obj;
	InputHandler_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("InputHandler","\x00","\x55","\x14","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InputHandler_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(InputHandler_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InputHandler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InputHandler_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InputHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InputHandler_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

