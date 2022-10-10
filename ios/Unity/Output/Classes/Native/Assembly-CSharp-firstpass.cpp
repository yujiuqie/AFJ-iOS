#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36;
// System.Collections.Generic.Dictionary`2<System.Object,System.Single>
struct Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t880CD44A8D6D8FE691C7045C3C7FFD42DD729B1A;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t955260D0F7C23EDE6F0DAC0015B1948A9243F1E4;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Single>
struct KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771;
// System.Collections.Generic.List`1<LeoLuz.PlugAndPlayJoystick.ButtonBase>
struct List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Single>
struct ValueCollection_tA250E7D856E5178DDAACCBBCBBA2BC8EBC5A2EE1;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Boolean>[]
struct EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Single>[]
struct EntryU5BU5D_t7ED48D7F5F895684C377F90C33DDD1E0CCACDE61;
// UnityEngine.AccelerationEvent[]
struct AccelerationEventU5BU5D_tA3336006C30BD95DD0C78C388396643B35DDACA5;
// LeoLuz.PlugAndPlayJoystick.ButtonBase[]
struct ButtonBaseU5BU5D_t8980337BADF62453B706509BE0FF4B64A70C1F22;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// LeoLuz.PlugAndPlayJoystick.AnalogicKnob
struct AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// LeoLuz.PlugAndPlayJoystick.ButtonBase
struct ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Compass
struct Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// LeoLuz.PlugAndPlayJoystick.DisableOnOrientation
struct DisableOnOrientation_t9D7C6A429F9CCD34C3D93C7B1F076EFA44816865;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Input
struct Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F;
// LeoLuz.PropertyAttributes.InputAxesListDropdownAttribute
struct InputAxesListDropdownAttribute_t38BBE68113E6CD4014583E03BFEDBD24C1DFAF34;
// LeoLuz.PropertyAttributes.LargeHeader
struct LargeHeader_tB56E924FC13B98ECAF758F1B7E25D439C3A3CA66;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Projectile
struct Projectile_t4C423C1C48F919F35F192C5B3C434299ECF9E375;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// LeoLuz.PropertyAttributes.ReadOnlyAttribute
struct ReadOnlyAttribute_tD56A36591272FEF50390AA22859E1CB5C56C85CE;
// LeoLuz.PropertyAttributes.ReadOnlyInPlayModeAttribute
struct ReadOnlyInPlayModeAttribute_tAE9FF7A35D0E1B48E53D3039FD2E6BDCEAF35D14;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// LeoLuz.PlugAndPlayJoystick.SimpleController
struct SimpleController_t524F496E56545709672DD25495FBECB6DA3568BB;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// LeoLuz.PlugAndPlayJoystick.Swipe
struct Swipe_t489C7015150E8200842E94E49EA06894816EC555;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// LeoLuz.PlugAndPlayJoystick.TouchAbstraction
struct TouchAbstraction_t3124B5CF457EDC2FADFF709A9D33303A6FEF7877;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// LeoLuz.PlugAndPlayJoystick.UIButtonToAxis
struct UIButtonToAxis_tC694EA41B62AD65581481F2B7FCCD8DA97CBB68E;
// LeoLuz.PlugAndPlayJoystick.UIButtonToButton
struct UIButtonToButton_tFDD265126FDA37B7E8604AF6EF64DB25EEB385C3;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// LeoLuz.PropertyAttributes.hideIf
struct hideIf_t9F94EF784B2477A6E771EF6F7BD73A28F1749CC8;
// LeoLuz.PlugAndPlayJoystick.AnalogicKnob/method
struct method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1
struct U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C;
// LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6
struct U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6;
// LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3
struct U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E;
// LeoLuz.Extensions.UIExtensions/<PulseCo>d__10
struct U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C;
// LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12
struct U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA;

IL2CPP_EXTERN_C RuntimeClass* ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t880CD44A8D6D8FE691C7045C3C7FFD42DD729B1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t955260D0F7C23EDE6F0DAC0015B1948A9243F1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA4D26EC845E98F498699C5E107A5CF6616113C;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral6B58BAA65EAF61F23B1388F2F7C094E3227BD6EE;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9F060E10BF2EECADD8A840E0BB62862B69D7344E;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralBB634D691FA5DDFEE27F788AB8191576DF49C1E5;
IL2CPP_EXTERN_C String_t* _stringLiteralD87B0605F0E5B5736E4AD6F433BF356D78940B37;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC372CBEA978D0318A192D118035EDE675B9066;
IL2CPP_EXTERN_C String_t* _stringLiteralFD4B826C3F4FDA02D7CF7952E56196CD40D95C4B;
IL2CPP_EXTERN_C const RuntimeMethod* AnalogicKnob_CheckBoxArea_mBA4EBD7C32A5E34AD571061F81DFBE30FE9AF650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnalogicKnob_CheckCircleArea_mF6100FEA82A1D426AA19B716885D271FF5BC12EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mB6A62A3C8C92CA0B5B7885EBB439A608FBEDDE50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_m6AEE5D8DCF2DDD109A7C451750C4468879EEC2DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAB4B4B1777E3EBF3D80585C59588BF84E2CCD3DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9989E615BA2B23CFCE438061CAD65811D322F822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInCoU3Ed__1_System_Collections_IEnumerator_Reset_m6BC58C51F53BD672CB7D30BB2F23ABA32B4D67A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInCoU3Ed__6_System_Collections_IEnumerator_Reset_mA98A6CD1D2ADBCF38E4F2AE7C803112182F9E01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeOutCoU3Ed__3_System_Collections_IEnumerator_Reset_m9A3F585917D12C5F1A2D79F081E476E1770CFFE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPulseCoU3Ed__10_System_Collections_IEnumerator_Reset_mD107FE57A35880885F9FD25BCDFBAEF0A8657950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSlideInCoU3Ed__12_System_Collections_IEnumerator_Reset_mA40A0D9DFE3B68034A6732FF6FBA99F96AE1689E_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AccelerationEventU5BU5D_tA3336006C30BD95DD0C78C388396643B35DDACA5;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6DE30D037976CA42E046CF78CF4BEF758A9E886B* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t82843611D3240C37DEA1AF693D1E4E17145BBE08* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF795F1145A5EF265FBEF608F4974785AADE37CCD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7ED48D7F5F895684C377F90C33DDD1E0CCACDE61* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC78C079422A1A521923655A578A8FA3FEC378771* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA250E7D856E5178DDAACCBBCBBA2BC8EBC5A2EE1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<LeoLuz.PlugAndPlayJoystick.ButtonBase>
struct List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ButtonBaseU5BU5D_t8980337BADF62453B706509BE0FF4B64A70C1F22* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ButtonBaseU5BU5D_t8980337BADF62453B706509BE0FF4B64A70C1F22* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// LeoLuz.Extensions.CanvasExtension
struct CanvasExtension_t5C3614159F24A418E669777F503BDE3A461C2408  : public RuntimeObject
{
};

// UnityEngine.Compass
struct Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// UnityEngine.Gyroscope
struct Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E  : public RuntimeObject
{
	// System.Int32 UnityEngine.Gyroscope::m_GyroIndex
	int32_t ___m_GyroIndex_0;
};

// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// LeoLuz.PlugAndPlayJoystick.TouchAbstraction
struct TouchAbstraction_t3124B5CF457EDC2FADFF709A9D33303A6FEF7877  : public RuntimeObject
{
};

// LeoLuz.Extensions.UIExtensions
struct UIExtensions_tFB99D854571F52B3F89F51D7277EC2E1DB8FA95B  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6
struct U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6  : public RuntimeObject
{
	// System.Int32 LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.CanvasGroup LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6::obj
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___obj_2;
	// System.Single LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6::duration
	float ___duration_3;
	// System.Single LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6::<t>5__2
	float ___U3CtU3E5__2_4;
};

// UnityEngine.AccelerationEvent
struct AccelerationEvent_tA2256FB99C2ACE6C0D05BDED1D3EF05DB5181E68 
{
	// System.Single UnityEngine.AccelerationEvent::x
	float ___x_0;
	// System.Single UnityEngine.AccelerationEvent::y
	float ___y_1;
	// System.Single UnityEngine.AccelerationEvent::z
	float ___z_2;
	// System.Single UnityEngine.AccelerationEvent::m_TimeDelta
	float ___m_TimeDelta_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// LeoLuz.PropertyAttributes.InputAxesListDropdownAttribute
struct InputAxesListDropdownAttribute_t38BBE68113E6CD4014583E03BFEDBD24C1DFAF34  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Boolean LeoLuz.PropertyAttributes.InputAxesListDropdownAttribute::hideLabel
	bool ___hideLabel_0;
};

// LeoLuz.PropertyAttributes.LargeHeader
struct LargeHeader_tB56E924FC13B98ECAF758F1B7E25D439C3A3CA66  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String LeoLuz.PropertyAttributes.LargeHeader::name
	String_t* ___name_0;
	// System.String LeoLuz.PropertyAttributes.LargeHeader::color
	String_t* ___color_1;
	// System.Int32 LeoLuz.PropertyAttributes.LargeHeader::Size
	int32_t ___Size_2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// LeoLuz.PropertyAttributes.ReadOnlyAttribute
struct ReadOnlyAttribute_tD56A36591272FEF50390AA22859E1CB5C56C85CE  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// LeoLuz.PropertyAttributes.ReadOnlyInPlayModeAttribute
struct ReadOnlyInPlayModeAttribute_tAE9FF7A35D0E1B48E53D3039FD2E6BDCEAF35D14  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// LeoLuz.PropertyAttributes.hideIf
struct hideIf_t9F94EF784B2477A6E771EF6F7BD73A28F1749CC8  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String LeoLuz.PropertyAttributes.hideIf::varName
	String_t* ___varName_0;
	// System.Object LeoLuz.PropertyAttributes.hideIf::value
	RuntimeObject* ___value_1;
	// System.Boolean LeoLuz.PropertyAttributes.hideIf::skipLine
	bool ___skipLine_2;
	// System.Boolean LeoLuz.PropertyAttributes.hideIf::readOnly
	bool ___readOnly_3;
	// System.Single LeoLuz.PropertyAttributes.hideIf::labelWidth
	float ___labelWidth_4;
	// System.Single LeoLuz.PropertyAttributes.hideIf::valueWidth
	float ___valueWidth_5;
	// System.Boolean LeoLuz.PropertyAttributes.hideIf::withMold
	bool ___withMold_6;
	// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean> LeoLuz.PropertyAttributes.hideIf::hideList
	RuntimeObject* ___hideList_7;
};

// LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1
struct U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C  : public RuntimeObject
{
	// System.Int32 LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Graphic LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1::obj
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___obj_2;
	// System.Single LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1::duration
	float ___duration_3;
	// System.Single LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1::<t>5__2
	float ___U3CtU3E5__2_4;
	// UnityEngine.Color LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1::<transColor>5__3
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CtransColorU3E5__3_5;
};

// LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3
struct U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E  : public RuntimeObject
{
	// System.Int32 LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::duration
	float ___duration_2;
	// UnityEngine.UI.Graphic LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::obj
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___obj_3;
	// System.Boolean LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::disableOnExit
	bool ___disableOnExit_4;
	// System.Single LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::<t>5__2
	float ___U3CtU3E5__2_5;
	// UnityEngine.Color LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::<transColor>5__3
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CtransColorU3E5__3_6;
};

// LeoLuz.Extensions.UIExtensions/<PulseCo>d__10
struct U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C  : public RuntimeObject
{
	// System.Int32 LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Transform LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::obj
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___obj_2;
	// UnityEngine.Vector3 LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::startSize
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startSize_3;
	// System.Single LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::size
	float ___size_4;
	// System.Single LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::duration
	float ___duration_5;
	// System.Single LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::<t>5__2
	float ___U3CtU3E5__2_6;
};

// LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12
struct U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA  : public RuntimeObject
{
	// System.Int32 LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.RectTransform LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_2;
	// UnityEngine.Vector2 LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::From
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___From_3;
	// UnityEngine.Vector2 LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::to
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to_4;
	// System.Single LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::duration
	float ___duration_5;
	// System.Single LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::<t>5__2
	float ___U3CtU3E5__2_6;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// LeoLuz.PlugAndPlayJoystick.AnalogicKnob/method
struct method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA  : public MulticastDelegate_t
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// LeoLuz.PlugAndPlayJoystick.ButtonBase
struct ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_StaticFields
{
	// System.Collections.Generic.List`1<LeoLuz.PlugAndPlayJoystick.ButtonBase> LeoLuz.PlugAndPlayJoystick.ButtonBase::ButtonsList
	List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B* ___ButtonsList_4;
};

// LeoLuz.PlugAndPlayJoystick.DisableOnOrientation
struct DisableOnOrientation_t9D7C6A429F9CCD34C3D93C7B1F076EFA44816865  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LeoLuz.PlugAndPlayJoystick.DisableOnOrientation/Orientation LeoLuz.PlugAndPlayJoystick.DisableOnOrientation::DisableOn
	int32_t ___DisableOn_4;
	// System.Boolean LeoLuz.PlugAndPlayJoystick.DisableOnOrientation::disabled
	bool ___disabled_5;
};

// Input
struct Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields
{
	// System.Collections.Generic.List`1<System.String> Input::ButtonsDown
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___ButtonsDown_4;
	// System.Collections.Generic.List`1<System.String> Input::ButtonsHold
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___ButtonsHold_5;
	// System.Collections.Generic.List`1<System.String> Input::ButtonsUp
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___ButtonsUp_6;
	// System.Int32 Input::lastFrameUpdated
	int32_t ___lastFrameUpdated_7;
	// System.Collections.Generic.IDictionary`2<System.String,System.Single> Input::MobileAxes
	RuntimeObject* ___MobileAxes_8;
};

// Projectile
struct Projectile_t4C423C1C48F919F35F192C5B3C434299ECF9E375  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoLuz.PlugAndPlayJoystick.SimpleController
struct SimpleController_t524F496E56545709672DD25495FBECB6DA3568BB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String LeoLuz.PlugAndPlayJoystick.SimpleController::HorizontalAxis
	String_t* ___HorizontalAxis_4;
	// System.String LeoLuz.PlugAndPlayJoystick.SimpleController::JumpAxis
	String_t* ___JumpAxis_5;
	// System.String LeoLuz.PlugAndPlayJoystick.SimpleController::FireAxis
	String_t* ___FireAxis_6;
	// UnityEngine.GameObject LeoLuz.PlugAndPlayJoystick.SimpleController::Projectile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Projectile_7;
	// UnityEngine.Rigidbody2D LeoLuz.PlugAndPlayJoystick.SimpleController::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_8;
	// System.Single LeoLuz.PlugAndPlayJoystick.SimpleController::velocity
	float ___velocity_9;
	// System.Single LeoLuz.PlugAndPlayJoystick.SimpleController::ProjectileVelocity
	float ___ProjectileVelocity_10;
	// System.Boolean LeoLuz.PlugAndPlayJoystick.SimpleController::grounded
	bool ___grounded_11;
};

// LeoLuz.PlugAndPlayJoystick.Swipe
struct Swipe_t489C7015150E8200842E94E49EA06894816EC555  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String LeoLuz.PlugAndPlayJoystick.Swipe::SwipeAxisHorizontal
	String_t* ___SwipeAxisHorizontal_4;
	// System.String LeoLuz.PlugAndPlayJoystick.Swipe::SwipeAxisVertical
	String_t* ___SwipeAxisVertical_5;
	// System.Boolean LeoLuz.PlugAndPlayJoystick.Swipe::pressed
	bool ___pressed_6;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.Swipe::StartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___StartPosition_7;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.Swipe::AxisResult
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___AxisResult_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LeoLuz.PlugAndPlayJoystick.AnalogicKnob
struct AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF  : public ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9
{
	// System.String LeoLuz.PlugAndPlayJoystick.AnalogicKnob::HorizontalAxis
	String_t* ___HorizontalAxis_5;
	// System.String LeoLuz.PlugAndPlayJoystick.AnalogicKnob::VerticalAxis
	String_t* ___VerticalAxis_6;
	// LeoLuz.PlugAndPlayJoystick.AnalogicKnob/ClampMode LeoLuz.PlugAndPlayJoystick.AnalogicKnob::clampMode
	int32_t ___clampMode_7;
	// System.Single LeoLuz.PlugAndPlayJoystick.AnalogicKnob::TurnLimit
	float ___TurnLimit_8;
	// System.Single LeoLuz.PlugAndPlayJoystick.AnalogicKnob::_MaxDistance
	float ____MaxDistance_9;
	// System.Single LeoLuz.PlugAndPlayJoystick.AnalogicKnob::ReturnSpeed
	float ___ReturnSpeed_10;
	// System.Boolean LeoLuz.PlugAndPlayJoystick.AnalogicKnob::autoHide
	bool ___autoHide_11;
	// System.Single LeoLuz.PlugAndPlayJoystick.AnalogicKnob::fadeInDuration
	float ___fadeInDuration_12;
	// System.Single LeoLuz.PlugAndPlayJoystick.AnalogicKnob::fadeOutDuration
	float ___fadeOutDuration_13;
	// System.Single LeoLuz.PlugAndPlayJoystick.AnalogicKnob::StartFadeOutDuration
	float ___StartFadeOutDuration_14;
	// UnityEngine.UI.Image LeoLuz.PlugAndPlayJoystick.AnalogicKnob::KnobBackground
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___KnobBackground_15;
	// System.Boolean LeoLuz.PlugAndPlayJoystick.AnalogicKnob::knobBackgroundFollowKnob
	bool ___knobBackgroundFollowKnob_16;
	// UnityEngine.Bounds LeoLuz.PlugAndPlayJoystick.AnalogicKnob::AnchoredAreaBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___AnchoredAreaBounds_17;
	// UnityEngine.Bounds LeoLuz.PlugAndPlayJoystick.AnalogicKnob::NormalizedAnchoredAreaBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___NormalizedAnchoredAreaBounds_18;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::MinScreenAreaBounds
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___MinScreenAreaBounds_19;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::MaxScreenAreaBounds
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___MaxScreenAreaBounds_20;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::ScreenCenterAreaBounds
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ScreenCenterAreaBounds_21;
	// System.Single LeoLuz.PlugAndPlayJoystick.AnalogicKnob::ScreenRadiusAreaBounds
	float ___ScreenRadiusAreaBounds_22;
	// UnityEngine.RectTransform LeoLuz.PlugAndPlayJoystick.AnalogicKnob::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_23;
	// UnityEngine.UI.Image LeoLuz.PlugAndPlayJoystick.AnalogicKnob::imageUI
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___imageUI_24;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::StartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___StartPosition_25;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::CurrentKnobPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___CurrentKnobPosition_26;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::RawAxis
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___RawAxis_27;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::NormalizedAxis
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___NormalizedAxis_28;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::ScreenPixels
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ScreenPixels_29;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::CanvasSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___CanvasSize_30;
	// UnityEngine.Vector3 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::canvasInitialPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___canvasInitialPoint_31;
	// System.Single LeoLuz.PlugAndPlayJoystick.AnalogicKnob::CanvasScale
	float ___CanvasScale_32;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::ScreenToAnchorPositionConversionConstant
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ScreenToAnchorPositionConversionConstant_33;
	// System.Single LeoLuz.PlugAndPlayJoystick.AnalogicKnob::ScreenUnitsToWorldUnitsConversionConstant
	float ___ScreenUnitsToWorldUnitsConversionConstant_34;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::AnalogicStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___AnalogicStartPosition_35;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::AnalogicStartAnchoredPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___AnalogicStartAnchoredPosition_36;
	// UnityEngine.Touch LeoLuz.PlugAndPlayJoystick.AnalogicKnob::AnalogTouch
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___AnalogTouch_37;
	// System.Int32 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::InsideAreaFingerId
	int32_t ___InsideAreaFingerId_38;
	// System.Boolean LeoLuz.PlugAndPlayJoystick.AnalogicKnob::Released
	bool ___Released_39;
	// UnityEngine.Vector2 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::lastFrameNormalizedAxis
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastFrameNormalizedAxis_40;
	// LeoLuz.PlugAndPlayJoystick.AnalogicKnob/method LeoLuz.PlugAndPlayJoystick.AnalogicKnob::IsInsideArea
	method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* ___IsInsideArea_41;
	// UnityEngine.DeviceOrientation LeoLuz.PlugAndPlayJoystick.AnalogicKnob::_devOrientation
	int32_t ____devOrientation_42;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// LeoLuz.PlugAndPlayJoystick.UIButtonToAxis
struct UIButtonToAxis_tC694EA41B62AD65581481F2B7FCCD8DA97CBB68E  : public ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9
{
	// System.String LeoLuz.PlugAndPlayJoystick.UIButtonToAxis::AxisName
	String_t* ___AxisName_5;
	// System.Single LeoLuz.PlugAndPlayJoystick.UIButtonToAxis::Value
	float ___Value_6;
	// System.Single LeoLuz.PlugAndPlayJoystick.UIButtonToAxis::CurrentValue
	float ___CurrentValue_7;
	// System.Boolean LeoLuz.PlugAndPlayJoystick.UIButtonToAxis::pressed
	bool ___pressed_8;
};

// LeoLuz.PlugAndPlayJoystick.UIButtonToButton
struct UIButtonToButton_tFDD265126FDA37B7E8604AF6EF64DB25EEB385C3  : public ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9
{
	// System.String LeoLuz.PlugAndPlayJoystick.UIButtonToButton::ButtonName
	String_t* ___ButtonName_5;
	// System.Boolean LeoLuz.PlugAndPlayJoystick.UIButtonToButton::pressed
	bool ___pressed_6;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AccelerationEvent[]
struct AccelerationEventU5BU5D_tA3336006C30BD95DD0C78C388396643B35DDACA5  : public RuntimeArray
{
	ALIGN_FIELD (8) AccelerationEvent_tA2256FB99C2ACE6C0D05BDED1D3EF05DB5181E68 m_Items[1];

