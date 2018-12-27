// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_lime__internal_unifill_Exception
#include <lime/_internal/unifill/Exception.h>
#endif
#ifndef INCLUDED_lime__internal_unifill_InternalEncoding
#include <lime/_internal/unifill/InternalEncoding.h>
#endif
#ifndef INCLUDED_lime__internal_unifill_InvalidCodePoint
#include <lime/_internal/unifill/InvalidCodePoint.h>
#endif
#ifndef INCLUDED_lime__internal_unifill_InvalidCodeUnitSequence
#include <lime/_internal/unifill/InvalidCodeUnitSequence.h>
#endif
#ifndef INCLUDED_lime__internal_unifill__Utf8_Utf8_Impl_
#include <lime/_internal/unifill/_Utf8/Utf8_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_29_get_internalEncoding,"lime._internal.unifill.InternalEncoding","get_internalEncoding",0x57b6c031,"lime._internal.unifill.InternalEncoding.get_internalEncoding","lime/_internal/unifill/InternalEncoding.hx",29,0xe2f85ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_41_codeUnitAt,"lime._internal.unifill.InternalEncoding","codeUnitAt",0xd1c8719c,"lime._internal.unifill.InternalEncoding.codeUnitAt","lime/_internal/unifill/InternalEncoding.hx",41,0xe2f85ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_49_codePointAt,"lime._internal.unifill.InternalEncoding","codePointAt",0x503a40be,"lime._internal.unifill.InternalEncoding.codePointAt","lime/_internal/unifill/InternalEncoding.hx",49,0xe2f85ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_57_charAt,"lime._internal.unifill.InternalEncoding","charAt",0x0c021d61,"lime._internal.unifill.InternalEncoding.charAt","lime/_internal/unifill/InternalEncoding.hx",57,0xe2f85ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_65_codePointCount,"lime._internal.unifill.InternalEncoding","codePointCount",0xff1c89e4,"lime._internal.unifill.InternalEncoding.codePointCount","lime/_internal/unifill/InternalEncoding.hx",65,0xe2f85ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_73_codePointWidthAt,"lime._internal.unifill.InternalEncoding","codePointWidthAt",0x7a6570ee,"lime._internal.unifill.InternalEncoding.codePointWidthAt","lime/_internal/unifill/InternalEncoding.hx",73,0xe2f85ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_81_codePointWidthBefore,"lime._internal.unifill.InternalEncoding","codePointWidthBefore",0x025489fa,"lime._internal.unifill.InternalEncoding.codePointWidthBefore","lime/_internal/unifill/InternalEncoding.hx",81,0xe2f85ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_89_offsetByCodePoints,"lime._internal.unifill.InternalEncoding","offsetByCodePoints",0x8550b012,"lime._internal.unifill.InternalEncoding.offsetByCodePoints","lime/_internal/unifill/InternalEncoding.hx",89,0xe2f85ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_98_backwardOffsetByCodePoints,"lime._internal.unifill.InternalEncoding","backwardOffsetByCodePoints",0x3ac41cd5,"lime._internal.unifill.InternalEncoding.backwardOffsetByCodePoints","lime/_internal/unifill/InternalEncoding.hx",98,0xe2f85ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_105_fromCodePoint,"lime._internal.unifill.InternalEncoding","fromCodePoint",0xeacb9821,"lime._internal.unifill.InternalEncoding.fromCodePoint","lime/_internal/unifill/InternalEncoding.hx",105,0xe2f85ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_112_fromCodePoints,"lime._internal.unifill.InternalEncoding","fromCodePoints",0x87598532,"lime._internal.unifill.InternalEncoding.fromCodePoints","lime/_internal/unifill/InternalEncoding.hx",112,0xe2f85ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_122_validate,"lime._internal.unifill.InternalEncoding","validate",0x10db628e,"lime._internal.unifill.InternalEncoding.validate","lime/_internal/unifill/InternalEncoding.hx",122,0xe2f85ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_129_isValidString,"lime._internal.unifill.InternalEncoding","isValidString",0x600d922b,"lime._internal.unifill.InternalEncoding.isValidString","lime/_internal/unifill/InternalEncoding.hx",129,0xe2f85ba5)
HX_LOCAL_STACK_FRAME(_hx_pos_78c95348db24522c_138_encodeWith,"lime._internal.unifill.InternalEncoding","encodeWith",0xaae15734,"lime._internal.unifill.InternalEncoding.encodeWith","lime/_internal/unifill/InternalEncoding.hx",138,0xe2f85ba5)
namespace lime{
namespace _internal{
namespace unifill{

void InternalEncoding_obj::__construct() { }

Dynamic InternalEncoding_obj::__CreateEmpty() { return new InternalEncoding_obj; }

void *InternalEncoding_obj::_hx_vtable = 0;

Dynamic InternalEncoding_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InternalEncoding_obj > _hx_result = new InternalEncoding_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InternalEncoding_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f2bc860;
}

::String InternalEncoding_obj::get_internalEncoding(){
            	HX_STACKFRAME(&_hx_pos_78c95348db24522c_29_get_internalEncoding)
HXDLIN(  29)		return HX_("UTF-8",32,80,ca,28);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InternalEncoding_obj,get_internalEncoding,return )

int InternalEncoding_obj::codeUnitAt(::String s,int index){
            	HX_STACKFRAME(&_hx_pos_78c95348db24522c_41_codeUnitAt)
HXDLIN(  41)		::String this1 = s;
HXDLIN(  41)		::String this2 = this1;
HXDLIN(  41)		return this2.cca(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codeUnitAt,return )

int InternalEncoding_obj::codePointAt(::String s,int index){
            	HX_STACKFRAME(&_hx_pos_78c95348db24522c_49_codePointAt)
HXDLIN(  49)		::String this1 = s;
HXDLIN(  49)		::String this2 = this1;
HXDLIN(  49)		return ::lime::_internal::unifill::_Utf8::Utf8_Impl__obj::codePointAt(this2,index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codePointAt,return )

::String InternalEncoding_obj::charAt(::String s,int index){
            	HX_STACKFRAME(&_hx_pos_78c95348db24522c_57_charAt)
HXDLIN(  57)		::String this1 = s;
HXDLIN(  57)		::String this2 = this1;
HXDLIN(  57)		::String this3 = this2;
HXDLIN(  57)		int c = this3.cca(index);
HXDLIN(  57)		 ::Dynamic len;
HXDLIN(  57)		if ((c < (int)192)) {
HXDLIN(  57)			len = (int)1;
            		}
            		else {
HXDLIN(  57)			if ((c < (int)224)) {
HXDLIN(  57)				len = (int)2;
            			}
            			else {
HXDLIN(  57)				if ((c < (int)240)) {
HXDLIN(  57)					len = (int)3;
            				}
            				else {
HXDLIN(  57)					if ((c < (int)248)) {
HXDLIN(  57)						len = (int)4;
            					}
            					else {
HXDLIN(  57)						len = (int)1;
            					}
            				}
            			}
            		}
HXDLIN(  57)		::String this4 = this3.substr(index,len);
HXDLIN(  57)		::String this5 = this4;
HXDLIN(  57)		return this5;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,charAt,return )

int InternalEncoding_obj::codePointCount(::String s,int beginIndex,int endIndex){
            	HX_STACKFRAME(&_hx_pos_78c95348db24522c_65_codePointCount)
HXDLIN(  65)		::String this1 = s;
HXDLIN(  65)		::String this2 = this1;
HXDLIN(  65)		return ::lime::_internal::unifill::_Utf8::Utf8_Impl__obj::codePointCount(this2,beginIndex,endIndex);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(InternalEncoding_obj,codePointCount,return )

int InternalEncoding_obj::codePointWidthAt(::String s,int index){
            	HX_STACKFRAME(&_hx_pos_78c95348db24522c_73_codePointWidthAt)
HXDLIN(  73)		::String this1 = s;
HXDLIN(  73)		::String this2 = this1;
HXDLIN(  73)		int c = this2.cca(index);
HXDLIN(  73)		if ((c < (int)192)) {
HXDLIN(  73)			return (int)1;
            		}
            		else {
HXDLIN(  73)			if ((c < (int)224)) {
HXDLIN(  73)				return (int)2;
            			}
            			else {
HXDLIN(  73)				if ((c < (int)240)) {
HXDLIN(  73)					return (int)3;
            				}
            				else {
HXDLIN(  73)					if ((c < (int)248)) {
HXDLIN(  73)						return (int)4;
            					}
            					else {
HXDLIN(  73)						return (int)1;
            					}
            				}
            			}
            		}
HXDLIN(  73)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codePointWidthAt,return )

int InternalEncoding_obj::codePointWidthBefore(::String s,int index){
            	HX_STACKFRAME(&_hx_pos_78c95348db24522c_81_codePointWidthBefore)
HXDLIN(  81)		::String this1 = s;
HXDLIN(  81)		::String this2 = this1;
HXDLIN(  81)		::String this3 = this2;
HXDLIN(  81)		::String this4 = this3;
HXDLIN(  81)		int c1 = this4.cca((index - (int)1));
HXDLIN(  81)		bool _hx_tmp;
HXDLIN(  81)		if ((c1 >= (int)128)) {
HXDLIN(  81)			_hx_tmp = (c1 >= (int)192);
            		}
            		else {
HXDLIN(  81)			_hx_tmp = true;
            		}
HXDLIN(  81)		if (_hx_tmp) {
HXDLIN(  81)			return (int)1;
            		}
            		else {
HXDLIN(  81)			::String this5 = this3;
HXDLIN(  81)			if ((((int)this5.cca((index - (int)2)) & (int)(int)224) == (int)192)) {
HXDLIN(  81)				return (int)2;
            			}
            			else {
HXDLIN(  81)				::String this6 = this3;
HXDLIN(  81)				if ((((int)this6.cca((index - (int)3)) & (int)(int)240) == (int)224)) {
HXDLIN(  81)					return (int)3;
            				}
            				else {
HXDLIN(  81)					::String this7 = this3;
HXDLIN(  81)					if ((((int)this7.cca((index - (int)4)) & (int)(int)248) == (int)240)) {
HXDLIN(  81)						return (int)4;
            					}
            					else {
HXDLIN(  81)						return (int)1;
            					}
            				}
            			}
            		}
HXDLIN(  81)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,codePointWidthBefore,return )

int InternalEncoding_obj::offsetByCodePoints(::String s,int index,int codePointOffset){
            	HX_STACKFRAME(&_hx_pos_78c95348db24522c_89_offsetByCodePoints)
HXDLIN(  89)		::String this1 = s;
HXDLIN(  89)		::String this2 = this1;
HXDLIN(  89)		::String this3 = this2;
HXDLIN(  89)		if ((codePointOffset >= (int)0)) {
HXDLIN(  89)			int index1 = index;
HXDLIN(  89)			int len = this3.length;
HXDLIN(  89)			int i = (int)0;
HXDLIN(  89)			while(true){
HXDLIN(  89)				bool _hx_tmp;
HXDLIN(  89)				if ((i < codePointOffset)) {
HXDLIN(  89)					_hx_tmp = (index1 < len);
            				}
            				else {
HXDLIN(  89)					_hx_tmp = false;
            				}
HXDLIN(  89)				if (!(_hx_tmp)) {
HXDLIN(  89)					goto _hx_goto_7;
            				}
HXDLIN(  89)				int c = this3.cca(index1);
HXDLIN(  89)				int index2;
HXDLIN(  89)				if ((c < (int)192)) {
HXDLIN(  89)					index2 = (int)1;
            				}
            				else {
HXDLIN(  89)					if ((c < (int)224)) {
HXDLIN(  89)						index2 = (int)2;
            					}
            					else {
HXDLIN(  89)						if ((c < (int)240)) {
HXDLIN(  89)							index2 = (int)3;
            						}
            						else {
HXDLIN(  89)							if ((c < (int)248)) {
HXDLIN(  89)								index2 = (int)4;
            							}
            							else {
HXDLIN(  89)								index2 = (int)1;
            							}
            						}
            					}
            				}
HXDLIN(  89)				index1 = (index1 + index2);
HXDLIN(  89)				i = (i + (int)1);
            			}
            			_hx_goto_7:;
HXDLIN(  89)			return index1;
            		}
            		else {
HXDLIN(  89)			int index3 = index;
HXDLIN(  89)			int count = (int)0;
HXDLIN(  89)			while(true){
HXDLIN(  89)				bool _hx_tmp1;
HXDLIN(  89)				if ((count < -(codePointOffset))) {
HXDLIN(  89)					_hx_tmp1 = ((int)0 < index3);
            				}
            				else {
HXDLIN(  89)					_hx_tmp1 = false;
            				}
HXDLIN(  89)				if (!(_hx_tmp1)) {
HXDLIN(  89)					goto _hx_goto_8;
            				}
HXDLIN(  89)				::String this4 = this3;
HXDLIN(  89)				::String this5 = this4;
HXDLIN(  89)				int c1 = this5.cca((index3 - (int)1));
HXDLIN(  89)				int index4;
HXDLIN(  89)				bool index5;
HXDLIN(  89)				if ((c1 >= (int)128)) {
HXDLIN(  89)					index5 = (c1 >= (int)192);
            				}
            				else {
HXDLIN(  89)					index5 = true;
            				}
HXDLIN(  89)				if (index5) {
HXDLIN(  89)					index4 = (int)1;
            				}
            				else {
HXDLIN(  89)					::String this6 = this4;
HXDLIN(  89)					if ((((int)this6.cca((index3 - (int)2)) & (int)(int)224) == (int)192)) {
HXDLIN(  89)						index4 = (int)2;
            					}
            					else {
HXDLIN(  89)						::String this7 = this4;
HXDLIN(  89)						if ((((int)this7.cca((index3 - (int)3)) & (int)(int)240) == (int)224)) {
HXDLIN(  89)							index4 = (int)3;
            						}
            						else {
HXDLIN(  89)							::String this8 = this4;
HXDLIN(  89)							if ((((int)this8.cca((index3 - (int)4)) & (int)(int)248) == (int)240)) {
HXDLIN(  89)								index4 = (int)4;
            							}
            							else {
HXDLIN(  89)								index4 = (int)1;
            							}
            						}
            					}
            				}
HXDLIN(  89)				index3 = (index3 - index4);
HXDLIN(  89)				count = (count + (int)1);
            			}
            			_hx_goto_8:;
HXDLIN(  89)			return index3;
            		}
HXDLIN(  89)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(InternalEncoding_obj,offsetByCodePoints,return )

int InternalEncoding_obj::backwardOffsetByCodePoints(::String s,int index,int codePointOffset){
            	HX_STACKFRAME(&_hx_pos_78c95348db24522c_98_backwardOffsetByCodePoints)
HXDLIN(  98)		::String this1 = s;
HXDLIN(  98)		::String this2 = this1;
HXDLIN(  98)		::String this3 = this2;
HXDLIN(  98)		int codePointOffset1 = -(codePointOffset);
HXDLIN(  98)		if ((codePointOffset1 >= (int)0)) {
HXDLIN(  98)			int index1 = index;
HXDLIN(  98)			int len = this3.length;
HXDLIN(  98)			int i = (int)0;
HXDLIN(  98)			while(true){
HXDLIN(  98)				bool _hx_tmp;
HXDLIN(  98)				if ((i < codePointOffset1)) {
HXDLIN(  98)					_hx_tmp = (index1 < len);
            				}
            				else {
HXDLIN(  98)					_hx_tmp = false;
            				}
HXDLIN(  98)				if (!(_hx_tmp)) {
HXDLIN(  98)					goto _hx_goto_10;
            				}
HXDLIN(  98)				int c = this3.cca(index1);
HXDLIN(  98)				int index2;
HXDLIN(  98)				if ((c < (int)192)) {
HXDLIN(  98)					index2 = (int)1;
            				}
            				else {
HXDLIN(  98)					if ((c < (int)224)) {
HXDLIN(  98)						index2 = (int)2;
            					}
            					else {
HXDLIN(  98)						if ((c < (int)240)) {
HXDLIN(  98)							index2 = (int)3;
            						}
            						else {
HXDLIN(  98)							if ((c < (int)248)) {
HXDLIN(  98)								index2 = (int)4;
            							}
            							else {
HXDLIN(  98)								index2 = (int)1;
            							}
            						}
            					}
            				}
HXDLIN(  98)				index1 = (index1 + index2);
HXDLIN(  98)				i = (i + (int)1);
            			}
            			_hx_goto_10:;
HXDLIN(  98)			return index1;
            		}
            		else {
HXDLIN(  98)			int index3 = index;
HXDLIN(  98)			int count = (int)0;
HXDLIN(  98)			while(true){
HXDLIN(  98)				bool _hx_tmp1;
HXDLIN(  98)				if ((count < -(codePointOffset1))) {
HXDLIN(  98)					_hx_tmp1 = ((int)0 < index3);
            				}
            				else {
HXDLIN(  98)					_hx_tmp1 = false;
            				}
HXDLIN(  98)				if (!(_hx_tmp1)) {
HXDLIN(  98)					goto _hx_goto_11;
            				}
HXDLIN(  98)				::String this4 = this3;
HXDLIN(  98)				::String this5 = this4;
HXDLIN(  98)				int c1 = this5.cca((index3 - (int)1));
HXDLIN(  98)				int index4;
HXDLIN(  98)				bool index5;
HXDLIN(  98)				if ((c1 >= (int)128)) {
HXDLIN(  98)					index5 = (c1 >= (int)192);
            				}
            				else {
HXDLIN(  98)					index5 = true;
            				}
HXDLIN(  98)				if (index5) {
HXDLIN(  98)					index4 = (int)1;
            				}
            				else {
HXDLIN(  98)					::String this6 = this4;
HXDLIN(  98)					if ((((int)this6.cca((index3 - (int)2)) & (int)(int)224) == (int)192)) {
HXDLIN(  98)						index4 = (int)2;
            					}
            					else {
HXDLIN(  98)						::String this7 = this4;
HXDLIN(  98)						if ((((int)this7.cca((index3 - (int)3)) & (int)(int)240) == (int)224)) {
HXDLIN(  98)							index4 = (int)3;
            						}
            						else {
HXDLIN(  98)							::String this8 = this4;
HXDLIN(  98)							if ((((int)this8.cca((index3 - (int)4)) & (int)(int)248) == (int)240)) {
HXDLIN(  98)								index4 = (int)4;
            							}
            							else {
HXDLIN(  98)								index4 = (int)1;
            							}
            						}
            					}
            				}
HXDLIN(  98)				index3 = (index3 - index4);
HXDLIN(  98)				count = (count + (int)1);
            			}
            			_hx_goto_11:;
HXDLIN(  98)			return index3;
            		}
HXDLIN(  98)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(InternalEncoding_obj,backwardOffsetByCodePoints,return )

::String InternalEncoding_obj::fromCodePoint(int codePoint){
            	HX_GC_STACKFRAME(&_hx_pos_78c95348db24522c_105_fromCodePoint)
HXDLIN( 105)		 ::haxe::io::BytesBuffer buf =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXDLIN( 105)		if ((codePoint <= (int)127)) {
HXDLIN( 105)			buf->b->push(codePoint);
            		}
            		else {
HXDLIN( 105)			if ((codePoint <= (int)2047)) {
HXDLIN( 105)				::Array< unsigned char > buf1 = buf->b;
HXDLIN( 105)				buf1->push(((int)(int)192 | (int)((int)codePoint >> (int)(int)6)));
HXDLIN( 105)				::Array< unsigned char > buf2 = buf->b;
HXDLIN( 105)				buf2->push(((int)(int)128 | (int)((int)codePoint & (int)(int)63)));
            			}
            			else {
HXDLIN( 105)				if ((codePoint <= (int)65535)) {
HXDLIN( 105)					::Array< unsigned char > buf3 = buf->b;
HXDLIN( 105)					buf3->push(((int)(int)224 | (int)((int)codePoint >> (int)(int)12)));
HXDLIN( 105)					::Array< unsigned char > buf4 = buf->b;
HXDLIN( 105)					buf4->push(((int)(int)128 | (int)((int)((int)codePoint >> (int)(int)6) & (int)(int)63)));
HXDLIN( 105)					::Array< unsigned char > buf5 = buf->b;
HXDLIN( 105)					buf5->push(((int)(int)128 | (int)((int)codePoint & (int)(int)63)));
            				}
            				else {
HXDLIN( 105)					if ((codePoint <= (int)1114111)) {
HXDLIN( 105)						::Array< unsigned char > buf6 = buf->b;
HXDLIN( 105)						buf6->push(((int)(int)240 | (int)((int)codePoint >> (int)(int)18)));
HXDLIN( 105)						::Array< unsigned char > buf7 = buf->b;
HXDLIN( 105)						buf7->push(((int)(int)128 | (int)((int)((int)codePoint >> (int)(int)12) & (int)(int)63)));
HXDLIN( 105)						::Array< unsigned char > buf8 = buf->b;
HXDLIN( 105)						buf8->push(((int)(int)128 | (int)((int)((int)codePoint >> (int)(int)6) & (int)(int)63)));
HXDLIN( 105)						::Array< unsigned char > buf9 = buf->b;
HXDLIN( 105)						buf9->push(((int)(int)128 | (int)((int)codePoint & (int)(int)63)));
            					}
            					else {
HXDLIN( 105)						HX_STACK_DO_THROW( ::lime::_internal::unifill::InvalidCodePoint_obj::__alloc( HX_CTX ,codePoint));
            					}
            				}
            			}
            		}
HXDLIN( 105)		::String this1 = buf->getBytes()->toString();
HXDLIN( 105)		::String this2 = this1;
HXDLIN( 105)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,fromCodePoint,return )

::String InternalEncoding_obj::fromCodePoints( ::Dynamic codePoints){
            	HX_GC_STACKFRAME(&_hx_pos_78c95348db24522c_112_fromCodePoints)
HXDLIN( 112)		 ::haxe::io::BytesBuffer buf =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXDLIN( 112)		{
HXDLIN( 112)			 ::Dynamic c = codePoints->__Field(HX_("iterator",ee,49,9a,93),hx::paccDynamic)();
HXDLIN( 112)			while(( (bool)(c->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXDLIN( 112)				int c1 = ( (int)(c->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXDLIN( 112)				if ((c1 <= (int)127)) {
HXDLIN( 112)					buf->b->push(c1);
            				}
            				else {
HXDLIN( 112)					if ((c1 <= (int)2047)) {
HXDLIN( 112)						::Array< unsigned char > buf1 = buf->b;
HXDLIN( 112)						buf1->push(((int)(int)192 | (int)((int)c1 >> (int)(int)6)));
HXDLIN( 112)						::Array< unsigned char > buf2 = buf->b;
HXDLIN( 112)						buf2->push(((int)(int)128 | (int)((int)c1 & (int)(int)63)));
            					}
            					else {
HXDLIN( 112)						if ((c1 <= (int)65535)) {
HXDLIN( 112)							::Array< unsigned char > buf3 = buf->b;
HXDLIN( 112)							buf3->push(((int)(int)224 | (int)((int)c1 >> (int)(int)12)));
HXDLIN( 112)							::Array< unsigned char > buf4 = buf->b;
HXDLIN( 112)							buf4->push(((int)(int)128 | (int)((int)((int)c1 >> (int)(int)6) & (int)(int)63)));
HXDLIN( 112)							::Array< unsigned char > buf5 = buf->b;
HXDLIN( 112)							buf5->push(((int)(int)128 | (int)((int)c1 & (int)(int)63)));
            						}
            						else {
HXDLIN( 112)							if ((c1 <= (int)1114111)) {
HXDLIN( 112)								::Array< unsigned char > buf6 = buf->b;
HXDLIN( 112)								buf6->push(((int)(int)240 | (int)((int)c1 >> (int)(int)18)));
HXDLIN( 112)								::Array< unsigned char > buf7 = buf->b;
HXDLIN( 112)								buf7->push(((int)(int)128 | (int)((int)((int)c1 >> (int)(int)12) & (int)(int)63)));
HXDLIN( 112)								::Array< unsigned char > buf8 = buf->b;
HXDLIN( 112)								buf8->push(((int)(int)128 | (int)((int)((int)c1 >> (int)(int)6) & (int)(int)63)));
HXDLIN( 112)								::Array< unsigned char > buf9 = buf->b;
HXDLIN( 112)								buf9->push(((int)(int)128 | (int)((int)c1 & (int)(int)63)));
            							}
            							else {
HXDLIN( 112)								HX_STACK_DO_THROW( ::lime::_internal::unifill::InvalidCodePoint_obj::__alloc( HX_CTX ,c1));
            							}
            						}
            					}
            				}
            			}
            		}
HXDLIN( 112)		::String this1 = buf->getBytes()->toString();
HXDLIN( 112)		::String this2 = this1;
HXDLIN( 112)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,fromCodePoints,return )

void InternalEncoding_obj::validate(::String s){
            	HX_STACKFRAME(&_hx_pos_78c95348db24522c_122_validate)
HXDLIN( 122)		::String this1 = s;
HXDLIN( 122)		::String this2 = this1;
HXDLIN( 122)		::lime::_internal::unifill::_Utf8::Utf8_Impl__obj::validate(this2);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,validate,(void))

bool InternalEncoding_obj::isValidString(::String s){
            	HX_STACKFRAME(&_hx_pos_78c95348db24522c_129_isValidString)
HXDLIN( 129)		try {
            			HX_STACK_CATCHABLE( ::lime::_internal::unifill::InvalidCodeUnitSequence, 0);
HXLINE( 130)			::String this1 = s;
HXDLIN( 130)			::String this2 = this1;
HXDLIN( 130)			::lime::_internal::unifill::_Utf8::Utf8_Impl__obj::validate(this2);
HXLINE( 131)			return true;
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::lime::_internal::unifill::InvalidCodeUnitSequence >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::lime::_internal::unifill::InvalidCodeUnitSequence e = _hx_e;
HXLINE( 133)				return false;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 129)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InternalEncoding_obj,isValidString,return )

void InternalEncoding_obj::encodeWith( ::Dynamic f,int c){
            	HX_GC_STACKFRAME(&_hx_pos_78c95348db24522c_138_encodeWith)
HXDLIN( 138)		if ((c <= (int)127)) {
HXDLIN( 138)			f(c);
            		}
            		else {
HXDLIN( 138)			if ((c <= (int)2047)) {
HXDLIN( 138)				f(((int)(int)192 | (int)((int)c >> (int)(int)6)));
HXDLIN( 138)				f(((int)(int)128 | (int)((int)c & (int)(int)63)));
            			}
            			else {
HXDLIN( 138)				if ((c <= (int)65535)) {
HXDLIN( 138)					f(((int)(int)224 | (int)((int)c >> (int)(int)12)));
HXDLIN( 138)					f(((int)(int)128 | (int)((int)((int)c >> (int)(int)6) & (int)(int)63)));
HXDLIN( 138)					f(((int)(int)128 | (int)((int)c & (int)(int)63)));
            				}
            				else {
HXDLIN( 138)					if ((c <= (int)1114111)) {
HXDLIN( 138)						f(((int)(int)240 | (int)((int)c >> (int)(int)18)));
HXDLIN( 138)						f(((int)(int)128 | (int)((int)((int)c >> (int)(int)12) & (int)(int)63)));
HXDLIN( 138)						f(((int)(int)128 | (int)((int)((int)c >> (int)(int)6) & (int)(int)63)));
HXDLIN( 138)						f(((int)(int)128 | (int)((int)c & (int)(int)63)));
            					}
            					else {
HXDLIN( 138)						HX_STACK_DO_THROW( ::lime::_internal::unifill::InvalidCodePoint_obj::__alloc( HX_CTX ,c));
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(InternalEncoding_obj,encodeWith,(void))


InternalEncoding_obj::InternalEncoding_obj()
{
}

bool InternalEncoding_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"charAt") ) { outValue = charAt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"validate") ) { outValue = validate_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"codeUnitAt") ) { outValue = codeUnitAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"encodeWith") ) { outValue = encodeWith_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"codePointAt") ) { outValue = codePointAt_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromCodePoint") ) { outValue = fromCodePoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isValidString") ) { outValue = isValidString_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"codePointCount") ) { outValue = codePointCount_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromCodePoints") ) { outValue = fromCodePoints_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"internalEncoding") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_internalEncoding() ); return true; } }
		if (HX_FIELD_EQ(inName,"codePointWidthAt") ) { outValue = codePointWidthAt_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"offsetByCodePoints") ) { outValue = offsetByCodePoints_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_internalEncoding") ) { outValue = get_internalEncoding_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"codePointWidthBefore") ) { outValue = codePointWidthBefore_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"backwardOffsetByCodePoints") ) { outValue = backwardOffsetByCodePoints_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *InternalEncoding_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *InternalEncoding_obj_sStaticStorageInfo = 0;
#endif

static void InternalEncoding_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InternalEncoding_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InternalEncoding_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InternalEncoding_obj::__mClass,"__mClass");
};

#endif

hx::Class InternalEncoding_obj::__mClass;

static ::String InternalEncoding_obj_sStaticFields[] = {
	HX_HCSTRING("get_internalEncoding","\x39","\x1a","\xb0","\x1b"),
	HX_HCSTRING("codeUnitAt","\xa4","\x71","\x4e","\x2b"),
	HX_HCSTRING("codePointAt","\xb6","\x47","\xf4","\x4b"),
	HX_HCSTRING("charAt","\x69","\x79","\x75","\xb7"),
	HX_HCSTRING("codePointCount","\xec","\x2d","\xd7","\x2e"),
	HX_HCSTRING("codePointWidthAt","\xf6","\x26","\x17","\x09"),
	HX_HCSTRING("codePointWidthBefore","\x02","\xe4","\x4d","\xc6"),
	HX_HCSTRING("offsetByCodePoints","\x1a","\xf8","\x61","\x6c"),
	HX_HCSTRING("backwardOffsetByCodePoints","\xdd","\xac","\xe8","\x97"),
	HX_HCSTRING("fromCodePoint","\x19","\x4d","\x4f","\xce"),
	HX_HCSTRING("fromCodePoints","\x3a","\x29","\x14","\xb7"),
	HX_HCSTRING("validate","\x96","\xd0","\xe3","\x04"),
	HX_HCSTRING("isValidString","\x23","\x47","\x91","\x43"),
	HX_HCSTRING("encodeWith","\x3c","\x57","\x67","\x04"),
	::String(null())
};

void InternalEncoding_obj::__register()
{
	hx::Object *dummy = new InternalEncoding_obj;
	InternalEncoding_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._internal.unifill.InternalEncoding","\x76","\xed","\xf6","\xbf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InternalEncoding_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InternalEncoding_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(InternalEncoding_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< InternalEncoding_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InternalEncoding_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InternalEncoding_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InternalEncoding_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace unifill