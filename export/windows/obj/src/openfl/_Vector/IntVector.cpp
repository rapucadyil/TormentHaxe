// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1288_new,"openfl._Vector.IntVector","new",0x6313ae9a,"openfl._Vector.IntVector.new","openfl/Vector.hx",1288,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1306_concat,"openfl._Vector.IntVector","concat",0x4a254b1a,"openfl._Vector.IntVector.concat","openfl/Vector.hx",1306,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1331_copy,"openfl._Vector.IntVector","copy",0x46e7503b,"openfl._Vector.IntVector.copy","openfl/Vector.hx",1331,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1338_get,"openfl._Vector.IntVector","get",0x630e5ed0,"openfl._Vector.IntVector.get","openfl/Vector.hx",1338,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1343_indexOf,"openfl._Vector.IntVector","indexOf",0x6903cc03,"openfl._Vector.IntVector.indexOf","openfl/Vector.hx",1343,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1362_insertAt,"openfl._Vector.IntVector","insertAt",0x75cdcc12,"openfl._Vector.IntVector.insertAt","openfl/Vector.hx",1362,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1373_iterator,"openfl._Vector.IntVector","iterator",0x47489974,"openfl._Vector.IntVector.iterator","openfl/Vector.hx",1373,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1380_join,"openfl._Vector.IntVector","join",0x4b87c870,"openfl._Vector.IntVector.join","openfl/Vector.hx",1380,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1385_lastIndexOf,"openfl._Vector.IntVector","lastIndexOf",0x72eaa54d,"openfl._Vector.IntVector.lastIndexOf","openfl/Vector.hx",1385,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1403_pop,"openfl._Vector.IntVector","pop",0x63153bcb,"openfl._Vector.IntVector.pop","openfl/Vector.hx",1403,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1418_push,"openfl._Vector.IntVector","push",0x4f83a660,"openfl._Vector.IntVector.push","openfl/Vector.hx",1418,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1431_removeAt,"openfl._Vector.IntVector","removeAt",0x60c9bddd,"openfl._Vector.IntVector.removeAt","openfl/Vector.hx",1431,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1444_reverse,"openfl._Vector.IntVector","reverse",0xa340bc5c,"openfl._Vector.IntVector.reverse","openfl/Vector.hx",1444,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1454_set,"openfl._Vector.IntVector","set",0x631779dc,"openfl._Vector.IntVector.set","openfl/Vector.hx",1454,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1469_shift,"openfl._Vector.IntVector","shift",0xf5424d3c,"openfl._Vector.IntVector.shift","openfl/Vector.hx",1469,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1484_slice,"openfl._Vector.IntVector","slice",0xf7e7250c,"openfl._Vector.IntVector.slice","openfl/Vector.hx",1484,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1491_sort,"openfl._Vector.IntVector","sort",0x517abbe4,"openfl._Vector.IntVector.sort","openfl/Vector.hx",1491,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1498_splice,"openfl._Vector.IntVector","splice",0x41f3c782,"openfl._Vector.IntVector.splice","openfl/Vector.hx",1498,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1505_toJSON,"openfl._Vector.IntVector","toJSON",0xfe5e8b29,"openfl._Vector.IntVector.toJSON","openfl/Vector.hx",1505,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1512_toString,"openfl._Vector.IntVector","toString",0xec1d2032,"openfl._Vector.IntVector.toString","openfl/Vector.hx",1512,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1519_unshift,"openfl._Vector.IntVector","unshift",0x00f866c3,"openfl._Vector.IntVector.unshift","openfl/Vector.hx",1519,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1537_get_length,"openfl._Vector.IntVector","get_length",0x4714c1b5,"openfl._Vector.IntVector.get_length","openfl/Vector.hx",1537,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1542_set_length,"openfl._Vector.IntVector","set_length",0x4a926029,"openfl._Vector.IntVector.set_length","openfl/Vector.hx",1542,0x4a01873c)
namespace openfl{
namespace _Vector{

void IntVector_obj::__construct( ::Dynamic length, ::Dynamic fixed,::Array< int > array){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1288_new)
HXLINE(1290)		if (hx::IsNull( array )) {
HXLINE(1290)			array = ::Array_obj< int >::__new();
            		}
HXLINE(1291)		this->_hx___array = array;
HXLINE(1293)		bool _hx_tmp;
HXDLIN(1293)		if (hx::IsNotNull( length )) {
HXLINE(1293)			_hx_tmp = hx::IsGreater( length,(int)0 );
            		}
            		else {
HXLINE(1293)			_hx_tmp = false;
            		}
HXDLIN(1293)		if (_hx_tmp) {
HXLINE(1295)			this->set_length(length);
            		}
HXLINE(1299)		this->fixed = hx::IsEq( fixed,true );
            	}

Dynamic IntVector_obj::__CreateEmpty() { return new IntVector_obj; }

void *IntVector_obj::_hx_vtable = 0;

Dynamic IntVector_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IntVector_obj > _hx_result = new IntVector_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool IntVector_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x56650740;
}

