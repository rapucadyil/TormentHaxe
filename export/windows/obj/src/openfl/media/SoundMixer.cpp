// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundMixer
#include <openfl/media/SoundMixer.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1587d256662a54fa_35_areSoundsInaccessible,"openfl.media.SoundMixer","areSoundsInaccessible",0xcb915307,"openfl.media.SoundMixer.areSoundsInaccessible","openfl/media/SoundMixer.hx",35,0x17e3a43a)
HX_LOCAL_STACK_FRAME(_hx_pos_1587d256662a54fa_45_stopAll,"openfl.media.SoundMixer","stopAll",0x7ebb1d93,"openfl.media.SoundMixer.stopAll","openfl/media/SoundMixer.hx",45,0x17e3a43a)
HX_LOCAL_STACK_FRAME(_hx_pos_1587d256662a54fa_56___registerSoundChannel,"openfl.media.SoundMixer","__registerSoundChannel",0x60ebf103,"openfl.media.SoundMixer.__registerSoundChannel","openfl/media/SoundMixer.hx",56,0x17e3a43a)
HX_LOCAL_STACK_FRAME(_hx_pos_1587d256662a54fa_63___unregisterSoundChannel,"openfl.media.SoundMixer","__unregisterSoundChannel",0xb1bc24dc,"openfl.media.SoundMixer.__unregisterSoundChannel","openfl/media/SoundMixer.hx",63,0x17e3a43a)
HX_LOCAL_STACK_FRAME(_hx_pos_1587d256662a54fa_77_get_soundTransform,"openfl.media.SoundMixer","get_soundTransform",0xc6a43892,"openfl.media.SoundMixer.get_soundTransform","openfl/media/SoundMixer.hx",77,0x17e3a43a)
HX_LOCAL_STACK_FRAME(_hx_pos_1587d256662a54fa_82_set_soundTransform,"openfl.media.SoundMixer","set_soundTransform",0xa3536b06,"openfl.media.SoundMixer.set_soundTransform","openfl/media/SoundMixer.hx",82,0x17e3a43a)
HX_LOCAL_STACK_FRAME(_hx_pos_1587d256662a54fa_15_boot,"openfl.media.SoundMixer","boot",0x83c4785e,"openfl.media.SoundMixer.boot","openfl/media/SoundMixer.hx",15,0x17e3a43a)
HX_LOCAL_STACK_FRAME(_hx_pos_1587d256662a54fa_20_boot,"openfl.media.SoundMixer","boot",0x83c4785e,"openfl.media.SoundMixer.boot","openfl/media/SoundMixer.hx",20,0x17e3a43a)
HX_LOCAL_STACK_FRAME(_hx_pos_1587d256662a54fa_21_boot,"openfl.media.SoundMixer","boot",0x83c4785e,"openfl.media.SoundMixer.boot","openfl/media/SoundMixer.hx",21,0x17e3a43a)
namespace openfl{
namespace media{

void SoundMixer_obj::__construct() { }

Dynamic SoundMixer_obj::__CreateEmpty() { return new SoundMixer_obj; }

void *SoundMixer_obj::_hx_vtable = 0;

Dynamic SoundMixer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SoundMixer_obj > _hx_result = new SoundMixer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SoundMixer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x41efa64a;
}

int SoundMixer_obj::MAX_ACTIVE_CHANNELS;

int SoundMixer_obj::bufferTime;

::Array< ::Dynamic> SoundMixer_obj::_hx___soundChannels;