	inline AccelerationEvent_tA2256FB99C2ACE6C0D05BDED1D3EF05DB5181E68 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AccelerationEvent_tA2256FB99C2ACE6C0D05BDED1D3EF05DB5181E68* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AccelerationEvent_tA2256FB99C2ACE6C0D05BDED1D3EF05DB5181E68 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline AccelerationEvent_tA2256FB99C2ACE6C0D05BDED1D3EF05DB5181E68 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AccelerationEvent_tA2256FB99C2ACE6C0D05BDED1D3EF05DB5181E68* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AccelerationEvent_tA2256FB99C2ACE6C0D05BDED1D3EF05DB5181E68 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7090A0C6890D4FE1C83844A6616D8E9A5AEC802C_gshared (Dictionary_2_t1E85CF9786F2C7C796C8CC2EB86ADA13A263ECAB* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454_gshared (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_simulateMouseWithTouches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_simulateMouseWithTouches_m8EE415BCCD5C7D894BA748A1DEE3FE6FB10D762E (const RuntimeMethod* method) ;
// System.Void UnityEngine.Input::set_simulateMouseWithTouches(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_set_simulateMouseWithTouches_mF16D68F2DA2BC83A7FEFA116E2C9BC10F3AD38DD (bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_anyKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKey_mE8311C8E6A984D9BAD0C168A8A4E16D1DCF95956 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_anyKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKeyDown_mEF32EB1ABEE0F334F99B96E3C502266A9D174520 (const RuntimeMethod* method) ;
// System.String UnityEngine.Input::get_inputString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Input_get_inputString_m7383383B0F5879FF1B5E4AEB9FB6FE3361E31BF0 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_acceleration_mF33877F82B497F1B4B7D32BD9CD8388D0B3696FD (const RuntimeMethod* method) ;
// UnityEngine.AccelerationEvent[] UnityEngine.Input::get_accelerationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccelerationEventU5BU5D_tA3336006C30BD95DD0C78C388396643B35DDACA5* Input_get_accelerationEvents_mA2EF369931AA35878A9BD591FF026F7EFA3CAAF1 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_accelerationEventCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_accelerationEventCount_mE68CE45C554636F0732F413F82D32F9E7011C82B (const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_mousePresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_mousePresent_m7636BF18F4329EA82F264DA4D87B9B25A8A4923C (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_eatKeyPressOnTextFieldFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_eatKeyPressOnTextFieldFocus_mD68FC1B3071DEEBF0D920F8F9A018E5316DB5C4B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Input::set_eatKeyPressOnTextFieldFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_set_eatKeyPressOnTextFieldFocus_m78A781CBEC6C5B2FC004BA6772B9816F3499467A (bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_stylusTouchSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_stylusTouchSupported_m07C7C24EAFFEE17567D56E0781A85EC1266F2327 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_touchSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_touchSupported_m941C82FC6E66A263CDAD12283DF87CDF15A06FD4 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_multiTouchEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_multiTouchEnabled_m6A1E887864F3B994737FD4DB8753058F1B8CAE6A (const RuntimeMethod* method) ;
// System.Void UnityEngine.Input::set_multiTouchEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_set_multiTouchEnabled_m4B654B59BBFF0CA1C8A2E2325EFB8063F77FA616 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Compass UnityEngine.Input::get_compass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* Input_get_compass_m4CBF5D097BC0F70475D9CC08F2EEA5C2BFCF5F34 (const RuntimeMethod* method) ;
// UnityEngine.DeviceOrientation UnityEngine.Input::get_deviceOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_deviceOrientation_m855C2F467D8AC32548379ADB232E4C36E25CFB7A (const RuntimeMethod* method) ;
// UnityEngine.IMECompositionMode UnityEngine.Input::get_imeCompositionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_imeCompositionMode_m598BE283381B9F893770A29D6A03DE2D2A7CA07E (const RuntimeMethod* method) ;
// System.String UnityEngine.Input::get_compositionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Input_get_compositionString_mA071FFBF890F501012D2906ADCE49398922AA470 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_imeIsSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_imeIsSelected_m1C8B70A581CBD03681122C1757678F07C3FF06ED (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_touchPressureSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_touchPressureSupported_mBD435B293330720E35F2074E1BE6B93F6DC861B2 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_mouseScrollDelta_m41C6379183734C5061C6E8C9B6DEFFC9C084A0CE (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Input::get_compositionCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_compositionCursorPos_m786FFD0E3EDC73ED5ED7F8B53D96A45F3B0C83D0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_backButtonLeavesApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_backButtonLeavesApp_m38EF3C8FB21C4944FC1F6AB738389A5EB1E0F1F1 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_isGyroAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_isGyroAvailable_m94DFBFAF50E5584CDFDB3074027C641741881337 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_compensateSensors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_compensateSensors_mF4A3E2A2152D962CB4B3E91EF1B4A83F76902FB7 (const RuntimeMethod* method) ;
// UnityEngine.AccelerationEvent UnityEngine.Input::GetAccelerationEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccelerationEvent_tA2256FB99C2ACE6C0D05BDED1D3EF05DB5181E68 Input_GetAccelerationEvent_m68CFBA2B43AFA282B6AA8BD4C69E6A66C59B3A03 (int32_t ___index0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single Input::GetAxisMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisMobile_m3A64859496E552A912D2CBF6F960B226CB1F59E7 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_mD0363B5F1771A7C7A97ABB0D07863217D229A9C0 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean Input::GetButtonMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonMobile_m08CE4DB66A9AC0E39E033DAA68D4921F5D2BC98C (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean Input::GetButtonDownMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDownMobile_mA2F1BCC7574A047829B540E6CD34DF25495DA88C (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m65D9F89AC7456225E812704283D5EF84C852F724 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Boolean Input::GetButtonUpMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUpMobile_m70E8711461FC9F0D05CFBF833BF66C0BAFDB7967 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String[] UnityEngine.Input::GetJoystickNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Input_GetJoystickNames_m398DA6DE3281D480F35E06AA92F746D4C82C9DC5 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m23DE692DECD24741D5F73B8700890AC2557EE400 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081 (int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Input::ResetInputAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_ResetInputAxes_m4EBCC069814BBECE517C6A9F45AFFB35E310AEEE (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Input::RegisterAxisMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_RegisterAxisMobile_m844E606E77E2607FE43128B3BAD79B547948E288 (String_t* ___Name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Single>::.ctor()
inline void Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*, const RuntimeMethod*))Dictionary_2__ctor_m7090A0C6890D4FE1C83844A6616D8E9A5AEC802C_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m9A8AC56501192A732A9450DF39F8AF5CF105A578 (String_t* ___axis0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Boolean Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m8729DE80FB89DF9753C352DB6A4904FA20A6F744 (String_t* ___Button0, const RuntimeMethod* method) ;
// System.Boolean Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m4AC6178E87A4626EFAB0108DC051AD0E5F9E9866 (String_t* ___Button0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Physics2D::IgnoreCollision(UnityEngine.Collider2D,UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2D_IgnoreCollision_mE74D656AD07A765E28037033BF11785716C906F2 (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider10, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collider21, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void LeoLuz.PlugAndPlayJoystick.ButtonBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonBase_Start_mCB4D3B282C3A0B7B3AE26232D6E39AC3E55317A1 (ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void LeoLuz.PlugAndPlayJoystick.AnalogicKnob/method::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void method__ctor_mA6485DACFA883E25D40A0CC225A35967CE0A8725 (method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void LeoLuz.PlugAndPlayJoystick.AnalogicKnob::RecalculateLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalogicKnob_RecalculateLayout_m64EC32733D68E5E7B1A43AD3B826B97F7362AD95 (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, const RuntimeMethod* method) ;
// System.Int32 LeoLuz.PlugAndPlayJoystick.TouchAbstraction::get_TouchCont()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TouchAbstraction_get_TouchCont_mA24BB271DBF7F1A34EB0E577367431455506A26B (const RuntimeMethod* method) ;
// System.Int32 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::GetAnalogFingerIDInsideArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnalogicKnob_GetAnalogFingerIDInsideArea_mC26D8F8F06299E40C5B4C86E8EED2716C98F906D (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, const RuntimeMethod* method) ;
// UnityEngine.Touch LeoLuz.PlugAndPlayJoystick.TouchAbstraction::GetTouchByFingerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 TouchAbstraction_GetTouchByFingerID_m240E332A9FFDA206D294D1C4AFDBC551E3180B6B (int32_t ___fingerID0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void LeoLuz.PlugAndPlayJoystick.AnalogicKnob::TouchBegan(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalogicKnob_TouchBegan_m52901EA8C659D4B7675C8E28E90A1032E6B91DDC (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___TouchPosition0, const RuntimeMethod* method) ;
// System.Void LeoLuz.PlugAndPlayJoystick.AnalogicKnob::TouchMove(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalogicKnob_TouchMove_m298329C72BE4B800B437F6FAEB8646557451E2F3 (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void LeoLuz.PlugAndPlayJoystick.AnalogicKnob::TouchEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalogicKnob_TouchEnd_m96A1F8ADE02CC89BDA460DCF975FB4185F440905 (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Input::SetAxisMobile(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089 (String_t* ___Name0, float ___value1, const RuntimeMethod* method) ;
// System.Void Input::PressButtonDownMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_PressButtonDownMobile_m55DCF551B9EED85971C5D73CE7E679455CDBC9DC (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Touch Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m0A47B1BBD339DD76BEAA8895BEE5B897BDDE16F3 (int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean LeoLuz.PlugAndPlayJoystick.AnalogicKnob/method::Invoke(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool method_Invoke_m94088ED4EA4B7EA68320F0647396C20552E8C377_inline (method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// System.Int32 Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mC049740996B527F25BC9477CF8927481FA006F9E (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void LeoLuz.PlugAndPlayJoystick.ButtonBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonBase__ctor_mDBF9FAC96B874B6DBBB8E95B46F79E03A1D06458 (ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Touch::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_set_position_mF024C46352D1CB82991022138D48BC84D9248E6B (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Touch::set_phase(UnityEngine.TouchPhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Touch_set_phase_m47EEB383DD6F9EC6C4840B1F145D6818FCEBBD93 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void LeoLuz.PlugAndPlayJoystick.ButtonBase::initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonBase_initialize_mE32B1C24F66066339EBBFCDC2CB19684439251EA (ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LeoLuz.PlugAndPlayJoystick.ButtonBase>::.ctor()
inline void List_1__ctor_m9989E615BA2B23CFCE438061CAD65811D322F822 (List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LeoLuz.PlugAndPlayJoystick.ButtonBase>::Add(T)
inline void List_1_Add_mAB4B4B1777E3EBF3D80585C59588BF84E2CCD3DD_inline (List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B* __this, ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B*, ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean LeoLuz.PlugAndPlayJoystick.DisableOnOrientation::IsPortrait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisableOnOrientation_IsPortrait_m88051E731F89F5A657FF0F0941FAF3D4302071A0 (DisableOnOrientation_t9D7C6A429F9CCD34C3D93C7B1F076EFA44816865* __this, const RuntimeMethod* method) ;
// System.Void LeoLuz.PlugAndPlayJoystick.DisableOnOrientation::disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableOnOrientation_disable_mB128BA1515B6C8F53E5D03F819192E1B24CA8184 (DisableOnOrientation_t9D7C6A429F9CCD34C3D93C7B1F076EFA44816865* __this, const RuntimeMethod* method) ;
// System.Void LeoLuz.PlugAndPlayJoystick.DisableOnOrientation::enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableOnOrientation_enable_mEE360938D11E888E40602632B558CF2649B90214 (DisableOnOrientation_t9D7C6A429F9CCD34C3D93C7B1F076EFA44816865* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<LeoLuz.PlugAndPlayJoystick.ButtonBase>()
inline ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* Component_GetComponent_TisButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_m6AEE5D8DCF2DDD109A7C451750C4468879EEC2DE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Input::PressButtonMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_PressButtonMobile_m7B66CEF45F4A55FE447F88C4160F98A54890794E (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void Input::PressButtonUpMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_PressButtonUpMobile_mD456E7AC1FE5FD38CDFAB0FE158D0419EAB3F8D1 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454 (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*, const RuntimeMethod*))Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LeoLuz.Extensions.UIExtensions::FadeInCo(UnityEngine.UI.Graphic,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIExtensions_FadeInCo_mB17FA4C16B7242F845C11FF2F58BDB75A6B26BBE (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___obj0, float ___duration1, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCoU3Ed__1__ctor_mAF5715ED2C4AA26CCA23A57CA430F7592588CA86 (U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LeoLuz.Extensions.UIExtensions::FadeOutCo(UnityEngine.UI.Graphic,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIExtensions_FadeOutCo_m7DED35ACA93A9DE67AE793AE4D036380C4C1D184 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___obj0, float ___duration1, bool ___disableOnExit2, const RuntimeMethod* method) ;
// System.Void LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCoU3Ed__3__ctor_m1F6FC584E4582BB9BDC3C824A2C53E05FCE12392 (U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MonoBehaviour>()
inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator LeoLuz.Extensions.UIExtensions::FadeInCo(UnityEngine.CanvasGroup,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIExtensions_FadeInCo_mF1197DFC1B04AFAF90420A05420C812EF9B65645 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___obj0, float ___duration1, const RuntimeMethod* method) ;
// System.Void LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCoU3Ed__6__ctor_m2AF50298F4F258DE6D04D7335C170D2BDEC7E731 (U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Collections.IEnumerator LeoLuz.Extensions.UIExtensions::PulseCo(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIExtensions_PulseCo_m9A1C35B1F4BCA2A11CB7A1A60B9056F10D12632E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___obj0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startSize1, float ___size2, float ___duration3, const RuntimeMethod* method) ;
// System.Void LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPulseCoU3Ed__10__ctor_mB4CA1C5615C268F12575EDB793F20B0B34ADE7B4 (U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.MonoBehaviour>()
inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* Component_GetComponentInChildren_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mB6A62A3C8C92CA0B5B7885EBB439A608FBEDDE50 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Collections.IEnumerator LeoLuz.Extensions.UIExtensions::SlideInCo(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIExtensions_SlideInCo_m863A2F81A6712345D04670E4E712C69C8ADD3832 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___From1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to2, float ___duration3, const RuntimeMethod* method) ;
// System.Void LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlideInCoU3Ed__12__ctor_mA1E9230905C128F2A2B2AE7EBA74CA5F6EAF5AF7 (U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedUnscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedUnscaledDeltaTime_mBEC5983C094BCCDFD82598A21C98C4EA8021FDE8 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void Projectile::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnCollisionEnter2D_mBA0555E3F2D5A40B8496BE395AFDE440F27B1245 (Projectile_t4C423C1C48F919F35F192C5B3C434299ECF9E375* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Void Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m9ECC07758229D77B2A47C5393D803EE2DDFDCFA1 (Projectile_t4C423C1C48F919F35F192C5B3C434299ECF9E375* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean Input::get_simulateMouseWithTouches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_simulateMouseWithTouches_m0624021E7C24FDB4DCE0991687567A8077A5A46A (const RuntimeMethod* method) 
{
	{
		// public static bool simulateMouseWithTouches { get { return UnityEngine.Input.simulateMouseWithTouches; } set { UnityEngine.Input.simulateMouseWithTouches = value; } }
		bool L_0;
		L_0 = Input_get_simulateMouseWithTouches_m8EE415BCCD5C7D894BA748A1DEE3FE6FB10D762E(NULL);
		return L_0;
	}
}
// System.Void Input::set_simulateMouseWithTouches(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_set_simulateMouseWithTouches_mEFA8585445241A35E79E6A7EDDFCC0182856C598 (bool ___value0, const RuntimeMethod* method) 
{
	{
		// public static bool simulateMouseWithTouches { get { return UnityEngine.Input.simulateMouseWithTouches; } set { UnityEngine.Input.simulateMouseWithTouches = value; } }
		bool L_0 = ___value0;
		Input_set_simulateMouseWithTouches_mF16D68F2DA2BC83A7FEFA116E2C9BC10F3AD38DD(L_0, NULL);
		// public static bool simulateMouseWithTouches { get { return UnityEngine.Input.simulateMouseWithTouches; } set { UnityEngine.Input.simulateMouseWithTouches = value; } }
		return;
	}
}
// System.Boolean Input::get_anyKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKey_m5D6694109F387052ABF3BF4C43203D9499E15299 (const RuntimeMethod* method) 
{
	{
		// public static bool anyKey { get { return UnityEngine.Input.anyKey; } }
		bool L_0;
		L_0 = Input_get_anyKey_mE8311C8E6A984D9BAD0C168A8A4E16D1DCF95956(NULL);
		return L_0;
	}
}
// System.Boolean Input::get_anyKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKeyDown_m5AB8DFF6757777CDC668C858E16B3F83C5DF8240 (const RuntimeMethod* method) 
{
	{
		// public static bool anyKeyDown { get { return UnityEngine.Input.anyKeyDown; } }
		bool L_0;
		L_0 = Input_get_anyKeyDown_mEF32EB1ABEE0F334F99B96E3C502266A9D174520(NULL);
		return L_0;
	}
}
// System.String Input::get_inputString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Input_get_inputString_mBBEF9EACCE4F6C626A831CD40FF352BE439EB3D4 (const RuntimeMethod* method) 
{
	{
		// public static string inputString { get { return UnityEngine.Input.inputString; } }
		String_t* L_0;
		L_0 = Input_get_inputString_m7383383B0F5879FF1B5E4AEB9FB6FE3361E31BF0(NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_acceleration_m2D80CAE30FF734F8DF13B343CEB7AA0C88D65557 (const RuntimeMethod* method) 
{
	{
		// public static Vector3 acceleration { get { return UnityEngine.Input.acceleration; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_acceleration_mF33877F82B497F1B4B7D32BD9CD8388D0B3696FD(NULL);
		return L_0;
	}
}
// UnityEngine.AccelerationEvent[] Input::get_accelerationEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccelerationEventU5BU5D_tA3336006C30BD95DD0C78C388396643B35DDACA5* Input_get_accelerationEvents_mB4C6778468027248CD186398E8B12F66436A342D (const RuntimeMethod* method) 
{
	{
		// public static AccelerationEvent[] accelerationEvents { get { return UnityEngine.Input.accelerationEvents; } }
		AccelerationEventU5BU5D_tA3336006C30BD95DD0C78C388396643B35DDACA5* L_0;
		L_0 = Input_get_accelerationEvents_mA2EF369931AA35878A9BD591FF026F7EFA3CAAF1(NULL);
		return L_0;
	}
}
// System.Int32 Input::get_accelerationEventCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_accelerationEventCount_mAD425DF55F16DF35DC74A0873FDF601FC1E0924F (const RuntimeMethod* method) 
{
	{
		// public static int accelerationEventCount { get { return UnityEngine.Input.accelerationEventCount; } }
		int32_t L_0;
		L_0 = Input_get_accelerationEventCount_mE68CE45C554636F0732F413F82D32F9E7011C82B(NULL);
		return L_0;
	}
}
// UnityEngine.Touch[] Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_mB4D89193B9BBF238F24E6B30922236A693B8DDEC (const RuntimeMethod* method) 
{
	{
		// public static Touch[] touches { get { return UnityEngine.Input.touches; } }
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_0;
		L_0 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		return L_0;
	}
}
// System.Int32 Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mC049740996B527F25BC9477CF8927481FA006F9E (const RuntimeMethod* method) 
{
	{
		// public static int touchCount { get { return UnityEngine.Input.touchCount; } }
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		return L_0;
	}
}
// System.Boolean Input::get_mousePresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_mousePresent_m5CF9F3273C6AD35A0A85E275F46B91BCDF214E3D (const RuntimeMethod* method) 
{
	{
		// public static bool mousePresent { get { return UnityEngine.Input.mousePresent; } }
		bool L_0;
		L_0 = Input_get_mousePresent_m7636BF18F4329EA82F264DA4D87B9B25A8A4923C(NULL);
		return L_0;
	}
}
// System.Boolean Input::get_eatKeyPressOnTextFieldFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_eatKeyPressOnTextFieldFocus_mB3A460E4E9FC1381EF8A5D484D3DDD905B87D7FC (const RuntimeMethod* method) 
{
	{
		// public static bool eatKeyPressOnTextFieldFocus { get { return UnityEngine.Input.eatKeyPressOnTextFieldFocus; } set { UnityEngine.Input.eatKeyPressOnTextFieldFocus = value; } }
		bool L_0;
		L_0 = Input_get_eatKeyPressOnTextFieldFocus_mD68FC1B3071DEEBF0D920F8F9A018E5316DB5C4B(NULL);
		return L_0;
	}
}
// System.Void Input::set_eatKeyPressOnTextFieldFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_set_eatKeyPressOnTextFieldFocus_m3044E38707588BA3E144C9EBA3C9C0BB95E2143C (bool ___value0, const RuntimeMethod* method) 
{
	{
		// public static bool eatKeyPressOnTextFieldFocus { get { return UnityEngine.Input.eatKeyPressOnTextFieldFocus; } set { UnityEngine.Input.eatKeyPressOnTextFieldFocus = value; } }
		bool L_0 = ___value0;
		Input_set_eatKeyPressOnTextFieldFocus_m78A781CBEC6C5B2FC004BA6772B9816F3499467A(L_0, NULL);
		// public static bool eatKeyPressOnTextFieldFocus { get { return UnityEngine.Input.eatKeyPressOnTextFieldFocus; } set { UnityEngine.Input.eatKeyPressOnTextFieldFocus = value; } }
		return;
	}
}
// System.Boolean Input::get_stylusTouchSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_stylusTouchSupported_mB67A7AB9956ABE046BDC4689415DB6B3E80BB551 (const RuntimeMethod* method) 
{
	{
		// public static bool stylusTouchSupported { get { return UnityEngine.Input.stylusTouchSupported; } }
		bool L_0;
		L_0 = Input_get_stylusTouchSupported_m07C7C24EAFFEE17567D56E0781A85EC1266F2327(NULL);
		return L_0;
	}
}
// System.Boolean Input::get_touchSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_touchSupported_mF7B17245969800F89BC5DF7A7E099270C720985F (const RuntimeMethod* method) 
{
	{
		// public static bool touchSupported { get { return UnityEngine.Input.touchSupported; } }
		bool L_0;
		L_0 = Input_get_touchSupported_m941C82FC6E66A263CDAD12283DF87CDF15A06FD4(NULL);
		return L_0;
	}
}
// System.Boolean Input::get_multiTouchEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_multiTouchEnabled_mA1DE37A3E5CB2E43F5602CBF687646880EC379E5 (const RuntimeMethod* method) 
{
	{
		// public static bool multiTouchEnabled { get { return UnityEngine.Input.multiTouchEnabled; } set { UnityEngine.Input.multiTouchEnabled = value; } }
		bool L_0;
		L_0 = Input_get_multiTouchEnabled_m6A1E887864F3B994737FD4DB8753058F1B8CAE6A(NULL);
		return L_0;
	}
}
// System.Void Input::set_multiTouchEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_set_multiTouchEnabled_m8816506BD9692BEB753B33DFAD3E90480892649E (bool ___value0, const RuntimeMethod* method) 
{
	{
		// public static bool multiTouchEnabled { get { return UnityEngine.Input.multiTouchEnabled; } set { UnityEngine.Input.multiTouchEnabled = value; } }
		bool L_0 = ___value0;
		Input_set_multiTouchEnabled_m4B654B59BBFF0CA1C8A2E2325EFB8063F77FA616(L_0, NULL);
		// public static bool multiTouchEnabled { get { return UnityEngine.Input.multiTouchEnabled; } set { UnityEngine.Input.multiTouchEnabled = value; } }
		return;
	}
}
// UnityEngine.LocationService Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m5A6ADCA0670BBF4E210E62C802772EFB2C6D04A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAC372CBEA978D0318A192D118035EDE675B9066);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("api's Input.location command is disabled so unity does not automatically generate an AndroidManifest.xml. To enable it uncomment the line below, and comment out this log line."); return null;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralDAC372CBEA978D0318A192D118035EDE675B9066, NULL);
		// Debug.Log("api's Input.location command is disabled so unity does not automatically generate an AndroidManifest.xml. To enable it uncomment the line below, and comment out this log line."); return null;
		return (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2*)NULL;
	}
}
// UnityEngine.Compass Input::get_compass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* Input_get_compass_m1B9527C1136384CCECBD3B5F322EC4EFEAC54EDB (const RuntimeMethod* method) 
{
	{
		// public static Compass compass { get { return UnityEngine.Input.compass; } }
		Compass_t161CD14062E71ED7324FE12ED003EE0877EE546F* L_0;
		L_0 = Input_get_compass_m4CBF5D097BC0F70475D9CC08F2EEA5C2BFCF5F34(NULL);
		return L_0;
	}
}
// UnityEngine.DeviceOrientation Input::get_deviceOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_deviceOrientation_m4295532CC4FAFFC2C5BA4C362ED433FD4AD919EF (const RuntimeMethod* method) 
{
	{
		// public static DeviceOrientation deviceOrientation { get { return UnityEngine.Input.deviceOrientation; } }
		int32_t L_0;
		L_0 = Input_get_deviceOrientation_m855C2F467D8AC32548379ADB232E4C36E25CFB7A(NULL);
		return L_0;
	}
}
// UnityEngine.IMECompositionMode Input::get_imeCompositionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_imeCompositionMode_m87A276CD3DD5AF78802D77652FE5361B131BF061 (const RuntimeMethod* method) 
{
	{
		// public static IMECompositionMode imeCompositionMode { get { return UnityEngine.Input.imeCompositionMode; } }
		int32_t L_0;
		L_0 = Input_get_imeCompositionMode_m598BE283381B9F893770A29D6A03DE2D2A7CA07E(NULL);
		return L_0;
	}
}
// System.String Input::get_compositionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Input_get_compositionString_m56862C8511FF447F65BC5E9995D1AFA557E6199E (const RuntimeMethod* method) 
{
	{
		// public static string compositionString { get { return UnityEngine.Input.compositionString; } }
		String_t* L_0;
		L_0 = Input_get_compositionString_mA071FFBF890F501012D2906ADCE49398922AA470(NULL);
		return L_0;
	}
}
// System.Boolean Input::get_imeIsSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_imeIsSelected_mB6D9D07A0C7AB1DC884CE16A3487DA44440B8B41 (const RuntimeMethod* method) 
{
	{
		// public static bool imeIsSelected { get { return UnityEngine.Input.imeIsSelected; } }
		bool L_0;
		L_0 = Input_get_imeIsSelected_m1C8B70A581CBD03681122C1757678F07C3FF06ED(NULL);
		return L_0;
	}
}
// System.Boolean Input::get_touchPressureSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_touchPressureSupported_m0340F096D76CC7DD6837F8C0DE4B7736AADC7E97 (const RuntimeMethod* method) 
{
	{
		// public static bool touchPressureSupported { get { return UnityEngine.Input.touchPressureSupported; } }
		bool L_0;
		L_0 = Input_get_touchPressureSupported_mBD435B293330720E35F2074E1BE6B93F6DC861B2(NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_mouseScrollDelta_mD85A681B6811F3EDEEEF745A0945A771F4A154EB (const RuntimeMethod* method) 
{
	{
		// public static Vector2 mouseScrollDelta { get { return UnityEngine.Input.mouseScrollDelta; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Input_get_mouseScrollDelta_m41C6379183734C5061C6E8C9B6DEFFC9C084A0CE(NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_mousePosition_mE5FA44438E5A0F8943089F8C59B7BD00B85F5C1E (const RuntimeMethod* method) 
{
	{
		// public static Vector2 mousePosition { get { return UnityEngine.Input.mousePosition; } }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Gyroscope Input::get_gyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* Input_get_gyro_mE30A8CC11E5B3BD3359B514FCE2DADADF5CCCA02 (const RuntimeMethod* method) 
{
	{
		// public static Gyroscope gyro { get { return UnityEngine.Input.gyro; } }
		Gyroscope_tA4CEC0F47FFB4CEB90410CC6B860D052BB35BE9E* L_0;
		L_0 = Input_get_gyro_m5A5F30FDF6BBA469C0C71EF7FC6E02E7FC08CCFC(NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 Input::get_compositionCursorPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_compositionCursorPos_mDD647833AF60E82030B0973A14AECE2C0EA50650 (const RuntimeMethod* method) 
{
	{
		// public static Vector2 compositionCursorPos { get { return UnityEngine.Input.compositionCursorPos; } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Input_get_compositionCursorPos_m786FFD0E3EDC73ED5ED7F8B53D96A45F3B0C83D0(NULL);
		return L_0;
	}
}
// System.Boolean Input::get_backButtonLeavesApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_backButtonLeavesApp_m3326EED3C4373E518420B1B29E465B7B428CDC9B (const RuntimeMethod* method) 
{
	{
		// public static bool backButtonLeavesApp { get { return UnityEngine.Input.backButtonLeavesApp; } }
		bool L_0;
		L_0 = Input_get_backButtonLeavesApp_m38EF3C8FB21C4944FC1F6AB738389A5EB1E0F1F1(NULL);
		return L_0;
	}
}
// System.Boolean Input::get_isGyroAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_isGyroAvailable_mBE8750FF1CDBD6941828DC55B903AD7111F282F0 (const RuntimeMethod* method) 
{
	{
		// public static bool isGyroAvailable { get { return UnityEngine.Input.isGyroAvailable; } }
		bool L_0;
		L_0 = Input_get_isGyroAvailable_m94DFBFAF50E5584CDFDB3074027C641741881337(NULL);
		return L_0;
	}
}
// System.Boolean Input::get_compensateSensors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_compensateSensors_m7E6A23CD8464690A946C880D127618D0975708FD (const RuntimeMethod* method) 
{
	{
		// public static bool compensateSensors { get { return UnityEngine.Input.compensateSensors; } }
		bool L_0;
		L_0 = Input_get_compensateSensors_mF4A3E2A2152D962CB4B3E91EF1B4A83F76902FB7(NULL);
		return L_0;
	}
}
// UnityEngine.AccelerationEvent Input::GetAccelerationEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AccelerationEvent_tA2256FB99C2ACE6C0D05BDED1D3EF05DB5181E68 Input_GetAccelerationEvent_m9F94220D8E099A652E63FF2240AF9041C8D15B4A (int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Input.GetAccelerationEvent(index);
		int32_t L_0 = ___index0;
		AccelerationEvent_tA2256FB99C2ACE6C0D05BDED1D3EF05DB5181E68 L_1;
		L_1 = Input_GetAccelerationEvent_m68CFBA2B43AFA282B6AA8BD4C69E6A66C59B3A03(L_0, NULL);
		return L_1;
	}
}
// System.Single Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m9A8AC56501192A732A9450DF39F8AF5CF105A578 (String_t* ___axis0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnityEngine.Input.GetAxis(axis) + GetAxisMobile(axis);
		String_t* L_0 = ___axis0;
		float L_1;
		L_1 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(L_0, NULL);
		String_t* L_2 = ___axis0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = Input_GetAxisMobile_m3A64859496E552A912D2CBF6F960B226CB1F59E7(L_2, NULL);
		return ((float)il2cpp_codegen_add(L_1, L_3));
	}
}
// System.Single Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC69A8ABBFE33CB2CE186EFDBC52CA6D2F6A9C7F1 (String_t* ___axis0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnityEngine.Input.GetAxisRaw(axis) + GetAxisMobile(axis);
		String_t* L_0 = ___axis0;
		float L_1;
		L_1 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(L_0, NULL);
		String_t* L_2 = ___axis0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = Input_GetAxisMobile_m3A64859496E552A912D2CBF6F960B226CB1F59E7(L_2, NULL);
		return ((float)il2cpp_codegen_add(L_1, L_3));
	}
}
// System.Boolean Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m8729DE80FB89DF9753C352DB6A4904FA20A6F744 (String_t* ___Button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnityEngine.Input.GetButton(Button) || GetButtonMobile(Button);
		String_t* L_0 = ___Button0;
		bool L_1;
		L_1 = Input_GetButton_mD0363B5F1771A7C7A97ABB0D07863217D229A9C0(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ___Button0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Input_GetButtonMobile_m08CE4DB66A9AC0E39E033DAA68D4921F5D2BC98C(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)1;
	}
}
// System.Boolean Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m4AC6178E87A4626EFAB0108DC051AD0E5F9E9866 (String_t* ___Button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnityEngine.Input.GetButtonDown(Button) || GetButtonDownMobile(Button);
		String_t* L_0 = ___Button0;
		bool L_1;
		L_1 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ___Button0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Input_GetButtonDownMobile_mA2F1BCC7574A047829B540E6CD34DF25495DA88C(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)1;
	}
}
// System.Boolean Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_mB17F26BCE03A74D3DDFF77AFB7BE34EE1F2E6BBD (String_t* ___Button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnityEngine.Input.GetButtonUp(Button) || GetButtonUpMobile(Button);
		String_t* L_0 = ___Button0;
		bool L_1;
		L_1 = Input_GetButtonUp_m65D9F89AC7456225E812704283D5EF84C852F724(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_2 = ___Button0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Input_GetButtonUpMobile_m70E8711461FC9F0D05CFBF833BF66C0BAFDB7967(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)1;
	}
}
// System.String[] Input::GetJoystickNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Input_GetJoystickNames_mFEFC09F101C97EED9A28A79A77D1770412C1B17E (const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Input.GetJoystickNames();
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = Input_GetJoystickNames_m398DA6DE3281D480F35E06AA92F746D4C82C9DC5(NULL);
		return L_0;
	}
}
// System.Boolean Input::GetKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m1B25E764EAEA202C6DFB21C8A9B977ABF62536B9 (String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Input.GetKey(key);
		String_t* L_0 = ___key0;
		bool L_1;
		L_1 = Input_GetKey_m44AFFD4998B49A1018F356EDC130A5EBA7428E29(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mF0A7B2A3A7364909A3BD4090EB344BD313D6AE2F (int32_t ___key0, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Input.GetKeyUp(key);
		int32_t L_0 = ___key0;
		bool L_1;
		L_1 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mABC4B7BB2DC82A42AB6FB59DB39F5286DF396733 (String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Input.GetKeyDown(key);
		String_t* L_0 = ___key0;
		bool L_1;
		L_1 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m1C6E8F22F144C59367DB8A2814D478570877D823 (int32_t ___key0, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Input.GetKeyDown(key);
		int32_t L_0 = ___key0;
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Input::GetKeyUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m6B3ACE2A984DA7FA0385CADD85FA3C1FD2C968A3 (String_t* ___key0, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Input.GetKeyUp(key);
		String_t* L_0 = ___key0;
		bool L_1;
		L_1 = Input_GetKeyUp_m23DE692DECD24741D5F73B8700890AC2557EE400(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mBF4AF31707A49234B6E3A84739E52417CB156342 (int32_t ___key0, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Input.GetKeyUp(key);
		int32_t L_0 = ___key0;
		bool L_1;
		L_1 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mEB514F7970FB59A43662B0ED4C77C6E700E543AF (int32_t ___button0, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Input.GetMouseButton(button);
		int32_t L_0 = ___button0;
		bool L_1;
		L_1 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_mA64DE958F3B96E63D93A2675D2F05E93794AA285 (int32_t ___button0, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Input.GetMouseButtonDown(button);
		int32_t L_0 = ___button0;
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mDC8AE84EA895B4444E06D9233B859E6D9B54FE83 (int32_t ___button0, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Input.GetMouseButtonUp(button);
		int32_t L_0 = ___button0;
		bool L_1;
		L_1 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Touch Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m0A47B1BBD339DD76BEAA8895BEE5B897BDDE16F3 (int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Input.GetTouch(index);
		int32_t L_0 = ___index0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(L_0, NULL);
		return L_1;
	}
}
// System.Void Input::ResetInputAxes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_ResetInputAxes_m6EC2A4784CDD834673FDFECC13B33E32A3A0989C (const RuntimeMethod* method) 
{
	{
		// UnityEngine.Input.ResetInputAxes();
		Input_ResetInputAxes_m4EBCC069814BBECE517C6A9F45AFFB35E310AEEE(NULL);
		// }
		return;
	}
}
// System.Boolean Input::GetButtonDownMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDownMobile_mA2F1BCC7574A047829B540E6CD34DF25495DA88C (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ButtonsDown.Contains(name))
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsDown_4;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_1, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// if (Time.frameCount != lastFrameUpdated)
		int32_t L_3;
		L_3 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___lastFrameUpdated_7;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		// ButtonsDown.Clear();
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsDown_4;
		NullCheck(L_5);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_5, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// ButtonsUp.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsUp_6;
		NullCheck(L_6);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_6, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// ButtonsHold.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsHold_5;
		NullCheck(L_7);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_7, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		goto IL_003b;
	}

IL_0039:
	{
		// return true;
		return (bool)1;
	}

IL_003b:
	{
		// return false;
		return (bool)0;
	}
}
// System.String Input::GetButtonDownList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Input_GetButtonDownList_mC4892E0CE5421E170A2D53233ABAD2368A867A73 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string txt = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < ButtonsDown.Count; i++)
		V_1 = 0;
		goto IL_0025;
	}

IL_000a:
	{
		// txt += ButtonsDown[i]+"\n";
		String_t* L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsDown_4;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_1, L_2, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, L_3, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		V_0 = L_4;
		// for (int i = 0; i < ButtonsDown.Count; i++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < ButtonsDown.Count; i++)
		int32_t L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsDown_4;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_7, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000a;
		}
	}
	{
		// txt +="end";
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_9, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, NULL);
		V_0 = L_10;
		// return txt;
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.Boolean Input::GetButtonMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonMobile_m08CE4DB66A9AC0E39E033DAA68D4921F5D2BC98C (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ButtonsHold.Contains(name))
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsHold_5;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_1, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// if (Time.frameCount != lastFrameUpdated)
		int32_t L_3;
		L_3 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___lastFrameUpdated_7;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		// ButtonsDown.Clear();
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsDown_4;
		NullCheck(L_5);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_5, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// ButtonsUp.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsUp_6;
		NullCheck(L_6);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_6, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// ButtonsHold.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsHold_5;
		NullCheck(L_7);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_7, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		goto IL_003b;
	}

IL_0039:
	{
		// return true;
		return (bool)1;
	}

IL_003b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Input::GetButtonUpMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUpMobile_m70E8711461FC9F0D05CFBF833BF66C0BAFDB7967 (String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ButtonsUp.Contains(name))
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsUp_6;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_1, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// if (Time.frameCount != lastFrameUpdated)
		int32_t L_3;
		L_3 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___lastFrameUpdated_7;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		// ButtonsDown.Clear();
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsDown_4;
		NullCheck(L_5);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_5, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// ButtonsUp.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsUp_6;
		NullCheck(L_6);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_6, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// ButtonsHold.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsHold_5;
		NullCheck(L_7);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_7, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		goto IL_003b;
	}

IL_0039:
	{
		// return true;
		return (bool)1;
	}

IL_003b:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Input::PressButtonDownMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_PressButtonDownMobile_m55DCF551B9EED85971C5D73CE7E679455CDBC9DC (String_t* ___buttonName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Time.frameCount != lastFrameUpdated)
		int32_t L_0;
		L_0 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___lastFrameUpdated_7;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// ButtonsDown.Clear();
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsDown_4;
		NullCheck(L_2);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_2, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// ButtonsUp.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsUp_6;
		NullCheck(L_3);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_3, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// ButtonsHold.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsHold_5;
		NullCheck(L_4);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_4, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
	}

IL_002a:
	{
		// lastFrameUpdated = Time.frameCount;
		int32_t L_5;
		L_5 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___lastFrameUpdated_7 = L_5;
		// ButtonsDown.Add(buttonName);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsDown_4;
		String_t* L_7 = ___buttonName0;
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Input::PressButtonMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_PressButtonMobile_m7B66CEF45F4A55FE447F88C4160F98A54890794E (String_t* ___buttonName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Time.frameCount != lastFrameUpdated)
		int32_t L_0;
		L_0 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___lastFrameUpdated_7;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// ButtonsDown.Clear();
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsDown_4;
		NullCheck(L_2);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_2, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// ButtonsUp.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsUp_6;
		NullCheck(L_3);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_3, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// ButtonsHold.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsHold_5;
		NullCheck(L_4);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_4, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
	}

IL_002a:
	{
		// lastFrameUpdated = Time.frameCount;
		int32_t L_5;
		L_5 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___lastFrameUpdated_7 = L_5;
		// ButtonsHold.Add(buttonName);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsHold_5;
		String_t* L_7 = ___buttonName0;
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Input::PressButtonUpMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_PressButtonUpMobile_mD456E7AC1FE5FD38CDFAB0FE158D0419EAB3F8D1 (String_t* ___buttonName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Time.frameCount != lastFrameUpdated)
		int32_t L_0;
		L_0 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___lastFrameUpdated_7;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002a;
		}
	}
	{
		// ButtonsDown.Clear();
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsDown_4;
		NullCheck(L_2);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_2, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// ButtonsUp.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsUp_6;
		NullCheck(L_3);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_3, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// ButtonsHold.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsHold_5;
		NullCheck(L_4);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_4, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
	}

IL_002a:
	{
		// lastFrameUpdated = Time.frameCount;
		int32_t L_5;
		L_5 = Time_get_frameCount_m88E5008FE9451A892DE1F43DC8587213075890A8(NULL);
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___lastFrameUpdated_7 = L_5;
		// ButtonsUp.Add(buttonName);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsUp_6;
		String_t* L_7 = ___buttonName0;
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Single Input::GetAxisMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisMobile_m3A64859496E552A912D2CBF6F960B226CB1F59E7 (String_t* ___axisName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t955260D0F7C23EDE6F0DAC0015B1948A9243F1E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (MobileAxes == null || !MobileAxes.ContainsKey(axisName))
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___MobileAxes_8;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___MobileAxes_8;
		String_t* L_2 = ___axisName0;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Single>::ContainsKey(TKey) */, IDictionary_2_t955260D0F7C23EDE6F0DAC0015B1948A9243F1E4_il2cpp_TypeInfo_var, L_1, L_2);
		if (L_3)
		{
			goto IL_001a;
		}
	}

IL_0014:
	{
		// return 0f;
		return (0.0f);
	}

IL_001a:
	{
		// return MobileAxes[axisName];
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___MobileAxes_8;
		String_t* L_5 = ___axisName0;
		NullCheck(L_4);
		float L_6;
		L_6 = InterfaceFuncInvoker1< float, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.Single>::get_Item(TKey) */, IDictionary_2_t955260D0F7C23EDE6F0DAC0015B1948A9243F1E4_il2cpp_TypeInfo_var, L_4, L_5);
		return L_6;
	}
}
// System.Void Input::SetAxisMobile(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089 (String_t* ___Name0, float ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t955260D0F7C23EDE6F0DAC0015B1948A9243F1E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!MobileAxes.ContainsKey(Name))
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___MobileAxes_8;
		String_t* L_1 = ___Name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Single>::ContainsKey(TKey) */, IDictionary_2_t955260D0F7C23EDE6F0DAC0015B1948A9243F1E4_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		// RegisterAxisMobile(Name);
		String_t* L_3 = ___Name0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_RegisterAxisMobile_m844E606E77E2607FE43128B3BAD79B547948E288(L_3, NULL);
	}

IL_0013:
	{
		// MobileAxes[Name] = value;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___MobileAxes_8;
		String_t* L_5 = ___Name0;
		float L_6 = ___value1;
		NullCheck(L_4);
		InterfaceActionInvoker2< String_t*, float >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Single>::set_Item(TKey,TValue) */, IDictionary_2_t955260D0F7C23EDE6F0DAC0015B1948A9243F1E4_il2cpp_TypeInfo_var, L_4, L_5, L_6);
		// }
		return;
	}
}
// System.Void Input::RegisterAxisMobile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_RegisterAxisMobile_m844E606E77E2607FE43128B3BAD79B547948E288 (String_t* ___Name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t955260D0F7C23EDE6F0DAC0015B1948A9243F1E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (MobileAxes.ContainsKey(Name))
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___MobileAxes_8;
		String_t* L_1 = ___Name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Single>::ContainsKey(TKey) */, IDictionary_2_t955260D0F7C23EDE6F0DAC0015B1948A9243F1E4_il2cpp_TypeInfo_var, L_0, L_1);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// MobileAxes.Add(Name, 0f);
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___MobileAxes_8;
		String_t* L_4 = ___Name0;
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, float >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Single>::Add(TKey,TValue) */, IDictionary_2_t955260D0F7C23EDE6F0DAC0015B1948A9243F1E4_il2cpp_TypeInfo_var, L_3, L_4, (0.0f));
		// }
		return;
	}
}
// System.Void Input::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input__ctor_m436F4FB4EE7869C4C75C1E5E177E70E1CA55328E (Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Input::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input__cctor_m8A467BDF2F2AD5D8C9A9F6D0CE7D770CB79FBA3B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<string> ButtonsDown = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsDown_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsDown_4), (void*)L_0);
		// private static List<string> ButtonsHold = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsHold_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsHold_5), (void*)L_1);
		// private static List<string> ButtonsUp = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsUp_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___ButtonsUp_6), (void*)L_2);
		// private static IDictionary<string, float> MobileAxes = new Dictionary<string, float>();
		Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9* L_3 = (Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9*)il2cpp_codegen_object_new(Dictionary_2_tFF5BAE20C79FF62D8212212465EDB4D26909FFE9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED(L_3, Dictionary_2__ctor_m3B9D7D2783B71FBCFA8E7A4FCD0DC1D832AF15ED_RuntimeMethod_var);
		((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___MobileAxes_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var))->___MobileAxes_8), (void*)L_3);
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
// System.Void LeoLuz.PlugAndPlayJoystick.SimpleController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_Start_mD25D39046DFCF2288364EF0469071E448918A1E5 (SimpleController_t524F496E56545709672DD25495FBECB6DA3568BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.SimpleController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_Update_m272F42EA2A8B92B9D80D4BC9E0B1B83DED522DA2 (SimpleController_t524F496E56545709672DD25495FBECB6DA3568BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb.velocity = new Vector2(Input.GetAxis("Horizontal") * velocity, rb.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rb_8;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Input_GetAxis_m9A8AC56501192A732A9450DF39F8AF5CF105A578(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_2 = __this->___velocity_9;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___rb_8;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_3, NULL);
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_6, NULL);
		// if (grounded && Input.GetButton(JumpAxis))
		bool L_7 = __this->___grounded_11;
		if (!L_7)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_8 = __this->___JumpAxis_5;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Input_GetButton_m8729DE80FB89DF9753C352DB6A4904FA20A6F744(L_8, NULL);
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// rb.velocity = new Vector2(rb.velocity.x, 10f);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_10 = __this->___rb_8;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_11 = __this->___rb_8;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_11, NULL);
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), L_13, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_10, L_14, NULL);
		// grounded = false;
		__this->___grounded_11 = (bool)0;
	}