static ::openfl::_Vector::IVector_obj _hx_openfl__Vector_IntVector__hx_openfl__Vector_IVector= {
	( int (hx::Object::*)(int))&::openfl::_Vector::IntVector_obj::set_length,
	( int (hx::Object::*)())&::openfl::_Vector::IntVector_obj::get_length,
	( ::Dynamic (hx::Object::*)(::Dynamic))&::openfl::_Vector::IntVector_obj::concat,
	( ::Dynamic (hx::Object::*)())&::openfl::_Vector::IntVector_obj::copy,
	(  ::Dynamic (hx::Object::*)(int))&::openfl::_Vector::IntVector_obj::get_c4bfee54,
	( int (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::IntVector_obj::indexOf_02dfccf1,
	( void (hx::Object::*)(int, ::Dynamic))&::openfl::_Vector::IntVector_obj::insertAt_5d1f93e2,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::IntVector_obj::iterator,
	( ::String (hx::Object::*)(::String))&::openfl::_Vector::IntVector_obj::join,
	( int (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::IntVector_obj::lastIndexOf_02dfccf1,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::IntVector_obj::pop,
	( int (hx::Object::*)( ::Dynamic))&::openfl::_Vector::IntVector_obj::push_9c73657a,
	(  ::Dynamic (hx::Object::*)(int))&::openfl::_Vector::IntVector_obj::removeAt_c4bfee54,
	( ::Dynamic (hx::Object::*)())&::openfl::_Vector::IntVector_obj::reverse,
	(  ::Dynamic (hx::Object::*)(int, ::Dynamic))&::openfl::_Vector::IntVector_obj::set_15539e57,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::IntVector_obj::shift,
	( ::Dynamic (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::IntVector_obj::slice,
	( void (hx::Object::*)( ::Dynamic))&::openfl::_Vector::IntVector_obj::sort,
	( ::Dynamic (hx::Object::*)(int,int))&::openfl::_Vector::IntVector_obj::splice,
	( ::String (hx::Object::*)())&::openfl::_Vector::IntVector_obj::toString,
	( void (hx::Object::*)( ::Dynamic))&::openfl::_Vector::IntVector_obj::unshift_489e4d05,
};

void IntVector_obj::unshift_489e4d05( ::Dynamic x) {
			unshift(x);
}

 ::Dynamic IntVector_obj::set_15539e57(int index, ::Dynamic value) {
			return set(index,value);
}

 ::Dynamic IntVector_obj::removeAt_c4bfee54(int index) {
			return removeAt(index);
}

int IntVector_obj::push_9c73657a( ::Dynamic x) {
			return push(x);
}

int IntVector_obj::lastIndexOf_02dfccf1( ::Dynamic x, ::Dynamic from) {
			return lastIndexOf(x,from);
}

void IntVector_obj::insertAt_5d1f93e2(int index, ::Dynamic element) {
			insertAt(index,element);
}

int IntVector_obj::indexOf_02dfccf1( ::Dynamic x, ::Dynamic from) {
			return indexOf(x,from);
}

 ::Dynamic IntVector_obj::get_c4bfee54(int index) {
			return get(index);
}
void *IntVector_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x45e7caba: return &_hx_openfl__Vector_IntVector__hx_openfl__Vector_IVector;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic IntVector_obj::concat(::Dynamic a){
            	HX_GC_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1306_concat)
HXDLIN(1306)		if (hx::IsNull( a )) {
HXLINE(1308)			return  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->copy());
            		}
            		else {
HXLINE(1312)			 ::openfl::_Vector::IntVector other = ( ( ::openfl::_Vector::IntVector)(a) );
HXLINE(1314)			if ((other->_hx___array->length > (int)0)) {
HXLINE(1316)				return  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->concat(other->_hx___array));
            			}
            			else {
HXLINE(1320)				return  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->copy());
            			}
            		}
HXLINE(1306)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,concat,return )

::Dynamic IntVector_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1331_copy)
HXDLIN(1331)		bool _hx_tmp = this->fixed;
HXDLIN(1331)		return  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,null(),_hx_tmp,this->_hx___array->copy());
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,copy,return )

int IntVector_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1338_get)
HXDLIN(1338)		return this->_hx___array->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,get,return )

