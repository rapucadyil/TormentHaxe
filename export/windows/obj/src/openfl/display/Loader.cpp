// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_Lib
#include <openfl/_internal/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_193_new,"openfl.display.Loader","new",0x0b8c4b6f,"openfl.display.Loader.new","openfl/display/Loader.hx",193,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_210_close,"openfl.display.Loader","close",0xeefbb487,"openfl.display.Loader.close","openfl/display/Loader.hx",210,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_372_load,"openfl.display.Loader","load",0x0deacc37,"openfl.display.Loader.load","openfl/display/Loader.hx",372,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_549_loadBytes,"openfl.display.Loader","loadBytes",0x5dd804b4,"openfl.display.Loader.loadBytes","openfl/display/Loader.hx",549,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_584_unload,"openfl.display.Loader","unload",0x847d3950,"openfl.display.Loader.unload","openfl/display/Loader.hx",584,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_644_unloadAndStop,"openfl.display.Loader","unloadAndStop",0x25cb8709,"openfl.display.Loader.unloadAndStop","openfl/display/Loader.hx",644,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_673___dispatchError,"openfl.display.Loader","__dispatchError",0xdd48591d,"openfl.display.Loader.__dispatchError","openfl/display/Loader.hx",673,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_693_BitmapData_onError,"openfl.display.Loader","BitmapData_onError",0x2d70cc54,"openfl.display.Loader.BitmapData_onError","openfl/display/Loader.hx",693,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_698_BitmapData_onLoad,"openfl.display.Loader","BitmapData_onLoad",0x9c5aef1a,"openfl.display.Loader.BitmapData_onLoad","openfl/display/Loader.hx",698,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_713_BitmapData_onProgress,"openfl.display.Loader","BitmapData_onProgress",0x8ecdd6a1,"openfl.display.Loader.BitmapData_onProgress","openfl/display/Loader.hx",713,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_723_loader_onComplete,"openfl.display.Loader","loader_onComplete",0xf5bb9433,"openfl.display.Loader.loader_onComplete","openfl/display/Loader.hx",723,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_751_loader_onComplete,"openfl.display.Loader","loader_onComplete",0xf5bb9433,"openfl.display.Loader.loader_onComplete","openfl/display/Loader.hx",751,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_770_loader_onComplete,"openfl.display.Loader","loader_onComplete",0xf5bb9433,"openfl.display.Loader.loader_onComplete","openfl/display/Loader.hx",770,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_802_loader_onError,"openfl.display.Loader","loader_onError",0x53aca80e,"openfl.display.Loader.loader_onError","openfl/display/Loader.hx",802,0x7a569d9f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b7c318d3e4ffa4a_812_loader_onProgress,"openfl.display.Loader","loader_onProgress",0xfc1e8b27,"openfl.display.Loader.loader_onProgress","openfl/display/Loader.hx",812,0x7a569d9f)
namespace openfl{
namespace display{

void Loader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_193_new)
HXLINE( 195)		super::__construct();
HXLINE( 197)		this->contentLoaderInfo = ::openfl::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));
HXLINE( 198)		this->uncaughtErrorEvents = this->contentLoaderInfo->uncaughtErrorEvents;
            	}

Dynamic Loader_obj::__CreateEmpty() { return new Loader_obj; }

void *Loader_obj::_hx_vtable = 0;

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Loader_obj > _hx_result = new Loader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Loader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19c29573) {
			if (inClassId<=(int)0x17120186) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x17120186;
			} else {
				return inClassId==(int)0x19c29573;
			}
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x3248531d || inClassId==(int)0x3f2b00af;
	}
}