IL_0072:
	{
		// if (Input.GetButtonDown(FireAxis))
		String_t* L_15 = __this->___FireAxis_6;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Input_GetButtonDown_m4AC6178E87A4626EFAB0108DC051AD0E5F9E9866(L_15, NULL);
		if (!L_16)
		{
			goto IL_00d9;
		}
	}
	{
		// GameObject obj = (GameObject)Instantiate(Projectile, transform.position + Vector3.right * 0.3f, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___Projectile_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_20, (0.300000012f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_19, L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_17, L_22, L_23, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Physics2D.IgnoreCollision(obj.GetComponent<Collider2D>(), GetComponent<Collider2D>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24;
		NullCheck(L_25);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_26;
		L_26 = GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4(L_25, GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_27;
		L_27 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(__this, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Physics2D_IgnoreCollision_mE74D656AD07A765E28037033BF11785716C906F2(L_26, L_27, NULL);
		// obj.GetComponent<Rigidbody2D>().velocity = new Vector2(ProjectileVelocity, 0f);
		NullCheck(L_25);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_28;
		L_28 = GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956(L_25, GameObject_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m9E552507CE5EACBA6A9E0470BB5F15669379B956_RuntimeMethod_var);
		float L_29 = __this->___ProjectileVelocity_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_30), L_29, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_28, L_30, NULL);
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.SimpleController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_OnCollisionEnter2D_mD0F905A5426B21ADFC5630CF1BF3C7C2616DAA32 (SimpleController_t524F496E56545709672DD25495FBECB6DA3568BB* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___col0, const RuntimeMethod* method) 
{
	{
		// grounded = true;
		__this->___grounded_11 = (bool)1;
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.SimpleController::OnCollisionStay2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_OnCollisionStay2D_m62408CF07B65FE1C2921A1098543CBC5C1CD629F (SimpleController_t524F496E56545709672DD25495FBECB6DA3568BB* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___col0, const RuntimeMethod* method) 
{
	{
		// grounded = true;
		__this->___grounded_11 = (bool)1;
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.SimpleController::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController_OnCollisionExit2D_m6370DCB94A5003D6CA5C2B36C1D5A03B148BB6B4 (SimpleController_t524F496E56545709672DD25495FBECB6DA3568BB* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___col0, const RuntimeMethod* method) 
{
	{
		// grounded = false;
		__this->___grounded_11 = (bool)0;
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.SimpleController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleController__ctor_m4D6E34873C39B48784AB7F7D2A69D75258630543 (SimpleController_t524F496E56545709672DD25495FBECB6DA3568BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD87B0605F0E5B5736E4AD6F433BF356D78940B37);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string HorizontalAxis = "Horizontal";
		__this->___HorizontalAxis_4 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HorizontalAxis_4), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string JumpAxis = "Jump";
		__this->___JumpAxis_5 = _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JumpAxis_5), (void*)_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		// public string FireAxis = "Fire 1";
		__this->___FireAxis_6 = _stringLiteralD87B0605F0E5B5736E4AD6F433BF356D78940B37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FireAxis_6), (void*)_stringLiteralD87B0605F0E5B5736E4AD6F433BF356D78940B37);
		// public float velocity = 5f;
		__this->___velocity_9 = (5.0f);
		// public float ProjectileVelocity = 7f;
		__this->___ProjectileVelocity_10 = (7.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LeoLuz.PlugAndPlayJoystick.AnalogicKnob::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalogicKnob_Start_m18B5217B4AC164F1B01A48FCD54CE90FB1970A74 (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalogicKnob_CheckBoxArea_mBA4EBD7C32A5E34AD571061F81DFBE30FE9AF650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalogicKnob_CheckCircleArea_mF6100FEA82A1D426AA19B716885D271FF5BC12EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA4D26EC845E98F498699C5E107A5CF6616113C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB634D691FA5DDFEE27F788AB8191576DF49C1E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// base.Start();
		ButtonBase_Start_mCB4D3B282C3A0B7B3AE26232D6E39AC3E55317A1(__this, NULL);
		// rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___rectTransform_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTransform_23), (void*)L_0);
		// imageUI = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___imageUI_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imageUI_24), (void*)L_1);
		// if (rectTransform == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___rectTransform_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.Log("Specify the object of the knob");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralBB634D691FA5DDFEE27F788AB8191576DF49C1E5, NULL);
	}

IL_0036:
	{
		// Canvas canvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4;
		L_4 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		V_0 = L_4;
		// if (canvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// Debug.LogError("canvas not found, put this object as children of an canvas.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral0BA4D26EC845E98F498699C5E107A5CF6616113C, NULL);
	}

IL_0050:
	{
		// RectTransform CanvasRect = canvas.GetComponent<RectTransform>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7 = V_0;
		NullCheck(L_7);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_7, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		V_1 = L_8;
		// AnchoredAreaBounds = new Bounds(new Vector2(NormalizedAnchoredAreaBounds.center.x * CanvasRect.sizeDelta.x, NormalizedAnchoredAreaBounds.center.y * CanvasRect.sizeDelta.y)
		//     , new Vector2(NormalizedAnchoredAreaBounds.size.x * CanvasRect.sizeDelta.x, NormalizedAnchoredAreaBounds.size.y * CanvasRect.sizeDelta.y));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_9 = (&__this->___NormalizedAnchoredAreaBounds_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_9, NULL);
		float L_11 = L_10.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = V_1;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_12, NULL);
		float L_14 = L_13.___x_0;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_15 = (&__this->___NormalizedAnchoredAreaBounds_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_15, NULL);
		float L_17 = L_16.___y_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = V_1;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_18, NULL);
		float L_20 = L_19.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), ((float)il2cpp_codegen_multiply(L_11, L_14)), ((float)il2cpp_codegen_multiply(L_17, L_20)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_21, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_23 = (&__this->___NormalizedAnchoredAreaBounds_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_23, NULL);
		float L_25 = L_24.___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = V_1;
		NullCheck(L_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_26, NULL);
		float L_28 = L_27.___x_0;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_29 = (&__this->___NormalizedAnchoredAreaBounds_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_29, NULL);
		float L_31 = L_30.___y_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_32 = V_1;
		NullCheck(L_32);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_32, NULL);
		float L_34 = L_33.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_35), ((float)il2cpp_codegen_multiply(L_25, L_28)), ((float)il2cpp_codegen_multiply(L_31, L_34)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_35, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&L_37), L_22, L_36, /*hidden argument*/NULL);
		__this->___AnchoredAreaBounds_17 = L_37;
		// if (AnalogicStartAnchoredPosition == Vector2.zero) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = __this->___AnalogicStartAnchoredPosition_36;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_40;
		L_40 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_38, L_39, NULL);
		if (!L_40)
		{
			goto IL_010b;
		}
	}
	{
		// AnalogicStartAnchoredPosition = rectTransform.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_41 = __this->___rectTransform_23;
		NullCheck(L_41);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_41, NULL);
		__this->___AnalogicStartAnchoredPosition_36 = L_42;
		goto IL_011c;
	}

