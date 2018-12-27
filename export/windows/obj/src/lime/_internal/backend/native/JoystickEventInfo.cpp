// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_JoystickEventInfo
#include <lime/_internal/backend/native/JoystickEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21cd05885e6e0032_885_new,"lime._internal.backend.native.JoystickEventInfo","new",0x6a2decec,"lime._internal.backend.native.JoystickEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",885,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_21cd05885e6e0032_899_clone,"lime._internal.backend.native.JoystickEventInfo","clone",0x72666ae9,"lime._internal.backend.native.JoystickEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",899,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void JoystickEventInfo_obj::__construct( ::Dynamic type,hx::Null< int >  __o_id,hx::Null< int >  __o_index,hx::Null< int >  __o_value,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
int id = __o_id.Default(0);
int index = __o_index.Default(0);
int value = __o_value.Default(0);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_21cd05885e6e0032_885_new)
HXLINE( 887)		this->type = type;
HXLINE( 888)		this->id = id;
HXLINE( 889)		this->index = index;
HXLINE( 890)		this->eventValue = value;
HXLINE( 891)		this->x = x;
HXLINE( 892)		this->y = y;
            	}

Dynamic JoystickEventInfo_obj::__CreateEmpty() { return new JoystickEventInfo_obj; }

void *JoystickEventInfo_obj::_hx_vtable = 0;

Dynamic JoystickEventInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JoystickEventInfo_obj > _hx_result = new JoystickEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool JoystickEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x599ac45c;
}

 ::lime::_internal::backend::native::JoystickEventInfo JoystickEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_21cd05885e6e0032_899_clone)
HXDLIN( 899)		return  ::lime::_internal::backend::native::JoystickEventInfo_obj::__alloc( HX_CTX ,this->type,this->id,this->index,this->eventValue,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(JoystickEventInfo_obj,clone,return )


JoystickEventInfo_obj::JoystickEventInfo_obj()
{
}

hx::Val JoystickEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"eventValue") ) { return hx::Val( eventValue ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val JoystickEventInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"eventValue") ) { eventValue=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JoystickEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("eventValue","\xf7","\x88","\x13","\xae"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo JoystickEventInfo_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,eventValue),HX_HCSTRING("eventValue","\xf7","\x88","\x13","\xae")},
	{hx::fsFloat,(int)offsetof(JoystickEventInfo_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(JoystickEventInfo_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *JoystickEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String JoystickEventInfo_obj_sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("eventValue","\xf7","\x88","\x13","\xae"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void JoystickEventInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JoystickEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JoystickEventInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JoystickEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class JoystickEventInfo_obj::__mClass;

void JoystickEventInfo_obj::__register()
{
	hx::Object *dummy = new JoystickEventInfo_obj;
	JoystickEventInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._internal.backend.native.JoystickEventInfo","\xfa","\x46","\xaa","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JoystickEventInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JoystickEventInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JoystickEventInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JoystickEventInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JoystickEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JoystickEventInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native