void Loader_obj::close(){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_210_close)
HXDLIN( 210)		::openfl::_internal::Lib_obj::notImplemented(hx::SourceInfo(HX_("Loader.hx",6b,e8,d2,9c),210,HX_("openfl.display.Loader",fd,67,b0,e2),HX_("close",b8,17,63,48)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,close,(void))

void Loader_obj::load( ::openfl::net::URLRequest request, ::openfl::_hx_system::LoaderContext context){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_372_load)
HXLINE( 374)		this->contentLoaderInfo->loaderURL = ::openfl::Lib_obj::get_current()->get_loaderInfo()->url;
HXLINE( 375)		this->contentLoaderInfo->url = request->url;
HXLINE( 376)		this->_hx___unloaded = false;
HXLINE( 378)		bool _hx_tmp;
HXDLIN( 378)		if (hx::IsNotNull( request->contentType )) {
HXLINE( 378)			_hx_tmp = (request->contentType == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 378)			_hx_tmp = true;
            		}
HXDLIN( 378)		if (_hx_tmp) {
HXLINE( 380)			::String extension = HX_("",00,00,00,00);
HXLINE( 381)			this->_hx___path = request->url;
HXLINE( 383)			int queryIndex = this->_hx___path.indexOf(HX_("?",3f,00,00,00),null());
HXLINE( 384)			if ((queryIndex > (int)-1)) {
HXLINE( 386)				this->_hx___path = this->_hx___path.substring((int)0,queryIndex);
            			}
HXLINE( 390)			while(::StringTools_obj::endsWith(this->_hx___path,HX_("/",2f,00,00,00))){
HXLINE( 392)				::String _hx_tmp1 = this->_hx___path;
HXDLIN( 392)				this->_hx___path = _hx_tmp1.substring((int)0,(this->_hx___path.length - (int)1));
            			}
HXLINE( 396)			if (::StringTools_obj::endsWith(this->_hx___path,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 398)				 ::openfl::display::Loader _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 398)				_hx_tmp2->_hx___path = (_hx_tmp2->_hx___path + HX_("/library.json",2a,a7,07,47));
HXLINE( 400)				if ((queryIndex > (int)-1)) {
HXLINE( 402)					::String _hx_tmp3 = this->_hx___path;
HXDLIN( 402)					request->url = (_hx_tmp3 + request->url.substring(queryIndex,null()));
            				}
            				else {
HXLINE( 406)					request->url = this->_hx___path;
            				}
            			}
HXLINE( 412)			int extIndex = this->_hx___path.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE( 413)			if ((extIndex > (int)-1)) {
HXLINE( 415)				::String extension1 = this->_hx___path;
HXDLIN( 415)				extension = extension1.substring((extIndex + (int)1),null());
            			}
HXLINE( 419)			::String _hx_tmp4;
HXDLIN( 419)			::String _hx_switch_0 = extension;
            			if (  (_hx_switch_0==HX_("gif",04,84,4e,00)) ){
HXLINE( 419)				_hx_tmp4 = HX_("image/gif",10,f4,ba,16);
HXDLIN( 419)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("jpeg",a8,f2,65,46)) ||  (_hx_switch_0==HX_("jpg",e1,d0,50,00)) ){
HXLINE( 419)				_hx_tmp4 = HX_("image/jpeg",1c,8d,db,ce);
HXDLIN( 419)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("js",c9,5c,00,00)) ){
HXLINE( 419)				_hx_tmp4 = HX_("application/javascript",cc,7a,f4,a7);
HXDLIN( 419)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("json",28,42,68,46)) ){
HXLINE( 419)				_hx_tmp4 = HX_("application/json",87,d8,7f,4e);
HXDLIN( 419)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("png",a9,5c,55,00)) ){
HXLINE( 419)				_hx_tmp4 = HX_("image/png",b5,cc,c1,16);
HXDLIN( 419)				goto _hx_goto_3;
            			}
            			if (  (_hx_switch_0==HX_("swf",42,ab,57,00)) ){
HXLINE( 419)				_hx_tmp4 = HX_("application/x-shockwave-flash",ea,f3,47,4a);
HXDLIN( 419)				goto _hx_goto_3;
            			}
            			/* default */{
HXLINE( 419)				_hx_tmp4 = HX_("application/x-www-form-urlencoded",9e,61,91,fa);
            			}
            			_hx_goto_3:;
HXDLIN( 419)			this->contentLoaderInfo->contentType = _hx_tmp4;
            		}
            		else {
HXLINE( 433)			this->contentLoaderInfo->contentType = request->contentType;
            		}