IL_010b:
	{
		// rectTransform.anchoredPosition = AnalogicStartAnchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_43 = __this->___rectTransform_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = __this->___AnalogicStartAnchoredPosition_36;
		NullCheck(L_43);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_43, L_44, NULL);
	}

IL_011c:
	{
		// AnalogicStartPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_46, NULL);
		__this->___AnalogicStartPosition_35 = L_47;
		// ScreenPixels = new Vector2(Screen.width, Screen.height);
		int32_t L_48;
		L_48 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_49;
		L_49 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_50), ((float)L_48), ((float)L_49), /*hidden argument*/NULL);
		__this->___ScreenPixels_29 = L_50;
		// CanvasSize = CanvasRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51 = V_1;
		NullCheck(L_51);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_51, NULL);
		__this->___CanvasSize_30 = L_52;
		// CanvasScale = canvas.transform.lossyScale.x;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_53 = V_0;
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_53, NULL);
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_54, NULL);
		float L_56 = L_55.___x_2;
		__this->___CanvasScale_32 = L_56;
		// ScreenToAnchorPositionConversionConstant = new Vector2(CanvasSize.x / ScreenPixels.x, CanvasSize.y / ScreenPixels.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_57 = (&__this->___CanvasSize_30);
		float L_58 = L_57->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_59 = (&__this->___ScreenPixels_29);
		float L_60 = L_59->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_61 = (&__this->___CanvasSize_30);
		float L_62 = L_61->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_63 = (&__this->___ScreenPixels_29);
		float L_64 = L_63->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_65), ((float)(L_58/L_60)), ((float)(L_62/L_64)), /*hidden argument*/NULL);
		__this->___ScreenToAnchorPositionConversionConstant_33 = L_65;
		// ScreenUnitsToWorldUnitsConversionConstant = ScreenToAnchorPositionConversionConstant.y * CanvasScale;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_66 = (&__this->___ScreenToAnchorPositionConversionConstant_33);
		float L_67 = L_66->___y_1;
		float L_68 = __this->___CanvasScale_32;
		__this->___ScreenUnitsToWorldUnitsConversionConstant_34 = ((float)il2cpp_codegen_multiply(L_67, L_68));
		// _MaxDistance = TurnLimit / ScreenToAnchorPositionConversionConstant.y;
		float L_69 = __this->___TurnLimit_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_70 = (&__this->___ScreenToAnchorPositionConversionConstant_33);
		float L_71 = L_70->___y_1;
		__this->____MaxDistance_9 = ((float)(L_69/L_71));
		// canvasInitialPoint = canvas.transform.position + (new Vector3(-CanvasSize.x * canvas.transform.lossyScale.x * 0.5f, -CanvasSize.y * canvas.transform.lossyScale.y * 0.5f));
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_72 = V_0;
		NullCheck(L_72);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_72, NULL);
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_73, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_75 = (&__this->___CanvasSize_30);
		float L_76 = L_75->___x_0;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_77 = V_0;
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_77, NULL);
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_78, NULL);
		float L_80 = L_79.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_81 = (&__this->___CanvasSize_30);
		float L_82 = L_81->___y_1;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_83 = V_0;
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_83, NULL);
		NullCheck(L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_84, NULL);
		float L_86 = L_85.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		memset((&L_87), 0, sizeof(L_87));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_87), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_76)), L_80)), (0.5f))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_82)), L_86)), (0.5f))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_74, L_87, NULL);
		__this->___canvasInitialPoint_31 = L_88;
		// Vector3 knobUnAnchoredPositionOnCanvas = (transform.position - canvasInitialPoint) / canvas.transform.lossyScale.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_89, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = __this->___canvasInitialPoint_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_90, L_91, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_93 = V_0;
		NullCheck(L_93);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_93, NULL);
		NullCheck(L_94);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_94, NULL);
		float L_96 = L_95.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_92, L_96, NULL);
		V_2 = L_97;
		// MinScreenAreaBounds = (knobUnAnchoredPositionOnCanvas + AnchoredAreaBounds.min) / ScreenToAnchorPositionConversionConstant.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = V_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_99 = (&__this->___AnchoredAreaBounds_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Bounds_get_min_m465AC9BBE1DE5D8E8AD95AC19B9899068FEEBB13(L_99, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_98, L_100, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_102 = (&__this->___ScreenToAnchorPositionConversionConstant_33);
		float L_103 = L_102->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_101, L_103, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105;
		L_105 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_104, NULL);
		__this->___MinScreenAreaBounds_19 = L_105;
		// MaxScreenAreaBounds = (knobUnAnchoredPositionOnCanvas + AnchoredAreaBounds.max) / ScreenToAnchorPositionConversionConstant.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_107 = (&__this->___AnchoredAreaBounds_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09(L_107, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_106, L_108, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_110 = (&__this->___ScreenToAnchorPositionConversionConstant_33);
		float L_111 = L_110->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_109, L_111, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113;
		L_113 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_112, NULL);
		__this->___MaxScreenAreaBounds_20 = L_113;
		// ScreenCenterAreaBounds = (knobUnAnchoredPositionOnCanvas + AnchoredAreaBounds.center) / ScreenToAnchorPositionConversionConstant.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = V_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_115 = (&__this->___AnchoredAreaBounds_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		L_116 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_115, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_114, L_116, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_118 = (&__this->___ScreenToAnchorPositionConversionConstant_33);
		float L_119 = L_118->___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120;
		L_120 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_117, L_119, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_121;
		L_121 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_120, NULL);
		__this->___ScreenCenterAreaBounds_21 = L_121;
		// ScreenRadiusAreaBounds = AnchoredAreaBounds.extents.x / ScreenToAnchorPositionConversionConstant.y;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_122 = (&__this->___AnchoredAreaBounds_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
		L_123 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25(L_122, NULL);
		float L_124 = L_123.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_125 = (&__this->___ScreenToAnchorPositionConversionConstant_33);
		float L_126 = L_125->___y_1;
		__this->___ScreenRadiusAreaBounds_22 = ((float)(L_124/L_126));
		// if (clampMode == ClampMode.Box)
		int32_t L_127 = __this->___clampMode_7;
		if (L_127)
		{
			goto IL_0323;
		}
	}
	{
		// IsInsideArea = CheckBoxArea;
		method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* L_128 = (method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA*)il2cpp_codegen_object_new(method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA_il2cpp_TypeInfo_var);
		NullCheck(L_128);
		method__ctor_mA6485DACFA883E25D40A0CC225A35967CE0A8725(L_128, __this, (intptr_t)((void*)AnalogicKnob_CheckBoxArea_mBA4EBD7C32A5E34AD571061F81DFBE30FE9AF650_RuntimeMethod_var), NULL);
		__this->___IsInsideArea_41 = L_128;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IsInsideArea_41), (void*)L_128);
		goto IL_0335;
	}

IL_0323:
	{
		// IsInsideArea = CheckCircleArea;
		method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* L_129 = (method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA*)il2cpp_codegen_object_new(method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA_il2cpp_TypeInfo_var);
		NullCheck(L_129);
		method__ctor_mA6485DACFA883E25D40A0CC225A35967CE0A8725(L_129, __this, (intptr_t)((void*)AnalogicKnob_CheckCircleArea_mF6100FEA82A1D426AA19B716885D271FF5BC12EC_RuntimeMethod_var), NULL);
		__this->___IsInsideArea_41 = L_129;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IsInsideArea_41), (void*)L_129);
	}

IL_0335:
	{
		// Released = true;
		__this->___Released_39 = (bool)1;
		// InsideAreaFingerId = -1;
		__this->___InsideAreaFingerId_38 = (-1);
		// if (autoHide)
		bool L_130 = __this->___autoHide_11;
		if (!L_130)
		{
			goto IL_0385;
		}
	}
	{
		// imageUI.CrossFadeAlpha(0f, 5f, true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_131 = __this->___imageUI_24;
		NullCheck(L_131);
		VirtualActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_131, (0.0f), (5.0f), (bool)1);
		// if (KnobBackground != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_132 = __this->___KnobBackground_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_133;
		L_133 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_132, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_133)
		{
			goto IL_0385;
		}
	}
	{
		// KnobBackground.CrossFadeAlpha(0f, 5f, true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_134 = __this->___KnobBackground_15;
		NullCheck(L_134);
		VirtualActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_134, (0.0f), (5.0f), (bool)1);
	}

IL_0385:
	{
		// _devOrientation = UnityEngine.Input.deviceOrientation;
		int32_t L_135;
		L_135 = Input_get_deviceOrientation_m855C2F467D8AC32548379ADB232E4C36E25CFB7A(NULL);
		__this->____devOrientation_42 = L_135;
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.AnalogicKnob::RecalculateLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalogicKnob_RecalculateLayout_m64EC32733D68E5E7B1A43AD3B826B97F7362AD95 (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B58BAA65EAF61F23B1388F2F7C094E3227BD6EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log ("Recalculating the layout");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral6B58BAA65EAF61F23B1388F2F7C094E3227BD6EE, NULL);
		// Start();
		VirtualActionInvoker0::Invoke(4 /* System.Void LeoLuz.PlugAndPlayJoystick.ButtonBase::Start() */, __this);
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.AnalogicKnob::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalogicKnob_Update_mF09FFA62E10E0E8ACBEB0C491C1E3721ED4AFB56 (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_devOrientation != UnityEngine.Input.deviceOrientation || ScreenPixels.x != Screen.width || ScreenPixels.y != Screen.height)
		int32_t L_0 = __this->____devOrientation_42;
		int32_t L_1;
		L_1 = Input_get_deviceOrientation_m855C2F467D8AC32548379ADB232E4C36E25CFB7A(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0033;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___ScreenPixels_29);
		float L_3 = L_2->___x_0;
		int32_t L_4;
		L_4 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		if ((!(((float)L_3) == ((float)((float)L_4)))))
		{
			goto IL_0033;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___ScreenPixels_29);
		float L_6 = L_5->___y_1;
		int32_t L_7;
		L_7 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		if ((((float)L_6) == ((float)((float)L_7))))
		{
			goto IL_0039;
		}
	}

