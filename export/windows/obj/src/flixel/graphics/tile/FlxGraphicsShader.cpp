// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_07f48bb0273dd92f_79_new,"flixel.graphics.tile.FlxGraphicsShader","new",0xac7b10a5,"flixel.graphics.tile.FlxGraphicsShader.new","flixel/graphics/tile/FlxGraphicsShader.hx",79,0x6817bd0c)
namespace flixel{
namespace graphics{
namespace tile{

void FlxGraphicsShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_07f48bb0273dd92f_79_new)
HXLINE( 202)		if (hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 202)			this->_hx___glFragmentSource = HX_("\r\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\t\t\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\r\n\t\tuniform bool hasTransform;\r\n\t\tuniform bool hasColorTransform;\r\n\r\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\r\n\t\t{\r\n\t\t\tvec4 color = texture2D(bitmap, coord);\r\n\t\t\tif (!hasTransform)\r\n\t\t\t\treturn color;\r\n\t\t\t\r\n\t\t\tif (color.a == 0.0)\r\n\t\t\t{\r\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\r\n\t\t\t}\r\n\t\t\telse if (hasColorTransform)\r\n\t\t\t{\r\n\t\t\t\tcolor = vec4(color.rgb / color.a, color.a);\r\n\t\t\t\t\r\n\t\t\t\tmat4 colorMultiplier = mat4(0);\r\n\t\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\r\n\t\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\r\n\t\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\r\n\t\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\r\n\t\t\t\t\r\n\t\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\r\n\t\t\t\t\r\n\t\t\t\tif (color.a > 0.0)\r\n\t\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\r\n\t\t\t\telse\r\n\t\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\r\n\t\t\t}\r\n\t\t\telse\r\n\t\t\t{\r\n\t\t\t\treturn color * openfl_Alphav;\r\n\t\t\t}\r\n\t\t}\r\n\t\r\n\t\t\r\n\t\tvoid main(void)\r\n\t\t{\r\n\t\t\tgl_FragColor = flixel_texture2D(bitmap, openfl_TextureCoordv);\r\n\t\t}",de,e1,02,15);
            		}
HXLINE( 201)		if (hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 201)			this->_hx___glVertexSource = HX_("\r\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\t\t\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\t\t\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\r\n\t\t\r\n\t\tattribute float alpha;\r\n\t\tattribute vec4 colorMultiplier;\r\n\t\tattribute vec4 colorOffset;\r\n\t\tuniform bool hasColorTransform;\r\n\t\t\r\n\t\tvoid main(void)\r\n\t\t{\r\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\t\t\n\t\tif (openfl_HasColorTransform) {\n\t\t\t\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\t\t\t\n\t\t}\n\t\t\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\r\n\t\t\t\r\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\r\n\t\t\t\r\n\t\t\tif (hasColorTransform)\r\n\t\t\t{\r\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\r\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\r\n\t\t\t}\r\n\t\t}",f0,11,4d,8b);
            		}
HXLINE(  80)		super::__construct(null());
HXLINE(   1)		this->_hx___isGenerated = true;
HXDLIN(   1)		this->_hx___initGL();
            	}

Dynamic FlxGraphicsShader_obj::__CreateEmpty() { return new FlxGraphicsShader_obj; }

void *FlxGraphicsShader_obj::_hx_vtable = 0;

Dynamic FlxGraphicsShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxGraphicsShader_obj > _hx_result = new FlxGraphicsShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxGraphicsShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x676ab1f7) {
		if (inClassId<=(int)0x52e18da9) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x52e18da9;
		} else {
			return inClassId==(int)0x676ab1f7;
		}
	} else {
		return inClassId==(int)0x7f21db8e;
	}
}


hx::ObjectPtr< FlxGraphicsShader_obj > FlxGraphicsShader_obj::__new() {
	hx::ObjectPtr< FlxGraphicsShader_obj > __this = new FlxGraphicsShader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxGraphicsShader_obj > FlxGraphicsShader_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxGraphicsShader_obj *__this = (FlxGraphicsShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxGraphicsShader_obj), true, "flixel.graphics.tile.FlxGraphicsShader"));
	*(void **)__this = FlxGraphicsShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxGraphicsShader_obj::FlxGraphicsShader_obj()
{
}

void FlxGraphicsShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGraphicsShader);
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(colorMultiplier,"colorMultiplier");
	HX_MARK_MEMBER_NAME(colorOffset,"colorOffset");
	HX_MARK_MEMBER_NAME(hasColorTransform,"hasColorTransform");
	HX_MARK_MEMBER_NAME(hasTransform,"hasTransform");
	 ::openfl::display::GraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGraphicsShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(colorMultiplier,"colorMultiplier");
	HX_VISIT_MEMBER_NAME(colorOffset,"colorOffset");
	HX_VISIT_MEMBER_NAME(hasColorTransform,"hasColorTransform");
	HX_VISIT_MEMBER_NAME(hasTransform,"hasTransform");
	 ::openfl::display::GraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxGraphicsShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return hx::Val( alpha ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorOffset") ) { return hx::Val( colorOffset ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasTransform") ) { return hx::Val( hasTransform ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colorMultiplier") ) { return hx::Val( colorMultiplier ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasColorTransform") ) { return hx::Val( hasColorTransform ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxGraphicsShader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorOffset") ) { colorOffset=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasTransform") ) { hasTransform=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"colorMultiplier") ) { colorMultiplier=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasColorTransform") ) { hasColorTransform=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGraphicsShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("colorMultiplier","\xc4","\x16","\x81","\x50"));
	outFields->push(HX_HCSTRING("colorOffset","\x56","\x29","\x68","\x1a"));
	outFields->push(HX_HCSTRING("hasColorTransform","\x83","\x14","\xeb","\xf0"));
	outFields->push(HX_HCSTRING("hasTransform","\xb2","\x12","\xe5","\xd2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxGraphicsShader_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(FlxGraphicsShader_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(FlxGraphicsShader_obj,colorMultiplier),HX_HCSTRING("colorMultiplier","\xc4","\x16","\x81","\x50")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(FlxGraphicsShader_obj,colorOffset),HX_HCSTRING("colorOffset","\x56","\x29","\x68","\x1a")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Bool*/ ,(int)offsetof(FlxGraphicsShader_obj,hasColorTransform),HX_HCSTRING("hasColorTransform","\x83","\x14","\xeb","\xf0")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Bool*/ ,(int)offsetof(FlxGraphicsShader_obj,hasTransform),HX_HCSTRING("hasTransform","\xb2","\x12","\xe5","\xd2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxGraphicsShader_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGraphicsShader_obj_sMemberFields[] = {
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("colorMultiplier","\xc4","\x16","\x81","\x50"),
	HX_HCSTRING("colorOffset","\x56","\x29","\x68","\x1a"),
	HX_HCSTRING("hasColorTransform","\x83","\x14","\xeb","\xf0"),
	HX_HCSTRING("hasTransform","\xb2","\x12","\xe5","\xd2"),
	::String(null()) };

static void FlxGraphicsShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGraphicsShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGraphicsShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGraphicsShader_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGraphicsShader_obj::__mClass;

void FlxGraphicsShader_obj::__register()
{
	hx::Object *dummy = new FlxGraphicsShader_obj;
	FlxGraphicsShader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.tile.FlxGraphicsShader","\x33","\xda","\xda","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxGraphicsShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxGraphicsShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGraphicsShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGraphicsShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGraphicsShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGraphicsShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile