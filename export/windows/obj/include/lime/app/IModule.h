// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime_app_IModule
#define INCLUDED_lime_app_IModule

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES IModule_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx__hx___registerLimeModule)( ::lime::app::Application application); 
		static inline void _hx___registerLimeModule( ::Dynamic _hx_, ::lime::app::Application application) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx__hx___registerLimeModule)(application);
		}
		void (hx::Object :: *_hx__hx___unregisterLimeModule)( ::lime::app::Application application); 
		static inline void _hx___unregisterLimeModule( ::Dynamic _hx_, ::lime::app::Application application) {
			(_hx_.mPtr->*( static_cast< ::lime::app::IModule_obj *>(_hx_.mPtr->_hx_getInterface(0xf464d6e9)))->_hx__hx___unregisterLimeModule)(application);
		}
};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_IModule */ 