IL_0033:
	{
		// RecalculateLayout ();
		AnalogicKnob_RecalculateLayout_m64EC32733D68E5E7B1A43AD3B826B97F7362AD95(__this, NULL);
	}

IL_0039:
	{
		// lastFrameNormalizedAxis = NormalizedAxis;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___NormalizedAxis_28;
		__this->___lastFrameNormalizedAxis_40 = L_8;
		// if (TouchAbstraction.TouchCont > 0)
		int32_t L_9;
		L_9 = TouchAbstraction_get_TouchCont_mA24BB271DBF7F1A34EB0E577367431455506A26B(NULL);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0103;
		}
	}
	{
		// if (Released)
		bool L_10 = __this->___Released_39;
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		// InsideAreaFingerId = GetAnalogFingerIDInsideArea();
		int32_t L_11;
		L_11 = AnalogicKnob_GetAnalogFingerIDInsideArea_mC26D8F8F06299E40C5B4C86E8EED2716C98F906D(__this, NULL);
		__this->___InsideAreaFingerId_38 = L_11;
	}

IL_0064:
	{
		// if (InsideAreaFingerId != -1)
		int32_t L_12 = __this->___InsideAreaFingerId_38;
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		// AnalogTouch = TouchAbstraction.GetTouchByFingerID(InsideAreaFingerId);
		int32_t L_13 = __this->___InsideAreaFingerId_38;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_14;
		L_14 = TouchAbstraction_GetTouchByFingerID_m240E332A9FFDA206D294D1C4AFDBC551E3180B6B(L_13, NULL);
		__this->___AnalogTouch_37 = L_14;
		// if (Released)
		bool L_15 = __this->___Released_39;
		if (!L_15)
		{
			goto IL_00b0;
		}
	}
	{
		// if (AnalogTouch.phase == TouchPhase.Began)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_16 = (&__this->___AnalogTouch_37);
		int32_t L_17;
		L_17 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(L_16, NULL);
		if (L_17)
		{
			goto IL_0111;
		}
	}
	{
		// Released = false;
		__this->___Released_39 = (bool)0;
		// TouchBegan(AnalogTouch.position);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_18 = (&__this->___AnalogTouch_37);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(L_18, NULL);
		AnalogicKnob_TouchBegan_m52901EA8C659D4B7675C8E28E90A1032E6B91DDC(__this, L_19, NULL);
		goto IL_0111;
	}

IL_00b0:
	{
		// if (AnalogTouch.phase == TouchPhase.Moved || AnalogTouch.phase == TouchPhase.Stationary)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_20 = (&__this->___AnalogTouch_37);
		int32_t L_21;
		L_21 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(L_20, NULL);
		if ((((int32_t)L_21) == ((int32_t)1)))
		{
			goto IL_00cc;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_22 = (&__this->___AnalogTouch_37);
		int32_t L_23;
		L_23 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(L_22, NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)2))))
		{
			goto IL_00e4;
		}
	}

IL_00cc:
	{
		// TouchMove(AnalogTouch.position);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_24 = (&__this->___AnalogTouch_37);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_25, NULL);
		AnalogicKnob_TouchMove_m298329C72BE4B800B437F6FAEB8646557451E2F3(__this, L_26, NULL);
		goto IL_0111;
	}

IL_00e4:
	{
		// else if (AnalogTouch.phase == TouchPhase.Ended)
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_27 = (&__this->___AnalogTouch_37);
		int32_t L_28;
		L_28 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(L_27, NULL);
		if ((!(((uint32_t)L_28) == ((uint32_t)3))))
		{
			goto IL_0111;
		}
	}
	{
		// TouchEnd();
		AnalogicKnob_TouchEnd_m96A1F8ADE02CC89BDA460DCF975FB4185F440905(__this, NULL);
		goto IL_0111;
	}

IL_00fa:
	{
		// Released = true;
		__this->___Released_39 = (bool)1;
		goto IL_0111;
	}

IL_0103:
	{
		// InsideAreaFingerId = -1;
		__this->___InsideAreaFingerId_38 = (-1);
		// Released = true;
		__this->___Released_39 = (bool)1;
	}

IL_0111:
	{
		// if (Released == true)
		bool L_29 = __this->___Released_39;
		if (!L_29)
		{
			goto IL_0150;
		}
	}
	{
		// rectTransform.position = Vector2.Lerp(transform.position, AnalogicStartPosition, ReturnSpeed * Time.unscaledDeltaTime);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30 = __this->___rectTransform_23;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_32, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = __this->___AnalogicStartPosition_35;
		float L_35 = __this->___ReturnSpeed_10;
		float L_36;
		L_36 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_33, L_34, ((float)il2cpp_codegen_multiply(L_35, L_36)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_37, NULL);
		NullCheck(L_30);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_30, L_38, NULL);
	}

IL_0150:
	{
		// Input.SetAxisMobile(HorizontalAxis, NormalizedAxis.x);
		String_t* L_39 = __this->___HorizontalAxis_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = (&__this->___NormalizedAxis_28);
		float L_41 = L_40->___x_0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089(L_39, L_41, NULL);
		// Input.SetAxisMobile(VerticalAxis, NormalizedAxis.y);
		String_t* L_42 = __this->___VerticalAxis_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_43 = (&__this->___NormalizedAxis_28);
		float L_44 = L_43->___y_1;
		Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089(L_42, L_44, NULL);
		// if (Mathf.Abs(lastFrameNormalizedAxis.x) < 0.2f && NormalizedAxis.x != 0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_45 = (&__this->___lastFrameNormalizedAxis_40);
		float L_46 = L_45->___x_0;
		float L_47;
		L_47 = fabsf(L_46);
		if ((!(((float)L_47) < ((float)(0.200000003f)))))
		{
			goto IL_01b0;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_48 = (&__this->___NormalizedAxis_28);
		float L_49 = L_48->___x_0;
		if ((((float)L_49) == ((float)(0.0f))))
		{
			goto IL_01b0;
		}
	}
	{
		// Input.PressButtonDownMobile(HorizontalAxis);
		String_t* L_50 = __this->___HorizontalAxis_5;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonDownMobile_m55DCF551B9EED85971C5D73CE7E679455CDBC9DC(L_50, NULL);
	}

IL_01b0:
	{
		// if (Mathf.Abs(lastFrameNormalizedAxis.y) < 0.2f && NormalizedAxis.y != 0f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_51 = (&__this->___lastFrameNormalizedAxis_40);
		float L_52 = L_51->___y_1;
		float L_53;
		L_53 = fabsf(L_52);
		if ((!(((float)L_53) < ((float)(0.200000003f)))))
		{
			goto IL_01e4;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_54 = (&__this->___NormalizedAxis_28);
		float L_55 = L_54->___y_1;
		if ((((float)L_55) == ((float)(0.0f))))
		{
			goto IL_01e4;
		}
	}
	{
		// Input.PressButtonDownMobile(VerticalAxis);
		String_t* L_56 = __this->___VerticalAxis_6;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonDownMobile_m55DCF551B9EED85971C5D73CE7E679455CDBC9DC(L_56, NULL);
	}

IL_01e4:
	{
		// }
		return;
	}
}
// System.Boolean LeoLuz.PlugAndPlayJoystick.AnalogicKnob::CheckBoxArea(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnalogicKnob_CheckBoxArea_mBA4EBD7C32A5E34AD571061F81DFBE30FE9AF650 (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) 
{
	{
		// if (pos.x > MinScreenAreaBounds.x && pos.x < MaxScreenAreaBounds.x && pos.y > MinScreenAreaBounds.y && pos.y < MaxScreenAreaBounds.y)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___pos0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___MinScreenAreaBounds_19);
		float L_3 = L_2->___x_0;
		if ((!(((float)L_1) > ((float)L_3))))
		{
			goto IL_004e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___pos0;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___MaxScreenAreaBounds_20);
		float L_7 = L_6->___x_0;
		if ((!(((float)L_5) < ((float)L_7))))
		{
			goto IL_004e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___pos0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___MinScreenAreaBounds_19);
		float L_11 = L_10->___y_1;
		if ((!(((float)L_9) > ((float)L_11))))
		{
			goto IL_004e;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___pos0;
		float L_13 = L_12.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___MaxScreenAreaBounds_20);
		float L_15 = L_14->___y_1;
		if ((!(((float)L_13) < ((float)L_15))))
		{
			goto IL_004e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_004e:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean LeoLuz.PlugAndPlayJoystick.AnalogicKnob::CheckCircleArea(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnalogicKnob_CheckCircleArea_mF6100FEA82A1D426AA19B716885D271FF5BC12EC (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, const RuntimeMethod* method) 
{
	{
		// if (Vector2.Distance(pos, ScreenCenterAreaBounds) < ScreenRadiusAreaBounds)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___pos0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___ScreenCenterAreaBounds_21;
		float L_2;
		L_2 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_0, L_1, NULL);
		float L_3 = __this->___ScreenRadiusAreaBounds_22;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0016;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0016:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.AnalogicKnob::TouchBegan(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalogicKnob_TouchBegan_m52901EA8C659D4B7675C8E28E90A1032E6B91DDC (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___TouchPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Released = false;
		__this->___Released_39 = (bool)0;
		// StartPosition = TouchPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___TouchPosition0;
		__this->___StartPosition_25 = L_0;
		// transform.position = canvasInitialPoint + (Vector3)TouchPosition * ScreenUnitsToWorldUnitsConversionConstant;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___canvasInitialPoint_31;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___TouchPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_3, NULL);
		float L_5 = __this->___ScreenUnitsToWorldUnitsConversionConstant_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_6, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_7, NULL);
		// if (autoHide)
		bool L_8 = __this->___autoHide_11;
		if (!L_8)
		{
			goto IL_00b2;
		}
	}
	{
		// imageUI.CrossFadeAlpha(1f, fadeInDuration, true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___imageUI_24;
		float L_10 = __this->___fadeInDuration_12;
		NullCheck(L_9);
		VirtualActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_9, (1.0f), L_10, (bool)1);
		// if (KnobBackground != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___KnobBackground_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_00b2;
		}
	}
	{
		// KnobBackground.CrossFadeAlpha(1f, fadeInDuration, true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___KnobBackground_15;
		float L_14 = __this->___fadeInDuration_12;
		NullCheck(L_13);
		VirtualActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_13, (1.0f), L_14, (bool)1);
		// if (knobBackgroundFollowKnob)
		bool L_15 = __this->___knobBackgroundFollowKnob_16;
		if (!L_15)
		{
			goto IL_00b2;
		}
	}
	{
		// KnobBackground.transform.position = transform.position;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___KnobBackground_15;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		NullCheck(L_17);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_19, NULL);
		// AnalogicStartPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_21, NULL);
		__this->___AnalogicStartPosition_35 = L_22;
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.AnalogicKnob::TouchMove(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalogicKnob_TouchMove_m298329C72BE4B800B437F6FAEB8646557451E2F3 (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// CurrentKnobPosition = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_0, NULL);
		__this->___CurrentKnobPosition_26 = L_1;
		// RawAxis = CurrentKnobPosition - StartPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___CurrentKnobPosition_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___StartPosition_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_2, L_3, NULL);
		__this->___RawAxis_27 = L_4;
		// var direction = RawAxis.normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___RawAxis_27);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_5, NULL);
		V_0 = L_6;
		// var distance = RawAxis.magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___RawAxis_27);
		float L_8;
		L_8 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_7, NULL);
		// var normalizedDistance = Mathf.Clamp(distance / _MaxDistance, 0f, 1.05f);
		float L_9 = __this->____MaxDistance_9;
		float L_10;
		L_10 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_8/L_9)), (0.0f), (1.04999995f), NULL);
		V_1 = L_10;
		// NormalizedAxis = direction * normalizedDistance;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		float L_12 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_11, L_12, NULL);
		__this->___NormalizedAxis_28 = L_13;
		// transform.position = canvasInitialPoint + (Vector3)((StartPosition + (NormalizedAxis * _MaxDistance)) * ScreenUnitsToWorldUnitsConversionConstant);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___canvasInitialPoint_31;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = __this->___StartPosition_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = __this->___NormalizedAxis_28;
		float L_18 = __this->____MaxDistance_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_17, L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_16, L_19, NULL);
		float L_21 = __this->___ScreenUnitsToWorldUnitsConversionConstant_34;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_23, NULL);
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_24, NULL);
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.AnalogicKnob::TouchEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalogicKnob_TouchEnd_m96A1F8ADE02CC89BDA460DCF975FB4185F440905 (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Released = true;
		__this->___Released_39 = (bool)1;
		// InsideAreaFingerId = -1;
		__this->___InsideAreaFingerId_38 = (-1);
		// NormalizedAxis = new Vector2(0f, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___NormalizedAxis_28 = L_0;
		// if (autoHide)
		bool L_1 = __this->___autoHide_11;
		if (!L_1)
		{
			goto IL_0067;
		}
	}
	{
		// imageUI.CrossFadeAlpha(0f, fadeOutDuration, true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___imageUI_24;
		float L_3 = __this->___fadeOutDuration_13;
		NullCheck(L_2);
		VirtualActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_2, (0.0f), L_3, (bool)1);
		// if (KnobBackground != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___KnobBackground_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		// KnobBackground.CrossFadeAlpha(0f, fadeOutDuration, true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___KnobBackground_15;
		float L_7 = __this->___fadeOutDuration_13;
		NullCheck(L_6);
		VirtualActionInvoker3< float, float, bool >::Invoke(49 /* System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean) */, L_6, (0.0f), L_7, (bool)1);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Int32 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::GetAnalogFingerIDInsideArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnalogicKnob_GetAnalogFingerIDInsideArea_mC26D8F8F06299E40C5B4C86E8EED2716C98F906D (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < Input.touchCount; i++)
		V_0 = 0;
		goto IL_0025;
	}

