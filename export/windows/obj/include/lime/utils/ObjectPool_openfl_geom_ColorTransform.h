// Generated by Haxe 3.4.7
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_ColorTransform
#define INCLUDED_lime_utils_ObjectPool_openfl_geom_ColorTransform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(lime,utils,ObjectPool_openfl_geom_ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)

namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ObjectPool_openfl_geom_ColorTransform_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ObjectPool_openfl_geom_ColorTransform_obj OBJ_;
		ObjectPool_openfl_geom_ColorTransform_obj();

	public:
		enum { _hx_ClassId = 0x61a10e69 };

		void __construct( ::Dynamic create, ::Dynamic clean, ::Dynamic size);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.utils.ObjectPool_openfl_geom_ColorTransform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.utils.ObjectPool_openfl_geom_ColorTransform"); }
		static hx::ObjectPtr< ObjectPool_openfl_geom_ColorTransform_obj > __new( ::Dynamic create, ::Dynamic clean, ::Dynamic size);
		static hx::ObjectPtr< ObjectPool_openfl_geom_ColorTransform_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic create, ::Dynamic clean, ::Dynamic size);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(hx::Ctx *_hx_alloc,ObjectPool_openfl_geom_ColorTransform_obj *_hx_obj);
		//~ObjectPool_openfl_geom_ColorTransform_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ObjectPool_openfl_geom_ColorTransform","\x41","\x7d","\x9a","\xc8"); }

		int activeObjects;
		int inactiveObjects;
		 ::openfl::geom::ColorTransform _hx___inactiveObject0;
		 ::openfl::geom::ColorTransform _hx___inactiveObject1;
		 ::List _hx___inactiveObjectList;
		 ::haxe::ds::ObjectMap _hx___pool;
		 ::Dynamic _hx___size;
		void add( ::openfl::geom::ColorTransform object);
		::Dynamic add_dyn();

		::Dynamic clean;
		inline ::Dynamic &clean_dyn() {return clean; }

		void clear();
		::Dynamic clear_dyn();

		::Dynamic create;
		inline ::Dynamic &create_dyn() {return create; }

		 ::openfl::geom::ColorTransform get();
		::Dynamic get_dyn();

		void release( ::openfl::geom::ColorTransform object);
		::Dynamic release_dyn();

		void _hx___addInactive( ::openfl::geom::ColorTransform object);
		::Dynamic _hx___addInactive_dyn();

		 ::openfl::geom::ColorTransform _hx___getInactive();
		::Dynamic _hx___getInactive_dyn();

		void _hx___removeInactive(int count);
		::Dynamic _hx___removeInactive_dyn();

		 ::Dynamic get_size();
		::Dynamic get_size_dyn();

		 ::Dynamic set_size( ::Dynamic value);
		::Dynamic set_size_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_ObjectPool_openfl_geom_ColorTransform */ 
