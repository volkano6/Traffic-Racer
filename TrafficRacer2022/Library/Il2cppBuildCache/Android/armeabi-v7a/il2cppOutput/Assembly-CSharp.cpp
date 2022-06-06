#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.WheelCollider[]
struct WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CarController
struct CarController_tB945E8CD4EBA16BA6F4C8B4346292786701C9311;
// CarController3
struct CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityStandardAssets.ImageEffects.ContrastStretch
struct ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameOverManager
struct GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C;
// UnityStandardAssets.ImageEffects.GlobalFog
struct GlobalFog_tCE3BBEC5AC0BD36BA5D86A05EF4F13EB920736B0;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// Score
struct Score_tE07CBD9780DFC212BE43719819F512E8861103C7;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WheelCollider
struct WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779;
// awakeManager
struct awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8;
// cameraController
struct cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A;
// cameraLocation
struct cameraLocation_t3EC3772C068B74CC5D3BBD9279C54B5FB77E5D5B;
// collisionDedector
struct collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1;
// controller
struct controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54;
// createRandomCar
struct createRandomCar_t06A4B7418524980E16701545C2CB4E031D4FBB81;
// engineAudio
struct engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C;
// inputManager
struct inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0;
// scoreGameOverScript
struct scoreGameOverScript_tACB490D6DE568E034DA03DBE08CD95D44831E07C;
// selectVehicle
struct selectVehicle_t9ACACFACD3CB18C78E7BDF380903AE1729662881;
// wheelsManager
struct wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0770C8A4CE7977C0CF704EEA0FE098E008D76600;
IL2CPP_EXTERN_C String_t* _stringLiteral10E63F1449DDA0560E2408DA0E4E93F4C823F61C;
IL2CPP_EXTERN_C String_t* _stringLiteral1CCBC596DB1B94C94A9284599019AC779586C8EB;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B;
IL2CPP_EXTERN_C String_t* _stringLiteral2E804B550ACFEEAF6F65629A4F1291A7E641FEB6;
IL2CPP_EXTERN_C String_t* _stringLiteral35FAF5AC89B0748CF72542A4C62B04628796CE30;
IL2CPP_EXTERN_C String_t* _stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24;
IL2CPP_EXTERN_C String_t* _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral560291CC6D93F4F37B4AD9680EF9CED1F1C78FF3;
IL2CPP_EXTERN_C String_t* _stringLiteral5DD23313749133D170C856F9D3633969D8256275;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral867D450998537BC0893A5F264211DA389A275A29;
IL2CPP_EXTERN_C String_t* _stringLiteral86DA09E3D47F55392D45C6A2A615CD7BFBAAA16E;
IL2CPP_EXTERN_C String_t* _stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4;
IL2CPP_EXTERN_C String_t* _stringLiteral8CE33800B899A10909A01B30E9E15694DCDDF90C;
IL2CPP_EXTERN_C String_t* _stringLiteral8D7A68A77F2D4B8A06C9D5E1177B4692AB5D238C;
IL2CPP_EXTERN_C String_t* _stringLiteral8DD20966487EC866355E6EB9DBCD7D00F659C846;
IL2CPP_EXTERN_C String_t* _stringLiteral931BAE25A5BD232007405BEE05F4F858845D0039;
IL2CPP_EXTERN_C String_t* _stringLiteral96886DED2ECF1EA2B574F8C4F68D1873E78AFB44;
IL2CPP_EXTERN_C String_t* _stringLiteral98C0B88E4254B66039D7BF438EAED955B74E4689;
IL2CPP_EXTERN_C String_t* _stringLiteralA3553787EFC2C6E160706A9559EA0B8F86A01380;
IL2CPP_EXTERN_C String_t* _stringLiteralA6A16FA6FFFE7CF75CED271F9B06FD471503AB8C;
IL2CPP_EXTERN_C String_t* _stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15;
IL2CPP_EXTERN_C String_t* _stringLiteralBD213185DCEB47321CF747205D877BA8F2EA049F;
IL2CPP_EXTERN_C String_t* _stringLiteralC008E503687BA2A627379D4E257787AEA3506830;
IL2CPP_EXTERN_C String_t* _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCE997756AE28DA8CED1FA1160227AA74FACA2C68;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96;
IL2CPP_EXTERN_C String_t* _stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03;
IL2CPP_EXTERN_C String_t* _stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70;
IL2CPP_EXTERN_C String_t* _stringLiteralEEEE81DCC5079F69B7EB0ED499AACDFD6721FB38;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_Tiscontroller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54_mFD50AE304880E5B1E32F2EEB9F28B4D6BA3DFD52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisengineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C_m57FA825439EC46EE872B28424E82CEC911A96A51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisinputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0_m03AA252E29E814779C9A5B79643FF68CABFAB1C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TiswheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019_m2BA6E22DE79496436529A1E6926399BE2E8ABFF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m9E7C96FA7A236064DAC29DC964FF207E0E47D06A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tiscontroller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54_m74CB0ADA70BC05BBF5E8DAD36ED6CB681D731524_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;

struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WheelFrictionCurve
struct WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D 
{
public:
	// System.Single UnityEngine.WheelFrictionCurve::m_ExtremumSlip
	float ___m_ExtremumSlip_0;
	// System.Single UnityEngine.WheelFrictionCurve::m_ExtremumValue
	float ___m_ExtremumValue_1;
	// System.Single UnityEngine.WheelFrictionCurve::m_AsymptoteSlip
	float ___m_AsymptoteSlip_2;
	// System.Single UnityEngine.WheelFrictionCurve::m_AsymptoteValue
	float ___m_AsymptoteValue_3;
	// System.Single UnityEngine.WheelFrictionCurve::m_Stiffness
	float ___m_Stiffness_4;

public:
	inline static int32_t get_offset_of_m_ExtremumSlip_0() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_ExtremumSlip_0)); }
	inline float get_m_ExtremumSlip_0() const { return ___m_ExtremumSlip_0; }
	inline float* get_address_of_m_ExtremumSlip_0() { return &___m_ExtremumSlip_0; }
	inline void set_m_ExtremumSlip_0(float value)
	{
		___m_ExtremumSlip_0 = value;
	}

	inline static int32_t get_offset_of_m_ExtremumValue_1() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_ExtremumValue_1)); }
	inline float get_m_ExtremumValue_1() const { return ___m_ExtremumValue_1; }
	inline float* get_address_of_m_ExtremumValue_1() { return &___m_ExtremumValue_1; }
	inline void set_m_ExtremumValue_1(float value)
	{
		___m_ExtremumValue_1 = value;
	}

	inline static int32_t get_offset_of_m_AsymptoteSlip_2() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_AsymptoteSlip_2)); }
	inline float get_m_AsymptoteSlip_2() const { return ___m_AsymptoteSlip_2; }
	inline float* get_address_of_m_AsymptoteSlip_2() { return &___m_AsymptoteSlip_2; }
	inline void set_m_AsymptoteSlip_2(float value)
	{
		___m_AsymptoteSlip_2 = value;
	}

	inline static int32_t get_offset_of_m_AsymptoteValue_3() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_AsymptoteValue_3)); }
	inline float get_m_AsymptoteValue_3() const { return ___m_AsymptoteValue_3; }
	inline float* get_address_of_m_AsymptoteValue_3() { return &___m_AsymptoteValue_3; }
	inline void set_m_AsymptoteValue_3(float value)
	{
		___m_AsymptoteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_Stiffness_4() { return static_cast<int32_t>(offsetof(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D, ___m_Stiffness_4)); }
	inline float get_m_Stiffness_4() const { return ___m_Stiffness_4; }
	inline float* get_address_of_m_Stiffness_4() { return &___m_Stiffness_4; }
	inline void set_m_Stiffness_4(float value)
	{
		___m_Stiffness_4 = value;
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66__padding[16];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57
	__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  ___BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0;

public:
	inline static int32_t get_offset_of_BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0)); }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  get_BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0() const { return ___BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0; }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 * get_address_of_BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0() { return &___BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0; }
	inline void set_BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0(__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  value)
	{
		___BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0 = value;
	}
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.DepthTextureMode
struct DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthTextureMode_t4A8E08C41731918FB0D7CA5C6848E3864A0DC09A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.FogMode
struct FogMode_t49BDC7B0759867ADADCA5FA01D1B7FC5B37EEDE4 
{
public:
	// System.Int32 UnityEngine.FogMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FogMode_t49BDC7B0759867ADADCA5FA01D1B7FC5B37EEDE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HideFlags
struct HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RenderTextureFormat
struct RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626 
{
public:
	// System.Int32 UnityEngine.RenderTextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderTextureFormat_t8371287102ED67772EF78229CF4AB9D38C2CD626, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.WheelHit
struct WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB 
{
public:
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_ForwardDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_ForwardDir_2;
	// UnityEngine.Vector3 UnityEngine.WheelHit::m_SidewaysDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_SidewaysDir_3;
	// System.Single UnityEngine.WheelHit::m_Force
	float ___m_Force_4;
	// System.Single UnityEngine.WheelHit::m_ForwardSlip
	float ___m_ForwardSlip_5;
	// System.Single UnityEngine.WheelHit::m_SidewaysSlip
	float ___m_SidewaysSlip_6;
	// UnityEngine.Collider UnityEngine.WheelHit::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_7;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ForwardDir_2() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_ForwardDir_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_ForwardDir_2() const { return ___m_ForwardDir_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_ForwardDir_2() { return &___m_ForwardDir_2; }
	inline void set_m_ForwardDir_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_ForwardDir_2 = value;
	}

	inline static int32_t get_offset_of_m_SidewaysDir_3() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_SidewaysDir_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_SidewaysDir_3() const { return ___m_SidewaysDir_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_SidewaysDir_3() { return &___m_SidewaysDir_3; }
	inline void set_m_SidewaysDir_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_SidewaysDir_3 = value;
	}

	inline static int32_t get_offset_of_m_Force_4() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_Force_4)); }
	inline float get_m_Force_4() const { return ___m_Force_4; }
	inline float* get_address_of_m_Force_4() { return &___m_Force_4; }
	inline void set_m_Force_4(float value)
	{
		___m_Force_4 = value;
	}

	inline static int32_t get_offset_of_m_ForwardSlip_5() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_ForwardSlip_5)); }
	inline float get_m_ForwardSlip_5() const { return ___m_ForwardSlip_5; }
	inline float* get_address_of_m_ForwardSlip_5() { return &___m_ForwardSlip_5; }
	inline void set_m_ForwardSlip_5(float value)
	{
		___m_ForwardSlip_5 = value;
	}

	inline static int32_t get_offset_of_m_SidewaysSlip_6() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_SidewaysSlip_6)); }
	inline float get_m_SidewaysSlip_6() const { return ___m_SidewaysSlip_6; }
	inline float* get_address_of_m_SidewaysSlip_6() { return &___m_SidewaysSlip_6; }
	inline void set_m_SidewaysSlip_6(float value)
	{
		___m_SidewaysSlip_6 = value;
	}

	inline static int32_t get_offset_of_m_Collider_7() { return static_cast<int32_t>(offsetof(WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB, ___m_Collider_7)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_7() const { return ___m_Collider_7; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_7() { return &___m_Collider_7; }
	inline void set_m_Collider_7(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WheelHit
struct WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_ForwardDir_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_SidewaysDir_3;
	float ___m_Force_4;
	float ___m_ForwardSlip_5;
	float ___m_SidewaysSlip_6;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_7;
};
// Native definition for COM marshalling of UnityEngine.WheelHit
struct WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_ForwardDir_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_SidewaysDir_3;
	float ___m_Force_4;
	float ___m_ForwardSlip_5;
	float ___m_SidewaysSlip_6;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_7;
};

// controller/driveType
struct driveType_tE04978FFE32B156A38ABF43CB0D36C1A83BB760F 
{
public:
	// System.Int32 controller/driveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(driveType_tE04978FFE32B156A38ABF43CB0D36C1A83BB760F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.WheelCollider
struct WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// CarController
struct CarController_tB945E8CD4EBA16BA6F4C8B4346292786701C9311  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CarController::mainCar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mainCar_4;
	// UnityEngine.Rigidbody CarController::car
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___car_5;
	// System.Single CarController::velocity
	float ___velocity_6;

public:
	inline static int32_t get_offset_of_mainCar_4() { return static_cast<int32_t>(offsetof(CarController_tB945E8CD4EBA16BA6F4C8B4346292786701C9311, ___mainCar_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mainCar_4() const { return ___mainCar_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mainCar_4() { return &___mainCar_4; }
	inline void set_mainCar_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mainCar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCar_4), (void*)value);
	}

	inline static int32_t get_offset_of_car_5() { return static_cast<int32_t>(offsetof(CarController_tB945E8CD4EBA16BA6F4C8B4346292786701C9311, ___car_5)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_car_5() const { return ___car_5; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_car_5() { return &___car_5; }
	inline void set_car_5(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___car_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___car_5), (void*)value);
	}

	inline static int32_t get_offset_of_velocity_6() { return static_cast<int32_t>(offsetof(CarController_tB945E8CD4EBA16BA6F4C8B4346292786701C9311, ___velocity_6)); }
	inline float get_velocity_6() const { return ___velocity_6; }
	inline float* get_address_of_velocity_6() { return &___velocity_6; }
	inline void set_velocity_6(float value)
	{
		___velocity_6 = value;
	}
};


// CarController3
struct CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CarController3::enginePower
	float ___enginePower_4;
	// System.Single CarController3::speed
	float ___speed_5;
	// System.Single CarController3::power
	float ___power_6;
	// System.Single CarController3::brake
	float ___brake_7;
	// System.Single CarController3::steer
	float ___steer_8;
	// System.Single CarController3::maxSteer
	float ___maxSteer_9;
	// System.Single CarController3::centerOfMass_x
	float ___centerOfMass_x_10;
	// System.Single CarController3::centerOfMass_y
	float ___centerOfMass_y_11;
	// System.Single CarController3::centerOfMass_z
	float ___centerOfMass_z_12;
	// UnityEngine.WheelCollider CarController3::Wheel_LF
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * ___Wheel_LF_13;
	// UnityEngine.WheelCollider CarController3::Wheel_RF
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * ___Wheel_RF_14;
	// UnityEngine.WheelCollider CarController3::Wheel_LR
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * ___Wheel_LR_15;
	// UnityEngine.WheelCollider CarController3::Wheel_RR
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * ___Wheel_RR_16;
	// UnityEngine.GameObject CarController3::Wheel_LF_obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Wheel_LF_obj_17;
	// UnityEngine.GameObject CarController3::Wheel_RF_obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Wheel_RF_obj_18;
	// UnityEngine.Vector3 CarController3::turnLeft
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___turnLeft_19;
	// UnityEngine.Vector3 CarController3::turnRight
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___turnRight_20;
	// System.Boolean CarController3::press?ngGas
	bool ___pressU131ngGas_21;
	// System.Boolean CarController3::press?ngBrake
	bool ___pressU131ngBrake_22;
	// System.Boolean CarController3::press?ngRight
	bool ___pressU131ngRight_23;
	// System.Boolean CarController3::press?ngLeft
	bool ___pressU131ngLeft_24;

public:
	inline static int32_t get_offset_of_enginePower_4() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___enginePower_4)); }
	inline float get_enginePower_4() const { return ___enginePower_4; }
	inline float* get_address_of_enginePower_4() { return &___enginePower_4; }
	inline void set_enginePower_4(float value)
	{
		___enginePower_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_power_6() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___power_6)); }
	inline float get_power_6() const { return ___power_6; }
	inline float* get_address_of_power_6() { return &___power_6; }
	inline void set_power_6(float value)
	{
		___power_6 = value;
	}

	inline static int32_t get_offset_of_brake_7() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___brake_7)); }
	inline float get_brake_7() const { return ___brake_7; }
	inline float* get_address_of_brake_7() { return &___brake_7; }
	inline void set_brake_7(float value)
	{
		___brake_7 = value;
	}

	inline static int32_t get_offset_of_steer_8() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___steer_8)); }
	inline float get_steer_8() const { return ___steer_8; }
	inline float* get_address_of_steer_8() { return &___steer_8; }
	inline void set_steer_8(float value)
	{
		___steer_8 = value;
	}

	inline static int32_t get_offset_of_maxSteer_9() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___maxSteer_9)); }
	inline float get_maxSteer_9() const { return ___maxSteer_9; }
	inline float* get_address_of_maxSteer_9() { return &___maxSteer_9; }
	inline void set_maxSteer_9(float value)
	{
		___maxSteer_9 = value;
	}

	inline static int32_t get_offset_of_centerOfMass_x_10() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___centerOfMass_x_10)); }
	inline float get_centerOfMass_x_10() const { return ___centerOfMass_x_10; }
	inline float* get_address_of_centerOfMass_x_10() { return &___centerOfMass_x_10; }
	inline void set_centerOfMass_x_10(float value)
	{
		___centerOfMass_x_10 = value;
	}

	inline static int32_t get_offset_of_centerOfMass_y_11() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___centerOfMass_y_11)); }
	inline float get_centerOfMass_y_11() const { return ___centerOfMass_y_11; }
	inline float* get_address_of_centerOfMass_y_11() { return &___centerOfMass_y_11; }
	inline void set_centerOfMass_y_11(float value)
	{
		___centerOfMass_y_11 = value;
	}

	inline static int32_t get_offset_of_centerOfMass_z_12() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___centerOfMass_z_12)); }
	inline float get_centerOfMass_z_12() const { return ___centerOfMass_z_12; }
	inline float* get_address_of_centerOfMass_z_12() { return &___centerOfMass_z_12; }
	inline void set_centerOfMass_z_12(float value)
	{
		___centerOfMass_z_12 = value;
	}

	inline static int32_t get_offset_of_Wheel_LF_13() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___Wheel_LF_13)); }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * get_Wheel_LF_13() const { return ___Wheel_LF_13; }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** get_address_of_Wheel_LF_13() { return &___Wheel_LF_13; }
	inline void set_Wheel_LF_13(WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		___Wheel_LF_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wheel_LF_13), (void*)value);
	}

	inline static int32_t get_offset_of_Wheel_RF_14() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___Wheel_RF_14)); }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * get_Wheel_RF_14() const { return ___Wheel_RF_14; }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** get_address_of_Wheel_RF_14() { return &___Wheel_RF_14; }
	inline void set_Wheel_RF_14(WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		___Wheel_RF_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wheel_RF_14), (void*)value);
	}

	inline static int32_t get_offset_of_Wheel_LR_15() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___Wheel_LR_15)); }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * get_Wheel_LR_15() const { return ___Wheel_LR_15; }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** get_address_of_Wheel_LR_15() { return &___Wheel_LR_15; }
	inline void set_Wheel_LR_15(WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		___Wheel_LR_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wheel_LR_15), (void*)value);
	}

	inline static int32_t get_offset_of_Wheel_RR_16() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___Wheel_RR_16)); }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * get_Wheel_RR_16() const { return ___Wheel_RR_16; }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** get_address_of_Wheel_RR_16() { return &___Wheel_RR_16; }
	inline void set_Wheel_RR_16(WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		___Wheel_RR_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wheel_RR_16), (void*)value);
	}

	inline static int32_t get_offset_of_Wheel_LF_obj_17() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___Wheel_LF_obj_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Wheel_LF_obj_17() const { return ___Wheel_LF_obj_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Wheel_LF_obj_17() { return &___Wheel_LF_obj_17; }
	inline void set_Wheel_LF_obj_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Wheel_LF_obj_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wheel_LF_obj_17), (void*)value);
	}

	inline static int32_t get_offset_of_Wheel_RF_obj_18() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___Wheel_RF_obj_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Wheel_RF_obj_18() const { return ___Wheel_RF_obj_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Wheel_RF_obj_18() { return &___Wheel_RF_obj_18; }
	inline void set_Wheel_RF_obj_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Wheel_RF_obj_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wheel_RF_obj_18), (void*)value);
	}

	inline static int32_t get_offset_of_turnLeft_19() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___turnLeft_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_turnLeft_19() const { return ___turnLeft_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_turnLeft_19() { return &___turnLeft_19; }
	inline void set_turnLeft_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___turnLeft_19 = value;
	}

	inline static int32_t get_offset_of_turnRight_20() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___turnRight_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_turnRight_20() const { return ___turnRight_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_turnRight_20() { return &___turnRight_20; }
	inline void set_turnRight_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___turnRight_20 = value;
	}

	inline static int32_t get_offset_of_pressU131ngGas_21() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___pressU131ngGas_21)); }
	inline bool get_pressU131ngGas_21() const { return ___pressU131ngGas_21; }
	inline bool* get_address_of_pressU131ngGas_21() { return &___pressU131ngGas_21; }
	inline void set_pressU131ngGas_21(bool value)
	{
		___pressU131ngGas_21 = value;
	}

	inline static int32_t get_offset_of_pressU131ngBrake_22() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___pressU131ngBrake_22)); }
	inline bool get_pressU131ngBrake_22() const { return ___pressU131ngBrake_22; }
	inline bool* get_address_of_pressU131ngBrake_22() { return &___pressU131ngBrake_22; }
	inline void set_pressU131ngBrake_22(bool value)
	{
		___pressU131ngBrake_22 = value;
	}

	inline static int32_t get_offset_of_pressU131ngRight_23() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___pressU131ngRight_23)); }
	inline bool get_pressU131ngRight_23() const { return ___pressU131ngRight_23; }
	inline bool* get_address_of_pressU131ngRight_23() { return &___pressU131ngRight_23; }
	inline void set_pressU131ngRight_23(bool value)
	{
		___pressU131ngRight_23 = value;
	}

	inline static int32_t get_offset_of_pressU131ngLeft_24() { return static_cast<int32_t>(offsetof(CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B, ___pressU131ngLeft_24)); }
	inline bool get_pressU131ngLeft_24() const { return ___pressU131ngLeft_24; }
	inline bool* get_address_of_pressU131ngLeft_24() { return &___pressU131ngLeft_24; }
	inline void set_pressU131ngLeft_24(bool value)
	{
		___pressU131ngLeft_24 = value;
	}
};


// UnityStandardAssets.ImageEffects.ContrastStretch
struct ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::adaptationSpeed
	float ___adaptationSpeed_4;
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::limitMinimum
	float ___limitMinimum_5;
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::limitMaximum
	float ___limitMaximum_6;
	// UnityEngine.RenderTexture[] UnityStandardAssets.ImageEffects.ContrastStretch::adaptRenderTex
	RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* ___adaptRenderTex_7;
	// System.Int32 UnityStandardAssets.ImageEffects.ContrastStretch::curAdaptIndex
	int32_t ___curAdaptIndex_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderLum
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shaderLum_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialLum
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_materialLum_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderReduce
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shaderReduce_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialReduce
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_materialReduce_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderAdapt
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shaderAdapt_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialAdapt
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_materialAdapt_14;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderApply
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shaderApply_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialApply
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_materialApply_16;

public:
	inline static int32_t get_offset_of_adaptationSpeed_4() { return static_cast<int32_t>(offsetof(ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16, ___adaptationSpeed_4)); }
	inline float get_adaptationSpeed_4() const { return ___adaptationSpeed_4; }
	inline float* get_address_of_adaptationSpeed_4() { return &___adaptationSpeed_4; }
	inline void set_adaptationSpeed_4(float value)
	{
		___adaptationSpeed_4 = value;
	}

	inline static int32_t get_offset_of_limitMinimum_5() { return static_cast<int32_t>(offsetof(ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16, ___limitMinimum_5)); }
	inline float get_limitMinimum_5() const { return ___limitMinimum_5; }
	inline float* get_address_of_limitMinimum_5() { return &___limitMinimum_5; }
	inline void set_limitMinimum_5(float value)
	{
		___limitMinimum_5 = value;
	}

	inline static int32_t get_offset_of_limitMaximum_6() { return static_cast<int32_t>(offsetof(ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16, ___limitMaximum_6)); }
	inline float get_limitMaximum_6() const { return ___limitMaximum_6; }
	inline float* get_address_of_limitMaximum_6() { return &___limitMaximum_6; }
	inline void set_limitMaximum_6(float value)
	{
		___limitMaximum_6 = value;
	}

	inline static int32_t get_offset_of_adaptRenderTex_7() { return static_cast<int32_t>(offsetof(ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16, ___adaptRenderTex_7)); }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* get_adaptRenderTex_7() const { return ___adaptRenderTex_7; }
	inline RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E** get_address_of_adaptRenderTex_7() { return &___adaptRenderTex_7; }
	inline void set_adaptRenderTex_7(RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* value)
	{
		___adaptRenderTex_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adaptRenderTex_7), (void*)value);
	}

	inline static int32_t get_offset_of_curAdaptIndex_8() { return static_cast<int32_t>(offsetof(ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16, ___curAdaptIndex_8)); }
	inline int32_t get_curAdaptIndex_8() const { return ___curAdaptIndex_8; }
	inline int32_t* get_address_of_curAdaptIndex_8() { return &___curAdaptIndex_8; }
	inline void set_curAdaptIndex_8(int32_t value)
	{
		___curAdaptIndex_8 = value;
	}

	inline static int32_t get_offset_of_shaderLum_9() { return static_cast<int32_t>(offsetof(ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16, ___shaderLum_9)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_shaderLum_9() const { return ___shaderLum_9; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_shaderLum_9() { return &___shaderLum_9; }
	inline void set_shaderLum_9(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___shaderLum_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shaderLum_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialLum_10() { return static_cast<int32_t>(offsetof(ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16, ___m_materialLum_10)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_materialLum_10() const { return ___m_materialLum_10; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_materialLum_10() { return &___m_materialLum_10; }
	inline void set_m_materialLum_10(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_materialLum_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialLum_10), (void*)value);
	}

	inline static int32_t get_offset_of_shaderReduce_11() { return static_cast<int32_t>(offsetof(ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16, ___shaderReduce_11)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_shaderReduce_11() const { return ___shaderReduce_11; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_shaderReduce_11() { return &___shaderReduce_11; }
	inline void set_shaderReduce_11(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___shaderReduce_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shaderReduce_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReduce_12() { return static_cast<int32_t>(offsetof(ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16, ___m_materialReduce_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_materialReduce_12() const { return ___m_materialReduce_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_materialReduce_12() { return &___m_materialReduce_12; }
	inline void set_m_materialReduce_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_materialReduce_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReduce_12), (void*)value);
	}

	inline static int32_t get_offset_of_shaderAdapt_13() { return static_cast<int32_t>(offsetof(ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16, ___shaderAdapt_13)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_shaderAdapt_13() const { return ___shaderAdapt_13; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_shaderAdapt_13() { return &___shaderAdapt_13; }
	inline void set_shaderAdapt_13(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___shaderAdapt_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shaderAdapt_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialAdapt_14() { return static_cast<int32_t>(offsetof(ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16, ___m_materialAdapt_14)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_materialAdapt_14() const { return ___m_materialAdapt_14; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_materialAdapt_14() { return &___m_materialAdapt_14; }
	inline void set_m_materialAdapt_14(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_materialAdapt_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialAdapt_14), (void*)value);
	}

	inline static int32_t get_offset_of_shaderApply_15() { return static_cast<int32_t>(offsetof(ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16, ___shaderApply_15)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_shaderApply_15() const { return ___shaderApply_15; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_shaderApply_15() { return &___shaderApply_15; }
	inline void set_shaderApply_15(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___shaderApply_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shaderApply_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialApply_16() { return static_cast<int32_t>(offsetof(ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16, ___m_materialApply_16)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_materialApply_16() const { return ___m_materialApply_16; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_materialApply_16() { return &___m_materialApply_16; }
	inline void set_m_materialApply_16(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_materialApply_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialApply_16), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameManager::activeCar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___activeCar_4;
	// UnityEngine.GameObject GameManager::car
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___car_5;
	// UnityEngine.GameObject GameManager::car1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___car1_6;
	// UnityEngine.GameObject GameManager::car2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___car2_7;
	// UnityEngine.GameObject GameManager::car3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___car3_8;
	// System.Single GameManager::score
	float ___score_9;

public:
	inline static int32_t get_offset_of_activeCar_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___activeCar_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_activeCar_4() const { return ___activeCar_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_activeCar_4() { return &___activeCar_4; }
	inline void set_activeCar_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___activeCar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeCar_4), (void*)value);
	}

	inline static int32_t get_offset_of_car_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___car_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_car_5() const { return ___car_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_car_5() { return &___car_5; }
	inline void set_car_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___car_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___car_5), (void*)value);
	}

	inline static int32_t get_offset_of_car1_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___car1_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_car1_6() const { return ___car1_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_car1_6() { return &___car1_6; }
	inline void set_car1_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___car1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___car1_6), (void*)value);
	}

	inline static int32_t get_offset_of_car2_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___car2_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_car2_7() const { return ___car2_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_car2_7() { return &___car2_7; }
	inline void set_car2_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___car2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___car2_7), (void*)value);
	}

	inline static int32_t get_offset_of_car3_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___car3_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_car3_8() const { return ___car3_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_car3_8() { return &___car3_8; }
	inline void set_car3_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___car3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___car3_8), (void*)value);
	}

	inline static int32_t get_offset_of_score_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___score_9)); }
	inline float get_score_9() const { return ___score_9; }
	inline float* get_address_of_score_9() { return &___score_9; }
	inline void set_score_9(float value)
	{
		___score_9 = value;
	}
};


// GameOverManager
struct GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportHDRTextures
	bool ___supportHDRTextures_4;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::supportDX11
	bool ___supportDX11_5;
	// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::isSupported
	bool ___isSupported_6;

public:
	inline static int32_t get_offset_of_supportHDRTextures_4() { return static_cast<int32_t>(offsetof(PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E, ___supportHDRTextures_4)); }
	inline bool get_supportHDRTextures_4() const { return ___supportHDRTextures_4; }
	inline bool* get_address_of_supportHDRTextures_4() { return &___supportHDRTextures_4; }
	inline void set_supportHDRTextures_4(bool value)
	{
		___supportHDRTextures_4 = value;
	}

	inline static int32_t get_offset_of_supportDX11_5() { return static_cast<int32_t>(offsetof(PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E, ___supportDX11_5)); }
	inline bool get_supportDX11_5() const { return ___supportDX11_5; }
	inline bool* get_address_of_supportDX11_5() { return &___supportDX11_5; }
	inline void set_supportDX11_5(bool value)
	{
		___supportDX11_5 = value;
	}

	inline static int32_t get_offset_of_isSupported_6() { return static_cast<int32_t>(offsetof(PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E, ___isSupported_6)); }
	inline bool get_isSupported_6() const { return ___isSupported_6; }
	inline bool* get_address_of_isSupported_6() { return &___isSupported_6; }
	inline void set_isSupported_6(bool value)
	{
		___isSupported_6 = value;
	}
};


// Score
struct Score_tE07CBD9780DFC212BE43719819F512E8861103C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager Score::gm
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gm_4;
	// UnityEngine.GameObject Score::scoretext
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scoretext_5;
	// UnityEngine.UI.Text Score::score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___score_6;

public:
	inline static int32_t get_offset_of_gm_4() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___gm_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gm_4() const { return ___gm_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gm_4() { return &___gm_4; }
	inline void set_gm_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gm_4), (void*)value);
	}

	inline static int32_t get_offset_of_scoretext_5() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___scoretext_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_scoretext_5() const { return ___scoretext_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_scoretext_5() { return &___scoretext_5; }
	inline void set_scoretext_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___scoretext_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoretext_5), (void*)value);
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(Score_tE07CBD9780DFC212BE43719819F512E8861103C7, ___score_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_score_6() const { return ___score_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___score_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___score_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// awakeManager
struct awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject awakeManager::selectedCar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___selectedCar_4;
	// UnityEngine.GameObject awakeManager::toRotate
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___toRotate_5;
	// UnityEngine.GameObject awakeManager::car
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___car_6;
	// UnityEngine.GameObject awakeManager::car1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___car1_7;
	// UnityEngine.GameObject awakeManager::car2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___car2_8;
	// UnityEngine.GameObject awakeManager::car3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___car3_9;
	// UnityEngine.Vector3 awakeManager::shown_position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___shown_position_10;
	// UnityEngine.Vector3 awakeManager::cars_rotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cars_rotation_11;
	// UnityEngine.Vector3 awakeManager::car_position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___car_position_12;
	// UnityEngine.Vector3 awakeManager::car1_position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___car1_position_13;
	// UnityEngine.Vector3 awakeManager::car2_position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___car2_position_14;
	// UnityEngine.Vector3 awakeManager::car3_position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___car3_position_15;
	// System.Single awakeManager::rotateSpeed
	float ___rotateSpeed_16;
	// System.Int32 awakeManager::currentCarNum
	int32_t ___currentCarNum_17;
	// System.Int32 awakeManager::previousCarNum
	int32_t ___previousCarNum_18;

public:
	inline static int32_t get_offset_of_selectedCar_4() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___selectedCar_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_selectedCar_4() const { return ___selectedCar_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_selectedCar_4() { return &___selectedCar_4; }
	inline void set_selectedCar_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___selectedCar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selectedCar_4), (void*)value);
	}

	inline static int32_t get_offset_of_toRotate_5() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___toRotate_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_toRotate_5() const { return ___toRotate_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_toRotate_5() { return &___toRotate_5; }
	inline void set_toRotate_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___toRotate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toRotate_5), (void*)value);
	}

	inline static int32_t get_offset_of_car_6() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___car_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_car_6() const { return ___car_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_car_6() { return &___car_6; }
	inline void set_car_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___car_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___car_6), (void*)value);
	}

	inline static int32_t get_offset_of_car1_7() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___car1_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_car1_7() const { return ___car1_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_car1_7() { return &___car1_7; }
	inline void set_car1_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___car1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___car1_7), (void*)value);
	}

	inline static int32_t get_offset_of_car2_8() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___car2_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_car2_8() const { return ___car2_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_car2_8() { return &___car2_8; }
	inline void set_car2_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___car2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___car2_8), (void*)value);
	}

	inline static int32_t get_offset_of_car3_9() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___car3_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_car3_9() const { return ___car3_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_car3_9() { return &___car3_9; }
	inline void set_car3_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___car3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___car3_9), (void*)value);
	}

	inline static int32_t get_offset_of_shown_position_10() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___shown_position_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_shown_position_10() const { return ___shown_position_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_shown_position_10() { return &___shown_position_10; }
	inline void set_shown_position_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___shown_position_10 = value;
	}

	inline static int32_t get_offset_of_cars_rotation_11() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___cars_rotation_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_cars_rotation_11() const { return ___cars_rotation_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_cars_rotation_11() { return &___cars_rotation_11; }
	inline void set_cars_rotation_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___cars_rotation_11 = value;
	}

	inline static int32_t get_offset_of_car_position_12() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___car_position_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_car_position_12() const { return ___car_position_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_car_position_12() { return &___car_position_12; }
	inline void set_car_position_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___car_position_12 = value;
	}

	inline static int32_t get_offset_of_car1_position_13() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___car1_position_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_car1_position_13() const { return ___car1_position_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_car1_position_13() { return &___car1_position_13; }
	inline void set_car1_position_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___car1_position_13 = value;
	}

	inline static int32_t get_offset_of_car2_position_14() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___car2_position_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_car2_position_14() const { return ___car2_position_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_car2_position_14() { return &___car2_position_14; }
	inline void set_car2_position_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___car2_position_14 = value;
	}

	inline static int32_t get_offset_of_car3_position_15() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___car3_position_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_car3_position_15() const { return ___car3_position_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_car3_position_15() { return &___car3_position_15; }
	inline void set_car3_position_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___car3_position_15 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_16() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___rotateSpeed_16)); }
	inline float get_rotateSpeed_16() const { return ___rotateSpeed_16; }
	inline float* get_address_of_rotateSpeed_16() { return &___rotateSpeed_16; }
	inline void set_rotateSpeed_16(float value)
	{
		___rotateSpeed_16 = value;
	}

	inline static int32_t get_offset_of_currentCarNum_17() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___currentCarNum_17)); }
	inline int32_t get_currentCarNum_17() const { return ___currentCarNum_17; }
	inline int32_t* get_address_of_currentCarNum_17() { return &___currentCarNum_17; }
	inline void set_currentCarNum_17(int32_t value)
	{
		___currentCarNum_17 = value;
	}

	inline static int32_t get_offset_of_previousCarNum_18() { return static_cast<int32_t>(offsetof(awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8, ___previousCarNum_18)); }
	inline int32_t get_previousCarNum_18() const { return ___previousCarNum_18; }
	inline int32_t* get_address_of_previousCarNum_18() { return &___previousCarNum_18; }
	inline void set_previousCarNum_18(int32_t value)
	{
		___previousCarNum_18 = value;
	}
};