IL_0004:
	{
		// if (IsInsideArea(Input.GetTouch(i).position))
		method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* L_0 = __this->___IsInsideArea_41;
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m0A47B1BBD339DD76BEAA8895BEE5B897BDDE16F3(L_1, NULL);
		V_1 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		NullCheck(L_0);
		bool L_4;
		L_4 = method_Invoke_m94088ED4EA4B7EA68320F0647396C20552E8C377_inline(L_0, L_3, NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// return i;
		int32_t L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
		// for (int i = 0; i < Input.touchCount; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < Input.touchCount; i++)
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Input_get_touchCount_mC049740996B527F25BC9477CF8927481FA006F9E(NULL);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// return -1;
		return (-1);
	}
}
// System.Int32 LeoLuz.PlugAndPlayJoystick.AnalogicKnob::GetAnalogTouchFingerIDInsideArea(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnalogicKnob_GetAnalogTouchFingerIDInsideArea_m4BE52AD00E79D207DA508A388438374A80948A80 (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(id==-1)
		int32_t L_0 = ___id0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0006;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0006:
	{
		// return Input.GetTouch(id).fingerId;
		int32_t L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m0A47B1BBD339DD76BEAA8895BEE5B897BDDE16F3(L_1, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_0), NULL);
		return L_3;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.AnalogicKnob::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalogicKnob__ctor_mA912491C18C7AC453C3CEB68AE7F3BF53EFA94A8 (AnalogicKnob_tA82D1C330EF8B5E2E2C5BCAE754D199DCA2025FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string HorizontalAxis = "Horizontal";
		__this->___HorizontalAxis_5 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HorizontalAxis_5), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string VerticalAxis = "Vertical";
		__this->___VerticalAxis_6 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___VerticalAxis_6), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// public float TurnLimit = 107f;
		__this->___TurnLimit_8 = (107.0f);
		// public float ReturnSpeed = 10f;
		__this->___ReturnSpeed_10 = (10.0f);
		// public float fadeInDuration = 0.5f;
		__this->___fadeInDuration_12 = (0.5f);
		// public float fadeOutDuration = 2f;
		__this->___fadeOutDuration_13 = (2.0f);
		// public float StartFadeOutDuration = 5f;
		__this->___StartFadeOutDuration_14 = (5.0f);
		// private int InsideAreaFingerId = -1;
		__this->___InsideAreaFingerId_38 = (-1);
		ButtonBase__ctor_mDBF9FAC96B874B6DBBB8E95B46F79E03A1D06458(__this, NULL);
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
bool method_Invoke_m94088ED4EA4B7EA68320F0647396C20552E8C377_Multicast(method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* currentDelegate = reinterpret_cast<method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool method_Invoke_m94088ED4EA4B7EA68320F0647396C20552E8C377_OpenInst(method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___position0, method);
}
bool method_Invoke_m94088ED4EA4B7EA68320F0647396C20552E8C377_OpenStatic(method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___position0, method);
}
bool method_Invoke_m94088ED4EA4B7EA68320F0647396C20552E8C377_OpenStaticInvoker(method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(__this->___method_ptr_0, method, NULL, ___position0);
}
bool method_Invoke_m94088ED4EA4B7EA68320F0647396C20552E8C377_ClosedStaticInvoker(method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___position0);
}
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA (method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___position0);

	return static_cast<bool>(returnValue);
}
// System.Void LeoLuz.PlugAndPlayJoystick.AnalogicKnob/method::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void method__ctor_mA6485DACFA883E25D40A0CC225A35967CE0A8725 (method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&method_Invoke_m94088ED4EA4B7EA68320F0647396C20552E8C377_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&method_Invoke_m94088ED4EA4B7EA68320F0647396C20552E8C377_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&method_Invoke_m94088ED4EA4B7EA68320F0647396C20552E8C377_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&method_Invoke_m94088ED4EA4B7EA68320F0647396C20552E8C377_Multicast;
}
// System.Boolean LeoLuz.PlugAndPlayJoystick.AnalogicKnob/method::Invoke(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool method_Invoke_m94088ED4EA4B7EA68320F0647396C20552E8C377 (method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LeoLuz.PlugAndPlayJoystick.AnalogicKnob/method::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* method_BeginInvoke_m983C56A75BED54E8A14A599A1E7CFE438ACF001E (method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___position0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean LeoLuz.PlugAndPlayJoystick.AnalogicKnob/method::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool method_EndInvoke_m4373A3B4827CE6C87DC450BF0A4374FA7CBF771A (method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 LeoLuz.PlugAndPlayJoystick.TouchAbstraction::get_TouchCont()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TouchAbstraction_get_TouchCont_mA24BB271DBF7F1A34EB0E577367431455506A26B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Input.touchCount;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Input_get_touchCount_mC049740996B527F25BC9477CF8927481FA006F9E(NULL);
		return L_0;
	}
}
// UnityEngine.Touch LeoLuz.PlugAndPlayJoystick.TouchAbstraction::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 TouchAbstraction_GetTouch_m0D0A0EB6AF8F340C78FE374017471926AA371E5E (int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Input.GetTouch(id);
		int32_t L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m0A47B1BBD339DD76BEAA8895BEE5B897BDDE16F3(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Touch LeoLuz.PlugAndPlayJoystick.TouchAbstraction::GetTouchByFingerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 TouchAbstraction_GetTouchByFingerID_m240E332A9FFDA206D294D1C4AFDBC551E3180B6B (int32_t ___fingerID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (int i = 0; i < Input.touchCount; i++)
		V_0 = 0;
		goto IL_0020;
	}

IL_0004:
	{
		// if(Input.GetTouch(i).fingerId == fingerID)
		int32_t L_0 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m0A47B1BBD339DD76BEAA8895BEE5B897BDDE16F3(L_0, NULL);
		V_1 = L_1;
		int32_t L_2;
		L_2 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_1), NULL);
		int32_t L_3 = ___fingerID0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_001c;
		}
	}
	{
		// return Input.GetTouch(i);
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_5;
		L_5 = Input_GetTouch_m0A47B1BBD339DD76BEAA8895BEE5B897BDDE16F3(L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		// for (int i = 0; i < Input.touchCount; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0020:
	{
		// for (int i = 0; i < Input.touchCount; i++)
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Input_get_touchCount_mC049740996B527F25BC9477CF8927481FA006F9E(NULL);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// return new Touch();
		il2cpp_codegen_initobj((&V_1), sizeof(Touch_t03E51455ED508492B3F278903A0114FA0E87B417));
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_9 = V_1;
		return L_9;
	}
}
// UnityEngine.Touch LeoLuz.PlugAndPlayJoystick.TouchAbstraction::MakefakeTouchOnPc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 TouchAbstraction_MakefakeTouchOnPc_m3791BABB0D19783792B18D6C4368F968C03CF22E (const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417* G_B6_0 = NULL;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417* G_B1_0 = NULL;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417* G_B5_0 = NULL;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417* G_B2_0 = NULL;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417* G_B4_0 = NULL;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417* G_B3_0 = NULL;
	int32_t G_B7_0 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417* G_B7_1 = NULL;
	{
		// var touch = new Touch();
		il2cpp_codegen_initobj((&V_0), sizeof(Touch_t03E51455ED508492B3F278903A0114FA0E87B417));
		// touch.position = UnityEngine.Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_0, NULL);
		Touch_set_position_mF024C46352D1CB82991022138D48BC84D9248E6B((&V_0), L_1, NULL);
		// touch.phase =
		//     UnityEngine.Input.GetMouseButtonDown(0) ? TouchPhase.Began :
		//     UnityEngine.Input.GetMouseButtonUp(0) ? TouchPhase.Ended :
		//     UnityEngine.Input.GetMouseButton(0) ? TouchPhase.Moved :
		//     TouchPhase.Canceled;
		bool L_2;
		L_2 = Input_GetMouseButtonDown_m33522C56A54C402FE6DED802DD7E53435C27A5DE(0, NULL);
		G_B1_0 = (&V_0);
		if (L_2)
		{
			G_B6_0 = (&V_0);
			goto IL_003c;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B5_0 = G_B1_0;
			goto IL_0039;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		G_B3_0 = G_B2_0;
		if (L_4)
		{
			G_B4_0 = G_B2_0;
			goto IL_0036;
		}
	}
	{
		G_B7_0 = 4;
		G_B7_1 = G_B3_0;
		goto IL_003d;
	}

IL_0036:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B4_0;
		goto IL_003d;
	}

IL_0039:
	{
		G_B7_0 = 3;
		G_B7_1 = G_B5_0;
		goto IL_003d;
	}

IL_003c:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_003d:
	{
		Touch_set_phase_m47EEB383DD6F9EC6C4840B1F145D6818FCEBBD93(G_B7_1, G_B7_0, NULL);
		// return touch;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_5 = V_0;
		return L_5;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.TouchAbstraction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchAbstraction__ctor_mDA179E279B8CA02CD29D613BEDDA1E4EAFC78E42 (TouchAbstraction_t3124B5CF457EDC2FADFF709A9D33303A6FEF7877* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void LeoLuz.PlugAndPlayJoystick.ButtonBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonBase_Start_mCB4D3B282C3A0B7B3AE26232D6E39AC3E55317A1 (ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* __this, const RuntimeMethod* method) 
{
	{
		// initialize();
		ButtonBase_initialize_mE32B1C24F66066339EBBFCDC2CB19684439251EA(__this, NULL);
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.ButtonBase::initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonBase_initialize_mE32B1C24F66066339EBBFCDC2CB19684439251EA (ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAB4B4B1777E3EBF3D80585C59588BF84E2CCD3DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9989E615BA2B23CFCE438061CAD65811D322F822_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ButtonsList == null)
		List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B* L_0 = ((ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_StaticFields*)il2cpp_codegen_static_fields_for(ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_il2cpp_TypeInfo_var))->___ButtonsList_4;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// ButtonsList = new List<ButtonBase>();
		List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B* L_1 = (List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B*)il2cpp_codegen_object_new(List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m9989E615BA2B23CFCE438061CAD65811D322F822(L_1, List_1__ctor_m9989E615BA2B23CFCE438061CAD65811D322F822_RuntimeMethod_var);
		((ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_StaticFields*)il2cpp_codegen_static_fields_for(ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_il2cpp_TypeInfo_var))->___ButtonsList_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_StaticFields*)il2cpp_codegen_static_fields_for(ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_il2cpp_TypeInfo_var))->___ButtonsList_4), (void*)L_1);
	}

IL_0011:
	{
		// ButtonsList.Add(this);
		List_1_t3ECF554C0B794EFE11FF1C32389E10DD7041A85B* L_2 = ((ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_StaticFields*)il2cpp_codegen_static_fields_for(ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_il2cpp_TypeInfo_var))->___ButtonsList_4;
		NullCheck(L_2);
		List_1_Add_mAB4B4B1777E3EBF3D80585C59588BF84E2CCD3DD_inline(L_2, __this, List_1_Add_mAB4B4B1777E3EBF3D80585C59588BF84E2CCD3DD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.ButtonBase::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonBase_Disable_m3F6F4D93E5EB98D660C79E007D580E6120BF0B97 (ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_0 = NULL;
	{
		// var img = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		V_0 = L_0;
		// if (img != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// img.enabled = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = V_0;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.ButtonBase::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonBase_Enable_mFCCE6A28F06341FA522D392718219FB3F67ED496 (ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_0 = NULL;
	{
		// var img = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		V_0 = L_0;
		// if (img != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// img.enabled = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = V_0;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)1, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.ButtonBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonBase__ctor_mDBF9FAC96B874B6DBBB8E95B46F79E03A1D06458 (ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LeoLuz.PlugAndPlayJoystick.DisableOnOrientation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableOnOrientation_Update_m97CF39FA657CAC70E6D09BD51FBF51685DBEC3A8 (DisableOnOrientation_t9D7C6A429F9CCD34C3D93C7B1F076EFA44816865* __this, const RuntimeMethod* method) 
{
	{
		// if (!disabled)
		bool L_0 = __this->___disabled_5;
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// if (DisableOn == Orientation.portrait)
		int32_t L_1 = __this->___DisableOn_4;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (IsPortrait())
		bool L_2;
		L_2 = DisableOnOrientation_IsPortrait_m88051E731F89F5A657FF0F0941FAF3D4302071A0(__this, NULL);
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// disable();
		DisableOnOrientation_disable_mB128BA1515B6C8F53E5D03F819192E1B24CA8184(__this, NULL);
		return;
	}

IL_001f:
	{
		// if (!IsPortrait())
		bool L_3;
		L_3 = DisableOnOrientation_IsPortrait_m88051E731F89F5A657FF0F0941FAF3D4302071A0(__this, NULL);
		if (L_3)
		{
			goto IL_0053;
		}
	}
	{
		// disable();
		DisableOnOrientation_disable_mB128BA1515B6C8F53E5D03F819192E1B24CA8184(__this, NULL);
		return;
	}

IL_002e:
	{
		// if (DisableOn == Orientation.portrait)
		int32_t L_4 = __this->___DisableOn_4;
		if (L_4)
		{
			goto IL_0045;
		}
	}
	{
		// if (!IsPortrait())
		bool L_5;
		L_5 = DisableOnOrientation_IsPortrait_m88051E731F89F5A657FF0F0941FAF3D4302071A0(__this, NULL);
		if (L_5)
		{
			goto IL_0053;
		}
	}
	{
		// enable();
		DisableOnOrientation_enable_mEE360938D11E888E40602632B558CF2649B90214(__this, NULL);
		return;
	}

IL_0045:
	{
		// if (IsPortrait())
		bool L_6;
		L_6 = DisableOnOrientation_IsPortrait_m88051E731F89F5A657FF0F0941FAF3D4302071A0(__this, NULL);
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		// enable();
		DisableOnOrientation_enable_mEE360938D11E888E40602632B558CF2649B90214(__this, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Boolean LeoLuz.PlugAndPlayJoystick.DisableOnOrientation::IsPortrait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisableOnOrientation_IsPortrait_m88051E731F89F5A657FF0F0941FAF3D4302071A0 (DisableOnOrientation_t9D7C6A429F9CCD34C3D93C7B1F076EFA44816865* __this, const RuntimeMethod* method) 
{
	{
		// return UnityEngine.Input.deviceOrientation == DeviceOrientation.Portrait || UnityEngine.Input.deviceOrientation == DeviceOrientation.PortraitUpsideDown;
		int32_t L_0;
		L_0 = Input_get_deviceOrientation_m855C2F467D8AC32548379ADB232E4C36E25CFB7A(NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1;
		L_1 = Input_get_deviceOrientation_m855C2F467D8AC32548379ADB232E4C36E25CFB7A(NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}

IL_0011:
	{
		return (bool)1;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.DisableOnOrientation::disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableOnOrientation_disable_mB128BA1515B6C8F53E5D03F819192E1B24CA8184 (DisableOnOrientation_t9D7C6A429F9CCD34C3D93C7B1F076EFA44816865* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_m6AEE5D8DCF2DDD109A7C451750C4468879EEC2DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* V_0 = NULL;
	{
		// var btn = GetComponent<ButtonBase>();
		ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* L_0;
		L_0 = Component_GetComponent_TisButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_m6AEE5D8DCF2DDD109A7C451750C4468879EEC2DE(__this, Component_GetComponent_TisButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_m6AEE5D8DCF2DDD109A7C451750C4468879EEC2DE_RuntimeMethod_var);
		V_0 = L_0;
		// if (btn != null)
		ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// btn.Disable();
		ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* L_3 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(5 /* System.Void LeoLuz.PlugAndPlayJoystick.ButtonBase::Disable() */, L_3);
	}

IL_0016:
	{
		// disabled = true;
		__this->___disabled_5 = (bool)1;
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.DisableOnOrientation::enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableOnOrientation_enable_mEE360938D11E888E40602632B558CF2649B90214 (DisableOnOrientation_t9D7C6A429F9CCD34C3D93C7B1F076EFA44816865* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_m6AEE5D8DCF2DDD109A7C451750C4468879EEC2DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* V_0 = NULL;
	{
		// var btn = GetComponent<ButtonBase>();
		ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* L_0;
		L_0 = Component_GetComponent_TisButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_m6AEE5D8DCF2DDD109A7C451750C4468879EEC2DE(__this, Component_GetComponent_TisButtonBase_tC66445A490393168E31400773CE00C04503EB2B9_m6AEE5D8DCF2DDD109A7C451750C4468879EEC2DE_RuntimeMethod_var);
		V_0 = L_0;
		// if (btn != null)
		ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// btn.Enable();
		ButtonBase_tC66445A490393168E31400773CE00C04503EB2B9* L_3 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(6 /* System.Void LeoLuz.PlugAndPlayJoystick.ButtonBase::Enable() */, L_3);
	}

IL_0016:
	{
		// disabled = false;
		__this->___disabled_5 = (bool)0;
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.DisableOnOrientation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableOnOrientation__ctor_m52C95FA96D8F6520B00C75148DFEF3B457FF7CD6 (DisableOnOrientation_t9D7C6A429F9CCD34C3D93C7B1F076EFA44816865* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LeoLuz.PlugAndPlayJoystick.Swipe::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swipe_Start_mDC5D812FDA4EFF298F5B07257345F45893D36821 (Swipe_t489C7015150E8200842E94E49EA06894816EC555* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Input.RegisterAxisMobile(SwipeAxisHorizontal);
		String_t* L_0 = __this->___SwipeAxisHorizontal_4;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_RegisterAxisMobile_m844E606E77E2607FE43128B3BAD79B547948E288(L_0, NULL);
		// Input.RegisterAxisMobile(SwipeAxisVertical);
		String_t* L_1 = __this->___SwipeAxisVertical_5;
		Input_RegisterAxisMobile_m844E606E77E2607FE43128B3BAD79B547948E288(L_1, NULL);
		// Image image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		// Color _color = image.color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = L_2;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		V_0 = L_4;
		// _color.a = 0f;
		(&V_0)->___a_3 = (0.0f);
		// image.color = _color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_5);
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.Swipe::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swipe_Update_mC5EC1B9F708853DFEDAA9A569769A63D2A92D252 (Swipe_t489C7015150E8200842E94E49EA06894816EC555* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (pressed)
		bool L_0 = __this->___pressed_6;
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		// if (Input.touchCount > 0)
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Input_get_touchCount_mC049740996B527F25BC9477CF8927481FA006F9E(NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		// Touch AnalogTouch = Input.GetTouch(Input.touchCount-1);
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Input_get_touchCount_mC049740996B527F25BC9477CF8927481FA006F9E(NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_3;
		L_3 = Input_GetTouch_m0A47B1BBD339DD76BEAA8895BEE5B897BDDE16F3(((int32_t)il2cpp_codegen_subtract(L_2, 1)), NULL);
		V_1 = L_3;
		// ResultPosition = (Vector2)AnalogTouch.position - StartPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___StartPosition_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_0033;
	}

IL_0032:
	{
		// return;
		return;
	}

IL_0033:
	{
		// Input.PressButtonMobile(SwipeAxisHorizontal);
		String_t* L_7 = __this->___SwipeAxisHorizontal_4;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonMobile_m7B66CEF45F4A55FE447F88C4160F98A54890794E(L_7, NULL);
		// Input.PressButtonMobile(SwipeAxisVertical);
		String_t* L_8 = __this->___SwipeAxisVertical_5;
		Input_PressButtonMobile_m7B66CEF45F4A55FE447F88C4160F98A54890794E(L_8, NULL);
		// Input.SetAxisMobile(SwipeAxisHorizontal, ResultPosition.x);
		String_t* L_9 = __this->___SwipeAxisHorizontal_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___x_0;
		Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089(L_9, L_11, NULL);
		// Input.SetAxisMobile(SwipeAxisVertical, ResultPosition.y);
		String_t* L_12 = __this->___SwipeAxisVertical_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___y_1;
		Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089(L_12, L_14, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.Swipe::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swipe_OnPointerDown_m86C0AF2876B838ED40331E93AB9BAB09B419444B (Swipe_t489C7015150E8200842E94E49EA06894816EC555* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Input.PressButtonDownMobile(SwipeAxisHorizontal);
		String_t* L_0 = __this->___SwipeAxisHorizontal_4;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonDownMobile_m55DCF551B9EED85971C5D73CE7E679455CDBC9DC(L_0, NULL);
		// Input.SetAxisMobile(SwipeAxisHorizontal, 0f);
		String_t* L_1 = __this->___SwipeAxisHorizontal_4;
		Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089(L_1, (0.0f), NULL);
		// Input.PressButtonDownMobile(SwipeAxisVertical);
		String_t* L_2 = __this->___SwipeAxisVertical_5;
		Input_PressButtonDownMobile_m55DCF551B9EED85971C5D73CE7E679455CDBC9DC(L_2, NULL);
		// Input.SetAxisMobile(SwipeAxisVertical, 0f);
		String_t* L_3 = __this->___SwipeAxisVertical_5;
		Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089(L_3, (0.0f), NULL);
		// pressed = true;
		__this->___pressed_6 = (bool)1;
		// if (Input.touchCount > 0)
		int32_t L_4;
		L_4 = Input_get_touchCount_mC049740996B527F25BC9477CF8927481FA006F9E(NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		// Touch AnalogTouch = Input.GetTouch(Input.touchCount-1);
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Input_get_touchCount_mC049740996B527F25BC9477CF8927481FA006F9E(NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_6;
		L_6 = Input_GetTouch_m0A47B1BBD339DD76BEAA8895BEE5B897BDDE16F3(((int32_t)il2cpp_codegen_subtract(L_5, 1)), NULL);
		V_0 = L_6;
		// StartPosition = (Vector2)AnalogTouch.position - StartPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___StartPosition_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_7, L_8, NULL);
		__this->___StartPosition_7 = L_9;
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.Swipe::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swipe_OnPointerUp_mE98EA4A7B245A19009AA30C090E5614FB19C9ADD (Swipe_t489C7015150E8200842E94E49EA06894816EC555* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// pressed = false;
		__this->___pressed_6 = (bool)0;
		// if (Input.touchCount > 0)
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Input_get_touchCount_mC049740996B527F25BC9477CF8927481FA006F9E(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// Touch AnalogTouch = Input.GetTouch(Input.touchCount-1);
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Input_get_touchCount_mC049740996B527F25BC9477CF8927481FA006F9E(NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m0A47B1BBD339DD76BEAA8895BEE5B897BDDE16F3(((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		V_1 = L_2;
		// ResultPosition = (Vector2)AnalogTouch.position - StartPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___StartPosition_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0032;
	}

IL_0031:
	{
		// return;
		return;
	}

IL_0032:
	{
		// this.AxisResult = ResultPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		__this->___AxisResult_8 = L_6;
		// Input.PressButtonUpMobile(SwipeAxisHorizontal);
		String_t* L_7 = __this->___SwipeAxisHorizontal_4;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonUpMobile_mD456E7AC1FE5FD38CDFAB0FE158D0419EAB3F8D1(L_7, NULL);
		// Input.PressButtonUpMobile(SwipeAxisVertical);
		String_t* L_8 = __this->___SwipeAxisVertical_5;
		Input_PressButtonUpMobile_mD456E7AC1FE5FD38CDFAB0FE158D0419EAB3F8D1(L_8, NULL);
		// Input.SetAxisMobile(SwipeAxisHorizontal, ResultPosition.x);
		String_t* L_9 = __this->___SwipeAxisHorizontal_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___x_0;
		Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089(L_9, L_11, NULL);
		// Input.SetAxisMobile(SwipeAxisVertical, ResultPosition.y);
		String_t* L_12 = __this->___SwipeAxisVertical_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		float L_14 = L_13.___y_1;
		Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089(L_12, L_14, NULL);
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.Swipe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Swipe__ctor_m533E20FAC129878CD67096F9A9ED2E7AF27395B1 (Swipe_t489C7015150E8200842E94E49EA06894816EC555* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string SwipeAxisHorizontal = "Horizontal";
		__this->___SwipeAxisHorizontal_4 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SwipeAxisHorizontal_4), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// public string SwipeAxisVertical = "Vertical";
		__this->___SwipeAxisVertical_5 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SwipeAxisVertical_5), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToAxis::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToAxis_Start_m3334BDB13DCD9D2CDFC1A15823CE44E66C9361AD (UIButtonToAxis_tC694EA41B62AD65581481F2B7FCCD8DA97CBB68E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		ButtonBase_Start_mCB4D3B282C3A0B7B3AE26232D6E39AC3E55317A1(__this, NULL);
		// Input.RegisterAxisMobile(AxisName);
		String_t* L_0 = __this->___AxisName_5;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_RegisterAxisMobile_m844E606E77E2607FE43128B3BAD79B547948E288(L_0, NULL);
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToAxis::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToAxis_FixedUpdate_mE8D5D9128A54DB82D6312BAEEC751D70F1AD8A0F (UIButtonToAxis_tC694EA41B62AD65581481F2B7FCCD8DA97CBB68E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pressed)
		bool L_0 = __this->___pressed_8;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// Input.PressButtonMobile(AxisName);
		String_t* L_1 = __this->___AxisName_5;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonMobile_m7B66CEF45F4A55FE447F88C4160F98A54890794E(L_1, NULL);
		// CurrentValue = Value;
		float L_2 = __this->___Value_6;
		__this->___CurrentValue_7 = L_2;
		// Input.SetAxisMobile(AxisName, CurrentValue);
		String_t* L_3 = __this->___AxisName_5;
		float L_4 = __this->___CurrentValue_7;
		Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089(L_3, L_4, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToAxis::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToAxis_OnPointerDown_mA4007E57B4951A7C082DC0D6FD981619B530AC36 (UIButtonToAxis_tC694EA41B62AD65581481F2B7FCCD8DA97CBB68E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Input.PressButtonDownMobile(AxisName);
		String_t* L_0 = __this->___AxisName_5;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonDownMobile_m55DCF551B9EED85971C5D73CE7E679455CDBC9DC(L_0, NULL);
		// CurrentValue = Value;
		float L_1 = __this->___Value_6;
		__this->___CurrentValue_7 = L_1;
		// Input.SetAxisMobile(AxisName, CurrentValue);
		String_t* L_2 = __this->___AxisName_5;
		float L_3 = __this->___CurrentValue_7;
		Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089(L_2, L_3, NULL);
		// pressed = true;
		__this->___pressed_8 = (bool)1;
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToAxis::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToAxis_OnPointerUp_m2EEA37DF6BEFD389FF56A06404D2CB1FB678C9EA (UIButtonToAxis_tC694EA41B62AD65581481F2B7FCCD8DA97CBB68E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pressed = false;
		__this->___pressed_8 = (bool)0;
		// Input.PressButtonUpMobile(AxisName);
		String_t* L_0 = __this->___AxisName_5;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonUpMobile_mD456E7AC1FE5FD38CDFAB0FE158D0419EAB3F8D1(L_0, NULL);
		// CurrentValue = 0f;
		__this->___CurrentValue_7 = (0.0f);
		// Input.SetAxisMobile(AxisName, CurrentValue);
		String_t* L_1 = __this->___AxisName_5;
		float L_2 = __this->___CurrentValue_7;
		Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToAxis::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToAxis_OnPointerEnter_m3B6FD3C2F61049EF01D32F157DBD6B3B6CB811FE (UIButtonToAxis_tC694EA41B62AD65581481F2B7FCCD8DA97CBB68E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Input.PressButtonDownMobile(AxisName);
		String_t* L_0 = __this->___AxisName_5;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonDownMobile_m55DCF551B9EED85971C5D73CE7E679455CDBC9DC(L_0, NULL);
		// CurrentValue = Value;
		float L_1 = __this->___Value_6;
		__this->___CurrentValue_7 = L_1;
		// Input.SetAxisMobile(AxisName, CurrentValue);
		String_t* L_2 = __this->___AxisName_5;
		float L_3 = __this->___CurrentValue_7;
		Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089(L_2, L_3, NULL);
		// pressed = true;
		__this->___pressed_8 = (bool)1;
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToAxis::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToAxis_OnPointerExit_m498E53FA5EBDADF47F6B5FFF34C301A98A756CC9 (UIButtonToAxis_tC694EA41B62AD65581481F2B7FCCD8DA97CBB68E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pressed = false;
		__this->___pressed_8 = (bool)0;
		// Input.PressButtonUpMobile(AxisName);
		String_t* L_0 = __this->___AxisName_5;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonUpMobile_mD456E7AC1FE5FD38CDFAB0FE158D0419EAB3F8D1(L_0, NULL);
		// CurrentValue = 0f;
		__this->___CurrentValue_7 = (0.0f);
		// Input.SetAxisMobile(AxisName, CurrentValue);
		String_t* L_1 = __this->___AxisName_5;
		float L_2 = __this->___CurrentValue_7;
		Input_SetAxisMobile_m9716A91D25C3F59AD979FA4CD2FD211F31546089(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToAxis::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToAxis__ctor_m08984E72CBDBDF95A192768F6EC4DF6DDFB5B76F (UIButtonToAxis_tC694EA41B62AD65581481F2B7FCCD8DA97CBB68E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string AxisName="Horizontal";
		__this->___AxisName_5 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AxisName_5), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		ButtonBase__ctor_mDBF9FAC96B874B6DBBB8E95B46F79E03A1D06458(__this, NULL);
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
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToButton_Start_mD2C489AE25D37E37393F477BD9734A04F003B19C (UIButtonToButton_tFDD265126FDA37B7E8604AF6EF64DB25EEB385C3* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		ButtonBase_Start_mCB4D3B282C3A0B7B3AE26232D6E39AC3E55317A1(__this, NULL);
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToButton_Update_m9DED4EA54107DFD336888582C4560AEC032CDC3E (UIButtonToButton_tFDD265126FDA37B7E8604AF6EF64DB25EEB385C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pressed)
		bool L_0 = __this->___pressed_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Input.PressButtonMobile(ButtonName);
		String_t* L_1 = __this->___ButtonName_5;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonMobile_m7B66CEF45F4A55FE447F88C4160F98A54890794E(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToButton::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToButton_FixedUpdate_m7FFA7ECFE20C88567BDC204CDFC7BF0B90434885 (UIButtonToButton_tFDD265126FDA37B7E8604AF6EF64DB25EEB385C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pressed)
		bool L_0 = __this->___pressed_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Input.PressButtonMobile(ButtonName);
		String_t* L_1 = __this->___ButtonName_5;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonMobile_m7B66CEF45F4A55FE447F88C4160F98A54890794E(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToButton::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToButton_LateUpdate_m61510EDB0D763036CA4B104F06557A0B8BFAEE00 (UIButtonToButton_tFDD265126FDA37B7E8604AF6EF64DB25EEB385C3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToButton_OnPointerDown_m42BECE5D08A0A21CF23978028D5D7417FED5964F (UIButtonToButton_tFDD265126FDA37B7E8604AF6EF64DB25EEB385C3* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pressed = true;
		__this->___pressed_6 = (bool)1;
		// Input.PressButtonDownMobile(ButtonName);
		String_t* L_0 = __this->___ButtonName_5;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonDownMobile_m55DCF551B9EED85971C5D73CE7E679455CDBC9DC(L_0, NULL);
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToButton_OnPointerUp_mDF16F081C02343E8FCEBC26541BBD7D84A9C1D1A (UIButtonToButton_tFDD265126FDA37B7E8604AF6EF64DB25EEB385C3* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pressed = false;
		__this->___pressed_6 = (bool)0;
		// Input.PressButtonUpMobile(ButtonName);
		String_t* L_0 = __this->___ButtonName_5;
		il2cpp_codegen_runtime_class_init_inline(Input_t38C1298A9DCAB72BD32A1C1A0905090FC5B34B8F_il2cpp_TypeInfo_var);
		Input_PressButtonUpMobile_mD456E7AC1FE5FD38CDFAB0FE158D0419EAB3F8D1(L_0, NULL);
		// }
		return;
	}
}
// System.Void LeoLuz.PlugAndPlayJoystick.UIButtonToButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIButtonToButton__ctor_mADBF168050529BFFF87E07BB31675E66AE150E8E (UIButtonToButton_tFDD265126FDA37B7E8604AF6EF64DB25EEB385C3* __this, const RuntimeMethod* method) 
{
	{
		ButtonBase__ctor_mDBF9FAC96B874B6DBBB8E95B46F79E03A1D06458(__this, NULL);
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
// System.Void LeoLuz.PropertyAttributes.hideIf::.ctor(System.String,System.Object,System.Boolean,System.Boolean,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hideIf__ctor_mF40EC98F325D185AEA00A98DEAEFB27C0ABC9EB4 (hideIf_t9F94EF784B2477A6E771EF6F7BD73A28F1749CC8* __this, String_t* ___varToCheck0, RuntimeObject* ___ValueToCheck1, bool ___drawNextInThisLine2, bool ___readOnly3, float ___labelWidth4, float ___valueWidth5, const RuntimeMethod* method) 
{
	{
		// public hideIf(string varToCheck, object ValueToCheck, bool drawNextInThisLine = true, bool readOnly = false, float labelWidth = 0, float valueWidth = 0)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.varName = varToCheck;
		String_t* L_0 = ___varToCheck0;
		__this->___varName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___varName_0), (void*)L_0);
		// this.value = ValueToCheck;
		RuntimeObject* L_1 = ___ValueToCheck1;
		__this->___value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_1), (void*)L_1);
		// this.skipLine = drawNextInThisLine;
		bool L_2 = ___drawNextInThisLine2;
		__this->___skipLine_2 = L_2;
		// this.readOnly = readOnly;
		bool L_3 = ___readOnly3;
		__this->___readOnly_3 = L_3;
		// this.labelWidth = labelWidth;
		float L_4 = ___labelWidth4;
		__this->___labelWidth_4 = L_4;
		// this.valueWidth = valueWidth;
		float L_5 = ___valueWidth5;
		__this->___valueWidth_5 = L_5;
		// }
		return;
	}
}
// System.Void LeoLuz.PropertyAttributes.hideIf::.ctor(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hideIf__ctor_m62491FAC8A89529D4A1C4AE16C08751BD500D7CE (hideIf_t9F94EF784B2477A6E771EF6F7BD73A28F1749CC8* __this, String_t* ___varToCheck0, RuntimeObject* ___ValueToCheck1, bool ___withMold2, const RuntimeMethod* method) 
{
	{
		// public hideIf(string varToCheck, object ValueToCheck, bool withMold)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.varName = varToCheck;
		String_t* L_0 = ___varToCheck0;
		__this->___varName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___varName_0), (void*)L_0);
		// this.value = ValueToCheck;
		RuntimeObject* L_1 = ___ValueToCheck1;
		__this->___value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_1), (void*)L_1);
		// this.withMold = withMold;
		bool L_2 = ___withMold2;
		__this->___withMold_6 = L_2;
		// }
		return;
	}
}
// System.Void LeoLuz.PropertyAttributes.hideIf::.ctor(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hideIf__ctor_mCB74C3F9040CC9DDE80351F05E0F4A5E5CBA1EA7 (hideIf_t9F94EF784B2477A6E771EF6F7BD73A28F1749CC8* __this, String_t* ___value0, float ___labelWidth1, float ___valueWidth2, const RuntimeMethod* method) 
{
	{
		// public hideIf(string value, float labelWidth = 0, float valueWidth = 0)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.value = value;
		String_t* L_0 = ___value0;
		__this->___value_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_1), (void*)L_0);
		// this.labelWidth = labelWidth;
		float L_1 = ___labelWidth1;
		__this->___labelWidth_4 = L_1;
		// this.valueWidth = valueWidth;
		float L_2 = ___valueWidth2;
		__this->___valueWidth_5 = L_2;
		// }
		return;
	}
}
// System.Void LeoLuz.PropertyAttributes.hideIf::.ctor(System.String,System.Object,System.Single,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hideIf__ctor_m6293FF4BD4A05A2632A012BDD6E2473DF1B449E5 (hideIf_t9F94EF784B2477A6E771EF6F7BD73A28F1749CC8* __this, String_t* ___varToCheck0, RuntimeObject* ___ValueToCheck1, float ___labelWidth2, float ___valueWidth3, bool ___drawNextInThisLine4, bool ___readOnly5, const RuntimeMethod* method) 
{
	{
		// public hideIf(string varToCheck, object ValueToCheck, float labelWidth, float valueWidth, bool drawNextInThisLine = true, bool readOnly = false)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.varName = varToCheck;
		String_t* L_0 = ___varToCheck0;
		__this->___varName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___varName_0), (void*)L_0);
		// this.value = ValueToCheck;
		RuntimeObject* L_1 = ___ValueToCheck1;
		__this->___value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_1), (void*)L_1);
		// this.skipLine = drawNextInThisLine;
		bool L_2 = ___drawNextInThisLine4;
		__this->___skipLine_2 = L_2;
		// this.readOnly = readOnly;
		bool L_3 = ___readOnly5;
		__this->___readOnly_3 = L_3;
		// this.labelWidth = labelWidth;
		float L_4 = ___labelWidth2;
		__this->___labelWidth_4 = L_4;
		// this.valueWidth = valueWidth;
		float L_5 = ___valueWidth3;
		__this->___valueWidth_5 = L_5;
		// }
		return;
	}
}
// System.Boolean LeoLuz.PropertyAttributes.hideIf::CheckHided(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool hideIf_CheckHided_mEFEBA9953500BCFB5A811604E5628FDDA464700D (hideIf_t9F94EF784B2477A6E771EF6F7BD73A28F1749CC8* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t880CD44A8D6D8FE691C7045C3C7FFD42DD729B1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (parent == null)
		RuntimeObject* L_0 = ___parent0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0005:
	{
		// if (hideList == null || !hideList.ContainsKey(parent))
		RuntimeObject* L_1 = __this->___hideList_7;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_2 = __this->___hideList_7;
		RuntimeObject* L_3 = ___parent0;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t880CD44A8D6D8FE691C7045C3C7FFD42DD729B1A_il2cpp_TypeInfo_var, L_2, L_3);
		if (L_4)
		{
			goto IL_001d;
		}
	}

IL_001b:
	{
		// return false;
		return (bool)0;
	}

IL_001d:
	{
		// return hideList[parent];
		RuntimeObject* L_5 = __this->___hideList_7;
		RuntimeObject* L_6 = ___parent0;
		NullCheck(L_5);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::get_Item(TKey) */, IDictionary_2_t880CD44A8D6D8FE691C7045C3C7FFD42DD729B1A_il2cpp_TypeInfo_var, L_5, L_6);
		return L_7;
	}
}
// System.Void LeoLuz.PropertyAttributes.hideIf::hide(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hideIf_hide_mF167943AB7E8ECB92920188D090E770B5C103FAF (hideIf_t9F94EF784B2477A6E771EF6F7BD73A28F1749CC8* __this, RuntimeObject* ___prop0, bool ___hided1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t880CD44A8D6D8FE691C7045C3C7FFD42DD729B1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hideList == null)
		RuntimeObject* L_0 = __this->___hideList_7;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// hideList = new Dictionary<object, bool>();
		Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36* L_1 = (Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36*)il2cpp_codegen_object_new(Dictionary_2_tDBC7BB75C617E4886F85171F2758C7996F98EC36_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454(L_1, Dictionary_2__ctor_m0D0F99974D7435C4E08FE9A9A632C9E5430F8454_RuntimeMethod_var);
		__this->___hideList_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hideList_7), (void*)L_1);
	}

IL_0013:
	{
		// if (hideList.ContainsKey(prop))
		RuntimeObject* L_2 = __this->___hideList_7;
		RuntimeObject* L_3 = ___prop0;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t880CD44A8D6D8FE691C7045C3C7FFD42DD729B1A_il2cpp_TypeInfo_var, L_2, L_3);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// hideList[prop] = hided;
		RuntimeObject* L_5 = __this->___hideList_7;
		RuntimeObject* L_6 = ___prop0;
		bool L_7 = ___hided1;
		NullCheck(L_5);
		InterfaceActionInvoker2< RuntimeObject*, bool >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue) */, IDictionary_2_t880CD44A8D6D8FE691C7045C3C7FFD42DD729B1A_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		return;
	}

IL_002f:
	{
		// hideList.Add(prop, hided);
		RuntimeObject* L_8 = __this->___hideList_7;
		RuntimeObject* L_9 = ___prop0;
		bool L_10 = ___hided1;
		NullCheck(L_8);
		InterfaceActionInvoker2< RuntimeObject*, bool >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::Add(TKey,TValue) */, IDictionary_2_t880CD44A8D6D8FE691C7045C3C7FFD42DD729B1A_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		// }
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
// System.Void LeoLuz.PropertyAttributes.InputAxesListDropdownAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAxesListDropdownAttribute__ctor_mCAC216FEF53C34C38345A1CE3E62030C002EBB44 (InputAxesListDropdownAttribute_t38BBE68113E6CD4014583E03BFEDBD24C1DFAF34* __this, bool ___hideLabel0, const RuntimeMethod* method) 
{
	{
		// public InputAxesListDropdownAttribute(bool hideLabel = false)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.hideLabel = hideLabel;
		bool L_0 = ___hideLabel0;
		__this->___hideLabel_0 = L_0;
		// }
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
// System.Void LeoLuz.PropertyAttributes.LargeHeader::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LargeHeader__ctor_mDCE09660F3902A44A22567AEA1B6129FBCC046DB (LargeHeader_tB56E924FC13B98ECAF758F1B7E25D439C3A3CA66* __this, String_t* ___name0, String_t* ____color1, int32_t ___size2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD4B826C3F4FDA02D7CF7952E56196CD40D95C4B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string color = "white";
		__this->___color_1 = _stringLiteralFD4B826C3F4FDA02D7CF7952E56196CD40D95C4B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___color_1), (void*)_stringLiteralFD4B826C3F4FDA02D7CF7952E56196CD40D95C4B);
		// public LargeHeader (string name, string _color = "cyan", int size = 17) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// this.name = name;
		String_t* L_0 = ___name0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		// this.color = _color;
		String_t* L_1 = ____color1;
		__this->___color_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___color_1), (void*)L_1);
		// this.Size = size;
		int32_t L_2 = ___size2;
		__this->___Size_2 = L_2;
		// }
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
// System.Void LeoLuz.PropertyAttributes.ReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyAttribute__ctor_m9EF5D21EB992D448A2484551A7B5F44E77AEE8B9 (ReadOnlyAttribute_tD56A36591272FEF50390AA22859E1CB5C56C85CE* __this, const RuntimeMethod* method) 
{
	{
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
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
// System.Void LeoLuz.PropertyAttributes.ReadOnlyInPlayModeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyInPlayModeAttribute__ctor_m0024FE6B3D686566398701BD405CC8296F35DC7A (ReadOnlyInPlayModeAttribute_tAE9FF7A35D0E1B48E53D3039FD2E6BDCEAF35D14* __this, const RuntimeMethod* method) 
{
	{
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
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
// UnityEngine.Vector3 LeoLuz.Extensions.CanvasExtension::CanvasPositionToWorldPosition(UnityEngine.Canvas,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CanvasExtension_CanvasPositionToWorldPosition_m261941F26BE95C281B0CF794EBDCA3233C7AC28B (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	{
		// RectTransform CanvasRect = canvas.GetComponent<RectTransform>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = ___canvas0;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_0, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		V_0 = L_1;
		// return (position * CanvasRect.localScale.x) + canvas.transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = V_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_3, NULL);
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_5, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7 = ___canvas0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_9, NULL);
		return L_10;
	}
}
// UnityEngine.Vector3 LeoLuz.Extensions.CanvasExtension::WorldPositionToCanvasPosition(UnityEngine.Canvas,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CanvasExtension_WorldPositionToCanvasPosition_m661CCE0E6F21D5C87862FCEA5A421557893AD9E7 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	{
		// RectTransform CanvasRect = canvas.GetComponent<RectTransform>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = ___canvas0;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_0, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		V_0 = L_1;
		// var relativePos = position - canvas.transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position1;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = ___canvas0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_5, NULL);
		// return (relativePos / CanvasRect.localScale.x);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = V_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_7, NULL);
		float L_9 = L_8.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_6, L_9, NULL);
		return L_10;
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
// UnityEngine.WaitForSecondsRealtime LeoLuz.Extensions.UIExtensions::FadeIn(UnityEngine.UI.Graphic,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* UIExtensions_FadeIn_m0F8B3C1099864E46B4927045F138645847FF8D12 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___obj0, float ___duration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.StopAllCoroutines();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___obj0;
		NullCheck(L_0);
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(L_0, NULL);
		// obj.StartCoroutine(FadeInCo(obj, duration));
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1 = ___obj0;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_2 = ___obj0;
		float L_3 = ___duration1;
		RuntimeObject* L_4;
		L_4 = UIExtensions_FadeInCo_mB17FA4C16B7242F845C11FF2F58BDB75A6B26BBE(L_2, L_3, NULL);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_4, NULL);
		// return new WaitForSecondsRealtime(duration);
		float L_6 = ___duration1;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_7 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_7, L_6, NULL);
		return L_7;
	}
}
// System.Collections.IEnumerator LeoLuz.Extensions.UIExtensions::FadeInCo(UnityEngine.UI.Graphic,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIExtensions_FadeInCo_mB17FA4C16B7242F845C11FF2F58BDB75A6B26BBE (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___obj0, float ___duration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C* L_0 = (U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C*)il2cpp_codegen_object_new(U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInCoU3Ed__1__ctor_mAF5715ED2C4AA26CCA23A57CA430F7592588CA86(L_0, 0, NULL);
		U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C* L_1 = L_0;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_2 = ___obj0;
		NullCheck(L_1);
		L_1->___obj_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___obj_2), (void*)L_2);
		U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C* L_3 = L_1;
		float L_4 = ___duration1;
		NullCheck(L_3);
		L_3->___duration_3 = L_4;
		return L_3;
	}
}
// UnityEngine.WaitForSecondsRealtime LeoLuz.Extensions.UIExtensions::FadeOut(UnityEngine.UI.Graphic,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* UIExtensions_FadeOut_m0658F78F02F951A817AA50EB990FD4D8F759270A (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___obj0, float ___duration1, bool ___disableOnExit2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.StartCoroutine(FadeOutCo(obj, duration, disableOnExit));
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___obj0;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1 = ___obj0;
		float L_2 = ___duration1;
		bool L_3 = ___disableOnExit2;
		RuntimeObject* L_4;
		L_4 = UIExtensions_FadeOutCo_m7DED35ACA93A9DE67AE793AE4D036380C4C1D184(L_1, L_2, L_3, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_4, NULL);
		// return new WaitForSecondsRealtime(duration);
		float L_6 = ___duration1;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_7 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_7, L_6, NULL);
		return L_7;
	}
}
// System.Collections.IEnumerator LeoLuz.Extensions.UIExtensions::FadeOutCo(UnityEngine.UI.Graphic,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIExtensions_FadeOutCo_m7DED35ACA93A9DE67AE793AE4D036380C4C1D184 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___obj0, float ___duration1, bool ___disableOnExit2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E* L_0 = (U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E*)il2cpp_codegen_object_new(U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeOutCoU3Ed__3__ctor_m1F6FC584E4582BB9BDC3C824A2C53E05FCE12392(L_0, 0, NULL);
		U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E* L_1 = L_0;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_2 = ___obj0;
		NullCheck(L_1);
		L_1->___obj_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___obj_3), (void*)L_2);
		U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E* L_3 = L_1;
		float L_4 = ___duration1;
		NullCheck(L_3);
		L_3->___duration_2 = L_4;
		U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E* L_5 = L_3;
		bool L_6 = ___disableOnExit2;
		NullCheck(L_5);
		L_5->___disableOnExit_4 = L_6;
		return L_5;
	}
}
// System.Void LeoLuz.Extensions.UIExtensions::SetAlpha(UnityEngine.UI.Graphic,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIExtensions_SetAlpha_mC7A4200670B1A5BE491A4EA9E423E29ABEEF6B46 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___obj0, float ___alpha1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color color = obj.color;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___obj0;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		V_0 = L_1;
		// color.a = alpha;
		float L_2 = ___alpha1;
		(&V_0)->___a_3 = L_2;
		// obj.color = color;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_3 = ___obj0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// }
		return;
	}
}
// UnityEngine.WaitForSecondsRealtime LeoLuz.Extensions.UIExtensions::FadeIn(UnityEngine.CanvasGroup,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* UIExtensions_FadeIn_m22C340820618DC044AE02578BA35A7B51119A564 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___obj0, float ___duration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F060E10BF2EECADD8A840E0BB62862B69D7344E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("FadeIn canvas");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9F060E10BF2EECADD8A840E0BB62862B69D7344E, NULL);
		// obj.GetComponent<MonoBehaviour>().StartCoroutine(FadeInCo(obj, duration));
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = ___obj0;
		NullCheck(L_0);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1;
		L_1 = Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C(L_0, Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C_RuntimeMethod_var);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = ___obj0;
		float L_3 = ___duration1;
		RuntimeObject* L_4;
		L_4 = UIExtensions_FadeInCo_mF1197DFC1B04AFAF90420A05420C812EF9B65645(L_2, L_3, NULL);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_4, NULL);
		// return new WaitForSecondsRealtime(duration);
		float L_6 = ___duration1;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_7 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_7, L_6, NULL);
		return L_7;
	}
}
// System.Collections.IEnumerator LeoLuz.Extensions.UIExtensions::FadeInCo(UnityEngine.CanvasGroup,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIExtensions_FadeInCo_mF1197DFC1B04AFAF90420A05420C812EF9B65645 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___obj0, float ___duration1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6* L_0 = (U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6*)il2cpp_codegen_object_new(U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInCoU3Ed__6__ctor_m2AF50298F4F258DE6D04D7335C170D2BDEC7E731(L_0, 0, NULL);
		U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6* L_1 = L_0;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = ___obj0;
		NullCheck(L_1);
		L_1->___obj_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___obj_2), (void*)L_2);
		U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6* L_3 = L_1;
		float L_4 = ___duration1;
		NullCheck(L_3);
		L_3->___duration_3 = L_4;
		return L_3;
	}
}
// UnityEngine.WaitForSecondsRealtime LeoLuz.Extensions.UIExtensions::Pulse(UnityEngine.CanvasGroup,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* UIExtensions_Pulse_m0241C95101BA06863281C2711C949E26663C7440 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___obj0, float ___size1, float ___duration2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.GetComponent<MonoBehaviour>().StartCoroutine(PulseCo(obj.GetComponent<Transform>(), obj.transform.localScale, size, duration));
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_0 = ___obj0;
		NullCheck(L_0);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1;
		L_1 = Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C(L_0, Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C_RuntimeMethod_var);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = ___obj0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(L_2, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_4 = ___obj0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = ___size1;
		float L_8 = ___duration2;
		RuntimeObject* L_9;
		L_9 = UIExtensions_PulseCo_m9A1C35B1F4BCA2A11CB7A1A60B9056F10D12632E(L_3, L_6, L_7, L_8, NULL);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_9, NULL);
		// return new WaitForSecondsRealtime(duration);
		float L_11 = ___duration2;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_12 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_12, L_11, NULL);
		return L_12;
	}
}
// UnityEngine.WaitForSecondsRealtime LeoLuz.Extensions.UIExtensions::Pulse(UnityEngine.RectTransform,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* UIExtensions_Pulse_mE4CD3BACD272820E1A4EE0DA212BC40AFF8E4DC3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___obj0, float ___PulseSize1, float ___duration2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.GetComponent<MonoBehaviour>().StartCoroutine(PulseCo(obj.GetComponent<Transform>(), obj.transform.localScale, PulseSize, duration));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___obj0;
		NullCheck(L_0);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1;
		L_1 = Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C(L_0, Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C_RuntimeMethod_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___obj0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(L_2, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ___obj0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_5, NULL);
		float L_7 = ___PulseSize1;
		float L_8 = ___duration2;
		RuntimeObject* L_9;
		L_9 = UIExtensions_PulseCo_m9A1C35B1F4BCA2A11CB7A1A60B9056F10D12632E(L_3, L_6, L_7, L_8, NULL);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_9, NULL);
		// return new WaitForSecondsRealtime(duration);
		float L_11 = ___duration2;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_12 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_12, L_11, NULL);
		return L_12;
	}
}
// UnityEngine.WaitForSecondsRealtime LeoLuz.Extensions.UIExtensions::Pulse(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* UIExtensions_Pulse_mD184752A3403D5D0CA3FD186C446D4DA18FD37D6 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___obj0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startSize1, float ___PulseSize2, float ___duration3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.GetComponent<MonoBehaviour>().StartCoroutine(PulseCo(obj.GetComponent<Transform>(), startSize, PulseSize, duration));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___obj0;
		NullCheck(L_0);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1;
		L_1 = Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C(L_0, Component_GetComponent_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_m0A5A692BE2216CAA0D6FAABC738B99472223E50C_RuntimeMethod_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___obj0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(L_2, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___startSize1;
		float L_5 = ___PulseSize2;
		float L_6 = ___duration3;
		RuntimeObject* L_7;
		L_7 = UIExtensions_PulseCo_m9A1C35B1F4BCA2A11CB7A1A60B9056F10D12632E(L_3, L_4, L_5, L_6, NULL);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_7, NULL);
		// return new WaitForSecondsRealtime(duration);
		float L_9 = ___duration3;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_10 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_10, L_9, NULL);
		return L_10;
	}
}
// System.Collections.IEnumerator LeoLuz.Extensions.UIExtensions::PulseCo(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIExtensions_PulseCo_m9A1C35B1F4BCA2A11CB7A1A60B9056F10D12632E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___obj0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startSize1, float ___size2, float ___duration3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C* L_0 = (U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C*)il2cpp_codegen_object_new(U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPulseCoU3Ed__10__ctor_mB4CA1C5615C268F12575EDB793F20B0B34ADE7B4(L_0, 0, NULL);
		U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C* L_1 = L_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___obj0;
		NullCheck(L_1);
		L_1->___obj_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___obj_2), (void*)L_2);
		U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C* L_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___startSize1;
		NullCheck(L_3);
		L_3->___startSize_3 = L_4;
		U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C* L_5 = L_3;
		float L_6 = ___size2;
		NullCheck(L_5);
		L_5->___size_4 = L_6;
		U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C* L_7 = L_5;
		float L_8 = ___duration3;
		NullCheck(L_7);
		L_7->___duration_5 = L_8;
		return L_7;
	}
}
// UnityEngine.WaitForSecondsRealtime LeoLuz.Extensions.UIExtensions::SlideFromTo(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* UIExtensions_SlideFromTo_m6DEEFC90DD1DE702241671DCA31EC24DF68DE83A (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___obj0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___From1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to2, float ___duration3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mB6A62A3C8C92CA0B5B7885EBB439A608FBEDDE50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj.GetComponentInChildren<MonoBehaviour>().StartCoroutine(SlideInCo(obj, From, to, duration));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ___obj0;
		NullCheck(L_0);
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1;
		L_1 = Component_GetComponentInChildren_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mB6A62A3C8C92CA0B5B7885EBB439A608FBEDDE50(L_0, Component_GetComponentInChildren_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mB6A62A3C8C92CA0B5B7885EBB439A608FBEDDE50_RuntimeMethod_var);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___obj0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___From1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___to2;
		float L_5 = ___duration3;
		RuntimeObject* L_6;
		L_6 = UIExtensions_SlideInCo_m863A2F81A6712345D04670E4E712C69C8ADD3832(L_2, L_3, L_4, L_5, NULL);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_6, NULL);
		// return new WaitForSecondsRealtime(duration);
		float L_8 = ___duration3;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_9 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_9, L_8, NULL);
		return L_9;
	}
}
// System.Collections.IEnumerator LeoLuz.Extensions.UIExtensions::SlideInCo(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIExtensions_SlideInCo_m863A2F81A6712345D04670E4E712C69C8ADD3832 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___From1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to2, float ___duration3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA* L_0 = (U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA*)il2cpp_codegen_object_new(U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSlideInCoU3Ed__12__ctor_mA1E9230905C128F2A2B2AE7EBA74CA5F6EAF5AF7(L_0, 0, NULL);
		U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA* L_1 = L_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___rectTransform0;
		NullCheck(L_1);
		L_1->___rectTransform_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___rectTransform_2), (void*)L_2);
		U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA* L_3 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___From1;
		NullCheck(L_3);
		L_3->___From_3 = L_4;
		U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA* L_5 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___to2;
		NullCheck(L_5);
		L_5->___to_4 = L_6;
		U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA* L_7 = L_5;
		float L_8 = ___duration3;
		NullCheck(L_7);
		L_7->___duration_5 = L_8;
		return L_7;
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
// System.Void LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCoU3Ed__1__ctor_mAF5715ED2C4AA26CCA23A57CA430F7592588CA86 (U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCoU3Ed__1_System_IDisposable_Dispose_mFAA22FF9512F8ABC9369B7495B893641180D9780 (U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInCoU3Ed__1_MoveNext_mB5BD815D3F68AF1E9AA4269BCAB4F57E19D13FEE (U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float t = 0f;
		__this->___U3CtU3E5__2_4 = (0.0f);
		// Color bkColor = obj.color;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_3 = __this->___obj_2;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		V_1 = L_4;
		// Color transColor = bkColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_1;
		__this->___U3CtransColorU3E5__3_5 = L_5;
		goto IL_008d;
	}