HXLINE( 446)		 ::openfl::net::URLLoader loader =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 447)		loader->dataFormat = (int)0;
HXLINE( 449)		bool _hx_tmp5;
HXDLIN( 449)		bool _hx_tmp6;
HXDLIN( 449)		if ((this->contentLoaderInfo->contentType.indexOf(HX_("/json",d7,85,3d,56),null()) <= (int)-1)) {
HXLINE( 449)			_hx_tmp6 = (this->contentLoaderInfo->contentType.indexOf(HX_("/javascript",1c,04,67,9b),null()) > (int)-1);
            		}
            		else {
HXLINE( 449)			_hx_tmp6 = true;
            		}
HXDLIN( 449)		if (!(_hx_tmp6)) {
HXLINE( 449)			_hx_tmp5 = (this->contentLoaderInfo->contentType.indexOf(HX_("/ecmascript",ac,7b,0f,7d),null()) > (int)-1);
            		}
            		else {
HXLINE( 449)			_hx_tmp5 = true;
            		}
HXDLIN( 449)		if (_hx_tmp5) {
HXLINE( 451)			loader->dataFormat = (int)1;
            		}
HXLINE( 455)		loader->addEventListener(HX_("complete",b9,00,c8,7f),this->loader_onComplete_dyn(),null(),null(),null());
HXLINE( 456)		loader->addEventListener(HX_("ioError",02,fe,41,76),this->loader_onError_dyn(),null(),null(),null());
HXLINE( 457)		loader->addEventListener(HX_("progress",ad,f7,2a,86),this->loader_onProgress_dyn(),null(),null(),null());
HXLINE( 458)		loader->load(request);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

void Loader_obj::loadBytes( ::openfl::utils::ByteArrayData buffer, ::openfl::_hx_system::LoaderContext context){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_549_loadBytes)
HXDLIN( 549)		::openfl::display::BitmapData_obj::loadFromBytes(buffer,null())->onComplete(this->BitmapData_onLoad_dyn())->onError(this->BitmapData_onError_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadBytes,(void))

void Loader_obj::unload(){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_584_unload)
HXDLIN( 584)		if (!(this->_hx___unloaded)) {
HXLINE( 586)			while((this->get_numChildren() > (int)0)){
HXLINE( 588)				this->removeChildAt((int)0);
            			}
HXLINE( 592)			if (hx::IsNotNull( this->_hx___library )) {
HXLINE( 594)				::openfl::utils::Assets_obj::unloadLibrary(this->contentLoaderInfo->url);
HXLINE( 595)				this->_hx___library = null();
            			}
HXLINE( 599)			this->content = null();
HXLINE( 600)			this->contentLoaderInfo->url = null();
HXLINE( 601)			this->contentLoaderInfo->contentType = null();
HXLINE( 602)			this->contentLoaderInfo->content = null();
HXLINE( 603)			this->contentLoaderInfo->bytesLoaded = (int)0;
HXLINE( 604)			this->contentLoaderInfo->bytesTotal = (int)0;
HXLINE( 605)			this->contentLoaderInfo->width = (int)0;
HXLINE( 606)			this->contentLoaderInfo->height = (int)0;
HXLINE( 607)			this->_hx___unloaded = true;
HXLINE( 609)			 ::openfl::display::LoaderInfo _hx_tmp = this->contentLoaderInfo;
HXDLIN( 609)			_hx_tmp->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("unload",ff,a0,8c,65),null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

void Loader_obj::unloadAndStop(hx::Null< bool >  __o_gc){
bool gc = __o_gc.Default(true);
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_644_unloadAndStop)
HXLINE( 646)		if (hx::IsNotNull( this->content )) {
HXLINE( 648)			this->content->_hx___stopAllMovieClips();
            		}
HXLINE( 652)		{
HXLINE( 652)			int _g1 = (int)0;
HXDLIN( 652)			int _g = this->get_numChildren();
HXDLIN( 652)			while((_g1 < _g)){
HXLINE( 652)				_g1 = (_g1 + (int)1);
HXDLIN( 652)				int i = (_g1 - (int)1);
HXLINE( 654)				this->getChildAt(i)->_hx___stopAllMovieClips();
            			}
            		}
HXLINE( 658)		this->unload();
HXLINE( 660)		if (gc) {
HXLINE( 663)			__hxcpp_collect(false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,unloadAndStop,(void))

void Loader_obj::_hx___dispatchError(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_673___dispatchError)
HXLINE( 675)		 ::openfl::events::IOErrorEvent event =  ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null());
HXLINE( 676)		event->text = text;
HXLINE( 677)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,_hx___dispatchError,(void))