// cameraController
struct cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single cameraController::fieldOfView
	float ___fieldOfView_4;
	// UnityEngine.GameObject cameraController::atachedVehicle
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___atachedVehicle_5;
	// System.Int32 cameraController::locationIndicator
	int32_t ___locationIndicator_6;
	// controller cameraController::controllerRef
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * ___controllerRef_7;
	// UnityEngine.Camera cameraController::camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera_8;
	// System.Single cameraController::bias
	float ___bias_9;
	// System.Single cameraController::smoothTime
	float ___smoothTime_10;
	// System.Single cameraController::smoothTimemin
	float ___smoothTimemin_11;
	// System.Single cameraController::max
	float ___max_12;
	// UnityEngine.Vector3 cameraController::newPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newPos_13;
	// UnityEngine.Transform cameraController::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_14;
	// System.Single cameraController::bandEffect
	float ___bandEffect_15;
	// UnityEngine.Vector2[] cameraController::cameraPos
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___cameraPos_16;

public:
	inline static int32_t get_offset_of_fieldOfView_4() { return static_cast<int32_t>(offsetof(cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A, ___fieldOfView_4)); }
	inline float get_fieldOfView_4() const { return ___fieldOfView_4; }
	inline float* get_address_of_fieldOfView_4() { return &___fieldOfView_4; }
	inline void set_fieldOfView_4(float value)
	{
		___fieldOfView_4 = value;
	}

	inline static int32_t get_offset_of_atachedVehicle_5() { return static_cast<int32_t>(offsetof(cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A, ___atachedVehicle_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_atachedVehicle_5() const { return ___atachedVehicle_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_atachedVehicle_5() { return &___atachedVehicle_5; }
	inline void set_atachedVehicle_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___atachedVehicle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___atachedVehicle_5), (void*)value);
	}

	inline static int32_t get_offset_of_locationIndicator_6() { return static_cast<int32_t>(offsetof(cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A, ___locationIndicator_6)); }
	inline int32_t get_locationIndicator_6() const { return ___locationIndicator_6; }
	inline int32_t* get_address_of_locationIndicator_6() { return &___locationIndicator_6; }
	inline void set_locationIndicator_6(int32_t value)
	{
		___locationIndicator_6 = value;
	}

	inline static int32_t get_offset_of_controllerRef_7() { return static_cast<int32_t>(offsetof(cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A, ___controllerRef_7)); }
	inline controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * get_controllerRef_7() const { return ___controllerRef_7; }
	inline controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 ** get_address_of_controllerRef_7() { return &___controllerRef_7; }
	inline void set_controllerRef_7(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * value)
	{
		___controllerRef_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerRef_7), (void*)value);
	}

	inline static int32_t get_offset_of_camera_8() { return static_cast<int32_t>(offsetof(cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A, ___camera_8)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_camera_8() const { return ___camera_8; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_camera_8() { return &___camera_8; }
	inline void set_camera_8(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___camera_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_8), (void*)value);
	}

	inline static int32_t get_offset_of_bias_9() { return static_cast<int32_t>(offsetof(cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A, ___bias_9)); }
	inline float get_bias_9() const { return ___bias_9; }
	inline float* get_address_of_bias_9() { return &___bias_9; }
	inline void set_bias_9(float value)
	{
		___bias_9 = value;
	}

	inline static int32_t get_offset_of_smoothTime_10() { return static_cast<int32_t>(offsetof(cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A, ___smoothTime_10)); }
	inline float get_smoothTime_10() const { return ___smoothTime_10; }
	inline float* get_address_of_smoothTime_10() { return &___smoothTime_10; }
	inline void set_smoothTime_10(float value)
	{
		___smoothTime_10 = value;
	}

	inline static int32_t get_offset_of_smoothTimemin_11() { return static_cast<int32_t>(offsetof(cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A, ___smoothTimemin_11)); }
	inline float get_smoothTimemin_11() const { return ___smoothTimemin_11; }
	inline float* get_address_of_smoothTimemin_11() { return &___smoothTimemin_11; }
	inline void set_smoothTimemin_11(float value)
	{
		___smoothTimemin_11 = value;
	}

	inline static int32_t get_offset_of_max_12() { return static_cast<int32_t>(offsetof(cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A, ___max_12)); }
	inline float get_max_12() const { return ___max_12; }
	inline float* get_address_of_max_12() { return &___max_12; }
	inline void set_max_12(float value)
	{
		___max_12 = value;
	}

	inline static int32_t get_offset_of_newPos_13() { return static_cast<int32_t>(offsetof(cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A, ___newPos_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_newPos_13() const { return ___newPos_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_newPos_13() { return &___newPos_13; }
	inline void set_newPos_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___newPos_13 = value;
	}

	inline static int32_t get_offset_of_target_14() { return static_cast<int32_t>(offsetof(cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A, ___target_14)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_14() const { return ___target_14; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_14() { return &___target_14; }
	inline void set_target_14(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_14), (void*)value);
	}

	inline static int32_t get_offset_of_bandEffect_15() { return static_cast<int32_t>(offsetof(cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A, ___bandEffect_15)); }
	inline float get_bandEffect_15() const { return ___bandEffect_15; }
	inline float* get_address_of_bandEffect_15() { return &___bandEffect_15; }
	inline void set_bandEffect_15(float value)
	{
		___bandEffect_15 = value;
	}

	inline static int32_t get_offset_of_cameraPos_16() { return static_cast<int32_t>(offsetof(cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A, ___cameraPos_16)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_cameraPos_16() const { return ___cameraPos_16; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_cameraPos_16() { return &___cameraPos_16; }
	inline void set_cameraPos_16(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___cameraPos_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraPos_16), (void*)value);
	}
};


// cameraLocation
struct cameraLocation_t3EC3772C068B74CC5D3BBD9279C54B5FB77E5D5B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject cameraLocation::road
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___road_4;
	// GameManager cameraLocation::game_manager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___game_manager_5;

public:
	inline static int32_t get_offset_of_road_4() { return static_cast<int32_t>(offsetof(cameraLocation_t3EC3772C068B74CC5D3BBD9279C54B5FB77E5D5B, ___road_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_road_4() const { return ___road_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_road_4() { return &___road_4; }
	inline void set_road_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___road_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___road_4), (void*)value);
	}

	inline static int32_t get_offset_of_game_manager_5() { return static_cast<int32_t>(offsetof(cameraLocation_t3EC3772C068B74CC5D3BBD9279C54B5FB77E5D5B, ___game_manager_5)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_game_manager_5() const { return ___game_manager_5; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_game_manager_5() { return &___game_manager_5; }
	inline void set_game_manager_5(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___game_manager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___game_manager_5), (void*)value);
	}
};


// collisionDedector
struct collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager collisionDedector::game_manager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___game_manager_4;
	// UnityEngine.GameObject collisionDedector::road
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___road_5;
	// UnityEngine.GameObject collisionDedector::mainCar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mainCar_6;
	// UnityEngine.Vector3 collisionDedector::newRoadPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newRoadPosition_7;
	// UnityEngine.GameObject collisionDedector::newCar0
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___newCar0_8;
	// UnityEngine.GameObject collisionDedector::newCar1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___newCar1_9;
	// UnityEngine.GameObject collisionDedector::newCar2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___newCar2_10;
	// UnityEngine.GameObject collisionDedector::newCar3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___newCar3_11;
	// UnityEngine.Vector3 collisionDedector::newCarRoadPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newCarRoadPosition_12;
	// UnityEngine.Vector3 collisionDedector::secondNewCarRoadPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___secondNewCarRoadPosition_13;
	// UnityEngine.Vector3 collisionDedector::thirdNewCarRoadPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___thirdNewCarRoadPosition_14;

public:
	inline static int32_t get_offset_of_game_manager_4() { return static_cast<int32_t>(offsetof(collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1, ___game_manager_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_game_manager_4() const { return ___game_manager_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_game_manager_4() { return &___game_manager_4; }
	inline void set_game_manager_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___game_manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___game_manager_4), (void*)value);
	}

	inline static int32_t get_offset_of_road_5() { return static_cast<int32_t>(offsetof(collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1, ___road_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_road_5() const { return ___road_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_road_5() { return &___road_5; }
	inline void set_road_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___road_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___road_5), (void*)value);
	}

	inline static int32_t get_offset_of_mainCar_6() { return static_cast<int32_t>(offsetof(collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1, ___mainCar_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mainCar_6() const { return ___mainCar_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mainCar_6() { return &___mainCar_6; }
	inline void set_mainCar_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mainCar_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCar_6), (void*)value);
	}

	inline static int32_t get_offset_of_newRoadPosition_7() { return static_cast<int32_t>(offsetof(collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1, ___newRoadPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_newRoadPosition_7() const { return ___newRoadPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_newRoadPosition_7() { return &___newRoadPosition_7; }
	inline void set_newRoadPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___newRoadPosition_7 = value;
	}

	inline static int32_t get_offset_of_newCar0_8() { return static_cast<int32_t>(offsetof(collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1, ___newCar0_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_newCar0_8() const { return ___newCar0_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_newCar0_8() { return &___newCar0_8; }
	inline void set_newCar0_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___newCar0_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newCar0_8), (void*)value);
	}

	inline static int32_t get_offset_of_newCar1_9() { return static_cast<int32_t>(offsetof(collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1, ___newCar1_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_newCar1_9() const { return ___newCar1_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_newCar1_9() { return &___newCar1_9; }
	inline void set_newCar1_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___newCar1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newCar1_9), (void*)value);
	}

	inline static int32_t get_offset_of_newCar2_10() { return static_cast<int32_t>(offsetof(collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1, ___newCar2_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_newCar2_10() const { return ___newCar2_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_newCar2_10() { return &___newCar2_10; }
	inline void set_newCar2_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___newCar2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newCar2_10), (void*)value);
	}

	inline static int32_t get_offset_of_newCar3_11() { return static_cast<int32_t>(offsetof(collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1, ___newCar3_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_newCar3_11() const { return ___newCar3_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_newCar3_11() { return &___newCar3_11; }
	inline void set_newCar3_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___newCar3_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newCar3_11), (void*)value);
	}

	inline static int32_t get_offset_of_newCarRoadPosition_12() { return static_cast<int32_t>(offsetof(collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1, ___newCarRoadPosition_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_newCarRoadPosition_12() const { return ___newCarRoadPosition_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_newCarRoadPosition_12() { return &___newCarRoadPosition_12; }
	inline void set_newCarRoadPosition_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___newCarRoadPosition_12 = value;
	}

	inline static int32_t get_offset_of_secondNewCarRoadPosition_13() { return static_cast<int32_t>(offsetof(collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1, ___secondNewCarRoadPosition_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_secondNewCarRoadPosition_13() const { return ___secondNewCarRoadPosition_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_secondNewCarRoadPosition_13() { return &___secondNewCarRoadPosition_13; }
	inline void set_secondNewCarRoadPosition_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___secondNewCarRoadPosition_13 = value;
	}

	inline static int32_t get_offset_of_thirdNewCarRoadPosition_14() { return static_cast<int32_t>(offsetof(collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1, ___thirdNewCarRoadPosition_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_thirdNewCarRoadPosition_14() const { return ___thirdNewCarRoadPosition_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_thirdNewCarRoadPosition_14() { return &___thirdNewCarRoadPosition_14; }
	inline void set_thirdNewCarRoadPosition_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___thirdNewCarRoadPosition_14 = value;
	}
};


// controller
struct controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// controller/driveType controller::drive
	int32_t ___drive_4;
	// engineAudio controller::audio
	engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * ___audio_5;
	// inputManager controller::IM
	inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * ___IM_6;
	// wheelsManager controller::wheelsmanager
	wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * ___wheelsmanager_7;
	// UnityEngine.WheelFrictionCurve controller::forwardFriction
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___forwardFriction_8;
	// UnityEngine.WheelFrictionCurve controller::sidewaysFriction
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___sidewaysFriction_9;
	// UnityEngine.Rigidbody controller::rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigidbody_10;
	// UnityEngine.WheelCollider[] controller::wheels
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* ___wheels_11;
	// UnityEngine.GameObject controller::centerOfMass
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___centerOfMass_12;
	// UnityEngine.AnimationCurve controller::enginePower
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___enginePower_13;
	// UnityEngine.Material controller::brakeLights
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___brakeLights_14;
	// System.Boolean controller::isAutomatic
	bool ___isAutomatic_15;
	// System.Single controller::maxRPM
	float ___maxRPM_16;
	// System.Single controller::minRPM
	float ___minRPM_17;
	// System.Single controller::finalDrive
	float ___finalDrive_18;
	// System.Single[] controller::gears
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___gears_19;
	// System.Single controller::DownForceValue
	float ___DownForceValue_20;
	// System.Single controller::dragAmount
	float ___dragAmount_21;
	// System.Single controller::EngineSmoothTime
	float ___EngineSmoothTime_22;
	// System.Single controller::ForwardStifness
	float ___ForwardStifness_23;
	// System.Single controller::SidewaysStifness
	float ___SidewaysStifness_24;
	// System.Single controller::KPH
	float ___KPH_25;
	// System.Int32 controller::gearNum
	int32_t ___gearNum_26;
	// System.Single controller::engineRPM
	float ___engineRPM_27;
	// System.Single controller::totalPower
	float ___totalPower_28;
	// System.Single[] controller::wheelSlip
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___wheelSlip_29;
	// System.Single controller::finalTurnAngle
	float ___finalTurnAngle_30;
	// System.Single controller::radius
	float ___radius_31;
	// System.Single controller::wheelsRPM
	float ___wheelsRPM_32;
	// System.Single controller::horizontal
	float ___horizontal_33;
	// System.Single controller::acceleration
	float ___acceleration_34;
	// System.Single controller::vertical
	float ___vertical_35;
	// System.Single controller::downforce
	float ___downforce_36;
	// System.Single controller::gearChangeRate
	float ___gearChangeRate_37;
	// System.Single controller::brakPower
	float ___brakPower_38;
	// System.Single controller::engineLerpValue
	float ___engineLerpValue_39;
	// System.Single controller::engineLoad
	float ___engineLoad_40;
	// System.Boolean controller::reverse
	bool ___reverse_41;
	// System.Boolean controller::lightsFlag
	bool ___lightsFlag_42;
	// System.Boolean controller::grounded
	bool ___grounded_43;
	// System.Boolean controller::engineLerp
	bool ___engineLerp_44;
	// System.String controller::s
	String_t* ___s_45;

public:
	inline static int32_t get_offset_of_drive_4() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___drive_4)); }
	inline int32_t get_drive_4() const { return ___drive_4; }
	inline int32_t* get_address_of_drive_4() { return &___drive_4; }
	inline void set_drive_4(int32_t value)
	{
		___drive_4 = value;
	}

	inline static int32_t get_offset_of_audio_5() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___audio_5)); }
	inline engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * get_audio_5() const { return ___audio_5; }
	inline engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C ** get_address_of_audio_5() { return &___audio_5; }
	inline void set_audio_5(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * value)
	{
		___audio_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audio_5), (void*)value);
	}

	inline static int32_t get_offset_of_IM_6() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___IM_6)); }
	inline inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * get_IM_6() const { return ___IM_6; }
	inline inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 ** get_address_of_IM_6() { return &___IM_6; }
	inline void set_IM_6(inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * value)
	{
		___IM_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IM_6), (void*)value);
	}

	inline static int32_t get_offset_of_wheelsmanager_7() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___wheelsmanager_7)); }
	inline wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * get_wheelsmanager_7() const { return ___wheelsmanager_7; }
	inline wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 ** get_address_of_wheelsmanager_7() { return &___wheelsmanager_7; }
	inline void set_wheelsmanager_7(wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * value)
	{
		___wheelsmanager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wheelsmanager_7), (void*)value);
	}

	inline static int32_t get_offset_of_forwardFriction_8() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___forwardFriction_8)); }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  get_forwardFriction_8() const { return ___forwardFriction_8; }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * get_address_of_forwardFriction_8() { return &___forwardFriction_8; }
	inline void set_forwardFriction_8(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  value)
	{
		___forwardFriction_8 = value;
	}

	inline static int32_t get_offset_of_sidewaysFriction_9() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___sidewaysFriction_9)); }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  get_sidewaysFriction_9() const { return ___sidewaysFriction_9; }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * get_address_of_sidewaysFriction_9() { return &___sidewaysFriction_9; }
	inline void set_sidewaysFriction_9(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  value)
	{
		___sidewaysFriction_9 = value;
	}

	inline static int32_t get_offset_of_rigidbody_10() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___rigidbody_10)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigidbody_10() const { return ___rigidbody_10; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigidbody_10() { return &___rigidbody_10; }
	inline void set_rigidbody_10(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigidbody_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidbody_10), (void*)value);
	}

	inline static int32_t get_offset_of_wheels_11() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___wheels_11)); }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* get_wheels_11() const { return ___wheels_11; }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6** get_address_of_wheels_11() { return &___wheels_11; }
	inline void set_wheels_11(WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* value)
	{
		___wheels_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wheels_11), (void*)value);
	}

	inline static int32_t get_offset_of_centerOfMass_12() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___centerOfMass_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_centerOfMass_12() const { return ___centerOfMass_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_centerOfMass_12() { return &___centerOfMass_12; }
	inline void set_centerOfMass_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___centerOfMass_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___centerOfMass_12), (void*)value);
	}

	inline static int32_t get_offset_of_enginePower_13() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___enginePower_13)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_enginePower_13() const { return ___enginePower_13; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_enginePower_13() { return &___enginePower_13; }
	inline void set_enginePower_13(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___enginePower_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enginePower_13), (void*)value);
	}

	inline static int32_t get_offset_of_brakeLights_14() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___brakeLights_14)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_brakeLights_14() const { return ___brakeLights_14; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_brakeLights_14() { return &___brakeLights_14; }
	inline void set_brakeLights_14(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___brakeLights_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brakeLights_14), (void*)value);
	}

	inline static int32_t get_offset_of_isAutomatic_15() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___isAutomatic_15)); }
	inline bool get_isAutomatic_15() const { return ___isAutomatic_15; }
	inline bool* get_address_of_isAutomatic_15() { return &___isAutomatic_15; }
	inline void set_isAutomatic_15(bool value)
	{
		___isAutomatic_15 = value;
	}

	inline static int32_t get_offset_of_maxRPM_16() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___maxRPM_16)); }
	inline float get_maxRPM_16() const { return ___maxRPM_16; }
	inline float* get_address_of_maxRPM_16() { return &___maxRPM_16; }
	inline void set_maxRPM_16(float value)
	{
		___maxRPM_16 = value;
	}

	inline static int32_t get_offset_of_minRPM_17() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___minRPM_17)); }
	inline float get_minRPM_17() const { return ___minRPM_17; }
	inline float* get_address_of_minRPM_17() { return &___minRPM_17; }
	inline void set_minRPM_17(float value)
	{
		___minRPM_17 = value;
	}

	inline static int32_t get_offset_of_finalDrive_18() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___finalDrive_18)); }
	inline float get_finalDrive_18() const { return ___finalDrive_18; }
	inline float* get_address_of_finalDrive_18() { return &___finalDrive_18; }
	inline void set_finalDrive_18(float value)
	{
		___finalDrive_18 = value;
	}

	inline static int32_t get_offset_of_gears_19() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___gears_19)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_gears_19() const { return ___gears_19; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_gears_19() { return &___gears_19; }
	inline void set_gears_19(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___gears_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gears_19), (void*)value);
	}

	inline static int32_t get_offset_of_DownForceValue_20() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___DownForceValue_20)); }
	inline float get_DownForceValue_20() const { return ___DownForceValue_20; }
	inline float* get_address_of_DownForceValue_20() { return &___DownForceValue_20; }
	inline void set_DownForceValue_20(float value)
	{
		___DownForceValue_20 = value;
	}

	inline static int32_t get_offset_of_dragAmount_21() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___dragAmount_21)); }
	inline float get_dragAmount_21() const { return ___dragAmount_21; }
	inline float* get_address_of_dragAmount_21() { return &___dragAmount_21; }
	inline void set_dragAmount_21(float value)
	{
		___dragAmount_21 = value;
	}

	inline static int32_t get_offset_of_EngineSmoothTime_22() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___EngineSmoothTime_22)); }
	inline float get_EngineSmoothTime_22() const { return ___EngineSmoothTime_22; }
	inline float* get_address_of_EngineSmoothTime_22() { return &___EngineSmoothTime_22; }
	inline void set_EngineSmoothTime_22(float value)
	{
		___EngineSmoothTime_22 = value;
	}

	inline static int32_t get_offset_of_ForwardStifness_23() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___ForwardStifness_23)); }
	inline float get_ForwardStifness_23() const { return ___ForwardStifness_23; }
	inline float* get_address_of_ForwardStifness_23() { return &___ForwardStifness_23; }
	inline void set_ForwardStifness_23(float value)
	{
		___ForwardStifness_23 = value;
	}

	inline static int32_t get_offset_of_SidewaysStifness_24() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___SidewaysStifness_24)); }
	inline float get_SidewaysStifness_24() const { return ___SidewaysStifness_24; }
	inline float* get_address_of_SidewaysStifness_24() { return &___SidewaysStifness_24; }
	inline void set_SidewaysStifness_24(float value)
	{
		___SidewaysStifness_24 = value;
	}

	inline static int32_t get_offset_of_KPH_25() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___KPH_25)); }
	inline float get_KPH_25() const { return ___KPH_25; }
	inline float* get_address_of_KPH_25() { return &___KPH_25; }
	inline void set_KPH_25(float value)
	{
		___KPH_25 = value;
	}

	inline static int32_t get_offset_of_gearNum_26() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___gearNum_26)); }
	inline int32_t get_gearNum_26() const { return ___gearNum_26; }
	inline int32_t* get_address_of_gearNum_26() { return &___gearNum_26; }
	inline void set_gearNum_26(int32_t value)
	{
		___gearNum_26 = value;
	}

	inline static int32_t get_offset_of_engineRPM_27() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___engineRPM_27)); }
	inline float get_engineRPM_27() const { return ___engineRPM_27; }
	inline float* get_address_of_engineRPM_27() { return &___engineRPM_27; }
	inline void set_engineRPM_27(float value)
	{
		___engineRPM_27 = value;
	}

	inline static int32_t get_offset_of_totalPower_28() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___totalPower_28)); }
	inline float get_totalPower_28() const { return ___totalPower_28; }
	inline float* get_address_of_totalPower_28() { return &___totalPower_28; }
	inline void set_totalPower_28(float value)
	{
		___totalPower_28 = value;
	}

	inline static int32_t get_offset_of_wheelSlip_29() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___wheelSlip_29)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_wheelSlip_29() const { return ___wheelSlip_29; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_wheelSlip_29() { return &___wheelSlip_29; }
	inline void set_wheelSlip_29(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___wheelSlip_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wheelSlip_29), (void*)value);
	}

	inline static int32_t get_offset_of_finalTurnAngle_30() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___finalTurnAngle_30)); }
	inline float get_finalTurnAngle_30() const { return ___finalTurnAngle_30; }
	inline float* get_address_of_finalTurnAngle_30() { return &___finalTurnAngle_30; }
	inline void set_finalTurnAngle_30(float value)
	{
		___finalTurnAngle_30 = value;
	}

	inline static int32_t get_offset_of_radius_31() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___radius_31)); }
	inline float get_radius_31() const { return ___radius_31; }
	inline float* get_address_of_radius_31() { return &___radius_31; }
	inline void set_radius_31(float value)
	{
		___radius_31 = value;
	}

	inline static int32_t get_offset_of_wheelsRPM_32() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___wheelsRPM_32)); }
	inline float get_wheelsRPM_32() const { return ___wheelsRPM_32; }
	inline float* get_address_of_wheelsRPM_32() { return &___wheelsRPM_32; }
	inline void set_wheelsRPM_32(float value)
	{
		___wheelsRPM_32 = value;
	}

	inline static int32_t get_offset_of_horizontal_33() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___horizontal_33)); }
	inline float get_horizontal_33() const { return ___horizontal_33; }
	inline float* get_address_of_horizontal_33() { return &___horizontal_33; }
	inline void set_horizontal_33(float value)
	{
		___horizontal_33 = value;
	}

	inline static int32_t get_offset_of_acceleration_34() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___acceleration_34)); }
	inline float get_acceleration_34() const { return ___acceleration_34; }
	inline float* get_address_of_acceleration_34() { return &___acceleration_34; }
	inline void set_acceleration_34(float value)
	{
		___acceleration_34 = value;
	}

	inline static int32_t get_offset_of_vertical_35() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___vertical_35)); }
	inline float get_vertical_35() const { return ___vertical_35; }
	inline float* get_address_of_vertical_35() { return &___vertical_35; }
	inline void set_vertical_35(float value)
	{
		___vertical_35 = value;
	}

	inline static int32_t get_offset_of_downforce_36() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___downforce_36)); }
	inline float get_downforce_36() const { return ___downforce_36; }
	inline float* get_address_of_downforce_36() { return &___downforce_36; }
	inline void set_downforce_36(float value)
	{
		___downforce_36 = value;
	}

	inline static int32_t get_offset_of_gearChangeRate_37() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___gearChangeRate_37)); }
	inline float get_gearChangeRate_37() const { return ___gearChangeRate_37; }
	inline float* get_address_of_gearChangeRate_37() { return &___gearChangeRate_37; }
	inline void set_gearChangeRate_37(float value)
	{
		___gearChangeRate_37 = value;
	}

	inline static int32_t get_offset_of_brakPower_38() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___brakPower_38)); }
	inline float get_brakPower_38() const { return ___brakPower_38; }
	inline float* get_address_of_brakPower_38() { return &___brakPower_38; }
	inline void set_brakPower_38(float value)
	{
		___brakPower_38 = value;
	}

	inline static int32_t get_offset_of_engineLerpValue_39() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___engineLerpValue_39)); }
	inline float get_engineLerpValue_39() const { return ___engineLerpValue_39; }
	inline float* get_address_of_engineLerpValue_39() { return &___engineLerpValue_39; }
	inline void set_engineLerpValue_39(float value)
	{
		___engineLerpValue_39 = value;
	}

	inline static int32_t get_offset_of_engineLoad_40() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___engineLoad_40)); }
	inline float get_engineLoad_40() const { return ___engineLoad_40; }
	inline float* get_address_of_engineLoad_40() { return &___engineLoad_40; }
	inline void set_engineLoad_40(float value)
	{
		___engineLoad_40 = value;
	}

	inline static int32_t get_offset_of_reverse_41() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___reverse_41)); }
	inline bool get_reverse_41() const { return ___reverse_41; }
	inline bool* get_address_of_reverse_41() { return &___reverse_41; }
	inline void set_reverse_41(bool value)
	{
		___reverse_41 = value;
	}

	inline static int32_t get_offset_of_lightsFlag_42() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___lightsFlag_42)); }
	inline bool get_lightsFlag_42() const { return ___lightsFlag_42; }
	inline bool* get_address_of_lightsFlag_42() { return &___lightsFlag_42; }
	inline void set_lightsFlag_42(bool value)
	{
		___lightsFlag_42 = value;
	}

	inline static int32_t get_offset_of_grounded_43() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___grounded_43)); }
	inline bool get_grounded_43() const { return ___grounded_43; }
	inline bool* get_address_of_grounded_43() { return &___grounded_43; }
	inline void set_grounded_43(bool value)
	{
		___grounded_43 = value;
	}

	inline static int32_t get_offset_of_engineLerp_44() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___engineLerp_44)); }
	inline bool get_engineLerp_44() const { return ___engineLerp_44; }
	inline bool* get_address_of_engineLerp_44() { return &___engineLerp_44; }
	inline void set_engineLerp_44(bool value)
	{
		___engineLerp_44 = value;
	}

	inline static int32_t get_offset_of_s_45() { return static_cast<int32_t>(offsetof(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54, ___s_45)); }
	inline String_t* get_s_45() const { return ___s_45; }
	inline String_t** get_address_of_s_45() { return &___s_45; }
	inline void set_s_45(String_t* value)
	{
		___s_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_45), (void*)value);
	}
};


// createRandomCar
struct createRandomCar_t06A4B7418524980E16701545C2CB4E031D4FBB81  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject createRandomCar::newCar0
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___newCar0_4;
	// UnityEngine.GameObject createRandomCar::newCar1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___newCar1_5;
	// UnityEngine.GameObject createRandomCar::newCar2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___newCar2_6;
	// UnityEngine.GameObject createRandomCar::newCar3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___newCar3_7;
	// UnityEngine.Vector3 createRandomCar::newRoadPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newRoadPosition_8;

public:
	inline static int32_t get_offset_of_newCar0_4() { return static_cast<int32_t>(offsetof(createRandomCar_t06A4B7418524980E16701545C2CB4E031D4FBB81, ___newCar0_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_newCar0_4() const { return ___newCar0_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_newCar0_4() { return &___newCar0_4; }
	inline void set_newCar0_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___newCar0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newCar0_4), (void*)value);
	}

	inline static int32_t get_offset_of_newCar1_5() { return static_cast<int32_t>(offsetof(createRandomCar_t06A4B7418524980E16701545C2CB4E031D4FBB81, ___newCar1_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_newCar1_5() const { return ___newCar1_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_newCar1_5() { return &___newCar1_5; }
	inline void set_newCar1_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___newCar1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newCar1_5), (void*)value);
	}

	inline static int32_t get_offset_of_newCar2_6() { return static_cast<int32_t>(offsetof(createRandomCar_t06A4B7418524980E16701545C2CB4E031D4FBB81, ___newCar2_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_newCar2_6() const { return ___newCar2_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_newCar2_6() { return &___newCar2_6; }
	inline void set_newCar2_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___newCar2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newCar2_6), (void*)value);
	}

	inline static int32_t get_offset_of_newCar3_7() { return static_cast<int32_t>(offsetof(createRandomCar_t06A4B7418524980E16701545C2CB4E031D4FBB81, ___newCar3_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_newCar3_7() const { return ___newCar3_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_newCar3_7() { return &___newCar3_7; }
	inline void set_newCar3_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___newCar3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newCar3_7), (void*)value);
	}

	inline static int32_t get_offset_of_newRoadPosition_8() { return static_cast<int32_t>(offsetof(createRandomCar_t06A4B7418524980E16701545C2CB4E031D4FBB81, ___newRoadPosition_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_newRoadPosition_8() const { return ___newRoadPosition_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_newRoadPosition_8() { return &___newRoadPosition_8; }
	inline void set_newRoadPosition_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___newRoadPosition_8 = value;
	}
};


// engineAudio
struct engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip engineAudio::lowAccelClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___lowAccelClip_4;
	// UnityEngine.AudioClip engineAudio::lowDecelClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___lowDecelClip_5;
	// UnityEngine.AudioClip engineAudio::highAccelClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___highAccelClip_6;
	// UnityEngine.AudioClip engineAudio::highDecelClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___highDecelClip_7;
	// UnityEngine.AudioClip engineAudio::Turbo
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Turbo_8;
	// System.Single engineAudio::turboVolume
	float ___turboVolume_9;
	// UnityEngine.AudioClip engineAudio::downShift
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___downShift_10;
	// System.Single engineAudio::downShiftVolume
	float ___downShiftVolume_11;
	// System.Single engineAudio::Pitch
	float ___Pitch_12;
	// System.Single engineAudio::lowPitchMin
	float ___lowPitchMin_13;
	// System.Single engineAudio::lowPitchMax
	float ___lowPitchMax_14;
	// System.Single engineAudio::highPitchMultiplier
	float ___highPitchMultiplier_15;
	// System.Single engineAudio::accFade
	float ___accFade_16;
	// System.Single engineAudio::acceleration
	float ___acceleration_17;
	// System.Single engineAudio::maxRolloffDistance
	float ___maxRolloffDistance_18;
	// UnityEngine.AudioSource engineAudio::m_LowAccel
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___m_LowAccel_19;
	// UnityEngine.AudioSource engineAudio::m_LowDecel
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___m_LowDecel_20;
	// UnityEngine.AudioSource engineAudio::m_HighAccel
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___m_HighAccel_21;
	// UnityEngine.AudioSource engineAudio::m_HighDecel
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___m_HighDecel_22;
	// UnityEngine.AudioSource engineAudio::m_Turbo
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___m_Turbo_23;
	// UnityEngine.AudioSource engineAudio::m_downShift
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___m_downShift_24;
	// System.Boolean engineAudio::m_StartedSound
	bool ___m_StartedSound_25;
	// System.Single engineAudio::totalPower
	float ___totalPower_26;
	// System.Single engineAudio::engineRPM
	float ___engineRPM_27;
	// System.Single engineAudio::maxRPM
	float ___maxRPM_28;
	// System.Boolean engineAudio::engineLerp
	bool ___engineLerp_29;
	// UnityEngine.GameObject engineAudio::audioObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___audioObject_30;

public:
	inline static int32_t get_offset_of_lowAccelClip_4() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___lowAccelClip_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_lowAccelClip_4() const { return ___lowAccelClip_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_lowAccelClip_4() { return &___lowAccelClip_4; }
	inline void set_lowAccelClip_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___lowAccelClip_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lowAccelClip_4), (void*)value);
	}

	inline static int32_t get_offset_of_lowDecelClip_5() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___lowDecelClip_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_lowDecelClip_5() const { return ___lowDecelClip_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_lowDecelClip_5() { return &___lowDecelClip_5; }
	inline void set_lowDecelClip_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___lowDecelClip_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lowDecelClip_5), (void*)value);
	}

	inline static int32_t get_offset_of_highAccelClip_6() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___highAccelClip_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_highAccelClip_6() const { return ___highAccelClip_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_highAccelClip_6() { return &___highAccelClip_6; }
	inline void set_highAccelClip_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___highAccelClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highAccelClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_highDecelClip_7() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___highDecelClip_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_highDecelClip_7() const { return ___highDecelClip_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_highDecelClip_7() { return &___highDecelClip_7; }
	inline void set_highDecelClip_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___highDecelClip_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highDecelClip_7), (void*)value);
	}

	inline static int32_t get_offset_of_Turbo_8() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___Turbo_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Turbo_8() const { return ___Turbo_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Turbo_8() { return &___Turbo_8; }
	inline void set_Turbo_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Turbo_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Turbo_8), (void*)value);
	}

	inline static int32_t get_offset_of_turboVolume_9() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___turboVolume_9)); }
	inline float get_turboVolume_9() const { return ___turboVolume_9; }
	inline float* get_address_of_turboVolume_9() { return &___turboVolume_9; }
	inline void set_turboVolume_9(float value)
	{
		___turboVolume_9 = value;
	}

	inline static int32_t get_offset_of_downShift_10() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___downShift_10)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_downShift_10() const { return ___downShift_10; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_downShift_10() { return &___downShift_10; }
	inline void set_downShift_10(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___downShift_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___downShift_10), (void*)value);
	}

	inline static int32_t get_offset_of_downShiftVolume_11() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___downShiftVolume_11)); }
	inline float get_downShiftVolume_11() const { return ___downShiftVolume_11; }
	inline float* get_address_of_downShiftVolume_11() { return &___downShiftVolume_11; }
	inline void set_downShiftVolume_11(float value)
	{
		___downShiftVolume_11 = value;
	}

	inline static int32_t get_offset_of_Pitch_12() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___Pitch_12)); }
	inline float get_Pitch_12() const { return ___Pitch_12; }
	inline float* get_address_of_Pitch_12() { return &___Pitch_12; }
	inline void set_Pitch_12(float value)
	{
		___Pitch_12 = value;
	}

	inline static int32_t get_offset_of_lowPitchMin_13() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___lowPitchMin_13)); }
	inline float get_lowPitchMin_13() const { return ___lowPitchMin_13; }
	inline float* get_address_of_lowPitchMin_13() { return &___lowPitchMin_13; }
	inline void set_lowPitchMin_13(float value)
	{
		___lowPitchMin_13 = value;
	}

	inline static int32_t get_offset_of_lowPitchMax_14() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___lowPitchMax_14)); }
	inline float get_lowPitchMax_14() const { return ___lowPitchMax_14; }
	inline float* get_address_of_lowPitchMax_14() { return &___lowPitchMax_14; }
	inline void set_lowPitchMax_14(float value)
	{
		___lowPitchMax_14 = value;
	}

	inline static int32_t get_offset_of_highPitchMultiplier_15() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___highPitchMultiplier_15)); }
	inline float get_highPitchMultiplier_15() const { return ___highPitchMultiplier_15; }
	inline float* get_address_of_highPitchMultiplier_15() { return &___highPitchMultiplier_15; }
	inline void set_highPitchMultiplier_15(float value)
	{
		___highPitchMultiplier_15 = value;
	}

	inline static int32_t get_offset_of_accFade_16() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___accFade_16)); }
	inline float get_accFade_16() const { return ___accFade_16; }
	inline float* get_address_of_accFade_16() { return &___accFade_16; }
	inline void set_accFade_16(float value)
	{
		___accFade_16 = value;
	}

	inline static int32_t get_offset_of_acceleration_17() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___acceleration_17)); }
	inline float get_acceleration_17() const { return ___acceleration_17; }
	inline float* get_address_of_acceleration_17() { return &___acceleration_17; }
	inline void set_acceleration_17(float value)
	{
		___acceleration_17 = value;
	}

	inline static int32_t get_offset_of_maxRolloffDistance_18() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___maxRolloffDistance_18)); }
	inline float get_maxRolloffDistance_18() const { return ___maxRolloffDistance_18; }
	inline float* get_address_of_maxRolloffDistance_18() { return &___maxRolloffDistance_18; }
	inline void set_maxRolloffDistance_18(float value)
	{
		___maxRolloffDistance_18 = value;
	}

	inline static int32_t get_offset_of_m_LowAccel_19() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___m_LowAccel_19)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_m_LowAccel_19() const { return ___m_LowAccel_19; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_m_LowAccel_19() { return &___m_LowAccel_19; }
	inline void set_m_LowAccel_19(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___m_LowAccel_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LowAccel_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_LowDecel_20() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___m_LowDecel_20)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_m_LowDecel_20() const { return ___m_LowDecel_20; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_m_LowDecel_20() { return &___m_LowDecel_20; }
	inline void set_m_LowDecel_20(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___m_LowDecel_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LowDecel_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HighAccel_21() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___m_HighAccel_21)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_m_HighAccel_21() const { return ___m_HighAccel_21; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_m_HighAccel_21() { return &___m_HighAccel_21; }
	inline void set_m_HighAccel_21(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___m_HighAccel_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighAccel_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_HighDecel_22() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___m_HighDecel_22)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_m_HighDecel_22() const { return ___m_HighDecel_22; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_m_HighDecel_22() { return &___m_HighDecel_22; }
	inline void set_m_HighDecel_22(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___m_HighDecel_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighDecel_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Turbo_23() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___m_Turbo_23)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_m_Turbo_23() const { return ___m_Turbo_23; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_m_Turbo_23() { return &___m_Turbo_23; }
	inline void set_m_Turbo_23(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___m_Turbo_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Turbo_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_downShift_24() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___m_downShift_24)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_m_downShift_24() const { return ___m_downShift_24; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_m_downShift_24() { return &___m_downShift_24; }
	inline void set_m_downShift_24(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___m_downShift_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_downShift_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartedSound_25() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___m_StartedSound_25)); }
	inline bool get_m_StartedSound_25() const { return ___m_StartedSound_25; }
	inline bool* get_address_of_m_StartedSound_25() { return &___m_StartedSound_25; }
	inline void set_m_StartedSound_25(bool value)
	{
		___m_StartedSound_25 = value;
	}

	inline static int32_t get_offset_of_totalPower_26() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___totalPower_26)); }
	inline float get_totalPower_26() const { return ___totalPower_26; }
	inline float* get_address_of_totalPower_26() { return &___totalPower_26; }
	inline void set_totalPower_26(float value)
	{
		___totalPower_26 = value;
	}

	inline static int32_t get_offset_of_engineRPM_27() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___engineRPM_27)); }
	inline float get_engineRPM_27() const { return ___engineRPM_27; }
	inline float* get_address_of_engineRPM_27() { return &___engineRPM_27; }
	inline void set_engineRPM_27(float value)
	{
		___engineRPM_27 = value;
	}

	inline static int32_t get_offset_of_maxRPM_28() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___maxRPM_28)); }
	inline float get_maxRPM_28() const { return ___maxRPM_28; }
	inline float* get_address_of_maxRPM_28() { return &___maxRPM_28; }
	inline void set_maxRPM_28(float value)
	{
		___maxRPM_28 = value;
	}

	inline static int32_t get_offset_of_engineLerp_29() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___engineLerp_29)); }
	inline bool get_engineLerp_29() const { return ___engineLerp_29; }
	inline bool* get_address_of_engineLerp_29() { return &___engineLerp_29; }
	inline void set_engineLerp_29(bool value)
	{
		___engineLerp_29 = value;
	}

	inline static int32_t get_offset_of_audioObject_30() { return static_cast<int32_t>(offsetof(engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C, ___audioObject_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_audioObject_30() const { return ___audioObject_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_audioObject_30() { return &___audioObject_30; }
	inline void set_audioObject_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___audioObject_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioObject_30), (void*)value);
	}
};