IL_0037:
	{
		// t += Time.unscaledDeltaTime;
		float L_6 = __this->___U3CtU3E5__2_4;
		float L_7;
		L_7 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->___U3CtU3E5__2_4 = ((float)il2cpp_codegen_add(L_6, L_7));
		// transColor.a = t / duration;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8 = (&__this->___U3CtransColorU3E5__3_5);
		float L_9 = __this->___U3CtU3E5__2_4;
		float L_10 = __this->___duration_3;
		L_8->___a_3 = ((float)(L_9/L_10));
		// obj.color = transColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_11 = __this->___obj_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___U3CtransColorU3E5__3_5;
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_13 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_13, NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0086:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008d:
	{
		// while (t < duration)
		float L_14 = __this->___U3CtU3E5__2_4;
		float L_15 = __this->___duration_3;
		if ((((float)L_14) < ((float)L_15)))
		{
			goto IL_0037;
		}
	}
	{
		// transColor.a = 1f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = (&__this->___U3CtransColorU3E5__3_5);
		L_16->___a_3 = (1.0f);
		// obj.color = transColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_17 = __this->___obj_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = __this->___U3CtransColorU3E5__3_5;
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// }
		return (bool)0;
	}
}
// System.Object LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInCoU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEBE3E0A38A7AAE714DF402013F1C7A587D36C0F6 (U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCoU3Ed__1_System_Collections_IEnumerator_Reset_m6BC58C51F53BD672CB7D30BB2F23ABA32B4D67A5 (U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInCoU3Ed__1_System_Collections_IEnumerator_Reset_m6BC58C51F53BD672CB7D30BB2F23ABA32B4D67A5_RuntimeMethod_var)));
	}
}
// System.Object LeoLuz.Extensions.UIExtensions/<FadeInCo>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInCoU3Ed__1_System_Collections_IEnumerator_get_Current_mCB0283E4A2A16BCA4AA049416EC4E40726B2D957 (U3CFadeInCoU3Ed__1_t5293A776BD7B9F167E80A14CF74253F0ED8F344C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCoU3Ed__3__ctor_m1F6FC584E4582BB9BDC3C824A2C53E05FCE12392 (U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCoU3Ed__3_System_IDisposable_Dispose_m71EAE0D3CE09831B67701F8D8A71B06BCFB51543 (U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeOutCoU3Ed__3_MoveNext_m5FB03C667A1801DC7DA4583311FCF98C4C867EB1 (U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0087;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float t = duration;
		float L_3 = __this->___duration_2;
		__this->___U3CtU3E5__2_5 = L_3;
		// Color bkColor = obj.color;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4 = __this->___obj_3;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_4);
		V_1 = L_5;
		// Color transColor = bkColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_1;
		__this->___U3CtransColorU3E5__3_6 = L_6;
		goto IL_008e;
	}