void Loader_obj::BitmapData_onError( ::Dynamic error){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_693_BitmapData_onError)
HXDLIN( 693)		this->_hx___dispatchError(::Std_obj::string(error));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onError,(void))

void Loader_obj::BitmapData_onLoad( ::openfl::display::BitmapData bitmapData){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_698_BitmapData_onLoad)
HXLINE( 702)		this->content =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,bitmapData,null(),null());
HXLINE( 703)		this->contentLoaderInfo->content = this->content;
HXLINE( 704)		Float _hx_tmp = this->content->get_width();
HXDLIN( 704)		this->contentLoaderInfo->width = ::Std_obj::_hx_int(_hx_tmp);
HXLINE( 705)		Float _hx_tmp1 = this->content->get_height();
HXDLIN( 705)		this->contentLoaderInfo->height = ::Std_obj::_hx_int(_hx_tmp1);
HXLINE( 706)		this->addChild(this->content);
HXLINE( 708)		 ::openfl::display::LoaderInfo _hx_tmp2 = this->contentLoaderInfo;
HXDLIN( 708)		_hx_tmp2->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,BitmapData_onLoad,(void))

void Loader_obj::BitmapData_onProgress(int bytesLoaded,int bytesTotal){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_713_BitmapData_onProgress)
HXLINE( 715)		 ::openfl::events::ProgressEvent event =  ::openfl::events::ProgressEvent_obj::__alloc( HX_CTX ,HX_("progress",ad,f7,2a,86),null(),null(),null(),null());
HXLINE( 716)		event->bytesLoaded = bytesLoaded;
HXLINE( 717)		event->bytesTotal = bytesTotal;
HXLINE( 718)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,BitmapData_onProgress,(void))

void Loader_obj::loader_onComplete( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_723_loader_onComplete)
HXDLIN( 723)		 ::openfl::display::Loader _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 727)		 ::openfl::net::URLLoader loader = ( ( ::openfl::net::URLLoader)(event->target) );
HXLINE( 729)		bool _hx_tmp;
HXDLIN( 729)		if (hx::IsNotNull( this->contentLoaderInfo->contentType )) {
HXLINE( 729)			_hx_tmp = (this->contentLoaderInfo->contentType.indexOf(HX_("/json",d7,85,3d,56),null()) > (int)-1);
            		}
            		else {
HXLINE( 729)			_hx_tmp = false;
            		}
HXDLIN( 729)		if (_hx_tmp) {
HXLINE( 731)			 ::Dynamic loader1 = loader->data;
HXDLIN( 731)			 ::lime::utils::AssetManifest manifest = ::lime::utils::AssetManifest_obj::parse(( (::String)(loader1) ),::haxe::io::Path_obj::directory(this->_hx___path));
HXLINE( 733)			if (hx::IsNull( manifest )) {
HXLINE( 735)				this->_hx___dispatchError(HX_("Cannot parse asset manifest",49,e5,68,e9));
HXLINE( 736)				return;
            			}
HXLINE( 740)			 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 742)			if (hx::IsNull( library )) {
HXLINE( 744)				this->_hx___dispatchError(HX_("Cannot open library",c2,bb,9d,77));
HXLINE( 745)				return;
            			}
HXLINE( 749)			if (::Std_obj::is(library,hx::ClassOf< ::openfl::utils::AssetLibrary >())) {
            				HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0, ::lime::utils::AssetManifest,manifest, ::openfl::display::Loader,_gthis, ::lime::utils::AssetLibrary,library) HXARGC(1)
            				void _hx_run( ::lime::utils::AssetLibrary _){
            					HX_GC_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_751_loader_onComplete)
HXLINE( 753)					_gthis->_hx___library = ( ( ::openfl::utils::AssetLibrary)(library) );
HXLINE( 754)					::openfl::utils::Assets_obj::registerLibrary(_gthis->contentLoaderInfo->url,_gthis->_hx___library);
HXLINE( 756)					bool _hx_tmp1;
HXDLIN( 756)					if (hx::IsNotNull( manifest->name )) {
HXLINE( 756)						_hx_tmp1 = !(::openfl::utils::Assets_obj::hasLibrary(manifest->name));
            					}
            					else {
HXLINE( 756)						_hx_tmp1 = false;
            					}
