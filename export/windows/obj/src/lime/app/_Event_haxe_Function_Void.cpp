// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime_app__Event_haxe_Function_Void
#include <lime/app/_Event_haxe_Function_Void.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a7f520fd293f2ad9_47_new,"lime.app._Event_haxe_Function_Void","new",0xbd635592,"lime.app._Event_haxe_Function_Void.new","lime/app/Event.hx",47,0xbda45bec)
HX_LOCAL_STACK_FRAME(_hx_pos_a7f520fd293f2ad9_65_add,"lime.app._Event_haxe_Function_Void","add",0xbd597753,"lime.app._Event_haxe_Function_Void.add","lime/app/Event.hx",65,0xbda45bec)
HX_LOCAL_STACK_FRAME(_hx_pos_a7f520fd293f2ad9_94_cancel,"lime.app._Event_haxe_Function_Void","cancel",0x58f23388,"lime.app._Event_haxe_Function_Void.cancel","lime/app/Event.hx",94,0xbda45bec)
HX_LOCAL_STACK_FRAME(_hx_pos_a7f520fd293f2ad9_141_has,"lime.app._Event_haxe_Function_Void","has",0xbd5ec48c,"lime.app._Event_haxe_Function_Void.has","lime/app/Event.hx",141,0xbda45bec)
HX_LOCAL_STACK_FRAME(_hx_pos_a7f520fd293f2ad9_160_remove,"lime.app._Event_haxe_Function_Void","remove",0xa546e252,"lime.app._Event_haxe_Function_Void.remove","lime/app/Event.hx",160,0xbda45bec)
HX_LOCAL_STACK_FRAME(_hx_pos_28623717ae4dd325_91_dispatch,"lime.app._Event_haxe_Function_Void","dispatch",0x1fca3448,"lime.app._Event_haxe_Function_Void.dispatch","lime/_internal/macros/EventMacro.hx",91,0xc5a10671)
namespace lime{
namespace app{

void _Event_haxe_Function_Void_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a7f520fd293f2ad9_47_new)
HXLINE(  50)		this->canceled = false;
HXLINE(  51)		this->_hx___listeners = ::Array_obj< ::Dynamic>::__new();
HXLINE(  52)		this->_hx___priorities = ::Array_obj< int >::__new();
HXLINE(  53)		this->_hx___repeat = ::Array_obj< bool >::__new();
            	}

Dynamic _Event_haxe_Function_Void_obj::__CreateEmpty() { return new _Event_haxe_Function_Void_obj; }

void *_Event_haxe_Function_Void_obj::_hx_vtable = 0;

Dynamic _Event_haxe_Function_Void_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< _Event_haxe_Function_Void_obj > _hx_result = new _Event_haxe_Function_Void_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool _Event_haxe_Function_Void_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x129df4a2;
}

void _Event_haxe_Function_Void_obj::add( ::Dynamic listener,hx::Null< bool >  __o_once,hx::Null< int >  __o_priority){
bool once = __o_once.Default(false);
int priority = __o_priority.Default(0);
            	HX_STACKFRAME(&_hx_pos_a7f520fd293f2ad9_65_add)
HXLINE(  68)		{
HXLINE(  68)			int _g1 = (int)0;
HXDLIN(  68)			int _g = this->_hx___priorities->length;
HXDLIN(  68)			while((_g1 < _g)){
HXLINE(  68)				_g1 = (_g1 + (int)1);
HXDLIN(  68)				int i = (_g1 - (int)1);
HXLINE(  70)				if ((priority > this->_hx___priorities->__get(i))) {
HXLINE(  72)					this->_hx___listeners->insert(i,listener);
HXLINE(  73)					this->_hx___priorities->insert(i,priority);
HXLINE(  74)					this->_hx___repeat->insert(i,!(once));
HXLINE(  75)					return;
            				}
            			}
            		}
HXLINE(  81)		this->_hx___listeners->push(listener);
HXLINE(  82)		this->_hx___priorities->push(priority);
HXLINE(  83)		this->_hx___repeat->push(!(once));
            	}


HX_DEFINE_DYNAMIC_FUNC3(_Event_haxe_Function_Void_obj,add,(void))

void _Event_haxe_Function_Void_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_a7f520fd293f2ad9_94_cancel)
HXDLIN(  94)		this->canceled = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(_Event_haxe_Function_Void_obj,cancel,(void))

bool _Event_haxe_Function_Void_obj::has( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_a7f520fd293f2ad9_141_has)
HXLINE( 144)		{
HXLINE( 144)			int _g = (int)0;
HXDLIN( 144)			::Array< ::Dynamic> _g1 = this->_hx___listeners;
HXDLIN( 144)			while((_g < _g1->length)){
HXLINE( 144)				 ::Dynamic l = _g1->__get(_g);
HXDLIN( 144)				_g = (_g + (int)1);
HXLINE( 146)				if (::Reflect_obj::compareMethods(l,listener)) {
HXLINE( 146)					return true;
            				}
            			}
            		}
HXLINE( 151)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(_Event_haxe_Function_Void_obj,has,return )