int IntVector_obj::indexOf(int x, ::Dynamic __o_from){
 ::Dynamic from = __o_from.Default(0);
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1343_indexOf)
HXLINE(1345)		{
HXLINE(1345)			int _g1 = from;
HXDLIN(1345)			int _g = this->_hx___array->length;
HXDLIN(1345)			while((_g1 < _g)){
HXLINE(1345)				_g1 = (_g1 + (int)1);
HXDLIN(1345)				int i = (_g1 - (int)1);
HXLINE(1347)				if ((this->_hx___array->__get(i) == x)) {
HXLINE(1349)					return i;
            				}
            			}
            		}
HXLINE(1355)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,indexOf,return )

void IntVector_obj::insertAt(int index,int element){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1362_insertAt)
HXDLIN(1362)		bool _hx_tmp;
HXDLIN(1362)		if (!(!(this->fixed))) {
HXDLIN(1362)			_hx_tmp = (index < this->_hx___array->length);
            		}
            		else {
HXDLIN(1362)			_hx_tmp = true;
            		}
HXDLIN(1362)		if (_hx_tmp) {
HXLINE(1364)			this->_hx___array->insert(index,element);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,insertAt,(void))

 ::Dynamic IntVector_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1373_iterator)
HXDLIN(1373)		return this->_hx___array->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,iterator,return )

::String IntVector_obj::join(::String __o_sep){
::String sep = __o_sep.Default(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1380_join)
HXDLIN(1380)		return this->_hx___array->join(sep);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,join,return )

int IntVector_obj::lastIndexOf(int x, ::Dynamic from){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1385_lastIndexOf)
HXLINE(1387)		 ::Dynamic i;
HXDLIN(1387)		bool i1;
HXDLIN(1387)		if (hx::IsNotNull( from )) {
HXLINE(1387)			i1 = hx::IsGreaterEq( from,this->_hx___array->length );
            		}
            		else {
HXLINE(1387)			i1 = true;
            		}
HXDLIN(1387)		if (i1) {
HXLINE(1387)			i = (this->_hx___array->length - (int)1);
            		}
            		else {
HXLINE(1387)			i = from;
            		}
HXLINE(1389)		while(hx::IsGreaterEq( i,(int)0 )){
HXLINE(1391)			if ((this->_hx___array->__get(i) == x)) {
HXLINE(1391)				return i;
            			}
HXLINE(1392)			i = (i - (int)1);
            		}
HXLINE(1396)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,lastIndexOf,return )

 ::Dynamic IntVector_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1403_pop)
HXDLIN(1403)		if (!(this->fixed)) {
HXLINE(1405)			return this->_hx___array->pop();
            		}
            		else {
HXLINE(1409)			return null();
            		}
HXLINE(1403)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,pop,return )

int IntVector_obj::push(int x){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1418_push)
HXDLIN(1418)		if (!(this->fixed)) {
HXLINE(1420)			return this->_hx___array->push(x);
            		}
            		else {
HXLINE(1424)			return this->_hx___array->length;
            		}
HXLINE(1418)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,push,return )

int IntVector_obj::removeAt(int index){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1431_removeAt)
HXLINE(1433)		bool _hx_tmp;
HXDLIN(1433)		if (!(!(this->fixed))) {
HXLINE(1433)			_hx_tmp = (index < this->_hx___array->length);
            		}
            		else {
HXLINE(1433)			_hx_tmp = true;
            		}
HXDLIN(1433)		if (_hx_tmp) {
HXLINE(1435)			return this->_hx___array->splice(index,(int)1)->__get((int)0);
            		}
HXLINE(1439)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,removeAt,return )

::Dynamic IntVector_obj::reverse(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1444_reverse)
HXLINE(1446)		this->_hx___array->reverse();
HXLINE(1447)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,reverse,return )

int IntVector_obj::set(int index,int value){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1454_set)
HXDLIN(1454)		bool _hx_tmp;
HXDLIN(1454)		if (!(!(this->fixed))) {
HXDLIN(1454)			_hx_tmp = (index < this->_hx___array->length);
            		}
            		else {
HXDLIN(1454)			_hx_tmp = true;
            		}
HXDLIN(1454)		if (_hx_tmp) {
HXLINE(1456)			return (this->_hx___array[index] = value);
            		}
            		else {
HXLINE(1460)			return value;
            		}
HXLINE(1454)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,set,return )

 ::Dynamic IntVector_obj::shift(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1469_shift)
HXDLIN(1469)		if (!(this->fixed)) {
HXLINE(1471)			return this->_hx___array->shift();
            		}
            		else {
HXLINE(1475)			return null();
            		}
HXLINE(1469)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,shift,return )