// inputManager
struct inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single inputManager::vertical
	float ___vertical_4;
	// System.Single inputManager::horizontal
	float ___horizontal_5;
	// System.Boolean inputManager::handbrake
	bool ___handbrake_6;
	// System.Boolean inputManager::boosting
	bool ___boosting_7;

public:
	inline static int32_t get_offset_of_vertical_4() { return static_cast<int32_t>(offsetof(inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0, ___vertical_4)); }
	inline float get_vertical_4() const { return ___vertical_4; }
	inline float* get_address_of_vertical_4() { return &___vertical_4; }
	inline void set_vertical_4(float value)
	{
		___vertical_4 = value;
	}

	inline static int32_t get_offset_of_horizontal_5() { return static_cast<int32_t>(offsetof(inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0, ___horizontal_5)); }
	inline float get_horizontal_5() const { return ___horizontal_5; }
	inline float* get_address_of_horizontal_5() { return &___horizontal_5; }
	inline void set_horizontal_5(float value)
	{
		___horizontal_5 = value;
	}

	inline static int32_t get_offset_of_handbrake_6() { return static_cast<int32_t>(offsetof(inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0, ___handbrake_6)); }
	inline bool get_handbrake_6() const { return ___handbrake_6; }
	inline bool* get_address_of_handbrake_6() { return &___handbrake_6; }
	inline void set_handbrake_6(bool value)
	{
		___handbrake_6 = value;
	}

	inline static int32_t get_offset_of_boosting_7() { return static_cast<int32_t>(offsetof(inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0, ___boosting_7)); }
	inline bool get_boosting_7() const { return ___boosting_7; }
	inline bool* get_address_of_boosting_7() { return &___boosting_7; }
	inline void set_boosting_7(bool value)
	{
		___boosting_7 = value;
	}
};


// scoreGameOverScript
struct scoreGameOverScript_tACB490D6DE568E034DA03DBE08CD95D44831E07C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject scoreGameOverScript::scoretext
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scoretext_4;
	// UnityEngine.UI.Text scoreGameOverScript::score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___score_5;

public:
	inline static int32_t get_offset_of_scoretext_4() { return static_cast<int32_t>(offsetof(scoreGameOverScript_tACB490D6DE568E034DA03DBE08CD95D44831E07C, ___scoretext_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_scoretext_4() const { return ___scoretext_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_scoretext_4() { return &___scoretext_4; }
	inline void set_scoretext_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___scoretext_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoretext_4), (void*)value);
	}

	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(scoreGameOverScript_tACB490D6DE568E034DA03DBE08CD95D44831E07C, ___score_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_score_5() const { return ___score_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___score_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___score_5), (void*)value);
	}
};


// selectVehicle
struct selectVehicle_t9ACACFACD3CB18C78E7BDF380903AE1729662881  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 selectVehicle::carCount
	int32_t ___carCount_4;
	// UnityEngine.GameObject selectVehicle::car1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___car1_5;
	// UnityEngine.GameObject selectVehicle::car2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___car2_6;

public:
	inline static int32_t get_offset_of_carCount_4() { return static_cast<int32_t>(offsetof(selectVehicle_t9ACACFACD3CB18C78E7BDF380903AE1729662881, ___carCount_4)); }
	inline int32_t get_carCount_4() const { return ___carCount_4; }
	inline int32_t* get_address_of_carCount_4() { return &___carCount_4; }
	inline void set_carCount_4(int32_t value)
	{
		___carCount_4 = value;
	}

	inline static int32_t get_offset_of_car1_5() { return static_cast<int32_t>(offsetof(selectVehicle_t9ACACFACD3CB18C78E7BDF380903AE1729662881, ___car1_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_car1_5() const { return ___car1_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_car1_5() { return &___car1_5; }
	inline void set_car1_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___car1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___car1_5), (void*)value);
	}

	inline static int32_t get_offset_of_car2_6() { return static_cast<int32_t>(offsetof(selectVehicle_t9ACACFACD3CB18C78E7BDF380903AE1729662881, ___car2_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_car2_6() const { return ___car2_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_car2_6() { return &___car2_6; }
	inline void set_car2_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___car2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___car2_6), (void*)value);
	}
};


// wheelsManager
struct wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single wheelsManager::Friction
	float ___Friction_4;
	// System.Single wheelsManager::SidewaysFriction
	float ___SidewaysFriction_5;
	// System.Single wheelsManager::ForwardFriction
	float ___ForwardFriction_6;
	// controller wheelsManager::controller
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * ___controller_7;
	// UnityEngine.GameObject[] wheelsManager::wheelObjects
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___wheelObjects_8;
	// UnityEngine.WheelCollider[] wheelsManager::wheels
	WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* ___wheels_9;
	// UnityEngine.Vector3 wheelsManager::wheelPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___wheelPosition_10;
	// UnityEngine.Quaternion wheelsManager::wheelRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___wheelRotation_11;
	// UnityEngine.WheelFrictionCurve wheelsManager::forwardFriction
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___forwardFriction_12;
	// UnityEngine.WheelFrictionCurve wheelsManager::sidewaysFriction
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___sidewaysFriction_13;
	// inputManager wheelsManager::inputM
	inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * ___inputM_14;

public:
	inline static int32_t get_offset_of_Friction_4() { return static_cast<int32_t>(offsetof(wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019, ___Friction_4)); }
	inline float get_Friction_4() const { return ___Friction_4; }
	inline float* get_address_of_Friction_4() { return &___Friction_4; }
	inline void set_Friction_4(float value)
	{
		___Friction_4 = value;
	}

	inline static int32_t get_offset_of_SidewaysFriction_5() { return static_cast<int32_t>(offsetof(wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019, ___SidewaysFriction_5)); }
	inline float get_SidewaysFriction_5() const { return ___SidewaysFriction_5; }
	inline float* get_address_of_SidewaysFriction_5() { return &___SidewaysFriction_5; }
	inline void set_SidewaysFriction_5(float value)
	{
		___SidewaysFriction_5 = value;
	}

	inline static int32_t get_offset_of_ForwardFriction_6() { return static_cast<int32_t>(offsetof(wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019, ___ForwardFriction_6)); }
	inline float get_ForwardFriction_6() const { return ___ForwardFriction_6; }
	inline float* get_address_of_ForwardFriction_6() { return &___ForwardFriction_6; }
	inline void set_ForwardFriction_6(float value)
	{
		___ForwardFriction_6 = value;
	}

	inline static int32_t get_offset_of_controller_7() { return static_cast<int32_t>(offsetof(wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019, ___controller_7)); }
	inline controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * get_controller_7() const { return ___controller_7; }
	inline controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 ** get_address_of_controller_7() { return &___controller_7; }
	inline void set_controller_7(controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * value)
	{
		___controller_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_7), (void*)value);
	}

	inline static int32_t get_offset_of_wheelObjects_8() { return static_cast<int32_t>(offsetof(wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019, ___wheelObjects_8)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_wheelObjects_8() const { return ___wheelObjects_8; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_wheelObjects_8() { return &___wheelObjects_8; }
	inline void set_wheelObjects_8(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___wheelObjects_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wheelObjects_8), (void*)value);
	}

	inline static int32_t get_offset_of_wheels_9() { return static_cast<int32_t>(offsetof(wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019, ___wheels_9)); }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* get_wheels_9() const { return ___wheels_9; }
	inline WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6** get_address_of_wheels_9() { return &___wheels_9; }
	inline void set_wheels_9(WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* value)
	{
		___wheels_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wheels_9), (void*)value);
	}

	inline static int32_t get_offset_of_wheelPosition_10() { return static_cast<int32_t>(offsetof(wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019, ___wheelPosition_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_wheelPosition_10() const { return ___wheelPosition_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_wheelPosition_10() { return &___wheelPosition_10; }
	inline void set_wheelPosition_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___wheelPosition_10 = value;
	}

	inline static int32_t get_offset_of_wheelRotation_11() { return static_cast<int32_t>(offsetof(wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019, ___wheelRotation_11)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_wheelRotation_11() const { return ___wheelRotation_11; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_wheelRotation_11() { return &___wheelRotation_11; }
	inline void set_wheelRotation_11(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___wheelRotation_11 = value;
	}

	inline static int32_t get_offset_of_forwardFriction_12() { return static_cast<int32_t>(offsetof(wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019, ___forwardFriction_12)); }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  get_forwardFriction_12() const { return ___forwardFriction_12; }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * get_address_of_forwardFriction_12() { return &___forwardFriction_12; }
	inline void set_forwardFriction_12(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  value)
	{
		___forwardFriction_12 = value;
	}

	inline static int32_t get_offset_of_sidewaysFriction_13() { return static_cast<int32_t>(offsetof(wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019, ___sidewaysFriction_13)); }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  get_sidewaysFriction_13() const { return ___sidewaysFriction_13; }
	inline WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * get_address_of_sidewaysFriction_13() { return &___sidewaysFriction_13; }
	inline void set_sidewaysFriction_13(WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  value)
	{
		___sidewaysFriction_13 = value;
	}

	inline static int32_t get_offset_of_inputM_14() { return static_cast<int32_t>(offsetof(wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019, ___inputM_14)); }
	inline inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * get_inputM_14() const { return ___inputM_14; }
	inline inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 ** get_address_of_inputM_14() { return &___inputM_14; }
	inline void set_inputM_14(inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * value)
	{
		___inputM_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputM_14), (void*)value);
	}
};


// UnityStandardAssets.ImageEffects.GlobalFog
struct GlobalFog_tCE3BBEC5AC0BD36BA5D86A05EF4F13EB920736B0  : public PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E
{
public:
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::distanceFog
	bool ___distanceFog_7;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::useRadialDistance
	bool ___useRadialDistance_8;
	// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::heightFog
	bool ___heightFog_9;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::height
	float ___height_10;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::heightDensity
	float ___heightDensity_11;
	// System.Single UnityStandardAssets.ImageEffects.GlobalFog::startDistance
	float ___startDistance_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.GlobalFog::fogShader
	Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___fogShader_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.GlobalFog::fogMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fogMaterial_14;

public:
	inline static int32_t get_offset_of_distanceFog_7() { return static_cast<int32_t>(offsetof(GlobalFog_tCE3BBEC5AC0BD36BA5D86A05EF4F13EB920736B0, ___distanceFog_7)); }
	inline bool get_distanceFog_7() const { return ___distanceFog_7; }
	inline bool* get_address_of_distanceFog_7() { return &___distanceFog_7; }
	inline void set_distanceFog_7(bool value)
	{
		___distanceFog_7 = value;
	}

	inline static int32_t get_offset_of_useRadialDistance_8() { return static_cast<int32_t>(offsetof(GlobalFog_tCE3BBEC5AC0BD36BA5D86A05EF4F13EB920736B0, ___useRadialDistance_8)); }
	inline bool get_useRadialDistance_8() const { return ___useRadialDistance_8; }
	inline bool* get_address_of_useRadialDistance_8() { return &___useRadialDistance_8; }
	inline void set_useRadialDistance_8(bool value)
	{
		___useRadialDistance_8 = value;
	}

	inline static int32_t get_offset_of_heightFog_9() { return static_cast<int32_t>(offsetof(GlobalFog_tCE3BBEC5AC0BD36BA5D86A05EF4F13EB920736B0, ___heightFog_9)); }
	inline bool get_heightFog_9() const { return ___heightFog_9; }
	inline bool* get_address_of_heightFog_9() { return &___heightFog_9; }
	inline void set_heightFog_9(bool value)
	{
		___heightFog_9 = value;
	}

	inline static int32_t get_offset_of_height_10() { return static_cast<int32_t>(offsetof(GlobalFog_tCE3BBEC5AC0BD36BA5D86A05EF4F13EB920736B0, ___height_10)); }
	inline float get_height_10() const { return ___height_10; }
	inline float* get_address_of_height_10() { return &___height_10; }
	inline void set_height_10(float value)
	{
		___height_10 = value;
	}

	inline static int32_t get_offset_of_heightDensity_11() { return static_cast<int32_t>(offsetof(GlobalFog_tCE3BBEC5AC0BD36BA5D86A05EF4F13EB920736B0, ___heightDensity_11)); }
	inline float get_heightDensity_11() const { return ___heightDensity_11; }
	inline float* get_address_of_heightDensity_11() { return &___heightDensity_11; }
	inline void set_heightDensity_11(float value)
	{
		___heightDensity_11 = value;
	}

	inline static int32_t get_offset_of_startDistance_12() { return static_cast<int32_t>(offsetof(GlobalFog_tCE3BBEC5AC0BD36BA5D86A05EF4F13EB920736B0, ___startDistance_12)); }
	inline float get_startDistance_12() const { return ___startDistance_12; }
	inline float* get_address_of_startDistance_12() { return &___startDistance_12; }
	inline void set_startDistance_12(float value)
	{
		___startDistance_12 = value;
	}

	inline static int32_t get_offset_of_fogShader_13() { return static_cast<int32_t>(offsetof(GlobalFog_tCE3BBEC5AC0BD36BA5D86A05EF4F13EB920736B0, ___fogShader_13)); }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * get_fogShader_13() const { return ___fogShader_13; }
	inline Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 ** get_address_of_fogShader_13() { return &___fogShader_13; }
	inline void set_fogShader_13(Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * value)
	{
		___fogShader_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fogShader_13), (void*)value);
	}

	inline static int32_t get_offset_of_fogMaterial_14() { return static_cast<int32_t>(offsetof(GlobalFog_tCE3BBEC5AC0BD36BA5D86A05EF4F13EB920736B0, ___fogMaterial_14)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fogMaterial_14() const { return ___fogMaterial_14; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fogMaterial_14() { return &___fogMaterial_14; }
	inline void set_fogMaterial_14(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fogMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fogMaterial_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * m_Items[1];

public:
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.WheelCollider[]
struct WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * m_Items[1];

public:
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * m_Items[1];

public:
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_centerOfMass(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_centerOfMass_m3B13BE412D99CE5133606643F14501CF5C63CCEC (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody::get_mass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody_get_mass_mB7B19406DAC6336A8244E98BE271BDA8B5C26223 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.WheelCollider::get_steerAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelCollider_get_steerAngle_mE954E7540E1ACDE5F5FE0D3A32388F6A22378CF4 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_brakeTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___shader0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_supportsImageEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsImageEffects_m46EC93D9C657FF09E87B8853F8A42C5E91BAD224 (const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Shader::get_isSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41 (Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * RenderTexture_GetTemporary_mF71FD5106250F2CD0309BBBA2CD74D3D6D94EFB8 (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ContrastStretch_get_materialLum_mFA3F36EC235BC13BD87A580B33D29321850147FA (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___mat2, const RuntimeMethod* method);
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ContrastStretch_get_materialReduce_mEC419049AC77A1D0D3AA1CCF5FC8908DCF609EC0 (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___temp0, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch_CalculateAdaptation_mD5D9C8B371B907226D0F93D6A0DD0E869CDD7CDD (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___curTexture0, const RuntimeMethod* method);
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ContrastStretch_get_materialApply_m2536CDCE7550DC3B9B2908501DBE2931C44E16D4 (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ContrastStretch_get_materialAdapt_mCF400586EE0D8AF64073C6FC7EB6640EBC4235CF (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRenderTarget_m78AE234327CCDBCEA288FBEFB53D6CEAD3EFC939 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___rt0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_mF5FCE24D7F60731D6D88AA3DC98B0E88A644CD93 (bool ___clearDepth0, bool ___clearColor1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___backgroundColor2, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, bool ___needDepth0, const RuntimeMethod* method);
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___s0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m2Create1, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_m732B3B3112769D5ADA588AEFA3F470A4EB5A3D31 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_SetRow_m86E7E23D71224106549DC25CEDFB992218C52187 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, int32_t ___index0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___row1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetMatrix_m4B2718A5E264BFDBAD965D8A67399746F6799DCD (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.FogMode UnityEngine.RenderSettings::get_fogMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderSettings_get_fogMode_m7906B56E609BFBE526DFDE18FBD9FFB44C606B93 (const RuntimeMethod* method);
// System.Single UnityEngine.RenderSettings::get_fogDensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RenderSettings_get_fogDensity_mDED6FA3F6CA0894141236FAB99EE5FF7DFDDC8B6 (const RuntimeMethod* method);
// System.Single UnityEngine.RenderSettings::get_fogStartDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RenderSettings_get_fogStartDistance_m49AA3604575352B3B33A08540295045DDF00A53B (const RuntimeMethod* method);
// System.Single UnityEngine.RenderSettings::get_fogEndDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RenderSettings_get_fogEndDistance_mBE81E3EBEAE4F9360FBECFBC436176DCA5D1858E (const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalFog_CustomGraphicsBlit_m6D2C9F3F0EDD6141EAB19FA67B3A46C7CC486E13 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fxMaterial2, int32_t ___passNr3, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::PushMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::LoadOrtho()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadOrtho_mF9410BE33CE4CBB921240C428A10D4086D2D3174 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___pass0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Begin(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622 (int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::MultiTexCoord2(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_MultiTexCoord2_m49C02CD7D73016FE3F5C94EFA6CA454AB8CA09B1 (int32_t ___unit0, float ___x1, float ___y2, const RuntimeMethod* method);
// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.GL::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7 (const RuntimeMethod* method);
// System.Void UnityEngine.GL::PopMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738 (const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_mFA1F5C2F42295DE5BC5B12E891F7EFAE11D91728 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::SupportsRenderTextureFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B (int32_t ___format0, const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_graphicsShaderLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsShaderLevel_m2AB377CAE1D1A45C3E05A4ABF40383E3B4797A95 (const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_supportsComputeShaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsComputeShaders_mBEBA178F780915D8BC2FF9ED04D75FBB361987C6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::get_supportsRenderTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsRenderTextures_mEF4C2D195EBF734268B24BAD3599E385FC6AD4B3 (const RuntimeMethod* method);
// UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_depthTextureMode_mA4B03C6B552FB03DF8A8C20DC9F4EB8FD978A7DD (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE (float ___x0, float ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Material::get_passCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_passCount_m8604F2400F17AC2524B95F1C4F39C785896EEE3A (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214 (String_t* ___key0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, float ___angle2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<controller>()
inline controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * GameObject_GetComponent_Tiscontroller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54_m74CB0ADA70BC05BBF5E8DAD36ED6CB681D731524 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::set_usePhysicalProperties(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_usePhysicalProperties_m6C559F45C8DDE120C2718C7887254EC386E30BE8 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void cameraController::updateCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraController_updateCam_mB12338CE88EEDABC4B439E4E754B0E399691221F (cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void cameraController::cycleCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraController_cycleCamera_m609135830C901DFF8558334F6B797FAB644DE094 (cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471 (String_t* ___key0, const RuntimeMethod* method);
// System.Void controller::getObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_getObjects_mEA7F5E086A24FE2420B33A43DC35B79D778F9BCC (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Void controller::addDownForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_addDownForce_m36F72DAEA98065A102C420E9EBD6EFAD8A8A5211 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Void controller::steerVehicle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_steerVehicle_mB300124B11A6BE97B24E2A2F1F35C3D9D0F1E5C6 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Void controller::calculateEnginePower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_calculateEnginePower_mC08E0C38FE3EC05FEB2CCE6DBF776CE444B66A5F (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Void controller::friction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_friction_m1032B942F3EF8836CCC44459E82B1F2092324EDB (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Void controller::Audio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_Audio_mF5140A0A12E1551C89C5C9C1B7445E63711EABDD (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Void controller::shifter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_shifter_m7E8A6CEA454AF32D7AB0A36FC9E7F1320686CE75 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Void controller::manual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_manual_mB0CE0AD8E564B4432DD57A7020F9BFA0A3A1D2D5 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Void controller::activateLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_activateLights_m1AF78DF483A97F7CF8156A26284F4C057432D361 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Void controller::turnLightsOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_turnLightsOn_mEB26B9215514F29E2D77F3DB01874D1AD6A3007A (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Void controller::turnLightsOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_turnLightsOff_m41D0D9A85E0160E86DA37EC50A1348EC3F123F4E (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Multiply_m1A1E7DECD013FBEB99018CEDDC30B8A7CF99941D (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// System.Void controller::lerpEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_lerpEngine_mF7372F1EA9E3BEDE82B544005EB4281D8AD34592 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Void controller::wheelRPM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_wheelRPM_m1DCB1EB4A8F5A6DA3BCCD5BE98B36011C2276F1D (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Boolean controller::isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool controller_isGrounded_mBBAE2F776C7A406665623E86242393F435FDD678 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Void controller::setEngineLerp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_setEngineLerp_m00D96E42A80547F5ED849F80840F59A5D403A949 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, float ___num0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// System.Void controller::moveVehicle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_moveVehicle_m4A2C355268B4346866861504DF4D814DAC184B43 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.WheelCollider::get_rpm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelCollider_get_rpm_m5127D5BE0A627C29F38CFD8194C3F2470D8008B1 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Void engineAudio::DownShift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void engineAudio_DownShift_mB3EE1E621120C2BC4DBD8B4BC2246F92647AD4C9 (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.WheelCollider::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WheelCollider_get_isGrounded_m396F5249ED00A62F8C50403A7BB64CF5E649A61C (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularDrag_m8BF3771789B32FB09FDD8066BAFA0A0B661372A4 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m60E39BE31529DE5163116785A69FACC77C52DA98 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<inputManager>()
inline inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * Component_GetComponent_TisinputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0_m03AA252E29E814779C9A5B79643FF68CABFAB1C1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<engineAudio>()
inline engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * Component_GetComponent_TisengineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C_m57FA825439EC46EE872B28424E82CEC911A96A51 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<wheelsManager>()
inline wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * Component_GetComponent_TiswheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019_m2BA6E22DE79496436529A1E6926399BE2E8ABFF6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WheelCollider::GetGroundHit(UnityEngine.WheelHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WheelCollider_GetGroundHit_mDCD55AC74710E685DBA37F02C904B8F8F3E59DB9 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB * ___hit0, const RuntimeMethod* method);
// UnityEngine.WheelFrictionCurve UnityEngine.WheelCollider::get_forwardFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  WheelCollider_get_forwardFriction_m430D5CCD9D463482275A9058352832DA8153B7DD (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WheelFrictionCurve::set_stiffness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8 (WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_forwardFriction(UnityEngine.WheelFrictionCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_forwardFriction_mEC613D233431786260E97DA4B2D14C597A4390A8 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___value0, const RuntimeMethod* method);
// UnityEngine.WheelFrictionCurve UnityEngine.WheelCollider::get_sidewaysFriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  WheelCollider_get_sidewaysFriction_m85AA645570CAC61DF6BC5F9B8F70409A877F7DFE (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::set_sidewaysFriction(UnityEngine.WheelFrictionCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_set_sidewaysFriction_mEE0EFD1DFE53A0FA023F8D1E05840A58D69784C2 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.WheelHit::get_sidewaysSlip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelHit_get_sidewaysSlip_m6AA5854F880C9BCDA98A22DBB694408954BB0CED (WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB * __this, const RuntimeMethod* method);
// System.Single UnityEngine.WheelHit::get_forwardSlip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WheelHit_get_forwardSlip_m8F11089F49F1049C5D993A0E360E8738D7E600FC (WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB * __this, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUI_HorizontalSlider_mC018F8CE4598BB5EFA2DA2253EF3818263E15BAF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, float ___value1, float ___leftValue2, float ___rightValue3, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.AudioSource engineAudio::SetUpEngineAudioSource(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * engineAudio_SetUpEngineAudioSource_mCC81D70C235103FD3AB27C21475F292A86BF4A91 (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.AudioSource engineAudio::setupDownShift(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * engineAudio_setupDownShift_m22FFF46F1965B12EEBF3856791F82C904C98507F (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<UnityEngine.AudioSource>()
inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* Component_GetComponents_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m9E7C96FA7A236064DAC29DC964FF207E0E47D06A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mEBC8AE0C8843120678A284931632FCCBE15F0C46_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void engineAudio::StopSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void engineAudio_StopSound_mE615EB5BDAC2A0F8A092F5E61D340A4EFA29B2F3 (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, const RuntimeMethod* method);
// System.Void engineAudio::StartSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void engineAudio_StartSound_mDB14C2114A46FCC0C4D96B9B5862E5B447D806AE (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, const RuntimeMethod* method);
// System.Single engineAudio::ULerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float engineAudio_ULerp_m514EDAD0C4C140CFCE38B7CA0BBA72DC15C0D5CF (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, float ___from0, float ___to1, float ___value2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B (float ___a0, float ___b1, float ___value2, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_spatialBlend_m7DD3DA6F68BA6710EDB2EE8482F876D16F9A9BEC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_dopplerLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_dopplerLevel_m3E3187EA638992BE0A7AF9D660DAB1B0D088C2A0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_time_mE8F36DDE8E610126F9733D13F299C13F71BCE690 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_minDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_minDistance_m9C1D3410330B09EACA69C64BF634018D71180F91 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_reverbZoneMix(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_reverbZoneMix_m701BBB1343D14456A2959FBB5304A51DE1164795 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_maxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_maxDistance_m8AF5831BC0B2D070B2D4E1B54CB27082240A5EA8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_mBE8FAD0E1555C431C56E0DEB4BF7371E76E236F5 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void inputManager::keyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void inputManager_keyboard_mF637556AB59F44F8A20A52A8C10D35570963B937 (inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void wheelsManager::findComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wheelsManager_findComponents_mA367F79CEAA7337F9FC910FFD12375DB6BA89028 (wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<controller>()
inline controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * Component_GetComponent_Tiscontroller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54_mFD50AE304880E5B1E32F2EEB9F28B4D6BA3DFD52 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void wheelsManager::setUpWheels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wheelsManager_setUpWheels_mE37942095049929F87D3DD4C120CA9780FD30CC1 (wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * __this, const RuntimeMethod* method);
// System.Void wheelsManager::animateWheels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wheelsManager_animateWheels_m1F5F34E282F7AB99AA165196E9DC51240076F4AC (wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WheelCollider::GetWorldPose(UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelCollider_GetWorldPose_m227D45061C7734F3ED4A43B7F89605A398BE8BB5 (WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___quat1, const RuntimeMethod* method);
// System.Void UnityEngine.WheelFrictionCurve::set_asymptoteValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelFrictionCurve_set_asymptoteValue_mF2D071806D295FD5D414B990F8955AA175EA90D1 (WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelFrictionCurve::set_extremumSlip(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelFrictionCurve_set_extremumSlip_m5F8C078803DEC63B8521C75BDC5661A9A0AB9CA6 (WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelFrictionCurve::set_asymptoteSlip(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelFrictionCurve_set_asymptoteSlip_m4B04347AAEDFA2A5A5CA812117EB2BF4A1CA062D (WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * __this, float ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CarController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_Start_m10BA7CB090F1049BB7AC3D4C4BCFA943380B7882 (CarController_tB945E8CD4EBA16BA6F4C8B4346292786701C9311 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CarController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_Update_m69DDDE13273382E3C25AD2D77EC70DFFE3A70739 (CarController_tB945E8CD4EBA16BA6F4C8B4346292786701C9311 * __this, const RuntimeMethod* method)
{
	{
		// car.velocity = new Vector3(0,0, velocity);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_car_5();
		float L_1 = __this->get_velocity_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CarController::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController_OnCollisionEnter_mFD9E236AFF83CBBBA4A423977A5A760696E5E58E (CarController_tB945E8CD4EBA16BA6F4C8B4346292786701C9311 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEEE81DCC5079F69B7EB0ED499AACDFD6721FB38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.name == PlayerPrefs.GetString("selectedCar"))
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralEEEE81DCC5079F69B7EB0ED499AACDFD6721FB38, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// SceneManager.LoadScene(2);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void CarController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController__ctor_m180A0B729C25B52327B05362FB3A7AA7A53A9739 (CarController_tB945E8CD4EBA16BA6F4C8B4346292786701C9311 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CarController3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController3_Start_mBAEB4317E15290B9B11A40CE59D16B216475DAEE (CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Rigidbody>().centerOfMass=new Vector3(centerOfMass_x, centerOfMass_y, centerOfMass_z);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		float L_1 = __this->get_centerOfMass_x_10();
		float L_2 = __this->get_centerOfMass_y_11();
		float L_3 = __this->get_centerOfMass_z_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_set_centerOfMass_m3B13BE412D99CE5133606643F14501CF5C63CCEC(L_0, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CarController3::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController3_Update_mAF5C373FAA3FA092900791117B42AECDE85E234F (CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// speed = GetComponent<Rigidbody>().velocity.z * 10;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0;
		L_0 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_z_4();
		__this->set_speed_5(((float)il2cpp_codegen_multiply((float)L_2, (float)(10.0f))));
		// power = enginePower * 7.0f * Time.deltaTime;
		float L_3 = __this->get_enginePower_4();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_power_6(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)(7.0f))), (float)L_4)));
		// steer = maxSteer;
		float L_5 = __this->get_maxSteer_9();
		__this->set_steer_8(L_5);
		// brake = GetComponent<Rigidbody>().mass * 0.5f;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_6;
		L_6 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7;
		L_7 = Rigidbody_get_mass_mB7B19406DAC6336A8244E98BE271BDA8B5C26223(L_6, /*hidden argument*/NULL);
		__this->set_brake_7(((float)il2cpp_codegen_multiply((float)L_7, (float)(0.5f))));
		// Wheel_LF.steerAngle=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_8 = __this->get_Wheel_LF_13();
		NullCheck(L_8);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_8, (0.0f), /*hidden argument*/NULL);
		// Wheel_RF.steerAngle=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_9 = __this->get_Wheel_RF_14();
		NullCheck(L_9);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_9, (0.0f), /*hidden argument*/NULL);
		// Wheel_LR.motorTorque=power;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_10 = __this->get_Wheel_LR_15();
		float L_11 = __this->get_power_6();
		NullCheck(L_10);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_10, L_11, /*hidden argument*/NULL);
		// Wheel_RR.motorTorque=power;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_12 = __this->get_Wheel_RR_16();
		float L_13 = __this->get_power_6();
		NullCheck(L_12);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_12, L_13, /*hidden argument*/NULL);
		// turnLeft = Wheel_LF_obj.transform.localEulerAngles;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_Wheel_LF_obj_17();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_15, /*hidden argument*/NULL);
		__this->set_turnLeft_19(L_16);
		// turnLeft.y = Wheel_LF.steerAngle;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_turnLeft_19();
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_18 = __this->get_Wheel_LF_13();
		NullCheck(L_18);
		float L_19;
		L_19 = WheelCollider_get_steerAngle_mE954E7540E1ACDE5F5FE0D3A32388F6A22378CF4(L_18, /*hidden argument*/NULL);
		L_17->set_y_3(L_19);
		// Wheel_LF_obj.transform.localEulerAngles = turnLeft /50;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_Wheel_LF_obj_17();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = __this->get_turnLeft_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_22, (50.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_21, L_23, /*hidden argument*/NULL);
		// turnRight = Wheel_RF_obj.transform.localEulerAngles;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_Wheel_RF_obj_18();
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_localEulerAngles_m4C442107F523737ADAB54855FDC1777A9B71D545(L_25, /*hidden argument*/NULL);
		__this->set_turnRight_20(L_26);
		// turnRight.y = Wheel_RF.steerAngle;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = __this->get_address_of_turnRight_20();
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_28 = __this->get_Wheel_RF_14();
		NullCheck(L_28);
		float L_29;
		L_29 = WheelCollider_get_steerAngle_mE954E7540E1ACDE5F5FE0D3A32388F6A22378CF4(L_28, /*hidden argument*/NULL);
		L_27->set_y_3(L_29);
		// Wheel_RF_obj.transform.localEulerAngles = turnRight /50;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_Wheel_RF_obj_18();
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = __this->get_turnRight_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_32, (50.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(L_31, L_33, /*hidden argument*/NULL);
		// if(pressıngBrake && pressıngRight)
		bool L_34 = __this->get_pressU131ngBrake_22();
		if (!L_34)
		{
			goto IL_01d9;
		}
	}
	{
		bool L_35 = __this->get_pressU131ngRight_23();
		if (!L_35)
		{
			goto IL_01d9;
		}
	}
	{
		// Wheel_LR.motorTorque=0.0f;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_36 = __this->get_Wheel_LR_15();
		NullCheck(L_36);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_36, (0.0f), /*hidden argument*/NULL);
		// Wheel_RR.motorTorque=0.0f;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_37 = __this->get_Wheel_RR_16();
		NullCheck(L_37);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_37, (0.0f), /*hidden argument*/NULL);
		// Wheel_LF.brakeTorque=brake;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_38 = __this->get_Wheel_LF_13();
		float L_39 = __this->get_brake_7();
		NullCheck(L_38);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_38, L_39, /*hidden argument*/NULL);
		// Wheel_RF.brakeTorque=brake;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_40 = __this->get_Wheel_RF_14();
		float L_41 = __this->get_brake_7();
		NullCheck(L_40);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_40, L_41, /*hidden argument*/NULL);
		// Wheel_LR.brakeTorque=brake;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_42 = __this->get_Wheel_LR_15();
		float L_43 = __this->get_brake_7();
		NullCheck(L_42);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_42, L_43, /*hidden argument*/NULL);
		// Wheel_RR.brakeTorque=brake;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_44 = __this->get_Wheel_RR_16();
		float L_45 = __this->get_brake_7();
		NullCheck(L_44);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_44, L_45, /*hidden argument*/NULL);
		// Wheel_LF.steerAngle=steer * 1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_46 = __this->get_Wheel_LF_13();
		float L_47 = __this->get_steer_8();
		NullCheck(L_46);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_46, ((float)il2cpp_codegen_multiply((float)L_47, (float)(1.0f))), /*hidden argument*/NULL);
		// Wheel_RF.steerAngle=steer * 1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_48 = __this->get_Wheel_RF_14();
		float L_49 = __this->get_steer_8();
		NullCheck(L_48);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_48, ((float)il2cpp_codegen_multiply((float)L_49, (float)(1.0f))), /*hidden argument*/NULL);
	}

IL_01d9:
	{
		// if(pressıngGas&&pressıngRight)
		bool L_50 = __this->get_pressU131ngGas_21();
		if (!L_50)
		{
			goto IL_027f;
		}
	}
	{
		bool L_51 = __this->get_pressU131ngRight_23();
		if (!L_51)
		{
			goto IL_027f;
		}
	}
	{
		// Wheel_LF.brakeTorque=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_52 = __this->get_Wheel_LF_13();
		NullCheck(L_52);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_52, (0.0f), /*hidden argument*/NULL);
		// Wheel_RF.brakeTorque=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_53 = __this->get_Wheel_RF_14();
		NullCheck(L_53);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_53, (0.0f), /*hidden argument*/NULL);
		// Wheel_LR.brakeTorque=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_54 = __this->get_Wheel_LR_15();
		NullCheck(L_54);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_54, (0.0f), /*hidden argument*/NULL);
		// Wheel_RR.brakeTorque=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_55 = __this->get_Wheel_RR_16();
		NullCheck(L_55);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_55, (0.0f), /*hidden argument*/NULL);
		// Wheel_LR.motorTorque=power;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_56 = __this->get_Wheel_LR_15();
		float L_57 = __this->get_power_6();
		NullCheck(L_56);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_56, L_57, /*hidden argument*/NULL);
		// Wheel_RR.motorTorque=power;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_58 = __this->get_Wheel_RR_16();
		float L_59 = __this->get_power_6();
		NullCheck(L_58);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_58, L_59, /*hidden argument*/NULL);
		// Wheel_LF.steerAngle=steer * 1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_60 = __this->get_Wheel_LF_13();
		float L_61 = __this->get_steer_8();
		NullCheck(L_60);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_60, ((float)il2cpp_codegen_multiply((float)L_61, (float)(1.0f))), /*hidden argument*/NULL);
		// Wheel_RF.steerAngle=steer * 1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_62 = __this->get_Wheel_RF_14();
		float L_63 = __this->get_steer_8();
		NullCheck(L_62);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_62, ((float)il2cpp_codegen_multiply((float)L_63, (float)(1.0f))), /*hidden argument*/NULL);
	}