void _Event_haxe_Function_Void_obj::remove( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_a7f520fd293f2ad9_160_remove)
HXLINE( 163)		int i = this->_hx___listeners->length;
HXLINE( 165)		while(true){
HXLINE( 165)			i = (i - (int)1);
HXDLIN( 165)			if (!((i >= (int)0))) {
HXLINE( 165)				goto _hx_goto_6;
            			}
HXLINE( 167)			if (::Reflect_obj::compareMethods(this->_hx___listeners->__get(i),listener)) {
HXLINE( 169)				this->_hx___listeners->removeRange(i,(int)1);
HXLINE( 170)				this->_hx___priorities->removeRange(i,(int)1);
HXLINE( 171)				this->_hx___repeat->removeRange(i,(int)1);
            			}
            		}
            		_hx_goto_6:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(_Event_haxe_Function_Void_obj,remove,(void))

void _Event_haxe_Function_Void_obj::dispatch( ::Dynamic a){
            	HX_STACKFRAME(&_hx_pos_28623717ae4dd325_91_dispatch)
HXLINE(  93)		this->canceled = false;
HXLINE(  95)		::Array< ::Dynamic> listeners = this->_hx___listeners;
HXLINE(  96)		::Array< bool > repeat = this->_hx___repeat;
HXLINE(  97)		int i = (int)0;
HXLINE(  99)		while((i < listeners->length)){
HXLINE( 101)			listeners->__get(i)(a);
HXLINE( 103)			if (!(repeat->__get(i))) {
HXLINE( 105)				this->remove(listeners->__get(i));
            			}
            			else {
HXLINE( 109)				i = (i + (int)1);
            			}
HXLINE( 113)			if (this->canceled) {
HXLINE( 115)				goto _hx_goto_8;
            			}
            		}
            		_hx_goto_8:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(_Event_haxe_Function_Void_obj,dispatch,(void))


hx::ObjectPtr< _Event_haxe_Function_Void_obj > _Event_haxe_Function_Void_obj::__new() {
	hx::ObjectPtr< _Event_haxe_Function_Void_obj > __this = new _Event_haxe_Function_Void_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< _Event_haxe_Function_Void_obj > _Event_haxe_Function_Void_obj::__alloc(hx::Ctx *_hx_ctx) {
	_Event_haxe_Function_Void_obj *__this = (_Event_haxe_Function_Void_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(_Event_haxe_Function_Void_obj), true, "lime.app._Event_haxe_Function_Void"));
	*(void **)__this = _Event_haxe_Function_Void_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

_Event_haxe_Function_Void_obj::_Event_haxe_Function_Void_obj()
{
}

void _Event_haxe_Function_Void_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(_Event_haxe_Function_Void);
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(_hx___repeat,"__repeat");
	HX_MARK_MEMBER_NAME(_hx___priorities,"__priorities");
	HX_MARK_MEMBER_NAME(_hx___listeners,"__listeners");
	HX_MARK_END_CLASS();
}

void _Event_haxe_Function_Void_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(_hx___repeat,"__repeat");
	HX_VISIT_MEMBER_NAME(_hx___priorities,"__priorities");
	HX_VISIT_MEMBER_NAME(_hx___listeners,"__listeners");
}

hx::Val _Event_haxe_Function_Void_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"has") ) { return hx::Val( has_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return hx::Val( cancel_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { return hx::Val( canceled ); }
		if (HX_FIELD_EQ(inName,"__repeat") ) { return hx::Val( _hx___repeat ); }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return hx::Val( dispatch_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { return hx::Val( _hx___listeners ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__priorities") ) { return hx::Val( _hx___priorities ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val _Event_haxe_Function_Void_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__repeat") ) { _hx___repeat=inValue.Cast< ::Array< bool > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { _hx___listeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__priorities") ) { _hx___priorities=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void _Event_haxe_Function_Void_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"));
	outFields->push(HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae"));
	outFields->push(HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c"));
	outFields->push(HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo _Event_haxe_Function_Void_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(_Event_haxe_Function_Void_obj,canceled),HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(_Event_haxe_Function_Void_obj,_hx___repeat),HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(_Event_haxe_Function_Void_obj,_hx___priorities),HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(_Event_haxe_Function_Void_obj,_hx___listeners),HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *_Event_haxe_Function_Void_obj_sStaticStorageInfo = 0;
#endif

static ::String _Event_haxe_Function_Void_obj_sMemberFields[] = {
	HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"),
	HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae"),
	HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21"),
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	::String(null()) };

static void _Event_haxe_Function_Void_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(_Event_haxe_Function_Void_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void _Event_haxe_Function_Void_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_Event_haxe_Function_Void_obj::__mClass,"__mClass");
};

#endif

hx::Class _Event_haxe_Function_Void_obj::__mClass;

void _Event_haxe_Function_Void_obj::__register()
{
	hx::Object *dummy = new _Event_haxe_Function_Void_obj;
	_Event_haxe_Function_Void_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app._Event_haxe_Function_Void","\xa0","\xe4","\x48","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = _Event_haxe_Function_Void_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(_Event_haxe_Function_Void_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< _Event_haxe_Function_Void_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = _Event_haxe_Function_Void_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = _Event_haxe_Function_Void_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = _Event_haxe_Function_Void_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