HXDLIN( 756)					if (_hx_tmp1) {
HXLINE( 758)						::openfl::utils::Assets_obj::registerLibrary(manifest->name,_gthis->_hx___library);
            					}
HXLINE( 762)					_gthis->content = _gthis->_hx___library->getMovieClip(HX_("",00,00,00,00));
HXLINE( 763)					_gthis->contentLoaderInfo->content = _gthis->content;
HXLINE( 764)					_gthis->addChild(_gthis->content);
HXLINE( 766)					 ::openfl::display::LoaderInfo _gthis1 = _gthis->contentLoaderInfo;
HXDLIN( 766)					_gthis1->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::openfl::display::Loader,_gthis) HXARGC(1)
            				void _hx_run(::String e){
            					HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_770_loader_onComplete)
HXLINE( 770)					_gthis->_hx___dispatchError(e);
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 751)				library->load()->onComplete( ::Dynamic(new _hx_Closure_0(manifest,_gthis,library)))->onError( ::Dynamic(new _hx_Closure_1(_gthis)));
            			}
            		}
            		else {
HXLINE( 776)			bool _hx_tmp2;
HXDLIN( 776)			if (hx::IsNotNull( this->contentLoaderInfo->contentType )) {
HXLINE( 776)				if ((this->contentLoaderInfo->contentType.indexOf(HX_("/javascript",1c,04,67,9b),null()) <= (int)-1)) {
HXLINE( 776)					_hx_tmp2 = (this->contentLoaderInfo->contentType.indexOf(HX_("/ecmascript",ac,7b,0f,7d),null()) > (int)-1);
            				}
            				else {
HXLINE( 776)					_hx_tmp2 = true;
            				}
            			}
            			else {
HXLINE( 776)				_hx_tmp2 = false;
            			}
HXDLIN( 776)			if (_hx_tmp2) {
HXLINE( 778)				this->content =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 779)				this->contentLoaderInfo->content = this->content;
HXLINE( 780)				this->addChild(this->content);
HXLINE( 790)				 ::openfl::display::LoaderInfo _hx_tmp3 = this->contentLoaderInfo;
HXDLIN( 790)				_hx_tmp3->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("complete",b9,00,c8,7f),null(),null()));
            			}
            			else {
HXLINE( 794)				this->contentLoaderInfo->bytes = ( ( ::openfl::utils::ByteArrayData)(loader->data) );
HXLINE( 795)				::openfl::display::BitmapData_obj::loadFromBytes(( ( ::openfl::utils::ByteArrayData)(loader->data) ),null())->onComplete(this->BitmapData_onLoad_dyn())->onError(this->BitmapData_onError_dyn());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onComplete,(void))

void Loader_obj::loader_onError( ::openfl::events::IOErrorEvent event){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_802_loader_onError)
HXLINE( 806)		event->target = this->contentLoaderInfo;
HXLINE( 807)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onError,(void))

void Loader_obj::loader_onProgress( ::openfl::events::ProgressEvent event){
            	HX_STACKFRAME(&_hx_pos_1b7c318d3e4ffa4a_812_loader_onProgress)
HXLINE( 814)		event->target = this->contentLoaderInfo;
HXLINE( 815)		this->contentLoaderInfo->dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loader_onProgress,(void))