IL_027f:
	{
		// if(pressıngBrake && pressıngLeft)
		bool L_64 = __this->get_pressU131ngBrake_22();
		if (!L_64)
		{
			goto IL_0327;
		}
	}
	{
		bool L_65 = __this->get_pressU131ngLeft_24();
		if (!L_65)
		{
			goto IL_0327;
		}
	}
	{
		// Wheel_LR.motorTorque=0.0f;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_66 = __this->get_Wheel_LR_15();
		NullCheck(L_66);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_66, (0.0f), /*hidden argument*/NULL);
		// Wheel_RR.motorTorque=0.0f;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_67 = __this->get_Wheel_RR_16();
		NullCheck(L_67);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_67, (0.0f), /*hidden argument*/NULL);
		// Wheel_LF.brakeTorque=brake;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_68 = __this->get_Wheel_LF_13();
		float L_69 = __this->get_brake_7();
		NullCheck(L_68);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_68, L_69, /*hidden argument*/NULL);
		// Wheel_RF.brakeTorque=brake;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_70 = __this->get_Wheel_RF_14();
		float L_71 = __this->get_brake_7();
		NullCheck(L_70);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_70, L_71, /*hidden argument*/NULL);
		// Wheel_LR.brakeTorque=brake;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_72 = __this->get_Wheel_LR_15();
		float L_73 = __this->get_brake_7();
		NullCheck(L_72);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_72, L_73, /*hidden argument*/NULL);
		// Wheel_RR.brakeTorque=brake;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_74 = __this->get_Wheel_RR_16();
		float L_75 = __this->get_brake_7();
		NullCheck(L_74);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_74, L_75, /*hidden argument*/NULL);
		// Wheel_LF.steerAngle=steer * -1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_76 = __this->get_Wheel_LF_13();
		float L_77 = __this->get_steer_8();
		NullCheck(L_76);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_76, ((float)il2cpp_codegen_multiply((float)L_77, (float)(-1.0f))), /*hidden argument*/NULL);
		// Wheel_RF.steerAngle=steer * -1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_78 = __this->get_Wheel_RF_14();
		float L_79 = __this->get_steer_8();
		NullCheck(L_78);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_78, ((float)il2cpp_codegen_multiply((float)L_79, (float)(-1.0f))), /*hidden argument*/NULL);
	}

IL_0327:
	{
		// if(pressıngGas && pressıngLeft)
		bool L_80 = __this->get_pressU131ngGas_21();
		if (!L_80)
		{
			goto IL_03cd;
		}
	}
	{
		bool L_81 = __this->get_pressU131ngLeft_24();
		if (!L_81)
		{
			goto IL_03cd;
		}
	}
	{
		// Wheel_LF.brakeTorque=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_82 = __this->get_Wheel_LF_13();
		NullCheck(L_82);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_82, (0.0f), /*hidden argument*/NULL);
		// Wheel_RF.brakeTorque=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_83 = __this->get_Wheel_RF_14();
		NullCheck(L_83);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_83, (0.0f), /*hidden argument*/NULL);
		// Wheel_LR.brakeTorque=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_84 = __this->get_Wheel_LR_15();
		NullCheck(L_84);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_84, (0.0f), /*hidden argument*/NULL);
		// Wheel_RR.brakeTorque=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_85 = __this->get_Wheel_RR_16();
		NullCheck(L_85);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_85, (0.0f), /*hidden argument*/NULL);
		// Wheel_LR.motorTorque=power;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_86 = __this->get_Wheel_LR_15();
		float L_87 = __this->get_power_6();
		NullCheck(L_86);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_86, L_87, /*hidden argument*/NULL);
		// Wheel_RR.motorTorque=power;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_88 = __this->get_Wheel_RR_16();
		float L_89 = __this->get_power_6();
		NullCheck(L_88);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_88, L_89, /*hidden argument*/NULL);
		// Wheel_LF.steerAngle=steer * -1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_90 = __this->get_Wheel_LF_13();
		float L_91 = __this->get_steer_8();
		NullCheck(L_90);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_90, ((float)il2cpp_codegen_multiply((float)L_91, (float)(-1.0f))), /*hidden argument*/NULL);
		// Wheel_RF.steerAngle=steer * -1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_92 = __this->get_Wheel_RF_14();
		float L_93 = __this->get_steer_8();
		NullCheck(L_92);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_92, ((float)il2cpp_codegen_multiply((float)L_93, (float)(-1.0f))), /*hidden argument*/NULL);
	}

IL_03cd:
	{
		// if(pressıngBrake)
		bool L_94 = __this->get_pressU131ngBrake_22();
		if (!L_94)
		{
			goto IL_0439;
		}
	}
	{
		// Wheel_LR.motorTorque=0.0f;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_95 = __this->get_Wheel_LR_15();
		NullCheck(L_95);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_95, (0.0f), /*hidden argument*/NULL);
		// Wheel_RR.motorTorque=0.0f;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_96 = __this->get_Wheel_RR_16();
		NullCheck(L_96);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_96, (0.0f), /*hidden argument*/NULL);
		// Wheel_LF.brakeTorque=brake;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_97 = __this->get_Wheel_LF_13();
		float L_98 = __this->get_brake_7();
		NullCheck(L_97);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_97, L_98, /*hidden argument*/NULL);
		// Wheel_RF.brakeTorque=brake;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_99 = __this->get_Wheel_RF_14();
		float L_100 = __this->get_brake_7();
		NullCheck(L_99);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_99, L_100, /*hidden argument*/NULL);
		// Wheel_LR.brakeTorque=brake;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_101 = __this->get_Wheel_LR_15();
		float L_102 = __this->get_brake_7();
		NullCheck(L_101);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_101, L_102, /*hidden argument*/NULL);
		// Wheel_RR.brakeTorque=brake;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_103 = __this->get_Wheel_RR_16();
		float L_104 = __this->get_brake_7();
		NullCheck(L_103);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_103, L_104, /*hidden argument*/NULL);
	}

IL_0439:
	{
		// if(pressıngGas)
		bool L_105 = __this->get_pressU131ngGas_21();
		if (!L_105)
		{
			goto IL_04a3;
		}
	}
	{
		// Wheel_LF.brakeTorque=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_106 = __this->get_Wheel_LF_13();
		NullCheck(L_106);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_106, (0.0f), /*hidden argument*/NULL);
		// Wheel_RF.brakeTorque=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_107 = __this->get_Wheel_RF_14();
		NullCheck(L_107);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_107, (0.0f), /*hidden argument*/NULL);
		// Wheel_LR.brakeTorque=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_108 = __this->get_Wheel_LR_15();
		NullCheck(L_108);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_108, (0.0f), /*hidden argument*/NULL);
		// Wheel_RR.brakeTorque=0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_109 = __this->get_Wheel_RR_16();
		NullCheck(L_109);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_109, (0.0f), /*hidden argument*/NULL);
		// Wheel_LR.motorTorque=power;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_110 = __this->get_Wheel_LR_15();
		float L_111 = __this->get_power_6();
		NullCheck(L_110);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_110, L_111, /*hidden argument*/NULL);
		// Wheel_RR.motorTorque=power;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_112 = __this->get_Wheel_RR_16();
		float L_113 = __this->get_power_6();
		NullCheck(L_112);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(L_112, L_113, /*hidden argument*/NULL);
	}

IL_04a3:
	{
		// if(pressıngLeft)
		bool L_114 = __this->get_pressU131ngLeft_24();
		if (!L_114)
		{
			goto IL_04d9;
		}
	}
	{
		// Wheel_LF.steerAngle=steer * -1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_115 = __this->get_Wheel_LF_13();
		float L_116 = __this->get_steer_8();
		NullCheck(L_115);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_115, ((float)il2cpp_codegen_multiply((float)L_116, (float)(-1.0f))), /*hidden argument*/NULL);
		// Wheel_RF.steerAngle=steer * -1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_117 = __this->get_Wheel_RF_14();
		float L_118 = __this->get_steer_8();
		NullCheck(L_117);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_117, ((float)il2cpp_codegen_multiply((float)L_118, (float)(-1.0f))), /*hidden argument*/NULL);
	}

IL_04d9:
	{
		// if(pressıngRight)
		bool L_119 = __this->get_pressU131ngRight_23();
		if (!L_119)
		{
			goto IL_050f;
		}
	}
	{
		// Wheel_LF.steerAngle=steer * 1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_120 = __this->get_Wheel_LF_13();
		float L_121 = __this->get_steer_8();
		NullCheck(L_120);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_120, ((float)il2cpp_codegen_multiply((float)L_121, (float)(1.0f))), /*hidden argument*/NULL);
		// Wheel_RF.steerAngle=steer * 1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_122 = __this->get_Wheel_RF_14();
		float L_123 = __this->get_steer_8();
		NullCheck(L_122);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_122, ((float)il2cpp_codegen_multiply((float)L_123, (float)(1.0f))), /*hidden argument*/NULL);
	}

IL_050f:
	{
		// }
		return;
	}
}
// System.Void CarController3::brakeDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController3_brakeDown_m236C5A5AD7712ED44AC48F8078CB3E83349AA989 (CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B * __this, const RuntimeMethod* method)
{
	{
		// pressıngBrake = true;
		__this->set_pressU131ngBrake_22((bool)1);
		// pressıngGas = false;
		__this->set_pressU131ngGas_21((bool)0);
		// }
		return;
	}
}
// System.Void CarController3::brakeExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController3_brakeExit_mCA81295EA6F137826B8CB9BBF86E02F70D466C12 (CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B * __this, const RuntimeMethod* method)
{
	{
		// pressıngBrake = false;
		__this->set_pressU131ngBrake_22((bool)0);
		// pressıngGas = true;
		__this->set_pressU131ngGas_21((bool)1);
		// }
		return;
	}
}
// System.Void CarController3::gasDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController3_gasDown_m8A42DC80DFAA17395FAF4BBEC61F74A201DC3C48 (CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B * __this, const RuntimeMethod* method)
{
	{
		// pressıngGas = true;
		__this->set_pressU131ngGas_21((bool)1);
		// }
		return;
	}
}
// System.Void CarController3::gasExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController3_gasExit_m8608F782FE3969278A721D0146E97D4A41E0F3B1 (CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B * __this, const RuntimeMethod* method)
{
	{
		// pressıngGas = false;
		__this->set_pressU131ngGas_21((bool)0);
		// }
		return;
	}
}
// System.Void CarController3::rightDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController3_rightDown_m1779E5A908F8577AA1A361EC1F00370A3C23FAFE (CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B * __this, const RuntimeMethod* method)
{
	{
		// pressıngRight = true;
		__this->set_pressU131ngRight_23((bool)1);
		// }
		return;
	}
}
// System.Void CarController3::rightExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController3_rightExit_m78AE61F81AF449A3A6B94B3CAC1D58FC91C00203 (CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B * __this, const RuntimeMethod* method)
{
	{
		// pressıngRight = false;
		__this->set_pressU131ngRight_23((bool)0);
		// }
		return;
	}
}
// System.Void CarController3::leftDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController3_leftDown_m1B44BC84D248D91A355D6EB321FA7DD29123AEF8 (CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B * __this, const RuntimeMethod* method)
{
	{
		// pressıngLeft = true;
		__this->set_pressU131ngLeft_24((bool)1);
		// }
		return;
	}
}
// System.Void CarController3::leftExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController3_leftExit_m5E791B0AFB813AE2C476957059E5B616ABFB28AC (CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B * __this, const RuntimeMethod* method)
{
	{
		// pressıngLeft = false;
		__this->set_pressU131ngLeft_24((bool)0);
		// }
		return;
	}
}
// System.Void CarController3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CarController3__ctor_m25FE8477FEDD56F5BF83F44802C9B3841FD5213E (CarController3_t33BA5F66A7A28B76761B7E0A91B8268FCC8CC65B * __this, const RuntimeMethod* method)
{
	{
		// public float maxSteer = 25.0f;
		__this->set_maxSteer_9((25.0f));
		// public float centerOfMass_y = -0.5f;
		__this->set_centerOfMass_y_11((-0.5f));
		// public float centerOfMass_z = 0.3f;
		__this->set_centerOfMass_z_12((0.300000012f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ContrastStretch_get_materialLum_mFA3F36EC235BC13BD87A580B33D29321850147FA (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( m_materialLum == null ) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_m_materialLum_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_materialLum = new Material(shaderLum);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2 = __this->get_shaderLum_9();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_materialLum_10(L_3);
		// m_materialLum.hideFlags = HideFlags.HideAndDontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_m_materialLum_10();
		NullCheck(L_4);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_4, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_002c:
	{
		// return m_materialLum;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_m_materialLum_10();
		return L_5;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ContrastStretch_get_materialReduce_mEC419049AC77A1D0D3AA1CCF5FC8908DCF609EC0 (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( m_materialReduce == null ) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_m_materialReduce_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_materialReduce = new Material(shaderReduce);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2 = __this->get_shaderReduce_11();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_materialReduce_12(L_3);
		// m_materialReduce.hideFlags = HideFlags.HideAndDontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_m_materialReduce_12();
		NullCheck(L_4);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_4, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_002c:
	{
		// return m_materialReduce;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_m_materialReduce_12();
		return L_5;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ContrastStretch_get_materialAdapt_mCF400586EE0D8AF64073C6FC7EB6640EBC4235CF (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( m_materialAdapt == null ) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_m_materialAdapt_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_materialAdapt = new Material(shaderAdapt);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2 = __this->get_shaderAdapt_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_materialAdapt_14(L_3);
		// m_materialAdapt.hideFlags = HideFlags.HideAndDontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_m_materialAdapt_14();
		NullCheck(L_4);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_4, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_002c:
	{
		// return m_materialAdapt;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_m_materialAdapt_14();
		return L_5;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ContrastStretch_get_materialApply_m2536CDCE7550DC3B9B2908501DBE2931C44E16D4 (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ( m_materialApply == null ) {
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = __this->get_m_materialApply_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// m_materialApply = new Material(shaderApply);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_2 = __this->get_shaderApply_15();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_3, L_2, /*hidden argument*/NULL);
		__this->set_m_materialApply_16(L_3);
		// m_materialApply.hideFlags = HideFlags.HideAndDontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_m_materialApply_16();
		NullCheck(L_4);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_4, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_002c:
	{
		// return m_materialApply;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = __this->get_m_materialApply_16();
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch_Start_m036007088F06A37063A9580F392F2593C4F2F081 (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, const RuntimeMethod* method)
{
	{
		// if (!SystemInfo.supportsImageEffects) {
		bool L_0;
		L_0 = SystemInfo_get_supportsImageEffects_m46EC93D9C657FF09E87B8853F8A42C5E91BAD224(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_000f:
	{
		// if (!shaderAdapt.isSupported || !shaderApply.isSupported || !shaderLum.isSupported || !shaderReduce.isSupported) {
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1 = __this->get_shaderAdapt_13();
		NullCheck(L_1);
		bool L_2;
		L_2 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3 = __this->get_shaderApply_15();
		NullCheck(L_3);
		bool L_4;
		L_4 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_5 = __this->get_shaderLum_9();
		NullCheck(L_5);
		bool L_6;
		L_6 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_7 = __this->get_shaderReduce_11();
		NullCheck(L_7);
		bool L_8;
		L_8 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_004b;
		}
	}

IL_0043:
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch_OnEnable_m17DC4417344C6175F77919E452DEBD54AEBD66A5 (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for( int i = 0; i < 2; ++i )
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		// if ( !adaptRenderTex[i] ) {
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_0 = __this->get_adaptRenderTex_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		// adaptRenderTex[i] = new RenderTexture(1, 1, 0);
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_5 = __this->get_adaptRenderTex_7();
		int32_t L_6 = V_0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_7 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)il2cpp_codegen_object_new(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
		RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF(L_7, 1, 1, 0, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)L_7);
		// adaptRenderTex[i].hideFlags = HideFlags.HideAndDontSave;
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_8 = __this->get_adaptRenderTex_7();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_11, ((int32_t)61), /*hidden argument*/NULL);
	}

IL_0032:
	{
		// for( int i = 0; i < 2; ++i )
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0036:
	{
		// for( int i = 0; i < 2; ++i )
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)2)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch_OnDisable_m3CB5068DF0BEE880259C931340092A699E3DD713 (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for( int i = 0; i < 2; ++i )
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// DestroyImmediate( adaptRenderTex[i] );
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_0 = __this->get_adaptRenderTex_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_3, /*hidden argument*/NULL);
		// adaptRenderTex[i] = null;
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_4 = __this->get_adaptRenderTex_7();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, NULL);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)NULL);
		// for( int i = 0; i < 2; ++i )
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001e:
	{
		// for( int i = 0; i < 2; ++i )
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)2)))
		{
			goto IL_0004;
		}
	}
	{
		// if ( m_materialLum )
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = __this->get_m_materialLum_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		// DestroyImmediate( m_materialLum );
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = __this->get_m_materialLum_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_10, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// if ( m_materialReduce )
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = __this->get_m_materialReduce_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// DestroyImmediate( m_materialReduce );
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = __this->get_m_materialReduce_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_13, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// if ( m_materialAdapt )
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = __this->get_m_materialAdapt_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		// DestroyImmediate( m_materialAdapt );
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_m_materialAdapt_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_16, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// if ( m_materialApply )
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17 = __this->get_m_materialApply_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0082;
		}
	}
	{
		// DestroyImmediate( m_materialApply );
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = __this->get_m_materialApply_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_19, /*hidden argument*/NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch_OnRenderImage_m84EA66287D48055F498FF5DFEB0083C504AE7A62 (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CE33800B899A10909A01B30E9E15694DCDDF90C);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * V_3 = NULL;
	{
		// RenderTexture rtTempSrc = RenderTexture.GetTemporary(source.width/TEMP_RATIO, source.height/TEMP_RATIO);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___source0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4;
		L_4 = RenderTexture_GetTemporary_mF71FD5106250F2CD0309BBBA2CD74D3D6D94EFB8(((int32_t)((int32_t)L_1/(int32_t)1)), ((int32_t)((int32_t)L_3/(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_4;
		// Graphics.Blit (source, rtTempSrc, materialLum);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_6 = V_0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7;
		L_7 = ContrastStretch_get_materialLum_mFA3F36EC235BC13BD87A580B33D29321850147FA(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_5, L_6, L_7, /*hidden argument*/NULL);
		goto IL_0060;
	}

IL_0025:
	{
		// int destW = rtTempSrc.width / REDUCE_RATIO;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_8);
		V_1 = ((int32_t)((int32_t)L_9/(int32_t)2));
		// if ( destW < FINAL_SIZE ) destW = FINAL_SIZE;
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		// if ( destW < FINAL_SIZE ) destW = FINAL_SIZE;
		V_1 = 1;
	}

IL_0034:
	{
		// int destH = rtTempSrc.height / REDUCE_RATIO;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		V_2 = ((int32_t)((int32_t)L_12/(int32_t)2));
		// if ( destH < FINAL_SIZE ) destH = FINAL_SIZE;
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		// if ( destH < FINAL_SIZE ) destH = FINAL_SIZE;
		V_2 = 1;
	}

IL_0043:
	{
		// RenderTexture rtTempDst = RenderTexture.GetTemporary(destW,destH);
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_16;
		L_16 = RenderTexture_GetTemporary_mF71FD5106250F2CD0309BBBA2CD74D3D6D94EFB8(L_14, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// Graphics.Blit (rtTempSrc, rtTempDst, materialReduce);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_17 = V_0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18 = V_3;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19;
		L_19 = ContrastStretch_get_materialReduce_mEC419049AC77A1D0D3AA1CCF5FC8908DCF609EC0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_17, L_18, L_19, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary( rtTempSrc );
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_20 = V_0;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_20, /*hidden argument*/NULL);
		// rtTempSrc = rtTempDst;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_21 = V_3;
		V_0 = L_21;
	}

IL_0060:
	{
		// while( rtTempSrc.width > FINAL_SIZE || rtTempSrc.height > FINAL_SIZE )
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_22);
		if ((((int32_t)L_23) > ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_24);
		if ((((int32_t)L_25) > ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		// CalculateAdaptation( rtTempSrc );
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_26 = V_0;
		ContrastStretch_CalculateAdaptation_mD5D9C8B371B907226D0F93D6A0DD0E869CDD7CDD(__this, L_26, /*hidden argument*/NULL);
		// materialApply.SetTexture("_AdaptTex", adaptRenderTex[curAdaptIndex] );
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27;
		L_27 = ContrastStretch_get_materialApply_m2536CDCE7550DC3B9B2908501DBE2931C44E16D4(__this, /*hidden argument*/NULL);
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_28 = __this->get_adaptRenderTex_7();
		int32_t L_29 = __this->get_curAdaptIndex_8();
		NullCheck(L_28);
		int32_t L_30 = L_29;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_27);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_27, _stringLiteral8CE33800B899A10909A01B30E9E15694DCDDF90C, L_31, /*hidden argument*/NULL);
		// Graphics.Blit (source, destination, materialApply);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_32 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_33 = ___destination1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34;
		L_34 = ContrastStretch_get_materialApply_m2536CDCE7550DC3B9B2908501DBE2931C44E16D4(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_32, L_33, L_34, /*hidden argument*/NULL);
		// RenderTexture.ReleaseTemporary( rtTempSrc );
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_35 = V_0;
		RenderTexture_ReleaseTemporary_m2BF2BDDC359A491C05C401B977878DAE1D0850D4(L_35, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch_CalculateAdaptation_mD5D9C8B371B907226D0F93D6A0DD0E869CDD7CDD (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___curTexture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CCBC596DB1B94C94A9284599019AC779586C8EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96886DED2ECF1EA2B574F8C4F68D1873E78AFB44);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// int prevAdaptIndex = curAdaptIndex;
		int32_t L_0 = __this->get_curAdaptIndex_8();
		V_0 = L_0;
		// curAdaptIndex = (curAdaptIndex+1) % 2;
		int32_t L_1 = __this->get_curAdaptIndex_8();
		__this->set_curAdaptIndex_8(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1))%(int32_t)2)));
		// float adaptLerp = 1.0f - Mathf.Pow( 1.0f - adaptationSpeed, 30.0f * Time.deltaTime );
		float L_2 = __this->get_adaptationSpeed_4();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_4;
		L_4 = powf(((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2)), ((float)il2cpp_codegen_multiply((float)(30.0f), (float)L_3)));
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4));
		// adaptLerp = Mathf.Clamp( adaptLerp, kMinAdaptLerp, 1 );
		float L_5 = V_1;
		float L_6;
		L_6 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_5, (0.00999999978f), (1.0f), /*hidden argument*/NULL);
		V_1 = L_6;
		// materialAdapt.SetTexture("_CurTex", curTexture );
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7;
		L_7 = ContrastStretch_get_materialAdapt_mCF400586EE0D8AF64073C6FC7EB6640EBC4235CF(__this, /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_8 = ___curTexture0;
		NullCheck(L_7);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_7, _stringLiteral1CCBC596DB1B94C94A9284599019AC779586C8EB, L_8, /*hidden argument*/NULL);
		// materialAdapt.SetVector("_AdaptParams", new Vector4(
		//                                             adaptLerp,
		//                                             limitMinimum,
		//                                             limitMaximum,
		//                                             0.0f
		//                                             ));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9;
		L_9 = ContrastStretch_get_materialAdapt_mCF400586EE0D8AF64073C6FC7EB6640EBC4235CF(__this, /*hidden argument*/NULL);
		float L_10 = V_1;
		float L_11 = __this->get_limitMinimum_5();
		float L_12 = __this->get_limitMaximum_6();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_13), L_10, L_11, L_12, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_9, _stringLiteral96886DED2ECF1EA2B574F8C4F68D1873E78AFB44, L_13, /*hidden argument*/NULL);
		// Graphics.SetRenderTarget(adaptRenderTex[curAdaptIndex]);
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_14 = __this->get_adaptRenderTex_7();
		int32_t L_15 = __this->get_curAdaptIndex_8();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_SetRenderTarget_m78AE234327CCDBCEA288FBEFB53D6CEAD3EFC939(L_17, /*hidden argument*/NULL);
		// GL.Clear(false, true, Color.black);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		GL_Clear_mF5FCE24D7F60731D6D88AA3DC98B0E88A644CD93((bool)0, (bool)1, L_18, /*hidden argument*/NULL);
		// Graphics.Blit (
		//     adaptRenderTex[prevAdaptIndex],
		//     adaptRenderTex[curAdaptIndex],
		//     materialAdapt);
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_19 = __this->get_adaptRenderTex_7();
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_23 = __this->get_adaptRenderTex_7();
		int32_t L_24 = __this->get_curAdaptIndex_8();
		NullCheck(L_23);
		int32_t L_25 = L_24;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27;
		L_27 = ContrastStretch_get_materialAdapt_mCF400586EE0D8AF64073C6FC7EB6640EBC4235CF(__this, /*hidden argument*/NULL);
		Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05(L_22, L_26, L_27, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContrastStretch__ctor_m1A8EA45A045275D5020396872CBFE779C8278949 (ContrastStretch_t6273E6810F48A3DC555D617356DD393B149A8C16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float adaptationSpeed = 0.02f;
		__this->set_adaptationSpeed_4((0.0199999996f));
		// public float limitMinimum = 0.2f;
		__this->set_limitMinimum_5((0.200000003f));
		// public float limitMaximum = 0.6f;
		__this->set_limitMaximum_6((0.600000024f));
		// private RenderTexture[] adaptRenderTex = new RenderTexture[2];
		RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E* L_0 = (RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)(RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E*)SZArrayNew(RenderTextureU5BU5D_tDC947BF3616454E270458293C61A06867ED4B02E_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_adaptRenderTex_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEEE81DCC5079F69B7EB0ED499AACDFD6721FB38);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// car.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_car_5();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// car1.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_car1_6();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// car2.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_car2_7();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// car3.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_car3_8();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// GameObject[] cars = {car,car1, car2, car3};
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)4);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_car_5();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_6);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_car1_6();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_8);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_car2_7();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_10);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = L_9;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_car3_8();
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_12);
		V_0 = L_11;
		// for (int i = 0; i < cars.Length; i++)
		V_1 = 0;
		goto IL_008e;
	}

IL_005f:
	{
		// if (PlayerPrefs.GetString("selectedCar") == cars[i].name)
		String_t* L_13;
		L_13 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralEEEE81DCC5079F69B7EB0ED499AACDFD6721FB38, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_008a;
		}
	}
	{
		// cars[i].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)1, /*hidden argument*/NULL);
		// activeCar = cars[i];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_24 = V_0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		__this->set_activeCar_4(L_27);
	}

IL_008a:
	{
		// for (int i = 0; i < cars.Length; i++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_008e:
	{
		// for (int i = 0; i < cars.Length; i++)
		int32_t L_29 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_005f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameManager::goToMa?nMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_goToMaU131nMenu_m154D29C82099B43BA3063A4A369E055B39A4F3F4 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameOverManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_Start_mCF340FAB95187564C54942AD01D2A65BD005CEDD (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameOverManager::mainMenuButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_mainMenuButton_mFCB930CE2440CAA7975CE8211D9AA5C774148566 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverManager::restartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_restartButton_m6E9B3ECC8EEE412EA87C543AA426103A19DCA5A9 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverManager::settingsButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_settingsButton_m0B5498CD7BD69CF67EE2FF36BFA61AF570B1B900 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverManager::quitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager_quitButton_mF4429F5F8217E958618C5B2713E887B08BAEC690 (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverManager__ctor_m52207DE1B4AFE3EB17B968DC034DF9CD126BE15B (GameOverManager_t819164CC23FACA0BF9C2F295AC60857DF0273E7C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlobalFog_CheckResources_m1B2A82D23CC96D26D69451935E3ABFF226880F5C (GlobalFog_tCE3BBEC5AC0BD36BA5D86A05EF4F13EB920736B0 * __this, const RuntimeMethod* method)
{
	{
		// CheckSupport (true);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A(__this, (bool)1, /*hidden argument*/NULL);
		// fogMaterial = CheckShaderAndCreateMaterial (fogShader, fogMaterial);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_1 = __this->get_fogShader_13();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2 = __this->get_fogMaterial_14();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3;
		L_3 = PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490(__this, L_1, L_2, /*hidden argument*/NULL);
		__this->set_fogMaterial_14(L_3);
		// if (!isSupported)
		bool L_4 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_isSupported_6();
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		// ReportAutoDisable ();
		PostEffectsBase_ReportAutoDisable_m732B3B3112769D5ADA588AEFA3F470A4EB5A3D31(__this, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// return isSupported;
		bool L_5 = ((PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E *)__this)->get_isSupported_6();
		return L_5;
	}
}
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalFog_OnRenderImage_mB4D89A1A081A4AA1684BA89B78305C15CCD35FAE (GlobalFog_tCE3BBEC5AC0BD36BA5D86A05EF4F13EB920736B0 * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___destination1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10E63F1449DDA0560E2408DA0E4E93F4C823F61C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E804B550ACFEEAF6F65629A4F1291A7E641FEB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35FAF5AC89B0748CF72542A4C62B04628796CE30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral560291CC6D93F4F37B4AD9680EF9CED1F1C78FF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D7A68A77F2D4B8A06C9D5E1177B4692AB5D238C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD213185DCEB47321CF747205D877BA8F2EA049F);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_14;
	memset((&V_14), 0, sizeof(V_14));
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	float V_23 = 0.0f;
	float V_24 = 0.0f;
	int32_t V_25 = 0;
	float G_B7_0 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B13_0 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B15_0 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B14_0 = NULL;
	float G_B16_0 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B16_1 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B18_0 = NULL;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B17_0 = NULL;
	float G_B19_0 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * G_B19_1 = NULL;
	float G_B21_0 = 0.0f;
	String_t* G_B21_1 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B21_2 = NULL;
	float G_B20_0 = 0.0f;
	String_t* G_B20_1 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B20_2 = NULL;
	int32_t G_B22_0 = 0;
	float G_B22_1 = 0.0f;
	String_t* G_B22_2 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B22_3 = NULL;
	{
		// if (CheckResources()==false || (!distanceFog && !heightFog))
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->get_distanceFog_7();
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		bool L_2 = __this->get_heightFog_9();
		if (L_2)
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		// Graphics.Blit (source, destination);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_3 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_4 = ___destination1;
		IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		Graphics_Blit_m946B14CAE548AAFF3FC223AB54DC5D10AEF760F7(L_3, L_4, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0020:
	{
		// Camera cam = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		// Transform camtr = cam.transform;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_6 = L_5;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// float camNear = cam.nearClipPlane;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = L_6;
		NullCheck(L_8);
		float L_9;
		L_9 = Camera_get_nearClipPlane_m75A7270074A35D95B05F25EBF8CE392ECA6517DC(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// float camFar = cam.farClipPlane;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10 = L_8;
		NullCheck(L_10);
		float L_11;
		L_11 = Camera_get_farClipPlane_m0FA1B9E2E815BECE2EA40023302EB942B52D9596(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// float camFov = cam.fieldOfView;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_12 = L_10;
		NullCheck(L_12);
		float L_13;
		L_13 = Camera_get_fieldOfView_mA9BA910800B2E33B572929CDA9A12CE596353920(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		// float camAspect = cam.aspect;
		NullCheck(L_12);
		float L_14;
		L_14 = Camera_get_aspect_mD0A1FC8F998473DA08866FF9CD61C02E6D5F4987(L_12, /*hidden argument*/NULL);
		V_4 = L_14;
		// Matrix4x4 frustumCorners = Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_15;
		L_15 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		V_5 = L_15;
		// float fovWHalf = camFov * 0.5f;
		float L_16 = V_3;
		V_6 = ((float)il2cpp_codegen_multiply((float)L_16, (float)(0.5f)));
		// Vector3 toRight = camtr.right * camNear * Mathf.Tan (fovWHalf * Mathf.Deg2Rad) * camAspect;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = V_0;
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_17, /*hidden argument*/NULL);
		float L_19 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, L_19, /*hidden argument*/NULL);
		float L_21 = V_6;
		float L_22;
		L_22 = tanf(((float)il2cpp_codegen_multiply((float)L_21, (float)(0.0174532924f))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_20, L_22, /*hidden argument*/NULL);
		float L_24 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_23, L_24, /*hidden argument*/NULL);
		V_7 = L_25;
		// Vector3 toTop = camtr.up * camNear * Mathf.Tan (fovWHalf * Mathf.Deg2Rad);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = V_0;
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_26, /*hidden argument*/NULL);
		float L_28 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, L_28, /*hidden argument*/NULL);
		float L_30 = V_6;
		float L_31;
		L_31 = tanf(((float)il2cpp_codegen_multiply((float)L_30, (float)(0.0174532924f))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_29, L_31, /*hidden argument*/NULL);
		V_8 = L_32;
		// Vector3 topLeft = (camtr.forward * camNear - toRight + toTop);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = V_0;
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_33, /*hidden argument*/NULL);
		float L_35 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_36, L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_38, L_39, /*hidden argument*/NULL);
		V_9 = L_40;
		// float camScale = topLeft.magnitude * camFar/camNear;
		float L_41;
		L_41 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), /*hidden argument*/NULL);
		float L_42 = V_2;
		float L_43 = V_1;
		V_10 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_41, (float)L_42))/(float)L_43));
		// topLeft.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_9), /*hidden argument*/NULL);
		// topLeft *= camScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_9;
		float L_45 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_44, L_45, /*hidden argument*/NULL);
		V_9 = L_46;
		// Vector3 topRight = (camtr.forward * camNear + toRight + toTop);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = V_0;
		NullCheck(L_47);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_47, /*hidden argument*/NULL);
		float L_49 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_48, L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_50, L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_52, L_53, /*hidden argument*/NULL);
		V_11 = L_54;
		// topRight.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_11), /*hidden argument*/NULL);
		// topRight *= camScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = V_11;
		float L_56 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_55, L_56, /*hidden argument*/NULL);
		V_11 = L_57;
		// Vector3 bottomRight = (camtr.forward * camNear + toRight - toTop);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58 = V_0;
		NullCheck(L_58);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_58, /*hidden argument*/NULL);
		float L_60 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_59, L_60, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_61, L_62, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_63, L_64, /*hidden argument*/NULL);
		V_12 = L_65;
		// bottomRight.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_12), /*hidden argument*/NULL);
		// bottomRight *= camScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = V_12;
		float L_67 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
		L_68 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_66, L_67, /*hidden argument*/NULL);
		V_12 = L_68;
		// Vector3 bottomLeft = (camtr.forward * camNear - toRight - toTop);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69 = V_0;
		NullCheck(L_69);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70;
		L_70 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_69, /*hidden argument*/NULL);
		float L_71 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_70, L_71, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
		L_74 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_72, L_73, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		L_76 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_74, L_75, /*hidden argument*/NULL);
		V_13 = L_76;
		// bottomLeft.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_13), /*hidden argument*/NULL);
		// bottomLeft *= camScale;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77 = V_13;
		float L_78 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		L_79 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_77, L_78, /*hidden argument*/NULL);
		V_13 = L_79;
		// frustumCorners.SetRow (0, topLeft);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = V_9;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_81;
		L_81 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_80, /*hidden argument*/NULL);
		Matrix4x4_SetRow_m86E7E23D71224106549DC25CEDFB992218C52187((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_5), 0, L_81, /*hidden argument*/NULL);
		// frustumCorners.SetRow (1, topRight);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82 = V_11;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_83;
		L_83 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_82, /*hidden argument*/NULL);
		Matrix4x4_SetRow_m86E7E23D71224106549DC25CEDFB992218C52187((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_5), 1, L_83, /*hidden argument*/NULL);
		// frustumCorners.SetRow (2, bottomRight);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = V_12;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_85;
		L_85 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_84, /*hidden argument*/NULL);
		Matrix4x4_SetRow_m86E7E23D71224106549DC25CEDFB992218C52187((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_5), 2, L_85, /*hidden argument*/NULL);
		// frustumCorners.SetRow (3, bottomLeft);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_86 = V_13;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_87;
		L_87 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_86, /*hidden argument*/NULL);
		Matrix4x4_SetRow_m86E7E23D71224106549DC25CEDFB992218C52187((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_5), 3, L_87, /*hidden argument*/NULL);
		// var camPos= camtr.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88 = V_0;
		NullCheck(L_88);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		L_89 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_88, /*hidden argument*/NULL);
		V_14 = L_89;
		// float FdotC = camPos.y-height;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90 = V_14;
		float L_91 = L_90.get_y_3();
		float L_92 = __this->get_height_10();
		V_15 = ((float)il2cpp_codegen_subtract((float)L_91, (float)L_92));
		// float paramK = (FdotC <= 0.0f ? 1.0f : 0.0f);
		float L_93 = V_15;
		if ((((float)L_93) <= ((float)(0.0f))))
		{
			goto IL_01c9;
		}
	}
	{
		G_B7_0 = (0.0f);
		goto IL_01ce;
	}