 ::openfl::media::SoundTransform SoundMixer_obj::_hx___soundTransform;

bool SoundMixer_obj::areSoundsInaccessible(){
            	HX_STACKFRAME(&_hx_pos_1587d256662a54fa_35_areSoundsInaccessible)
HXDLIN(  35)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundMixer_obj,areSoundsInaccessible,return )

void SoundMixer_obj::stopAll(){
            	HX_STACKFRAME(&_hx_pos_1587d256662a54fa_45_stopAll)
HXDLIN(  45)		int _g = (int)0;
HXDLIN(  45)		::Array< ::Dynamic> _g1 = ::openfl::media::SoundMixer_obj::_hx___soundChannels;
HXDLIN(  45)		while((_g < _g1->length)){
HXDLIN(  45)			 ::openfl::media::SoundChannel channel = _g1->__get(_g).StaticCast<  ::openfl::media::SoundChannel >();
HXDLIN(  45)			_g = (_g + (int)1);
HXLINE(  47)			channel->stop();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundMixer_obj,stopAll,(void))

void SoundMixer_obj::_hx___registerSoundChannel( ::openfl::media::SoundChannel soundChannel){
            	HX_STACKFRAME(&_hx_pos_1587d256662a54fa_56___registerSoundChannel)
HXDLIN(  56)		::openfl::media::SoundMixer_obj::_hx___soundChannels->push(soundChannel);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SoundMixer_obj,_hx___registerSoundChannel,(void))

void SoundMixer_obj::_hx___unregisterSoundChannel( ::openfl::media::SoundChannel soundChannel){
            	HX_STACKFRAME(&_hx_pos_1587d256662a54fa_63___unregisterSoundChannel)
HXDLIN(  63)		::openfl::media::SoundMixer_obj::_hx___soundChannels->remove(soundChannel);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SoundMixer_obj,_hx___unregisterSoundChannel,(void))

 ::openfl::media::SoundTransform SoundMixer_obj::get_soundTransform(){
            	HX_STACKFRAME(&_hx_pos_1587d256662a54fa_77_get_soundTransform)
HXDLIN(  77)		return ::openfl::media::SoundMixer_obj::_hx___soundTransform;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundMixer_obj,get_soundTransform,return )

 ::openfl::media::SoundTransform SoundMixer_obj::set_soundTransform( ::openfl::media::SoundTransform value){
            	HX_STACKFRAME(&_hx_pos_1587d256662a54fa_82_set_soundTransform)
HXLINE(  84)		::openfl::media::SoundMixer_obj::_hx___soundTransform = value->clone();
HXLINE(  86)		{
HXLINE(  86)			int _g = (int)0;
HXDLIN(  86)			::Array< ::Dynamic> _g1 = ::openfl::media::SoundMixer_obj::_hx___soundChannels;
HXDLIN(  86)			while((_g < _g1->length)){
HXLINE(  86)				 ::openfl::media::SoundChannel channel = _g1->__get(_g).StaticCast<  ::openfl::media::SoundChannel >();
HXDLIN(  86)				_g = (_g + (int)1);
HXLINE(  88)				channel->_hx___updateTransform();
            			}
            		}
HXLINE(  92)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SoundMixer_obj,set_soundTransform,return )


SoundMixer_obj::SoundMixer_obj()
{
}

bool SoundMixer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"stopAll") ) { outValue = stopAll_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bufferTime") ) { outValue = ( bufferTime ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_soundTransform() ); return true; } }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__soundChannels") ) { outValue = ( _hx___soundChannels ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { outValue = ( _hx___soundTransform ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { outValue = get_soundTransform_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { outValue = set_soundTransform_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"areSoundsInaccessible") ) { outValue = areSoundsInaccessible_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__registerSoundChannel") ) { outValue = _hx___registerSoundChannel_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__unregisterSoundChannel") ) { outValue = _hx___unregisterSoundChannel_dyn(); return true; }
	}
	return false;
}

bool SoundMixer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferTime") ) { bufferTime=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == hx::paccAlways)  ioValue = ( set_soundTransform(ioValue.Cast<  ::openfl::media::SoundTransform >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__soundChannels") ) { _hx___soundChannels=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { _hx___soundTransform=ioValue.Cast<  ::openfl::media::SoundTransform >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SoundMixer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo SoundMixer_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SoundMixer_obj::MAX_ACTIVE_CHANNELS,HX_HCSTRING("MAX_ACTIVE_CHANNELS","\x2e","\x8c","\xd2","\xb3")},
	{hx::fsInt,(void *) &SoundMixer_obj::bufferTime,HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &SoundMixer_obj::_hx___soundChannels,HX_HCSTRING("__soundChannels","\x1f","\x13","\xbf","\x8f")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(void *) &SoundMixer_obj::_hx___soundTransform,HX_HCSTRING("__soundTransform","\xbd","\x79","\x1e","\x57")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void SoundMixer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundMixer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SoundMixer_obj::MAX_ACTIVE_CHANNELS,"MAX_ACTIVE_CHANNELS");
	HX_MARK_MEMBER_NAME(SoundMixer_obj::bufferTime,"bufferTime");
	HX_MARK_MEMBER_NAME(SoundMixer_obj::_hx___soundChannels,"__soundChannels");
	HX_MARK_MEMBER_NAME(SoundMixer_obj::_hx___soundTransform,"__soundTransform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SoundMixer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundMixer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SoundMixer_obj::MAX_ACTIVE_CHANNELS,"MAX_ACTIVE_CHANNELS");
	HX_VISIT_MEMBER_NAME(SoundMixer_obj::bufferTime,"bufferTime");
	HX_VISIT_MEMBER_NAME(SoundMixer_obj::_hx___soundChannels,"__soundChannels");
	HX_VISIT_MEMBER_NAME(SoundMixer_obj::_hx___soundTransform,"__soundTransform");
};

#endif

hx::Class SoundMixer_obj::__mClass;

static ::String SoundMixer_obj_sStaticFields[] = {
	HX_HCSTRING("MAX_ACTIVE_CHANNELS","\x2e","\x8c","\xd2","\xb3"),
	HX_HCSTRING("bufferTime","\x2d","\x35","\x0d","\x9e"),
	HX_HCSTRING("__soundChannels","\x1f","\x13","\xbf","\x8f"),
	HX_HCSTRING("__soundTransform","\xbd","\x79","\x1e","\x57"),
	HX_HCSTRING("areSoundsInaccessible","\xb3","\xb8","\x5f","\x22"),
	HX_HCSTRING("stopAll","\x3f","\x2e","\x3e","\x43"),
	HX_HCSTRING("__registerSoundChannel","\xd7","\x81","\xb6","\xfe"),
	HX_HCSTRING("__unregisterSoundChannel","\xb0","\x92","\xeb","\x43"),
	HX_HCSTRING("get_soundTransform","\x66","\xcf","\x78","\xbe"),
	HX_HCSTRING("set_soundTransform","\xda","\x01","\x28","\x9b"),
	::String(null())
};

void SoundMixer_obj::__register()
{
	hx::Object *dummy = new SoundMixer_obj;
	SoundMixer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.media.SoundMixer","\xc2","\xdb","\xa7","\x15");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SoundMixer_obj::__GetStatic;
	__mClass->mSetStaticField = &SoundMixer_obj::__SetStatic;
	__mClass->mMarkFunc = SoundMixer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SoundMixer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SoundMixer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SoundMixer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundMixer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundMixer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SoundMixer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1587d256662a54fa_15_boot)
HXDLIN(  15)		MAX_ACTIVE_CHANNELS = (int)32;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1587d256662a54fa_20_boot)
HXDLIN(  20)		_hx___soundChannels = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_1587d256662a54fa_21_boot)
HXDLIN(  21)		_hx___soundTransform =  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,null(),null());
            	}
}

} // end namespace openfl
} // end namespace media