hx::ObjectPtr< Loader_obj > Loader_obj::__new() {
	hx::ObjectPtr< Loader_obj > __this = new Loader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Loader_obj > Loader_obj::__alloc(hx::Ctx *_hx_ctx) {
	Loader_obj *__this = (Loader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Loader_obj), true, "openfl.display.Loader"));
	*(void **)__this = Loader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_MARK_MEMBER_NAME(_hx___library,"__library");
	HX_MARK_MEMBER_NAME(_hx___path,"__path");
	HX_MARK_MEMBER_NAME(_hx___unloaded,"__unloaded");
	 ::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(uncaughtErrorEvents,"uncaughtErrorEvents");
	HX_VISIT_MEMBER_NAME(_hx___library,"__library");
	HX_VISIT_MEMBER_NAME(_hx___path,"__path");
	HX_VISIT_MEMBER_NAME(_hx___unloaded,"__unloaded");
	 ::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Loader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { return hx::Val( _hx___path ); }
		if (HX_FIELD_EQ(inName,"unload") ) { return hx::Val( unload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return hx::Val( content ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__library") ) { return hx::Val( _hx___library ); }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return hx::Val( loadBytes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__unloaded") ) { return hx::Val( _hx___unloaded ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadAndStop") ) { return hx::Val( unloadAndStop_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loader_onError") ) { return hx::Val( loader_onError_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__dispatchError") ) { return hx::Val( _hx___dispatchError_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return hx::Val( contentLoaderInfo ); }
		if (HX_FIELD_EQ(inName,"BitmapData_onLoad") ) { return hx::Val( BitmapData_onLoad_dyn() ); }
		if (HX_FIELD_EQ(inName,"loader_onComplete") ) { return hx::Val( loader_onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"loader_onProgress") ) { return hx::Val( loader_onProgress_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BitmapData_onError") ) { return hx::Val( BitmapData_onError_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { return hx::Val( uncaughtErrorEvents ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"BitmapData_onProgress") ) { return hx::Val( BitmapData_onProgress_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Loader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { _hx___path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__library") ) { _hx___library=inValue.Cast<  ::openfl::utils::AssetLibrary >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__unloaded") ) { _hx___unloaded=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast<  ::openfl::display::LoaderInfo >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uncaughtErrorEvents") ) { uncaughtErrorEvents=inValue.Cast<  ::openfl::events::UncaughtErrorEvents >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"));
	outFields->push(HX_HCSTRING("uncaughtErrorEvents","\x6c","\x14","\x2c","\x48"));
	outFields->push(HX_HCSTRING("__library","\xdb","\x77","\xbe","\xc0"));
	outFields->push(HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"));
	outFields->push(HX_HCSTRING("__unloaded","\x3e","\xea","\xee","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Loader_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Loader_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsObject /*::openfl::display::LoaderInfo*/ ,(int)offsetof(Loader_obj,contentLoaderInfo),HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14")},
	{hx::fsObject /*::openfl::events::UncaughtErrorEvents*/ ,(int)offsetof(Loader_obj,uncaughtErrorEvents),HX_HCSTRING("uncaughtErrorEvents","\x6c","\x14","\x2c","\x48")},
	{hx::fsObject /*::openfl::utils::AssetLibrary*/ ,(int)offsetof(Loader_obj,_hx___library),HX_HCSTRING("__library","\xdb","\x77","\xbe","\xc0")},
	{hx::fsString,(int)offsetof(Loader_obj,_hx___path),HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9")},
	{hx::fsBool,(int)offsetof(Loader_obj,_hx___unloaded),HX_HCSTRING("__unloaded","\x3e","\xea","\xee","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Loader_obj_sStaticStorageInfo = 0;
#endif

static ::String Loader_obj_sMemberFields[] = {
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"),
	HX_HCSTRING("uncaughtErrorEvents","\x6c","\x14","\x2c","\x48"),
	HX_HCSTRING("__library","\xdb","\x77","\xbe","\xc0"),
	HX_HCSTRING("__path","\xc5","\x48","\x4a","\xf9"),
	HX_HCSTRING("__unloaded","\x3e","\xea","\xee","\xfd"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("unloadAndStop","\x3a","\x03","\x03","\x7a"),
	HX_HCSTRING("__dispatchError","\x8e","\x03","\x7c","\x4b"),
	HX_HCSTRING("BitmapData_onError","\x83","\x7e","\x14","\x0a"),
	HX_HCSTRING("BitmapData_onLoad","\xcb","\xd7","\xa2","\xbe"),
	HX_HCSTRING("BitmapData_onProgress","\xd2","\x6b","\x16","\xc1"),
	HX_HCSTRING("loader_onComplete","\xe4","\x7c","\x03","\x18"),
	HX_HCSTRING("loader_onError","\xbd","\xd6","\x01","\xb0"),
	HX_HCSTRING("loader_onProgress","\xd8","\x73","\x66","\x1e"),
	::String(null()) };

static void Loader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Loader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#endif

hx::Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Object *dummy = new Loader_obj;
	Loader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Loader","\xfd","\x67","\xb0","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Loader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Loader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Loader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Loader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Loader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Loader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