::Dynamic IntVector_obj::slice( ::Dynamic __o_startIndex, ::Dynamic __o_endIndex){
 ::Dynamic startIndex = __o_startIndex.Default(0);
 ::Dynamic endIndex = __o_endIndex.Default(16777215);
            	HX_GC_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1484_slice)
HXDLIN(1484)		return  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->slice(startIndex,endIndex));
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,slice,return )

void IntVector_obj::sort( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1491_sort)
HXDLIN(1491)		this->_hx___array->sort(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,sort,(void))

::Dynamic IntVector_obj::splice(int pos,int len){
            	HX_GC_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1498_splice)
HXDLIN(1498)		return  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->splice(pos,len));
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,splice,return )

::Array< int > IntVector_obj::toJSON(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1505_toJSON)
HXDLIN(1505)		return this->_hx___array;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,toJSON,return )

::String IntVector_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1512_toString)
HXDLIN(1512)		if (hx::IsNotNull( this->_hx___array )) {
HXDLIN(1512)			return this->_hx___array->toString();
            		}
            		else {
HXDLIN(1512)			return null();
            		}
HXDLIN(1512)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,toString,return )

void IntVector_obj::unshift(int x){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1519_unshift)
HXDLIN(1519)		if (!(this->fixed)) {
HXLINE(1521)			this->_hx___array->unshift(x);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,unshift,(void))

int IntVector_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1537_get_length)
HXDLIN(1537)		return this->_hx___array->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,get_length,return )

int IntVector_obj::set_length(int value){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1542_set_length)
HXLINE(1544)		if (!(this->fixed)) {
HXLINE(1548)			_hx_array_set_size_exact(this->_hx___array,value);
            		}
HXLINE(1577)		return this->_hx___array->length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,set_length,return )


hx::ObjectPtr< IntVector_obj > IntVector_obj::__new( ::Dynamic length, ::Dynamic fixed,::Array< int > array) {
	hx::ObjectPtr< IntVector_obj > __this = new IntVector_obj();
	__this->__construct(length,fixed,array);
	return __this;
}

hx::ObjectPtr< IntVector_obj > IntVector_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic length, ::Dynamic fixed,::Array< int > array) {
	IntVector_obj *__this = (IntVector_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IntVector_obj), true, "openfl._Vector.IntVector"));
	*(void **)__this = IntVector_obj::_hx_vtable;
	__this->__construct(length,fixed,array);
	return __this;
}

IntVector_obj::IntVector_obj()
{
}

void IntVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(_hx___array,"__array");
	HX_MARK_END_CLASS();
}

void IntVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(_hx___array,"__array");
}

hx::Val IntVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"pop") ) { return hx::Val( pop_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"join") ) { return hx::Val( join_dyn() ); }
		if (HX_FIELD_EQ(inName,"push") ) { return hx::Val( push_dyn() ); }
		if (HX_FIELD_EQ(inName,"sort") ) { return hx::Val( sort_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { return hx::Val( fixed ); }
		if (HX_FIELD_EQ(inName,"shift") ) { return hx::Val( shift_dyn() ); }
		if (HX_FIELD_EQ(inName,"slice") ) { return hx::Val( slice_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"concat") ) { return hx::Val( concat_dyn() ); }
		if (HX_FIELD_EQ(inName,"splice") ) { return hx::Val( splice_dyn() ); }
		if (HX_FIELD_EQ(inName,"toJSON") ) { return hx::Val( toJSON_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { return hx::Val( _hx___array ); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return hx::Val( indexOf_dyn() ); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return hx::Val( reverse_dyn() ); }
		if (HX_FIELD_EQ(inName,"unshift") ) { return hx::Val( unshift_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"insertAt") ) { return hx::Val( insertAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return hx::Val( removeAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return hx::Val( set_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { return hx::Val( lastIndexOf_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val IntVector_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue.Cast< int >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { _hx___array=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo IntVector_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(IntVector_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(IntVector_obj,_hx___array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *IntVector_obj_sStaticStorageInfo = 0;
#endif

static ::String IntVector_obj_sMemberFields[] = {
	HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"),
	HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("insertAt","\x8c","\x7c","\x1f","\xc2"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("lastIndexOf","\x13","\xfd","\x6a","\x95"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("removeAt","\x57","\x6e","\x1b","\xad"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("toJSON","\x23","\x49","\x09","\x7c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void IntVector_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IntVector_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntVector_obj::__mClass,"__mClass");
};

#endif

hx::Class IntVector_obj::__mClass;

void IntVector_obj::__register()
{
	hx::Object *dummy = new IntVector_obj;
	IntVector_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.IntVector","\xa8","\x19","\x86","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IntVector_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IntVector_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IntVector_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IntVector_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IntVector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IntVector_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _Vector