IL_01c9:
	{
		G_B7_0 = (1.0f);
	}

IL_01ce:
	{
		V_16 = G_B7_0;
		// fogMaterial.SetMatrix ("_FrustumCornersWS", frustumCorners);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_94 = __this->get_fogMaterial_14();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_95 = V_5;
		NullCheck(L_94);
		Material_SetMatrix_m4B2718A5E264BFDBAD965D8A67399746F6799DCD(L_94, _stringLiteralBD213185DCEB47321CF747205D877BA8F2EA049F, L_95, /*hidden argument*/NULL);
		// fogMaterial.SetVector ("_CameraWS", camPos);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_96 = __this->get_fogMaterial_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97 = V_14;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_98;
		L_98 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_97, /*hidden argument*/NULL);
		NullCheck(L_96);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_96, _stringLiteral2E804B550ACFEEAF6F65629A4F1291A7E641FEB6, L_98, /*hidden argument*/NULL);
		// fogMaterial.SetVector ("_HeightParams", new Vector4 (height, FdotC, paramK, heightDensity*0.5f));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_99 = __this->get_fogMaterial_14();
		float L_100 = __this->get_height_10();
		float L_101 = V_15;
		float L_102 = V_16;
		float L_103 = __this->get_heightDensity_11();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_104), L_100, L_101, L_102, ((float)il2cpp_codegen_multiply((float)L_103, (float)(0.5f))), /*hidden argument*/NULL);
		NullCheck(L_99);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_99, _stringLiteral35FAF5AC89B0748CF72542A4C62B04628796CE30, L_104, /*hidden argument*/NULL);
		// fogMaterial.SetVector ("_DistanceParams", new Vector4 (-Mathf.Max(startDistance,0.0f), 0, 0, 0));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_105 = __this->get_fogMaterial_14();
		float L_106 = __this->get_startDistance_12();
		float L_107;
		L_107 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_106, (0.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_108), ((-L_107)), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_105);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_105, _stringLiteral8D7A68A77F2D4B8A06C9D5E1177B4692AB5D238C, L_108, /*hidden argument*/NULL);
		// var sceneMode= RenderSettings.fogMode;
		int32_t L_109;
		L_109 = RenderSettings_get_fogMode_m7906B56E609BFBE526DFDE18FBD9FFB44C606B93(/*hidden argument*/NULL);
		V_17 = L_109;
		// var sceneDensity= RenderSettings.fogDensity;
		float L_110;
		L_110 = RenderSettings_get_fogDensity_mDED6FA3F6CA0894141236FAB99EE5FF7DFDDC8B6(/*hidden argument*/NULL);
		V_18 = L_110;
		// var sceneStart= RenderSettings.fogStartDistance;
		float L_111;
		L_111 = RenderSettings_get_fogStartDistance_m49AA3604575352B3B33A08540295045DDF00A53B(/*hidden argument*/NULL);
		V_19 = L_111;
		// var sceneEnd= RenderSettings.fogEndDistance;
		float L_112;
		L_112 = RenderSettings_get_fogEndDistance_mBE81E3EBEAE4F9360FBECFBC436176DCA5D1858E(/*hidden argument*/NULL);
		V_20 = L_112;
		// bool  linear = (sceneMode == FogMode.Linear);
		int32_t L_113 = V_17;
		V_22 = (bool)((((int32_t)L_113) == ((int32_t)1))? 1 : 0);
		// float diff = linear ? sceneEnd - sceneStart : 0.0f;
		bool L_114 = V_22;
		if (L_114)
		{
			goto IL_0287;
		}
	}
	{
		G_B10_0 = (0.0f);
		goto IL_028c;
	}

IL_0287:
	{
		float L_115 = V_20;
		float L_116 = V_19;
		G_B10_0 = ((float)il2cpp_codegen_subtract((float)L_115, (float)L_116));
	}

IL_028c:
	{
		V_23 = G_B10_0;
		// float invDiff = Mathf.Abs(diff) > 0.0001f ? 1.0f / diff : 0.0f;
		float L_117 = V_23;
		float L_118;
		L_118 = fabsf(L_117);
		if ((((float)L_118) > ((float)(9.99999975E-05f))))
		{
			goto IL_02a3;
		}
	}
	{
		G_B13_0 = (0.0f);
		goto IL_02ab;
	}

IL_02a3:
	{
		float L_119 = V_23;
		G_B13_0 = ((float)((float)(1.0f)/(float)L_119));
	}

IL_02ab:
	{
		V_24 = G_B13_0;
		// sceneParams.x = sceneDensity * 1.2011224087f; // density / sqrt(ln(2)), used by Exp2 fog mode
		float L_120 = V_18;
		(&V_21)->set_x_1(((float)il2cpp_codegen_multiply((float)L_120, (float)(1.2011224f))));
		// sceneParams.y = sceneDensity * 1.4426950408f; // density / ln(2), used by Exp fog mode
		float L_121 = V_18;
		(&V_21)->set_y_2(((float)il2cpp_codegen_multiply((float)L_121, (float)(1.44269502f))));
		// sceneParams.z = linear ? -invDiff : 0.0f;
		bool L_122 = V_22;
		G_B14_0 = (&V_21);
		if (L_122)
		{
			G_B15_0 = (&V_21);
			goto IL_02d8;
		}
	}
	{
		G_B16_0 = (0.0f);
		G_B16_1 = G_B14_0;
		goto IL_02db;
	}

IL_02d8:
	{
		float L_123 = V_24;
		G_B16_0 = ((-L_123));
		G_B16_1 = G_B15_0;
	}

IL_02db:
	{
		G_B16_1->set_z_3(G_B16_0);
		// sceneParams.w = linear ? sceneEnd * invDiff : 0.0f;
		bool L_124 = V_22;
		G_B17_0 = (&V_21);
		if (L_124)
		{
			G_B18_0 = (&V_21);
			goto IL_02ed;
		}
	}
	{
		G_B19_0 = (0.0f);
		G_B19_1 = G_B17_0;
		goto IL_02f2;
	}

IL_02ed:
	{
		float L_125 = V_20;
		float L_126 = V_24;
		G_B19_0 = ((float)il2cpp_codegen_multiply((float)L_125, (float)L_126));
		G_B19_1 = G_B18_0;
	}

IL_02f2:
	{
		G_B19_1->set_w_4(G_B19_0);
		// fogMaterial.SetVector ("_SceneFogParams", sceneParams);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_127 = __this->get_fogMaterial_14();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_128 = V_21;
		NullCheck(L_127);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(L_127, _stringLiteral560291CC6D93F4F37B4AD9680EF9CED1F1C78FF3, L_128, /*hidden argument*/NULL);
		// fogMaterial.SetVector ("_SceneFogMode", new Vector4((int)sceneMode, useRadialDistance ? 1 : 0, 0, 0));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_129 = __this->get_fogMaterial_14();
		int32_t L_130 = V_17;
		bool L_131 = __this->get_useRadialDistance_8();
		G_B20_0 = ((float)((float)L_130));
		G_B20_1 = _stringLiteral10E63F1449DDA0560E2408DA0E4E93F4C823F61C;
		G_B20_2 = L_129;
		if (L_131)
		{
			G_B21_0 = ((float)((float)L_130));
			G_B21_1 = _stringLiteral10E63F1449DDA0560E2408DA0E4E93F4C823F61C;
			G_B21_2 = L_129;
			goto IL_0322;
		}
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		G_B22_3 = G_B20_2;
		goto IL_0323;
	}

IL_0322:
	{
		G_B22_0 = 1;
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
		G_B22_3 = G_B21_2;
	}

IL_0323:
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_132;
		memset((&L_132), 0, sizeof(L_132));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_132), G_B22_1, ((float)((float)G_B22_0)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(G_B22_3);
		Material_SetVector_mCB22CD5FDA6D8C7C282D7998A9244E12CC293F0D(G_B22_3, G_B22_2, L_132, /*hidden argument*/NULL);
		// int pass = 0;
		V_25 = 0;
		// if (distanceFog && heightFog)
		bool L_133 = __this->get_distanceFog_7();
		if (!L_133)
		{
			goto IL_0350;
		}
	}
	{
		bool L_134 = __this->get_heightFog_9();
		if (!L_134)
		{
			goto IL_0350;
		}
	}
	{
		// pass = 0; // distance + height
		V_25 = 0;
		goto IL_0360;
	}

IL_0350:
	{
		// else if (distanceFog)
		bool L_135 = __this->get_distanceFog_7();
		if (!L_135)
		{
			goto IL_035d;
		}
	}
	{
		// pass = 1; // distance only
		V_25 = 1;
		goto IL_0360;
	}

IL_035d:
	{
		// pass = 2; // height only
		V_25 = 2;
	}

IL_0360:
	{
		// CustomGraphicsBlit (source, destination, fogMaterial, pass);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_136 = ___source0;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_137 = ___destination1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_138 = __this->get_fogMaterial_14();
		int32_t L_139 = V_25;
		GlobalFog_CustomGraphicsBlit_m6D2C9F3F0EDD6141EAB19FA67B3A46C7CC486E13(L_136, L_137, L_138, L_139, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalFog_CustomGraphicsBlit_m6D2C9F3F0EDD6141EAB19FA67B3A46C7CC486E13 (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___source0, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fxMaterial2, int32_t ___passNr3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RenderTexture.active = dest;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___dest1;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_0, /*hidden argument*/NULL);
		// fxMaterial.SetTexture ("_MainTex", source);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = ___fxMaterial2;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_2 = ___source0;
		NullCheck(L_1);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_1, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_2, /*hidden argument*/NULL);
		// GL.PushMatrix ();
		GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3(/*hidden argument*/NULL);
		// GL.LoadOrtho ();
		GL_LoadOrtho_mF9410BE33CE4CBB921240C428A10D4086D2D3174(/*hidden argument*/NULL);
		// fxMaterial.SetPass (passNr);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = ___fxMaterial2;
		int32_t L_4 = ___passNr3;
		NullCheck(L_3);
		bool L_5;
		L_5 = Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C(L_3, L_4, /*hidden argument*/NULL);
		// GL.Begin (GL.QUADS);
		GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622(7, /*hidden argument*/NULL);
		// GL.MultiTexCoord2 (0, 0.0f, 0.0f);
		GL_MultiTexCoord2_m49C02CD7D73016FE3F5C94EFA6CA454AB8CA09B1(0, (0.0f), (0.0f), /*hidden argument*/NULL);
		// GL.Vertex3 (0.0f, 0.0f, 3.0f); // BL
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9((0.0f), (0.0f), (3.0f), /*hidden argument*/NULL);
		// GL.MultiTexCoord2 (0, 1.0f, 0.0f);
		GL_MultiTexCoord2_m49C02CD7D73016FE3F5C94EFA6CA454AB8CA09B1(0, (1.0f), (0.0f), /*hidden argument*/NULL);
		// GL.Vertex3 (1.0f, 0.0f, 2.0f); // BR
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9((1.0f), (0.0f), (2.0f), /*hidden argument*/NULL);
		// GL.MultiTexCoord2 (0, 1.0f, 1.0f);
		GL_MultiTexCoord2_m49C02CD7D73016FE3F5C94EFA6CA454AB8CA09B1(0, (1.0f), (1.0f), /*hidden argument*/NULL);
		// GL.Vertex3 (1.0f, 1.0f, 1.0f); // TR
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9((1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		// GL.MultiTexCoord2 (0, 0.0f, 1.0f);
		GL_MultiTexCoord2_m49C02CD7D73016FE3F5C94EFA6CA454AB8CA09B1(0, (0.0f), (1.0f), /*hidden argument*/NULL);
		// GL.Vertex3 (0.0f, 1.0f, 0.0f); // TL
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9((0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		// GL.End ();
		GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7(/*hidden argument*/NULL);
		// GL.PopMatrix ();
		GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlobalFog__ctor_m009B89438058D759F3968069E3DCCC2D495E0561 (GlobalFog_tCE3BBEC5AC0BD36BA5D86A05EF4F13EB920736B0 * __this, const RuntimeMethod* method)
{
	{
		// public bool  distanceFog = true;
		__this->set_distanceFog_7((bool)1);
		// public bool  heightFog = true;
		__this->set_heightFog_9((bool)1);
		// public float height = 1.0f;
		__this->set_height_10((1.0f));
		// public float heightDensity = 2.0f;
		__this->set_heightDensity_11((2.0f));
		PostEffectsBase__ctor_mFA1F5C2F42295DE5BC5B12E891F7EFAE11D91728(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * PostEffectsBase_CheckShaderAndCreateMaterial_mA0855C41F4D32605063FAFD0836FFB78A0BCF490 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___s0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m2Create1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.Log("Missing shader in " + ToString ());
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// return null;
		return (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL;
	}

IL_0026:
	{
		// if (s.isSupported && m2Create && m2Create.shader == s)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_4 = ___s0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = ___m2Create1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = ___m2Create1;
		NullCheck(L_8);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_9;
		L_9 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_8, /*hidden argument*/NULL);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_10 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0046;
		}
	}
	{
		// return m2Create;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = ___m2Create1;
		return L_12;
	}

IL_0046:
	{
		// if (!s.isSupported)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_13 = ___s0;
		NullCheck(L_13);
		bool L_14;
		L_14 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0090;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12(__this, /*hidden argument*/NULL);
		// Debug.Log("The shader " + s.ToString() + " on effect "+ToString()+" is not supported on this platform!");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_18 = ___s0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		String_t* L_22;
		L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_22);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_21;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAD24B96FEF7F6BC453A4D5E2575831BC289660D8);
		String_t* L_24;
		L_24 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_24, /*hidden argument*/NULL);
		// return null;
		return (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL;
	}

IL_0090:
	{
		// m2Create = new Material (s);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_25 = ___s0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_26, L_25, /*hidden argument*/NULL);
		___m2Create1 = L_26;
		// m2Create.hideFlags = HideFlags.DontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = ___m2Create1;
		NullCheck(L_27);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_27, ((int32_t)52), /*hidden argument*/NULL);
		// if (m2Create)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = ___m2Create1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		// return m2Create;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = ___m2Create1;
		return L_30;
	}

IL_00aa:
	{
		// else return null;
		return (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL;
	}
}
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * PostEffectsBase_CreateMaterial_m58573EB3A5D193A92003C5DF82DAACB9ED8E8078 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___s0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m2Create1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!s)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.Log ("Missing shader in " + ToString ());
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8AD58CDB5A877779756FB284EF557ED8EC4267E4, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// return null;
		return (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL;
	}

IL_001f:
	{
		// if (m2Create && (m2Create.shader == s) && (s.isSupported))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = ___m2Create1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = ___m2Create1;
		NullCheck(L_6);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_7;
		L_7 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_6, /*hidden argument*/NULL);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_8 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_10 = ___s0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003f;
		}
	}
	{
		// return m2Create;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = ___m2Create1;
		return L_12;
	}

IL_003f:
	{
		// if (!s.isSupported)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_13 = ___s0;
		NullCheck(L_13);
		bool L_14;
		L_14 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0049;
		}
	}
	{
		// return null;
		return (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL;
	}

IL_0049:
	{
		// m2Create = new Material (s);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_15 = ___s0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(L_16, L_15, /*hidden argument*/NULL);
		___m2Create1 = L_16;
		// m2Create.hideFlags = HideFlags.DontSave;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17 = ___m2Create1;
		NullCheck(L_17);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_17, ((int32_t)52), /*hidden argument*/NULL);
		// if (m2Create)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = ___m2Create1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0063;
		}
	}
	{
		// return m2Create;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = ___m2Create1;
		return L_20;
	}

IL_0063:
	{
		// else return null;
		return (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_OnEnable_m0794D55F439C915D930543BD5BC3DD98D0900B27 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	{
		// isSupported = true;
		__this->set_isSupported_6((bool)1);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_mEC1CB870A1763E3545F7829BAC85CE42275DF4B6 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	{
		// return CheckSupport (false);
		bool L_0;
		L_0 = PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A(__this, (bool)0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckResources_m304B5191F98669642E68716BD21E97DC4651836B (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning ("CheckResources () for " + ToString() + " should be overwritten.");
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralE691C6599F2EFD48FF5D07CCA40BF885CA11AD70, L_0, _stringLiteral38860340D6399FED72D34E843CC6D18D6E2BCF24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_1, /*hidden argument*/NULL);
		// return isSupported;
		bool L_2 = __this->get_isSupported_6();
		return L_2;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_Start_mB6D8676C7127E664315ADFAAD40A44071D778121 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	{
		// CheckResources ();
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources() */, __this);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, bool ___needDepth0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * G_B2_0 = NULL;
	PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * G_B3_1 = NULL;
	{
		// isSupported = true;
		__this->set_isSupported_6((bool)1);
		// supportHDRTextures = SystemInfo.SupportsRenderTextureFormat(RenderTextureFormat.ARGBHalf);
		bool L_0;
		L_0 = SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B(2, /*hidden argument*/NULL);
		__this->set_supportHDRTextures_4(L_0);
		// supportDX11 = SystemInfo.graphicsShaderLevel >= 50 && SystemInfo.supportsComputeShaders;
		int32_t L_1;
		L_1 = SystemInfo_get_graphicsShaderLevel_m2AB377CAE1D1A45C3E05A4ABF40383E3B4797A95(/*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)50))))
		{
			G_B2_0 = __this;
			goto IL_0024;
		}
	}
	{
		bool L_2;
		L_2 = SystemInfo_get_supportsComputeShaders_mBEBA178F780915D8BC2FF9ED04D75FBB361987C6(/*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0025:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_supportDX11_5((bool)G_B3_0);
		// if (!SystemInfo.supportsImageEffects || !SystemInfo.supportsRenderTextures)
		bool L_3;
		L_3 = SystemInfo_get_supportsImageEffects_m46EC93D9C657FF09E87B8853F8A42C5E91BAD224(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		bool L_4;
		L_4 = SystemInfo_get_supportsRenderTextures_mEF4C2D195EBF734268B24BAD3599E385FC6AD4B3(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0040;
		}
	}

IL_0038:
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0040:
	{
		// if (needDepth && !SystemInfo.SupportsRenderTextureFormat (RenderTextureFormat.Depth))
		bool L_5 = ___needDepth0;
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		bool L_6;
		L_6 = SystemInfo_SupportsRenderTextureFormat_m243F66021A643C711FEDEA6B6D002B49ECEEFE1B(1, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0053;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0053:
	{
		// if (needDepth)
		bool L_7 = ___needDepth0;
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		// GetComponent<Camera>().depthTextureMode |= DepthTextureMode.Depth;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8;
		L_8 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Camera_get_depthTextureMode_mA4B03C6B552FB03DF8A8C20DC9F4EB8FD978A7DD(L_9, /*hidden argument*/NULL);
		NullCheck(L_9);
		Camera_set_depthTextureMode_m2D4631800947438BE9A7697778E2CB0E38083CF1(L_9, ((int32_t)((int32_t)L_10|(int32_t)1)), /*hidden argument*/NULL);
	}

IL_0069:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckSupport_m8016EB7CDCA60B4E5334AA1CEFE2EB2AA0A717ED (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, bool ___needDepth0, bool ___needHdr1, const RuntimeMethod* method)
{
	{
		// if (!CheckSupport(needDepth))
		bool L_0 = ___needDepth0;
		bool L_1;
		L_1 = PostEffectsBase_CheckSupport_m20B1CB0EC0F019D345427F851C67A5FD2E01061A(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// if (needHdr && !supportHDRTextures)
		bool L_2 = ___needHdr1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		bool L_3 = __this->get_supportHDRTextures_4();
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_001e:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_Dx11Support_mD0D2A3A932771541E700EE9420F37038759DBC27 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	{
		// return supportDX11;
		bool L_0 = __this->get_supportDX11_5();
		return L_0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_ReportAutoDisable_m732B3B3112769D5ADA588AEFA3F470A4EB5A3D31 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning ("The image effect " + ToString() + " has been disabled as it's not supported on the current platform.");
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralBC80DA7614408087FE75EA6806A9CBE62109EF15, L_0, _stringLiteral26E519C4459C9C2AE04CACDA4DCF6450F759B33B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostEffectsBase_CheckShader_mC043E14AD142392993ECD52EC5882B6C5E0501BD (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("The shader " + s.ToString () + " on effect "+ ToString () + " is not part of the Unity 3.2+ effects suite anymore. For best performance and quality, please ensure you are using the latest Standard Assets Image Effects (Pro only) package.");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC106589373683AEAB4EA765F77169BDAEB4DC540);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_3 = ___s0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral46FDB78170F0875B7786D0DF6CEC4C315A44B763);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDCCF60D13A2F5176335F2A450A37F1B544DA4C96);
		String_t* L_9;
		L_9 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_9, /*hidden argument*/NULL);
		// if (!s.isSupported)
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_10 = ___s0;
		NullCheck(L_10);
		bool L_11;
		L_11 = Shader_get_isSupported_m958F4978B3DFAD2FD471549B2C1D8A82639EDA41(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_004a;
		}
	}
	{
		// NotSupported ();
		PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12(__this, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_NotSupported_mB15B8F953382CBA0AC80B39828B807399B730F12 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// isSupported = false;
		__this->set_isSupported_6((bool)0);
		// return;
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase_DrawBorder_m0FA412FECC786A5623F734DBD9D1F7EE016BE7E2 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___dest0, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// RenderTexture.active = dest;
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_0 = ___dest0;
		RenderTexture_set_active_mA70AFD6D3CB54E9AEDDD45E48B8B6979FDB75ED9(L_0, /*hidden argument*/NULL);
		// bool  invertY = true; // source.texelSize.y < 0.0ff;
		V_3 = (bool)1;
		// GL.PushMatrix();
		GL_PushMatrix_mF1F26015AB75226AB048A7ABF700871C5A0AE0B3(/*hidden argument*/NULL);
		// GL.LoadOrtho();
		GL_LoadOrtho_mF9410BE33CE4CBB921240C428A10D4086D2D3174(/*hidden argument*/NULL);
		// for (int i = 0; i < material.passCount; i++)
		V_4 = 0;
		goto IL_027d;
	}

IL_001a:
	{
		// material.SetPass(i);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = ___material1;
		int32_t L_2 = V_4;
		NullCheck(L_1);
		bool L_3;
		L_3 = Material_SetPass_mC888245491A21488CFF2FD64CA45E8404CB9FF9C(L_1, L_2, /*hidden argument*/NULL);
		// if (invertY)
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// y1_ = 1.0f; y2_ = 0.0f;
		V_5 = (1.0f);
		// y1_ = 1.0f; y2_ = 0.0f;
		V_6 = (0.0f);
		// }
		goto IL_0044;
	}

IL_0036:
	{
		// y1_ = 0.0f; y2_ = 1.0f;
		V_5 = (0.0f);
		// y1_ = 0.0f; y2_ = 1.0f;
		V_6 = (1.0f);
	}

IL_0044:
	{
		// x1 = 0.0f;
		// x2 = 0.0f + 1.0f/(dest.width*1.0f);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_5 = ___dest0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		V_0 = ((float)il2cpp_codegen_add((float)(0.0f), (float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_multiply((float)((float)((float)L_6)), (float)(1.0f)))))));
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.Begin(GL.QUADS);
		GL_Begin_mD719B21F92DCF2D8F567C008AD21CA73CA762622(7, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_7 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_7, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_8 = (0.0f);
		float L_9 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_8, L_9, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_10 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_10, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_11 = V_0;
		float L_12 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_11, L_12, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_13 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_13, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_14 = V_0;
		float L_15 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_14, L_15, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_16 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_16, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_17 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_8, L_17, (0.100000001f), /*hidden argument*/NULL);
		// x1 = 1.0f - 1.0f/(dest.width*1.0f);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_18 = ___dest0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_18);
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_20 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_20, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_21 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_multiply((float)((float)((float)L_19)), (float)(1.0f)))))));
		float L_22 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_21, L_22, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_23 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_23, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_24 = V_0;
		float L_25 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_24, L_25, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_26 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_26, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_27 = V_0;
		float L_28 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_27, L_28, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_29 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_29, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_30 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_21, L_30, (0.100000001f), /*hidden argument*/NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 0.0f;
		V_1 = (0.0f);
		// y2 = 0.0f + 1.0f/(dest.height*1.0f);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_31 = ___dest0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_31);
		V_2 = ((float)il2cpp_codegen_add((float)(0.0f), (float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_multiply((float)((float)((float)L_32)), (float)(1.0f)))))));
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_33 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_33, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_34 = (0.0f);
		float L_35 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_34, L_35, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_36 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_36, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_37 = V_0;
		float L_38 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_37, L_38, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_39 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_39, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_40 = V_0;
		float L_41 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_40, L_41, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_42 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_42, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_43 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_34, L_43, (0.100000001f), /*hidden argument*/NULL);
		// x1 = 0.0f;
		// x2 = 1.0f;
		V_0 = (1.0f);
		// y1 = 1.0f - 1.0f/(dest.height*1.0f);
		RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * L_44 = ___dest0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_44);
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)(1.0f)/(float)((float)il2cpp_codegen_multiply((float)((float)((float)L_45)), (float)(1.0f)))))));
		// y2 = 1.0f;
		V_2 = (1.0f);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_46 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_46, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y1_); GL.Vertex3(x1, y1, 0.1f);
		float L_47 = (0.0f);
		float L_48 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_47, L_48, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_49 = V_5;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_49, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y1_); GL.Vertex3(x2, y1, 0.1f);
		float L_50 = V_0;
		float L_51 = V_1;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_50, L_51, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_52 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((1.0f), L_52, /*hidden argument*/NULL);
		// GL.TexCoord2(1.0f, y2_); GL.Vertex3(x2, y2, 0.1f);
		float L_53 = V_0;
		float L_54 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_53, L_54, (0.100000001f), /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_55 = V_6;
		GL_TexCoord2_mC0F9C6145A4A03D24E23BA5C5696EE834F8BA5AE((0.0f), L_55, /*hidden argument*/NULL);
		// GL.TexCoord2(0.0f, y2_); GL.Vertex3(x1, y2, 0.1f);
		float L_56 = V_2;
		GL_Vertex3_mA3D208C1AAEDFCF24364A88552204D8D1BE6AFE9(L_47, L_56, (0.100000001f), /*hidden argument*/NULL);
		// GL.End();
		GL_End_m4A164117D2D3CD3620938F2D29EFBA2D5CB900B7(/*hidden argument*/NULL);
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_027d:
	{
		// for (int i = 0; i < material.passCount; i++)
		int32_t L_58 = V_4;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_59 = ___material1;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Material_get_passCount_m8604F2400F17AC2524B95F1C4F39C785896EEE3A(L_59, /*hidden argument*/NULL);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_001a;
		}
	}
	{
		// GL.PopMatrix();
		GL_PopMatrix_m06F4C60CA3B91C7F8B7EFF83D21563C9613B3738(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostEffectsBase__ctor_mFA1F5C2F42295DE5BC5B12E891F7EFAE11D91728 (PostEffectsBase_tDF40BA881AF9C40D58301629E35E351025B2485E * __this, const RuntimeMethod* method)
{
	{
		// protected bool  supportHDRTextures = true;
		__this->set_supportHDRTextures_4((bool)1);
		// protected bool  isSupported = true;
		__this->set_isSupported_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Start_m65B0DAC30D1A9E246D4CF14672D8138B53EDA564 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score = scoretext.GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_scoretext_5();
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_score_6(L_1);
		// }
		return;
	}
}
// System.Void Score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Update_mB696B161F91F1AE220BCD4F47028DE039D9697D2 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral867D450998537BC0893A5F264211DA389A275A29);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score.text = gm.score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_score_6();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = __this->get_gm_4();
		NullCheck(L_1);
		float* L_2 = L_1->get_address_of_score_9();
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// PlayerPrefs.SetFloat("savedScore", gm.score);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = __this->get_gm_4();
		NullCheck(L_4);
		float L_5 = L_4->get_score_9();
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteral867D450998537BC0893A5F264211DA389A275A29, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mEE9186D20D9B28A735262B29AB6E8D9FF1380FB6 (Score_tE07CBD9780DFC212BE43719819F512E8861103C7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void awakeManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void awakeManager_FixedUpdate_mDF5B6C6DC034B47F9B9CD6912E8B4FE32A21AB42 (awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_1 = NULL;
	{
		// GameObject[] cars = {car, car1, car2, car3};
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)4);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = L_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_car_6();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_2);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_car1_7();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_4);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_car2_8();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_6);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_car3_9();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_8);
		V_0 = L_7;
		// Vector3[] positions = {car_position, car1_position, car2_position, car3_position};
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_9 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)4);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_10 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_car_position_12();
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_11);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_12 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_car1_position_13();
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_13);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_14 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = __this->get_car2_position_14();
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_15);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_16 = L_14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = __this->get_car3_position_15();
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_17);
		V_1 = L_16;
		// cars[0].transform.position = positions[0];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_24, /*hidden argument*/NULL);
		// cars[1].transform.position = positions[1];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_28, L_31, /*hidden argument*/NULL);
		// cars[2].transform.position = positions[2];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37 = 2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_35);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_38, /*hidden argument*/NULL);
		// cars[3].transform.position = positions[3];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_43 = V_1;
		NullCheck(L_43);
		int32_t L_44 = 3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_42);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_42, L_45, /*hidden argument*/NULL);
		// toRotate.transform.RotateAround(toRotate.transform.position, toRotate.transform.up, Time.deltaTime * rotateSpeed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_toRotate_5();
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_46, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = __this->get_toRotate_5();
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_49, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = __this->get_toRotate_5();
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_52, /*hidden argument*/NULL);
		float L_54;
		L_54 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_55 = __this->get_rotateSpeed_16();
		NullCheck(L_47);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_47, L_50, L_53, ((float)il2cpp_codegen_multiply((float)L_54, (float)L_55)), /*hidden argument*/NULL);
		// cars[currentCarNum].transform.RotateAround(toRotate.transform.position, toRotate.transform.up, Time.deltaTime * rotateSpeed);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_56 = V_0;
		int32_t L_57 = __this->get_currentCarNum_17();
		NullCheck(L_56);
		int32_t L_58 = L_57;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_59, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61 = __this->get_toRotate_5();
		NullCheck(L_61);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_62, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = __this->get_toRotate_5();
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_65, /*hidden argument*/NULL);
		float L_67;
		L_67 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_68 = __this->get_rotateSpeed_16();
		NullCheck(L_60);
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_60, L_63, L_66, ((float)il2cpp_codegen_multiply((float)L_67, (float)L_68)), /*hidden argument*/NULL);
		// cars[currentCarNum].transform.position = shown_position;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_69 = V_0;
		int32_t L_70 = __this->get_currentCarNum_17();
		NullCheck(L_69);
		int32_t L_71 = L_70;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_72, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = __this->get_shown_position_10();
		NullCheck(L_73);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_73, L_74, /*hidden argument*/NULL);
		// selectedCar = cars[currentCarNum];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_75 = V_0;
		int32_t L_76 = __this->get_currentCarNum_17();
		NullCheck(L_75);
		int32_t L_77 = L_76;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		__this->set_selectedCar_4(L_78);
		// cars[previousCarNum].transform.rotation = Quaternion.Euler(cars_rotation);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_79 = V_0;
		int32_t L_80 = __this->get_previousCarNum_18();
		NullCheck(L_79);
		int32_t L_81 = L_80;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_82, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = __this->get_cars_rotation_11();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_85;
		L_85 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_84, /*hidden argument*/NULL);
		NullCheck(L_83);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_83, L_85, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void awakeManager::playGameButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void awakeManager_playGameButton_m31BEC182316636D44B8347E2561BE38E1795AC17 (awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEEE81DCC5079F69B7EB0ED499AACDFD6721FB38);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("selectedCar", selectedCar.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_selectedCar_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteralEEEE81DCC5079F69B7EB0ED499AACDFD6721FB38, L_1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void awakeManager::quitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void awakeManager_quitButton_m5AD58EBFF0F63CE437C02FA73FC3ED7EA777740B (awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void awakeManager::nextCarButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void awakeManager_nextCarButton_m0D952C2EFE2BFB0B647080AEA59B8F07112B890D (awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8 * __this, const RuntimeMethod* method)
{
	{
		// if (currentCarNum < 3)
		int32_t L_0 = __this->get_currentCarNum_17();
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_0024;
		}
	}
	{
		// previousCarNum = currentCarNum;
		int32_t L_1 = __this->get_currentCarNum_17();
		__this->set_previousCarNum_18(L_1);
		// currentCarNum++;
		int32_t L_2 = __this->get_currentCarNum_17();
		__this->set_currentCarNum_17(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// }else
		return;
	}

IL_0024:
	{
		// previousCarNum = currentCarNum;
		int32_t L_3 = __this->get_currentCarNum_17();
		__this->set_previousCarNum_18(L_3);
		// currentCarNum = 0;
		__this->set_currentCarNum_17(0);
		// }
		return;
	}
}
// System.Void awakeManager::previousCarButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void awakeManager_previousCarButton_m068582571B9C83C123E7F6D2C4603B874D534D95 (awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8 * __this, const RuntimeMethod* method)
{
	{
		// if (currentCarNum > 0)
		int32_t L_0 = __this->get_currentCarNum_17();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// previousCarNum = currentCarNum;
		int32_t L_1 = __this->get_currentCarNum_17();
		__this->set_previousCarNum_18(L_1);
		// currentCarNum--;
		int32_t L_2 = __this->get_currentCarNum_17();
		__this->set_currentCarNum_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)));
		// }else
		return;
	}