IL_0038:
	{
		// t -= Time.unscaledDeltaTime;
		float L_7 = __this->___U3CtU3E5__2_5;
		float L_8;
		L_8 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->___U3CtU3E5__2_5 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// transColor.a = t / duration;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_9 = (&__this->___U3CtransColorU3E5__3_6);
		float L_10 = __this->___U3CtU3E5__2_5;
		float L_11 = __this->___duration_2;
		L_9->___a_3 = ((float)(L_10/L_11));
		// obj.color = transColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_12 = __this->___obj_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = __this->___U3CtransColorU3E5__3_6;
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_14 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_14, NULL);
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0087:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008e:
	{
		// while (t > 0f)
		float L_15 = __this->___U3CtU3E5__2_5;
		if ((((float)L_15) > ((float)(0.0f))))
		{
			goto IL_0038;
		}
	}
	{
		// transColor.a = 0f;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = (&__this->___U3CtransColorU3E5__3_6);
		L_16->___a_3 = (0.0f);
		// if (disableOnExit)
		bool L_17 = __this->___disableOnExit_4;
		if (!L_17)
		{
			goto IL_00bf;
		}
	}
	{
		// obj.enabled = false;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_18 = __this->___obj_3;
		NullCheck(L_18);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_18, (bool)0, NULL);
	}

IL_00bf:
	{
		// obj.color = transColor;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_19 = __this->___obj_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = __this->___U3CtransColorU3E5__3_6;
		NullCheck(L_19);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_20);
		// }
		return (bool)0;
	}
}
// System.Object LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutCoU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m65B7911BB2129A822B8ABACB173F6E4215A71F83 (U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCoU3Ed__3_System_Collections_IEnumerator_Reset_m9A3F585917D12C5F1A2D79F081E476E1770CFFE8 (U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeOutCoU3Ed__3_System_Collections_IEnumerator_Reset_m9A3F585917D12C5F1A2D79F081E476E1770CFFE8_RuntimeMethod_var)));
	}
}
// System.Object LeoLuz.Extensions.UIExtensions/<FadeOutCo>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutCoU3Ed__3_System_Collections_IEnumerator_get_Current_m164281E13A08B93671F4E986A8C81BCD79EF7DFC (U3CFadeOutCoU3Ed__3_tFD9C49AB531EE9134668AF96454669F80E04A11E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCoU3Ed__6__ctor_m2AF50298F4F258DE6D04D7335C170D2BDEC7E731 (U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCoU3Ed__6_System_IDisposable_Dispose_m084F893732A8FDFC1CCAD97D5E3419EA60157675 (U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInCoU3Ed__6_MoveNext_mB4E735F674530945787F706ECB06E829FEC67957 (U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0072;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float t = 0f;
		__this->___U3CtU3E5__2_4 = (0.0f);
		// obj.alpha = 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_3 = __this->___obj_2;
		NullCheck(L_3);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_3, (0.0f), NULL);
		goto IL_0079;
	}

IL_0034:
	{
		// t += Time.fixedUnscaledDeltaTime;
		float L_4 = __this->___U3CtU3E5__2_4;
		float L_5;
		L_5 = Time_get_fixedUnscaledDeltaTime_mBEC5983C094BCCDFD82598A21C98C4EA8021FDE8(NULL);
		__this->___U3CtU3E5__2_4 = ((float)il2cpp_codegen_add(L_4, L_5));
		// obj.alpha = t / duration;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->___obj_2;
		float L_7 = __this->___U3CtU3E5__2_4;
		float L_8 = __this->___duration_3;
		NullCheck(L_6);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_6, ((float)(L_7/L_8)), NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_9 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_9, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0072:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0079:
	{
		// while (t < duration)
		float L_10 = __this->___U3CtU3E5__2_4;
		float L_11 = __this->___duration_3;
		if ((((float)L_10) < ((float)L_11)))
		{
			goto IL_0034;
		}
	}
	{
		// obj.alpha = 1f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_12 = __this->___obj_2;
		NullCheck(L_12);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_12, (1.0f), NULL);
		// }
		return (bool)0;
	}
}
// System.Object LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInCoU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0323121DF8A2D8387F831655631E356C430CFCD2 (U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCoU3Ed__6_System_Collections_IEnumerator_Reset_mA98A6CD1D2ADBCF38E4F2AE7C803112182F9E01F (U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInCoU3Ed__6_System_Collections_IEnumerator_Reset_mA98A6CD1D2ADBCF38E4F2AE7C803112182F9E01F_RuntimeMethod_var)));
	}
}
// System.Object LeoLuz.Extensions.UIExtensions/<FadeInCo>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInCoU3Ed__6_System_Collections_IEnumerator_get_Current_mAFCB6B44FEFC883ED9727E5142CC0D9B4A1F10DE (U3CFadeInCoU3Ed__6_t3363D64FEA1AE4BFAC4328038AA39C64DA4EF0F6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPulseCoU3Ed__10__ctor_mB4CA1C5615C268F12575EDB793F20B0B34ADE7B4 (U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPulseCoU3Ed__10_System_IDisposable_Dispose_m7EA9494743056C15563503D269EDD07E5D1DAE7E (U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPulseCoU3Ed__10_MoveNext_m2AB3ACA458730C53C16A1AC28EFBF4942B09A1BF (U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_00b1;
			}
			case 2:
			{
				goto IL_0136;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float t = 0f;
		__this->___U3CtU3E5__2_6 = (0.0f);
		goto IL_00b8;
	}

IL_0032:
	{
		// if (Time.timeScale == 0f)
		float L_2;
		L_2 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// t += Time.unscaledDeltaTime;
		float L_3 = __this->___U3CtU3E5__2_6;
		float L_4;
		L_4 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->___U3CtU3E5__2_6 = ((float)il2cpp_codegen_add(L_3, L_4));
		goto IL_0064;
	}

IL_0052:
	{
		// t += Time.deltaTime;
		float L_5 = __this->___U3CtU3E5__2_6;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CtU3E5__2_6 = ((float)il2cpp_codegen_add(L_5, L_6));
	}

IL_0064:
	{
		// obj.transform.localScale = Vector3.Lerp(startSize, startSize * size, t / duration);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___obj_2;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___startSize_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___startSize_3;
		float L_11 = __this->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		float L_13 = __this->___U3CtU3E5__2_6;
		float L_14 = __this->___duration_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_9, L_12, ((float)(L_13/L_14)), NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_15, NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_16 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_16, NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b1:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00b8:
	{
		// while (t < duration)
		float L_17 = __this->___U3CtU3E5__2_6;
		float L_18 = __this->___duration_5;
		if ((((float)L_17) < ((float)L_18)))
		{
			goto IL_0032;
		}
	}
	{
		// t = duration;
		float L_19 = __this->___duration_5;
		__this->___U3CtU3E5__2_6 = L_19;
		goto IL_013d;
	}

IL_00d7:
	{
		// t -= Time.unscaledDeltaTime;
		float L_20 = __this->___U3CtU3E5__2_6;
		float L_21;
		L_21 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->___U3CtU3E5__2_6 = ((float)il2cpp_codegen_subtract(L_20, L_21));
		// obj.transform.localScale = Vector3.Lerp(startSize, startSize * size, t / duration);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___obj_2;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___startSize_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___startSize_3;
		float L_26 = __this->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_25, L_26, NULL);
		float L_28 = __this->___U3CtU3E5__2_6;
		float L_29 = __this->___duration_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_24, L_27, ((float)(L_28/L_29)), NULL);
		NullCheck(L_23);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_23, L_30, NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_31 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_31, NULL);
		__this->___U3CU3E2__current_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_31);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0136:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_013d:
	{
		// while (t > 0f)
		float L_32 = __this->___U3CtU3E5__2_6;
		if ((((float)L_32) > ((float)(0.0f))))
		{
			goto IL_00d7;
		}
	}
	{
		// obj.transform.localScale = startSize;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___obj_2;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___startSize_3;
		NullCheck(L_34);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_34, L_35, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPulseCoU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5F50A590BC2930D6EE392FB62632C2BE990A4FBA (U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPulseCoU3Ed__10_System_Collections_IEnumerator_Reset_mD107FE57A35880885F9FD25BCDFBAEF0A8657950 (U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPulseCoU3Ed__10_System_Collections_IEnumerator_Reset_mD107FE57A35880885F9FD25BCDFBAEF0A8657950_RuntimeMethod_var)));
	}
}
// System.Object LeoLuz.Extensions.UIExtensions/<PulseCo>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPulseCoU3Ed__10_System_Collections_IEnumerator_get_Current_m7945093637410ABED2931E99CE1870CE4B762911 (U3CPulseCoU3Ed__10_t95D47F72C793206260F7F81D91A4A16FFB90318C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlideInCoU3Ed__12__ctor_mA1E9230905C128F2A2B2AE7EBA74CA5F6EAF5AF7 (U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlideInCoU3Ed__12_System_IDisposable_Dispose_mA6BB69FBFAB3DAB2C27C448EBB6B12C7DEB096F9 (U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSlideInCoU3Ed__12_MoveNext_m6CE057BB58464B3054C31491F037397CA8248380 (U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00bb;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// rectTransform.anchoredPosition = From;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___rectTransform_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___From_3;
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_3, L_4, NULL);
		// float t = 0f;
		__this->___U3CtU3E5__2_6 = (0.0f);
		goto IL_00c2;
	}

IL_003b:
	{
		// if (Time.timeScale == 0f)
		float L_5;
		L_5 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// t += Time.unscaledDeltaTime;
		float L_6 = __this->___U3CtU3E5__2_6;
		float L_7;
		L_7 = Time_get_unscaledDeltaTime_m89252D23CC5AA295CFA4EB2BCB417A831AC51652(NULL);
		__this->___U3CtU3E5__2_6 = ((float)il2cpp_codegen_add(L_6, L_7));
		goto IL_006d;
	}

IL_005b:
	{
		// t += Time.deltaTime;
		float L_8 = __this->___U3CtU3E5__2_6;
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CtU3E5__2_6 = ((float)il2cpp_codegen_add(L_8, L_9));
	}

IL_006d:
	{
		// rectTransform.anchoredPosition = Vector2.Lerp(From, to, Mathf.Sin((t / duration) * Mathf.PI * 0.5f));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___rectTransform_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___From_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = __this->___to_4;
		float L_13 = __this->___U3CtU3E5__2_6;
		float L_14 = __this->___duration_5;
		float L_15;
		L_15 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_13/L_14)), (3.14159274f))), (0.5f))));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_11, L_12, L_15, NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_16, NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_17 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_17, NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00bb:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c2:
	{
		// while (t < duration)
		float L_18 = __this->___U3CtU3E5__2_6;
		float L_19 = __this->___duration_5;
		if ((((float)L_18) < ((float)L_19)))
		{
			goto IL_003b;
		}
	}
	{
		// rectTransform.anchoredPosition = to;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = __this->___rectTransform_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = __this->___to_4;
		NullCheck(L_20);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_20, L_21, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSlideInCoU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB75470D69B5385317E784D864ABEE52F50475E9F (U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSlideInCoU3Ed__12_System_Collections_IEnumerator_Reset_mA40A0D9DFE3B68034A6732FF6FBA99F96AE1689E (U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSlideInCoU3Ed__12_System_Collections_IEnumerator_Reset_mA40A0D9DFE3B68034A6732FF6FBA99F96AE1689E_RuntimeMethod_var)));
	}
}
// System.Object LeoLuz.Extensions.UIExtensions/<SlideInCo>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSlideInCoU3Ed__12_System_Collections_IEnumerator_get_Current_mA7F5870B1BC32BBD7928D7EA13701008A52E95A8 (U3CSlideInCoU3Ed__12_t1513970C1828B01F989C8E483676581C5299A5DA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___x_0;
		float L_8 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___a0;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___b1;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		float L_14 = L_13.___y_1;
		float L_15 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool method_Invoke_m94088ED4EA4B7EA68320F0647396C20552E8C377_inline (method_tA1A439B862016D65AA7CD7136C1BDB29C9180BEA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
