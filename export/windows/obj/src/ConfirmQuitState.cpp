// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_ConfirmQuitState
#include <ConfirmQuitState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton_flixel_text_FlxText
#include <flixel/ui/FlxTypedButton_flixel_text_FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eab994d4205515f7_8_new,"ConfirmQuitState","new",0xd36da0b4,"ConfirmQuitState.new","ConfirmQuitState.hx",8,0xcd49f13c)
HX_LOCAL_STACK_FRAME(_hx_pos_eab994d4205515f7_13_create,"ConfirmQuitState","create",0x927d8328,"ConfirmQuitState.create","ConfirmQuitState.hx",13,0xcd49f13c)
HX_LOCAL_STACK_FRAME(_hx_pos_eab994d4205515f7_22_update,"ConfirmQuitState","update",0x9d73a235,"ConfirmQuitState.update","ConfirmQuitState.hx",22,0xcd49f13c)
HX_LOCAL_STACK_FRAME(_hx_pos_eab994d4205515f7_26_quitCallback,"ConfirmQuitState","quitCallback",0xd36901e0,"ConfirmQuitState.quitCallback","ConfirmQuitState.hx",26,0xcd49f13c)
HX_LOCAL_STACK_FRAME(_hx_pos_eab994d4205515f7_30_cancelCallback,"ConfirmQuitState","cancelCallback",0xde95758b,"ConfirmQuitState.cancelCallback","ConfirmQuitState.hx",30,0xcd49f13c)

void ConfirmQuitState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_eab994d4205515f7_8_new)
HXDLIN(   8)		super::__construct(MaxSize);
            	}

Dynamic ConfirmQuitState_obj::__CreateEmpty() { return new ConfirmQuitState_obj; }

void *ConfirmQuitState_obj::_hx_vtable = 0;

Dynamic ConfirmQuitState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ConfirmQuitState_obj > _hx_result = new ConfirmQuitState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ConfirmQuitState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2335d9a7) {
		if (inClassId<=(int)0x1dfe878a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1dfe878a;
		} else {
			return inClassId==(int)0x2335d9a7;
		}
	} else {
		return inClassId==(int)0x25a685e0 || inClassId==(int)0x3634c52c;
	}
}

void ConfirmQuitState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_eab994d4205515f7_13_create)
HXLINE(  14)		this->super::create();
HXLINE(  15)		Float _hx_tmp = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  15)		this->yesBtn =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,_hx_tmp,((Float)::flixel::FlxG_obj::height / (Float)(int)2),HX_("Yes",07,e1,43,00),this->quitCallback_dyn());
HXLINE(  16)		Float _hx_tmp1 = ((Float)::flixel::FlxG_obj::width / (Float)(int)2);
HXDLIN(  16)		this->cancelBtn =  ::flixel::ui::FlxButton_obj::__alloc( HX_CTX ,_hx_tmp1,(((Float)::flixel::FlxG_obj::height / (Float)(int)2) + (int)50),HX_("Cancel",9a,61,c8,ec),this->cancelCallback_dyn());
HXLINE(  17)		this->add(this->yesBtn);
HXLINE(  18)		this->add(this->cancelBtn);
            	}


void ConfirmQuitState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_eab994d4205515f7_22_update)
HXDLIN(  22)		this->super::update(elapsed);
            	}


void ConfirmQuitState_obj::quitCallback(){
            	HX_STACKFRAME(&_hx_pos_eab994d4205515f7_26_quitCallback)
HXDLIN(  26)		::openfl::_hx_system::System_obj::exit((int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConfirmQuitState_obj,quitCallback,(void))

void ConfirmQuitState_obj::cancelCallback(){
            	HX_GC_STACKFRAME(&_hx_pos_eab994d4205515f7_30_cancelCallback)
HXDLIN(  30)		 ::flixel::FlxState nextState =  ::MenuState_obj::__alloc( HX_CTX ,null());
HXDLIN(  30)		if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXDLIN(  30)			::flixel::FlxG_obj::game->_requestedState = nextState;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ConfirmQuitState_obj,cancelCallback,(void))


hx::ObjectPtr< ConfirmQuitState_obj > ConfirmQuitState_obj::__new( ::Dynamic MaxSize) {
	hx::ObjectPtr< ConfirmQuitState_obj > __this = new ConfirmQuitState_obj();
	__this->__construct(MaxSize);
	return __this;
}

hx::ObjectPtr< ConfirmQuitState_obj > ConfirmQuitState_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	ConfirmQuitState_obj *__this = (ConfirmQuitState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ConfirmQuitState_obj), true, "ConfirmQuitState"));
	*(void **)__this = ConfirmQuitState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

ConfirmQuitState_obj::ConfirmQuitState_obj()
{
}

void ConfirmQuitState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConfirmQuitState);
	HX_MARK_MEMBER_NAME(yesBtn,"yesBtn");
	HX_MARK_MEMBER_NAME(cancelBtn,"cancelBtn");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ConfirmQuitState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(yesBtn,"yesBtn");
	HX_VISIT_MEMBER_NAME(cancelBtn,"cancelBtn");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ConfirmQuitState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"yesBtn") ) { return hx::Val( yesBtn ); }
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cancelBtn") ) { return hx::Val( cancelBtn ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"quitCallback") ) { return hx::Val( quitCallback_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cancelCallback") ) { return hx::Val( cancelCallback_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ConfirmQuitState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"yesBtn") ) { yesBtn=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cancelBtn") ) { cancelBtn=inValue.Cast<  ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConfirmQuitState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("yesBtn","\x75","\x43","\xdd","\xd4"));
	outFields->push(HX_HCSTRING("cancelBtn","\x02","\xb5","\x14","\x22"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ConfirmQuitState_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(ConfirmQuitState_obj,yesBtn),HX_HCSTRING("yesBtn","\x75","\x43","\xdd","\xd4")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(ConfirmQuitState_obj,cancelBtn),HX_HCSTRING("cancelBtn","\x02","\xb5","\x14","\x22")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ConfirmQuitState_obj_sStaticStorageInfo = 0;
#endif

static ::String ConfirmQuitState_obj_sMemberFields[] = {
	HX_HCSTRING("yesBtn","\x75","\x43","\xdd","\xd4"),
	HX_HCSTRING("cancelBtn","\x02","\xb5","\x14","\x22"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("quitCallback","\xb4","\x7c","\xcd","\xb7"),
	HX_HCSTRING("cancelCallback","\x5f","\x4d","\x2d","\x01"),
	::String(null()) };

static void ConfirmQuitState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConfirmQuitState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ConfirmQuitState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConfirmQuitState_obj::__mClass,"__mClass");
};

#endif

hx::Class ConfirmQuitState_obj::__mClass;

void ConfirmQuitState_obj::__register()
{
	hx::Object *dummy = new ConfirmQuitState_obj;
	ConfirmQuitState_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ConfirmQuitState","\xc2","\x76","\x82","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ConfirmQuitState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ConfirmQuitState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ConfirmQuitState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ConfirmQuitState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConfirmQuitState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConfirmQuitState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