IL_0024:
	{
		// previousCarNum = currentCarNum;
		int32_t L_3 = __this->get_currentCarNum_17();
		__this->set_previousCarNum_18(L_3);
		// currentCarNum = 3;
		__this->set_currentCarNum_17(3);
		// }
		return;
	}
}
// System.Void awakeManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void awakeManager__ctor_mBB831A2ED99754C378B83B83ED01EE9DC6AE80CE (awakeManager_t14F9432DCB58596EBDD04EFFD38193C5914A1DC8 * __this, const RuntimeMethod* method)
{
	{
		// private Vector3 shown_position = new Vector3( 0.48f, 2.35f, 1.8f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.479999989f), (2.3499999f), (1.79999995f), /*hidden argument*/NULL);
		__this->set_shown_position_10(L_0);
		// private Vector3 cars_rotation = new Vector3(0, 180, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (180.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_cars_rotation_11(L_1);
		// private Vector3 car_position = new Vector3( -3.6f, 1.82f, 4.53f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (-3.5999999f), (1.82000005f), (4.53000021f), /*hidden argument*/NULL);
		__this->set_car_position_12(L_2);
		// private Vector3 car1_position = new Vector3( -0.99f, 2.17f, 5.25f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (-0.99000001f), (2.17000008f), (5.25f), /*hidden argument*/NULL);
		__this->set_car1_position_13(L_3);
		// private Vector3 car2_position = new Vector3( 2.14f, 2f, 4.96f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (2.1400001f), (2.0f), (4.96000004f), /*hidden argument*/NULL);
		__this->set_car2_position_14(L_4);
		// private Vector3 car3_position = new Vector3( 4.57f, 2.18f, 4.53f);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (4.57000017f), (2.18000007f), (4.53000021f), /*hidden argument*/NULL);
		__this->set_car3_position_15(L_5);
		// private float rotateSpeed = 9.0f;
		__this->set_rotateSpeed_16((9.0f));
		// private int previousCarNum = 3;
		__this->set_previousCarNum_18(3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraController_Start_mFA339310C69BB7364F87A9849CFD605B78F6653B (cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tiscontroller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54_m74CB0ADA70BC05BBF5E8DAD36ED6CB681D731524_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0770C8A4CE7977C0CF704EEA0FE098E008D76600);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraPos = new Vector2[3];
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_0 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_cameraPos_16(L_0);
		// cameraPos[0] = new Vector2(2,0);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = __this->get_cameraPos_16();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (2.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_2);
		// cameraPos[1] = new Vector2(7.5f,1f);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_3 = __this->get_cameraPos_16();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), (7.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_4);
		// cameraPos[2] = new Vector2(8.4f,1.6f);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_5 = __this->get_cameraPos_16();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), (8.39999962f), (1.60000002f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_6);
		// camera = gameObject.GetComponent<Camera>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8;
		L_8 = GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49(L_7, /*hidden argument*/GameObject_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE3C86755BA935C0F4BDABF7D1E338FA5247E4F49_RuntimeMethod_var);
		__this->set_camera_8(L_8);
		// atachedVehicle = GameObject.FindGameObjectWithTag("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		__this->set_atachedVehicle_5(L_9);
		// target = atachedVehicle.transform.Find("focus").gameObject.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_atachedVehicle_5();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_11, _stringLiteral0770C8A4CE7977C0CF704EEA0FE098E008D76600, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		__this->set_target_14(L_14);
		// controllerRef = atachedVehicle.GetComponent<controller>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_atachedVehicle_5();
		NullCheck(L_15);
		controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * L_16;
		L_16 = GameObject_GetComponent_Tiscontroller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54_m74CB0ADA70BC05BBF5E8DAD36ED6CB681D731524(L_15, /*hidden argument*/GameObject_GetComponent_Tiscontroller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54_m74CB0ADA70BC05BBF5E8DAD36ED6CB681D731524_RuntimeMethod_var);
		__this->set_controllerRef_7(L_16);
		// camera.usePhysicalProperties = true;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_17 = __this->get_camera_8();
		NullCheck(L_17);
		Camera_set_usePhysicalProperties_m6C559F45C8DDE120C2718C7887254EC386E30BE8(L_17, (bool)1, /*hidden argument*/NULL);
		// camera.fieldOfView = fieldOfView;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_18 = __this->get_camera_8();
		float L_19 = __this->get_fieldOfView_4();
		NullCheck(L_18);
		Camera_set_fieldOfView_m138FE103CAC4B803F39E4CF579609A5C3FEB5E49(L_18, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cameraController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraController_FixedUpdate_mFF1BC668B666725FBE68977DC322D08C63124D64 (cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A * __this, const RuntimeMethod* method)
{
	{
		// updateCam();
		cameraController_updateCam_mB12338CE88EEDABC4B439E4E754B0E399691221F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cameraController::cycleCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraController_cycleCamera_m609135830C901DFF8558334F6B797FAB644DE094 (cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A * __this, const RuntimeMethod* method)
{
	{
		// if(locationIndicator >= cameraPos.Length-1 || locationIndicator < 0) locationIndicator = 0;
		int32_t L_0 = __this->get_locationIndicator_6();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = __this->get_cameraPos_16();
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = __this->get_locationIndicator_6();
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}

IL_001b:
	{
		// if(locationIndicator >= cameraPos.Length-1 || locationIndicator < 0) locationIndicator = 0;
		__this->set_locationIndicator_6(0);
		return;
	}

IL_0023:
	{
		// else locationIndicator ++;
		int32_t L_3 = __this->get_locationIndicator_6();
		__this->set_locationIndicator_6(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// }
		return;
	}
}
// System.Void cameraController::updateCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraController_updateCam_mB12338CE88EEDABC4B439E4E754B0E399691221F (cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A * __this, const RuntimeMethod* method)
{
	cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A * G_B4_0 = NULL;
	cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A * G_B5_1 = NULL;
	{
		// if(Input.GetKeyDown(KeyCode.Tab)){
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)9), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// cycleCamera();
		cameraController_cycleCamera_m609135830C901DFF8558334F6B797FAB644DE094(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// newPos = target.position - (target.forward * cameraPos[locationIndicator].x) + (target.up * cameraPos[locationIndicator].y) ;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_target_14();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_target_14();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_3, /*hidden argument*/NULL);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_5 = __this->get_cameraPos_16();
		int32_t L_6 = __this->get_locationIndicator_6();
		NullCheck(L_5);
		float L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = __this->get_target_14();
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_10, /*hidden argument*/NULL);
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_12 = __this->get_cameraPos_16();
		int32_t L_13 = __this->get_locationIndicator_6();
		NullCheck(L_12);
		float L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_15, /*hidden argument*/NULL);
		__this->set_newPos_13(L_16);
		// transform.position = newPos * (1 - smoothTime) + transform.position * smoothTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = __this->get_newPos_13();
		float L_19 = __this->get_smoothTime_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_19)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = __this->get_smoothTime_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_20, L_24, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_25, /*hidden argument*/NULL);
		// transform.LookAt(target.transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = __this->get_target_14();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_LookAt_m49185D782014D16DA747C1296BEBAC3FB3CEDC1F(L_26, L_28, /*hidden argument*/NULL);
		// transform.localPosition += transform.forward * controllerRef.KPH / bandEffect ;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30 = L_29;
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_30, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_32, /*hidden argument*/NULL);
		controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * L_34 = __this->get_controllerRef_7();
		NullCheck(L_34);
		float L_35 = L_34->get_KPH_25();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_33, L_35, /*hidden argument*/NULL);
		float L_37 = __this->get_bandEffect_15();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_36, L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_31, L_38, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_30, L_39, /*hidden argument*/NULL);
		// bias = max - controllerRef.KPH  / 400  ;
		float L_40 = __this->get_max_12();
		controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * L_41 = __this->get_controllerRef_7();
		NullCheck(L_41);
		float L_42 = L_41->get_KPH_25();
		__this->set_bias_9(((float)il2cpp_codegen_subtract((float)L_40, (float)((float)((float)L_42/(float)(400.0f))))));
		// smoothTime =( bias >=smoothTimemin)? bias :smoothTimemin;
		float L_43 = __this->get_bias_9();
		float L_44 = __this->get_smoothTimemin_11();
		G_B3_0 = __this;
		if ((((float)L_43) >= ((float)L_44)))
		{
			G_B4_0 = __this;
			goto IL_013a;
		}
	}
	{
		float L_45 = __this->get_smoothTimemin_11();
		G_B5_0 = L_45;
		G_B5_1 = G_B3_0;
		goto IL_0140;
	}

IL_013a:
	{
		float L_46 = __this->get_bias_9();
		G_B5_0 = L_46;
		G_B5_1 = G_B4_0;
	}

IL_0140:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_smoothTime_10(G_B5_0);
		// }
		return;
	}
}
// System.Void cameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraController__ctor_m19FFD3A0340E398E218CFF1198165DAD843C52A2 (cameraController_t4DB7EADFAF0D308298C4CF05A917A379E3D2A44A * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField]public float fieldOfView = 68f;
		__this->set_fieldOfView_4((68.0f));
		// private int locationIndicator = 1 ;
		__this->set_locationIndicator_6(1);
		// private float smoothTime = .5f;
		__this->set_smoothTime_10((0.5f));
		// private float smoothTimemin = .5f , max = .9f;
		__this->set_smoothTimemin_11((0.5f));
		// private float smoothTimemin = .5f , max = .9f;
		__this->set_max_12((0.899999976f));
		// public float bandEffect = 300;
		__this->set_bandEffect_15((300.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cameraLocation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraLocation_Start_mBE596E85E94409696817BA5D484C31EAF0A0992A (cameraLocation_t3EC3772C068B74CC5D3BBD9279C54B5FB77E5D5B * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void cameraLocation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraLocation_Update_m87857C43989B78EA23D2608AB0471C3C7184CCE9 (cameraLocation_t3EC3772C068B74CC5D3BBD9279C54B5FB77E5D5B * __this, const RuntimeMethod* method)
{
	{
		// transform.position = new Vector3(road.transform.position.x, 6.0f, game_manager.activeCar.transform.position.z - 3.5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_road_4();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = __this->get_game_manager_5();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_activeCar_4();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_4, (6.0f), ((float)il2cpp_codegen_subtract((float)L_9, (float)(3.5f))), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void cameraLocation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cameraLocation__ctor_m7619421E401A1744ACEED81EEDFC6ED079FFCCFE (cameraLocation_t3EC3772C068B74CC5D3BBD9279C54B5FB77E5D5B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void collisionDedector::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collisionDedector_OnCollisionEnter_m298DBC15DFD85F102D05FB07EA440F13BE11A238 (collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral867D450998537BC0893A5F264211DA389A275A29);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		// mainCar = game_manager.activeCar;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_game_manager_4();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_activeCar_4();
		__this->set_mainCar_6(L_1);
		// if (other.gameObject.name == mainCar.name)
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_2 = ___other0;
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Collision_get_gameObject_m5682F872FD28419AA36F0651CE8B19825A21859D(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_mainCar_6();
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_024e;
		}
	}
	{
		// game_manager.score += 10;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = __this->get_game_manager_4();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_9 = L_8;
		NullCheck(L_9);
		float L_10 = L_9->get_score_9();
		NullCheck(L_9);
		L_9->set_score_9(((float)il2cpp_codegen_add((float)L_10, (float)(10.0f))));
		// Debug.Log(game_manager.score);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_11 = __this->get_game_manager_4();
		NullCheck(L_11);
		float L_12 = L_11->get_score_9();
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_13);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
		// newRoadPosition = new Vector3(0,0,road.transform.position.z + (4f*39.14f));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_road_5();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), (0.0f), (0.0f), ((float)il2cpp_codegen_add((float)L_18, (float)(156.559998f))), /*hidden argument*/NULL);
		__this->set_newRoadPosition_7(L_19);
		// road.transform.position = newRoadPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_road_5();
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = __this->get_newRoadPosition_7();
		NullCheck(L_21);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_21, L_22, /*hidden argument*/NULL);
		// GameObject[] cars = {newCar0, newCar1, newCar2, newCar3};
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_23 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)4);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_24 = L_23;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_newCar0_8();
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_25);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_26 = L_24;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_newCar1_9();
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_27);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_28 = L_26;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_newCar2_10();
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_29);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_30 = L_28;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_newCar3_11();
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_31);
		V_0 = L_30;
		// float[] rotationOfRandomCars = {-2.67f, -1.17f, 0.46f, 2.02f};
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_32 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_33 = L_32;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_34 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_33, L_34, /*hidden argument*/NULL);
		V_1 = L_33;
		// int createRandomCar = Random.Range(0, 4);
		int32_t L_35;
		L_35 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_2 = L_35;
		// int secondCreateRandomCar = Random.Range(0, 4);
		int32_t L_36;
		L_36 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_3 = L_36;
		// int createRotatonOfRandomCars = Random.Range(0, 4);
		int32_t L_37;
		L_37 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_4 = L_37;
		// int secondCreateRotatonOfRandomCars = Random.Range(0, 4);
		int32_t L_38;
		L_38 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_5 = L_38;
		goto IL_010d;
	}

IL_0104:
	{
		// secondCreateRotatonOfRandomCars = Random.Range(0, 4);
		int32_t L_39;
		L_39 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_5 = L_39;
	}

IL_010d:
	{
		// while(createRotatonOfRandomCars == secondCreateRotatonOfRandomCars)
		int32_t L_40 = V_4;
		int32_t L_41 = V_5;
		if ((((int32_t)L_40) == ((int32_t)L_41)))
		{
			goto IL_0104;
		}
	}
	{
		// int randomDistance = Random.Range(50, 70);
		int32_t L_42;
		L_42 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)50), ((int32_t)70), /*hidden argument*/NULL);
		V_6 = L_42;
		// int secondRandomDistance = Random.Range(50, 70);
		int32_t L_43;
		L_43 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)50), ((int32_t)70), /*hidden argument*/NULL);
		V_7 = L_43;
		// newCarRoadPosition = new Vector3(rotationOfRandomCars[createRotatonOfRandomCars],3.67f ,game_manager.activeCar.transform.position.z + randomDistance);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_44 = V_1;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		float L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_48 = __this->get_game_manager_4();
		NullCheck(L_48);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = L_48->get_activeCar_4();
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_50, /*hidden argument*/NULL);
		float L_52 = L_51.get_z_4();
		int32_t L_53 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_54), L_47, (3.67000008f), ((float)il2cpp_codegen_add((float)L_52, (float)((float)((float)L_53)))), /*hidden argument*/NULL);
		__this->set_newCarRoadPosition_12(L_54);
		// secondNewCarRoadPosition = new Vector3(rotationOfRandomCars[secondCreateRotatonOfRandomCars],3.67f ,game_manager.activeCar.transform.position.z + secondRandomDistance);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_55 = V_1;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		float L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_59 = __this->get_game_manager_4();
		NullCheck(L_59);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = L_59->get_activeCar_4();
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_60, /*hidden argument*/NULL);
		NullCheck(L_61);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_61, /*hidden argument*/NULL);
		float L_63 = L_62.get_z_4();
		int32_t L_64 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_65), L_58, (3.67000008f), ((float)il2cpp_codegen_add((float)L_63, (float)((float)((float)L_64)))), /*hidden argument*/NULL);
		__this->set_secondNewCarRoadPosition_13(L_65);
		// Instantiate(cars[createRandomCar], newCarRoadPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_66 = V_0;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_70 = __this->get_newCarRoadPosition_12();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_71;
		L_71 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72;
		L_72 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_69, L_70, L_71, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Instantiate(cars[secondCreateRandomCar], secondNewCarRoadPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_73 = V_0;
		int32_t L_74 = V_3;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77 = __this->get_secondNewCarRoadPosition_13();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_78;
		L_78 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79;
		L_79 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_76, L_77, L_78, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// float currentScore = PlayerPrefs.GetFloat("savedScore");
		float L_80;
		L_80 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteral867D450998537BC0893A5F264211DA389A275A29, /*hidden argument*/NULL);
		// if (currentScore >= 150.0f)
		if ((!(((float)L_80) >= ((float)(150.0f)))))
		{
			goto IL_024e;
		}
	}
	{
		// int thirdCreateRandomCar = Random.Range(0, 4);
		int32_t L_81;
		L_81 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_8 = L_81;
		// int thirdCreateRotatonOfRandomCars = Random.Range(0, 4);
		int32_t L_82;
		L_82 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_9 = L_82;
		// int thirdRandomDistance = Random.Range(50, 70);
		int32_t L_83;
		L_83 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)50), ((int32_t)70), /*hidden argument*/NULL);
		V_10 = L_83;
		goto IL_01f1;
	}

IL_01e8:
	{
		// thirdCreateRotatonOfRandomCars = Random.Range(0, 4);
		int32_t L_84;
		L_84 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_9 = L_84;
	}

IL_01f1:
	{
		// while(thirdCreateRotatonOfRandomCars == secondCreateRotatonOfRandomCars)
		int32_t L_85 = V_9;
		int32_t L_86 = V_5;
		if ((((int32_t)L_85) == ((int32_t)L_86)))
		{
			goto IL_01e8;
		}
	}
	{
		goto IL_0202;
	}

IL_01f9:
	{
		// thirdCreateRandomCar = Random.Range(0, 4);
		int32_t L_87;
		L_87 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_8 = L_87;
	}

IL_0202:
	{
		// while(thirdCreateRandomCar == secondCreateRandomCar)
		int32_t L_88 = V_8;
		int32_t L_89 = V_3;
		if ((((int32_t)L_88) == ((int32_t)L_89)))
		{
			goto IL_01f9;
		}
	}
	{
		// thirdNewCarRoadPosition = new Vector3(rotationOfRandomCars[thirdCreateRotatonOfRandomCars],3.67f ,game_manager.activeCar.transform.position.z + thirdRandomDistance);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_90 = V_1;
		int32_t L_91 = V_9;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		float L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_94 = __this->get_game_manager_4();
		NullCheck(L_94);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_95 = L_94->get_activeCar_4();
		NullCheck(L_95);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_96;
		L_96 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_95, /*hidden argument*/NULL);
		NullCheck(L_96);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_97;
		L_97 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_96, /*hidden argument*/NULL);
		float L_98 = L_97.get_z_4();
		int32_t L_99 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_100), L_93, (3.67000008f), ((float)il2cpp_codegen_add((float)L_98, (float)((float)((float)L_99)))), /*hidden argument*/NULL);
		__this->set_thirdNewCarRoadPosition_14(L_100);
		// Instantiate(cars[thirdCreateRandomCar], thirdNewCarRoadPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_101 = V_0;
		int32_t L_102 = V_8;
		NullCheck(L_101);
		int32_t L_103 = L_102;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105 = __this->get_thirdNewCarRoadPosition_14();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_106;
		L_106 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_107;
		L_107 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_104, L_105, L_106, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_024e:
	{
		// }
		return;
	}
}
// System.Void collisionDedector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collisionDedector__ctor_mD6A2BBDE8F7A85F4FCB895CA4F62133DD31E8DA2 (collisionDedector_t4F7EA7339C2506196FE5C4AAEAF269F9137673E1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void controller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_Start_mDF72F1AB046BDEC48EA54E3B12AD140813831038 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	{
		// getObjects();
		controller_getObjects_mEA7F5E086A24FE2420B33A43DC35B79D778F9BCC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void controller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_Update_mB9BEAFA8C7D2D0C6CBC3990BCF742F845DEABCBA (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	{
		// addDownForce();
		controller_addDownForce_m36F72DAEA98065A102C420E9EBD6EFAD8A8A5211(__this, /*hidden argument*/NULL);
		// steerVehicle();
		controller_steerVehicle_mB300124B11A6BE97B24E2A2F1F35C3D9D0F1E5C6(__this, /*hidden argument*/NULL);
		// calculateEnginePower();
		controller_calculateEnginePower_mC08E0C38FE3EC05FEB2CCE6DBF776CE444B66A5F(__this, /*hidden argument*/NULL);
		// friction();
		controller_friction_m1032B942F3EF8836CCC44459E82B1F2092324EDB(__this, /*hidden argument*/NULL);
		// Audio();
		controller_Audio_mF5140A0A12E1551C89C5C9C1B7445E63711EABDD(__this, /*hidden argument*/NULL);
		// if(isAutomatic)
		bool L_0 = __this->get_isAutomatic_15();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// shifter();
		controller_shifter_m7E8A6CEA454AF32D7AB0A36FC9E7F1320686CE75(__this, /*hidden argument*/NULL);
		return;
	}

IL_002d:
	{
		// manual();
		controller_manual_mB0CE0AD8E564B4432DD57A7020F9BFA0A3A1D2D5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void controller::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_FixedUpdate_m63804434474D4D9B6FE0B65E2D8799B1BCA8F951 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	{
		// activateLights();
		controller_activateLights_m1AF78DF483A97F7CF8156A26284F4C057432D361(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void controller::Audio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_Audio_mF5140A0A12E1551C89C5C9C1B7445E63711EABDD (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	{
		// audio.totalPower = totalPower;
		engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * L_0 = __this->get_audio_5();
		float L_1 = __this->get_totalPower_28();
		NullCheck(L_0);
		L_0->set_totalPower_26(L_1);
		// audio.engineRPM = engineRPM;
		engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * L_2 = __this->get_audio_5();
		float L_3 = __this->get_engineRPM_27();
		NullCheck(L_2);
		L_2->set_engineRPM_27(L_3);
		// audio.engineLerp = engineLerp;
		engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * L_4 = __this->get_audio_5();
		bool L_5 = __this->get_engineLerp_44();
		NullCheck(L_4);
		L_4->set_engineLerp_29(L_5);
		// }
		return;
	}
}
// System.Void controller::activateLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_activateLights_m1AF78DF483A97F7CF8156A26284F4C057432D361 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	{
		// if (IM.vertical < 0 || KPH <= 1) turnLightsOn();
		inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * L_0 = __this->get_IM_6();
		NullCheck(L_0);
		float L_1 = L_0->get_vertical_4();
		if ((((float)L_1) < ((float)(0.0f))))
		{
			goto IL_001f;
		}
	}
	{
		float L_2 = __this->get_KPH_25();
		if ((!(((float)L_2) <= ((float)(1.0f)))))
		{
			goto IL_0026;
		}
	}

IL_001f:
	{
		// if (IM.vertical < 0 || KPH <= 1) turnLightsOn();
		controller_turnLightsOn_mEB26B9215514F29E2D77F3DB01874D1AD6A3007A(__this, /*hidden argument*/NULL);
		return;
	}

IL_0026:
	{
		// else turnLightsOff();
		controller_turnLightsOff_m41D0D9A85E0160E86DA37EC50A1348EC3F123F4E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void controller::turnLightsOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_turnLightsOn_mEB26B9215514F29E2D77F3DB01874D1AD6A3007A (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (lightsFlag) return;
		bool L_0 = __this->get_lightsFlag_42();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (lightsFlag) return;
		return;
	}

IL_0009:
	{
		// brakeLights.SetColor("_EmissionColor", new Color(255f,35f,35f) * 0.115f);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get_brakeLights_14();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_2), (255.0f), (35.0f), (35.0f), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_op_Multiply_m1A1E7DECD013FBEB99018CEDDC30B8A7CF99941D(L_2, (0.115000002f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_1, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_3, /*hidden argument*/NULL);
		// lightsFlag = true;
		__this->set_lightsFlag_42((bool)1);
		// }
		return;
	}
}
// System.Void controller::turnLightsOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_turnLightsOff_m41D0D9A85E0160E86DA37EC50A1348EC3F123F4E (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!lightsFlag) return;
		bool L_0 = __this->get_lightsFlag_42();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!lightsFlag) return;
		return;
	}

IL_0009:
	{
		// brakeLights.SetColor("_EmissionColor", Color.black);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = __this->get_brakeLights_14();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		NullCheck(L_1);
		Material_SetColor_m5CAAF4A8D7F839597B4E14588E341462EEB81698(L_1, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_2, /*hidden argument*/NULL);
		// lightsFlag = false;
		__this->set_lightsFlag_42((bool)0);
		// }
		return;
	}
}
// System.Void controller::calculateEnginePower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_calculateEnginePower_mC08E0C38FE3EC05FEB2CCE6DBF776CE444B66A5F (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B4_0 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B1_0 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B3_0 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B2_0 = NULL;
	float G_B5_0 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B5_1 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B8_0 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B9_1 = NULL;
	{
		// lerpEngine();
		controller_lerpEngine_mF7372F1EA9E3BEDE82B544005EB4281D8AD34592(__this, /*hidden argument*/NULL);
		// wheelRPM();
		controller_wheelRPM_m1DCB1EB4A8F5A6DA3BCCD5BE98B36011C2276F1D(__this, /*hidden argument*/NULL);
		// acceleration = vertical > 0 ?  vertical : wheelsRPM <= 1 ? vertical  : 0 ;
		float L_0 = __this->get_vertical_35();
		G_B1_0 = __this;
		if ((((float)L_0) > ((float)(0.0f))))
		{
			G_B4_0 = __this;
			goto IL_0036;
		}
	}
	{
		float L_1 = __this->get_wheelsRPM_32();
		G_B2_0 = G_B1_0;
		if ((((float)L_1) <= ((float)(1.0f))))
		{
			G_B3_0 = G_B1_0;
			goto IL_002e;
		}
	}
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B2_0;
		goto IL_003c;
	}

IL_002e:
	{
		float L_2 = __this->get_vertical_35();
		G_B5_0 = L_2;
		G_B5_1 = G_B3_0;
		goto IL_003c;
	}

IL_0036:
	{
		float L_3 = __this->get_vertical_35();
		G_B5_0 = L_3;
		G_B5_1 = G_B4_0;
	}

IL_003c:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_acceleration_34(G_B5_0);
		// if(!isGrounded()){
		bool L_4;
		L_4 = controller_isGrounded_mBBAE2F776C7A406665623E86242393F435FDD678(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0070;
		}
	}
	{
		// acceleration = engineRPM > 1000 ? acceleration / 2 : acceleration;
		float L_5 = __this->get_engineRPM_27();
		G_B7_0 = __this;
		if ((((float)L_5) > ((float)(1000.0f))))
		{
			G_B8_0 = __this;
			goto IL_005f;
		}
	}
	{
		float L_6 = __this->get_acceleration_34();
		G_B9_0 = L_6;
		G_B9_1 = G_B7_0;
		goto IL_006b;
	}

IL_005f:
	{
		float L_7 = __this->get_acceleration_34();
		G_B9_0 = ((float)((float)L_7/(float)(2.0f)));
		G_B9_1 = G_B8_0;
	}

IL_006b:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_acceleration_34(G_B9_0);
	}

IL_0070:
	{
		// if(engineRPM >= maxRPM){
		float L_8 = __this->get_engineRPM_27();
		float L_9 = __this->get_maxRPM_16();
		if ((!(((float)L_8) >= ((float)L_9))))
		{
			goto IL_0090;
		}
	}
	{
		// setEngineLerp(maxRPM - 1000);
		float L_10 = __this->get_maxRPM_16();
		controller_setEngineLerp_m00D96E42A80547F5ED849F80840F59A5D403A949(__this, ((float)il2cpp_codegen_subtract((float)L_10, (float)(1000.0f))), /*hidden argument*/NULL);
	}

IL_0090:
	{
		// if(!engineLerp){
		bool L_11 = __this->get_engineLerp_44();
		if (L_11)
		{
			goto IL_0114;
		}
	}
	{
		// engineRPM = Mathf.Lerp(engineRPM,1000f + Mathf.Abs(wheelsRPM) *  finalDrive *  (gears[gearNum]) , (EngineSmoothTime * 10) * Time.deltaTime);
		float L_12 = __this->get_engineRPM_27();
		float L_13 = __this->get_wheelsRPM_32();
		float L_14;
		L_14 = fabsf(L_13);
		float L_15 = __this->get_finalDrive_18();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = __this->get_gears_19();
		int32_t L_17 = __this->get_gearNum_26();
		NullCheck(L_16);
		int32_t L_18 = L_17;
		float L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = __this->get_EngineSmoothTime_22();
		float L_21;
		L_21 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_22;
		L_22 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_12, ((float)il2cpp_codegen_add((float)(1000.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)), (float)L_19)))), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_20, (float)(10.0f))), (float)L_21)), /*hidden argument*/NULL);
		__this->set_engineRPM_27(L_22);
		// totalPower = enginePower.Evaluate(engineRPM) * (gears[gearNum] * finalDrive ) * acceleration  ;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_23 = __this->get_enginePower_13();
		float L_24 = __this->get_engineRPM_27();
		NullCheck(L_23);
		float L_25;
		L_25 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_23, L_24, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_26 = __this->get_gears_19();
		int32_t L_27 = __this->get_gearNum_26();
		NullCheck(L_26);
		int32_t L_28 = L_27;
		float L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		float L_30 = __this->get_finalDrive_18();
		float L_31 = __this->get_acceleration_34();
		__this->set_totalPower_28(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_25, (float)((float)il2cpp_codegen_multiply((float)L_29, (float)L_30)))), (float)L_31)));
	}

IL_0114:
	{
		// engineLoad = Mathf.Lerp(engineLoad,vertical - ((engineRPM - 1000) / maxRPM ),(EngineSmoothTime * 10) * Time.deltaTime);
		float L_32 = __this->get_engineLoad_40();
		float L_33 = __this->get_vertical_35();
		float L_34 = __this->get_engineRPM_27();
		float L_35 = __this->get_maxRPM_16();
		float L_36 = __this->get_EngineSmoothTime_22();
		float L_37;
		L_37 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_38;
		L_38 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_32, ((float)il2cpp_codegen_subtract((float)L_33, (float)((float)((float)((float)il2cpp_codegen_subtract((float)L_34, (float)(1000.0f)))/(float)L_35)))), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_36, (float)(10.0f))), (float)L_37)), /*hidden argument*/NULL);
		__this->set_engineLoad_40(L_38);
		// moveVehicle();
		controller_moveVehicle_m4A2C355268B4346866861504DF4D814DAC184B43(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void controller::wheelRPM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_wheelRPM_m1DCB1EB4A8F5A6DA3BCCD5BE98B36011C2276F1D (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B5_0 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B6_1 = NULL;
	{
		// float sum = 0;
		V_0 = (0.0f);
		// int R = 0;
		V_1 = 0;
		// for (int i = 0; i < 4; i++)
		V_2 = 0;
		goto IL_0024;
	}

IL_000c:
	{
		// sum += wheels[i].rpm;
		float L_0 = V_0;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_1 = __this->get_wheels_11();
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		float L_5;
		L_5 = WheelCollider_get_rpm_m5127D5BE0A627C29F38CFD8194C3F2470D8008B1(L_4, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_0, (float)L_5));
		// R++;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		// for (int i = 0; i < 4; i++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0024:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_000c;
		}
	}
	{
		// wheelsRPM = (R != 0) ? sum / R : 0;
		int32_t L_9 = V_1;
		G_B4_0 = __this;
		if (L_9)
		{
			G_B5_0 = __this;
			goto IL_0033;
		}
	}
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B4_0;
		goto IL_0037;
	}

IL_0033:
	{
		float L_10 = V_0;
		int32_t L_11 = V_1;
		G_B6_0 = ((float)((float)L_10/(float)((float)((float)L_11))));
		G_B6_1 = G_B5_0;
	}

IL_0037:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_wheelsRPM_32(G_B6_0);
		// if(wheelsRPM < 0 && !reverse ){
		float L_12 = __this->get_wheelsRPM_32();
		if ((!(((float)L_12) < ((float)(0.0f)))))
		{
			goto IL_0059;
		}
	}
	{
		bool L_13 = __this->get_reverse_41();
		if (L_13)
		{
			goto IL_0059;
		}
	}
	{
		// reverse = true;
		__this->set_reverse_41((bool)1);
		// }
		return;
	}

IL_0059:
	{
		// else if(wheelsRPM > 0 && reverse){
		float L_14 = __this->get_wheelsRPM_32();
		if ((!(((float)L_14) > ((float)(0.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		bool L_15 = __this->get_reverse_41();
		if (!L_15)
		{
			goto IL_0075;
		}
	}
	{
		// reverse = false;
		__this->set_reverse_41((bool)0);
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void controller::manual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_manual_mB0CE0AD8E564B4432DD57A7020F9BFA0A3A1D2D5 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6A16FA6FFFE7CF75CED271F9B06FD471503AB8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03);
		s_Il2CppMethodInitialized = true;
	}
	float G_B5_0 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B5_1 = NULL;
	float G_B4_0 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	float G_B6_1 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B6_2 = NULL;
	float G_B12_0 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B12_1 = NULL;
	float G_B11_0 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B11_1 = NULL;
	int32_t G_B13_0 = 0;
	float G_B13_1 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B13_2 = NULL;
	{
		// if((Input.GetAxis("Fire2") == 1  ) && gearNum <= gears.Length && Time.time >= gearChangeRate ){
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralE16EFE13C5C08096A869677E0912595D5D6C1C03, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(1.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_1 = __this->get_gearNum_26();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_gears_19();
		NullCheck(L_2);
		if ((((int32_t)L_1) > ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_007f;
		}
	}
	{
		float L_3;
		L_3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_4 = __this->get_gearChangeRate_37();
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_007f;
		}
	}
	{
		// gearNum  = gearNum +1;
		int32_t L_5 = __this->get_gearNum_26();
		__this->set_gearNum_26(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// gearChangeRate = Time.time + 1f/3f ;
		float L_6;
		L_6 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_gearChangeRate_37(((float)il2cpp_codegen_add((float)L_6, (float)(0.333333343f))));
		// setEngineLerp(engineRPM - ( engineRPM > 1500 ? 1000 : 700));
		float L_7 = __this->get_engineRPM_27();
		float L_8 = __this->get_engineRPM_27();
		G_B4_0 = L_7;
		G_B4_1 = __this;
		if ((((float)L_8) > ((float)(1500.0f))))
		{
			G_B5_0 = L_7;
			G_B5_1 = __this;
			goto IL_0068;
		}
	}
	{
		G_B6_0 = ((int32_t)700);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_006d;
	}

IL_0068:
	{
		G_B6_0 = ((int32_t)1000);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_006d:
	{
		NullCheck(G_B6_2);
		controller_setEngineLerp_m00D96E42A80547F5ED849F80840F59A5D403A949(G_B6_2, ((float)il2cpp_codegen_subtract((float)G_B6_1, (float)((float)((float)G_B6_0)))), /*hidden argument*/NULL);
		// audio.DownShift();
		engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * L_9 = __this->get_audio_5();
		NullCheck(L_9);
		engineAudio_DownShift_mB3EE1E621120C2BC4DBD8B4BC2246F92647AD4C9(L_9, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// if((Input.GetAxis("Fire3") == 1 ) && gearNum >= 1  && Time.time >= gearChangeRate){
		float L_10;
		L_10 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralA6A16FA6FFFE7CF75CED271F9B06FD471503AB8C, /*hidden argument*/NULL);
		if ((!(((float)L_10) == ((float)(1.0f)))))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_11 = __this->get_gearNum_26();
		if ((((int32_t)L_11) < ((int32_t)1)))
		{
			goto IL_00f7;
		}
	}
	{
		float L_12;
		L_12 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_13 = __this->get_gearChangeRate_37();
		if ((!(((float)L_12) >= ((float)L_13))))
		{
			goto IL_00f7;
		}
	}
	{
		// gearChangeRate = Time.time + 1f/3f ;
		float L_14;
		L_14 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_gearChangeRate_37(((float)il2cpp_codegen_add((float)L_14, (float)(0.333333343f))));
		// gearNum --;
		int32_t L_15 = __this->get_gearNum_26();
		__this->set_gearNum_26(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)));
		// setEngineLerp(engineRPM - ( engineRPM > 1500 ? 1000 : 700));
		float L_16 = __this->get_engineRPM_27();
		float L_17 = __this->get_engineRPM_27();
		G_B11_0 = L_16;
		G_B11_1 = __this;
		if ((((float)L_17) > ((float)(1500.0f))))
		{
			G_B12_0 = L_16;
			G_B12_1 = __this;
			goto IL_00e0;
		}
	}
	{
		G_B13_0 = ((int32_t)700);
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		goto IL_00e5;
	}

IL_00e0:
	{
		G_B13_0 = ((int32_t)1000);
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
	}

IL_00e5:
	{
		NullCheck(G_B13_2);
		controller_setEngineLerp_m00D96E42A80547F5ED849F80840F59A5D403A949(G_B13_2, ((float)il2cpp_codegen_subtract((float)G_B13_1, (float)((float)((float)G_B13_0)))), /*hidden argument*/NULL);
		// audio.DownShift();
		engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * L_18 = __this->get_audio_5();
		NullCheck(L_18);
		engineAudio_DownShift_mB3EE1E621120C2BC4DBD8B4BC2246F92647AD4C9(L_18, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		// }
		return;
	}
}
// System.Void controller::shifter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_shifter_m7E8A6CEA454AF32D7AB0A36FC9E7F1320686CE75 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	{
		// if(!isGrounded())return;
		bool L_0;
		L_0 = controller_isGrounded_mBBAE2F776C7A406665623E86242393F435FDD678(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if(!isGrounded())return;
		return;
	}

IL_0009:
	{
		// if(engineRPM > maxRPM  && gearNum < gears.Length-1 && !reverse && Time.time >= gearChangeRate  && KPH >55){
		float L_1 = __this->get_engineRPM_27();
		float L_2 = __this->get_maxRPM_16();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_3 = __this->get_gearNum_26();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = __this->get_gears_19();
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)1)))))
		{
			goto IL_008e;
		}
	}
	{
		bool L_5 = __this->get_reverse_41();
		if (L_5)
		{
			goto IL_008e;
		}
	}
	{
		float L_6;
		L_6 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_7 = __this->get_gearChangeRate_37();
		if ((!(((float)L_6) >= ((float)L_7))))
		{
			goto IL_008e;
		}
	}
	{
		float L_8 = __this->get_KPH_25();
		if ((!(((float)L_8) > ((float)(55.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		// gearNum ++;
		int32_t L_9 = __this->get_gearNum_26();
		__this->set_gearNum_26(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		// audio.DownShift();
		engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * L_10 = __this->get_audio_5();
		NullCheck(L_10);
		engineAudio_DownShift_mB3EE1E621120C2BC4DBD8B4BC2246F92647AD4C9(L_10, /*hidden argument*/NULL);
		// setEngineLerp(engineRPM - (engineRPM / 3));
		float L_11 = __this->get_engineRPM_27();
		float L_12 = __this->get_engineRPM_27();
		controller_setEngineLerp_m00D96E42A80547F5ED849F80840F59A5D403A949(__this, ((float)il2cpp_codegen_subtract((float)L_11, (float)((float)((float)L_12/(float)(3.0f))))), /*hidden argument*/NULL);
		// gearChangeRate = Time.time + 1f/1f ;
		float L_13;
		L_13 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_gearChangeRate_37(((float)il2cpp_codegen_add((float)L_13, (float)(1.0f))));
	}

IL_008e:
	{
		// if(engineRPM < minRPM && gearNum > 0 && Time.time >= gearChangeRate){
		float L_14 = __this->get_engineRPM_27();
		float L_15 = __this->get_minRPM_17();
		if ((!(((float)L_14) < ((float)L_15))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_16 = __this->get_gearNum_26();
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00ea;
		}
	}
	{
		float L_17;
		L_17 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_18 = __this->get_gearChangeRate_37();
		if ((!(((float)L_17) >= ((float)L_18))))
		{
			goto IL_00ea;
		}
	}
	{
		// gearChangeRate = Time.time + 0.15f ;
		float L_19;
		L_19 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_gearChangeRate_37(((float)il2cpp_codegen_add((float)L_19, (float)(0.150000006f))));
		// setEngineLerp(engineRPM + (engineRPM / 2));
		float L_20 = __this->get_engineRPM_27();
		float L_21 = __this->get_engineRPM_27();
		controller_setEngineLerp_m00D96E42A80547F5ED849F80840F59A5D403A949(__this, ((float)il2cpp_codegen_add((float)L_20, (float)((float)((float)L_21/(float)(2.0f))))), /*hidden argument*/NULL);
		// gearNum --;
		int32_t L_22 = __this->get_gearNum_26();
		__this->set_gearNum_26(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)));
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Boolean controller::isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool controller_isGrounded_mBBAE2F776C7A406665623E86242393F435FDD678 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	{
		// if(wheels[0].isGrounded &&wheels[1].isGrounded &&wheels[2].isGrounded &&wheels[3].isGrounded )
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_0 = __this->get_wheels_11();
		NullCheck(L_0);
		int32_t L_1 = 0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		bool L_3;
		L_3 = WheelCollider_get_isGrounded_m396F5249ED00A62F8C50403A7BB64CF5E649A61C(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_4 = __this->get_wheels_11();
		NullCheck(L_4);
		int32_t L_5 = 1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		bool L_7;
		L_7 = WheelCollider_get_isGrounded_m396F5249ED00A62F8C50403A7BB64CF5E649A61C(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_8 = __this->get_wheels_11();
		NullCheck(L_8);
		int32_t L_9 = 2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		bool L_11;
		L_11 = WheelCollider_get_isGrounded_m396F5249ED00A62F8C50403A7BB64CF5E649A61C(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_003e;
		}
	}
	{
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_12 = __this->get_wheels_11();
		NullCheck(L_12);
		int32_t L_13 = 3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		bool L_15;
		L_15 = WheelCollider_get_isGrounded_m396F5249ED00A62F8C50403A7BB64CF5E649A61C(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_003e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_003e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void controller::moveVehicle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_moveVehicle_m4A2C355268B4346866861504DF4D814DAC184B43 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B4_0 = NULL;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B3_0 = NULL;
	float G_B5_0 = 0.0f;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B5_1 = NULL;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B12_0 = NULL;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B11_0 = NULL;
	float G_B13_0 = 0.0f;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B13_1 = NULL;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B19_0 = NULL;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B18_0 = NULL;
	float G_B20_0 = 0.0f;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B20_1 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B34_0 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B31_0 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B33_0 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B32_0 = NULL;
	float G_B35_0 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B35_1 = NULL;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B41_0 = NULL;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B41_1 = NULL;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B40_0 = NULL;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B40_1 = NULL;
	float G_B42_0 = 0.0f;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B42_1 = NULL;
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * G_B42_2 = NULL;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * G_B44_0 = NULL;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * G_B43_0 = NULL;
	float G_B45_0 = 0.0f;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * G_B45_1 = NULL;
	{
		// if(drive == driveType.rearWheelDrive){
		int32_t L_0 = __this->get_drive_4();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0054;
		}
	}
	{
		// for (int i = 2; i < wheels.Length; i++){
		V_0 = 2;
		goto IL_0044;
	}

IL_000d:
	{
		// wheels[i].motorTorque = (vertical == 0) ? 0 : totalPower / (wheels.Length - 2) ;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_1 = __this->get_wheels_11();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5 = __this->get_vertical_35();
		G_B3_0 = L_4;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			G_B4_0 = L_4;
			goto IL_0036;
		}
	}
	{
		float L_6 = __this->get_totalPower_28();
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_7 = __this->get_wheels_11();
		NullCheck(L_7);
		G_B5_0 = ((float)((float)L_6/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))), (int32_t)2))))));
		G_B5_1 = G_B3_0;
		goto IL_003b;
	}

IL_0036:
	{
		G_B5_0 = (0.0f);
		G_B5_1 = G_B4_0;
	}

IL_003b:
	{
		NullCheck(G_B5_1);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		// for (int i = 2; i < wheels.Length; i++){
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0044:
	{
		// for (int i = 2; i < wheels.Length; i++){
		int32_t L_9 = V_0;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_10 = __this->get_wheels_11();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		goto IL_00ea;
	}

IL_0054:
	{
		// else if(drive == driveType.frontWheelDrive){
		int32_t L_11 = __this->get_drive_4();
		if (L_11)
		{
			goto IL_00a6;
		}
	}
	{
		// for (int i = 0; i < wheels.Length - 2; i++){
		V_1 = 0;
		goto IL_0097;
	}

IL_0060:
	{
		// wheels[i].motorTorque =  (vertical == 0) ? 0 : totalPower / (wheels.Length - 2) ;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_12 = __this->get_wheels_11();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		float L_16 = __this->get_vertical_35();
		G_B11_0 = L_15;
		if ((((float)L_16) == ((float)(0.0f))))
		{
			G_B12_0 = L_15;
			goto IL_0089;
		}
	}
	{
		float L_17 = __this->get_totalPower_28();
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_18 = __this->get_wheels_11();
		NullCheck(L_18);
		G_B13_0 = ((float)((float)L_17/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))), (int32_t)2))))));
		G_B13_1 = G_B11_0;
		goto IL_008e;
	}

IL_0089:
	{
		G_B13_0 = (0.0f);
		G_B13_1 = G_B12_0;
	}

IL_008e:
	{
		NullCheck(G_B13_1);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(G_B13_1, G_B13_0, /*hidden argument*/NULL);
		// for (int i = 0; i < wheels.Length - 2; i++){
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0097:
	{
		// for (int i = 0; i < wheels.Length - 2; i++){
		int32_t L_20 = V_1;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_21 = __this->get_wheels_11();
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))), (int32_t)2)))))
		{
			goto IL_0060;
		}
	}
	{
		// }
		goto IL_00ea;
	}

IL_00a6:
	{
		// for (int i = 0; i < wheels.Length; i++){
		V_2 = 0;
		goto IL_00df;
	}

IL_00aa:
	{
		// wheels[i].motorTorque =  (vertical == 0) ? 0 : totalPower / wheels.Length;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_22 = __this->get_wheels_11();
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		float L_26 = __this->get_vertical_35();
		G_B18_0 = L_25;
		if ((((float)L_26) == ((float)(0.0f))))
		{
			G_B19_0 = L_25;
			goto IL_00d1;
		}
	}
	{
		float L_27 = __this->get_totalPower_28();
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_28 = __this->get_wheels_11();
		NullCheck(L_28);
		G_B20_0 = ((float)((float)L_27/(float)((float)((float)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))));
		G_B20_1 = G_B18_0;
		goto IL_00d6;
	}

IL_00d1:
	{
		G_B20_0 = (0.0f);
		G_B20_1 = G_B19_0;
	}

IL_00d6:
	{
		NullCheck(G_B20_1);
		WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA(G_B20_1, G_B20_0, /*hidden argument*/NULL);
		// for (int i = 0; i < wheels.Length; i++){
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00df:
	{
		// for (int i = 0; i < wheels.Length; i++){
		int32_t L_30 = V_2;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_31 = __this->get_wheels_11();
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))))
		{
			goto IL_00aa;
		}
	}

IL_00ea:
	{
		// for (int i = 0; i < wheels.Length; i++){
		V_3 = 0;
		goto IL_01c0;
	}

IL_00f1:
	{
		// if(KPH <= 1 && KPH >= -1 && vertical == 0){
		float L_32 = __this->get_KPH_25();
		if ((!(((float)L_32) <= ((float)(1.0f)))))
		{
			goto IL_0128;
		}
	}
	{
		float L_33 = __this->get_KPH_25();
		if ((!(((float)L_33) >= ((float)(-1.0f)))))
		{
			goto IL_0128;
		}
	}
	{
		float L_34 = __this->get_vertical_35();
		if ((!(((float)L_34) == ((float)(0.0f)))))
		{
			goto IL_0128;
		}
	}
	{
		// brakPower = 5;
		__this->set_brakPower_38((5.0f));
		// } else{
		goto IL_01a9;
	}

IL_0128:
	{
		// if(vertical < 0 && KPH > 1 && !reverse)
		float L_35 = __this->get_vertical_35();
		if ((!(((float)L_35) < ((float)(0.0f)))))
		{
			goto IL_019e;
		}
	}
	{
		float L_36 = __this->get_KPH_25();
		if ((!(((float)L_36) > ((float)(1.0f)))))
		{
			goto IL_019e;
		}
	}
	{
		bool L_37 = __this->get_reverse_41();
		if (L_37)
		{
			goto IL_019e;
		}
	}
	{
		// brakPower =  (wheelSlip[i] <= 1) ? brakPower + -vertical * 20 : brakPower > 0 ? brakPower  + vertical * 20 : 0 ;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_38 = __this->get_wheelSlip_29();
		int32_t L_39 = V_3;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		float L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		G_B31_0 = __this;
		if ((((float)L_41) <= ((float)(1.0f))))
		{
			G_B34_0 = __this;
			goto IL_0183;
		}
	}
	{
		float L_42 = __this->get_brakPower_38();
		G_B32_0 = G_B31_0;
		if ((((float)L_42) > ((float)(0.0f))))
		{
			G_B33_0 = G_B31_0;
			goto IL_016e;
		}
	}
	{
		G_B35_0 = (0.0f);
		G_B35_1 = G_B32_0;
		goto IL_0197;
	}

IL_016e:
	{
		float L_43 = __this->get_brakPower_38();
		float L_44 = __this->get_vertical_35();
		G_B35_0 = ((float)il2cpp_codegen_add((float)L_43, (float)((float)il2cpp_codegen_multiply((float)L_44, (float)(20.0f)))));
		G_B35_1 = G_B33_0;
		goto IL_0197;
	}

IL_0183:
	{
		float L_45 = __this->get_brakPower_38();
		float L_46 = __this->get_vertical_35();
		G_B35_0 = ((float)il2cpp_codegen_add((float)L_45, (float)((float)il2cpp_codegen_multiply((float)((-L_46)), (float)(20.0f)))));
		G_B35_1 = G_B34_0;
	}

IL_0197:
	{
		NullCheck(G_B35_1);
		G_B35_1->set_brakPower_38(G_B35_0);
		goto IL_01a9;
	}

IL_019e:
	{
		// brakPower = 0;
		__this->set_brakPower_38((0.0f));
	}

IL_01a9:
	{
		// wheels[i].brakeTorque = brakPower;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_47 = __this->get_wheels_11();
		int32_t L_48 = V_3;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		float L_51 = __this->get_brakPower_38();
		NullCheck(L_50);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(L_50, L_51, /*hidden argument*/NULL);
		// for (int i = 0; i < wheels.Length; i++){
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_01c0:
	{
		// for (int i = 0; i < wheels.Length; i++){
		int32_t L_53 = V_3;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_54 = __this->get_wheels_11();
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
		{
			goto IL_00f1;
		}
	}
	{
		// wheels[2].brakeTorque = wheels[3].brakeTorque = (IM.handbrake)? Mathf.Infinity : 0f;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_55 = __this->get_wheels_11();
		NullCheck(L_55);
		int32_t L_56 = 2;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_58 = __this->get_wheels_11();
		NullCheck(L_58);
		int32_t L_59 = 3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * L_61 = __this->get_IM_6();
		NullCheck(L_61);
		bool L_62 = L_61->get_handbrake_6();
		G_B40_0 = L_60;
		G_B40_1 = L_57;
		if (L_62)
		{
			G_B41_0 = L_60;
			G_B41_1 = L_57;
			goto IL_01f2;
		}
	}
	{
		G_B42_0 = (0.0f);
		G_B42_1 = G_B40_0;
		G_B42_2 = G_B40_1;
		goto IL_01f7;
	}

IL_01f2:
	{
		G_B42_0 = (std::numeric_limits<float>::infinity());
		G_B42_1 = G_B41_0;
		G_B42_2 = G_B41_1;
	}

IL_01f7:
	{
		float L_63 = G_B42_0;
		V_4 = L_63;
		NullCheck(G_B42_1);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(G_B42_1, L_63, /*hidden argument*/NULL);
		float L_64 = V_4;
		NullCheck(G_B42_2);
		WheelCollider_set_brakeTorque_mDAFB1032B6B3AD4C8103869D64807596774C1B54(G_B42_2, L_64, /*hidden argument*/NULL);
		// rigidbody.angularDrag = (KPH > 100)? KPH / 100 : 0;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_65 = __this->get_rigidbody_10();
		float L_66 = __this->get_KPH_25();
		G_B43_0 = L_65;
		if ((((float)L_66) > ((float)(100.0f))))
		{
			G_B44_0 = L_65;
			goto IL_0220;
		}
	}
	{
		G_B45_0 = (0.0f);
		G_B45_1 = G_B43_0;
		goto IL_022c;
	}

IL_0220:
	{
		float L_67 = __this->get_KPH_25();
		G_B45_0 = ((float)((float)L_67/(float)(100.0f)));
		G_B45_1 = G_B44_0;
	}

IL_022c:
	{
		NullCheck(G_B45_1);
		Rigidbody_set_angularDrag_m8BF3771789B32FB09FDD8066BAFA0A0B661372A4(G_B45_1, G_B45_0, /*hidden argument*/NULL);
		// rigidbody.drag = dragAmount + (KPH / 40000) ;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_68 = __this->get_rigidbody_10();
		float L_69 = __this->get_dragAmount_21();
		float L_70 = __this->get_KPH_25();
		NullCheck(L_68);
		Rigidbody_set_drag_m60E39BE31529DE5163116785A69FACC77C52DA98(L_68, ((float)il2cpp_codegen_add((float)L_69, (float)((float)((float)L_70/(float)(40000.0f))))), /*hidden argument*/NULL);
		// KPH = rigidbody.velocity.magnitude * 3.6f;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_71 = __this->get_rigidbody_10();
		NullCheck(L_71);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_71, /*hidden argument*/NULL);
		V_5 = L_72;
		float L_73;
		L_73 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_5), /*hidden argument*/NULL);
		__this->set_KPH_25(((float)il2cpp_codegen_multiply((float)L_73, (float)(3.5999999f))));
		// }
		return;
	}
}
// System.Void controller::steerVehicle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_steerVehicle_mB300124B11A6BE97B24E2A2F1F35C3D9D0F1E5C6 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B2_2 = NULL;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B1_2 = NULL;
	float G_B3_0 = 0.0f;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B3_3 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B5_0 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B6_1 = NULL;
	{
		// vertical = IM.vertical;
		inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * L_0 = __this->get_IM_6();
		NullCheck(L_0);
		float L_1 = L_0->get_vertical_4();
		__this->set_vertical_35(L_1);
		// horizontal = Mathf.Lerp(horizontal , IM.horizontal , (IM.horizontal != 0) ? 5 * Time.deltaTime : 5 * 2 * Time.deltaTime);
		float L_2 = __this->get_horizontal_33();
		inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * L_3 = __this->get_IM_6();
		NullCheck(L_3);
		float L_4 = L_3->get_horizontal_5();
		inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * L_5 = __this->get_IM_6();
		NullCheck(L_5);
		float L_6 = L_5->get_horizontal_5();
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = __this;
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = __this;
			goto IL_0042;
		}
	}
	{
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_7));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_004d;
	}

IL_0042:
	{
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_8));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_004d:
	{
		float L_9;
		L_9 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		NullCheck(G_B3_3);
		G_B3_3->set_horizontal_33(L_9);
		// finalTurnAngle = (radius > 5 ) ? radius : 5  ;
		float L_10 = __this->get_radius_31();
		G_B4_0 = __this;
		if ((((float)L_10) > ((float)(5.0f))))
		{
			G_B5_0 = __this;
			goto IL_006c;
		}
	}
	{
		G_B6_0 = (5.0f);
		G_B6_1 = G_B4_0;
		goto IL_0072;
	}

IL_006c:
	{
		float L_11 = __this->get_radius_31();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
	}

IL_0072:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_finalTurnAngle_30(G_B6_0);
		// if (horizontal > 0 ) {
		float L_12 = __this->get_horizontal_33();
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_00e7;
		}
	}
	{
		// wheels[0].steerAngle = Mathf.Rad2Deg * Mathf.Atan(2.55f / (finalTurnAngle - (1.5f / 2))) * horizontal;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_13 = __this->get_wheels_11();
		NullCheck(L_13);
		int32_t L_14 = 0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		float L_16 = __this->get_finalTurnAngle_30();
		float L_17;
		L_17 = atanf(((float)((float)(2.54999995f)/(float)((float)il2cpp_codegen_subtract((float)L_16, (float)(0.75f))))));
		float L_18 = __this->get_horizontal_33();
		NullCheck(L_15);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_15, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(57.2957802f), (float)L_17)), (float)L_18)), /*hidden argument*/NULL);
		// wheels[1].steerAngle = Mathf.Rad2Deg * Mathf.Atan(2.55f / (finalTurnAngle + (1.5f / 2))) * horizontal;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_19 = __this->get_wheels_11();
		NullCheck(L_19);
		int32_t L_20 = 1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		float L_22 = __this->get_finalTurnAngle_30();
		float L_23;
		L_23 = atanf(((float)((float)(2.54999995f)/(float)((float)il2cpp_codegen_add((float)L_22, (float)(0.75f))))));
		float L_24 = __this->get_horizontal_33();
		NullCheck(L_21);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_21, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(57.2957802f), (float)L_23)), (float)L_24)), /*hidden argument*/NULL);
		// } else if (horizontal < 0 ) {
		return;
	}

IL_00e7:
	{
		// } else if (horizontal < 0 ) {
		float L_25 = __this->get_horizontal_33();
		if ((!(((float)L_25) < ((float)(0.0f)))))
		{
			goto IL_0157;
		}
	}
	{
		// wheels[0].steerAngle = Mathf.Rad2Deg * Mathf.Atan(2.55f / (finalTurnAngle + (1.5f / 2))) * horizontal;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_26 = __this->get_wheels_11();
		NullCheck(L_26);
		int32_t L_27 = 0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		float L_29 = __this->get_finalTurnAngle_30();
		float L_30;
		L_30 = atanf(((float)((float)(2.54999995f)/(float)((float)il2cpp_codegen_add((float)L_29, (float)(0.75f))))));
		float L_31 = __this->get_horizontal_33();
		NullCheck(L_28);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_28, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(57.2957802f), (float)L_30)), (float)L_31)), /*hidden argument*/NULL);
		// wheels[1].steerAngle = Mathf.Rad2Deg * Mathf.Atan(2.55f / (finalTurnAngle - (1.5f / 2))) * horizontal;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_32 = __this->get_wheels_11();
		NullCheck(L_32);
		int32_t L_33 = 1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		float L_35 = __this->get_finalTurnAngle_30();
		float L_36;
		L_36 = atanf(((float)((float)(2.54999995f)/(float)((float)il2cpp_codegen_subtract((float)L_35, (float)(0.75f))))));
		float L_37 = __this->get_horizontal_33();
		NullCheck(L_34);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_34, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(57.2957802f), (float)L_36)), (float)L_37)), /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0157:
	{
		// wheels[0].steerAngle =0;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_38 = __this->get_wheels_11();
		NullCheck(L_38);
		int32_t L_39 = 0;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_40);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_40, (0.0f), /*hidden argument*/NULL);
		// wheels[1].steerAngle =0;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_41 = __this->get_wheels_11();
		NullCheck(L_41);
		int32_t L_42 = 1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968(L_43, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void controller::getObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_getObjects_mEA7F5E086A24FE2420B33A43DC35B79D778F9BCC (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisengineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C_m57FA825439EC46EE872B28424E82CEC911A96A51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisinputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0_m03AA252E29E814779C9A5B79643FF68CABFAB1C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TiswheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019_m2BA6E22DE79496436529A1E6926399BE2E8ABFF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral931BAE25A5BD232007405BEE05F4F858845D0039);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IM = GetComponent<inputManager>();
		inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * L_0;
		L_0 = Component_GetComponent_TisinputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0_m03AA252E29E814779C9A5B79643FF68CABFAB1C1(__this, /*hidden argument*/Component_GetComponent_TisinputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0_m03AA252E29E814779C9A5B79643FF68CABFAB1C1_RuntimeMethod_var);
		__this->set_IM_6(L_0);
		// rigidbody = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1;
		L_1 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rigidbody_10(L_1);
		// audio = GetComponent<engineAudio>();
		engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * L_2;
		L_2 = Component_GetComponent_TisengineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C_m57FA825439EC46EE872B28424E82CEC911A96A51(__this, /*hidden argument*/Component_GetComponent_TisengineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C_m57FA825439EC46EE872B28424E82CEC911A96A51_RuntimeMethod_var);
		__this->set_audio_5(L_2);
		// wheelsmanager = GetComponent<wheelsManager>();
		wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * L_3;
		L_3 = Component_GetComponent_TiswheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019_m2BA6E22DE79496436529A1E6926399BE2E8ABFF6(__this, /*hidden argument*/Component_GetComponent_TiswheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019_m2BA6E22DE79496436529A1E6926399BE2E8ABFF6_RuntimeMethod_var);
		__this->set_wheelsmanager_7(L_3);
		// wheels = wheelsmanager.wheels;
		wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * L_4 = __this->get_wheelsmanager_7();
		NullCheck(L_4);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_5 = L_4->get_wheels_9();
		__this->set_wheels_11(L_5);
		// wheelSlip = new float[wheels.Length];
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_6 = __this->get_wheels_11();
		NullCheck(L_6);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		__this->set_wheelSlip_29(L_7);
		// rigidbody.centerOfMass = gameObject.transform.Find("centerOfMas").gameObject.transform.localPosition;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_8 = __this->get_rigidbody_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_10, _stringLiteral931BAE25A5BD232007405BEE05F4F858845D0039, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		Rigidbody_set_centerOfMass_m3B13BE412D99CE5133606643F14501CF5C63CCEC(L_8, L_14, /*hidden argument*/NULL);
		// audio.maxRPM = maxRPM;
		engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * L_15 = __this->get_audio_5();
		float L_16 = __this->get_maxRPM_16();
		NullCheck(L_15);
		L_15->set_maxRPM_28(L_16);
		// }
		return;
	}
}
// System.Void controller::addDownForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_addDownForce_m36F72DAEA98065A102C420E9EBD6EFAD8A8A5211 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B2_0 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B3_1 = NULL;
	{
		// downforce = Mathf.Abs( DownForceValue * rigidbody.velocity.magnitude);
		float L_0 = __this->get_DownForceValue_20();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1 = __this->get_rigidbody_10();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_multiply((float)L_0, (float)L_3)));
		__this->set_downforce_36(L_4);
		// downforce = KPH > 60 ? downforce : 0;
		float L_5 = __this->get_KPH_25();
		G_B1_0 = __this;
		if ((((float)L_5) > ((float)(60.0f))))
		{
			G_B2_0 = __this;
			goto IL_003a;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		goto IL_0040;
	}

IL_003a:
	{
		float L_6 = __this->get_downforce_36();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0040:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_downforce_36(G_B3_0);
		// rigidbody.AddForce(-transform.up * downforce );
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7 = __this->get_rigidbody_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_downforce_36();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_7, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void controller::friction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_friction_m1032B942F3EF8836CCC44459E82B1F2092324EDB (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_2 = NULL;
	int32_t V_3 = 0;
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * G_B5_0 = NULL;
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * G_B6_1 = NULL;
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * G_B8_0 = NULL;
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * G_B7_0 = NULL;
	float G_B9_0 = 0.0f;
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * G_B9_1 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B15_0 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B14_0 = NULL;
	float G_B16_0 = 0.0f;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B16_1 = NULL;
	{
		// float sum = 0;
		V_1 = (0.0f);
		// float[] sidewaysSlip = new float[wheels.Length];
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_0 = __this->get_wheels_11();
		NullCheck(L_0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		V_2 = L_1;
		// for (int i = 0; i < wheels.Length ; i++){
		V_3 = 0;
		goto IL_011f;
	}

IL_001b:
	{
		// if(wheels[i].GetGroundHit(out hit) && i >= 2 ){
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_2 = __this->get_wheels_11();
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		bool L_6;
		L_6 = WheelCollider_GetGroundHit_mDCD55AC74710E685DBA37F02C904B8F8F3E59DB9(L_5, (WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB *)(&V_0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00e4;
		}
	}
	{
		int32_t L_7 = V_3;
		if ((((int32_t)L_7) < ((int32_t)2)))
		{
			goto IL_00e4;
		}
	}
	{
		// forwardFriction = wheels[i].forwardFriction;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_8 = __this->get_wheels_11();
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_12;
		L_12 = WheelCollider_get_forwardFriction_m430D5CCD9D463482275A9058352832DA8153B7DD(L_11, /*hidden argument*/NULL);
		__this->set_forwardFriction_8(L_12);
		// forwardFriction.stiffness = (IM.handbrake)?  .55f : ForwardStifness;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * L_13 = __this->get_address_of_forwardFriction_8();
		inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * L_14 = __this->get_IM_6();
		NullCheck(L_14);
		bool L_15 = L_14->get_handbrake_6();
		G_B4_0 = L_13;
		if (L_15)
		{
			G_B5_0 = L_13;
			goto IL_0064;
		}
	}
	{
		float L_16 = __this->get_ForwardStifness_23();
		G_B6_0 = L_16;
		G_B6_1 = G_B4_0;
		goto IL_0069;
	}

IL_0064:
	{
		G_B6_0 = (0.550000012f);
		G_B6_1 = G_B5_0;
	}

IL_0069:
	{
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)G_B6_1, G_B6_0, /*hidden argument*/NULL);
		// wheels[i].forwardFriction = forwardFriction;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_17 = __this->get_wheels_11();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_21 = __this->get_forwardFriction_8();
		NullCheck(L_20);
		WheelCollider_set_forwardFriction_mEC613D233431786260E97DA4B2D14C597A4390A8(L_20, L_21, /*hidden argument*/NULL);
		// sidewaysFriction = wheels[i].sidewaysFriction;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_22 = __this->get_wheels_11();
		int32_t L_23 = V_3;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_26;
		L_26 = WheelCollider_get_sidewaysFriction_m85AA645570CAC61DF6BC5F9B8F70409A877F7DFE(L_25, /*hidden argument*/NULL);
		__this->set_sidewaysFriction_9(L_26);
		// sidewaysFriction.stiffness = (IM.handbrake)? .55f : SidewaysStifness;
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * L_27 = __this->get_address_of_sidewaysFriction_9();
		inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * L_28 = __this->get_IM_6();
		NullCheck(L_28);
		bool L_29 = L_28->get_handbrake_6();
		G_B7_0 = L_27;
		if (L_29)
		{
			G_B8_0 = L_27;
			goto IL_00af;
		}
	}
	{
		float L_30 = __this->get_SidewaysStifness_24();
		G_B9_0 = L_30;
		G_B9_1 = G_B7_0;
		goto IL_00b4;
	}

IL_00af:
	{
		G_B9_0 = (0.550000012f);
		G_B9_1 = G_B8_0;
	}

IL_00b4:
	{
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)G_B9_1, G_B9_0, /*hidden argument*/NULL);
		// wheels[i].sidewaysFriction = sidewaysFriction;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_31 = __this->get_wheels_11();
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_35 = __this->get_sidewaysFriction_9();
		NullCheck(L_34);
		WheelCollider_set_sidewaysFriction_mEE0EFD1DFE53A0FA023F8D1E05840A58D69784C2(L_34, L_35, /*hidden argument*/NULL);
		// grounded = true;
		__this->set_grounded_43((bool)1);
		// sum += Mathf.Abs(hit.sidewaysSlip);
		float L_36 = V_1;
		float L_37;
		L_37 = WheelHit_get_sidewaysSlip_m6AA5854F880C9BCDA98A22DBB694408954BB0CED((WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB *)(&V_0), /*hidden argument*/NULL);
		float L_38;
		L_38 = fabsf(L_37);
		V_1 = ((float)il2cpp_codegen_add((float)L_36, (float)L_38));
		// }
		goto IL_00eb;
	}

IL_00e4:
	{
		// else grounded = false;
		__this->set_grounded_43((bool)0);
	}

IL_00eb:
	{
		// wheelSlip[i] = Mathf.Abs( hit.forwardSlip ) + Mathf.Abs(hit.sidewaysSlip) ;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_39 = __this->get_wheelSlip_29();
		int32_t L_40 = V_3;
		float L_41;
		L_41 = WheelHit_get_forwardSlip_m8F11089F49F1049C5D993A0E360E8738D7E600FC((WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB *)(&V_0), /*hidden argument*/NULL);
		float L_42;
		L_42 = fabsf(L_41);
		float L_43;
		L_43 = WheelHit_get_sidewaysSlip_m6AA5854F880C9BCDA98A22DBB694408954BB0CED((WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB *)(&V_0), /*hidden argument*/NULL);
		float L_44;
		L_44 = fabsf(L_43);
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (float)((float)il2cpp_codegen_add((float)L_42, (float)L_44)));
		// sidewaysSlip[i] = Mathf.Abs(hit.sidewaysSlip);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_45 = V_2;
		int32_t L_46 = V_3;
		float L_47;
		L_47 = WheelHit_get_sidewaysSlip_m6AA5854F880C9BCDA98A22DBB694408954BB0CED((WheelHit_t29625F675B7C6CD83AE028E64F770C15811A36BB *)(&V_0), /*hidden argument*/NULL);
		float L_48;
		L_48 = fabsf(L_47);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (float)L_48);
		// for (int i = 0; i < wheels.Length ; i++){
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_011f:
	{
		// for (int i = 0; i < wheels.Length ; i++){
		int32_t L_50 = V_3;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_51 = __this->get_wheels_11();
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		// sum /= wheels.Length - 2 ;
		float L_52 = V_1;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_53 = __this->get_wheels_11();
		NullCheck(L_53);
		V_1 = ((float)((float)L_52/(float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length))), (int32_t)2))))));
		// radius = (KPH > 60) ?  4 + (sum * -25) + KPH / 8 : 4;
		float L_54 = __this->get_KPH_25();
		G_B14_0 = __this;
		if ((((float)L_54) > ((float)(60.0f))))
		{
			G_B15_0 = __this;
			goto IL_0150;
		}
	}
	{
		G_B16_0 = (4.0f);
		G_B16_1 = G_B14_0;
		goto IL_016a;
	}

IL_0150:
	{
		float L_55 = V_1;
		float L_56 = __this->get_KPH_25();
		G_B16_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(4.0f), (float)((float)il2cpp_codegen_multiply((float)L_55, (float)(-25.0f))))), (float)((float)((float)L_56/(float)(8.0f)))));
		G_B16_1 = G_B15_0;
	}

IL_016a:
	{
		NullCheck(G_B16_1);
		G_B16_1->set_radius_31(G_B16_0);
		// }
		return;
	}
}
// System.Void controller::setEngineLerp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_setEngineLerp_m00D96E42A80547F5ED849F80840F59A5D403A949 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, float ___num0, const RuntimeMethod* method)
{
	{
		// engineLerp = true;
		__this->set_engineLerp_44((bool)1);
		// engineLerpValue = num;
		float L_0 = ___num0;
		__this->set_engineLerpValue_39(L_0);
		// }
		return;
	}
}
// System.Void controller::lerpEngine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_lerpEngine_mF7372F1EA9E3BEDE82B544005EB4281D8AD34592 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B3_0 = NULL;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * G_B4_1 = NULL;
	{
		// if(engineLerp){
		bool L_0 = __this->get_engineLerp_44();
		if (!L_0)
		{
			goto IL_005a;
		}
	}
	{
		// totalPower = 0;
		__this->set_totalPower_28((0.0f));
		// engineRPM = Mathf.Lerp(engineRPM,engineLerpValue,(EngineSmoothTime* 10) * Time.deltaTime );
		float L_1 = __this->get_engineRPM_27();
		float L_2 = __this->get_engineLerpValue_39();
		float L_3 = __this->get_EngineSmoothTime_22();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_5;
		L_5 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_1, L_2, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)(10.0f))), (float)L_4)), /*hidden argument*/NULL);
		__this->set_engineRPM_27(L_5);
		// engineLerp = engineRPM <= engineLerpValue + 100 ? false : true;
		float L_6 = __this->get_engineRPM_27();
		float L_7 = __this->get_engineLerpValue_39();
		G_B2_0 = __this;
		if ((((float)L_6) <= ((float)((float)il2cpp_codegen_add((float)L_7, (float)(100.0f))))))
		{
			G_B3_0 = __this;
			goto IL_0054;
		}
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0055;
	}

IL_0054:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0055:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_engineLerp_44((bool)G_B4_0);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void controller::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller_OnGUI_mEC4C57F7B21A6EE9310993B0FADF9A7E4C37D656 (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DD23313749133D170C856F9D3633969D8256275);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86DA09E3D47F55392D45C6A2A615CD7BFBAAA16E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DD20966487EC866355E6EB9DBCD7D00F659C846);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98C0B88E4254B66039D7BF438EAED955B74E4689);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3553787EFC2C6E160706A9559EA0B8F86A01380);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC008E503687BA2A627379D4E257787AEA3506830);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	{
		// s = "";
		__this->set_s_45(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// foreach (float item in wheelSlip){
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_wheelSlip_29();
		V_1 = L_0;
		V_2 = 0;
		goto IL_0040;
	}

IL_0016:
	{
		// foreach (float item in wheelSlip){
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		// s +=  item.ToString("0.0") + " ";
		String_t* L_5 = __this->get_s_45();
		String_t* L_6;
		L_6 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_3), _stringLiteralC008E503687BA2A627379D4E257787AEA3506830, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_5, L_6, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		__this->set_s_45(L_7);
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0040:
	{
		// foreach (float item in wheelSlip){
		int32_t L_9 = V_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		// float pos = 50;
		V_0 = (50.0f);
		// GUI.Label(new Rect(20, pos, 200, 20),"currentGear: " + gearNum.ToString("0"));
		float L_11 = V_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_12), (20.0f), L_11, (200.0f), (20.0f), /*hidden argument*/NULL);
		int32_t* L_13 = __this->get_address_of_gearNum_26();
		String_t* L_14;
		L_14 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)L_13, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5DD23313749133D170C856F9D3633969D8256275, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_12, L_15, /*hidden argument*/NULL);
		// pos+=25f;
		float L_16 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_16, (float)(25.0f)));
		// GUI.HorizontalSlider(new Rect(20, pos, 200, 20), engineRPM,0,maxRPM);
		float L_17 = V_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_18), (20.0f), L_17, (200.0f), (20.0f), /*hidden argument*/NULL);
		float L_19 = __this->get_engineRPM_27();
		float L_20 = __this->get_maxRPM_16();
		float L_21;
		L_21 = GUI_HorizontalSlider_mC018F8CE4598BB5EFA2DA2253EF3818263E15BAF(L_18, L_19, (0.0f), L_20, /*hidden argument*/NULL);
		// pos+=25f;
		float L_22 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_22, (float)(25.0f)));
		// GUI.Label(new Rect(20, pos, 200, 20),"wheel slip: " + s);
		float L_23 = V_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_24), (20.0f), L_23, (200.0f), (20.0f), /*hidden argument*/NULL);
		String_t* L_25 = __this->get_s_45();
		String_t* L_26;
		L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA3553787EFC2C6E160706A9559EA0B8F86A01380, L_25, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_24, L_26, /*hidden argument*/NULL);
		// pos+=25f;
		float L_27 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_27, (float)(25.0f)));
		// GUI.Label(new Rect(20, pos, 200, 20),"Torque: " + totalPower.ToString("0"));
		float L_28 = V_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_29), (20.0f), L_28, (200.0f), (20.0f), /*hidden argument*/NULL);
		float* L_30 = __this->get_address_of_totalPower_28();
		String_t* L_31;
		L_31 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_30, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		String_t* L_32;
		L_32 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8DD20966487EC866355E6EB9DBCD7D00F659C846, L_31, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_29, L_32, /*hidden argument*/NULL);
		// pos+=25f;
		float L_33 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_33, (float)(25.0f)));
		// GUI.Label(new Rect(20, pos, 200, 20),"KPH: " + KPH.ToString("0"));
		float L_34 = V_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_35), (20.0f), L_34, (200.0f), (20.0f), /*hidden argument*/NULL);
		float* L_36 = __this->get_address_of_KPH_25();
		String_t* L_37;
		L_37 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_36, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		String_t* L_38;
		L_38 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral86DA09E3D47F55392D45C6A2A615CD7BFBAAA16E, L_37, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_35, L_38, /*hidden argument*/NULL);
		// pos+=25f;
		float L_39 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_39, (float)(25.0f)));
		// GUI.HorizontalSlider(new Rect(20, pos, 200, 20), engineLoad, 0.0F, 1.0F);
		float L_40 = V_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_41), (20.0f), L_40, (200.0f), (20.0f), /*hidden argument*/NULL);
		float L_42 = __this->get_engineLoad_40();
		float L_43;
		L_43 = GUI_HorizontalSlider_mC018F8CE4598BB5EFA2DA2253EF3818263E15BAF(L_41, L_42, (0.0f), (1.0f), /*hidden argument*/NULL);
		// pos+=25f;
		float L_44 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_44, (float)(25.0f)));
		// GUI.Label(new Rect(20, pos, 200, 20),"brakes: " + brakPower.ToString("0"));
		float L_45 = V_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_46), (20.0f), L_45, (200.0f), (20.0f), /*hidden argument*/NULL);
		float* L_47 = __this->get_address_of_brakPower_38();
		String_t* L_48;
		L_48 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)L_47, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		String_t* L_49;
		L_49 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral98C0B88E4254B66039D7BF438EAED955B74E4689, L_48, /*hidden argument*/NULL);
		GUI_Label_mC6571F167DA5145CE2BDBF43661290662EA9D631(L_46, L_49, /*hidden argument*/NULL);
		// pos+=25f;
		float L_50 = V_0;
		V_0 = ((float)il2cpp_codegen_add((float)L_50, (float)(25.0f)));
		// }
		return;
	}
}
// System.Void controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controller__ctor_m825DAD45844094F5156B96808FDC7984F410677F (controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * __this, const RuntimeMethod* method)
{
	{
		// [Range (0,1)] public float EngineSmoothTime = 0.2f ;
		__this->set_EngineSmoothTime_22((0.200000003f));
		// private int gearNum = 1;
		__this->set_gearNum_26(1);
		// private float radius  = 4;
		__this->set_radius_31((4.0f));
		// private float engineLoad = 1;
		__this->set_engineLoad_40((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void createRandomCar::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createRandomCar_OnCollisionEnter_mA77F98845E25AA7583203F90AA0EF98629779361 (createRandomCar_t06A4B7418524980E16701545C2CB4E031D4FBB81 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// GameObject[] cars = {newCar0, newCar1, newCar2, newCar3};
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)4);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = L_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_newCar0_4();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_2);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_newCar1_5();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_4);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_newCar2_6();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_6);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_newCar3_7();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_8);
		V_0 = L_7;
		// float[] rotationOfRandomCars = {-2.67f, -1.17f, 0.46f, 2.02f};
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = L_9;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____BDBF031B505BCDFA1F0ADAC6E7195BC0B604BCF356828019E0632AED20A49A57_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_10;
		// int createRandomCar = Random.Range(0, 4);
		int32_t L_12;
		L_12 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_2 = L_12;
		// int createRotatonOfRandomCars = Random.Range(0, 4);
		int32_t L_13;
		L_13 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_3 = L_13;
		// newRoadPosition = new Vector3(rotationOfRandomCars[createRotatonOfRandomCars],3.67f ,transform.position.z+50);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = V_1;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		float L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), L_17, (3.67000008f), ((float)il2cpp_codegen_add((float)L_20, (float)(50.0f))), /*hidden argument*/NULL);
		__this->set_newRoadPosition_8(L_21);
		// Debug.Log(createRandomCar);
		int32_t L_22 = V_2;
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_23);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_24, /*hidden argument*/NULL);
		// Instantiate(cars[createRandomCar], newRoadPosition, Quaternion.identity);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = V_0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = __this->get_newRoadPosition_8();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_28, L_29, L_30, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void createRandomCar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void createRandomCar__ctor_mD8396ECA996CB3CC211E00266BF92D3E19AF0CE1 (createRandomCar_t06A4B7418524980E16701545C2CB4E031D4FBB81 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void engineAudio::StartSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void engineAudio_StartSound_mDB14C2114A46FCC0C4D96B9B5862E5B447D806AE (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE997756AE28DA8CED1FA1160227AA74FACA2C68);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioObject = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		__this->set_audioObject_30(L_0);
		// audioObject.transform.parent = gameObject.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_audioObject_30();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_2, L_4, /*hidden argument*/NULL);
		// audioObject.transform.name = "audio";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_audioObject_30();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_6, _stringLiteralCE997756AE28DA8CED1FA1160227AA74FACA2C68, /*hidden argument*/NULL);
		// audioObject.transform.position = new Vector3(0,1,0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_audioObject_30();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_9, /*hidden argument*/NULL);
		// audioObject.transform.localPosition = new Vector3(0,1,0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_audioObject_30();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_11, L_12, /*hidden argument*/NULL);
		// audioObject.transform.localScale = new Vector3(1,1,1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_audioObject_30();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_14, L_15, /*hidden argument*/NULL);
		// m_HighAccel = SetUpEngineAudioSource(highAccelClip);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_16 = __this->get_highAccelClip_6();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_17;
		L_17 = engineAudio_SetUpEngineAudioSource_mCC81D70C235103FD3AB27C21475F292A86BF4A91(__this, L_16, /*hidden argument*/NULL);
		__this->set_m_HighAccel_21(L_17);
		// m_LowAccel = SetUpEngineAudioSource(lowAccelClip);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_18 = __this->get_lowAccelClip_4();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_19;
		L_19 = engineAudio_SetUpEngineAudioSource_mCC81D70C235103FD3AB27C21475F292A86BF4A91(__this, L_18, /*hidden argument*/NULL);
		__this->set_m_LowAccel_19(L_19);
		// m_LowDecel = SetUpEngineAudioSource(lowDecelClip);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_20 = __this->get_lowDecelClip_5();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_21;
		L_21 = engineAudio_SetUpEngineAudioSource_mCC81D70C235103FD3AB27C21475F292A86BF4A91(__this, L_20, /*hidden argument*/NULL);
		__this->set_m_LowDecel_20(L_21);
		// m_HighDecel = SetUpEngineAudioSource(highDecelClip);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_22 = __this->get_highDecelClip_7();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_23;
		L_23 = engineAudio_SetUpEngineAudioSource_mCC81D70C235103FD3AB27C21475F292A86BF4A91(__this, L_22, /*hidden argument*/NULL);
		__this->set_m_HighDecel_22(L_23);
		// if(Turbo != null)m_Turbo = SetUpEngineAudioSource(Turbo);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_24 = __this->get_Turbo_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_010f;
		}
	}
	{
		// if(Turbo != null)m_Turbo = SetUpEngineAudioSource(Turbo);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_26 = __this->get_Turbo_8();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_27;
		L_27 = engineAudio_SetUpEngineAudioSource_mCC81D70C235103FD3AB27C21475F292A86BF4A91(__this, L_26, /*hidden argument*/NULL);
		__this->set_m_Turbo_23(L_27);
	}

IL_010f:
	{
		// if(downShift != null)m_downShift = setupDownShift(downShift);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_28 = __this->get_downShift_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_28, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_012f;
		}
	}
	{
		// if(downShift != null)m_downShift = setupDownShift(downShift);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_30 = __this->get_downShift_10();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_31;
		L_31 = engineAudio_setupDownShift_m22FFF46F1965B12EEBF3856791F82C904C98507F(__this, L_30, /*hidden argument*/NULL);
		__this->set_m_downShift_24(L_31);
	}

IL_012f:
	{
		// m_StartedSound = true;
		__this->set_m_StartedSound_25((bool)1);
		// }
		return;
	}
}
// System.Void engineAudio::StopSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void engineAudio_StopSound_mE615EB5BDAC2A0F8A092F5E61D340A4EFA29B2F3 (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m9E7C96FA7A236064DAC29DC964FF207E0E47D06A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var source in GetComponents<AudioSource>())
		AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* L_0;
		L_0 = Component_GetComponents_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m9E7C96FA7A236064DAC29DC964FF207E0E47D06A(__this, /*hidden argument*/Component_GetComponents_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m9E7C96FA7A236064DAC29DC964FF207E0E47D06A_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		// foreach (var source in GetComponents<AudioSource>())
		AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// Destroy(source);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		// foreach (var source in GetComponents<AudioSource>())
		int32_t L_6 = V_1;
		AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// m_StartedSound = false;
		__this->set_m_StartedSound_25((bool)0);
		// }
		return;
	}
}
// System.Void engineAudio::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void engineAudio_Update_mA14189FBB334C648E619BCB0CF6A3CC5A213948C (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// float camDist = (Camera.main.transform.position - transform.position).sqrMagnitude;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6;
		L_6 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_6;
		// accFade = Mathf.Lerp(accFade,Mathf.Abs( acceleration ), 15 * Time.deltaTime );
		float L_7 = __this->get_accFade_16();
		float L_8 = __this->get_acceleration_17();
		float L_9;
		L_9 = fabsf(L_8);
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_11;
		L_11 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_7, L_9, ((float)il2cpp_codegen_multiply((float)(15.0f), (float)L_10)), /*hidden argument*/NULL);
		__this->set_accFade_16(L_11);
		// if (m_StartedSound && camDist > maxRolloffDistance*maxRolloffDistance)
		bool L_12 = __this->get_m_StartedSound_25();
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		float L_13 = V_0;
		float L_14 = __this->get_maxRolloffDistance_18();
		float L_15 = __this->get_maxRolloffDistance_18();
		if ((!(((float)L_13) > ((float)((float)il2cpp_codegen_multiply((float)L_14, (float)L_15))))))
		{
			goto IL_006d;
		}
	}
	{
		// StopSound();
		engineAudio_StopSound_mE615EB5BDAC2A0F8A092F5E61D340A4EFA29B2F3(__this, /*hidden argument*/NULL);
	}

IL_006d:
	{
		// if (!m_StartedSound && camDist < maxRolloffDistance*maxRolloffDistance)
		bool L_16 = __this->get_m_StartedSound_25();
		if (L_16)
		{
			goto IL_008b;
		}
	}
	{
		float L_17 = V_0;
		float L_18 = __this->get_maxRolloffDistance_18();
		float L_19 = __this->get_maxRolloffDistance_18();
		if ((!(((float)L_17) < ((float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19))))))
		{
			goto IL_008b;
		}
	}
	{
		// StartSound();
		engineAudio_StartSound_mDB14C2114A46FCC0C4D96B9B5862E5B447D806AE(__this, /*hidden argument*/NULL);
	}

IL_008b:
	{
		// if (m_StartedSound){
		bool L_20 = __this->get_m_StartedSound_25();
		if (!L_20)
		{
			goto IL_0267;
		}
	}
	{
		// if(totalPower > 0 && !engineLerp)
		float L_21 = __this->get_totalPower_26();
		if ((!(((float)L_21) > ((float)(0.0f)))))
		{
			goto IL_00b8;
		}
	}
	{
		bool L_22 = __this->get_engineLerp_29();
		if (L_22)
		{
			goto IL_00b8;
		}
	}
	{
		// acceleration = 1;
		__this->set_acceleration_17((1.0f));
		goto IL_00c3;
	}

IL_00b8:
	{
		// else acceleration = 0;
		__this->set_acceleration_17((0.0f));
	}

IL_00c3:
	{
		// float pitch = ULerp(lowPitchMin, lowPitchMax, engineRPM / maxRPM);
		float L_23 = __this->get_lowPitchMin_13();
		float L_24 = __this->get_lowPitchMax_14();
		float L_25 = __this->get_engineRPM_27();
		float L_26 = __this->get_maxRPM_28();
		float L_27;
		L_27 = engineAudio_ULerp_m514EDAD0C4C140CFCE38B7CA0BBA72DC15C0D5CF(__this, L_23, L_24, ((float)((float)L_25/(float)L_26)), /*hidden argument*/NULL);
		V_2 = L_27;
		// pitch = Mathf.Min(lowPitchMax, pitch);
		float L_28 = __this->get_lowPitchMax_14();
		float L_29 = V_2;
		float L_30;
		L_30 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14(L_28, L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		// if(Turbo != null) m_Turbo.pitch = 0.76f +( engineRPM /  maxRPM) /2;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_31 = __this->get_Turbo_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_31, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0122;
		}
	}
	{
		// if(Turbo != null) m_Turbo.pitch = 0.76f +( engineRPM /  maxRPM) /2;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_33 = __this->get_m_Turbo_23();
		float L_34 = __this->get_engineRPM_27();
		float L_35 = __this->get_maxRPM_28();
		NullCheck(L_33);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_33, ((float)il2cpp_codegen_add((float)(0.75999999f), (float)((float)((float)((float)((float)L_34/(float)L_35))/(float)(2.0f))))), /*hidden argument*/NULL);
	}

IL_0122:
	{
		// m_LowAccel.pitch = pitch*Pitch;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_36 = __this->get_m_LowAccel_19();
		float L_37 = V_2;
		float L_38 = __this->get_Pitch_12();
		NullCheck(L_36);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_36, ((float)il2cpp_codegen_multiply((float)L_37, (float)L_38)), /*hidden argument*/NULL);
		// m_LowDecel.pitch = pitch*Pitch;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_39 = __this->get_m_LowDecel_20();
		float L_40 = V_2;
		float L_41 = __this->get_Pitch_12();
		NullCheck(L_39);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_39, ((float)il2cpp_codegen_multiply((float)L_40, (float)L_41)), /*hidden argument*/NULL);
		// m_HighAccel.pitch = pitch*highPitchMultiplier*Pitch;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_42 = __this->get_m_HighAccel_21();
		float L_43 = V_2;
		float L_44 = __this->get_highPitchMultiplier_15();
		float L_45 = __this->get_Pitch_12();
		NullCheck(L_42);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_42, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_43, (float)L_44)), (float)L_45)), /*hidden argument*/NULL);
		// m_HighDecel.pitch = pitch*highPitchMultiplier*Pitch;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_46 = __this->get_m_HighDecel_22();
		float L_47 = V_2;
		float L_48 = __this->get_highPitchMultiplier_15();
		float L_49 = __this->get_Pitch_12();
		NullCheck(L_46);
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_46, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_47, (float)L_48)), (float)L_49)), /*hidden argument*/NULL);
		// float decFade = 1 - accFade;
		float L_50 = __this->get_accFade_16();
		V_3 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_50));
		// float highFade = Mathf.InverseLerp(0.2f, 0.8f,  engineRPM / 10000);
		float L_51 = __this->get_engineRPM_27();
		float L_52;
		L_52 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B((0.200000003f), (0.800000012f), ((float)((float)L_51/(float)(10000.0f))), /*hidden argument*/NULL);
		V_4 = L_52;
		// float lowFade = 1 - highFade;
		float L_53 = V_4;
		V_5 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_53));
		// highFade = 1 - ((1 - highFade)*(1 - highFade));
		float L_54 = V_4;
		float L_55 = V_4;
		V_4 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_54)), (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_55))))));
		// lowFade = 1 - ((1 - lowFade)*(1 - lowFade));
		float L_56 = V_5;
		float L_57 = V_5;
		V_5 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_56)), (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_57))))));
		// decFade = 1 - ((1 - decFade)*(1 - decFade));
		float L_58 = V_3;
		float L_59 = V_3;
		V_3 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_58)), (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_59))))));
		// m_LowAccel.volume = lowFade*accFade;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_60 = __this->get_m_LowAccel_19();
		float L_61 = V_5;
		float L_62 = __this->get_accFade_16();
		NullCheck(L_60);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_60, ((float)il2cpp_codegen_multiply((float)L_61, (float)L_62)), /*hidden argument*/NULL);
		// m_LowDecel.volume = lowFade*decFade;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_63 = __this->get_m_LowDecel_20();
		float L_64 = V_5;
		float L_65 = V_3;
		NullCheck(L_63);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_63, ((float)il2cpp_codegen_multiply((float)L_64, (float)L_65)), /*hidden argument*/NULL);
		// m_HighAccel.volume = highFade*accFade;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_66 = __this->get_m_HighAccel_21();
		float L_67 = V_4;
		float L_68 = __this->get_accFade_16();
		NullCheck(L_66);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_66, ((float)il2cpp_codegen_multiply((float)L_67, (float)L_68)), /*hidden argument*/NULL);
		// m_HighDecel.volume = highFade*decFade;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_69 = __this->get_m_HighDecel_22();
		float L_70 = V_4;
		float L_71 = V_3;
		NullCheck(L_69);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_69, ((float)il2cpp_codegen_multiply((float)L_70, (float)L_71)), /*hidden argument*/NULL);
		// if(Turbo != null)m_Turbo.volume = highFade * accFade  * turboVolume ;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_72 = __this->get_Turbo_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_72, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0267;
		}
	}
	{
		// if(Turbo != null)m_Turbo.volume = highFade * accFade  * turboVolume ;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_74 = __this->get_m_Turbo_23();
		float L_75 = V_4;
		float L_76 = __this->get_accFade_16();
		float L_77 = __this->get_turboVolume_9();
		NullCheck(L_74);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_74, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_75, (float)L_76)), (float)L_77)), /*hidden argument*/NULL);
	}

IL_0267:
	{
		// }
		return;
	}
}
// UnityEngine.AudioSource engineAudio::SetUpEngineAudioSource(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * engineAudio_SetUpEngineAudioSource_mCC81D70C235103FD3AB27C21475F292A86BF4A91 (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioSource source = audioObject.AddComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_audioObject_30();
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_0, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		// source.clip = clip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = L_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = ___clip0;
		NullCheck(L_2);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_2, L_3, /*hidden argument*/NULL);
		// source.volume = 0;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = L_2;
		NullCheck(L_4);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_4, (0.0f), /*hidden argument*/NULL);
		// source.spatialBlend = 1;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = L_4;
		NullCheck(L_5);
		AudioSource_set_spatialBlend_m7DD3DA6F68BA6710EDB2EE8482F876D16F9A9BEC(L_5, (1.0f), /*hidden argument*/NULL);
		// source.loop = true;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = L_5;
		NullCheck(L_6);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_6, (bool)1, /*hidden argument*/NULL);
		// source.dopplerLevel = 0;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = L_6;
		NullCheck(L_7);
		AudioSource_set_dopplerLevel_m3E3187EA638992BE0A7AF9D660DAB1B0D088C2A0(L_7, (0.0f), /*hidden argument*/NULL);
		// source.time = Random.Range(0f, clip.length);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8 = L_7;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9 = ___clip0;
		NullCheck(L_9);
		float L_10;
		L_10 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_9, /*hidden argument*/NULL);
		float L_11;
		L_11 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		AudioSource_set_time_mE8F36DDE8E610126F9733D13F299C13F71BCE690(L_8, L_11, /*hidden argument*/NULL);
		// source.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12 = L_8;
		NullCheck(L_12);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_12, /*hidden argument*/NULL);
		// source.minDistance = 5;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13 = L_12;
		NullCheck(L_13);
		AudioSource_set_minDistance_m9C1D3410330B09EACA69C64BF634018D71180F91(L_13, (5.0f), /*hidden argument*/NULL);
		// source.reverbZoneMix = 0;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14 = L_13;
		NullCheck(L_14);
		AudioSource_set_reverbZoneMix_m701BBB1343D14456A2959FBB5304A51DE1164795(L_14, (0.0f), /*hidden argument*/NULL);
		// source.maxDistance = maxRolloffDistance;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_15 = L_14;
		float L_16 = __this->get_maxRolloffDistance_18();
		NullCheck(L_15);
		AudioSource_set_maxDistance_m8AF5831BC0B2D070B2D4E1B54CB27082240A5EA8(L_15, L_16, /*hidden argument*/NULL);
		// return source;
		return L_15;
	}
}
// UnityEngine.AudioSource engineAudio::setupDownShift(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * engineAudio_setupDownShift_m22FFF46F1965B12EEBF3856791F82C904C98507F (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioSource source = audioObject.AddComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_audioObject_30();
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_0, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		// source.clip = clip;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = L_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = ___clip0;
		NullCheck(L_2);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_2, L_3, /*hidden argument*/NULL);
		// source.volume = downShiftVolume;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = L_2;
		float L_5 = __this->get_downShiftVolume_11();
		NullCheck(L_4);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_4, L_5, /*hidden argument*/NULL);
		// source.spatialBlend = 1;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = L_4;
		NullCheck(L_6);
		AudioSource_set_spatialBlend_m7DD3DA6F68BA6710EDB2EE8482F876D16F9A9BEC(L_6, (1.0f), /*hidden argument*/NULL);
		// source.loop = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = L_6;
		NullCheck(L_7);
		AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0(L_7, (bool)0, /*hidden argument*/NULL);
		// source.dopplerLevel = 0;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8 = L_7;
		NullCheck(L_8);
		AudioSource_set_dopplerLevel_m3E3187EA638992BE0A7AF9D660DAB1B0D088C2A0(L_8, (0.0f), /*hidden argument*/NULL);
		// source.time = Random.Range(0f, clip.length);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = L_8;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_10 = ___clip0;
		NullCheck(L_10);
		float L_11;
		L_11 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		AudioSource_set_time_mE8F36DDE8E610126F9733D13F299C13F71BCE690(L_9, L_12, /*hidden argument*/NULL);
		// source.minDistance = 5;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13 = L_9;
		NullCheck(L_13);
		AudioSource_set_minDistance_m9C1D3410330B09EACA69C64BF634018D71180F91(L_13, (5.0f), /*hidden argument*/NULL);
		// source.maxDistance = maxRolloffDistance;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14 = L_13;
		float L_15 = __this->get_maxRolloffDistance_18();
		NullCheck(L_14);
		AudioSource_set_maxDistance_m8AF5831BC0B2D070B2D4E1B54CB27082240A5EA8(L_14, L_15, /*hidden argument*/NULL);
		// source.playOnAwake = false;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_16 = L_14;
		NullCheck(L_16);
		AudioSource_set_playOnAwake_mBE8FAD0E1555C431C56E0DEB4BF7371E76E236F5(L_16, (bool)0, /*hidden argument*/NULL);
		// return source;
		return L_16;
	}
}
// System.Void engineAudio::DownShift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void engineAudio_DownShift_mB3EE1E621120C2BC4DBD8B4BC2246F92647AD4C9 (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(downShift != null)m_downShift.Play();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = __this->get_downShift_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if(downShift != null)m_downShift.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_m_downShift_24();
		NullCheck(L_2);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Single engineAudio::ULerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float engineAudio_ULerp_m514EDAD0C4C140CFCE38B7CA0BBA72DC15C0D5CF (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, float ___from0, float ___to1, float ___value2, const RuntimeMethod* method)
{
	{
		// return (1.0f - value)*from + value*to;
		float L_0 = ___value2;
		float L_1 = ___from0;
		float L_2 = ___value2;
		float L_3 = ___to1;
		return ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_0)), (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3))));
	}
}
// System.Void engineAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void engineAudio__ctor_m4AC04A6F1FF729AA98C710ADACFF1331515D1FBB (engineAudio_t521334DB8F4C6177F1A9A15B0197976E7895578C * __this, const RuntimeMethod* method)
{
	{
		// [Range(0.5f,1)]public float Pitch = 1f;
		__this->set_Pitch_12((1.0f));
		// [Range(.5f,3)]public float lowPitchMin = 1f;
		__this->set_lowPitchMin_13((1.0f));
		// [Range(4,7)]public float lowPitchMax = 6f;
		__this->set_lowPitchMax_14((6.0f));
		// [Range(0,1)]public float highPitchMultiplier = 0.25f;
		__this->set_highPitchMultiplier_15((0.25f));
		// private float maxRolloffDistance = 500;
		__this->set_maxRolloffDistance_18((500.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void inputManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void inputManager_Update_m640AD681BC92618FB19E0B595B32663C31C70CD2 (inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * __this, const RuntimeMethod* method)
{
	{
		// keyboard();
		inputManager_keyboard_mF637556AB59F44F8A20A52A8C10D35570963B937(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void inputManager::keyboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void inputManager_keyboard_mF637556AB59F44F8A20A52A8C10D35570963B937 (inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * G_B2_0 = NULL;
	inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * G_B3_1 = NULL;
	{
		// vertical = Input.GetAxis ("Vertical");
		float L_0;
		L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		__this->set_vertical_4(L_0);
		// horizontal = Input.GetAxis ("Horizontal");
		float L_1;
		L_1 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		__this->set_horizontal_5(L_1);
		// handbrake = (Input.GetAxis ("Jump") != 0) ? true : false;
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			G_B2_0 = __this;
			goto IL_0035;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0036;
	}

IL_0035:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0036:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_handbrake_6((bool)G_B3_0);
		// if (Input.GetKey (KeyCode.LeftShift)) boosting = true;
		bool L_3;
		L_3 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)304), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// if (Input.GetKey (KeyCode.LeftShift)) boosting = true;
		__this->set_boosting_7((bool)1);
		return;
	}

IL_004f:
	{
		// else boosting = false;
		__this->set_boosting_7((bool)0);
		// }
		return;
	}
}
// System.Void inputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void inputManager__ctor_m2C3380C662C393AD12C41AFCA0BF53EE3437270E (inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void scoreGameOverScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scoreGameOverScript_Start_mB52AEFAC11C9905E36A8D60530AE9BCFAB9C4E83 (scoreGameOverScript_tACB490D6DE568E034DA03DBE08CD95D44831E07C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral867D450998537BC0893A5F264211DA389A275A29);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// score = scoretext.GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_scoretext_4();
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_score_5(L_1);
		// score.text = PlayerPrefs.GetFloat("savedScore").ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_score_5();
		float L_3;
		L_3 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteral867D450998537BC0893A5F264211DA389A275A29, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void scoreGameOverScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void scoreGameOverScript__ctor_m478BAFD7C3D7CF5FCE7C4142E4D4F879839DC8D4 (scoreGameOverScript_tACB490D6DE568E034DA03DBE08CD95D44831E07C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void selectVehicle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void selectVehicle_Start_m8694C5F43BF19A19613BE50C53C94E91786C9409 (selectVehicle_t9ACACFACD3CB18C78E7BDF380903AE1729662881 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void selectVehicle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void selectVehicle_Update_m25BB95D424473213E76E4E0877F04490B4CD628E (selectVehicle_t9ACACFACD3CB18C78E7BDF380903AE1729662881 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void selectVehicle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void selectVehicle__ctor_mA1C98A2992C83E5C250284BE83C16CC62F4E5006 (selectVehicle_t9ACACFACD3CB18C78E7BDF380903AE1729662881 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void wheelsManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wheelsManager_Start_m3A37F03E1C4804D3837C1D7C6049B050545F8837 (wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisinputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0_m03AA252E29E814779C9A5B79643FF68CABFAB1C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// inputM = GetComponent<inputManager>();
		inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * L_0;
		L_0 = Component_GetComponent_TisinputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0_m03AA252E29E814779C9A5B79643FF68CABFAB1C1(__this, /*hidden argument*/Component_GetComponent_TisinputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0_m03AA252E29E814779C9A5B79643FF68CABFAB1C1_RuntimeMethod_var);
		__this->set_inputM_14(L_0);
		// SidewaysFriction = ForwardFriction = Friction;
		float L_1 = __this->get_Friction_4();
		float L_2 = L_1;
		V_0 = L_2;
		__this->set_ForwardFriction_6(L_2);
		float L_3 = V_0;
		__this->set_SidewaysFriction_5(L_3);
		// findComponents();
		wheelsManager_findComponents_mA367F79CEAA7337F9FC910FFD12375DB6BA89028(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void wheelsManager::findComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wheelsManager_findComponents_mA367F79CEAA7337F9FC910FFD12375DB6BA89028 (wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tiscontroller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54_mFD50AE304880E5B1E32F2EEB9F28B4D6BA3DFD52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = GetComponent<controller>();
		controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * L_0;
		L_0 = Component_GetComponent_Tiscontroller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54_mFD50AE304880E5B1E32F2EEB9F28B4D6BA3DFD52(__this, /*hidden argument*/Component_GetComponent_Tiscontroller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54_mFD50AE304880E5B1E32F2EEB9F28B4D6BA3DFD52_RuntimeMethod_var);
		__this->set_controller_7(L_0);
		// setUpWheels();
		wheelsManager_setUpWheels_mE37942095049929F87D3DD4C120CA9780FD30CC1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void wheelsManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wheelsManager_Update_m8E64404834AAA92155FD7A8676017DD7AB6955DD (wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// SidewaysFriction = ForwardFriction = Friction;
		float L_0 = __this->get_Friction_4();
		float L_1 = L_0;
		V_0 = L_1;
		__this->set_ForwardFriction_6(L_1);
		float L_2 = V_0;
		__this->set_SidewaysFriction_5(L_2);
		// controller.ForwardStifness = ForwardFriction;
		controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * L_3 = __this->get_controller_7();
		float L_4 = __this->get_ForwardFriction_6();
		NullCheck(L_3);
		L_3->set_ForwardStifness_23(L_4);
		// controller.SidewaysStifness = SidewaysFriction;
		controller_t3559E523BB1A5FD9E5A5A30FA9A241E29832BC54 * L_5 = __this->get_controller_7();
		float L_6 = __this->get_SidewaysFriction_5();
		NullCheck(L_5);
		L_5->set_SidewaysStifness_24(L_6);
		// animateWheels();
		wheelsManager_animateWheels_m1F5F34E282F7AB99AA165196E9DC51240076F4AC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void wheelsManager::animateWheels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wheelsManager_animateWheels_m1F5F34E282F7AB99AA165196E9DC51240076F4AC (wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < wheels.Length; i++) {
		V_0 = 0;
		goto IL_0051;
	}

IL_0004:
	{
		// wheels[i].GetWorldPose(out wheelPosition, out wheelRotation);
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_0 = __this->get_wheels_9();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_wheelPosition_10();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_5 = __this->get_address_of_wheelRotation_11();
		NullCheck(L_3);
		WheelCollider_GetWorldPose_m227D45061C7734F3ED4A43B7F89605A398BE8BB5(L_3, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_4, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_5, /*hidden argument*/NULL);
		// wheelObjects[i].transform.position = wheelPosition;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_wheelObjects_8();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_wheelPosition_10();
		NullCheck(L_10);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_10, L_11, /*hidden argument*/NULL);
		// wheelObjects[i].transform.rotation = wheelRotation;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get_wheelObjects_8();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = __this->get_wheelRotation_11();
		NullCheck(L_16);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_16, L_17, /*hidden argument*/NULL);
		// for (int i = 0; i < wheels.Length; i++) {
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0051:
	{
		// for (int i = 0; i < wheels.Length; i++) {
		int32_t L_19 = V_0;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_20 = __this->get_wheels_9();
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void wheelsManager::setUpWheels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wheelsManager_setUpWheels_mE37942095049929F87D3DD4C120CA9780FD30CC1 (wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * __this, const RuntimeMethod* method)
{
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * G_B3_0 = NULL;
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * G_B2_0 = NULL;
	float G_B4_0 = 0.0f;
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * G_B4_1 = NULL;
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * G_B6_0 = NULL;
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * G_B5_0 = NULL;
	float G_B7_0 = 0.0f;
	WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D * G_B7_1 = NULL;
	{
		// for (int i = 0; i < wheels.Length; i++){
		V_1 = 0;
		goto IL_00e5;
	}

IL_0007:
	{
		// curve = wheels[i].forwardFriction;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_0 = __this->get_wheels_9();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_4;
		L_4 = WheelCollider_get_forwardFriction_m430D5CCD9D463482275A9058352832DA8153B7DD(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// curve.asymptoteValue = 1;
		WheelFrictionCurve_set_asymptoteValue_mF2D071806D295FD5D414B990F8955AA175EA90D1((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)(&V_0), (1.0f), /*hidden argument*/NULL);
		// curve.extremumSlip = 0.065f;
		WheelFrictionCurve_set_extremumSlip_m5F8C078803DEC63B8521C75BDC5661A9A0AB9CA6((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)(&V_0), (0.0649999976f), /*hidden argument*/NULL);
		// curve.asymptoteSlip = 0.8f;
		WheelFrictionCurve_set_asymptoteSlip_m4B04347AAEDFA2A5A5CA812117EB2BF4A1CA062D((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)(&V_0), (0.800000012f), /*hidden argument*/NULL);
		// curve.stiffness = (inputM.vertical < 0)? ForwardFriction * 2 :ForwardFriction ;
		inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * L_5 = __this->get_inputM_14();
		NullCheck(L_5);
		float L_6 = L_5->get_vertical_4();
		G_B2_0 = (&V_0);
		if ((((float)L_6) < ((float)(0.0f))))
		{
			G_B3_0 = (&V_0);
			goto IL_0055;
		}
	}
	{
		float L_7 = __this->get_ForwardFriction_6();
		G_B4_0 = L_7;
		G_B4_1 = G_B2_0;
		goto IL_0061;
	}

IL_0055:
	{
		float L_8 = __this->get_ForwardFriction_6();
		G_B4_0 = ((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f)));
		G_B4_1 = G_B3_0;
	}

IL_0061:
	{
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)G_B4_1, G_B4_0, /*hidden argument*/NULL);
		// wheels[i].forwardFriction = curve;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_9 = __this->get_wheels_9();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_13 = V_0;
		NullCheck(L_12);
		WheelCollider_set_forwardFriction_mEC613D233431786260E97DA4B2D14C597A4390A8(L_12, L_13, /*hidden argument*/NULL);
		// curve = wheels[i].sidewaysFriction;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_14 = __this->get_wheels_9();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_18;
		L_18 = WheelCollider_get_sidewaysFriction_m85AA645570CAC61DF6BC5F9B8F70409A877F7DFE(L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		// curve.asymptoteValue = 1;
		WheelFrictionCurve_set_asymptoteValue_mF2D071806D295FD5D414B990F8955AA175EA90D1((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)(&V_0), (1.0f), /*hidden argument*/NULL);
		// curve.extremumSlip = 0.065f;
		WheelFrictionCurve_set_extremumSlip_m5F8C078803DEC63B8521C75BDC5661A9A0AB9CA6((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)(&V_0), (0.0649999976f), /*hidden argument*/NULL);
		// curve.asymptoteSlip = 0.8f;
		WheelFrictionCurve_set_asymptoteSlip_m4B04347AAEDFA2A5A5CA812117EB2BF4A1CA062D((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)(&V_0), (0.800000012f), /*hidden argument*/NULL);
		// curve.stiffness = (inputM.vertical < 0)? SidewaysFriction * 2 :SidewaysFriction ;
		inputManager_t9EDEEADBA265D6C5D2B4551AA63D23C8FD4673A0 * L_19 = __this->get_inputM_14();
		NullCheck(L_19);
		float L_20 = L_19->get_vertical_4();
		G_B5_0 = (&V_0);
		if ((((float)L_20) < ((float)(0.0f))))
		{
			G_B6_0 = (&V_0);
			goto IL_00c2;
		}
	}
	{
		float L_21 = __this->get_SidewaysFriction_5();
		G_B7_0 = L_21;
		G_B7_1 = G_B5_0;
		goto IL_00ce;
	}

IL_00c2:
	{
		float L_22 = __this->get_SidewaysFriction_5();
		G_B7_0 = ((float)il2cpp_codegen_multiply((float)L_22, (float)(2.0f)));
		G_B7_1 = G_B6_0;
	}

IL_00ce:
	{
		WheelFrictionCurve_set_stiffness_m72BBC357EB7086B434D7C0CCE8C415BBB5D5F8F8((WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D *)G_B7_1, G_B7_0, /*hidden argument*/NULL);
		// wheels[i].sidewaysFriction = curve;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_23 = __this->get_wheels_9();
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		WheelFrictionCurve_t96AB1E3B37FC1E7369962A2E712ECD9A2AFE723D  L_27 = V_0;
		NullCheck(L_26);
		WheelCollider_set_sidewaysFriction_mEE0EFD1DFE53A0FA023F8D1E05840A58D69784C2(L_26, L_27, /*hidden argument*/NULL);
		// for (int i = 0; i < wheels.Length; i++){
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00e5:
	{
		// for (int i = 0; i < wheels.Length; i++){
		int32_t L_29 = V_1;
		WheelColliderU5BU5D_tD116627586657E2002728C2CACF8C5986C4A9CC6* L_30 = __this->get_wheels_9();
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void wheelsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void wheelsManager__ctor_m2664D0F01D7C864EAD9CE8252DCEBBF36F163CB1 (wheelsManager_tCE2565DC61CD2923621B860B271D7B856AF08019 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
