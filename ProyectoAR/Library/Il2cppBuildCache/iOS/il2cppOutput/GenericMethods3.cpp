#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`3<System.Type,System.Type[],System.Type>
struct Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5;
// System.Reflection.RuntimePropertyInfo/Getter`2<System.Object,System.Object>
struct Getter_2_t10A1DA06B72A5F8B2DC213ACFB609284774C458D;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.ISubsystem>
struct KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem>
struct List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180;
// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>
struct List_1_tACFC79734710927A89702FFC38900223BB85B5A6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Subsystem>
struct List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052;
// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor>
struct List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E;
// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider>
struct List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044;
// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider>
struct List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>
struct List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178;
// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`5<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean>>
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
// System.Buffers.SpanAction`2<System.Char,System.Object>
struct SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3;
// System.Reflection.RuntimePropertyInfo/StaticGetter`1<System.Object>
struct StaticGetter_1_tADDCE76D876792EE2DFA4AFF7D1C98F61D6A91A3;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Tuple`2<System.Boolean,easyar.Optional`1<System.Object>>
struct Tuple_2_tBEF1DF48ACB0E94917B55CE413E4E7D63AF503E0;
// System.Tuple`2<System.Int32Enum,easyar.Matrix44F>
struct Tuple_2_t3C2D18A9105F2CB4E749A54D173C43E057875135;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
// System.Tuple`2<System.Object,UnityEngine.Pose>
struct Tuple_2_t021A259185A53D33A1A737775F7C26694C4C58F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.ISubsystem>
struct ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.ISubsystem>[]
struct EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.IntegratedSubsystemDescriptor[]
struct IntegratedSubsystemDescriptorU5BU5D_t23565775025CE363208D4777355B8B819E8E090B;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.SubsystemDescriptor[]
struct SubsystemDescriptorU5BU5D_t37EEAB4387C3C54A4B704533E5318404D715BE6D;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider[]
struct SubsystemDescriptorWithProviderU5BU5D_tFA5A333C6A60BA20BE6D7C7D524363FB4F8B84C8;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Decimal/DecCalc/PowerOvfl[]
struct PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.ISubsystem
struct ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MonoTypeInfo
struct MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE;
// System.RuntimeType
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor
struct XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry
struct XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487;
// easyar.Detail/AutoRelease
struct AutoRelease_tE98A0552260E9E69BCE25CA627912842B391EB1F;
// System.Reflection.RuntimePropertyInfo/GetterAdapter
struct GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider
struct Provider_t61633418FFAF45215D3806DAC7FA2291A72D1EF4;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08AAD62E530799C15714A41B93652F8A49FDBB68;
IL2CPP_EXTERN_C String_t* _stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8C0FEACB3F25706873303C3604F2CE5666744C;
IL2CPP_EXTERN_C String_t* _stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C;
IL2CPP_EXTERN_C String_t* _stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F;
IL2CPP_EXTERN_C String_t* _stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32;
IL2CPP_EXTERN_C String_t* _stringLiteralF704B54D833421164E45E576DFD279921246BCEA;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDADFC66933C24DC5F23278CE18A71A1BC9DCCD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisRuntimeObject_m2FF3AB456D8895209A459A9F333FC669F1B1ECDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_mF6724B93867EE2A12D4053F46E75806CF9557C3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mC8713BB789582FA498F3A9BDD075B77794145A53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB63359289167D8DDD29CD440525186BE9586873A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_m380FFC26C59476ECFD500C2DFED12B6CF4870537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRObjectTrackingSubsystem_Register_TisRuntimeObject_m3B020ED22373F2C83A04FD37B1A1C11C4C128167_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// easyar.Detail/AutoRelease/<>c__DisplayClass2_0`1<System.Object>
struct U3CU3Ec__DisplayClass2_0_1_t885E6BF23042B95DB28CE03E4215064BF55E4E92  : public RuntimeObject
{
	// System.Action`1<T> easyar.Detail/AutoRelease/<>c__DisplayClass2_0`1::deleter
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___deleter_0;
	// T easyar.Detail/AutoRelease/<>c__DisplayClass2_0`1::p
	RuntimeObject* ___p_1;
};

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7* ____entries_1;
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
	KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDB72209F35D56F62A287633F9450978E90B90987_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor>
struct List_1_tACFC79734710927A89702FFC38900223BB85B5A6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IntegratedSubsystemDescriptorU5BU5D_t23565775025CE363208D4777355B8B819E8E090B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tACFC79734710927A89702FFC38900223BB85B5A6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IntegratedSubsystemDescriptorU5BU5D_t23565775025CE363208D4777355B8B819E8E090B* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor>
struct List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubsystemDescriptorU5BU5D_t37EEAB4387C3C54A4B704533E5318404D715BE6D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubsystemDescriptorU5BU5D_t37EEAB4387C3C54A4B704533E5318404D715BE6D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider>
struct List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubsystemDescriptorWithProviderU5BU5D_tFA5A333C6A60BA20BE6D7C7D524363FB4F8B84C8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubsystemDescriptorWithProviderU5BU5D_tFA5A333C6A60BA20BE6D7C7D524363FB4F8B84C8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.XR.ARKit.NSObject
struct NSObject_tDC5FD00739CA75A8B0632573D568BFC4823938B0  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct NativeArrayUnsafeUtility_tB4D8A974D44EE6F4B2C32D5D19861FB081F88FCE  : public RuntimeObject
{
};

// UnityEngine.XR.ARSubsystems.NativeCopyUtility
struct NativeCopyUtility_t577EE4AEF9DB7676D9DA1C6C103F362C93BE7B99  : public RuntimeObject
{
};

// Unity.Collections.NativeSliceExtensions
struct NativeSliceExtensions_tA2B0303180122826FD5887061B8DBA5F342A726B  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility
struct NativeSliceUnsafeUtility_tA7CBE88BA4246367450DB167A878F2FA408E10CD  : public RuntimeObject
{
};

// UnityEngine.XR.ARKit.NativeViewExtensions
struct NativeViewExtensions_t331291284A64A7E4DF2AD2CFFAFE876236EBA36E  : public RuntimeObject
{
};

// UnityEngine.NoAllocHelpers
struct NoAllocHelpers_t5108A9272D2BFBFF50B14D2A1B5330A629180360  : public RuntimeObject
{
};

// UnityEngine.Resources
struct Resources_t4745F52065DB80D8880840AEDC45965DE35128E1  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.RuntimeHelpers
struct RuntimeHelpers_t9E6C71E90FD7CAB0987E101A77FBDA52EFDE284C  : public RuntimeObject
{
};

// System.SpanHelpers
struct SpanHelpers_tCA85E2BE495D0EC31B7D20D20E9FC3309265176A  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore
struct SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250  : public RuntimeObject
{
};

struct SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystemDescriptor> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_IntegratedDescriptors
	List_1_tACFC79734710927A89702FFC38900223BB85B5A6* ___s_IntegratedDescriptors_0;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_StandaloneDescriptors
	List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044* ___s_StandaloneDescriptors_1;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemDescriptor> UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::s_DeprecatedDescriptors
	List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E* ___s_DeprecatedDescriptors_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemManager
struct SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824  : public RuntimeObject
{
};

struct SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_StaticFields
{
	// System.Action UnityEngine.SubsystemManager::beforeReloadSubsystems
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___beforeReloadSubsystems_0;
	// System.Action UnityEngine.SubsystemManager::afterReloadSubsystems
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___afterReloadSubsystems_1;
	// System.Collections.Generic.List`1<UnityEngine.IntegratedSubsystem> UnityEngine.SubsystemManager::s_IntegratedSubsystems
	List_1_t78E7232867D713AA9907E71F6C5B19B226F0B180* ___s_IntegratedSubsystems_2;
	// System.Collections.Generic.List`1<UnityEngine.SubsystemsImplementation.SubsystemWithProvider> UnityEngine.SubsystemManager::s_StandaloneSubsystems
	List_1_tD834E8FB7FDC0D4243FBCF922D7FE4E3C707AAC3* ___s_StandaloneSubsystems_3;
	// System.Collections.Generic.List`1<UnityEngine.Subsystem> UnityEngine.SubsystemManager::s_DeprecatedSubsystems
	List_1_t9E8CCD70A25458CE30A64503B35F06ECA62E3052* ___s_DeprecatedSubsystems_4;
	// System.Action UnityEngine.SubsystemManager::reloadSubsytemsStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___reloadSubsytemsStarted_5;
	// System.Action UnityEngine.SubsystemManager::reloadSubsytemsCompleted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___reloadSubsytemsCompleted_6;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ThrowHelper
struct ThrowHelper_tDAFF1075E5B21B120EF09F3F2EAD51037DAB6F73  : public RuntimeObject
{
};

// System.Tuple
struct Tuple_tB9DB3180F4853E781BFDDC3093798F56B27AB03F  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.Unsafe
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
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

// System.Numerics.Vector
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};

// System.Threading.Volatile
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};

// easyar.Detail/AutoRelease
struct AutoRelease_tE98A0552260E9E69BCE25CA627912842B391EB1F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Action> easyar.Detail/AutoRelease::actions
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___actions_0;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>
struct AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.ByteEnum>
struct AlignOfHelper_1_t4B14D6C50C2E309FAFD8A3F22F5A06A357B833F8 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>
struct AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int32_t ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Single>
struct AlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	float ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>
struct AlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint32_t ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt64>
struct AlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint64_t ___data_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.ByteEnum>
struct NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ManagedReferenceImage>
struct NativeArray_1_t4619D98FC1BF9FD88B71F3D8D30916CA2A033241 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.MeshTransform>
struct NativeArray_1_tA41870B57F75C8F0729AE0AC70060D0D7841D236 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.ModifiableContactPair>
struct NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Quaternion>
struct NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>
struct NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>
struct NativeArray_1_tE3A71FEF49167DCD4DEFE7E6EF990295BB1F2E30 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>
struct NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>
struct NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>
struct NativeArray_1_tA1E97291673A9D64EEF306BAF92C2FFE8DA08E84 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeSlice`1<System.Byte>
struct NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<System.UInt32>
struct NativeSlice_1_tE2B19CC15C19DB36B42B8B7BC4E87297CFC84DDD 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<UnityEngine.Vector3>
struct NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t17328DA23166A3BC7ED05AB2892C8919956D2B87  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem,UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t309038BEBEC1FDE6F2E5F74255C98E9DEEEB3E02  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct SubsystemWithProvider_3_t693F578840ABD33CBE8E7DDDE7909BDDFDAB272F  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t61633418FFAF45215D3806DAC7FA2291A72D1EF4* ___U3CproviderU3Ek__BackingField_3;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.ValueTuple`3<System.Object,System.Int32,System.Int32>
struct ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 
{
	// T1 System.ValueTuple`3::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	int32_t ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	int32_t ___Item3_2;
};

// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA 
{
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;
};

// easyar.BlockInfo
struct BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765 
{
	// System.Int32 easyar.BlockInfo::x
	int32_t ___x_0;
	// System.Int32 easyar.BlockInfo::y
	int32_t ___y_1;
	// System.Int32 easyar.BlockInfo::z
	int32_t ___z_2;
	// System.Int32 easyar.BlockInfo::numOfVertex
	int32_t ___numOfVertex_3;
	// System.Int32 easyar.BlockInfo::startPointOfVertex
	int32_t ___startPointOfVertex_4;
	// System.Int32 easyar.BlockInfo::numOfIndex
	int32_t ___numOfIndex_5;
	// System.Int32 easyar.BlockInfo::startPointOfIndex
	int32_t ___startPointOfIndex_6;
	// System.Int32 easyar.BlockInfo::version
	int32_t ___version_7;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_6_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_6_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_7_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_7_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_8_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_8_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_9_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_9_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_9_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_0;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_2;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_3;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_4;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};

struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;
};

// easyar.Matrix44F
struct Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515 
{
	// System.Single easyar.Matrix44F::data_0
	float ___data_0_0;
	// System.Single easyar.Matrix44F::data_1
	float ___data_1_1;
	// System.Single easyar.Matrix44F::data_2
	float ___data_2_2;
	// System.Single easyar.Matrix44F::data_3
	float ___data_3_3;
	// System.Single easyar.Matrix44F::data_4
	float ___data_4_4;
	// System.Single easyar.Matrix44F::data_5
	float ___data_5_5;
	// System.Single easyar.Matrix44F::data_6
	float ___data_6_6;
	// System.Single easyar.Matrix44F::data_7
	float ___data_7_7;
	// System.Single easyar.Matrix44F::data_8
	float ___data_8_8;
	// System.Single easyar.Matrix44F::data_9
	float ___data_9_9;
	// System.Single easyar.Matrix44F::data_10
	float ___data_10_10;
	// System.Single easyar.Matrix44F::data_11
	float ___data_11_11;
	// System.Single easyar.Matrix44F::data_12
	float ___data_12_12;
	// System.Single easyar.Matrix44F::data_13
	float ___data_13_13;
	// System.Single easyar.Matrix44F::data_14
	float ___data_14_14;
	// System.Single easyar.Matrix44F::data_15
	float ___data_15_15;
};

// UnityEngine.XR.MeshId
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC 
{
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;
};

struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_StaticFields
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___s_InvalidId_0;
};

// System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C 
{
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t* ___parent_0;
	// System.Type System.Reflection.MonoPropertyInfo::declaring_type
	Type_t* ___declaring_type_1;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t* ___get_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t* ___set_method_4;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_pinvoke
{
	Type_t* ___parent_0;
	Type_t* ___declaring_type_1;
	char* ___name_2;
	MethodInfo_t* ___get_method_3;
	MethodInfo_t* ___set_method_4;
	int32_t ___attrs_5;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_com
{
	Type_t* ___parent_0;
	Type_t* ___declaring_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t* ___get_method_3;
	MethodInfo_t* ___set_method_4;
	int32_t ___attrs_5;
};

// Unity.Collections.NativeArrayDispose
struct NativeArrayDispose_t2E2EF752F7DFB28A2F9F74355156A3BF0D420229 
{
	// System.Void* Unity.Collections.NativeArrayDispose::m_Buffer
	void* ___m_Buffer_0;
	// Unity.Collections.Allocator Unity.Collections.NativeArrayDispose::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_1;
};

// UnityEngine.XR.ARKit.NativeView
struct NativeView_t8847AA803BCE2115FE1B924903924BF62265510A 
{
	// System.Void* UnityEngine.XR.ARKit.NativeView::data
	void* ___data_0;
	// System.Int32 UnityEngine.XR.ARKit.NativeView::count
	int32_t ___count_1;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
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

// System.Numerics.Register
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};

// System.Resources.ResourceLocator
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	// System.Object System.Resources.ResourceLocator::_value
	RuntimeObject* ____value_0;
	// System.Int32 System.Resources.ResourceLocator::_dataPos
	int32_t ____dataPos_1;
};
// Native definition for P/Invoke marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
// Native definition for COM marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;
};

struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___k_Empty_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// easyar.Unit
struct Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 
{
	union
	{
		struct
		{
		};
		uint8_t Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185__padding[1];
	};
};

// easyar.Vec3F
struct Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630 
{
	// System.Single easyar.Vec3F::data_0
	float ___data_0_0;
	// System.Single easyar.Vec3F::data_1
	float ___data_1_1;
	// System.Single easyar.Vec3F::data_2
	float ___data_2_2;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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
	float ___x_0;
	// System.Single UnityEngine.Vector4::y
	float ___y_1;
	// System.Single UnityEngine.Vector4::z
	float ___z_2;
	// System.Single UnityEngine.Vector4::w
	float ___w_3;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_4;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_7;
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

// UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidLow
	uint64_t ___m_GuidLow_0;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidHigh
	uint64_t ___m_GuidHigh_1;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Name
	String_t* ___m_Name_2;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry> UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Entries
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_marshaled_pinvoke
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	char* ___m_Name_2;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_marshaled_com
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	Il2CppChar* ___m_Name_2;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries_3;
};

// UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo
struct PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 
{
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo::distance
	float ___distance_0;
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo::cosineAngleWithRay
	float ___cosineAngleWithRay_1;
};

// UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.Camera/RenderRequest
struct RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A 
{
	// UnityEngine.Camera/RenderRequestMode UnityEngine.Camera/RenderRequest::m_CameraRenderMode
	int32_t ___m_CameraRenderMode_0;
	// UnityEngine.RenderTexture UnityEngine.Camera/RenderRequest::m_ResultRT
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_ResultRT_1;
	// UnityEngine.Camera/RenderRequestOutputSpace UnityEngine.Camera/RenderRequest::m_OutputSpace
	int32_t ___m_OutputSpace_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshaled_pinvoke
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};
// Native definition for COM marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_marshaled_com
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};

// System.Decimal/DecCalc
struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Decimal/DecCalc::uflags
			uint32_t ___uflags_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uflags_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uhi_1_OffsetPadding[4];
			// System.UInt32 System.Decimal/DecCalc::uhi
			uint32_t ___uhi_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uhi_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uhi_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulo_2_OffsetPadding[8];
			// System.UInt32 System.Decimal/DecCalc::ulo
			uint32_t ___ulo_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulo_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___ulo_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___umid_3_OffsetPadding[12];
			// System.UInt32 System.Decimal/DecCalc::umid
			uint32_t ___umid_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___umid_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___umid_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_4_OffsetPadding[8];
			// System.UInt64 System.Decimal/DecCalc::ulomidLE
			uint64_t ___ulomidLE_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_4_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_4_forAlignmentOnly;
		};
	};
};

struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_StaticFields
{
	// System.UInt32[] System.Decimal/DecCalc::s_powers10
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_powers10_5;
	// System.UInt64[] System.Decimal/DecCalc::s_ulongPowers10
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s_ulongPowers10_6;
	// System.Double[] System.Decimal/DecCalc::s_doublePowers10
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_doublePowers10_7;
	// System.Decimal/DecCalc/PowerOvfl[] System.Decimal/DecCalc::PowerOvflValues
	PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B* ___PowerOvflValues_8;
};

// System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	// System.Char System.Text.RegularExpressions.RegexCharClass/SingleRange::First
	Il2CppChar ___First_0;
	// System.Char System.Text.RegularExpressions.RegexCharClass/SingleRange::Last
	Il2CppChar ___Last_1;
};
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First_0;
	uint8_t ___Last_1;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.RegexCharClass/SingleRange
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First_0;
	uint8_t ___Last_1;
};

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A 
{
	// System.Collections.Generic.List`1<System.String> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::PoseNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::Poses
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_pinvoke
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
};
// Native definition for COM marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_marshaled_com
{
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___PoseNames_0;
	List_1_t8A06DB5554CD76CE072807DE6EF4198109D84E53* ___Poses_1;
};

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject* ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle_2;
};

// System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileObject::Value
	RuntimeObject* ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value_0;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities
struct Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B 
{
	union
	{
		struct
		{
		};
		uint8_t Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B__padding[1];
	};
};

// System.Number/NumberBuffer/DigitsAndNullTerminator
struct DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA 
{
	union
	{
		struct
		{
		};
		uint8_t DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA__padding[102];
	};
};

// easyar.Detail/AutoRelease/<>c__DisplayClass2_0`1<System.IntPtr>
struct U3CU3Ec__DisplayClass2_0_1_tFDDE333E8A01E558F809BB7A510BB74679EF8A7B  : public RuntimeObject
{
	// System.Action`1<T> easyar.Detail/AutoRelease/<>c__DisplayClass2_0`1::deleter
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter_0;
	// T easyar.Detail/AutoRelease/<>c__DisplayClass2_0`1::p
	intptr_t ___p_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>
struct AlignOfHelper_1_t06B2AF48C49769AAD65F5E3F53EA9C54BFB10F00 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Quaternion>
struct AlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct AlignOfHelper_1_t1B0EA5A1E7D9C74577BD9F7B65768A70AB421E87 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector2>
struct AlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>
struct AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector4>
struct AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>
struct AlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 ___data_1;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// UnityEngine.XR.ARKit.NSMutableSet`1<UnityEngine.XR.ARKit.ARReferenceObject>
struct NSMutableSet_1_t9AE39D7B43F4C627C4C534C985357DE12C539D17 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSMutableSet`1::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceImage>
struct NSSet_1_t563A23404D7A9F2BCD227809220A53E77BC335B5 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSSet`1::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceObject>
struct NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSSet`1::m_Self
	intptr_t ___m_Self_0;
};

// easyar.Optional`1<System.Object>
struct Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	RuntimeObject* ___Some_2;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct TrackingSubsystem_4_t6A91F435DD4C8BB231D67E80B74B66C53BC4299A  : public SubsystemWithProvider_3_t693F578840ABD33CBE8E7DDDE7909BDDFDAB272F
{
};

// System.Tuple`2<System.Int32Enum,easyar.Matrix44F>
struct Tuple_2_t3C2D18A9105F2CB4E749A54D173C43E057875135  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515 ___m_Item2_1;
};

// System.ValueTuple`5<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean>
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	// T1 System.ValueTuple`5::Item1
	intptr_t ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	int32_t ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	intptr_t ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	int32_t ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	bool ___Item5_4;
};

// System.Numerics.Vector`1<System.UInt16>
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes_4;
};

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes_4;
};

// UnityEngine.XR.ARKit.ARReferenceImage
struct ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 
{
	// System.IntPtr UnityEngine.XR.ARKit.ARReferenceImage::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.XR.ARKit.ARReferenceObject
struct ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 
{
	// System.IntPtr UnityEngine.XR.ARKit.ARReferenceObject::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;
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

// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;
};

// UnityEngine.XR.ARKit.ManagedReferenceImage
struct ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 
{
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::guid
	Guid_t ___guid_0;
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::textureGuid
	Guid_t ___textureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARKit.ManagedReferenceImage::size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size_2;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::name
	intptr_t ___name_3;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::texture
	intptr_t ___texture_4;
};

// UnityEngine.XR.MeshInfo
struct MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA 
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::<MeshId>k__BackingField
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::<ChangeState>k__BackingField
	int32_t ___U3CChangeStateU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.MeshInfo::<PriorityHint>k__BackingField
	int32_t ___U3CPriorityHintU3Ek__BackingField_2;
};

// UnityEngine.XR.MeshTransform
struct MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A 
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshTransform::<MeshId>k__BackingField
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	// System.UInt64 UnityEngine.XR.MeshTransform::<Timestamp>k__BackingField
	uint64_t ___U3CTimestampU3Ek__BackingField_1;
	// UnityEngine.Vector3 UnityEngine.XR.MeshTransform::<Position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_2;
	// UnityEngine.Quaternion UnityEngine.XR.MeshTransform::<Rotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_3;
	// UnityEngine.Vector3 UnityEngine.XR.MeshTransform::<Scale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_4;
};

// UnityEngine.ModifiableContactPair
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	// System.IntPtr UnityEngine.ModifiableContactPair::actor
	intptr_t ___actor_0;
	// System.IntPtr UnityEngine.ModifiableContactPair::otherActor
	intptr_t ___otherActor_1;
	// System.IntPtr UnityEngine.ModifiableContactPair::shape
	intptr_t ___shape_2;
	// System.IntPtr UnityEngine.ModifiableContactPair::otherShape
	intptr_t ___otherShape_3;
	// UnityEngine.Quaternion UnityEngine.ModifiableContactPair::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4;
	// UnityEngine.Vector3 UnityEngine.ModifiableContactPair::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_5;
	// UnityEngine.Quaternion UnityEngine.ModifiableContactPair::otherRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation_6;
	// UnityEngine.Vector3 UnityEngine.ModifiableContactPair::otherPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition_7;
	// System.Int32 UnityEngine.ModifiableContactPair::numContacts
	int32_t ___numContacts_8;
	// System.IntPtr UnityEngine.ModifiableContactPair::contacts
	intptr_t ___contacts_9;
};

// UnityEngine.XR.ARKit.NSBundle
struct NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSBundle::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.XR.ARKit.NSData
struct NSData_t9AAA5FECF2A97E9D10DB92D4BDB76B3FA7BEA579 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSData::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.XR.ARKit.NSError
struct NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSError::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.XR.ARKit.NSMutableData
struct NSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSMutableData::m_Self
	intptr_t ___m_Self_0;
};

struct NSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD_StaticFields
{
	// System.String UnityEngine.XR.ARKit.NSMutableData::k_ExceptionMsg
	String_t* ___k_ExceptionMsg_1;
};

// UnityEngine.XR.ARKit.NSMutableString
struct NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSMutableString::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.XR.ARKit.NSString
struct NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSString::m_Self
	intptr_t ___m_Self_0;
};

struct NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3_StaticFields
{
	// UnityEngine.XR.ARKit.NSString UnityEngine.XR.ARKit.NSString::underscore
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 ___underscore_1;
};

// UnityEngine.XR.ARKit.NSURL
struct NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSURL::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.XR.ARKit.NSUUID
struct NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSUUID::m_Self
	intptr_t ___m_Self_0;
};

// Unity.Collections.NativeArrayDisposeJob
struct NativeArrayDisposeJob_tC4C226F42B67C01224F186D06868C7BCB828E9FB 
{
	// Unity.Collections.NativeArrayDispose Unity.Collections.NativeArrayDisposeJob::Data
	NativeArrayDispose_t2E2EF752F7DFB28A2F9F74355156A3BF0D420229 ___Data_0;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// System.Reflection.RuntimePropertyInfo
struct RuntimePropertyInfo_t5F54C4304A36C216127C93BF1553920A8685537D  : public PropertyInfo_t
{
	// System.IntPtr System.Reflection.RuntimePropertyInfo::klass
	intptr_t ___klass_0;
	// System.IntPtr System.Reflection.RuntimePropertyInfo::prop
	intptr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.RuntimePropertyInfo::info
	MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C ___info_2;
	// System.Reflection.PInfo System.Reflection.RuntimePropertyInfo::cached
	int32_t ___cached_3;
	// System.Reflection.RuntimePropertyInfo/GetterAdapter System.Reflection.RuntimePropertyInfo::cached_getter
	GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E* ___cached_getter_4;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 
{
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_NativeConfigurationHandle
	intptr_t ___m_NativeConfigurationHandle_2;
	// UnityEngine.XR.ARSubsystems.Supported UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_DepthSensorSupported
	int32_t ___m_DepthSensorSupported_3;
};

// UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Vertices
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Vertices_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Normals
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Normals_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Indices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_Indices_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_UVs
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_UVs_3;
};

// UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint
struct XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Tracked
	int32_t ___m_Tracked_3;
};

// UnityEngine.XR.XRNodeState
struct XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A 
{
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor
struct XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3  : public SubsystemDescriptorWithProvider_2_t17328DA23166A3BC7ED05AB2892C8919956D2B87
{
	// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor::<capabilities>k__BackingField
	Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___U3CcapabilitiesU3Ek__BackingField_3;
};

// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE  : public SubsystemDescriptorWithProvider_2_t309038BEBEC1FDE6F2E5F74255C98E9DEEEB3E02
{
	// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_3;
};

// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F 
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_pinvoke
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_com
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;
};

// UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job
struct ConvertRGBA32ToARGB32Job_t33717A5A3D7B762778C603CB91A108E088C3A2D5 
{
	// Unity.Collections.NativeSlice`1<System.UInt32> UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job::rgbaImage
	NativeSlice_1_tE2B19CC15C19DB36B42B8B7BC4E87297CFC84DDD ___rgbaImage_0;
	// Unity.Collections.NativeSlice`1<System.UInt32> UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job::argbImage
	NativeSlice_1_tE2B19CC15C19DB36B42B8B7BC4E87297CFC84DDD ___argbImage_1;
};

// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
struct TransformPositionsJob_t3211ABBFB066E13AA3BE3D0C4DC1694EAE5AA706 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Quaternion> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::positionsIn
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::positionsOut
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___positionsOut_1;
};

// UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob
struct DeallocateJob_tC93114F19C2BA5B7D45FC6BE9E82A022661E6B29 
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob::data
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___data_0;
};

// UnityEngine.XR.ARKit.NSObject/ReleaseJob
struct ReleaseJob_t50A6D002DD614ACD34904396B8A44E562196DBBB 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSObject/ReleaseJob::ptr
	intptr_t ___ptr_0;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8  : public SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781
{
};

// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob
struct FlipBoundaryWindingJob_t979472AEDCDAE3ED8D15C2B3E80A7BCB5953FBB4 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob::positions
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___positions_0;
};

// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob
struct TransformBoundaryPositionsJob_t4CF88CA781A656A5A9B07EEE99196368A63012D3 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob::positionsIn
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob::positionsOut
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___positionsOut_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct AlignOfHelper_1_tEC193CCC2AC6E38B0E639D12C62A3A14B63D72E7 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ManagedReferenceImage>
struct AlignOfHelper_1_tB64EA1C3849C395B01026BB700A9C2A0ECB160FD 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.MeshTransform>
struct AlignOfHelper_1_t9F543929F600FA93DA40FC6F5A5E5C0DCB61F42F 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.ModifiableContactPair>
struct AlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>
struct AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct AlignOfHelper_1_t0469BA4E514B73A985C93ED290FF5F66607A4EE1 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>
struct AlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>
struct AlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___data_1;
};

// UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceImage>
struct NSEnumerator_1_tF133F34AE814E3594060C7451A62F8D61CA56196 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSEnumerator`1::m_Self
	intptr_t ___m_Self_0;
	// T UnityEngine.XR.ARKit.NSEnumerator`1::<Current>k__BackingField
	ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 ___U3CCurrentU3Ek__BackingField_1;
};

// UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceObject>
struct NSEnumerator_1_tAABC462E085418EC92D2E5789E5964CA71611A27 
{
	// System.IntPtr UnityEngine.XR.ARKit.NSEnumerator`1::m_Self
	intptr_t ___m_Self_0;
	// T UnityEngine.XR.ARKit.NSEnumerator`1::<Current>k__BackingField
	ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 ___U3CCurrentU3Ek__BackingField_1;
};

// System.Nullable`1<UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceObject>>
struct Nullable_1_tEB2C98337B52A3729A2B9829DDF126AFFA1435E2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C ___value_1;
};

// System.Nullable`1<UnityEngine.XR.ARKit.ARReferenceImage>
struct Nullable_1_tA89D32A31DE3DDD91892EF069CD690D44EFE3CE9 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 ___value_1;
};

// System.Nullable`1<UnityEngine.XR.ARKit.ARReferenceObject>
struct Nullable_1_tF75762B94DDD8B99CBA45AF4E706DFB32D6F8D4D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 ___value_1;
};

// System.Nullable`1<UnityEngine.XR.ARKit.NSBundle>
struct Nullable_1_t7AFC7B6FA040CD798CD0FC81605678A7095E8404 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A ___value_1;
};

// System.Nullable`1<UnityEngine.XR.ARKit.NSData>
struct Nullable_1_t72BD043E740D3920EBE900BBEF9E202AE2D89EDD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NSData_t9AAA5FECF2A97E9D10DB92D4BDB76B3FA7BEA579 ___value_1;
};

// System.Nullable`1<UnityEngine.XR.ARKit.NSError>
struct Nullable_1_tD042D16618AEAFA3928752C5DDC23F76FD80D6F9 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 ___value_1;
};

// System.Nullable`1<UnityEngine.XR.ARKit.NSMutableData>
struct Nullable_1_t4B2D86FC8FAFDA460CEDCCB8205E7256E08FA9A7 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD ___value_1;
};

// System.Nullable`1<UnityEngine.XR.ARKit.NSMutableString>
struct Nullable_1_tB342C2B3A7DE692EBA21BA536FC0C5111CE17CA1 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26 ___value_1;
};

// System.Nullable`1<UnityEngine.XR.ARKit.NSString>
struct Nullable_1_tC332A6602A28865561711B9E7FE669BB926D8C17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 ___value_1;
};

// System.Nullable`1<UnityEngine.XR.ARKit.NSURL>
struct Nullable_1_tF16DB46F7C11A009AC852A0DB3834CBF9EBC2798 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D ___value_1;
};

// System.Nullable`1<UnityEngine.XR.ARKit.NSUUID>
struct Nullable_1_t24952FC90AFCA230830D88807D4AEE793B9CD354 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E ___value_1;
};

// System.Span`1<System.Char>
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Tuple`2<System.Boolean,easyar.Optional`1<System.Object>>
struct Tuple_2_tBEF1DF48ACB0E94917B55CE413E4E7D63AF503E0  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	bool ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22 ___m_Item2_1;
};

// System.Tuple`2<System.Object,UnityEngine.Pose>
struct Tuple_2_t021A259185A53D33A1A737775F7C26694C4C58F5  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Item2_1;
};

// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 
{
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_pinvoke
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_marshaled_com
{
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_Descriptor_1;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_2;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};

// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t ___m_SessionId_5;
};

struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_TextureDescriptor_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_7;
};

struct XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbe UnityEngine.XR.ARSubsystems.XREnvironmentProbe::s_Default
	XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRFace
struct XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRFace::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRFace::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRFace::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_LeftEyePose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LeftEyePose_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_RightEyePose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RightEyePose_5;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRFace::m_FixationPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FixationPoint_6;
};

struct XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRFace UnityEngine.XR.ARSubsystems.XRFace::s_Default
	XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___s_Default_7;
};

// UnityEngine.XR.ARSubsystems.XRHumanBody
struct XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBody::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRHumanBody::m_EstimatedHeightScaleFactor
	float ___m_EstimatedHeightScaleFactor_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRHumanBody::m_NativePtr
	intptr_t ___m_NativePtr_4;
};

struct XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRHumanBody UnityEngine.XR.ARSubsystems.XRHumanBody::s_Default
	XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___s_Default_5;
};

// UnityEngine.XR.ARSubsystems.XRHumanBodyJoint
struct XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 
{
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LocalScale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LocalPose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnchorScale_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AnchorPose_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Tracked
	int32_t ___m_Tracked_6;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem
struct XRObjectTrackingSubsystem_t0094478B41F73E26F73943C09ECD134874B68ED5  : public TrackingSubsystem_4_t6A91F435DD4C8BB231D67E80B74B66C53BC4299A
{
	// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::m_Library
	XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487* ___m_Library_4;
};

// UnityEngine.XR.ARSubsystems.XRParticipant
struct XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRParticipant::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRParticipant::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRParticipant::m_SessionId
	Guid_t ___m_SessionId_4;
};

struct XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRParticipant UnityEngine.XR.ARSubsystems.XRParticipant::k_Default
	XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___k_Default_5;
};

// UnityEngine.XR.ARSubsystems.XRPointCloud
struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_4;
};

struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRPointCloud::s_Default
	XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_HitTrackableId_6;
};

struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRReferencePoint::m_SessionId
	Guid_t ___m_SessionId_5;
};

struct XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::s_Default
	XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;
};

struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRTrackedObject
struct XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::m_ReferenceObjectGuid
	Guid_t ___m_ReferenceObjectGuid_4;
};

struct XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRTrackedObject UnityEngine.XR.ARSubsystems.XRTrackedObject::s_Default
	XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___s_Default_5;
};

// UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob
struct AddImageJob_tC87645CC9CD1F5CB92CEA9626494F3791B609498 
{
	// Unity.Collections.NativeSlice`1<System.Byte> UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::image
	NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___image_0;
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::database
	intptr_t ___database_1;
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::validator
	intptr_t ___validator_2;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::width
	int32_t ___width_3;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::height
	int32_t ___height_4;
	// System.Single UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::physicalWidth
	float ___physicalWidth_5;
	// UnityEngine.TextureFormat UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::format
	int32_t ___format_6;
	// UnityEngine.XR.ARKit.ManagedReferenceImage UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::managedReferenceImage
	ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 ___managedReferenceImage_7;
};

// UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob
struct PointCloudRaycastCollectResultsJob_t69F3217E9403CAAACB1D1142CF0C0A9761EBBDD9 
{
	// Unity.Collections.NativeSlice`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::points
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___points_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::infos
	NativeArray_1_tA1E97291673A9D64EEF306BAF92C2FFE8DA08E84 ___infos_1;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::hits
	NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 ___hits_2;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::count
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___count_3;
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::cosineThreshold
	float ___cosineThreshold_4;
	// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::trackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___trackableId_6;
};

// UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob
struct PointCloudRaycastJob_t150A3AAEB6CB9F85DEEDE77859C128D1727C7BFA 
{
	// Unity.Collections.NativeSlice`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob::points
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___points_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob::infoOut
	NativeArray_1_tA1E97291673A9D64EEF306BAF92C2FFE8DA08E84 ___infoOut_1;
	// UnityEngine.Ray UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob::ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray_2;
};

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct AlignOfHelper_1_tB06A689E75BED03FFD7EF2F67DB0A0BF55FD26E8 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct AlignOfHelper_1_tC0F0471D2FE3757817D5616407CF8C963E068D51 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct AlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRFace>
struct AlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct AlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>
struct AlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct AlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct AlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct AlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct AlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct AlignOfHelper_1_t8CCB14B1267A08F7799FDCE191C4323549BA6A49 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct AlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___data_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct AlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819 
{
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___data_1;
};

// System.Reflection.RuntimePropertyInfo/Getter`2<System.Object,System.Object>
struct Getter_2_t10A1DA06B72A5F8B2DC213ACFB609284774C458D  : public MulticastDelegate_t
{
};

// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178  : public MulticastDelegate_t
{
};

// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`5<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean>>
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};

// System.Buffers.SpanAction`2<System.Char,System.Object>
struct SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3  : public MulticastDelegate_t
{
};

// System.Reflection.RuntimePropertyInfo/StaticGetter`1<System.Object>
struct StaticGetter_1_tADDCE76D876792EE2DFA4AFF7D1C98F61D6A91A3  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry
struct XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.RuntimeType
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1  : public TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D
{
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501* ___type_info_27;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject* ___GenericCache_28;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE* ___m_serializationCtor_29;
};

struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_StaticFields
{
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ValueType_10;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___EnumType_11;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ObjectType_12;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___StringType_13;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___DelegateType_14;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_SICtorParamTypes_15;
	// System.Func`3<System.Type,System.Type[],System.Type> System.RuntimeType::MakeTypeBuilderInstantiation
	Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5* ___MakeTypeBuilderInstantiation_16;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___s_typedRef_26;
};

// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceObject>>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m157C37312DF3344D3A93776D167FB27687871A55_gshared_inline (Nullable_1_tEB2C98337B52A3729A2B9829DDF126AFFA1435E2* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceObject>>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C Nullable_1_get_Value_mCF403FD9EF06CA38134AD697E3796C20CBD843AD_gshared (Nullable_1_tEB2C98337B52A3729A2B9829DDF126AFFA1435E2* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceObject>::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSSet_1_AsIntPtr_m1D429297BD86691BFF8348340F35ECE7077D1AB7_gshared_inline (NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.ARReferenceImage>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mE6DC6ABB65D419B7885346104CBD7FDC337845E1_gshared_inline (Nullable_1_tA89D32A31DE3DDD91892EF069CD690D44EFE3CE9* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARKit.ARReferenceImage>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 Nullable_1_get_Value_mD76CE12DAE1328574DCD1CA423A627BB297F7E91_gshared (Nullable_1_tA89D32A31DE3DDD91892EF069CD690D44EFE3CE9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.ARReferenceObject>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3AD93169C03148FCDBABE271AFE0878A5668AAC2_gshared_inline (Nullable_1_tF75762B94DDD8B99CBA45AF4E706DFB32D6F8D4D* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARKit.ARReferenceObject>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 Nullable_1_get_Value_m9A2EC3229C54FDB5F7CF53AEAD70A54F64AD3522_gshared (Nullable_1_tF75762B94DDD8B99CBA45AF4E706DFB32D6F8D4D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSBundle>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9974E3516DE20375CF9F93BBDBC87505D4E1E4F6_gshared_inline (Nullable_1_t7AFC7B6FA040CD798CD0FC81605678A7095E8404* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARKit.NSBundle>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A Nullable_1_get_Value_m3626603408EF9698C79A80539106F170BE10DFD2_gshared (Nullable_1_t7AFC7B6FA040CD798CD0FC81605678A7095E8404* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSData>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m455B3C79F1ADB68F38E93617FD89C5772C5E2C8D_gshared_inline (Nullable_1_t72BD043E740D3920EBE900BBEF9E202AE2D89EDD* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARKit.NSData>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NSData_t9AAA5FECF2A97E9D10DB92D4BDB76B3FA7BEA579 Nullable_1_get_Value_m6D4883168479371000AF5810244AFF61EE151514_gshared (Nullable_1_t72BD043E740D3920EBE900BBEF9E202AE2D89EDD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSError>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC41535B99161226C05904479F4C56B84C8301177_gshared_inline (Nullable_1_tD042D16618AEAFA3928752C5DDC23F76FD80D6F9* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARKit.NSError>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 Nullable_1_get_Value_mE9F723B7EEB57DD3ED780018CE7255E47AAF7FEE_gshared (Nullable_1_tD042D16618AEAFA3928752C5DDC23F76FD80D6F9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSMutableData>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1E49109395DAE68082FDA5B0D3094E50F6A6ADB5_gshared_inline (Nullable_1_t4B2D86FC8FAFDA460CEDCCB8205E7256E08FA9A7* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARKit.NSMutableData>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD Nullable_1_get_Value_m040A12F9EA5CEED6F5B7AD30D47087D3803D78C5_gshared (Nullable_1_t4B2D86FC8FAFDA460CEDCCB8205E7256E08FA9A7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSMutableString>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m50B2C83F62E14675E65A0397923398F6E75D9007_gshared_inline (Nullable_1_tB342C2B3A7DE692EBA21BA536FC0C5111CE17CA1* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARKit.NSMutableString>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26 Nullable_1_get_Value_m88A412767E3C580C27D1539FE79B629E32EB9F11_gshared (Nullable_1_tB342C2B3A7DE692EBA21BA536FC0C5111CE17CA1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSString>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m083A379D58602D7587E560E8634DAAC64C2F6970_gshared_inline (Nullable_1_tC332A6602A28865561711B9E7FE669BB926D8C17* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARKit.NSString>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 Nullable_1_get_Value_mC88F222D8443F93946510A6D6BF767E6F3942C96_gshared (Nullable_1_tC332A6602A28865561711B9E7FE669BB926D8C17* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSURL>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m8C1B94FDFC41E2FEF5640DD4F824E6ED6074D28A_gshared_inline (Nullable_1_tF16DB46F7C11A009AC852A0DB3834CBF9EBC2798* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARKit.NSURL>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D Nullable_1_get_Value_mA432BB18423822FD76D3C2753EB5F91B0475C368_gshared (Nullable_1_tF16DB46F7C11A009AC852A0DB3834CBF9EBC2798* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSUUID>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2AAE72E40025EC977CC9945A84FC5B17BC46B2DC_gshared_inline (Nullable_1_t24952FC90AFCA230830D88807D4AEE793B9CD354* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.XR.ARKit.NSUUID>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E Nullable_1_get_Value_mB41C4727274E59A00C89A71BE1D3D7506DAF8259_gshared (Nullable_1_t24952FC90AFCA230830D88807D4AEE793B9CD354* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceImage>::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSEnumerator_1_AsIntPtr_m00AC94AC2F3EE699D7ECDB3ED87EE18CE56B6BCF_gshared_inline (NSEnumerator_1_tF133F34AE814E3594060C7451A62F8D61CA56196* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceObject>::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSEnumerator_1_AsIntPtr_m34296E6743530DEECB8244FBD806118338E21C11_gshared_inline (NSEnumerator_1_tAABC462E085418EC92D2E5789E5964CA71611A27* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARKit.NSMutableSet`1<UnityEngine.XR.ARKit.ARReferenceObject>::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSMutableSet_1_AsIntPtr_m2DA74E4E3892A6DF0FFBD477CD63B8EDB0B5CBEE_gshared_inline (NSMutableSet_1_t9AE39D7B43F4C627C4C534C985357DE12C539D17* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceImage>::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSSet_1_AsIntPtr_m716B1A6A05DA60CB7ADA14C76B736BF307A38F9D_gshared_inline (NSSet_1_t563A23404D7A9F2BCD227809220A53E77BC335B5* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mBFCDCB65BA72515FBC46506A6FF5600934A797E8_gshared (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mF0E54F4AC97D8FD94CE48D98AF76A275ABFA9EA7_gshared (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m7C2B0B4FFC022B9B16BF6FB2C978DCCC66F345EE_gshared (NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m96640764DCE1F1900150DA0FC1D992D9DC52687D_gshared (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mCA06C3646E600B8615C70CB3DA97038528B18498_gshared (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m35D30C4E671ACF3FD4F35E6442130E1969FF47FB_gshared (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m66F1E39CC8189C37896E6B3DEA4DBC658B5359DD_gshared (NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mD7AA8125519C235C250E28C485752B186B718D1F_gshared (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mDC183B8E025B1A55DC178981EDE28DC1A82261D7_gshared (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mDF68F0A55BC88CA530F3FC16BD7C0D5C1DA4BF08_gshared (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m30CA19DF7A43467931AA83BA989BAE13250577B0_gshared (NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2D0E6AF1C419402888254ABD76AFD00EB86E24D7_gshared (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m3F792CFB2FF29DB8098DDF0BFEE0FCCBAC8F1A19_gshared (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m02536E80A033E37A268BB288FE78991C3D04DC1B_gshared (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeSlice`1<System.Byte>::.ctor(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m50E6F98E8A57DFA42B86CB43A6925D74D2CB2958_gshared (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___array0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_m53B55AAD466B1F57692700D3B055F074E92AF896_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_gshared (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceObject>>::get_HasValue()
inline bool Nullable_1_get_HasValue_m157C37312DF3344D3A93776D167FB27687871A55_inline (Nullable_1_tEB2C98337B52A3729A2B9829DDF126AFFA1435E2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEB2C98337B52A3729A2B9829DDF126AFFA1435E2*, const RuntimeMethod*))Nullable_1_get_HasValue_m157C37312DF3344D3A93776D167FB27687871A55_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceObject>>::get_Value()
inline NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C Nullable_1_get_Value_mCF403FD9EF06CA38134AD697E3796C20CBD843AD (Nullable_1_tEB2C98337B52A3729A2B9829DDF126AFFA1435E2* __this, const RuntimeMethod* method)
{
	return ((  NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C (*) (Nullable_1_tEB2C98337B52A3729A2B9829DDF126AFFA1435E2*, const RuntimeMethod*))Nullable_1_get_Value_mCF403FD9EF06CA38134AD697E3796C20CBD843AD_gshared)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceObject>::AsIntPtr()
inline intptr_t NSSet_1_AsIntPtr_m1D429297BD86691BFF8348340F35ECE7077D1AB7_inline (NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C*, const RuntimeMethod*))NSSet_1_AsIntPtr_m1D429297BD86691BFF8348340F35ECE7077D1AB7_gshared_inline)(__this, method);
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.ARReferenceImage>::get_HasValue()
inline bool Nullable_1_get_HasValue_mE6DC6ABB65D419B7885346104CBD7FDC337845E1_inline (Nullable_1_tA89D32A31DE3DDD91892EF069CD690D44EFE3CE9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tA89D32A31DE3DDD91892EF069CD690D44EFE3CE9*, const RuntimeMethod*))Nullable_1_get_HasValue_mE6DC6ABB65D419B7885346104CBD7FDC337845E1_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARKit.ARReferenceImage>::get_Value()
inline ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 Nullable_1_get_Value_mD76CE12DAE1328574DCD1CA423A627BB297F7E91 (Nullable_1_tA89D32A31DE3DDD91892EF069CD690D44EFE3CE9* __this, const RuntimeMethod* method)
{
	return ((  ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 (*) (Nullable_1_tA89D32A31DE3DDD91892EF069CD690D44EFE3CE9*, const RuntimeMethod*))Nullable_1_get_Value_mD76CE12DAE1328574DCD1CA423A627BB297F7E91_gshared)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARKit.ARReferenceImage::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ARReferenceImage_AsIntPtr_mB51CBD770F897DE2CD783829FB7B6E7DB8ADB491_inline (ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.ARReferenceObject>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3AD93169C03148FCDBABE271AFE0878A5668AAC2_inline (Nullable_1_tF75762B94DDD8B99CBA45AF4E706DFB32D6F8D4D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tF75762B94DDD8B99CBA45AF4E706DFB32D6F8D4D*, const RuntimeMethod*))Nullable_1_get_HasValue_m3AD93169C03148FCDBABE271AFE0878A5668AAC2_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARKit.ARReferenceObject>::get_Value()
inline ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 Nullable_1_get_Value_m9A2EC3229C54FDB5F7CF53AEAD70A54F64AD3522 (Nullable_1_tF75762B94DDD8B99CBA45AF4E706DFB32D6F8D4D* __this, const RuntimeMethod* method)
{
	return ((  ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 (*) (Nullable_1_tF75762B94DDD8B99CBA45AF4E706DFB32D6F8D4D*, const RuntimeMethod*))Nullable_1_get_Value_m9A2EC3229C54FDB5F7CF53AEAD70A54F64AD3522_gshared)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARKit.ARReferenceObject::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ARReferenceObject_AsIntPtr_mBDCD3D70CB4E239E4363C1838F8340374552EB0E_inline (ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSBundle>::get_HasValue()
inline bool Nullable_1_get_HasValue_m9974E3516DE20375CF9F93BBDBC87505D4E1E4F6_inline (Nullable_1_t7AFC7B6FA040CD798CD0FC81605678A7095E8404* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t7AFC7B6FA040CD798CD0FC81605678A7095E8404*, const RuntimeMethod*))Nullable_1_get_HasValue_m9974E3516DE20375CF9F93BBDBC87505D4E1E4F6_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARKit.NSBundle>::get_Value()
inline NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A Nullable_1_get_Value_m3626603408EF9698C79A80539106F170BE10DFD2 (Nullable_1_t7AFC7B6FA040CD798CD0FC81605678A7095E8404* __this, const RuntimeMethod* method)
{
	return ((  NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A (*) (Nullable_1_t7AFC7B6FA040CD798CD0FC81605678A7095E8404*, const RuntimeMethod*))Nullable_1_get_Value_m3626603408EF9698C79A80539106F170BE10DFD2_gshared)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARKit.NSBundle::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSBundle_AsIntPtr_m83D50BFA055FADA6614C708A12C8E7B77D9BAB15_inline (NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSData>::get_HasValue()
inline bool Nullable_1_get_HasValue_m455B3C79F1ADB68F38E93617FD89C5772C5E2C8D_inline (Nullable_1_t72BD043E740D3920EBE900BBEF9E202AE2D89EDD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t72BD043E740D3920EBE900BBEF9E202AE2D89EDD*, const RuntimeMethod*))Nullable_1_get_HasValue_m455B3C79F1ADB68F38E93617FD89C5772C5E2C8D_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARKit.NSData>::get_Value()
inline NSData_t9AAA5FECF2A97E9D10DB92D4BDB76B3FA7BEA579 Nullable_1_get_Value_m6D4883168479371000AF5810244AFF61EE151514 (Nullable_1_t72BD043E740D3920EBE900BBEF9E202AE2D89EDD* __this, const RuntimeMethod* method)
{
	return ((  NSData_t9AAA5FECF2A97E9D10DB92D4BDB76B3FA7BEA579 (*) (Nullable_1_t72BD043E740D3920EBE900BBEF9E202AE2D89EDD*, const RuntimeMethod*))Nullable_1_get_Value_m6D4883168479371000AF5810244AFF61EE151514_gshared)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARKit.NSData::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSData_AsIntPtr_mFFF5444074F72538360DBBB602FC5CF4F7CBACC2_inline (NSData_t9AAA5FECF2A97E9D10DB92D4BDB76B3FA7BEA579* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSError>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC41535B99161226C05904479F4C56B84C8301177_inline (Nullable_1_tD042D16618AEAFA3928752C5DDC23F76FD80D6F9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD042D16618AEAFA3928752C5DDC23F76FD80D6F9*, const RuntimeMethod*))Nullable_1_get_HasValue_mC41535B99161226C05904479F4C56B84C8301177_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARKit.NSError>::get_Value()
inline NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 Nullable_1_get_Value_mE9F723B7EEB57DD3ED780018CE7255E47AAF7FEE (Nullable_1_tD042D16618AEAFA3928752C5DDC23F76FD80D6F9* __this, const RuntimeMethod* method)
{
	return ((  NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 (*) (Nullable_1_tD042D16618AEAFA3928752C5DDC23F76FD80D6F9*, const RuntimeMethod*))Nullable_1_get_Value_mE9F723B7EEB57DD3ED780018CE7255E47AAF7FEE_gshared)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARKit.NSError::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSError_AsIntPtr_mC626DC458106CBF73F0A357C254836751F65CC54_inline (NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSMutableData>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1E49109395DAE68082FDA5B0D3094E50F6A6ADB5_inline (Nullable_1_t4B2D86FC8FAFDA460CEDCCB8205E7256E08FA9A7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t4B2D86FC8FAFDA460CEDCCB8205E7256E08FA9A7*, const RuntimeMethod*))Nullable_1_get_HasValue_m1E49109395DAE68082FDA5B0D3094E50F6A6ADB5_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARKit.NSMutableData>::get_Value()
inline NSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD Nullable_1_get_Value_m040A12F9EA5CEED6F5B7AD30D47087D3803D78C5 (Nullable_1_t4B2D86FC8FAFDA460CEDCCB8205E7256E08FA9A7* __this, const RuntimeMethod* method)
{
	return ((  NSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD (*) (Nullable_1_t4B2D86FC8FAFDA460CEDCCB8205E7256E08FA9A7*, const RuntimeMethod*))Nullable_1_get_Value_m040A12F9EA5CEED6F5B7AD30D47087D3803D78C5_gshared)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARKit.NSMutableData::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSMutableData_AsIntPtr_m6224C54804C8378F892389D06D7938E378408AE3_inline (NSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSMutableString>::get_HasValue()
inline bool Nullable_1_get_HasValue_m50B2C83F62E14675E65A0397923398F6E75D9007_inline (Nullable_1_tB342C2B3A7DE692EBA21BA536FC0C5111CE17CA1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tB342C2B3A7DE692EBA21BA536FC0C5111CE17CA1*, const RuntimeMethod*))Nullable_1_get_HasValue_m50B2C83F62E14675E65A0397923398F6E75D9007_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARKit.NSMutableString>::get_Value()
inline NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26 Nullable_1_get_Value_m88A412767E3C580C27D1539FE79B629E32EB9F11 (Nullable_1_tB342C2B3A7DE692EBA21BA536FC0C5111CE17CA1* __this, const RuntimeMethod* method)
{
	return ((  NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26 (*) (Nullable_1_tB342C2B3A7DE692EBA21BA536FC0C5111CE17CA1*, const RuntimeMethod*))Nullable_1_get_Value_m88A412767E3C580C27D1539FE79B629E32EB9F11_gshared)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARKit.NSMutableString::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSMutableString_AsIntPtr_m5D70D0EE3CFAB410E4D8AE31F92ABABE58BE27F1_inline (NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSString>::get_HasValue()
inline bool Nullable_1_get_HasValue_m083A379D58602D7587E560E8634DAAC64C2F6970_inline (Nullable_1_tC332A6602A28865561711B9E7FE669BB926D8C17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tC332A6602A28865561711B9E7FE669BB926D8C17*, const RuntimeMethod*))Nullable_1_get_HasValue_m083A379D58602D7587E560E8634DAAC64C2F6970_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARKit.NSString>::get_Value()
inline NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 Nullable_1_get_Value_mC88F222D8443F93946510A6D6BF767E6F3942C96 (Nullable_1_tC332A6602A28865561711B9E7FE669BB926D8C17* __this, const RuntimeMethod* method)
{
	return ((  NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 (*) (Nullable_1_tC332A6602A28865561711B9E7FE669BB926D8C17*, const RuntimeMethod*))Nullable_1_get_Value_mC88F222D8443F93946510A6D6BF767E6F3942C96_gshared)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARKit.NSString::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSString_AsIntPtr_m0B09B41CFB3FAD0DC48FF26CE66D7680834196B2_inline (NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSURL>::get_HasValue()
inline bool Nullable_1_get_HasValue_m8C1B94FDFC41E2FEF5640DD4F824E6ED6074D28A_inline (Nullable_1_tF16DB46F7C11A009AC852A0DB3834CBF9EBC2798* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tF16DB46F7C11A009AC852A0DB3834CBF9EBC2798*, const RuntimeMethod*))Nullable_1_get_HasValue_m8C1B94FDFC41E2FEF5640DD4F824E6ED6074D28A_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARKit.NSURL>::get_Value()
inline NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D Nullable_1_get_Value_mA432BB18423822FD76D3C2753EB5F91B0475C368 (Nullable_1_tF16DB46F7C11A009AC852A0DB3834CBF9EBC2798* __this, const RuntimeMethod* method)
{
	return ((  NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D (*) (Nullable_1_tF16DB46F7C11A009AC852A0DB3834CBF9EBC2798*, const RuntimeMethod*))Nullable_1_get_Value_mA432BB18423822FD76D3C2753EB5F91B0475C368_gshared)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARKit.NSURL::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSURL_AsIntPtr_m526C8EDEB47E52D6AA6BBF2C6A954C64B1D5F76B_inline (NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.XR.ARKit.NSUUID>::get_HasValue()
inline bool Nullable_1_get_HasValue_m2AAE72E40025EC977CC9945A84FC5B17BC46B2DC_inline (Nullable_1_t24952FC90AFCA230830D88807D4AEE793B9CD354* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t24952FC90AFCA230830D88807D4AEE793B9CD354*, const RuntimeMethod*))Nullable_1_get_HasValue_m2AAE72E40025EC977CC9945A84FC5B17BC46B2DC_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.XR.ARKit.NSUUID>::get_Value()
inline NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E Nullable_1_get_Value_mB41C4727274E59A00C89A71BE1D3D7506DAF8259 (Nullable_1_t24952FC90AFCA230830D88807D4AEE793B9CD354* __this, const RuntimeMethod* method)
{
	return ((  NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E (*) (Nullable_1_t24952FC90AFCA230830D88807D4AEE793B9CD354*, const RuntimeMethod*))Nullable_1_get_Value_mB41C4727274E59A00C89A71BE1D3D7506DAF8259_gshared)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARKit.NSUUID::AsIntPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSUUID_AsIntPtr_mFF36E304598350ACB508AEEFC021B73F1AFBE838_inline (NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceImage>::AsIntPtr()
inline intptr_t NSEnumerator_1_AsIntPtr_m00AC94AC2F3EE699D7ECDB3ED87EE18CE56B6BCF_inline (NSEnumerator_1_tF133F34AE814E3594060C7451A62F8D61CA56196* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (NSEnumerator_1_tF133F34AE814E3594060C7451A62F8D61CA56196*, const RuntimeMethod*))NSEnumerator_1_AsIntPtr_m00AC94AC2F3EE699D7ECDB3ED87EE18CE56B6BCF_gshared_inline)(__this, method);
}
// System.UInt64 UnityEngine.XR.ARKit.NSObject::GetHash(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B (intptr_t ___self0, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceObject>::AsIntPtr()
inline intptr_t NSEnumerator_1_AsIntPtr_m34296E6743530DEECB8244FBD806118338E21C11_inline (NSEnumerator_1_tAABC462E085418EC92D2E5789E5964CA71611A27* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (NSEnumerator_1_tAABC462E085418EC92D2E5789E5964CA71611A27*, const RuntimeMethod*))NSEnumerator_1_AsIntPtr_m34296E6743530DEECB8244FBD806118338E21C11_gshared_inline)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARKit.NSMutableSet`1<UnityEngine.XR.ARKit.ARReferenceObject>::AsIntPtr()
inline intptr_t NSMutableSet_1_AsIntPtr_m2DA74E4E3892A6DF0FFBD477CD63B8EDB0B5CBEE_inline (NSMutableSet_1_t9AE39D7B43F4C627C4C534C985357DE12C539D17* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (NSMutableSet_1_t9AE39D7B43F4C627C4C534C985357DE12C539D17*, const RuntimeMethod*))NSMutableSet_1_AsIntPtr_m2DA74E4E3892A6DF0FFBD477CD63B8EDB0B5CBEE_gshared_inline)(__this, method);
}
// System.IntPtr UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceImage>::AsIntPtr()
inline intptr_t NSSet_1_AsIntPtr_m716B1A6A05DA60CB7ADA14C76B736BF307A38F9D_inline (NSSet_1_t563A23404D7A9F2BCD227809220A53E77BC335B5* __this, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (NSSet_1_t563A23404D7A9F2BCD227809220A53E77BC335B5*, const RuntimeMethod*))NSSet_1_AsIntPtr_m716B1A6A05DA60CB7ADA14C76B736BF307A38F9D_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65 (intptr_t ___self0, intptr_t ___other1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARKit.NSObject::Retain(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSObject_Retain_m96379E36E20F7B838B2C658BB109020E5B927A29 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARKit.NSString UnityEngine.XR.ARKit.NSObject::GetDescription(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 NSObject_GetDescription_m3BCCD06E48549ED9EB540558E97ECFA219EC2B01 (intptr_t ___self0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARKit.NSString::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSString_Dispose_m96268625CA15EB302423D3F0F078774E9C0852F5 (NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARKit.NSString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSString_ToString_mB6ED91B90F8876BD139F16BFA3933334E18ECAF7 (NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mBFCDCB65BA72515FBC46506A6FF5600934A797E8 (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mBFCDCB65BA72515FBC46506A6FF5600934A797E8_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mF0E54F4AC97D8FD94CE48D98AF76A275ABFA9EA7 (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mF0E54F4AC97D8FD94CE48D98AF76A275ABFA9EA7_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m7C2B0B4FFC022B9B16BF6FB2C978DCCC66F345EE (NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m7C2B0B4FFC022B9B16BF6FB2C978DCCC66F345EE_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m96640764DCE1F1900150DA0FC1D992D9DC52687D (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m96640764DCE1F1900150DA0FC1D992D9DC52687D_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRFace>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mCA06C3646E600B8615C70CB3DA97038528B18498 (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mCA06C3646E600B8615C70CB3DA97038528B18498_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m35D30C4E671ACF3FD4F35E6442130E1969FF47FB (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m35D30C4E671ACF3FD4F35E6442130E1969FF47FB_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m66F1E39CC8189C37896E6B3DEA4DBC658B5359DD (NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m66F1E39CC8189C37896E6B3DEA4DBC658B5359DD_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mD7AA8125519C235C250E28C485752B186B718D1F (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mD7AA8125519C235C250E28C485752B186B718D1F_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mDC183B8E025B1A55DC178981EDE28DC1A82261D7 (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mDC183B8E025B1A55DC178981EDE28DC1A82261D7_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mDF68F0A55BC88CA530F3FC16BD7C0D5C1DA4BF08 (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mDF68F0A55BC88CA530F3FC16BD7C0D5C1DA4BF08_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m30CA19DF7A43467931AA83BA989BAE13250577B0 (NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m30CA19DF7A43467931AA83BA989BAE13250577B0_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m2D0E6AF1C419402888254ABD76AFD00EB86E24D7 (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2D0E6AF1C419402888254ABD76AFD00EB86E24D7_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m3F792CFB2FF29DB8098DDF0BFEE0FCCBAC8F1A19 (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m3F792CFB2FF29DB8098DDF0BFEE0FCCBAC8F1A19_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m02536E80A033E37A268BB288FE78991C3D04DC1B (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m02536E80A033E37A268BB288FE78991C3D04DC1B_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyReplicate(System.Void*,System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F (void* ___destination0, void* ___source1, int32_t ___size2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyStride(System.Void*,System.Int32,System.Void*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90 (void* ___destination0, int32_t ___destinationStride1, void* ___source2, int32_t ___sourceStride3, int32_t ___elementSize4, int32_t ___count5, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeSlice`1<System.Byte>::.ctor(Unity.Collections.NativeArray`1<T>)
inline void NativeSlice_1__ctor_m50E6F98E8A57DFA42B86CB43A6925D74D2CB2958 (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___array0, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA*, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeSlice_1__ctor_m50E6F98E8A57DFA42B86CB43A6925D74D2CB2958_gshared)(__this, ___array0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_FindObjectOfType_mCA5E2E9BF64B7203CE8B1ECFCFAA0370606984D4 (Type_t* ___type0, bool ___includeInactive1, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsOfType_m78C878D4981628D7C0F583714B6BA19B95F3BE44 (Type_t* ___type0, bool ___includeInactive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26 (RuntimeObject* ___arg0, String_t* ___message1, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___data0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UnityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312 (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_m99F2A72EF6BFE09E6CF4FCF6207C5BCFAD1D76CF (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___instantiateInWorldSpace2, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_m99C9917ED3F7B2B9C569B55F52411620B52DA19D (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
inline bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_m53B55AAD466B1F57692700D3B055F074E92AF896 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisRuntimeObject_m53B55AAD466B1F57692700D3B055F074E92AF896_gshared)(__this, method);
}
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33 (String_t* ___path0, Type_t* ___systemTypeInstance1, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.RuntimeTypeHandle::HasReferences(System.RuntimeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F (RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___type0, const RuntimeMethod* method) ;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Byte::Equals(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85 (uint8_t* __this, uint8_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Char::Equals(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B (Il2CppChar* __this, Il2CppChar ___obj0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String System.String::FastAllocateString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104 (int32_t ___length0, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8 (int32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE (uint32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::ReportSingleSubsystemAnalytics(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_ReportSingleSubsystemAnalytics_m12986597FBE76C21232348BAC03ADEEB9F02DB99 (String_t* ___id0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* Texture_CreateNonReadableException_m29786CD930E89C281564A9B341FD4088FBC8C94F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___t0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture2D_GetWritableImageData_m8E26026A332040F8713E5A2A13C5545797159A5E (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___frame0, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Texture2D::GetRawImageDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Texture2D_GetRawImageDataSize_m690AA2A7E6B0A207BC6DCA00A6313C3407CE3418 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___argument0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
inline void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
inline void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9 (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::Dispose()
inline void NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0 (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::Remove(TKey)
inline bool Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor::.ctor(System.String,System.Type,System.Type,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystemDescriptor__ctor_m2177FCC9E1AFC3E173E078744766BFA8FF45BE5B (XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* __this, String_t* ___id0, Type_t* ___providerType1, Type_t* ___subsystemTypeOverride2, Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___capabilities3, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___descriptor0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::.ctor(System.String,System.Type,System.Type,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor__ctor_m1629BC38262CF3786A0C4A765B0653D3038D4DB3 (XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE* __this, String_t* ___subsystemId0, Type_t* ___providerType1, Type_t* ___subsystemTypeOverride2, int32_t ___capabilities3, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA* XRReferenceObject_FindEntry_mFF9C29CCCDF7BA08B307B787DF83EF8F27B6017C (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// T UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry<System.Object>()
inline RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31 (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*, const RuntimeMethod*))XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_gshared)(__this, method);
}
// System.Boolean System.IntPtr::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E (intptr_t* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action>::Add(T)
inline void List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::ArePointersEqual<UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceObject>>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_ArePointersEqual_TisNSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C_m309A6708E829652F77F008583BD5CE4A6E2174C3_gshared (Nullable_1_tEB2C98337B52A3729A2B9829DDF126AFFA1435E2 ___lhs0, Nullable_1_tEB2C98337B52A3729A2B9829DDF126AFFA1435E2 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (lhs.HasValue && rhs.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m157C37312DF3344D3A93776D167FB27687871A55_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m157C37312DF3344D3A93776D167FB27687871A55_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == rhs.Value.AsIntPtr();
		NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C L_2;
		L_2 = Nullable_1_get_Value_mCF403FD9EF06CA38134AD697E3796C20CBD843AD((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		intptr_t L_3;
		L_3 = NSSet_1_AsIntPtr_m1D429297BD86691BFF8348340F35ECE7077D1AB7_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C L_4;
		L_4 = Nullable_1_get_Value_mCF403FD9EF06CA38134AD697E3796C20CBD843AD((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		intptr_t L_5;
		L_5 = NSSet_1_AsIntPtr_m1D429297BD86691BFF8348340F35ECE7077D1AB7_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_5, NULL);
		return L_6;
	}

IL_0042:
	{
		// if (lhs.HasValue)
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m157C37312DF3344D3A93776D167FB27687871A55_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == IntPtr.Zero;
		NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C L_8;
		L_8 = Nullable_1_get_Value_mCF403FD9EF06CA38134AD697E3796C20CBD843AD((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_8;
		intptr_t L_9;
		L_9 = NSSet_1_AsIntPtr_m1D429297BD86691BFF8348340F35ECE7077D1AB7_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_11;
		L_11 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_10, NULL);
		return L_11;
	}

IL_006b:
	{
		// if (rhs.HasValue)
		bool L_12;
		L_12 = Nullable_1_get_HasValue_m157C37312DF3344D3A93776D167FB27687871A55_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		// return rhs.Value.AsIntPtr() == IntPtr.Zero;
		NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C L_13;
		L_13 = Nullable_1_get_Value_mCF403FD9EF06CA38134AD697E3796C20CBD843AD((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_13;
		intptr_t L_14;
		L_14 = NSSet_1_AsIntPtr_m1D429297BD86691BFF8348340F35ECE7077D1AB7_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_15 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_16;
		L_16 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_14, L_15, NULL);
		return L_16;
	}

IL_0094:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::ArePointersEqual<UnityEngine.XR.ARKit.ARReferenceImage>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_ArePointersEqual_TisARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136_m247F0E54CB4613911B8A7D4844C5DA7BD681C2E9_gshared (Nullable_1_tA89D32A31DE3DDD91892EF069CD690D44EFE3CE9 ___lhs0, Nullable_1_tA89D32A31DE3DDD91892EF069CD690D44EFE3CE9 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (lhs.HasValue && rhs.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mE6DC6ABB65D419B7885346104CBD7FDC337845E1_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mE6DC6ABB65D419B7885346104CBD7FDC337845E1_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == rhs.Value.AsIntPtr();
		ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 L_2;
		L_2 = Nullable_1_get_Value_mD76CE12DAE1328574DCD1CA423A627BB297F7E91((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		intptr_t L_3;
		L_3 = ARReferenceImage_AsIntPtr_mB51CBD770F897DE2CD783829FB7B6E7DB8ADB491_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 L_4;
		L_4 = Nullable_1_get_Value_mD76CE12DAE1328574DCD1CA423A627BB297F7E91((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		intptr_t L_5;
		L_5 = ARReferenceImage_AsIntPtr_mB51CBD770F897DE2CD783829FB7B6E7DB8ADB491_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_5, NULL);
		return L_6;
	}

IL_0042:
	{
		// if (lhs.HasValue)
		bool L_7;
		L_7 = Nullable_1_get_HasValue_mE6DC6ABB65D419B7885346104CBD7FDC337845E1_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == IntPtr.Zero;
		ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 L_8;
		L_8 = Nullable_1_get_Value_mD76CE12DAE1328574DCD1CA423A627BB297F7E91((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_8;
		intptr_t L_9;
		L_9 = ARReferenceImage_AsIntPtr_mB51CBD770F897DE2CD783829FB7B6E7DB8ADB491_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_11;
		L_11 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_10, NULL);
		return L_11;
	}

IL_006b:
	{
		// if (rhs.HasValue)
		bool L_12;
		L_12 = Nullable_1_get_HasValue_mE6DC6ABB65D419B7885346104CBD7FDC337845E1_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		// return rhs.Value.AsIntPtr() == IntPtr.Zero;
		ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 L_13;
		L_13 = Nullable_1_get_Value_mD76CE12DAE1328574DCD1CA423A627BB297F7E91((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_13;
		intptr_t L_14;
		L_14 = ARReferenceImage_AsIntPtr_mB51CBD770F897DE2CD783829FB7B6E7DB8ADB491_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_15 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_16;
		L_16 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_14, L_15, NULL);
		return L_16;
	}

IL_0094:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::ArePointersEqual<UnityEngine.XR.ARKit.ARReferenceObject>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_ArePointersEqual_TisARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379_mC7E3DDC1C30DE11610A888C2ACE541790114C1C3_gshared (Nullable_1_tF75762B94DDD8B99CBA45AF4E706DFB32D6F8D4D ___lhs0, Nullable_1_tF75762B94DDD8B99CBA45AF4E706DFB32D6F8D4D ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (lhs.HasValue && rhs.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m3AD93169C03148FCDBABE271AFE0878A5668AAC2_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m3AD93169C03148FCDBABE271AFE0878A5668AAC2_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == rhs.Value.AsIntPtr();
		ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 L_2;
		L_2 = Nullable_1_get_Value_m9A2EC3229C54FDB5F7CF53AEAD70A54F64AD3522((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		intptr_t L_3;
		L_3 = ARReferenceObject_AsIntPtr_mBDCD3D70CB4E239E4363C1838F8340374552EB0E_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 L_4;
		L_4 = Nullable_1_get_Value_m9A2EC3229C54FDB5F7CF53AEAD70A54F64AD3522((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		intptr_t L_5;
		L_5 = ARReferenceObject_AsIntPtr_mBDCD3D70CB4E239E4363C1838F8340374552EB0E_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_5, NULL);
		return L_6;
	}

IL_0042:
	{
		// if (lhs.HasValue)
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m3AD93169C03148FCDBABE271AFE0878A5668AAC2_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == IntPtr.Zero;
		ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 L_8;
		L_8 = Nullable_1_get_Value_m9A2EC3229C54FDB5F7CF53AEAD70A54F64AD3522((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_8;
		intptr_t L_9;
		L_9 = ARReferenceObject_AsIntPtr_mBDCD3D70CB4E239E4363C1838F8340374552EB0E_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_11;
		L_11 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_10, NULL);
		return L_11;
	}

IL_006b:
	{
		// if (rhs.HasValue)
		bool L_12;
		L_12 = Nullable_1_get_HasValue_m3AD93169C03148FCDBABE271AFE0878A5668AAC2_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		// return rhs.Value.AsIntPtr() == IntPtr.Zero;
		ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 L_13;
		L_13 = Nullable_1_get_Value_m9A2EC3229C54FDB5F7CF53AEAD70A54F64AD3522((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_13;
		intptr_t L_14;
		L_14 = ARReferenceObject_AsIntPtr_mBDCD3D70CB4E239E4363C1838F8340374552EB0E_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_15 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_16;
		L_16 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_14, L_15, NULL);
		return L_16;
	}

IL_0094:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::ArePointersEqual<UnityEngine.XR.ARKit.NSBundle>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_ArePointersEqual_TisNSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A_m075E6D539C4B9474960A7DB9A05752308A8987D2_gshared (Nullable_1_t7AFC7B6FA040CD798CD0FC81605678A7095E8404 ___lhs0, Nullable_1_t7AFC7B6FA040CD798CD0FC81605678A7095E8404 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (lhs.HasValue && rhs.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m9974E3516DE20375CF9F93BBDBC87505D4E1E4F6_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m9974E3516DE20375CF9F93BBDBC87505D4E1E4F6_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == rhs.Value.AsIntPtr();
		NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A L_2;
		L_2 = Nullable_1_get_Value_m3626603408EF9698C79A80539106F170BE10DFD2((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		intptr_t L_3;
		L_3 = NSBundle_AsIntPtr_m83D50BFA055FADA6614C708A12C8E7B77D9BAB15_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A L_4;
		L_4 = Nullable_1_get_Value_m3626603408EF9698C79A80539106F170BE10DFD2((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		intptr_t L_5;
		L_5 = NSBundle_AsIntPtr_m83D50BFA055FADA6614C708A12C8E7B77D9BAB15_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_5, NULL);
		return L_6;
	}

IL_0042:
	{
		// if (lhs.HasValue)
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m9974E3516DE20375CF9F93BBDBC87505D4E1E4F6_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == IntPtr.Zero;
		NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A L_8;
		L_8 = Nullable_1_get_Value_m3626603408EF9698C79A80539106F170BE10DFD2((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_8;
		intptr_t L_9;
		L_9 = NSBundle_AsIntPtr_m83D50BFA055FADA6614C708A12C8E7B77D9BAB15_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_11;
		L_11 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_10, NULL);
		return L_11;
	}

IL_006b:
	{
		// if (rhs.HasValue)
		bool L_12;
		L_12 = Nullable_1_get_HasValue_m9974E3516DE20375CF9F93BBDBC87505D4E1E4F6_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		// return rhs.Value.AsIntPtr() == IntPtr.Zero;
		NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A L_13;
		L_13 = Nullable_1_get_Value_m3626603408EF9698C79A80539106F170BE10DFD2((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_13;
		intptr_t L_14;
		L_14 = NSBundle_AsIntPtr_m83D50BFA055FADA6614C708A12C8E7B77D9BAB15_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_15 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_16;
		L_16 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_14, L_15, NULL);
		return L_16;
	}

IL_0094:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::ArePointersEqual<UnityEngine.XR.ARKit.NSData>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_ArePointersEqual_TisNSData_t9AAA5FECF2A97E9D10DB92D4BDB76B3FA7BEA579_m7CD0937579F076B05B6755E3FF5DE80B12B56159_gshared (Nullable_1_t72BD043E740D3920EBE900BBEF9E202AE2D89EDD ___lhs0, Nullable_1_t72BD043E740D3920EBE900BBEF9E202AE2D89EDD ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NSData_t9AAA5FECF2A97E9D10DB92D4BDB76B3FA7BEA579 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (lhs.HasValue && rhs.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m455B3C79F1ADB68F38E93617FD89C5772C5E2C8D_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m455B3C79F1ADB68F38E93617FD89C5772C5E2C8D_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == rhs.Value.AsIntPtr();
		NSData_t9AAA5FECF2A97E9D10DB92D4BDB76B3FA7BEA579 L_2;
		L_2 = Nullable_1_get_Value_m6D4883168479371000AF5810244AFF61EE151514((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		intptr_t L_3;
		L_3 = NSData_AsIntPtr_mFFF5444074F72538360DBBB602FC5CF4F7CBACC2_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		NSData_t9AAA5FECF2A97E9D10DB92D4BDB76B3FA7BEA579 L_4;
		L_4 = Nullable_1_get_Value_m6D4883168479371000AF5810244AFF61EE151514((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		intptr_t L_5;
		L_5 = NSData_AsIntPtr_mFFF5444074F72538360DBBB602FC5CF4F7CBACC2_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_5, NULL);
		return L_6;
	}

IL_0042:
	{
		// if (lhs.HasValue)
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m455B3C79F1ADB68F38E93617FD89C5772C5E2C8D_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == IntPtr.Zero;
		NSData_t9AAA5FECF2A97E9D10DB92D4BDB76B3FA7BEA579 L_8;
		L_8 = Nullable_1_get_Value_m6D4883168479371000AF5810244AFF61EE151514((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_8;
		intptr_t L_9;
		L_9 = NSData_AsIntPtr_mFFF5444074F72538360DBBB602FC5CF4F7CBACC2_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_11;
		L_11 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_10, NULL);
		return L_11;
	}

IL_006b:
	{
		// if (rhs.HasValue)
		bool L_12;
		L_12 = Nullable_1_get_HasValue_m455B3C79F1ADB68F38E93617FD89C5772C5E2C8D_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		// return rhs.Value.AsIntPtr() == IntPtr.Zero;
		NSData_t9AAA5FECF2A97E9D10DB92D4BDB76B3FA7BEA579 L_13;
		L_13 = Nullable_1_get_Value_m6D4883168479371000AF5810244AFF61EE151514((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_13;
		intptr_t L_14;
		L_14 = NSData_AsIntPtr_mFFF5444074F72538360DBBB602FC5CF4F7CBACC2_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_15 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_16;
		L_16 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_14, L_15, NULL);
		return L_16;
	}

IL_0094:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::ArePointersEqual<UnityEngine.XR.ARKit.NSError>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_ArePointersEqual_TisNSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80_mA8E4AECA845ABB07A3110A337E98718879D9D8F6_gshared (Nullable_1_tD042D16618AEAFA3928752C5DDC23F76FD80D6F9 ___lhs0, Nullable_1_tD042D16618AEAFA3928752C5DDC23F76FD80D6F9 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (lhs.HasValue && rhs.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC41535B99161226C05904479F4C56B84C8301177_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mC41535B99161226C05904479F4C56B84C8301177_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == rhs.Value.AsIntPtr();
		NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 L_2;
		L_2 = Nullable_1_get_Value_mE9F723B7EEB57DD3ED780018CE7255E47AAF7FEE((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		intptr_t L_3;
		L_3 = NSError_AsIntPtr_mC626DC458106CBF73F0A357C254836751F65CC54_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 L_4;
		L_4 = Nullable_1_get_Value_mE9F723B7EEB57DD3ED780018CE7255E47AAF7FEE((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		intptr_t L_5;
		L_5 = NSError_AsIntPtr_mC626DC458106CBF73F0A357C254836751F65CC54_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_5, NULL);
		return L_6;
	}

IL_0042:
	{
		// if (lhs.HasValue)
		bool L_7;
		L_7 = Nullable_1_get_HasValue_mC41535B99161226C05904479F4C56B84C8301177_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == IntPtr.Zero;
		NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 L_8;
		L_8 = Nullable_1_get_Value_mE9F723B7EEB57DD3ED780018CE7255E47AAF7FEE((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_8;
		intptr_t L_9;
		L_9 = NSError_AsIntPtr_mC626DC458106CBF73F0A357C254836751F65CC54_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_11;
		L_11 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_10, NULL);
		return L_11;
	}

IL_006b:
	{
		// if (rhs.HasValue)
		bool L_12;
		L_12 = Nullable_1_get_HasValue_mC41535B99161226C05904479F4C56B84C8301177_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		// return rhs.Value.AsIntPtr() == IntPtr.Zero;
		NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 L_13;
		L_13 = Nullable_1_get_Value_mE9F723B7EEB57DD3ED780018CE7255E47AAF7FEE((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_13;
		intptr_t L_14;
		L_14 = NSError_AsIntPtr_mC626DC458106CBF73F0A357C254836751F65CC54_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_15 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_16;
		L_16 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_14, L_15, NULL);
		return L_16;
	}

IL_0094:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::ArePointersEqual<UnityEngine.XR.ARKit.NSMutableData>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_ArePointersEqual_TisNSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD_m068A02DA80BB45DBE0D07563E8945E51340649ED_gshared (Nullable_1_t4B2D86FC8FAFDA460CEDCCB8205E7256E08FA9A7 ___lhs0, Nullable_1_t4B2D86FC8FAFDA460CEDCCB8205E7256E08FA9A7 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (lhs.HasValue && rhs.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m1E49109395DAE68082FDA5B0D3094E50F6A6ADB5_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m1E49109395DAE68082FDA5B0D3094E50F6A6ADB5_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == rhs.Value.AsIntPtr();
		NSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD L_2;
		L_2 = Nullable_1_get_Value_m040A12F9EA5CEED6F5B7AD30D47087D3803D78C5((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		intptr_t L_3;
		L_3 = NSMutableData_AsIntPtr_m6224C54804C8378F892389D06D7938E378408AE3_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		NSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD L_4;
		L_4 = Nullable_1_get_Value_m040A12F9EA5CEED6F5B7AD30D47087D3803D78C5((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		intptr_t L_5;
		L_5 = NSMutableData_AsIntPtr_m6224C54804C8378F892389D06D7938E378408AE3_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_5, NULL);
		return L_6;
	}

IL_0042:
	{
		// if (lhs.HasValue)
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m1E49109395DAE68082FDA5B0D3094E50F6A6ADB5_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == IntPtr.Zero;
		NSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD L_8;
		L_8 = Nullable_1_get_Value_m040A12F9EA5CEED6F5B7AD30D47087D3803D78C5((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_8;
		intptr_t L_9;
		L_9 = NSMutableData_AsIntPtr_m6224C54804C8378F892389D06D7938E378408AE3_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_11;
		L_11 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_10, NULL);
		return L_11;
	}

IL_006b:
	{
		// if (rhs.HasValue)
		bool L_12;
		L_12 = Nullable_1_get_HasValue_m1E49109395DAE68082FDA5B0D3094E50F6A6ADB5_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		// return rhs.Value.AsIntPtr() == IntPtr.Zero;
		NSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD L_13;
		L_13 = Nullable_1_get_Value_m040A12F9EA5CEED6F5B7AD30D47087D3803D78C5((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_13;
		intptr_t L_14;
		L_14 = NSMutableData_AsIntPtr_m6224C54804C8378F892389D06D7938E378408AE3_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_15 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_16;
		L_16 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_14, L_15, NULL);
		return L_16;
	}

IL_0094:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::ArePointersEqual<UnityEngine.XR.ARKit.NSMutableString>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_ArePointersEqual_TisNSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26_mD183537F8FAFC94294BB955F70384B236419FBFD_gshared (Nullable_1_tB342C2B3A7DE692EBA21BA536FC0C5111CE17CA1 ___lhs0, Nullable_1_tB342C2B3A7DE692EBA21BA536FC0C5111CE17CA1 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (lhs.HasValue && rhs.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m50B2C83F62E14675E65A0397923398F6E75D9007_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m50B2C83F62E14675E65A0397923398F6E75D9007_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == rhs.Value.AsIntPtr();
		NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26 L_2;
		L_2 = Nullable_1_get_Value_m88A412767E3C580C27D1539FE79B629E32EB9F11((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		intptr_t L_3;
		L_3 = NSMutableString_AsIntPtr_m5D70D0EE3CFAB410E4D8AE31F92ABABE58BE27F1_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26 L_4;
		L_4 = Nullable_1_get_Value_m88A412767E3C580C27D1539FE79B629E32EB9F11((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		intptr_t L_5;
		L_5 = NSMutableString_AsIntPtr_m5D70D0EE3CFAB410E4D8AE31F92ABABE58BE27F1_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_5, NULL);
		return L_6;
	}

IL_0042:
	{
		// if (lhs.HasValue)
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m50B2C83F62E14675E65A0397923398F6E75D9007_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == IntPtr.Zero;
		NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26 L_8;
		L_8 = Nullable_1_get_Value_m88A412767E3C580C27D1539FE79B629E32EB9F11((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_8;
		intptr_t L_9;
		L_9 = NSMutableString_AsIntPtr_m5D70D0EE3CFAB410E4D8AE31F92ABABE58BE27F1_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_11;
		L_11 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_10, NULL);
		return L_11;
	}

IL_006b:
	{
		// if (rhs.HasValue)
		bool L_12;
		L_12 = Nullable_1_get_HasValue_m50B2C83F62E14675E65A0397923398F6E75D9007_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		// return rhs.Value.AsIntPtr() == IntPtr.Zero;
		NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26 L_13;
		L_13 = Nullable_1_get_Value_m88A412767E3C580C27D1539FE79B629E32EB9F11((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_13;
		intptr_t L_14;
		L_14 = NSMutableString_AsIntPtr_m5D70D0EE3CFAB410E4D8AE31F92ABABE58BE27F1_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_15 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_16;
		L_16 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_14, L_15, NULL);
		return L_16;
	}

IL_0094:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::ArePointersEqual<UnityEngine.XR.ARKit.NSString>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_ArePointersEqual_TisNSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3_m7E408DF10F7114BDA603CABED4D16B0AD97FCD3C_gshared (Nullable_1_tC332A6602A28865561711B9E7FE669BB926D8C17 ___lhs0, Nullable_1_tC332A6602A28865561711B9E7FE669BB926D8C17 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (lhs.HasValue && rhs.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m083A379D58602D7587E560E8634DAAC64C2F6970_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m083A379D58602D7587E560E8634DAAC64C2F6970_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == rhs.Value.AsIntPtr();
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_2;
		L_2 = Nullable_1_get_Value_mC88F222D8443F93946510A6D6BF767E6F3942C96((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		intptr_t L_3;
		L_3 = NSString_AsIntPtr_m0B09B41CFB3FAD0DC48FF26CE66D7680834196B2_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_4;
		L_4 = Nullable_1_get_Value_mC88F222D8443F93946510A6D6BF767E6F3942C96((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		intptr_t L_5;
		L_5 = NSString_AsIntPtr_m0B09B41CFB3FAD0DC48FF26CE66D7680834196B2_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_5, NULL);
		return L_6;
	}

IL_0042:
	{
		// if (lhs.HasValue)
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m083A379D58602D7587E560E8634DAAC64C2F6970_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == IntPtr.Zero;
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_8;
		L_8 = Nullable_1_get_Value_mC88F222D8443F93946510A6D6BF767E6F3942C96((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_8;
		intptr_t L_9;
		L_9 = NSString_AsIntPtr_m0B09B41CFB3FAD0DC48FF26CE66D7680834196B2_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_11;
		L_11 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_10, NULL);
		return L_11;
	}

IL_006b:
	{
		// if (rhs.HasValue)
		bool L_12;
		L_12 = Nullable_1_get_HasValue_m083A379D58602D7587E560E8634DAAC64C2F6970_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		// return rhs.Value.AsIntPtr() == IntPtr.Zero;
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_13;
		L_13 = Nullable_1_get_Value_mC88F222D8443F93946510A6D6BF767E6F3942C96((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_13;
		intptr_t L_14;
		L_14 = NSString_AsIntPtr_m0B09B41CFB3FAD0DC48FF26CE66D7680834196B2_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_15 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_16;
		L_16 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_14, L_15, NULL);
		return L_16;
	}

IL_0094:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::ArePointersEqual<UnityEngine.XR.ARKit.NSURL>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_ArePointersEqual_TisNSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D_m6E556F466E08BB950F41C64ADA991FCD993FDE39_gshared (Nullable_1_tF16DB46F7C11A009AC852A0DB3834CBF9EBC2798 ___lhs0, Nullable_1_tF16DB46F7C11A009AC852A0DB3834CBF9EBC2798 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (lhs.HasValue && rhs.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m8C1B94FDFC41E2FEF5640DD4F824E6ED6074D28A_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m8C1B94FDFC41E2FEF5640DD4F824E6ED6074D28A_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == rhs.Value.AsIntPtr();
		NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D L_2;
		L_2 = Nullable_1_get_Value_mA432BB18423822FD76D3C2753EB5F91B0475C368((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		intptr_t L_3;
		L_3 = NSURL_AsIntPtr_m526C8EDEB47E52D6AA6BBF2C6A954C64B1D5F76B_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D L_4;
		L_4 = Nullable_1_get_Value_mA432BB18423822FD76D3C2753EB5F91B0475C368((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		intptr_t L_5;
		L_5 = NSURL_AsIntPtr_m526C8EDEB47E52D6AA6BBF2C6A954C64B1D5F76B_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_5, NULL);
		return L_6;
	}

IL_0042:
	{
		// if (lhs.HasValue)
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m8C1B94FDFC41E2FEF5640DD4F824E6ED6074D28A_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == IntPtr.Zero;
		NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D L_8;
		L_8 = Nullable_1_get_Value_mA432BB18423822FD76D3C2753EB5F91B0475C368((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_8;
		intptr_t L_9;
		L_9 = NSURL_AsIntPtr_m526C8EDEB47E52D6AA6BBF2C6A954C64B1D5F76B_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_11;
		L_11 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_10, NULL);
		return L_11;
	}

IL_006b:
	{
		// if (rhs.HasValue)
		bool L_12;
		L_12 = Nullable_1_get_HasValue_m8C1B94FDFC41E2FEF5640DD4F824E6ED6074D28A_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		// return rhs.Value.AsIntPtr() == IntPtr.Zero;
		NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D L_13;
		L_13 = Nullable_1_get_Value_mA432BB18423822FD76D3C2753EB5F91B0475C368((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_13;
		intptr_t L_14;
		L_14 = NSURL_AsIntPtr_m526C8EDEB47E52D6AA6BBF2C6A954C64B1D5F76B_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_15 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_16;
		L_16 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_14, L_15, NULL);
		return L_16;
	}

IL_0094:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::ArePointersEqual<UnityEngine.XR.ARKit.NSUUID>(System.Nullable`1<T>,System.Nullable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_ArePointersEqual_TisNSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E_mE84985395560FCF4AEBDC8108C7B8EA294E68EBE_gshared (Nullable_1_t24952FC90AFCA230830D88807D4AEE793B9CD354 ___lhs0, Nullable_1_t24952FC90AFCA230830D88807D4AEE793B9CD354 ___rhs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (lhs.HasValue && rhs.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m2AAE72E40025EC977CC9945A84FC5B17BC46B2DC_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m2AAE72E40025EC977CC9945A84FC5B17BC46B2DC_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == rhs.Value.AsIntPtr();
		NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E L_2;
		L_2 = Nullable_1_get_Value_mB41C4727274E59A00C89A71BE1D3D7506DAF8259((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_2;
		intptr_t L_3;
		L_3 = NSUUID_AsIntPtr_mFF36E304598350ACB508AEEFC021B73F1AFBE838_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E L_4;
		L_4 = Nullable_1_get_Value_mB41C4727274E59A00C89A71BE1D3D7506DAF8259((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		intptr_t L_5;
		L_5 = NSUUID_AsIntPtr_mFF36E304598350ACB508AEEFC021B73F1AFBE838_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_6;
		L_6 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_5, NULL);
		return L_6;
	}

IL_0042:
	{
		// if (lhs.HasValue)
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m2AAE72E40025EC977CC9945A84FC5B17BC46B2DC_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// return lhs.Value.AsIntPtr() == IntPtr.Zero;
		NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E L_8;
		L_8 = Nullable_1_get_Value_mB41C4727274E59A00C89A71BE1D3D7506DAF8259((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_8;
		intptr_t L_9;
		L_9 = NSUUID_AsIntPtr_mFF36E304598350ACB508AEEFC021B73F1AFBE838_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_10 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_11;
		L_11 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_9, L_10, NULL);
		return L_11;
	}

IL_006b:
	{
		// if (rhs.HasValue)
		bool L_12;
		L_12 = Nullable_1_get_HasValue_m2AAE72E40025EC977CC9945A84FC5B17BC46B2DC_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_12)
		{
			goto IL_0094;
		}
	}
	{
		// return rhs.Value.AsIntPtr() == IntPtr.Zero;
		NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E L_13;
		L_13 = Nullable_1_get_Value_mB41C4727274E59A00C89A71BE1D3D7506DAF8259((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_13;
		intptr_t L_14;
		L_14 = NSUUID_AsIntPtr_mFF36E304598350ACB508AEEFC021B73F1AFBE838_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 3));
		intptr_t L_15 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_16;
		L_16 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_14, L_15, NULL);
		return L_16;
	}

IL_0094:
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32 UnityEngine.XR.ARKit.NSObject::GetHashCode<UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceImage>>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NSObject_GetHashCode_TisNSEnumerator_1_tF133F34AE814E3594060C7451A62F8D61CA56196_mF6DD9A76F0FFB42AB3D5C03B5388C4D3C3FB91E8_gshared (NSEnumerator_1_tF133F34AE814E3594060C7451A62F8D61CA56196 ___instance0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// GetHash(instance.AsIntPtr()).GetHashCode();
		intptr_t L_0;
		L_0 = NSEnumerator_1_AsIntPtr_m00AC94AC2F3EE699D7ECDB3ED87EE18CE56B6BCF_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		uint64_t L_1;
		L_1 = NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARKit.NSObject::GetHashCode<UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceObject>>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NSObject_GetHashCode_TisNSEnumerator_1_tAABC462E085418EC92D2E5789E5964CA71611A27_m976ED9E896425FB7F8446937308C66BE39DCA348_gshared (NSEnumerator_1_tAABC462E085418EC92D2E5789E5964CA71611A27 ___instance0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// GetHash(instance.AsIntPtr()).GetHashCode();
		intptr_t L_0;
		L_0 = NSEnumerator_1_AsIntPtr_m34296E6743530DEECB8244FBD806118338E21C11_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		uint64_t L_1;
		L_1 = NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARKit.NSObject::GetHashCode<UnityEngine.XR.ARKit.NSMutableSet`1<UnityEngine.XR.ARKit.ARReferenceObject>>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NSObject_GetHashCode_TisNSMutableSet_1_t9AE39D7B43F4C627C4C534C985357DE12C539D17_m9CFB7DB99EE15E6748E9600F1F3500FF771255D2_gshared (NSMutableSet_1_t9AE39D7B43F4C627C4C534C985357DE12C539D17 ___instance0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// GetHash(instance.AsIntPtr()).GetHashCode();
		intptr_t L_0;
		L_0 = NSMutableSet_1_AsIntPtr_m2DA74E4E3892A6DF0FFBD477CD63B8EDB0B5CBEE_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		uint64_t L_1;
		L_1 = NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARKit.NSObject::GetHashCode<UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceImage>>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NSObject_GetHashCode_TisNSSet_1_t563A23404D7A9F2BCD227809220A53E77BC335B5_m0B8F38440C70DC6F73DCF82BCBF48CB35EAC61FE_gshared (NSSet_1_t563A23404D7A9F2BCD227809220A53E77BC335B5 ___instance0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// GetHash(instance.AsIntPtr()).GetHashCode();
		intptr_t L_0;
		L_0 = NSSet_1_AsIntPtr_m716B1A6A05DA60CB7ADA14C76B736BF307A38F9D_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		uint64_t L_1;
		L_1 = NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARKit.NSObject::GetHashCode<UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceObject>>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NSObject_GetHashCode_TisNSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C_m97E95BAFA5804BAB41BC06D07BA07F074509D727_gshared (NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C ___instance0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// GetHash(instance.AsIntPtr()).GetHashCode();
		intptr_t L_0;
		L_0 = NSSet_1_AsIntPtr_m1D429297BD86691BFF8348340F35ECE7077D1AB7_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		uint64_t L_1;
		L_1 = NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARKit.NSObject::GetHashCode<UnityEngine.XR.ARKit.ARReferenceImage>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NSObject_GetHashCode_TisARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136_mE2E523970551A21AD4C4D336FF0161E679415A0E_gshared (ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 ___instance0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// GetHash(instance.AsIntPtr()).GetHashCode();
		intptr_t L_0;
		L_0 = ARReferenceImage_AsIntPtr_mB51CBD770F897DE2CD783829FB7B6E7DB8ADB491_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		uint64_t L_1;
		L_1 = NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARKit.NSObject::GetHashCode<UnityEngine.XR.ARKit.ARReferenceObject>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NSObject_GetHashCode_TisARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379_mC700328DFF4138794A9058A70D1E6E78BE4DBD5B_gshared (ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 ___instance0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// GetHash(instance.AsIntPtr()).GetHashCode();
		intptr_t L_0;
		L_0 = ARReferenceObject_AsIntPtr_mBDCD3D70CB4E239E4363C1838F8340374552EB0E_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		uint64_t L_1;
		L_1 = NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARKit.NSObject::GetHashCode<UnityEngine.XR.ARKit.NSBundle>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NSObject_GetHashCode_TisNSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A_m65C8FA8F356205728F9913534A839F69A8BFC7DE_gshared (NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A ___instance0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// GetHash(instance.AsIntPtr()).GetHashCode();
		intptr_t L_0;
		L_0 = NSBundle_AsIntPtr_m83D50BFA055FADA6614C708A12C8E7B77D9BAB15_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		uint64_t L_1;
		L_1 = NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARKit.NSObject::GetHashCode<UnityEngine.XR.ARKit.NSError>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NSObject_GetHashCode_TisNSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80_m2075E01B139555B4ECEC556FDBE223E2EDFAF4E2_gshared (NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 ___instance0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// GetHash(instance.AsIntPtr()).GetHashCode();
		intptr_t L_0;
		L_0 = NSError_AsIntPtr_mC626DC458106CBF73F0A357C254836751F65CC54_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		uint64_t L_1;
		L_1 = NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARKit.NSObject::GetHashCode<UnityEngine.XR.ARKit.NSMutableString>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NSObject_GetHashCode_TisNSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26_m17BE25B5A4EBC7A2E35A5AA46864FA30239299AA_gshared (NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26 ___instance0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// GetHash(instance.AsIntPtr()).GetHashCode();
		intptr_t L_0;
		L_0 = NSMutableString_AsIntPtr_m5D70D0EE3CFAB410E4D8AE31F92ABABE58BE27F1_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		uint64_t L_1;
		L_1 = NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARKit.NSObject::GetHashCode<UnityEngine.XR.ARKit.NSString>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NSObject_GetHashCode_TisNSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3_mD724394053BA63DF7DE0717960333D195D6E14F4_gshared (NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 ___instance0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// GetHash(instance.AsIntPtr()).GetHashCode();
		intptr_t L_0;
		L_0 = NSString_AsIntPtr_m0B09B41CFB3FAD0DC48FF26CE66D7680834196B2_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		uint64_t L_1;
		L_1 = NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARKit.NSObject::GetHashCode<UnityEngine.XR.ARKit.NSURL>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NSObject_GetHashCode_TisNSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D_mCFF0D7F1ECA4955441A35ACCA32D2086A1BEDAF2_gshared (NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D ___instance0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// GetHash(instance.AsIntPtr()).GetHashCode();
		intptr_t L_0;
		L_0 = NSURL_AsIntPtr_m526C8EDEB47E52D6AA6BBF2C6A954C64B1D5F76B_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		uint64_t L_1;
		L_1 = NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARKit.NSObject::GetHashCode<UnityEngine.XR.ARKit.NSUUID>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NSObject_GetHashCode_TisNSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E_m7AC24BBAB3FF3DDE82C5BBF5FD9323142C52FAE3_gshared (NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E ___instance0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// GetHash(instance.AsIntPtr()).GetHashCode();
		intptr_t L_0;
		L_0 = NSUUID_AsIntPtr_mFF36E304598350ACB508AEEFC021B73F1AFBE838_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		uint64_t L_1;
		L_1 = NSObject_GetHash_m0BE438FBF1045D6DC612B29F7D61D1271E1AD55B(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_0), NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual<UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceImage>,UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceImage>>(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_TisNSEnumerator_1_tF133F34AE814E3594060C7451A62F8D61CA56196_TisNSEnumerator_1_tF133F34AE814E3594060C7451A62F8D61CA56196_mBEB9C68AF3D8E860159C38926AFC855E86067FC3_gshared (NSEnumerator_1_tF133F34AE814E3594060C7451A62F8D61CA56196 ___lhs0, NSEnumerator_1_tF133F34AE814E3594060C7451A62F8D61CA56196 ___rhs1, const RuntimeMethod* method) 
{
	{
		// => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());
		intptr_t L_0;
		L_0 = NSEnumerator_1_AsIntPtr_m00AC94AC2F3EE699D7ECDB3ED87EE18CE56B6BCF_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_1;
		L_1 = NSEnumerator_1_AsIntPtr_m00AC94AC2F3EE699D7ECDB3ED87EE18CE56B6BCF_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_2;
		L_2 = NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual<UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceObject>,UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceObject>>(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_TisNSEnumerator_1_tAABC462E085418EC92D2E5789E5964CA71611A27_TisNSEnumerator_1_tAABC462E085418EC92D2E5789E5964CA71611A27_m9DD423E856A308C662C9D5E0B59A13C873DF6717_gshared (NSEnumerator_1_tAABC462E085418EC92D2E5789E5964CA71611A27 ___lhs0, NSEnumerator_1_tAABC462E085418EC92D2E5789E5964CA71611A27 ___rhs1, const RuntimeMethod* method) 
{
	{
		// => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());
		intptr_t L_0;
		L_0 = NSEnumerator_1_AsIntPtr_m34296E6743530DEECB8244FBD806118338E21C11_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_1;
		L_1 = NSEnumerator_1_AsIntPtr_m34296E6743530DEECB8244FBD806118338E21C11_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_2;
		L_2 = NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual<UnityEngine.XR.ARKit.NSMutableSet`1<UnityEngine.XR.ARKit.ARReferenceObject>,UnityEngine.XR.ARKit.NSMutableSet`1<UnityEngine.XR.ARKit.ARReferenceObject>>(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_TisNSMutableSet_1_t9AE39D7B43F4C627C4C534C985357DE12C539D17_TisNSMutableSet_1_t9AE39D7B43F4C627C4C534C985357DE12C539D17_m3CC1CFE1D1B8035B7D72BC7DABCEFFAC5A2E266E_gshared (NSMutableSet_1_t9AE39D7B43F4C627C4C534C985357DE12C539D17 ___lhs0, NSMutableSet_1_t9AE39D7B43F4C627C4C534C985357DE12C539D17 ___rhs1, const RuntimeMethod* method) 
{
	{
		// => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());
		intptr_t L_0;
		L_0 = NSMutableSet_1_AsIntPtr_m2DA74E4E3892A6DF0FFBD477CD63B8EDB0B5CBEE_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_1;
		L_1 = NSMutableSet_1_AsIntPtr_m2DA74E4E3892A6DF0FFBD477CD63B8EDB0B5CBEE_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_2;
		L_2 = NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual<UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceImage>,UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceImage>>(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_TisNSSet_1_t563A23404D7A9F2BCD227809220A53E77BC335B5_TisNSSet_1_t563A23404D7A9F2BCD227809220A53E77BC335B5_m861F0C710D721B59B294F6475DAF572E2752A1E3_gshared (NSSet_1_t563A23404D7A9F2BCD227809220A53E77BC335B5 ___lhs0, NSSet_1_t563A23404D7A9F2BCD227809220A53E77BC335B5 ___rhs1, const RuntimeMethod* method) 
{
	{
		// => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());
		intptr_t L_0;
		L_0 = NSSet_1_AsIntPtr_m716B1A6A05DA60CB7ADA14C76B736BF307A38F9D_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_1;
		L_1 = NSSet_1_AsIntPtr_m716B1A6A05DA60CB7ADA14C76B736BF307A38F9D_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_2;
		L_2 = NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual<UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceObject>,UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceObject>>(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_TisNSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C_TisNSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C_mE7065C288A2713C08019CF5D04351A8D037C191B_gshared (NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C ___lhs0, NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C ___rhs1, const RuntimeMethod* method) 
{
	{
		// => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());
		intptr_t L_0;
		L_0 = NSSet_1_AsIntPtr_m1D429297BD86691BFF8348340F35ECE7077D1AB7_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_1;
		L_1 = NSSet_1_AsIntPtr_m1D429297BD86691BFF8348340F35ECE7077D1AB7_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_2;
		L_2 = NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual<UnityEngine.XR.ARKit.ARReferenceImage,UnityEngine.XR.ARKit.ARReferenceImage>(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_TisARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136_TisARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136_mD06B5F861B33F0983CFA42FFD4D21E0709F92C83_gshared (ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 ___lhs0, ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 ___rhs1, const RuntimeMethod* method) 
{
	{
		// => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());
		intptr_t L_0;
		L_0 = ARReferenceImage_AsIntPtr_mB51CBD770F897DE2CD783829FB7B6E7DB8ADB491_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_1;
		L_1 = ARReferenceImage_AsIntPtr_mB51CBD770F897DE2CD783829FB7B6E7DB8ADB491_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_2;
		L_2 = NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual<UnityEngine.XR.ARKit.ARReferenceObject,UnityEngine.XR.ARKit.ARReferenceObject>(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_TisARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379_TisARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379_m16289E9BB2047ADDFFBBCFDFEC06F4C70EC1DE5D_gshared (ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 ___lhs0, ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 ___rhs1, const RuntimeMethod* method) 
{
	{
		// => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());
		intptr_t L_0;
		L_0 = ARReferenceObject_AsIntPtr_mBDCD3D70CB4E239E4363C1838F8340374552EB0E_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_1;
		L_1 = ARReferenceObject_AsIntPtr_mBDCD3D70CB4E239E4363C1838F8340374552EB0E_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_2;
		L_2 = NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual<UnityEngine.XR.ARKit.NSBundle,UnityEngine.XR.ARKit.NSBundle>(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_TisNSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A_TisNSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A_m1B7868DF281DDCEB92A9FF136225E17585273746_gshared (NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A ___lhs0, NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A ___rhs1, const RuntimeMethod* method) 
{
	{
		// => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());
		intptr_t L_0;
		L_0 = NSBundle_AsIntPtr_m83D50BFA055FADA6614C708A12C8E7B77D9BAB15_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_1;
		L_1 = NSBundle_AsIntPtr_m83D50BFA055FADA6614C708A12C8E7B77D9BAB15_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_2;
		L_2 = NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual<UnityEngine.XR.ARKit.NSError,UnityEngine.XR.ARKit.NSError>(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_TisNSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80_TisNSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80_m5682C5254885B167B4F9DA3C2E2DA1DC05C27522_gshared (NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 ___lhs0, NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 ___rhs1, const RuntimeMethod* method) 
{
	{
		// => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());
		intptr_t L_0;
		L_0 = NSError_AsIntPtr_mC626DC458106CBF73F0A357C254836751F65CC54_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_1;
		L_1 = NSError_AsIntPtr_mC626DC458106CBF73F0A357C254836751F65CC54_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_2;
		L_2 = NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual<UnityEngine.XR.ARKit.NSMutableString,UnityEngine.XR.ARKit.NSMutableString>(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_TisNSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26_TisNSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26_m3DB6BF67C9B7F53B519209886CA5A5D0D4AB92BC_gshared (NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26 ___lhs0, NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26 ___rhs1, const RuntimeMethod* method) 
{
	{
		// => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());
		intptr_t L_0;
		L_0 = NSMutableString_AsIntPtr_m5D70D0EE3CFAB410E4D8AE31F92ABABE58BE27F1_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_1;
		L_1 = NSMutableString_AsIntPtr_m5D70D0EE3CFAB410E4D8AE31F92ABABE58BE27F1_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_2;
		L_2 = NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual<UnityEngine.XR.ARKit.NSString,UnityEngine.XR.ARKit.NSString>(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_TisNSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3_TisNSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3_mA681AB0617BFE41826A8FA623DE8E458F8C9E0D2_gshared (NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 ___lhs0, NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 ___rhs1, const RuntimeMethod* method) 
{
	{
		// => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());
		intptr_t L_0;
		L_0 = NSString_AsIntPtr_m0B09B41CFB3FAD0DC48FF26CE66D7680834196B2_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_1;
		L_1 = NSString_AsIntPtr_m0B09B41CFB3FAD0DC48FF26CE66D7680834196B2_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_2;
		L_2 = NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual<UnityEngine.XR.ARKit.NSURL,UnityEngine.XR.ARKit.NSURL>(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_TisNSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D_TisNSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D_mD33E7DE425A9AB19292955EB9D23C0522DCB5750_gshared (NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D ___lhs0, NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D ___rhs1, const RuntimeMethod* method) 
{
	{
		// => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());
		intptr_t L_0;
		L_0 = NSURL_AsIntPtr_m526C8EDEB47E52D6AA6BBF2C6A954C64B1D5F76B_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_1;
		L_1 = NSURL_AsIntPtr_m526C8EDEB47E52D6AA6BBF2C6A954C64B1D5F76B_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_2;
		L_2 = NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARKit.NSObject::IsEqual<UnityEngine.XR.ARKit.NSUUID,UnityEngine.XR.ARKit.NSUUID>(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NSObject_IsEqual_TisNSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E_TisNSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E_mA8F8B40644E8FF8935767E05302D58F76F4FE1AC_gshared (NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E ___lhs0, NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E ___rhs1, const RuntimeMethod* method) 
{
	{
		// => IsEqual(lhs.AsIntPtr(), rhs.AsIntPtr());
		intptr_t L_0;
		L_0 = NSUUID_AsIntPtr_mFF36E304598350ACB508AEEFC021B73F1AFBE838_inline((&___lhs0), il2cpp_rgctx_method(method->rgctx_data, 1));
		intptr_t L_1;
		L_1 = NSUUID_AsIntPtr_mFF36E304598350ACB508AEEFC021B73F1AFBE838_inline((&___rhs1), il2cpp_rgctx_method(method->rgctx_data, 3));
		bool L_2;
		L_2 = NSObject_IsEqual_m9DAACD50F3050B8BE5AC68A12B3A9990D841EE65(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARKit.NSObject::Retain<UnityEngine.XR.ARKit.NSBundle>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NSObject_Retain_TisNSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A_m7362BF8774183EBA955576438A455CB006BE14AB_gshared (NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A ___obj0, const RuntimeMethod* method) 
{
	{
		// public static void Retain<T>(T obj) where T : struct, INSObject => Retain(obj.AsIntPtr());
		intptr_t L_0;
		L_0 = NSBundle_AsIntPtr_m83D50BFA055FADA6614C708A12C8E7B77D9BAB15_inline((&___obj0), il2cpp_rgctx_method(method->rgctx_data, 1));
		NSObject_Retain_m96379E36E20F7B838B2C658BB109020E5B927A29(L_0, NULL);
		return;
	}
}
// System.String UnityEngine.XR.ARKit.NSObject::ToString<UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceImage>>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSObject_ToString_TisNSEnumerator_1_tF133F34AE814E3594060C7451A62F8D61CA56196_m3E2FCB437CD46483115973964CB481F6F17A4FB8_gshared (NSEnumerator_1_tF133F34AE814E3594060C7451A62F8D61CA56196 ___instance0, const RuntimeMethod* method) 
{
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// using (var description = GetDescription(instance.AsIntPtr()))
		intptr_t L_0;
		L_0 = NSEnumerator_1_AsIntPtr_m00AC94AC2F3EE699D7ECDB3ED87EE18CE56B6BCF_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_1;
		L_1 = NSObject_GetDescription_m3BCCD06E48549ED9EB540558E97ECFA219EC2B01(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				NSString_Dispose_m96268625CA15EB302423D3F0F078774E9C0852F5((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return description.ToString();
			String_t* L_2;
			L_2 = NSString_ToString_mB6ED91B90F8876BD139F16BFA3933334E18ECAF7((&V_0), NULL);
			V_1 = L_2;
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.String UnityEngine.XR.ARKit.NSObject::ToString<UnityEngine.XR.ARKit.NSEnumerator`1<UnityEngine.XR.ARKit.ARReferenceObject>>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSObject_ToString_TisNSEnumerator_1_tAABC462E085418EC92D2E5789E5964CA71611A27_m1BE39165749781DDDC5CC12BF79B6D8D633F724C_gshared (NSEnumerator_1_tAABC462E085418EC92D2E5789E5964CA71611A27 ___instance0, const RuntimeMethod* method) 
{
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// using (var description = GetDescription(instance.AsIntPtr()))
		intptr_t L_0;
		L_0 = NSEnumerator_1_AsIntPtr_m34296E6743530DEECB8244FBD806118338E21C11_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_1;
		L_1 = NSObject_GetDescription_m3BCCD06E48549ED9EB540558E97ECFA219EC2B01(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				NSString_Dispose_m96268625CA15EB302423D3F0F078774E9C0852F5((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return description.ToString();
			String_t* L_2;
			L_2 = NSString_ToString_mB6ED91B90F8876BD139F16BFA3933334E18ECAF7((&V_0), NULL);
			V_1 = L_2;
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.String UnityEngine.XR.ARKit.NSObject::ToString<UnityEngine.XR.ARKit.NSMutableSet`1<UnityEngine.XR.ARKit.ARReferenceObject>>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSObject_ToString_TisNSMutableSet_1_t9AE39D7B43F4C627C4C534C985357DE12C539D17_m5DE6AC31375B45B293AAD246D0937EB188661FCD_gshared (NSMutableSet_1_t9AE39D7B43F4C627C4C534C985357DE12C539D17 ___instance0, const RuntimeMethod* method) 
{
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// using (var description = GetDescription(instance.AsIntPtr()))
		intptr_t L_0;
		L_0 = NSMutableSet_1_AsIntPtr_m2DA74E4E3892A6DF0FFBD477CD63B8EDB0B5CBEE_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_1;
		L_1 = NSObject_GetDescription_m3BCCD06E48549ED9EB540558E97ECFA219EC2B01(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				NSString_Dispose_m96268625CA15EB302423D3F0F078774E9C0852F5((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return description.ToString();
			String_t* L_2;
			L_2 = NSString_ToString_mB6ED91B90F8876BD139F16BFA3933334E18ECAF7((&V_0), NULL);
			V_1 = L_2;
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.String UnityEngine.XR.ARKit.NSObject::ToString<UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceImage>>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSObject_ToString_TisNSSet_1_t563A23404D7A9F2BCD227809220A53E77BC335B5_m424DC472970C218FE10EE7E181BF4C6B117449BC_gshared (NSSet_1_t563A23404D7A9F2BCD227809220A53E77BC335B5 ___instance0, const RuntimeMethod* method) 
{
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// using (var description = GetDescription(instance.AsIntPtr()))
		intptr_t L_0;
		L_0 = NSSet_1_AsIntPtr_m716B1A6A05DA60CB7ADA14C76B736BF307A38F9D_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_1;
		L_1 = NSObject_GetDescription_m3BCCD06E48549ED9EB540558E97ECFA219EC2B01(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				NSString_Dispose_m96268625CA15EB302423D3F0F078774E9C0852F5((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return description.ToString();
			String_t* L_2;
			L_2 = NSString_ToString_mB6ED91B90F8876BD139F16BFA3933334E18ECAF7((&V_0), NULL);
			V_1 = L_2;
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.String UnityEngine.XR.ARKit.NSObject::ToString<UnityEngine.XR.ARKit.NSSet`1<UnityEngine.XR.ARKit.ARReferenceObject>>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSObject_ToString_TisNSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C_mF927632FC935585418840EAC0B7E74AF4DB8AC16_gshared (NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C ___instance0, const RuntimeMethod* method) 
{
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// using (var description = GetDescription(instance.AsIntPtr()))
		intptr_t L_0;
		L_0 = NSSet_1_AsIntPtr_m1D429297BD86691BFF8348340F35ECE7077D1AB7_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_1;
		L_1 = NSObject_GetDescription_m3BCCD06E48549ED9EB540558E97ECFA219EC2B01(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				NSString_Dispose_m96268625CA15EB302423D3F0F078774E9C0852F5((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return description.ToString();
			String_t* L_2;
			L_2 = NSString_ToString_mB6ED91B90F8876BD139F16BFA3933334E18ECAF7((&V_0), NULL);
			V_1 = L_2;
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.String UnityEngine.XR.ARKit.NSObject::ToString<UnityEngine.XR.ARKit.ARReferenceImage>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSObject_ToString_TisARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136_m5CC8771AB4B325396F6B933897B1F5C353066F7B_gshared (ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136 ___instance0, const RuntimeMethod* method) 
{
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// using (var description = GetDescription(instance.AsIntPtr()))
		intptr_t L_0;
		L_0 = ARReferenceImage_AsIntPtr_mB51CBD770F897DE2CD783829FB7B6E7DB8ADB491_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_1;
		L_1 = NSObject_GetDescription_m3BCCD06E48549ED9EB540558E97ECFA219EC2B01(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				NSString_Dispose_m96268625CA15EB302423D3F0F078774E9C0852F5((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return description.ToString();
			String_t* L_2;
			L_2 = NSString_ToString_mB6ED91B90F8876BD139F16BFA3933334E18ECAF7((&V_0), NULL);
			V_1 = L_2;
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.String UnityEngine.XR.ARKit.NSObject::ToString<UnityEngine.XR.ARKit.ARReferenceObject>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSObject_ToString_TisARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379_m1CB743034F509249D28B6C56FB5B407F4670F43A_gshared (ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379 ___instance0, const RuntimeMethod* method) 
{
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// using (var description = GetDescription(instance.AsIntPtr()))
		intptr_t L_0;
		L_0 = ARReferenceObject_AsIntPtr_mBDCD3D70CB4E239E4363C1838F8340374552EB0E_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_1;
		L_1 = NSObject_GetDescription_m3BCCD06E48549ED9EB540558E97ECFA219EC2B01(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				NSString_Dispose_m96268625CA15EB302423D3F0F078774E9C0852F5((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return description.ToString();
			String_t* L_2;
			L_2 = NSString_ToString_mB6ED91B90F8876BD139F16BFA3933334E18ECAF7((&V_0), NULL);
			V_1 = L_2;
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.String UnityEngine.XR.ARKit.NSObject::ToString<UnityEngine.XR.ARKit.NSBundle>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSObject_ToString_TisNSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A_mF1B94189EE2C82520A29B475AC4F33549F7A77AC_gshared (NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A ___instance0, const RuntimeMethod* method) 
{
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// using (var description = GetDescription(instance.AsIntPtr()))
		intptr_t L_0;
		L_0 = NSBundle_AsIntPtr_m83D50BFA055FADA6614C708A12C8E7B77D9BAB15_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_1;
		L_1 = NSObject_GetDescription_m3BCCD06E48549ED9EB540558E97ECFA219EC2B01(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				NSString_Dispose_m96268625CA15EB302423D3F0F078774E9C0852F5((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return description.ToString();
			String_t* L_2;
			L_2 = NSString_ToString_mB6ED91B90F8876BD139F16BFA3933334E18ECAF7((&V_0), NULL);
			V_1 = L_2;
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.String UnityEngine.XR.ARKit.NSObject::ToString<UnityEngine.XR.ARKit.NSError>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSObject_ToString_TisNSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80_m08BDEB7BB0009066303F935EA2A2B64DE9049BB7_gshared (NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80 ___instance0, const RuntimeMethod* method) 
{
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// using (var description = GetDescription(instance.AsIntPtr()))
		intptr_t L_0;
		L_0 = NSError_AsIntPtr_mC626DC458106CBF73F0A357C254836751F65CC54_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_1;
		L_1 = NSObject_GetDescription_m3BCCD06E48549ED9EB540558E97ECFA219EC2B01(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				NSString_Dispose_m96268625CA15EB302423D3F0F078774E9C0852F5((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return description.ToString();
			String_t* L_2;
			L_2 = NSString_ToString_mB6ED91B90F8876BD139F16BFA3933334E18ECAF7((&V_0), NULL);
			V_1 = L_2;
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.String UnityEngine.XR.ARKit.NSObject::ToString<UnityEngine.XR.ARKit.NSURL>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSObject_ToString_TisNSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D_m0A270712F8FDAF174AC59CB011198CEC3CDDB36C_gshared (NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D ___instance0, const RuntimeMethod* method) 
{
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// using (var description = GetDescription(instance.AsIntPtr()))
		intptr_t L_0;
		L_0 = NSURL_AsIntPtr_m526C8EDEB47E52D6AA6BBF2C6A954C64B1D5F76B_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_1;
		L_1 = NSObject_GetDescription_m3BCCD06E48549ED9EB540558E97ECFA219EC2B01(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				NSString_Dispose_m96268625CA15EB302423D3F0F078774E9C0852F5((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return description.ToString();
			String_t* L_2;
			L_2 = NSString_ToString_mB6ED91B90F8876BD139F16BFA3933334E18ECAF7((&V_0), NULL);
			V_1 = L_2;
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// System.String UnityEngine.XR.ARKit.NSObject::ToString<UnityEngine.XR.ARKit.NSUUID>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NSObject_ToString_TisNSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E_mBABE1C2D1AF4AC58CFF8EA22665D73F75881D882_gshared (NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E ___instance0, const RuntimeMethod* method) 
{
	NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		// using (var description = GetDescription(instance.AsIntPtr()))
		intptr_t L_0;
		L_0 = NSUUID_AsIntPtr_mFF36E304598350ACB508AEEFC021B73F1AFBE838_inline((&___instance0), il2cpp_rgctx_method(method->rgctx_data, 1));
		NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3 L_1;
		L_1 = NSObject_GetDescription_m3BCCD06E48549ED9EB540558E97ECFA219EC2B01(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				NSString_Dispose_m96268625CA15EB302423D3F0F078774E9C0852F5((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return description.ToString();
			String_t* L_2;
			L_2 = NSString_ToString_mB6ED91B90F8876BD139F16BFA3933334E18ECAF7((&V_0), NULL);
			V_1 = L_2;
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		String_t* L_3 = V_1;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mA3DB8449F601B26B78CAD9A1531A92336AA3780E_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t88F04A6A2FC556B8A7EE20276F7A2BB13F420AB9 L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m181D7F12EB826B7D6B73742BFD85A667D533BABA_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.ByteEnum>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m9674A4F7408E91C625C555944F3A0DF7689901AE_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t54E0291E09800953C59A8309BA587CF39E35A92A L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mC82DECEB698D4AABF41EE9DF0E1FC00C8803BD3A_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tDF6A1978B5813BF4DAD7948E398009FFC9BEA38D L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.ModifiableContactPair>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mFEB8AEAAAFF7FA2C9F9DB47C43E9EBA4FB2B85FA_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tA04FF6E7BE3D24B3E6351C63BF7229421DFE1259 L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mCB1ED8108D346EEA8BDCBC77907AE885A5E72441_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t4020B6981295FB915DCE82EF368535F680C13A49 L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Quaternion>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mD7CEBD73999042AAC575D52A40749352CD4C0D60_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t033CD013BF2CA1D8A5909650F2E75960C527E638 L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.UInt64>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6040A2644049EE10F18319F7950279CDC50BF2AC_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector2>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8CC23F9B357DD3415FAB8C319466BEAA6365AF44_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector3>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9A085600C320307AD71C833F0352693C75103D4C_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector4>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7EEC18D0EF945E4DD139A82B595A3BC1747697C2_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE3A71FEF49167DCD4DEFE7E6EF990295BB1F2E30 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_m6A608FF6A0363A6BBE9817F3BA5EB29377A3BEBC_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	NativeArray_1_tE3A71FEF49167DCD4DEFE7E6EF990295BB1F2E30 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tE3A71FEF49167DCD4DEFE7E6EF990295BB1F2E30 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tE3A71FEF49167DCD4DEFE7E6EF990295BB1F2E30 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tE3A71FEF49167DCD4DEFE7E6EF990295BB1F2E30));
		void* L_0 = ___dataPointer0;
		(&V_1)->___m_Buffer_0 = L_0;
		int32_t L_1 = ___length1;
		(&V_1)->___m_Length_1 = L_1;
		int32_t L_2 = ___allocator2;
		(&V_1)->___m_AllocatorLabel_2 = L_2;
		NativeArray_1_tE3A71FEF49167DCD4DEFE7E6EF990295BB1F2E30 L_3 = V_1;
		V_0 = L_3;
		NativeArray_1_tE3A71FEF49167DCD4DEFE7E6EF990295BB1F2E30 L_4 = V_0;
		V_2 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tE3A71FEF49167DCD4DEFE7E6EF990295BB1F2E30 L_5 = V_2;
		return L_5;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.BoundedPlane>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_mF3F5CA9830DAF701AD91BD01D78440AABC084116_gshared (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_m6D69FA3DDA1BBB8136FC1344C11801E7071CBF8E_gshared (NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t280B4C6187922FE73AC16AC7F23255AE192676E2 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Int32>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD2D9DC546B80A05000B107C8E09FAA4BED3B2144_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARKit.ManagedReferenceImage>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337_m1F7B0F50FEA16E772B0622FEE924C11FBA560D4C_gshared (NativeArray_1_t4619D98FC1BF9FD88B71F3D8D30916CA2A033241 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t4619D98FC1BF9FD88B71F3D8D30916CA2A033241 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.MeshTransform>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_m99AC0C898B3F825635FF50C6DB949BF88F6EA791_gshared (NativeArray_1_tA41870B57F75C8F0729AE0AC70060D0D7841D236 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tA41870B57F75C8F0729AE0AC70060D0D7841D236 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.TrackableId>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m32DA5E8A5EB26D4BC8A9043C148F56FE6DC287AA_gshared (NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t7A26520FDE477098D7B2CC8D14E778889D50A15E L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2B0D2CB30FDAA96454AA1E55D86254BBE984DA53_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB893A445FD5C5759C9BEDB2EF5037667D4985897_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRAnchor>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m0FBF2D018CF7D32AB1A46A5398E1D50526A9F0C8_gshared (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_m3F7D84ADAD5B4373D8B1D178333CD5AD65CA826F_gshared (NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m295A546A740130385DC2380594B002392A961F7E_gshared (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRFace>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m89EB0658556F6B605E8D65EE5F68E31C7BFC28E3_gshared (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRHumanBody>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m87CFF612A985E73F123C41072ED829BDD6A43CFF_gshared (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m79F3A100310CDC9C897DA4F5F27674A251930734_gshared (NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRParticipant>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_m404269833648A3C28FC12B38F0934F48CBC53318_gshared (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRPointCloud>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m61ACE269A99B6B265E45BDA182B500A079BA93F5_gshared (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRRaycast>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mC56E0B5DD47DCCA46B9E1648A7F8A19C90212506_gshared (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRRaycastHit>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_mD29C3B288523837A7041808B009118D6884EBFDA_gshared (NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRReferencePoint>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_mC42B8EFDFA5E19488F09429B4229C0D4A69CAE9C_gshared (NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_mF99755075FF6D2ADDCC2E06B7CA8DDAB5234985A_gshared (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRTrackedImage>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m023763C9C03A9C35194D2C4F26C899BAD0B89FDA_gshared (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.XRTrackedObject>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mF2CB1DC411B52BA6B9D76B12B03B26E66EE5F47F_gshared (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<System.Int32>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mC995F1C4189FAE6A2C99CB5E300DBC37F42C8A6B_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2A9E6177505744A6E0AD77AC7E1328C59C926BA8_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA130037B6C4CF7B12123658533F7D99560925865_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___nativeArray0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.___m_Buffer_0;
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.BoundedPlane>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C NativeCopyUtility_CreateArrayFilledWithValue_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m0B3165E7EAA4FE1A9FE3EE1F264D20DD7BFD5E7B_gshared (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mBFCDCB65BA72515FBC46506A6FF5600934A797E8((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C L_3 = L_2;
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_4 = ___value0;
		((  void (*) (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRAnchor>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A NativeCopyUtility_CreateArrayFilledWithValue_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mE98518CCB392D19534E6AA21868F7D7B91709C5C_gshared (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mF0E54F4AC97D8FD94CE48D98AF76A275ABFA9EA7((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A L_3 = L_2;
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_4 = ___value0;
		((  void (*) (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6 NativeCopyUtility_CreateArrayFilledWithValue_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_mB0F297DB4C8B39625A9C4FECC7445E51F91F2E6A_gshared (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m7C2B0B4FFC022B9B16BF6FB2C978DCCC66F345EE((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6 L_3 = L_2;
		XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 L_4 = ___value0;
		((  void (*) (NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6, XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 NativeCopyUtility_CreateArrayFilledWithValue_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m1186BA1A3FB22F144960EFD13602C3C2216C4DC8_gshared (XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m96640764DCE1F1900150DA0FC1D992D9DC52687D((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 L_3 = L_2;
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 L_4 = ___value0;
		((  void (*) (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2, XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRFace>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 NativeCopyUtility_CreateArrayFilledWithValue_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m046E963E11DFA9E6D8A58C5843530B55DCBD29AD_gshared (XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mCA06C3646E600B8615C70CB3DA97038528B18498((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 L_3 = L_2;
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB L_4 = ___value0;
		((  void (*) (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009, XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRHumanBody>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 NativeCopyUtility_CreateArrayFilledWithValue_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m91C56E373771C01E633E080CF026074D24217C3C_gshared (XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m35D30C4E671ACF3FD4F35E6442130E1969FF47FB((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 L_3 = L_2;
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 L_4 = ___value0;
		((  void (*) (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0, XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386 NativeCopyUtility_CreateArrayFilledWithValue_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m5979EEFC2CDC06994332DAACF24FB015AA8F9363_gshared (XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m66F1E39CC8189C37896E6B3DEA4DBC658B5359DD((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386 L_3 = L_2;
		XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 L_4 = ___value0;
		((  void (*) (NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386, XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRParticipant>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 NativeCopyUtility_CreateArrayFilledWithValue_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mA4D8DF9B2172AD0A6203C3E38F70CA72EA89E40A_gshared (XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mD7AA8125519C235C250E28C485752B186B718D1F((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 L_3 = L_2;
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 L_4 = ___value0;
		((  void (*) (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18, XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRPointCloud>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 NativeCopyUtility_CreateArrayFilledWithValue_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m5A82D69222D70FB1D1D3F8DE833F84C1E80E0BAC_gshared (XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mDC183B8E025B1A55DC178981EDE28DC1A82261D7((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 L_3 = L_2;
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C L_4 = ___value0;
		((  void (*) (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0, XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRRaycast>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 NativeCopyUtility_CreateArrayFilledWithValue_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mEB44B8A682264717B44069C2C7F12402869CD7F1_gshared (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mDF68F0A55BC88CA530F3FC16BD7C0D5C1DA4BF08((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 L_3 = L_2;
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_4 = ___value0;
		((  void (*) (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRReferencePoint>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B NativeCopyUtility_CreateArrayFilledWithValue_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_m5449196D7302BBF0737D3A9531319466750E3A96_gshared (XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m30CA19DF7A43467931AA83BA989BAE13250577B0((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B L_3 = L_2;
		XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 L_4 = ___value0;
		((  void (*) (NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B, XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C NativeCopyUtility_CreateArrayFilledWithValue_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m21264A082EF30CB05E247A0B8DBA4B4A61C2DE2D_gshared (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m2D0E6AF1C419402888254ABD76AFD00EB86E24D7((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_3 = L_2;
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_4 = ___value0;
		((  void (*) (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRTrackedImage>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m7FE1027472937F29C1303EBCD69EB9FF420A5121_gshared (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m3F792CFB2FF29DB8098DDF0BFEE0FCCBAC8F1A19((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 L_3 = L_2;
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_4 = ___value0;
		((  void (*) (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66, XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRTrackedObject>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m957DDCA98AC8F913B7A882DB8967417CAACDD4D8_gshared (XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) 
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m02536E80A033E37A268BB288FE78991C3D04DC1B((&L_2), L_0, L_1, (int32_t)0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B L_3 = L_2;
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 L_4 = ___value0;
		((  void (*) (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B, XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.BoundedPlane>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m2AEFEE9AB59FEB7B2285E4681B828306675C9052_gshared (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C ___array0, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.XRAnchor>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mFD25CE8592D33A36F07097B5F0F264A9E5F974DD_gshared (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A ___array0, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_mF0EB27E0DEB45E73A75BCDC47D749F8F45F4785A_gshared (NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6 ___array0, XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6 L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mF5EED1132BA4E3F078ABB1D77391F85D2C362ED3_gshared (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 ___array0, XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.XRFace>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mEF979C95490DA1D4EBE00168CEDE5D9CD1EAD33D_gshared (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 ___array0, XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.XRHumanBody>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mB26A6AAF91D8B86D19AD794FA6589CC54276F7A2_gshared (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 ___array0, XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_mB1132B1B8DE23A712E0CF6C5185D26D9977A82B4_gshared (NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386 ___array0, XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386 L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.XRParticipant>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mC947F5081695B2A0C00DE5C79175DD9513192195_gshared (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 ___array0, XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.XRPointCloud>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m7284DE28B51AEAC48F985EED8D69B63DBCE78395_gshared (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 ___array0, XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.XRRaycast>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m6A158CE920EDABA95EF5FFBAB9C73944D0AA86AF_gshared (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 ___array0, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.XRReferencePoint>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_mC1D7751CAE75040A5D23B6AB978831997383A18E_gshared (NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B ___array0, XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_mEAA61E620D8DB337113AB8CFFC84DE18F91B627C_gshared (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C ___array0, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.XRTrackedImage>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m2B21D728D081A37DE956DEDA0A332596438FB26E_gshared (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 ___array0, XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.NativeCopyUtility::FillArrayWithValue<UnityEngine.XR.ARSubsystems.XRTrackedObject>(Unity.Collections.NativeArray`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeCopyUtility_FillArrayWithValue_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mF0361E92B5F60DD213A50949AABFC54264247DED_gshared (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B ___array0, XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___value1, const RuntimeMethod* method) 
{
	{
		// if (array.Length == 0)
		int32_t L_0;
		L_0 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// UnsafeUtility.MemCpyReplicate(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.AddressOf(ref value),
		//     UnsafeUtility.SizeOf<T>(),
		//     array.Length);
		NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B L_1 = ___array0;
		void* L_2;
		L_2 = ((  void* (*) (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_3;
		L_3 = il2cpp_codegen_unsafe_cast((&___value1));
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		UnsafeUtility_MemCpyReplicate_m0432429C10859D5BE79799A6E98B44741244287F(L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.BoundedPlane>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C NativeCopyUtility_PtrToNativeArrayWithDefault_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m81A5EBBFE16A88F76E5FEC15CE65A29404BE85BA_gshared (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C L_3;
		L_3 = ((  NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C (*) (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_t36CA775B66FDBC3A63AF9ABB6E32E8F6B41F824C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRAnchor>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m67B07EE2F0F39318EBCE447A32F59229E5849E03_gshared (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A L_3;
		L_3 = ((  NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A (*) (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_tAE2F2F17B6A4F98F44324897A00F6A9D2151DC3A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_m703344A67C5AC2A962E59337A7E50F2AB13F3600_gshared (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6 L_3;
		L_3 = ((  NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6 (*) (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6 L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_tAE1C2CA4717E405609ED9F96E485A9FE00E622D6, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mC268C96EA513A12D149DB7DD98FD45B14FAAED6C_gshared (XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 L_3;
		L_3 = ((  NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 (*) (XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2 L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_t27110FD746D2F878E09169A93400CE1027082DA2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRFace>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m68C148FCDE1D73485F195AEC618D858B4262F130_gshared (XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 L_3;
		L_3 = ((  NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 (*) (XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009 L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_t944085523DA105D6BBD308E9159C874CE60B3009, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRHumanBody>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mFBE6A67140E3A7B0C381F58D8BAF7E82C9112DE9_gshared (XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 L_3;
		L_3 = ((  NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 (*) (XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0 L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_t5B6781386C81B6DAD0A46599F36186F644DC17D0, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_mEB61CBD8BF5F1739C9A4C0FB84B189BCCBC9775D_gshared (XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386 L_3;
		L_3 = ((  NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386 (*) (XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386 L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_t4998E9C3FBA8DDD4E076225A6D136D48D0C25386, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRParticipant>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_m0F0DFA6CF8BD9B8E924822206AA4B1672617D1DB_gshared (XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 L_3;
		L_3 = ((  NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 (*) (XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18 L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_t79743910830B59034ED2B060D4E1D0EC70226E18, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRPointCloud>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mF13AB06CC703EF88ACF74D021D75DEB3296DA31F_gshared (XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 L_3;
		L_3 = ((  NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 (*) (XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0 L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_t50096787A7C7D874EC2A53B03F61419BE240D9C0, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRRaycast>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m9D219AC5C947023807407B8A78D0B985F02FEB41_gshared (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 L_3;
		L_3 = ((  NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 (*) (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t43267D13364B938F522273E473A86557B971CD63 L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_t43267D13364B938F522273E473A86557B971CD63, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRReferencePoint>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_m36A9267786EE97F0EBD5821B497168F6D69A5D98_gshared (XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B L_3;
		L_3 = ((  NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B (*) (XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_t25DC732E6C086A8D9E0F2322692DDD67260AF33B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m354F27CE0E63D75D5FF70ADFE712D0E08D1FF9A3_gshared (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_3;
		L_3 = ((  NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C (*) (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTrackedImage>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_mA66DFA699DF62924EF7B027BF00D52BD3593E8D0_gshared (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 L_3;
		L_3 = ((  NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 (*) (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66 L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_tC503E651BA1B71B961BBC7485E923DD431EFCC66, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTrackedObject>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mB88AA57DAC4DABA9795CE41DCFD3DC0EE918FA16_gshared (XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method) 
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B L_3;
		L_3 = ((  NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B (*) (XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B L_4 = L_3;
		void* L_5;
		L_5 = ((  void* (*) (NativeArray_1_t0F4B76D476AFCD1C3D325B2AF615317AF55BE50B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90(L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSliceExtensions::Slice<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSliceExtensions_Slice_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m55D1C0502E68602CADC5C0CEA2FAAB0EA47ED380_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___thisArray0, const RuntimeMethod* method) 
{
	NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = ___thisArray0;
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeSlice_1__ctor_m50E6F98E8A57DFA42B86CB43A6925D74D2CB2958((&L_1), L_0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_2 = V_0;
		return L_2;
	}
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::ConvertExistingDataToNativeSlice<System.Byte>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDADFC66933C24DC5F23278CE18A71A1BC9DCCD3A_gshared (void* ___dataPointer0, int32_t ___stride1, int32_t ___length2, const RuntimeMethod* method) 
{
	NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___length2;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___length2;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDADFC66933C24DC5F23278CE18A71A1BC9DCCD3A_RuntimeMethod_var)));
	}

IL_0024:
	{
		int32_t L_7 = ___stride1;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___stride1;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDADFC66933C24DC5F23278CE18A71A1BC9DCCD3A_RuntimeMethod_var)));
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA));
		int32_t L_14 = ___stride1;
		(&V_3)->___m_Stride_1 = L_14;
		void* L_15 = ___dataPointer0;
		(&V_3)->___m_Buffer_0 = (uint8_t*)L_15;
		int32_t L_16 = ___length2;
		(&V_3)->___m_Length_2 = L_16;
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_17 = V_3;
		V_0 = L_17;
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_18 = V_0;
		V_4 = L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_19 = V_4;
		return L_19;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9A2B4BB7177667D1A9E3AC345815C6478C6B441_gshared (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___nativeSlice0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_0 = ___nativeSlice0;
		uint8_t* L_1 = (uint8_t*)L_0.___m_Buffer_0;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::GetUnsafeReadOnlyPtr<System.Byte>(Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0B676DC51FACE97ED8BDBE80FDEE1D024D852A62_gshared (NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___nativeSlice0, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	{
		NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA L_0 = ___nativeSlice0;
		uint8_t* L_1 = (uint8_t*)L_0.___m_Buffer_0;
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.XR.ARKit.NativeView UnityEngine.XR.ARKit.NativeViewExtensions::AsNativeView<UnityEngine.XR.ARKit.ManagedReferenceImage>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeView_t8847AA803BCE2115FE1B924903924BF62265510A NativeViewExtensions_AsNativeView_TisManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337_m6ACB4BD4D1F63DBCCD8212B789A178555FBB9C93_gshared (NativeArray_1_t4619D98FC1BF9FD88B71F3D8D30916CA2A033241 ___array0, const RuntimeMethod* method) 
{
	NativeView_t8847AA803BCE2115FE1B924903924BF62265510A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static unsafe NativeView AsNativeView<T>(this NativeArray<T> array) where T : struct => new NativeView
		// {
		//     data = array.GetUnsafePtr(),
		//     count = array.Length
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(NativeView_t8847AA803BCE2115FE1B924903924BF62265510A));
		NativeArray_1_t4619D98FC1BF9FD88B71F3D8D30916CA2A033241 L_0 = ___array0;
		void* L_1;
		L_1 = ((  void* (*) (NativeArray_1_t4619D98FC1BF9FD88B71F3D8D30916CA2A033241, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___data_0 = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___array0))->___m_Length_1);
		(&V_0)->___count_1 = L_2;
		NativeView_t8847AA803BCE2115FE1B924903924BF62265510A L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<System.Int32>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m910F55DA116EEF0221ADFF22689A9842AC46C5FE_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___values0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisRuntimeObject_m3F9C13D115E06F948F111CF204A61830851F4952_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = ___values0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Vector2>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m93B5F242BED5886BC6615790C453095C3681BD24_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_1 = ___values0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Vector3>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB85A915B5401A23E2802BF2945052148967220E2_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___values0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = ___values0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_FindObjectOfType_mCA5E2E9BF64B7203CE8B1ECFCFAA0370606984D4(L_1, (bool)0, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Object_FindObjectsOfType_m78C878D4981628D7C0F583714B6BA19B95F3BE44(L_1, (bool)0, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF704B54D833421164E45E576DFD279921246BCEA);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___original0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_m4D03BBBD975CCCCB3F9438864E3E8BF54E1E3F26(L_0, _stringLiteralF704B54D833421164E45E576DFD279921246BCEA, NULL);
		RuntimeObject* L_1 = ___original0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_Internal_CloneSingle_m24ECA1416702930DF5C316EA8B70D575315B636A((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_6 = (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_RuntimeMethod_var)));
	}

IL_003e:
	{
		RuntimeObject* L_7 = V_0;
		V_2 = L_7;
		goto IL_0042;
	}

IL_0042:
	{
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___original0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___parent1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___original0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = ___parent1;
		bool L_2 = ___worldPositionStays2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Object_Instantiate_m99F2A72EF6BFE09E6CF4FCF6207C5BCFAD1D76CF((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___original0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rotation2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Object_Instantiate_m99C9917ED3F7B2B9C569B55F52411620B52DA19D((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_m53B55AAD466B1F57692700D3B055F074E92AF896_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_m53B55AAD466B1F57692700D3B055F074E92AF896_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisRuntimeObject_m53B55AAD466B1F57692700D3B055F074E92AF896(_thisAdjusted, method);
	return _returnValue;
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Resources_ConvertObjects_TisRuntimeObject_m20F94D02587DBE09D871BC872CEE50AC6E2DB1B9_gshared (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___rawObjects0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_0 = ___rawObjects0;
		V_1 = (bool)((((RuntimeObject*)(ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL;
		goto IL_003d;
	}

IL_000d:
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2 = ___rawObjects0;
		NullCheck(L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_0 = L_3;
		V_3 = 0;
		goto IL_002d;
	}

IL_001a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = V_3;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_6 = ___rawObjects0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 1))));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		NullCheck(L_12);
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		V_2 = L_14;
		goto IL_003d;
	}

IL_003d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_2;
		return L_15;
	}
}
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(L_0, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisNativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0_m92CEC893E07882FBECE1A10BEBD11B0C60DA7A55_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<easyar.Optional`1<System.Object>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisOptional_1_tF5114E38E552BAED882106D566BDE52772A76B22_mFC611DEFA3EEE9D90FD51B609F076AA6B6D765FD_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.ValueTuple`2<System.Object,System.Object>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m1DD3D47E48FF7827F5511457F3A89F2E20D5C0E2_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.XR.ARFoundation.ARRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_mCC99B8F4F128098F984790BB28F02F9B8DB2E865_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.XR.ARFoundation.ARTextureInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_m017438A086A669F9AA3AA10912E826CB93610B3A_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<easyar.BlockInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765_mDDB3774EE9C3E11E9115E8090F05E0753448A10C_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCEA9A307651CE3079A5EE156235AD794AF2B3BAB_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Char>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m88B7F18FC2148289B50E51FCDC090785C27FF770_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Guid>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisGuid_t_m4723CCE11850F84118D3EEC4B9940D83DD3775EC_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.XR.InputDevice>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m746C6CF2EC1637ADC9FC8A4FCD8F0096FD3D1C2D_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAC48FD995D125CD5EAAAD92379FE2E1E3572322D_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCAE38F2391CDF81252D314623460548AE0079479_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<easyar.Matrix44F>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMatrix44F_t2AC2E226036AA644931F63203A7171FB070EA515_m158D5F8C273A1B4E1D64C7EE180D3A2762F0683B_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.XR.MeshId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC_m0605FD97BB24FA68ABB1639C65D79E77AEFB1293_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.XR.MeshInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA_mE808A7A1F2AC27A0CC3BE81863403FD1D5C5E85A_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.XR.MeshTransform>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_mE7E4285C2B836AD99D06084169D3EA1DE1714E26_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m116360578779445ACB52E52385196FCA9CEFA125_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Resources.ResourceLocator>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_mF3E3C1B81B1866464089F56C8207424D18B80F5B_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.XR.ARSubsystems.TrackableId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m5F29374BD7FD883314DAA8C9420717773A2E391C_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m65FE2EEC2706812FBF7CE25B1AAAA02F8966D4EF_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7BCE33CF342376EBC4BFD27568B4B75C682801BE_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m7A749C2A0049AC898751B6B8798B5A3A3BF99D15_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<easyar.Vec3F>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630_mD6E8B3E86B8EC5420F9EA4329F48AA6A11F579A4_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m00713EB65E249430026B4D772CB3FFCAE7B5989D_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m19CBBAD5A6DBE74CA2028C3FA013745A34F44174_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.XR.XRNodeState>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_mA01F71F7E378F3B1CDF6DEFEF334DC0C03EF7D7D_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.XR.ARSubsystems.XRReferenceImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_m4D5F5EB624C9A33CBB9111C65FAEEEAA4FFFB73A_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.XR.ARSubsystems.XRReferenceObject>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_m097C5AA6CDD38265356FE5B1DC05A17A1CEBF092_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.BeforeRenderHelper/OrderBlock>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m70EDF969D9CAF218348BD2583366FD9204BC02C3_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.Camera/RenderRequest>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_mD4ECEF503DFBEBCDE1E4BC3D18DE921296648D0F_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<easyar.GUIPopup/MessageData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisMessageData_t4A5B16A5F00F096A35BA7B215088FBEA0412235E_mAA64AA5BB4DB5EB290A55B3D3BFBAEF39568C549_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Text.RegularExpressions.Regex/CachedCodeEntryKey>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisCachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_mFA8CB48402552A3511824388D3A515F5E3F6758B_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Text.RegularExpressions.RegexCharClass/SingleRange>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_mA8B31A6B49A4D9CE35E5D70D6B6D1FE145AB009C_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisPoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_m960335B9AE6717FFF5C57968A9619932224E7B33_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<UnityEngine.UnitySynchronizationContext/WorkRequest>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m132D986D32E7CE29A247B039F02C3CE54F3C0B3C_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mC0C5DCB57C0ACDA1E241B010A15B6F13E1DAEB4F(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Object System.Reflection.RuntimePropertyInfo::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.RuntimePropertyInfo/Getter`2<T,R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_GetterAdapterFrame_TisRuntimeObject_TisRuntimeObject_mD07DE1D95614D277FCD10800079FE42310B47B32_gshared (Getter_2_t10A1DA06B72A5F8B2DC213ACFB609284774C458D* ___getter0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	{
		Getter_2_t10A1DA06B72A5F8B2DC213ACFB609284774C458D* L_0 = ___getter0;
		RuntimeObject* L_1 = ___obj1;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (Getter_2_t10A1DA06B72A5F8B2DC213ACFB609284774C458D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
// System.Object System.Reflection.RuntimePropertyInfo::StaticGetterAdapterFrame<System.Object>(System.Reflection.RuntimePropertyInfo/StaticGetter`1<R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_StaticGetterAdapterFrame_TisRuntimeObject_m7B898EDED02E2ADCD74DF5D95DF4436A416890D2_gshared (StaticGetter_1_tADDCE76D876792EE2DFA4AFF7D1C98F61D6A91A3* ___getter0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	{
		StaticGetter_1_tADDCE76D876792EE2DFA4AFF7D1C98F61D6A91A3* L_0 = ___getter0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (StaticGetter_1_tADDCE76D876792EE2DFA4AFF7D1C98F61D6A91A3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 System.SpanHelpers::IndexOf<System.Byte>(T&,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m3E381D71F4CF4AB91BFFD85724D3F55A84E706E5_gshared (uint8_t* ___searchSpace0, uint8_t ___value1, int32_t ___length2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		uint8_t* L_2 = ___searchSpace0;
		intptr_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_2, L_3);
		uint8_t L_5 = (*(uint8_t*)L_4);
		bool L_6;
		L_6 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		uint8_t* L_7 = ___searchSpace0;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_7, L_9);
		uint8_t L_11 = (*(uint8_t*)L_10);
		bool L_12;
		L_12 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		uint8_t* L_13 = ___searchSpace0;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_13, L_15);
		uint8_t L_17 = (*(uint8_t*)L_16);
		bool L_18;
		L_18 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_17, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		uint8_t* L_19 = ___searchSpace0;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		uint8_t* L_22;
		L_22 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_19, L_21);
		uint8_t L_23 = (*(uint8_t*)L_22);
		bool L_24;
		L_24 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_23, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		uint8_t* L_25 = ___searchSpace0;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_25, L_27);
		uint8_t L_29 = (*(uint8_t*)L_28);
		bool L_30;
		L_30 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_29, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		uint8_t* L_31 = ___searchSpace0;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		uint8_t* L_34;
		L_34 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_31, L_33);
		uint8_t L_35 = (*(uint8_t*)L_34);
		bool L_36;
		L_36 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_35, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		uint8_t* L_37 = ___searchSpace0;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		uint8_t* L_40;
		L_40 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_37, L_39);
		uint8_t L_41 = (*(uint8_t*)L_40);
		bool L_42;
		L_42 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_41, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		uint8_t* L_43 = ___searchSpace0;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		uint8_t* L_46;
		L_46 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_43, L_45);
		uint8_t L_47 = (*(uint8_t*)L_46);
		bool L_48;
		L_48 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_47, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___length2;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___length2;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		uint8_t* L_54 = ___searchSpace0;
		intptr_t L_55 = V_0;
		uint8_t* L_56;
		L_56 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_54, L_55);
		uint8_t L_57 = (*(uint8_t*)L_56);
		bool L_58;
		L_58 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_57, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		uint8_t* L_59 = ___searchSpace0;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		uint8_t* L_62;
		L_62 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_59, L_61);
		uint8_t L_63 = (*(uint8_t*)L_62);
		bool L_64;
		L_64 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_63, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		uint8_t* L_65 = ___searchSpace0;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		uint8_t* L_68;
		L_68 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_65, L_67);
		uint8_t L_69 = (*(uint8_t*)L_68);
		bool L_70;
		L_70 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_69, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		uint8_t* L_71 = ___searchSpace0;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		uint8_t* L_74;
		L_74 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_71, L_73);
		uint8_t L_75 = (*(uint8_t*)L_74);
		bool L_76;
		L_76 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_75, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		uint8_t* L_79 = ___searchSpace0;
		intptr_t L_80 = V_0;
		uint8_t* L_81;
		L_81 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_79, L_80);
		uint8_t L_82 = (*(uint8_t*)L_81);
		bool L_83;
		L_83 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_82, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___length2;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_020a:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0218:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0226:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0234:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_0242:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_0250:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_025e:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
// System.Int32 System.SpanHelpers::IndexOf<System.Char>(T&,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2F71ADBBAA6FA83C123CBA62E879F1D780F27D48_gshared (Il2CppChar* ___searchSpace0, Il2CppChar ___value1, int32_t ___length2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppChar* L_2 = ___searchSpace0;
		intptr_t L_3 = V_0;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_2, L_3);
		Il2CppChar L_5 = (*(Il2CppChar*)L_4);
		bool L_6;
		L_6 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppChar* L_7 = ___searchSpace0;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_7, L_9);
		Il2CppChar L_11 = (*(Il2CppChar*)L_10);
		bool L_12;
		L_12 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppChar* L_13 = ___searchSpace0;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		Il2CppChar* L_16;
		L_16 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_13, L_15);
		Il2CppChar L_17 = (*(Il2CppChar*)L_16);
		bool L_18;
		L_18 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_17, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppChar* L_19 = ___searchSpace0;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		Il2CppChar* L_22;
		L_22 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_19, L_21);
		Il2CppChar L_23 = (*(Il2CppChar*)L_22);
		bool L_24;
		L_24 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_23, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		Il2CppChar* L_25 = ___searchSpace0;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		Il2CppChar* L_28;
		L_28 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_25, L_27);
		Il2CppChar L_29 = (*(Il2CppChar*)L_28);
		bool L_30;
		L_30 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_29, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		Il2CppChar* L_31 = ___searchSpace0;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		Il2CppChar* L_34;
		L_34 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_31, L_33);
		Il2CppChar L_35 = (*(Il2CppChar*)L_34);
		bool L_36;
		L_36 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_35, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		Il2CppChar* L_37 = ___searchSpace0;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		Il2CppChar* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_37, L_39);
		Il2CppChar L_41 = (*(Il2CppChar*)L_40);
		bool L_42;
		L_42 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_41, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppChar* L_43 = ___searchSpace0;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		Il2CppChar* L_46;
		L_46 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_43, L_45);
		Il2CppChar L_47 = (*(Il2CppChar*)L_46);
		bool L_48;
		L_48 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_47, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___length2;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___length2;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		Il2CppChar* L_54 = ___searchSpace0;
		intptr_t L_55 = V_0;
		Il2CppChar* L_56;
		L_56 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_54, L_55);
		Il2CppChar L_57 = (*(Il2CppChar*)L_56);
		bool L_58;
		L_58 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_57, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppChar* L_59 = ___searchSpace0;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		Il2CppChar* L_62;
		L_62 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_59, L_61);
		Il2CppChar L_63 = (*(Il2CppChar*)L_62);
		bool L_64;
		L_64 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_63, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppChar* L_65 = ___searchSpace0;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		Il2CppChar* L_68;
		L_68 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_65, L_67);
		Il2CppChar L_69 = (*(Il2CppChar*)L_68);
		bool L_70;
		L_70 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_69, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppChar* L_71 = ___searchSpace0;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		Il2CppChar* L_74;
		L_74 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_71, L_73);
		Il2CppChar L_75 = (*(Il2CppChar*)L_74);
		bool L_76;
		L_76 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_75, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		Il2CppChar* L_79 = ___searchSpace0;
		intptr_t L_80 = V_0;
		Il2CppChar* L_81;
		L_81 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_79, L_80);
		Il2CppChar L_82 = (*(Il2CppChar*)L_81);
		bool L_83;
		L_83 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_82, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___length2;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_020a:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0218:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0226:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0234:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_0242:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_0250:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_025e:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
// System.Int32 System.SpanHelpers::IndexOf<System.Object>(T&,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisRuntimeObject_m5FC615266312B1DAF85724A6DF3506B415E32A37_gshared (RuntimeObject** ___searchSpace0, RuntimeObject* ___value1, int32_t ___length2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		RuntimeObject** L_2 = ___searchSpace0;
		intptr_t L_3 = V_0;
		RuntimeObject** L_4;
		L_4 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_2, L_3);
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		NullCheck((RuntimeObject*)(___value1));
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_5);
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		RuntimeObject** L_7 = ___searchSpace0;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_8, 1, NULL);
		RuntimeObject** L_10;
		L_10 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_7, L_9);
		RuntimeObject* L_11 = (*(RuntimeObject**)L_10);
		NullCheck((RuntimeObject*)(___value1));
		bool L_12;
		L_12 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_11);
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		RuntimeObject** L_13 = ___searchSpace0;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 2, NULL);
		RuntimeObject** L_16;
		L_16 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_13, L_15);
		RuntimeObject* L_17 = (*(RuntimeObject**)L_16);
		NullCheck((RuntimeObject*)(___value1));
		bool L_18;
		L_18 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_17);
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		RuntimeObject** L_19 = ___searchSpace0;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_20, 3, NULL);
		RuntimeObject** L_22;
		L_22 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_19, L_21);
		RuntimeObject* L_23 = (*(RuntimeObject**)L_22);
		NullCheck((RuntimeObject*)(___value1));
		bool L_24;
		L_24 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_23);
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		RuntimeObject** L_25 = ___searchSpace0;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_26, 4, NULL);
		RuntimeObject** L_28;
		L_28 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_25, L_27);
		RuntimeObject* L_29 = (*(RuntimeObject**)L_28);
		NullCheck((RuntimeObject*)(___value1));
		bool L_30;
		L_30 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_29);
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		RuntimeObject** L_31 = ___searchSpace0;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_32, 5, NULL);
		RuntimeObject** L_34;
		L_34 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_31, L_33);
		RuntimeObject* L_35 = (*(RuntimeObject**)L_34);
		NullCheck((RuntimeObject*)(___value1));
		bool L_36;
		L_36 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_35);
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		RuntimeObject** L_37 = ___searchSpace0;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 6, NULL);
		RuntimeObject** L_40;
		L_40 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_37, L_39);
		RuntimeObject* L_41 = (*(RuntimeObject**)L_40);
		NullCheck((RuntimeObject*)(___value1));
		bool L_42;
		L_42 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_41);
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		RuntimeObject** L_43 = ___searchSpace0;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 7, NULL);
		RuntimeObject** L_46;
		L_46 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_43, L_45);
		RuntimeObject* L_47 = (*(RuntimeObject**)L_46);
		NullCheck((RuntimeObject*)(___value1));
		bool L_48;
		L_48 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_47);
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___length2;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___length2;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		RuntimeObject** L_54 = ___searchSpace0;
		intptr_t L_55 = V_0;
		RuntimeObject** L_56;
		L_56 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_54, L_55);
		RuntimeObject* L_57 = (*(RuntimeObject**)L_56);
		NullCheck((RuntimeObject*)(___value1));
		bool L_58;
		L_58 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_57);
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		RuntimeObject** L_59 = ___searchSpace0;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_60, 1, NULL);
		RuntimeObject** L_62;
		L_62 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_59, L_61);
		RuntimeObject* L_63 = (*(RuntimeObject**)L_62);
		NullCheck((RuntimeObject*)(___value1));
		bool L_64;
		L_64 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_63);
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		RuntimeObject** L_65 = ___searchSpace0;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_66, 2, NULL);
		RuntimeObject** L_68;
		L_68 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_65, L_67);
		RuntimeObject* L_69 = (*(RuntimeObject**)L_68);
		NullCheck((RuntimeObject*)(___value1));
		bool L_70;
		L_70 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_69);
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		RuntimeObject** L_71 = ___searchSpace0;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_72, 3, NULL);
		RuntimeObject** L_74;
		L_74 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_71, L_73);
		RuntimeObject* L_75 = (*(RuntimeObject**)L_74);
		NullCheck((RuntimeObject*)(___value1));
		bool L_76;
		L_76 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_75);
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		RuntimeObject** L_79 = ___searchSpace0;
		intptr_t L_80 = V_0;
		RuntimeObject** L_81;
		L_81 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_79, L_80);
		RuntimeObject* L_82 = (*(RuntimeObject**)L_81);
		NullCheck((RuntimeObject*)(___value1));
		bool L_83;
		L_83 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_82);
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___length2;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_020a:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0218:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0226:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0234:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_0242:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_0250:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_025e:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
// System.Boolean System.SpanHelpers::SequenceEqual<System.Char>(T&,T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m15554853B4E39558ED8B1049CF44428A9F9F0774_gshared (Il2CppChar* ___first0, Il2CppChar* ___second1, int32_t ___length2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppChar* L_0 = ___first0;
		Il2CppChar* L_1 = ___second1;
		bool L_2;
		L_2 = il2cpp_unsafe_are_same(L_0, L_1);
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		int32_t L_4 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		Il2CppChar* L_5 = ___first0;
		intptr_t L_6 = V_0;
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_5, L_6);
		Il2CppChar* L_8 = ___second1;
		intptr_t L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_8, L_9);
		Il2CppChar L_11 = (*(Il2CppChar*)L_10);
		bool L_12;
		L_12 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_7, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_12)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_13 = ___first0;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 1, NULL);
		Il2CppChar* L_16;
		L_16 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_13, L_15);
		Il2CppChar* L_17 = ___second1;
		intptr_t L_18 = V_0;
		intptr_t L_19;
		L_19 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_18, 1, NULL);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_17, L_19);
		Il2CppChar L_21 = (*(Il2CppChar*)L_20);
		bool L_22;
		L_22 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_16, L_21, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_22)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_23 = ___first0;
		intptr_t L_24 = V_0;
		intptr_t L_25;
		L_25 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_24, 2, NULL);
		Il2CppChar* L_26;
		L_26 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_23, L_25);
		Il2CppChar* L_27 = ___second1;
		intptr_t L_28 = V_0;
		intptr_t L_29;
		L_29 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_28, 2, NULL);
		Il2CppChar* L_30;
		L_30 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_27, L_29);
		Il2CppChar L_31 = (*(Il2CppChar*)L_30);
		bool L_32;
		L_32 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_26, L_31, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_32)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_33 = ___first0;
		intptr_t L_34 = V_0;
		intptr_t L_35;
		L_35 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_34, 3, NULL);
		Il2CppChar* L_36;
		L_36 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_33, L_35);
		Il2CppChar* L_37 = ___second1;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 3, NULL);
		Il2CppChar* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_37, L_39);
		Il2CppChar L_41 = (*(Il2CppChar*)L_40);
		bool L_42;
		L_42 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_36, L_41, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_42)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_43 = ___first0;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 4, NULL);
		Il2CppChar* L_46;
		L_46 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_43, L_45);
		Il2CppChar* L_47 = ___second1;
		intptr_t L_48 = V_0;
		intptr_t L_49;
		L_49 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_48, 4, NULL);
		Il2CppChar* L_50;
		L_50 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_47, L_49);
		Il2CppChar L_51 = (*(Il2CppChar*)L_50);
		bool L_52;
		L_52 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_46, L_51, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_52)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_53 = ___first0;
		intptr_t L_54 = V_0;
		intptr_t L_55;
		L_55 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_54, 5, NULL);
		Il2CppChar* L_56;
		L_56 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_53, L_55);
		Il2CppChar* L_57 = ___second1;
		intptr_t L_58 = V_0;
		intptr_t L_59;
		L_59 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_58, 5, NULL);
		Il2CppChar* L_60;
		L_60 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_57, L_59);
		Il2CppChar L_61 = (*(Il2CppChar*)L_60);
		bool L_62;
		L_62 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_56, L_61, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_62)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_63 = ___first0;
		intptr_t L_64 = V_0;
		intptr_t L_65;
		L_65 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_64, 6, NULL);
		Il2CppChar* L_66;
		L_66 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_63, L_65);
		Il2CppChar* L_67 = ___second1;
		intptr_t L_68 = V_0;
		intptr_t L_69;
		L_69 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_68, 6, NULL);
		Il2CppChar* L_70;
		L_70 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_67, L_69);
		Il2CppChar L_71 = (*(Il2CppChar*)L_70);
		bool L_72;
		L_72 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_66, L_71, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_72)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_73 = ___first0;
		intptr_t L_74 = V_0;
		intptr_t L_75;
		L_75 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_74, 7, NULL);
		Il2CppChar* L_76;
		L_76 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_73, L_75);
		Il2CppChar* L_77 = ___second1;
		intptr_t L_78 = V_0;
		intptr_t L_79;
		L_79 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_78, 7, NULL);
		Il2CppChar* L_80;
		L_80 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_77, L_79);
		Il2CppChar L_81 = (*(Il2CppChar*)L_80);
		bool L_82;
		L_82 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_76, L_81, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_82)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_83 = V_0;
		intptr_t L_84;
		L_84 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_83, 8, NULL);
		V_0 = L_84;
	}

IL_0191:
	{
		int32_t L_85 = ___length2;
		if ((((int32_t)L_85) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_86 = ___length2;
		if ((((int32_t)L_86) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_87 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_87, 4));
		Il2CppChar* L_88 = ___first0;
		intptr_t L_89 = V_0;
		Il2CppChar* L_90;
		L_90 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_88, L_89);
		Il2CppChar* L_91 = ___second1;
		intptr_t L_92 = V_0;
		Il2CppChar* L_93;
		L_93 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_91, L_92);
		Il2CppChar L_94 = (*(Il2CppChar*)L_93);
		bool L_95;
		L_95 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_90, L_94, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_95)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_96 = ___first0;
		intptr_t L_97 = V_0;
		intptr_t L_98;
		L_98 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_97, 1, NULL);
		Il2CppChar* L_99;
		L_99 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_96, L_98);
		Il2CppChar* L_100 = ___second1;
		intptr_t L_101 = V_0;
		intptr_t L_102;
		L_102 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_101, 1, NULL);
		Il2CppChar* L_103;
		L_103 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_100, L_102);
		Il2CppChar L_104 = (*(Il2CppChar*)L_103);
		bool L_105;
		L_105 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_99, L_104, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_105)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_106 = ___first0;
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_107, 2, NULL);
		Il2CppChar* L_109;
		L_109 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_106, L_108);
		Il2CppChar* L_110 = ___second1;
		intptr_t L_111 = V_0;
		intptr_t L_112;
		L_112 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_111, 2, NULL);
		Il2CppChar* L_113;
		L_113 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_110, L_112);
		Il2CppChar L_114 = (*(Il2CppChar*)L_113);
		bool L_115;
		L_115 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_109, L_114, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_115)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_116 = ___first0;
		intptr_t L_117 = V_0;
		intptr_t L_118;
		L_118 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_117, 3, NULL);
		Il2CppChar* L_119;
		L_119 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_116, L_118);
		Il2CppChar* L_120 = ___second1;
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_121, 3, NULL);
		Il2CppChar* L_123;
		L_123 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_120, L_122);
		Il2CppChar L_124 = (*(Il2CppChar*)L_123);
		bool L_125;
		L_125 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_119, L_124, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_125)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_126 = V_0;
		intptr_t L_127;
		L_127 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_126, 4, NULL);
		V_0 = L_127;
		goto IL_0285;
	}

IL_0258:
	{
		Il2CppChar* L_128 = ___first0;
		intptr_t L_129 = V_0;
		Il2CppChar* L_130;
		L_130 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_128, L_129);
		Il2CppChar* L_131 = ___second1;
		intptr_t L_132 = V_0;
		Il2CppChar* L_133;
		L_133 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_131, L_132);
		Il2CppChar L_134 = (*(Il2CppChar*)L_133);
		bool L_135;
		L_135 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_130, L_134, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_135)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_136 = V_0;
		intptr_t L_137;
		L_137 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_136, 1, NULL);
		V_0 = L_137;
		int32_t L_138 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_138, 1));
	}

IL_0285:
	{
		int32_t L_139 = ___length2;
		if ((((int32_t)L_139) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
// System.Boolean System.SpanHelpers::SequenceEqual<System.Object>(T&,T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisRuntimeObject_mEDDA6E20C586118C3346DD4EAC3E351321E59D2F_gshared (RuntimeObject** ___first0, RuntimeObject** ___second1, int32_t ___length2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject** L_0 = ___first0;
		RuntimeObject** L_1 = ___second1;
		bool L_2;
		L_2 = il2cpp_unsafe_are_same(L_0, L_1);
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m931A344F16D4C65EFB0B492EB07C7A82AF0B9FA1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		int32_t L_4 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		RuntimeObject** L_5 = ___first0;
		intptr_t L_6 = V_0;
		RuntimeObject** L_7;
		L_7 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_5, L_6);
		RuntimeObject** L_8 = ___second1;
		intptr_t L_9 = V_0;
		RuntimeObject** L_10;
		L_10 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_8, L_9);
		RuntimeObject* L_11 = (*(RuntimeObject**)L_10);
		NullCheck((RuntimeObject*)(*L_7));
		bool L_12;
		L_12 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_7), L_11);
		if (!L_12)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_13 = ___first0;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_14, 1, NULL);
		RuntimeObject** L_16;
		L_16 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_13, L_15);
		RuntimeObject** L_17 = ___second1;
		intptr_t L_18 = V_0;
		intptr_t L_19;
		L_19 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_18, 1, NULL);
		RuntimeObject** L_20;
		L_20 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_17, L_19);
		RuntimeObject* L_21 = (*(RuntimeObject**)L_20);
		NullCheck((RuntimeObject*)(*L_16));
		bool L_22;
		L_22 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_16), L_21);
		if (!L_22)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_23 = ___first0;
		intptr_t L_24 = V_0;
		intptr_t L_25;
		L_25 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_24, 2, NULL);
		RuntimeObject** L_26;
		L_26 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_23, L_25);
		RuntimeObject** L_27 = ___second1;
		intptr_t L_28 = V_0;
		intptr_t L_29;
		L_29 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_28, 2, NULL);
		RuntimeObject** L_30;
		L_30 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_27, L_29);
		RuntimeObject* L_31 = (*(RuntimeObject**)L_30);
		NullCheck((RuntimeObject*)(*L_26));
		bool L_32;
		L_32 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_26), L_31);
		if (!L_32)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_33 = ___first0;
		intptr_t L_34 = V_0;
		intptr_t L_35;
		L_35 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_34, 3, NULL);
		RuntimeObject** L_36;
		L_36 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_33, L_35);
		RuntimeObject** L_37 = ___second1;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_38, 3, NULL);
		RuntimeObject** L_40;
		L_40 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_37, L_39);
		RuntimeObject* L_41 = (*(RuntimeObject**)L_40);
		NullCheck((RuntimeObject*)(*L_36));
		bool L_42;
		L_42 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_36), L_41);
		if (!L_42)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_43 = ___first0;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_44, 4, NULL);
		RuntimeObject** L_46;
		L_46 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_43, L_45);
		RuntimeObject** L_47 = ___second1;
		intptr_t L_48 = V_0;
		intptr_t L_49;
		L_49 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_48, 4, NULL);
		RuntimeObject** L_50;
		L_50 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_47, L_49);
		RuntimeObject* L_51 = (*(RuntimeObject**)L_50);
		NullCheck((RuntimeObject*)(*L_46));
		bool L_52;
		L_52 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_46), L_51);
		if (!L_52)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_53 = ___first0;
		intptr_t L_54 = V_0;
		intptr_t L_55;
		L_55 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_54, 5, NULL);
		RuntimeObject** L_56;
		L_56 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_53, L_55);
		RuntimeObject** L_57 = ___second1;
		intptr_t L_58 = V_0;
		intptr_t L_59;
		L_59 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_58, 5, NULL);
		RuntimeObject** L_60;
		L_60 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_57, L_59);
		RuntimeObject* L_61 = (*(RuntimeObject**)L_60);
		NullCheck((RuntimeObject*)(*L_56));
		bool L_62;
		L_62 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_56), L_61);
		if (!L_62)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_63 = ___first0;
		intptr_t L_64 = V_0;
		intptr_t L_65;
		L_65 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_64, 6, NULL);
		RuntimeObject** L_66;
		L_66 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_63, L_65);
		RuntimeObject** L_67 = ___second1;
		intptr_t L_68 = V_0;
		intptr_t L_69;
		L_69 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_68, 6, NULL);
		RuntimeObject** L_70;
		L_70 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_67, L_69);
		RuntimeObject* L_71 = (*(RuntimeObject**)L_70);
		NullCheck((RuntimeObject*)(*L_66));
		bool L_72;
		L_72 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_66), L_71);
		if (!L_72)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_73 = ___first0;
		intptr_t L_74 = V_0;
		intptr_t L_75;
		L_75 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_74, 7, NULL);
		RuntimeObject** L_76;
		L_76 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_73, L_75);
		RuntimeObject** L_77 = ___second1;
		intptr_t L_78 = V_0;
		intptr_t L_79;
		L_79 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_78, 7, NULL);
		RuntimeObject** L_80;
		L_80 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_77, L_79);
		RuntimeObject* L_81 = (*(RuntimeObject**)L_80);
		NullCheck((RuntimeObject*)(*L_76));
		bool L_82;
		L_82 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_76), L_81);
		if (!L_82)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_83 = V_0;
		intptr_t L_84;
		L_84 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_83, 8, NULL);
		V_0 = L_84;
	}

IL_0191:
	{
		int32_t L_85 = ___length2;
		if ((((int32_t)L_85) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_86 = ___length2;
		if ((((int32_t)L_86) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_87 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_87, 4));
		RuntimeObject** L_88 = ___first0;
		intptr_t L_89 = V_0;
		RuntimeObject** L_90;
		L_90 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_88, L_89);
		RuntimeObject** L_91 = ___second1;
		intptr_t L_92 = V_0;
		RuntimeObject** L_93;
		L_93 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_91, L_92);
		RuntimeObject* L_94 = (*(RuntimeObject**)L_93);
		NullCheck((RuntimeObject*)(*L_90));
		bool L_95;
		L_95 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_90), L_94);
		if (!L_95)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_96 = ___first0;
		intptr_t L_97 = V_0;
		intptr_t L_98;
		L_98 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_97, 1, NULL);
		RuntimeObject** L_99;
		L_99 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_96, L_98);
		RuntimeObject** L_100 = ___second1;
		intptr_t L_101 = V_0;
		intptr_t L_102;
		L_102 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_101, 1, NULL);
		RuntimeObject** L_103;
		L_103 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_100, L_102);
		RuntimeObject* L_104 = (*(RuntimeObject**)L_103);
		NullCheck((RuntimeObject*)(*L_99));
		bool L_105;
		L_105 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_99), L_104);
		if (!L_105)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_106 = ___first0;
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_107, 2, NULL);
		RuntimeObject** L_109;
		L_109 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_106, L_108);
		RuntimeObject** L_110 = ___second1;
		intptr_t L_111 = V_0;
		intptr_t L_112;
		L_112 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_111, 2, NULL);
		RuntimeObject** L_113;
		L_113 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_110, L_112);
		RuntimeObject* L_114 = (*(RuntimeObject**)L_113);
		NullCheck((RuntimeObject*)(*L_109));
		bool L_115;
		L_115 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_109), L_114);
		if (!L_115)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_116 = ___first0;
		intptr_t L_117 = V_0;
		intptr_t L_118;
		L_118 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_117, 3, NULL);
		RuntimeObject** L_119;
		L_119 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_116, L_118);
		RuntimeObject** L_120 = ___second1;
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_121, 3, NULL);
		RuntimeObject** L_123;
		L_123 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_120, L_122);
		RuntimeObject* L_124 = (*(RuntimeObject**)L_123);
		NullCheck((RuntimeObject*)(*L_119));
		bool L_125;
		L_125 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_119), L_124);
		if (!L_125)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_126 = V_0;
		intptr_t L_127;
		L_127 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_126, 4, NULL);
		V_0 = L_127;
		goto IL_0285;
	}

IL_0258:
	{
		RuntimeObject** L_128 = ___first0;
		intptr_t L_129 = V_0;
		RuntimeObject** L_130;
		L_130 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_128, L_129);
		RuntimeObject** L_131 = ___second1;
		intptr_t L_132 = V_0;
		RuntimeObject** L_133;
		L_133 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_131, L_132);
		RuntimeObject* L_134 = (*(RuntimeObject**)L_133);
		NullCheck((RuntimeObject*)(*L_130));
		bool L_135;
		L_135 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_130), L_134);
		if (!L_135)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_136 = V_0;
		intptr_t L_137;
		L_137 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_136, 1, NULL);
		V_0 = L_137;
		int32_t L_138 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_138, 1));
	}

IL_0285:
	{
		int32_t L_139 = ___length2;
		if ((((int32_t)L_139) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
// System.String System.String::Create<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_mF6724B93867EE2A12D4053F46E75806CF9557C3B_gshared (int32_t ___length0, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___state1, SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* L_0 = ___action2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_mF6724B93867EE2A12D4053F46E75806CF9557C3B_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___length0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___length0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_mF6724B93867EE2A12D4053F46E75806CF9557C3B_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___length0;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* L_8 = ___action2;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 L_13 = ___state1;
		NullCheck(L_8);
		((  void (*) (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.String System.String::Create<System.ValueTuple`5<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean>>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mC8713BB789582FA498F3A9BDD075B77794145A53_gshared (int32_t ___length0, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___state1, SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_0 = ___action2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mC8713BB789582FA498F3A9BDD075B77794145A53_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___length0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___length0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mC8713BB789582FA498F3A9BDD075B77794145A53_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___length0;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_8 = ___action2;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_13 = ___state1;
		NullCheck(L_8);
		((  void (*) (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.String System.String::Create<System.Object>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisRuntimeObject_m2FF3AB456D8895209A459A9F333FC669F1B1ECDA_gshared (int32_t ___length0, RuntimeObject* ___state1, SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3* L_0 = ___action2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisRuntimeObject_m2FF3AB456D8895209A459A9F333FC669F1B1ECDA_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___length0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___length0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisRuntimeObject_m2FF3AB456D8895209A459A9F333FC669F1B1ECDA_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___length0;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3* L_8 = ___action2;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		RuntimeObject* L_13 = ___state1;
		NullCheck(L_8);
		((  void (*) (SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<System.Int32>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7B15D251663E1D9C147CD9DA1A8908CACF877570_gshared (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&___value0), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisRuntimeObject_mD51222AF7DE1F3198B5D7E15D990729A113B39E7_gshared (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		NullCheck((RuntimeObject*)(___value0));
		String_t* L_1;
		L_1 = InterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(0 /* System.String System.IFormattable::ToString(System.String,System.IFormatProvider) */, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var, (RuntimeObject*)(___value0), (String_t*)NULL, (RuntimeObject*)L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<System.UInt32>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m61F274B553164EF6FB0CB7D16AED9687CE7CA5FC_gshared (StringBuilder_t* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE((&___value0), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::AddDescriptorSubset<System.Object,System.Object>(System.Collections.Generic.List`1<TBaseTypeInList>,System.Collections.Generic.List`1<TQueryType>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_AddDescriptorSubset_TisRuntimeObject_TisRuntimeObject_mCCBF36707A9EBC41884E99AF9701432B10CD6FE4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___copyFrom0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___copyTo1, const RuntimeMethod* method) 
{
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___copyFrom0;
		NullCheck(L_0);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_1;
		L_1 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_0), il2cpp_rgctx_method(method->rgctx_data, 9));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0043_1;
			}

IL_000b_1:
			{
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
				V_1 = L_2;
				RuntimeObject* L_3 = V_1;
				if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 4))))
				{
					goto IL_0035_1;
				}
			}
			{
				RuntimeObject* L_4 = V_1;
				V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 4))), il2cpp_rgctx_data(method->rgctx_data, 4)));
				G_B5_0 = 1;
				goto IL_0036_1;
			}

IL_0035_1:
			{
				G_B5_0 = 0;
			}

IL_0036_1:
			{
				V_3 = (bool)G_B5_0;
				bool L_5 = V_3;
				if (!L_5)
				{
					goto IL_0042_1;
				}
			}
			{
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6 = ___copyTo1;
				RuntimeObject* L_7 = V_2;
				NullCheck(L_6);
				((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 6));
			}

IL_0042_1:
			{
			}

IL_0043_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_0), il2cpp_rgctx_method(method->rgctx_data, 7));
				if (L_8)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		return;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_GetSubsystemDescriptors_TisRuntimeObject_mAF894EE2CC2C3001A3FB3DEF57B73DE4C2D2209B_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		NullCheck(L_0);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		List_1_tACFC79734710927A89702FFC38900223BB85B5A6* L_1 = ((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_IntegratedDescriptors_0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___descriptors0;
		((  void (*) (List_1_tACFC79734710927A89702FFC38900223BB85B5A6*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044* L_3 = ((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_StandaloneDescriptors_1;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = ___descriptors0;
		((  void (*) (List_1_t2D19D6F759F401FE6C5460698E5B8249E470E044*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 3));
		List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E* L_5 = ((SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_StaticFields*)il2cpp_codegen_static_fields_for(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var))->___s_DeprecatedDescriptors_2;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6 = ___descriptors0;
		((  void (*) (List_1_t15AD773D34D3739AFB67421B6DFFACEA7638F64E*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}
}
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor<System.Object,System.Object>(TDescriptor,System.Collections.Generic.List`1<TBaseTypeInList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_TisRuntimeObject_TisRuntimeObject_mBDA60AD66ED0AB222060E8F6FB6A09E504B7AD0E_gshared (RuntimeObject* ___descriptor0, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___storeInList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08AAD62E530799C15714A41B93652F8A49FDBB68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8C0FEACB3F25706873303C3604F2CE5666744C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		V_0 = 0;
		goto IL_006e;
	}

IL_0005:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___storeInList1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_2;
		NullCheck((RuntimeObject*)(V_2));
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_2));
		NullCheck((RuntimeObject*)(___descriptor0));
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(___descriptor0));
		bool L_5;
		L_5 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_3, L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		goto IL_006a;
	}

IL_0033:
	{
		NullCheck((RuntimeObject*)(___descriptor0));
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(___descriptor0));
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral08AAD62E530799C15714A41B93652F8A49FDBB68, L_7, _stringLiteral1D8C0FEACB3F25706873303C3604F2CE5666744C, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)L_8, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_9 = ___storeInList1;
		int32_t L_10 = V_0;
		RuntimeObject* L_11 = ___descriptor0;
		NullCheck(L_9);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_9, L_10, ((RuntimeObject*)Castclass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 2))), il2cpp_rgctx_method(method->rgctx_data, 6));
		goto IL_00a0;
	}

IL_006a:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_006e:
	{
		int32_t L_13 = V_0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_14 = ___storeInList1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_14, il2cpp_rgctx_method(method->rgctx_data, 7));
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		NullCheck((RuntimeObject*)(___descriptor0));
		String_t* L_17;
		L_17 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(___descriptor0));
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_ReportSingleSubsystemAnalytics_m12986597FBE76C21232348BAC03ADEEB9F02DB99(L_17, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_18 = ___storeInList1;
		RuntimeObject* L_19 = ___descriptor0;
		NullCheck(L_18);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(L_18, ((RuntimeObject*)Castclass((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 2))), il2cpp_rgctx_method(method->rgctx_data, 8));
	}

IL_00a0:
	{
		return;
	}
}
// System.Void UnityEngine.SubsystemManager::GetSubsystemDescriptors<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Boolean>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromCancellation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB63359289167D8DDD29CD440525186BE9586873A_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken0), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB63359289167D8DDD29CD440525186BE9586873A_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken0;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_4);
		((  void (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, bool, bool, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Object>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken0), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken0;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_4 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_4);
		((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, bool, RuntimeObject*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Int32>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF151895F5C0BBB74AEE7600FA2F777D0A8D1EBC5_gshared (int32_t ___result0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___result0;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Object>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521_gshared (RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___result0;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_1 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_1);
		((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.Texture::get_isReadable() */, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_2;
		L_2 = Texture_CreateNonReadableException_m29786CD930E89C281564A9B341FD4088FBC8C94F((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var)));
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		intptr_t L_4;
		L_4 = Texture2D_GetWritableImageData_m8E26026A332040F8713E5A2A13C5545797159A5E(__this, 0, NULL);
		void* L_5;
		L_5 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_4, NULL);
		int64_t L_6;
		L_6 = Texture2D_GetRawImageDataSize_m690AA2A7E6B0A207BC6DCA00A6313C3407CE3418(__this, NULL);
		int32_t L_7 = V_0;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_8;
		L_8 = ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, ((int32_t)((int64_t)(L_6/((int64_t)L_7)))), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_8;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_9 = V_1;
		V_3 = L_9;
		goto IL_003d;
	}

IL_003d:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_10 = V_3;
		return L_10;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisNativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0_mA24B59E0AE0DB9B908D2E40CEABECD51CE2D6600_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<easyar.Optional`1<System.Object>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOptional_1_tF5114E38E552BAED882106D566BDE52772A76B22_m44ADBBF6BAD744DDFA05185531093EE5906520B3_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARFoundation.ARRaycastHit>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_m1567F1836306C8F850A2CC8B8A76EDF1C8F98821_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARFoundation.ARTextureInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_m631E3CAD2465B9EA5CC5FA8DED3F4006BC2B66CC_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<easyar.BlockInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765_mAB44B54EE7D0EB7C51CDBECDC1B0B0CECA953AD4_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.InputDevice>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m4E704A666B54AA88F34B9A25DD1EBE5FBB1864C3_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32Enum>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<easyar.Matrix44F>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix44F_t2AC2E226036AA644931F63203A7171FB070EA515_m8B2CDB2885B4C40F11A3A51B49E50A262DB2614D_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.MeshInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA_m3019FD93231975195C3F285048DD7C200499F83F_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.MeshTransform>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_mBA9A60B0BC690974B5E8838104A8BB09F2034252_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Object>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Resources.ResourceLocator>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.UInt64>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m21622664C637314AFAAB1ED4A692CFDDA15893F8_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<easyar.Vec3F>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630_m81AD0A5DC700A9102BBBF7D81DC747CD712C95BA_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector2>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mEC2F089A19D09CAB9C63CF26A9E251949E79D8DF_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector3>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4E879C7609DC1101BE0D3A088A9627F863855032_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.XRNodeState>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_mFB2BFB3CBAE449CD0CBB53BEE76E415DF600247C_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARSubsystems.XRReferenceImage>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_m73EF499025F150C46B32EC43BFEB248C8FE1F8AB_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARSubsystems.XRReferenceObject>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_m84397AF4D39DF3722D7909873F181A80BC7B4F27_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Camera/RenderRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_m5DE0C77AFBAE778817B286D65F46EE2818DD6D9A_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Text.RegularExpressions.RegexCharClass/SingleRange>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_mB5F1105F83D13AA1B7512EE4FEE16EA0A22885D9_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Boolean,easyar.Optional`1<System.Object>>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_tBEF1DF48ACB0E94917B55CE413E4E7D63AF503E0* Tuple_Create_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisOptional_1_tF5114E38E552BAED882106D566BDE52772A76B22_mF93CDF549BC1EC9520F7E2A6ACC61B412B7180B7_gshared (bool ___item10, Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22 ___item21, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___item10;
		Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22 L_1 = ___item21;
		Tuple_2_tBEF1DF48ACB0E94917B55CE413E4E7D63AF503E0* L_2 = (Tuple_2_tBEF1DF48ACB0E94917B55CE413E4E7D63AF503E0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_2);
		((  void (*) (Tuple_2_tBEF1DF48ACB0E94917B55CE413E4E7D63AF503E0*, bool, Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Int32Enum,easyar.Matrix44F>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t3C2D18A9105F2CB4E749A54D173C43E057875135* Tuple_Create_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisMatrix44F_t2AC2E226036AA644931F63203A7171FB070EA515_m2E1B91A50EECFF1EAF6D4230158982BD3057EAE3_gshared (int32_t ___item10, Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515 ___item21, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___item10;
		Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515 L_1 = ___item21;
		Tuple_2_t3C2D18A9105F2CB4E749A54D173C43E057875135* L_2 = (Tuple_2_t3C2D18A9105F2CB4E749A54D173C43E057875135*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_2);
		((  void (*) (Tuple_2_t3C2D18A9105F2CB4E749A54D173C43E057875135*, int32_t, Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,System.Object>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* Tuple_Create_TisRuntimeObject_TisRuntimeObject_mB9E45EDC3450763C550051587640A39E730AF094_gshared (RuntimeObject* ___item10, RuntimeObject* ___item21, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___item10;
		RuntimeObject* L_1 = ___item21;
		Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* L_2 = (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_2);
		((  void (*) (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,UnityEngine.Pose>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t021A259185A53D33A1A737775F7C26694C4C58F5* Tuple_Create_TisRuntimeObject_TisPose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_m036067C15CEB96C11BD318E64689B8DC60C6E209_gshared (RuntimeObject* ___item10, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___item21, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___item10;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1 = ___item21;
		Tuple_2_t021A259185A53D33A1A737775F7C26694C4C58F5* L_2 = (Tuple_2_t021A259185A53D33A1A737775F7C26694C4C58F5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_2);
		((  void (*) (Tuple_2_t021A259185A53D33A1A737775F7C26694C4C58F5*, RuntimeObject*, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* Unsafe_Add_TisNativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0_m34E4E5D992B28C28746499E511D50362357A39B8_gshared (NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0);
		return ((NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<easyar.Optional`1<System.Object>>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* Unsafe_Add_TisOptional_1_tF5114E38E552BAED882106D566BDE52772A76B22_m3A599B2EE41DA203791085AE455557FA8D05E648_gshared (Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22);
		return ((Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.ARFoundation.ARRaycastHit>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* Unsafe_Add_TisARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_m958279915204CED0BC73EBB1FBBE83FEC4ED3A12_gshared (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70);
		return ((ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.ARFoundation.ARTextureInfo>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* Unsafe_Add_TisARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_m59EE8EAB34639706B96C22A5C76D1261C2208B34_gshared (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261);
		return ((ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<easyar.BlockInfo>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765* Unsafe_Add_TisBlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765_m0AF3B3A71AB8168B927048B49B0D40F1AFB295F8_gshared (BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765);
		return ((BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Byte>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAD356C5FCC414F8EDF133AE32854956A07B53A02_gshared (uint8_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint8_t);
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Byte>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m61D37B4D37DB6653882679C165C6BE5B741D4436_gshared (uint8_t* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint8_t);
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Char>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3B5A03651256D5530AE45EFC51984CBC71D27077_gshared (Il2CppChar* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Il2CppChar);
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Char>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mF05DC6B7FBABFAD1238842F58FFBA9D7E0332EC2_gshared (Il2CppChar* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Il2CppChar);
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.InputDevice>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* Unsafe_Add_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m886C9B7C45EA45F625DD5E2871215CCBA734FE57_gshared (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD);
		return ((InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Int32>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE1AE85A9993F5AD25A91F4F986D80935A0CF026_gshared (int32_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(int32_t);
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Int32Enum>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_Add_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m899362F38BE549883841837EC35E98C4A1E8D225_gshared (int32_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(int32_t);
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<easyar.Matrix44F>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515* Unsafe_Add_TisMatrix44F_t2AC2E226036AA644931F63203A7171FB070EA515_mBD953906BF4EDF55856234793C5F5D9FC6322681_gshared (Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515);
		return ((Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.MeshInfo>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* Unsafe_Add_TisMeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA_m2C22D67C56A13254FA16D22F3D5E14DE92D67F8C_gshared (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA);
		return ((MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Object>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_Add_TisRuntimeObject_mC28B0645E6AC1C26510942FD04AD041A52567BF5_gshared (RuntimeObject** ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(RuntimeObject*);
		return ((RuntimeObject**)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Object>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_Add_TisRuntimeObject_mB541869ACF5F2DFCD25F9C568BB742EAB539ED25_gshared (RuntimeObject** ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(RuntimeObject*);
		return ((RuntimeObject**)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.SByte>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* Unsafe_Add_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m64BF56E1F82EC7352EC948EADDA6EFAB40132B86_gshared (int8_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(int8_t);
		return ((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.UInt16>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_Add_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m20E7B3895C9B8B8C4CBF0C72D2569C6F7DD33EC6_gshared (uint16_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint16_t);
		return ((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.UInt32>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_Add_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE6E7056C0A79DF3F536C439A95EB8BED9A953C96_gshared (uint32_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint32_t);
		return ((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.UInt64>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Unsafe_Add_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m586BE0A9D75BD4B0AEB666F57C5806DDDC75BB7E_gshared (uint64_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint64_t);
		return ((uint64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<easyar.Vec3F>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630* Unsafe_Add_TisVec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630_m8AC01F0C2917FB507F1AE1814161CA4888C5A12C_gshared (Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630);
		return ((Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.Vector2>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* Unsafe_Add_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3F5005B9903040CE3AC6B7B13B4188AF52E1A0F7_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		return ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.Vector3>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Unsafe_Add_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC77808122B5860918EFF6669AB4441C4AA90EACC_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.XRNodeState>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* Unsafe_Add_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_m7643863ACD42BDC1C1505D83BF384CA5FA005344_gshared (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A);
		return ((XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.ARSubsystems.XRReferenceImage>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* Unsafe_Add_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_m56CE50F04855DAD93D8D5F5FE5B0840DABFC9F06_gshared (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F);
		return ((XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.XR.ARSubsystems.XRReferenceObject>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* Unsafe_Add_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_m0B642E3529132A9B984B4648654E13A84B7781F8_gshared (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14);
		return ((XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.BeforeRenderHelper/OrderBlock>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* Unsafe_Add_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mECCEF408D5A4C7D9CF866468C962FBCEB8D16A8D_gshared (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837);
		return ((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.Camera/RenderRequest>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* Unsafe_Add_TisRenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_mE865EB802BA008272732415ACC1B0738711C89B9_gshared (RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A);
		return ((RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Text.RegularExpressions.RegexCharClass/SingleRange>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* Unsafe_Add_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m8F9E4CAFBCF5A6DB4DD14B44D38BF20AA8D2FB6D_gshared (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC);
		return ((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* Unsafe_Add_TisPoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_m1A315C2FC048BF301D95C04E434147695100DAA6_gshared (PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A);
		return ((PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<UnityEngine.UnitySynchronizationContext/WorkRequest>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* Unsafe_Add_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m36FD7705490658F779614182387633AAB5FCA4E4_gshared (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44);
		return ((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Byte>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB9B2FBDA7C9D9ACEAAF1A13A21CB3820E4D6C42A_gshared (uint8_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Byte>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7A80584F05268AB9D9BA488678556DC7F23392AB_gshared (uint8_t* ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Object>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AddByteOffset_TisRuntimeObject_mC89B4989AC651CCC3F9C62035BDA283341404364_gshared (RuntimeObject** ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((RuntimeObject**)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Object>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AddByteOffset_TisRuntimeObject_m46B1CE95D569C2858206757B140457EB483A8F98_gshared (RuntimeObject** ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		RuntimeObject** L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Byte>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m17DCB1423518B0B3E4524EAC5FE26BA65A6BC92A_gshared (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___left0;
		uint8_t* L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Char>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB37DE4456CA121DF4176470A637AAE3B95F46A1F_gshared (Il2CppChar* ___left0, Il2CppChar* ___right1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___left0;
		Il2CppChar* L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Object>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisRuntimeObject_m079EE6A614CE81E9A6329DBE4B80984C7B861036_gshared (RuntimeObject** ___left0, RuntimeObject** ___right1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___left0;
		RuntimeObject** L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_As_TisRuntimeObject_mFDA1457944192D987E8EC451CC8BFB2E800D78A1_gshared (RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___o0;
		return L_0;
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisNativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0_m6848D181A4A955E69D8A18F41D6F67DD4EAF73BB_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,easyar.Optional`1<System.Object>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisOptional_1_tF5114E38E552BAED882106D566BDE52772A76B22_m1564A11E655B1AD081CF183FDB30E2A544411ABE_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.ARFoundation.ARRaycastHit>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_m5D229706DCFEE0078D303AF638C8613A2E93F89B_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.ARFoundation.ARTextureInfo>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_mF2B363305F1FA4D622BADFA064F778D734BB859C_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,easyar.BlockInfo>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765_mBC724495392F2C384D15DAD06360CF39C6B9436F_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF141105DD72A5BC944BA8293BB695024D02DE30D_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2498099B9F71500DEE1CFA774D816C5050D58A9C_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.InputDevice>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m44A9534E19B89D3CEA9FFF83637598AA977B3E41_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CF3813B9733A0CDBE0E8A325136D952A44698A_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (int32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int32Enum>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8E434534B985BD5A763E40937F16E2FEB1EFFD8C_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (int32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,easyar.Matrix44F>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisMatrix44F_t2AC2E226036AA644931F63203A7171FB070EA515_m051D36605D35DECD89AF131B85CA758DA7A98221_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.MeshInfo>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisMeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA_m1C2C4699D8E3F08427CDA5EC3B017DFB0C05E2CD_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Object>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7DB7A86DF0CAE596697C48C03F15EE61EDA619D8_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.UInt16>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8CD3F3B4E3E4EA8EAFE84DB40D862A314AFE6C2F_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (uint16_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.UInt32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mECFA2BF904F47BC0C95C31ED2DD33612380D2DB8_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (uint32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.UInt64>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m3F8A9ADB733F9CB339B6D392F681324E7D470220_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (uint64_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,easyar.Vec3F>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630_mF0A9828758F495220D10AE0A05BB28F07BF18216_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.Vector2>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mEAC8BA3B05B241FC783AF255DA4A69A0CB53594A_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.Vector3>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m7F7BEFB9BB70E49F99DF2C761783F7B47712F6DF_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.XRNodeState>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_m12A37FD433633261D4F1FABCBC9B33006BDB6028_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.ARSubsystems.XRReferenceImage>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_mC9E333CED16F4916AC9E24392D87F6EF8292FA5D_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.XR.ARSubsystems.XRReferenceObject>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_mD1ABCFB21A16FC1A673336EFF9A9EAEF195E860A_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.BeforeRenderHelper/OrderBlock>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mC4FD738B0067607B4B710D37A7B610661F585602_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.Camera/RenderRequest>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_m6AA597EE36A64A9D5DEC4608FB9437F9C0F26EB4_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Text.RegularExpressions.RegexCharClass/SingleRange>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m616F80AB4B82BC53D742CE5865AB69DEECC3EAC1_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisPoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_m765B54016CC9E8A64790DA4A386A49AB58EE6AA5_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,UnityEngine.UnitySynchronizationContext/WorkRequest>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mF1E726DE9BDC7573ADE984D127A07D04BB9F19AB_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Char,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFB63566144F982614BC997ACF976C6768FEDBB4C_gshared (Il2CppChar* ___source0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Char,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6EB81656367ABFE46E4CDD8AB8C3123E1BFFDCC6_gshared (Il2CppChar* ___source0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Decimal,System.Decimal/DecCalc>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9* Unsafe_As_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_TisDecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_mAC31A6B0EE363D6AD04F11F629BBD69FD3F45894_gshared (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___source0, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_0 = ___source0;
		return (DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m750288389C1B4714A9DFC51DA537AD1507BD5320_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCFC3FDFDA844B03EFD3B3102FA653AF097D58B8F_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.UInt32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBC79D59277D406B719AE11BF00E685C85405C227_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (uint32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisRuntimeObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m445F6D6F349C8CE113B1C1BE2F216018B4B72217_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisRuntimeObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m30EE2E6257432D4D25DDE4FBA46B1FA575866EEF_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Object>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisRuntimeObject_TisRuntimeObject_m9DBDCD08C3887118964A2A598815AFAE6903D44B_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Threading.Volatile/VolatileObject>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* Unsafe_As_TisRuntimeObject_TisVolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_m55BDDA054187BA5DECD7DD18CA865FD40B8D64B5_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt16,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9077C523106B635218BC3F9171876E1F0BA50694_gshared (uint16_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt16,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mC4DCE71843181DDCBC3CBC8DF25FA4731AC7C40E_gshared (uint16_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt32,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m32F76D490695DE07EF509A0D0EAFDD14F5056DC7_gshared (uint32_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.UInt32,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA499441C7AE51E5DAC9C173774A8CA93DA466FEA_gshared (uint32_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisRuntimeObject_m1273FB5BB30ABB03C0EAD425C97F04F8E21D102B_gshared (RuntimeObject** ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Number/NumberBuffer/DigitsAndNullTerminator>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisDigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA_mE3F141C1F8E9FAEEA53503076434A94CAB453BD4_gshared (DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* ___value0, const RuntimeMethod* method) 
{
	{
		DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Byte>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB7B94F08746E5992AF5DBE62DC46A96AEC7643E9_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Byte>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0AEA751C6A2C62806F1E18D4CEC476D2C43DC3EE_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Char>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1669BF83EB856804C2D09104E9571A745C9FA0E9_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AsRef_TisRuntimeObject_mCFA8CA6750A455ED1DB173FB907B5CBAA9470947_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Object>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AsRef_TisRuntimeObject_m54A4F6A8FF8AC70DAED29CCD79D0A6C89A504D3A_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisNativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0_m891505C0440DD40644C6823C4641DB9247023296_gshared (NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* ___left0, NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* ___right1, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* L_0 = ___left0;
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<easyar.Optional`1<System.Object>>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisOptional_1_tF5114E38E552BAED882106D566BDE52772A76B22_mF52E5382F95F8ABE356677EA8AC4C3E29EDB0FDE_gshared (Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* ___left0, Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* ___right1, const RuntimeMethod* method) 
{
	{
		Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* L_0 = ___left0;
		Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.ARFoundation.ARRaycastHit>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_m0535CE4763A7FA676D980ED2D8B876B8824FA254_gshared (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* ___left0, ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* ___right1, const RuntimeMethod* method) 
{
	{
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* L_0 = ___left0;
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.ARFoundation.ARTextureInfo>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261_m0BDA4F7636D1F157D1355B693E97D5C385043660_gshared (ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* ___left0, ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* ___right1, const RuntimeMethod* method) 
{
	{
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* L_0 = ___left0;
		ARTextureInfo_t008DA41DF9555306803303A0353619E5C0917261* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<easyar.BlockInfo>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisBlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765_mD0BBD960C352AB634232E5A8E19FF280840FB4D4_gshared (BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765* ___left0, BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765* ___right1, const RuntimeMethod* method) 
{
	{
		BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765* L_0 = ___left0;
		BlockInfo_tCFA1488149BF332B664B2510C13D3517C7B24765* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Byte>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6AB8211F6DBEE7422B923884987D1641B66C295A_gshared (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___left0;
		uint8_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.InputDevice>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_m2CDCE9057E0F52DFE92CEB7B9F8F862688514F0D_gshared (InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___left0, InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* ___right1, const RuntimeMethod* method) 
{
	{
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_0 = ___left0;
		InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Int32>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3C11A66104F35B278BDABE69A0F7516708E4C623_gshared (int32_t* ___left0, int32_t* ___right1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___left0;
		int32_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Int32Enum>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m38CEF1627C0A085C4FEE14E13E8A1F5D3361B2E2_gshared (int32_t* ___left0, int32_t* ___right1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___left0;
		int32_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<easyar.Matrix44F>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisMatrix44F_t2AC2E226036AA644931F63203A7171FB070EA515_m2817D61480A81F6C99386246FE1C86F3787FEE9E_gshared (Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515* ___left0, Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515* ___right1, const RuntimeMethod* method) 
{
	{
		Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515* L_0 = ___left0;
		Matrix44F_t2AC2E226036AA644931F63203A7171FB070EA515* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.MeshInfo>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisMeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA_mDBED287B1B5884F2B16B98C31F2550BDFFE438EE_gshared (MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* ___left0, MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* ___right1, const RuntimeMethod* method) 
{
	{
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_0 = ___left0;
		MeshInfo_t0BB7A8C2C586FD5EAD40E9E4E1749150915FDFFA* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Object>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRuntimeObject_m7A1AD8D8389B88EF0E71789B8757AE7DF8649868_gshared (RuntimeObject** ___left0, RuntimeObject** ___right1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___left0;
		RuntimeObject** L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.UInt64>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m1D27FAEB7676BE4A3528B739DE32D92D6DBF29E9_gshared (uint64_t* ___left0, uint64_t* ___right1, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___left0;
		uint64_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<easyar.Vec3F>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisVec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630_mB0810C0E590EFC299B0F9C035861FE16A0DAA1A9_gshared (Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630* ___left0, Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630* ___right1, const RuntimeMethod* method) 
{
	{
		Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630* L_0 = ___left0;
		Vec3F_t1697E529DB6D3D351055A5A52CF0974F2422E630* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.Vector2>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3AA358D66929B95E24ED595A86E8F50C1C858B5B_gshared (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___left0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___right1, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___left0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.Vector3>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m936222FEDED90B25F54ABF51E58CBB46D8A1EB82_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___left0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___right1, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___left0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.XRNodeState>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisXRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A_mCBA94D9E5B03060C9CEC8C862D5A60E745E0DCD2_gshared (XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___left0, XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* ___right1, const RuntimeMethod* method) 
{
	{
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_0 = ___left0;
		XRNodeState_t683158812A1D80A6BC73DB97405BB0B795A9111A* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.ARSubsystems.XRReferenceImage>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisXRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_m2AEC27656A0D396FEB0E6054F2064866A84B8515_gshared (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* ___left0, XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* ___right1, const RuntimeMethod* method) 
{
	{
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* L_0 = ___left0;
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.XR.ARSubsystems.XRReferenceObject>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisXRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_m950ED36ABE93BE6482AE7CE2A3BB569E7A949CDF_gshared (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* ___left0, XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* ___right1, const RuntimeMethod* method) 
{
	{
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* L_0 = ___left0;
		XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.BeforeRenderHelper/OrderBlock>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mEF5028C8208E7B962C4AE65F3F833DDD1BC5ECF9_gshared (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___left0, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___right1, const RuntimeMethod* method) 
{
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_0 = ___left0;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.Camera/RenderRequest>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A_m24CE19681812ADA768E651B46ADD21C15EB7FEBA_gshared (RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* ___left0, RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* ___right1, const RuntimeMethod* method) 
{
	{
		RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* L_0 = ___left0;
		RenderRequest_t432931B06439AC4704282E924DE8A9A474DB6B9A* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Text.RegularExpressions.RegexCharClass/SingleRange>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m0AB30724B76BE4817036FFFD56424DB67F13E359_gshared (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___left0, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___right1, const RuntimeMethod* method) 
{
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_0 = ___left0;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisPoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A_mD57BAAB7C5609D5E94856DFBF28B8F1AB978A5E5_gshared (PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* ___left0, PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* ___right1, const RuntimeMethod* method) 
{
	{
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* L_0 = ___left0;
		PoseData_t67ECD1DA6257206C1935CCD030E1E1EF57E1443A* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<UnityEngine.UnitySynchronizationContext/WorkRequest>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4146B9DC73A3CD4EE2DD174D0FEEFF8BFD2F0D8E_gshared (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___left0, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___right1, const RuntimeMethod* method) 
{
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_0 = ___left0;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::Read<System.Numerics.Vector`1<System.UInt16>>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_Read_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mFD33791C135FF5212E900623875C092D42844E4D_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::Read<System.Object>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_Read_TisRuntimeObject_mF48ACACB60DB6DEDDA9B4DB881D8B8542E35857E_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.Numerics.Vector`1<System.UInt16>>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_ReadUnaligned_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_m23E7A727856D98E5D1D8129FB27CEA2715940075_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.Int32>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_ReadUnaligned_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D178787984E8CE025EAF941A7B5E8D73BAE8D1B_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		int32_t L_1 = (*(int32_t*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.Object>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_ReadUnaligned_TisRuntimeObject_m0449A996DC864DDC692B41273048F7C65C6564EA_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.UInt16>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Unsafe_ReadUnaligned_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mED059E50CA4EF7236D4C1EFAD1A19C3D36712F06_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uint16_t L_1 = (*(uint16_t*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.UInt32>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Unsafe_ReadUnaligned_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m43042C9B34E5D513AF723172B137C4322F3EDC74_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uint32_t L_1 = (*(uint32_t*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.UIntPtr>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t Unsafe_ReadUnaligned_TisUIntPtr_t_mD4B64D4FDF6F43C3488DA13281F5AA0ECC24672E_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uintptr_t L_1 = (*(uintptr_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Numerics.Vector`1<System.UInt16>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mBED8A470840454C70486BC2C85538178BA1FCB07_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CB1161B53871FE075F5881D9521D0476E1DF691_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Char>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m23B522F69D7973DF00CE97B464C99D7C5CC64DEA_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Il2CppChar);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9AE030E4068ECDA11DD67F66251D87744ECFA98A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisRuntimeObject_m48D83A6ED66FEAF1A34596F462095F8CBA351F67_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(RuntimeObject*);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA6131DF2439BB55C289E1DFA433D0DD92D7BA5E2_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m809F14D45C4DEBB28BC7EE404B1BAE0D266DA45D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned<System.Object>(System.Byte&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisRuntimeObject_mB980CE5E548526EEDB025CC19CCC7445F5AD706B_gshared (uint8_t* ___destination0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___destination0;
		RuntimeObject* L_1 = ___value1;
		*(RuntimeObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)L_1);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned<System.UInt32>(System.Byte&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m61F5534E1C33FE40E5D929CE8D9F6D55C0022CC9_gshared (uint8_t* ___destination0, uint32_t ___value1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___destination0;
		uint32_t L_1 = ___value1;
		*(uint32_t*)L_0 = L_1;
		return;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.BoundedPlane>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_mFE15C6EAC87E0376FA3A47436DE734163D87EB91_gshared (BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* ___output0, const RuntimeMethod* method) 
{
	{
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<Unity.Collections.NativeArrayDisposeJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisNativeArrayDisposeJob_tC4C226F42B67C01224F186D06868C7BCB828E9FB_m687657D7902916300F8FFFDFE142E9F994882B84_gshared (NativeArrayDisposeJob_tC4C226F42B67C01224F186D06868C7BCB828E9FB* ___output0, const RuntimeMethod* method) 
{
	{
		NativeArrayDisposeJob_tC4C226F42B67C01224F186D06868C7BCB828E9FB* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRAnchor>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m5EFB2FA257D3BC28CD8A9DA001A09D899A2E4E25_gshared (XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* ___output0, const RuntimeMethod* method) 
{
	{
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_m7FBEEFAC7FF4D7FF5BEB837AB285CFA0AEDCC273_gshared (XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63* ___output0, const RuntimeMethod* method) 
{
	{
		XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mC753BCF02054137D23633CB281933B870E57E7C2_gshared (XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9* ___output0, const RuntimeMethod* method) 
{
	{
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRFace>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m74D7E51750235955D6F162A75328B5FDC8726BF7_gshared (XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB* ___output0, const RuntimeMethod* method) 
{
	{
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRHumanBody>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m5854818CCF3CF2345AA3799478758352F40116E6_gshared (XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692* ___output0, const RuntimeMethod* method) 
{
	{
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m79E8A79EF5060F0AC6E8F898948826BA570AB2CB_gshared (XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26* ___output0, const RuntimeMethod* method) 
{
	{
		XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRParticipant>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mDF7C579FD784D095FFBD1A73E5343D1C19C4019A_gshared (XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1* ___output0, const RuntimeMethod* method) 
{
	{
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRPointCloud>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m347394E9CDEF1DA171074B0DCD4DBAE8521430B6_gshared (XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C* ___output0, const RuntimeMethod* method) 
{
	{
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycast>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m022B6BE420C70E7C65974223885EAD3A51BDB414_gshared (XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* ___output0, const RuntimeMethod* method) 
{
	{
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m938690CD3919A27CDA5A3E865A130C102A64DF91_gshared (XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* ___output0, const RuntimeMethod* method) 
{
	{
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_m06F251DE305B6C755C385C84B30E76B157AB3C4E_gshared (XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291* ___output0, const RuntimeMethod* method) 
{
	{
		XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_mD3399AC1AEF617700A6B8B22A857E7BC179CB847_gshared (XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* ___output0, const RuntimeMethod* method) 
{
	{
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m1C47308CE7B5C4A5DFF8353E9379563EAEC284D6_gshared (XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* ___output0, const RuntimeMethod* method) 
{
	{
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m5AA8A8DCBA70C4AF7AD71D597C7BC97B09BE1422_gshared (XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75* ___output0, const RuntimeMethod* method) 
{
	{
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisAddImageJob_tC87645CC9CD1F5CB92CEA9626494F3791B609498_mDB3CB2DE26FE350EB88BD235F49476F75FC2224B_gshared (AddImageJob_tC87645CC9CD1F5CB92CEA9626494F3791B609498* ___output0, const RuntimeMethod* method) 
{
	{
		AddImageJob_tC87645CC9CD1F5CB92CEA9626494F3791B609498* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisConvertRGBA32ToARGB32Job_t33717A5A3D7B762778C603CB91A108E088C3A2D5_m7D9C1488EC7215C1FEB76416ABF0B2F0735F1BE6_gshared (ConvertRGBA32ToARGB32Job_t33717A5A3D7B762778C603CB91A108E088C3A2D5* ___output0, const RuntimeMethod* method) 
{
	{
		ConvertRGBA32ToARGB32Job_t33717A5A3D7B762778C603CB91A108E088C3A2D5* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTransformPositionsJob_t3211ABBFB066E13AA3BE3D0C4DC1694EAE5AA706_m02F4811A2819E8FAADBCAE39B760F305B89EE752_gshared (TransformPositionsJob_t3211ABBFB066E13AA3BE3D0C4DC1694EAE5AA706* ___output0, const RuntimeMethod* method) 
{
	{
		TransformPositionsJob_t3211ABBFB066E13AA3BE3D0C4DC1694EAE5AA706* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisPointCloudRaycastCollectResultsJob_t69F3217E9403CAAACB1D1142CF0C0A9761EBBDD9_mD3C472019234D81B4792DDDC0A60D0DC677B5292_gshared (PointCloudRaycastCollectResultsJob_t69F3217E9403CAAACB1D1142CF0C0A9761EBBDD9* ___output0, const RuntimeMethod* method) 
{
	{
		PointCloudRaycastCollectResultsJob_t69F3217E9403CAAACB1D1142CF0C0A9761EBBDD9* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisPointCloudRaycastJob_t150A3AAEB6CB9F85DEEDE77859C128D1727C7BFA_m476E5E4E2AB0DE5C14C2610ABBE2553A668F38F8_gshared (PointCloudRaycastJob_t150A3AAEB6CB9F85DEEDE77859C128D1727C7BFA* ___output0, const RuntimeMethod* method) 
{
	{
		PointCloudRaycastJob_t150A3AAEB6CB9F85DEEDE77859C128D1727C7BFA* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDeallocateJob_tC93114F19C2BA5B7D45FC6BE9E82A022661E6B29_mD4292C4DF886065582A342AEC0B4F7186BA06E60_gshared (DeallocateJob_tC93114F19C2BA5B7D45FC6BE9E82A022661E6B29* ___output0, const RuntimeMethod* method) 
{
	{
		DeallocateJob_tC93114F19C2BA5B7D45FC6BE9E82A022661E6B29* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.NSObject/ReleaseJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisReleaseJob_t50A6D002DD614ACD34904396B8A44E562196DBBB_m7F74065C3096744154BD48BCC21A12583E9A47F2_gshared (ReleaseJob_t50A6D002DD614ACD34904396B8A44E562196DBBB* ___output0, const RuntimeMethod* method) 
{
	{
		ReleaseJob_t50A6D002DD614ACD34904396B8A44E562196DBBB* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisFlipBoundaryWindingJob_t979472AEDCDAE3ED8D15C2B3E80A7BCB5953FBB4_m111270303056D7EA0A02458FA5ED0B95F7805224_gshared (FlipBoundaryWindingJob_t979472AEDCDAE3ED8D15C2B3E80A7BCB5953FBB4* ___output0, const RuntimeMethod* method) 
{
	{
		FlipBoundaryWindingJob_t979472AEDCDAE3ED8D15C2B3E80A7BCB5953FBB4* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTransformBoundaryPositionsJob_t4CF88CA781A656A5A9B07EEE99196368A63012D3_mE6D34E44E5EA0C9482DBE94D8E56FCB35FF682A5_gshared (TransformBoundaryPositionsJob_t4CF88CA781A656A5A9B07EEE99196368A63012D3* ___output0, const RuntimeMethod* method) 
{
	{
		TransformBoundaryPositionsJob_t4CF88CA781A656A5A9B07EEE99196368A63012D3* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mE2334E848370B909DD86A56B9F6449360847C53A_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.BoundedPlane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_mB9DE559C7071980F1609DD26929B43692A5CB17A_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.ByteEnum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m2A1D2A6356C6D1269940B8977960920BD06C1A20_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_m0F4F4DAAFBBE5BF87BE3124260B311E1ACF93528_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m6E1227F119951939CF6F08C6A1948051ED483009_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARKit.ManagedReferenceImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337_mAB4FDBE3D55C4B4144B4659A3347D220D1F221C6_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.MeshTransform>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_m08F9DB0F5471416C86EB8D51C11D082AB7792A76_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.ModifiableContactPair>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m763C773E8E8A2C722C8D68FB0140B7554C7936B4_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m7C9676413764B9F46479956AB3EAE4D4D3987344_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m7EC424F97CFAB6AB7BFD7207C89C3185EE211913_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7BDD582A0A2C440C146F9699D10B6FF35C0C027C_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.TrackableId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m5351D8E95645C74993EDF1DCD597BAF66ED91060_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCE248C5AF70A79CF4BEF0C2B3DDBDCACB5CC53F7_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8127223B00E08567EC09EF1D992F89C74F248AB0_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2A3028F48F14F0218771FA17D81540361EEE9D0E_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mCFF3A02BFA327100E27F86AA90F94EA85D86D689_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m9B25263D143C20F712C84EF45A8BFD1E0B24F3EF_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRAnchor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mF8EE51461606736392E96462EF36239D3E5453F4_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_m4EBC85FEDA8AA890A0BFD97FF07E6D563DA42767_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m76F1F1F64972CF9FA310F620BE919FC60D60DCD9_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRFace>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m14399447B4211FF746324EB1A6AA485F0FE476C8_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRHumanBody>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mF02E7B0C57B07175D0EFFD7C79CBBBD42A12D4C1_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_mB999A43ABDF55477B9D46323BFCF4E4C3A8EB698_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m37F2A5C7F981C266D5946F69A952BCD9E88EC89A_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRParticipant>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB2DBC5188784BEE969B5C72B7A393E5BE1353F64_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRPointCloud>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mD55F2D0FB75D026DE3F5E3599A004BA1EA101277_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRRaycast>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mE16A858B759383B08BF2F5810A961BFD329FA785_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m28ECD372F36C5859D7EFE4EE1D8C3830DAA3DC80_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_m6EBA528A49E38BDA374FF207C440D04C4C6EF9DA_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m6165434CE570A7159BF25900E2EC721F232907AA_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m431438B023F476D706C1F3A3655A402568572E87_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m226D8C2ACA421227FC92F28BE52E74DBBCDE2ECB_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_m9895A124B48ADEF05A7586C14A970851843BE3D7_gshared (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA UnsafeUtility_ReadArrayElement_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_m437F0C1852A3E41F67EC56F43811AB07A48EEFFA_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA);
		BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA L_3 = (*(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.BoundedPlane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE UnsafeUtility_ReadArrayElement_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m64D39B918CCC1D470660E87643D692C282A7030D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_3 = (*(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.ByteEnum>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m58B7F3FFCC913656C5C33DB7D5098860234C41D6_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 UnsafeUtility_ReadArrayElement_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_m5CCC97E45C09B950207E8B842F24F0C5613C1B69_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1);
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_3 = (*(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 UnsafeUtility_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2ED1FB77CEDEF6090E5857DAA0CE6F3AFC6C35E4_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = (*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARKit.ManagedReferenceImage>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 UnsafeUtility_ReadArrayElement_TisManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337_mFD2A6880C19A97DE564A6325DB89546C01675558_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337);
		ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 L_3 = (*(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.MeshTransform>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A UnsafeUtility_ReadArrayElement_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_mC3D404320A523D49ACADB2D6894AEC3D3100776C_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A);
		MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A L_3 = (*(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.ModifiableContactPair>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 UnsafeUtility_ReadArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mEA45FBD76E48DCE01C215C48D8C647B488C60516_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_3 = (*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeUtility_ReadArrayElement_TisRuntimeObject_m7A6BDCFE0AE15FDD0F8F8F50CDAF8595FAFCEBB9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject*);
		RuntimeObject* L_3 = (*(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C UnsafeUtility_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mEB527AAA71722D961891591C3A13D3FDD83B42A5_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = (*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Quaternion>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnsafeUtility_ReadArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC90C0EE3D32DDFEF22B982217F27BA07286AC2B7_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Single>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnsafeUtility_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE8E8016F9D75B5FE0F784B0B6EBEF71D6B31D134_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float);
		float L_3 = (*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 UnsafeUtility_ReadArrayElement_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m5CDC3521CA6DE2575CF3AAF8BC8EA755E78DDA72_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3 = (*(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt64>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector2>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m113285A6894774BBBB284A644C2D7094F30AB442_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector4>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRAnchor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 UnsafeUtility_ReadArrayElement_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m8B479CF0156609AC4212B51A3CEF4353DF66AC1C_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_3 = (*(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 UnsafeUtility_ReadArrayElement_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_mAD6141A2DC41E0A91675D1C71DF42CFE7A5905D1_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63);
		XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 L_3 = (*(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 UnsafeUtility_ReadArrayElement_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m334BA46344536DF40FDC0283782B330329B1246C_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9);
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 L_3 = (*(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRFace>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB UnsafeUtility_ReadArrayElement_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m78D9105DC491BDE33AADD0C1631D665DC927AE09_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB);
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB L_3 = (*(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBody>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 UnsafeUtility_ReadArrayElement_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m9F94E0956FEC8A77B1682ACC48C29DE8EEB22A1A_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692);
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 L_3 = (*(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 UnsafeUtility_ReadArrayElement_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_mC325332E85954CD6672524A8ACE44488D75BCB07_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826);
		XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 L_3 = (*(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 UnsafeUtility_ReadArrayElement_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_mE4C282AC0BDD9DE93C46CBCD06FAE533481BEED8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26);
		XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 L_3 = (*(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRParticipant>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 UnsafeUtility_ReadArrayElement_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_m0ED8A24079DA4334FC97B3B7AB491CD8B4A3CE14_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1);
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 L_3 = (*(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRPointCloud>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C UnsafeUtility_ReadArrayElement_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mA046EEE9ADB51DA97D3C2CD510F42C31277BCAE8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C);
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C L_3 = (*(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRRaycast>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 UnsafeUtility_ReadArrayElement_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m128B8510DF576F5EAB70B4F3EEF4E0A2088147D2_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_3 = (*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRRaycastHit>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 UnsafeUtility_ReadArrayElement_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m5633F49C81AF7833534B2CDF3B101D0F9ED0D576_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_3 = (*(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRReferencePoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 UnsafeUtility_ReadArrayElement_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_mD679ABFE6CE66BD52B6CF651A1AB0F6CD9ADEB30_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291);
		XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 L_3 = (*(XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 UnsafeUtility_ReadArrayElement_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m759627B8B75445595F45B357AB52E34F586FCDF7_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_3 = (*(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedImage>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD UnsafeUtility_ReadArrayElement_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_mD8285100AE1DD306B65D6EF5899AB69D642E382A_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD);
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_3 = (*(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedObject>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 UnsafeUtility_ReadArrayElement_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m5153D26AEC8C7DF5D3E18414E86ED0692E45F1B1_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75);
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 L_3 = (*(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 UnsafeUtility_ReadArrayElement_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_mC65FF44680E234FEA194E009CF85F12C7F28228B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4);
		PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 L_3 = (*(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Byte>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElementWithStride_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC24C19ACD67D7D24118C4917A58301288B0FD2C7_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 UnsafeUtility_ReadArrayElementWithStride_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_m25BE281C621C2A184586C80C28A0B1D0CDA9E780_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_3 = (*(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnsafeUtility_ReadArrayElementWithStride_TisRuntimeObject_m9FE97539260EAE4EF05EB8911CD5012F0A7D03D2_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject* L_3 = (*(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.UInt32>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElementWithStride_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8223ECA21FA21F004C4E5006FB23FE47893C7ADF_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.UInt64>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElementWithStride_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2CBB76CFBC7238E49441D57F868E26FD959DD911_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.Vector3>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElementWithStride_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF0823BA8B97766FCB2A9F676A2CA04C9E5E4EDE8_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t06B2AF48C49769AAD65F5E3F53EA9C54BFB10F00_mCE9D27D926EC9F721746A596890927A10E1CB4A9_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t06B2AF48C49769AAD65F5E3F53EA9C54BFB10F00);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.BoundedPlane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB06A689E75BED03FFD7EF2F67DB0A0BF55FD26E8_m986EA5EAAE6A1C6C1086FE889811F32536101A99_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB06A689E75BED03FFD7EF2F67DB0A0BF55FD26E8);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.ByteEnum>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4B14D6C50C2E309FAFD8A3F22F5A06A357B833F8_m05019A56443F82E4A4413D78D9639F11B7DE1FED_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4B14D6C50C2E309FAFD8A3F22F5A06A357B833F8);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEC193CCC2AC6E38B0E639D12C62A3A14B63D72E7_m45843A24D6A6B1CC02726C2617738C4A3B3B639B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEC193CCC2AC6E38B0E639D12C62A3A14B63D72E7);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ManagedReferenceImage>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB64EA1C3849C395B01026BB700A9C2A0ECB160FD_mE5A521CBA8FB58A7C9C7DCCB8E69EC7FBC3DEA52_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB64EA1C3849C395B01026BB700A9C2A0ECB160FD);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.MeshTransform>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9F543929F600FA93DA40FC6F5A5E5C0DCB61F42F_mE9A4DCD522EE069CE6033D3FAC45C2247DA10361_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9F543929F600FA93DA40FC6F5A5E5C0DCB61F42F);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.ModifiableContactPair>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB_mBAC80201764318E3EA5F8128D39E09641398AE17_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Quaternion>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Single>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A_mA7E20A1B9EBF3F0C025AEB17B4218DED4B1FEC3F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.TrackableId>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1B0EA5A1E7D9C74577BD9F7B65768A70AB421E87_m64BF1DF1CDD0867AB39FCF8756B18431276CA8E2_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1B0EA5A1E7D9C74577BD9F7B65768A70AB421E87);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019_m92D326AE7D9C6FC84D0197EAA7F59131FCACEC19_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817_m481B6255CC2EBB63A42623A3A80AD906330E6F8C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector2>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227_m3A555507D3794AA55E2DA800BA4A3B615515BE59_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector4>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRAnchor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC0F0471D2FE3757817D5616407CF8C963E068D51_mB26F10D1EEE97DF65908C2D07D713028FB218082_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC0F0471D2FE3757817D5616407CF8C963E068D51);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0469BA4E514B73A985C93ED290FF5F66607A4EE1_m08A3DB952CA15C85512FB3E294EC2A508DEA5D2B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0469BA4E514B73A985C93ED290FF5F66607A4EE1);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B_m08D8B339DBE4FBB68FFAEF400B4B9E99CA97ED11_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRFace>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383_m970540311AD5C5CD9F554AD955B9194E5E7ECB0A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBody>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0_m2B48F097FC4B6DF0A744D5A89A8086B47A8CECF7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67_mF34681E33B267EB78BBA8FDD8F20F38E6277C571_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D_m5A19F1C81860E5C63DA00D295F357B2C33131AD9_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRParticipant>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA_mC21D07B76A2752FD352A68A50DF1A46D160B4A06_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRPointCloud>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1_mFA450837C75D91F2F8E11DA98A32482AABC20463_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycast>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B_mAB372851CE2EF12FA64C03A2331547CBA8BBA21C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B_mF086DC821933BBF610EDE49500340862C6828904_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8CCB14B1267A08F7799FDCE191C4323549BA6A49_m5E098C17358ECD11AC58EBA147195C3289638CF8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8CCB14B1267A08F7799FDCE191C4323549BA6A49);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439_mE76BA61D3DBBE9D550AFE410A39CB7BF35B0C719_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5_mDA9678A4BDA010791A0BB8A2B6D025EA338BBDE7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819_m40949B433544E1E3F6001F64F66515F52B9F4716_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E_m417BB15EFDE654CB9F5084AE2C6BE82D39EF993D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_m75A4A90BDEB9E41F62764F2A3DABE2F6EA222A46_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.BoundedPlane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m7A86C643E2B3050004055E36F8081C9BC174DF43_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.ByteEnum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_mEEA5AE2DA999749F3556BBFF1964B302E90A0D64_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_mEAF8889D8E67EB11CD5FFD32B4D13466BD28C2E2_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARKit.ManagedReferenceImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337_m440CD9AAB4CAA84797259A2203D8F885CE2BC55B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.MeshTransform>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_mCCE360F24E552B1FB2E2380D875629DC410F55B4_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.ModifiableContactPair>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mC54F55F9EC7B43A45570471F1D8CFA82F37AFE1D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.TrackableId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m5B458D1A2793D9AB0C9502D58DB4EC4325248A8A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB95F2BE00B68117D1DF84661261D1FBCA90144D4_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRAnchor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mEBD4E94BA49FB53B4CE7CD701343C838A7189795_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_m50CF1E6561AA517A00231C0C0BEB236149858ABD_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mEA8E3E8B8BFAD90BE489F5BB5FFA40AB0FE42C8F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRFace>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mAF3536DC8A45B64F341A3FF9A3EB56C0C3CF9229_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBody>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m3F41B3C6E1850E30DF57CCB21C990C84A1BB0E9A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_m6BA1DFBBBD198CB58426D9132F57396D65752548_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m06463E88B7D4B016F271C4CC2A134A4440E7E3BF_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRParticipant>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB697C868BD5A34C03C1EA74873A2799A05ED5A72_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRPointCloud>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mCA38CDBE9F042A16A1C0E2CB2162D93972CC2CFC_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycast>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mDE47ECB8AF94BBBEA38D5817983D851D4385B11B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m6224D105C87791322658D55A5F017D3D83D72699_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_m4CA77BA1A3A52FC495EF8AE20B0CE6ED547AE040_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m8885F6C3EB1F9956EEAC511EAED915FB63E36777_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m6DCD64C34470921DC5ED8E8C5A215E259A7DE914_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m7CA699973CAB664C38EACC8EDC294DF364004117_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_mB59551264BB73A3ECDAC262FA997B9EBEAFD3C5C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4);
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA_mD4BFA097F6D757296F4DBF93B05F53922CDDD33B_gshared (void* ___destination0, int32_t ___index1, BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA);
		BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA L_3 = ___value2;
		*(BatchVisibility_t0AC94FB0AE271C762F911D4602604F4D83837CEA*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.BoundedPlane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m2360E5D9B2E04892C65A6D52F6A3245DFF21519C_gshared (void* ___destination0, int32_t ___index1, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_3 = ___value2;
		*(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Byte>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.ByteEnum>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m48F359DF2B61DA25581FD16E4041AA076040B7AF_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_mF07AD6F58F9B07AD795297483E0B615E5A8703CE_gshared (void* ___destination0, int32_t ___index1, ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1);
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_3 = ___value2;
		*(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m6113BA4FEE412326B8C4AE48EF490E280EF24144_gshared (void* ___destination0, int32_t ___index1, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = ___value2;
		*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARKit.ManagedReferenceImage>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337_m301E7B7954538ED3C9720AEDB18D0F340F9AB162_gshared (void* ___destination0, int32_t ___index1, ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337);
		ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 L_3 = ___value2;
		*(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.MeshTransform>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_m015EF4BBAEA47E6D55749BDC284E51B64E3B03C9_gshared (void* ___destination0, int32_t ___index1, MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A);
		MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A L_3 = ___value2;
		*(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.ModifiableContactPair>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m984D59C779E69C17ED01C8FAB083CE6F114D6E44_gshared (void* ___destination0, int32_t ___index1, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_3 = ___value2;
		*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mABBA07A4549CE7708FB90C9A781CA5DE0D60A7C3_gshared (void* ___destination0, int32_t ___index1, RuntimeObject* ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject*);
		RuntimeObject* L_3 = ___value2;
		*(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m5752F3073072D6DCB16C429071ED8126C1CB6502_gshared (void* ___destination0, int32_t ___index1, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = ___value2;
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Quaternion>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m8FECF9726B6A90FEADC960133A19868C171B28E9_gshared (void* ___destination0, int32_t ___index1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___value2;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Single>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC03212F05038DAAA1F180317241B89AB90500BF8_gshared (void* ___destination0, int32_t ___index1, float ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float);
		float L_3 = ___value2;
		*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_mDEB6CF7BF3830D14F454D3A5D998164ABAC3945A_gshared (void* ___destination0, int32_t ___index1, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3 = ___value2;
		*(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_gshared (void* ___destination0, int32_t ___index1, uint32_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = ___value2;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt64>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_gshared (void* ___destination0, int32_t ___index1, uint64_t ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = ___value2;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector2>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_gshared (void* ___destination0, int32_t ___index1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___value2;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC08010A74AC1BF608813C293C4C52F4EF4B30106_gshared (void* ___destination0, int32_t ___index1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___value2;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector4>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_gshared (void* ___destination0, int32_t ___index1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___value2;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRAnchor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mD744F37E373E4AD5F998FBC74781B2EF7A71811D_gshared (void* ___destination0, int32_t ___index1, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_3 = ___value2;
		*(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_m5ECFCA927E9BDCC532BA0C00CC2D9747C590C433_gshared (void* ___destination0, int32_t ___index1, XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63);
		XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 L_3 = ___value2;
		*(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mCD9E63CF57DDC956BE86226E15925C2A9A95953E_gshared (void* ___destination0, int32_t ___index1, XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9);
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 L_3 = ___value2;
		*(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRFace>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m0B14FE4D6FCCE877540A8BCE92F4AE9757E666DA_gshared (void* ___destination0, int32_t ___index1, XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB);
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB L_3 = ___value2;
		*(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBody>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m52FA22C93EA645BDFED07963298261127FE177CE_gshared (void* ___destination0, int32_t ___index1, XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692);
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 L_3 = ___value2;
		*(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_m96732A115E78436C592C1E1929495A259055A302_gshared (void* ___destination0, int32_t ___index1, XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826);
		XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 L_3 = ___value2;
		*(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m17B3A2A0921F059F1787C08B8EBA55E5F26DFC5A_gshared (void* ___destination0, int32_t ___index1, XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26);
		XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 L_3 = ___value2;
		*(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRParticipant>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_m941D84335134B71A0C9EDB558A25030D97DBC6BF_gshared (void* ___destination0, int32_t ___index1, XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1);
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 L_3 = ___value2;
		*(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRPointCloud>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m504FF71C447AA8018D6602FCC91E7572D0E86398_gshared (void* ___destination0, int32_t ___index1, XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C);
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C L_3 = ___value2;
		*(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRRaycast>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m2E577897EBCFBB18999882BA3449FC8028878610_gshared (void* ___destination0, int32_t ___index1, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_3 = ___value2;
		*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRRaycastHit>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_mBEFBCFA821EEDF30C0D16137C9FC60B23BB147E2_gshared (void* ___destination0, int32_t ___index1, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_3 = ___value2;
		*(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRReferencePoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291_m5FA5DA7A26D364A9EBE5B3E3DD9678BBCB57D043_gshared (void* ___destination0, int32_t ___index1, XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291);
		XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291 L_3 = ___value2;
		*(XRReferencePoint_t7B269D148483373FDE78B3262CF334C2D86B6291*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_mB49B471F2F38243DC440C5250573C0C164FC505F_gshared (void* ___destination0, int32_t ___index1, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_3 = ___value2;
		*(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedImage>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m8AFC7D305EC8D6F79E7BFB2BFBFAEDD675FE9549_gshared (void* ___destination0, int32_t ___index1, XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD);
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_3 = ___value2;
		*(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedObject>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mC9A38A2CC0EB3400F0C7A14C15D402E267648EB7_gshared (void* ___destination0, int32_t ___index1, XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75);
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 L_3 = ___value2;
		*(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_m795BDEB9E8AC3854C96D4BF644DCA25000EEAACA_gshared (void* ___destination0, int32_t ___index1, PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 ___value2, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4);
		PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 L_3 = ___value2;
		*(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.Byte>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD64B816BD360CF926B77516A2707ED5608023EB3_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint8_t ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint8_t L_3 = ___value3;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_m56B80803D0C1ED8ABB5D4FEE52F3317449F1465B_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_3 = ___value3;
		*(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisRuntimeObject_mF7B8147845C72D93EC33B690230914172912C9F6_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, RuntimeObject* ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject* L_3 = ___value3;
		*(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.UInt32>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE82071A53D46C2CD689A54289FDDD5A435C6D75D_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint32_t ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint32_t L_3 = ___value3;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.UInt64>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mBED13A80D4ED2F48D804A3344B867F98E127DC36_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint64_t ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint64_t L_3 = ___value3;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.Vector3>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC6522E62D62D0F3B595EB475556A84D8FD0F88CE_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value3, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___value3;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<System.UInt16>(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m0D538510931D731CE9075661C07B0DECAAC84B82_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___value0, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// System.Numerics.Vector`1<T> System.Numerics.Vector::Equals<System.UInt16>(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_Equals_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1E49423160D9D2F662A38FDEE88842FC26B67EBC_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___left0, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___right1, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___left0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		L_2 = ((  Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_mDE75C7462350B2A7FB1546BCE22D13CBD69AC088_gshared (RuntimeObject** ___location0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = (RuntimeObject*)L_1->___Value_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mBB6C58646958F01615FEBF405DCE2A9926F81962_gshared (RuntimeObject** ___location0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___value1;
		il2cpp_codegen_memory_barrier();
		L_1->___Value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value_0), (void*)L_2);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<System.Int32>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0514BD1867C1350767759258A8399078406FE00_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___array2, bool ___shouldExist3, const RuntimeMethod* method) 
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_6 = ___array2;
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_10), L_8, L_9, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)L_7 = L_10;
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_14), L_12, L_13, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)L_11 = L_14;
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0(L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_17 = ___array2;
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2BF71EECDB2B045457C18AC0E3B18C9248D46C45_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___array2, bool ___shouldExist3, const RuntimeMethod* method) 
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_6 = ___array2;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_10), L_8, L_9, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_7 = L_10;
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_14), L_12, L_13, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_11 = L_14;
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F(L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_17 = ___array2;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<UnityEngine.Vector3>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF86541C1C09AE66E862FA1049F14C8CB0C2B9DC1_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___array2, bool ___shouldExist3, const RuntimeMethod* method) 
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_6 = ___array2;
		NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0((&L_10), L_8, L_9, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_7 = L_10;
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0((&L_14), L_12, L_13, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_11 = L_14;
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9(L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_17 = ___array2;
		NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateIntegratedSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateIntegratedSubsystem_TisRuntimeObject_TisRuntimeObject_mBAF3746971CDCF6B58182FF66E5A2B681461DFC7_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateStandaloneSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateStandaloneSubsystem_TisRuntimeObject_TisRuntimeObject_m4A018972895E62D6EF6C8AED44E9F620D5A14199_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// if (descriptors == null)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("descriptors");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemManager.GetSubsystemDescriptors<TDescriptor>(descriptors);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___descriptors0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// if (descriptors.Count > 0)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = ___descriptors0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		// foreach (var descriptor in descriptors)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = ___descriptors0;
		NullCheck(L_5);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_6;
		L_6 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_0), il2cpp_rgctx_method(method->rgctx_data, 11));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0026_1:
			{
				// foreach (var descriptor in descriptors)
				RuntimeObject* L_7;
				L_7 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
				V_1 = L_7;
				// ISubsystem subsys = null;
				V_2 = (RuntimeObject*)NULL;
				// if (String.Compare(descriptor.id, id, true) == 0)
				NullCheck((RuntimeObject*)(V_1));
				String_t* L_8;
				L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
				String_t* L_9 = ___id1;
				int32_t L_10;
				L_10 = String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14(L_8, L_9, (bool)1, NULL);
				if (L_10)
				{
					goto IL_0054_1;
				}
			}
			{
				// subsys = descriptor.Create();
				NullCheck((RuntimeObject*)(V_1));
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.ISubsystem UnityEngine.ISubsystemDescriptor::Create() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
				V_2 = L_11;
			}

IL_0054_1:
			{
				// if (subsys != null)
				RuntimeObject* L_12 = V_2;
				if (!L_12)
				{
					goto IL_006f_1;
				}
			}
			{
				// m_SubsystemInstanceMap[typeof(TSubsystem)] = subsys;
				Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_13 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_15;
				L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
				RuntimeObject* L_16 = V_2;
				NullCheck(L_13);
				Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6(L_13, L_15, L_16, Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
				// break;
				goto IL_0088;
			}

IL_006f_1:
			{
				// foreach (var descriptor in descriptors)
				bool L_17;
				L_17 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_0), il2cpp_rgctx_method(method->rgctx_data, 9));
				if (L_17)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0088;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// var subsystemType = typeof(T);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		V_1 = L_3;
		// if (m_SubsystemInstanceMap.ContainsKey(subsystemType))
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_4 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838(L_4, L_5, Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// m_SubsystemInstanceMap.Remove(subsystemType);
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_7 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533(L_7, L_8, Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var);
	}

IL_0035:
	{
		// subsystem.Destroy();
		RuntimeObject* L_10 = V_0;
		NullCheck((RuntimeObject*)L_10);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ISubsystem::Destroy() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
	}

IL_0040:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRLoaderHelper::GetLoadedSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_mA4965EC76CEF5709AA6B2611C065E12BD5CA8ACB_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// Type subsystemType = typeof(T);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		// m_SubsystemInstanceMap.TryGetValue(subsystemType, out subsystem);
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_2 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682(L_2, L_3, (&V_1), Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var);
		// return subsystem as T;
		RuntimeObject* L_5 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Start();
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.ISubsystem::Start() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Stop();
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.ISubsystem::Stop() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRManagerSettings::ActiveLoaderAs<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_ActiveLoaderAs_TisRuntimeObject_m9672E32C32CA1F82DB7CE86C58E9B91C5A8983CD_gshared (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// return activeLoader as T;
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0;
		L_0 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(__this, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::Register<System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem_Register_TisRuntimeObject_m3B020ED22373F2C83A04FD37B1A1C11C4C128167_gshared (String_t* ___id0, Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___capabilities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (id == null)
		String_t* L_0 = ___id0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(id));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRObjectTrackingSubsystem_Register_TisRuntimeObject_m3B020ED22373F2C83A04FD37B1A1C11C4C128167_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRObjectTrackingSubsystemDescriptor(id, typeof(T), null, capabilities));
		String_t* L_2 = ___id0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B L_5 = ___capabilities1;
		XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* L_6 = (XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3*)il2cpp_codegen_object_new(XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XRObjectTrackingSubsystemDescriptor__ctor_m2177FCC9E1AFC3E173E078744766BFA8FF45BE5B(L_6, L_2, L_4, (Type_t*)NULL, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_m380FFC26C59476ECFD500C2DFED12B6CF4870537_gshared (String_t* ___id0, Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___capabilities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (id == null)
		String_t* L_0 = ___id0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(id));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_m380FFC26C59476ECFD500C2DFED12B6CF4870537_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRObjectTrackingSubsystemDescriptor(id, typeof(TProvider), typeof(TSubsystemOverride), capabilities));
		String_t* L_2 = ___id0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B L_7 = ___capabilities1;
		XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* L_8 = (XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3*)il2cpp_codegen_object_new(XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		XRObjectTrackingSubsystemDescriptor__ctor_m2177FCC9E1AFC3E173E078744766BFA8FF45BE5B(L_8, L_2, L_4, L_6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_8, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::Register<System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_m9BF228170DBD30266956BE3280951BCD2669A775_gshared (String_t* ___subsystemId0, int32_t ___capabilities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRParticipantSubsystemDescriptor(subsystemId, typeof(T), null, capabilities));
		String_t* L_0 = ___subsystemId0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		int32_t L_3 = ___capabilities1;
		XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE* L_4 = (XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE*)il2cpp_codegen_object_new(XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XRParticipantSubsystemDescriptor__ctor_m1629BC38262CF3786A0C4A765B0653D3038D4DB3(L_4, L_0, L_2, (Type_t*)NULL, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_TisRuntimeObject_m6CFA245081F9F2ADD548CE3948A18F59DDC3790C_gshared (String_t* ___subsystemId0, int32_t ___capabilities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRParticipantSubsystemDescriptor(subsystemId, typeof(TProvider), typeof(TSubsystemOverride), capabilities));
		String_t* L_0 = ___subsystemId0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		int32_t L_5 = ___capabilities1;
		XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE* L_6 = (XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE*)il2cpp_codegen_object_new(XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XRParticipantSubsystemDescriptor__ctor_m1629BC38262CF3786A0C4A765B0653D3038D4DB3(L_6, L_0, L_2, L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_6, NULL);
		// }
		return;
	}
}
// T UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_gshared (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public T FindEntry<T>() where T : XRReferenceObjectEntry => FindEntry(typeof(T)) as T;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA* L_2;
		L_2 = XRReferenceObject_FindEntry_mFF9C29CCCDF7BA08B307B787DF83EF8F27B6017C(__this, L_1, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C  RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31(_thisAdjusted, method);
	return _returnValue;
}
// T easyar.Detail/AutoRelease::Add<System.IntPtr>(T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AutoRelease_Add_TisIntPtr_t_m923495152E22361E47B5B3F047258613FF497E4A_gshared (AutoRelease_tE98A0552260E9E69BCE25CA627912842B391EB1F* __this, intptr_t ___p0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_1_tFDDE333E8A01E558F809BB7A510BB74679EF8A7B* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		U3CU3Ec__DisplayClass2_0_1_tFDDE333E8A01E558F809BB7A510BB74679EF8A7B* L_0 = (U3CU3Ec__DisplayClass2_0_1_tFDDE333E8A01E558F809BB7A510BB74679EF8A7B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass2_0_1_tFDDE333E8A01E558F809BB7A510BB74679EF8A7B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_1_tFDDE333E8A01E558F809BB7A510BB74679EF8A7B* L_1 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_2 = ___deleter1;
		NullCheck(L_1);
		L_1->___deleter_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___deleter_0), (void*)L_2);
		U3CU3Ec__DisplayClass2_0_1_tFDDE333E8A01E558F809BB7A510BB74679EF8A7B* L_3 = V_0;
		intptr_t L_4 = ___p0;
		NullCheck(L_3);
		L_3->___p_1 = L_4;
		// if (p.Equals(default(T))) { return p; }
		U3CU3Ec__DisplayClass2_0_1_tFDDE333E8A01E558F809BB7A510BB74679EF8A7B* L_5 = V_0;
		NullCheck(L_5);
		intptr_t* L_6 = (intptr_t*)(&L_5->___p_1);
		il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
		intptr_t L_7 = V_1;
		intptr_t L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_8);
		bool L_10;
		L_10 = IntPtr_Equals_m0F39AB64A7BBD67190E745FF8334A5FC766CB26E(L_6, L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
		if (!L_10)
		{
			goto IL_003c;
		}
	}
	{
		// if (p.Equals(default(T))) { return p; }
		U3CU3Ec__DisplayClass2_0_1_tFDDE333E8A01E558F809BB7A510BB74679EF8A7B* L_11 = V_0;
		NullCheck(L_11);
		intptr_t L_12 = (intptr_t)L_11->___p_1;
		return L_12;
	}

IL_003c:
	{
		// if (actions == null) { actions = new List<Action>(); }
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_13 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)__this->___actions_0;
		if (L_13)
		{
			goto IL_004f;
		}
	}
	{
		// if (actions == null) { actions = new List<Action>(); }
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_14 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_14, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		__this->___actions_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actions_0), (void*)L_14);
	}

IL_004f:
	{
		// actions.Add(() => deleter(p));
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_15 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)__this->___actions_0;
		U3CU3Ec__DisplayClass2_0_1_tFDDE333E8A01E558F809BB7A510BB74679EF8A7B* L_16 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_17, (RuntimeObject*)L_16, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 4)), NULL);
		NullCheck(L_15);
		List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_15, L_17, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		// return p;
		U3CU3Ec__DisplayClass2_0_1_tFDDE333E8A01E558F809BB7A510BB74679EF8A7B* L_18 = V_0;
		NullCheck(L_18);
		intptr_t L_19 = (intptr_t)L_18->___p_1;
		return L_19;
	}
}
// T easyar.Detail/AutoRelease::Add<System.Object>(T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AutoRelease_Add_TisRuntimeObject_m9AE709D1EBB533349158C9333444AF6630FC63E3_gshared (AutoRelease_tE98A0552260E9E69BCE25CA627912842B391EB1F* __this, RuntimeObject* ___p0, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___deleter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_1_t885E6BF23042B95DB28CE03E4215064BF55E4E92* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_1_t885E6BF23042B95DB28CE03E4215064BF55E4E92* L_0 = (U3CU3Ec__DisplayClass2_0_1_t885E6BF23042B95DB28CE03E4215064BF55E4E92*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass2_0_1_t885E6BF23042B95DB28CE03E4215064BF55E4E92*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_1_t885E6BF23042B95DB28CE03E4215064BF55E4E92* L_1 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___deleter1;
		NullCheck(L_1);
		L_1->___deleter_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___deleter_0), (void*)L_2);
		U3CU3Ec__DisplayClass2_0_1_t885E6BF23042B95DB28CE03E4215064BF55E4E92* L_3 = V_0;
		RuntimeObject* L_4 = ___p0;
		NullCheck(L_3);
		L_3->___p_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___p_1), (void*)L_4);
		// if (p.Equals(default(T))) { return p; }
		U3CU3Ec__DisplayClass2_0_1_t885E6BF23042B95DB28CE03E4215064BF55E4E92* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject** L_6 = (RuntimeObject**)(&L_5->___p_1);
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_7 = V_1;
		NullCheck((*L_6));
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (*L_6), L_7);
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		// if (p.Equals(default(T))) { return p; }
		U3CU3Ec__DisplayClass2_0_1_t885E6BF23042B95DB28CE03E4215064BF55E4E92* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = (RuntimeObject*)L_9->___p_1;
		return L_10;
	}

IL_003c:
	{
		// if (actions == null) { actions = new List<Action>(); }
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_11 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)__this->___actions_0;
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		// if (actions == null) { actions = new List<Action>(); }
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_12 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_12, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		__this->___actions_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actions_0), (void*)L_12);
	}

IL_004f:
	{
		// actions.Add(() => deleter(p));
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_13 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)__this->___actions_0;
		U3CU3Ec__DisplayClass2_0_1_t885E6BF23042B95DB28CE03E4215064BF55E4E92* L_14 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_15, (RuntimeObject*)L_14, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 4)), NULL);
		NullCheck(L_13);
		List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_13, L_15, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		// return p;
		U3CU3Ec__DisplayClass2_0_1_t885E6BF23042B95DB28CE03E4215064BF55E4E92* L_16 = V_0;
		NullCheck(L_16);
		RuntimeObject* L_17 = (RuntimeObject*)L_16->___p_1;
		return L_17;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3FF6126D31B18EF8F02A921B6EF41A436C07AB3E_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___array2, const RuntimeMethod* method) 
{
	{
		// if (array.IsCreated)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_0 = ___array2;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_2 = ___array2;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_2)->___m_Length_1);
		int32_t L_4 = ___length0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_5 = ___array2;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_6 = ___array2;
		int32_t L_7 = ___length0;
		int32_t L_8 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_9), L_7, L_8, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_6 = L_9;
		return;
	}

IL_0026:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_10 = ___array2;
		int32_t L_11 = ___length0;
		int32_t L_12 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_13), L_11, L_12, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_10 = L_13;
	}

IL_0034:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ARReferenceImage_AsIntPtr_mB51CBD770F897DE2CD783829FB7B6E7DB8ADB491_inline (ARReferenceImage_t523626F386E63F9AB65953D9AB27A651926D6136* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = __this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ARReferenceObject_AsIntPtr_mBDCD3D70CB4E239E4363C1838F8340374552EB0E_inline (ARReferenceObject_t1B6B82E3659F03EE44CE1E715009DF12664C9379* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = __this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSBundle_AsIntPtr_m83D50BFA055FADA6614C708A12C8E7B77D9BAB15_inline (NSBundle_t0BA04F85AFE6BB05F33F16826DE3C88358C4CD2A* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = __this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSData_AsIntPtr_mFFF5444074F72538360DBBB602FC5CF4F7CBACC2_inline (NSData_t9AAA5FECF2A97E9D10DB92D4BDB76B3FA7BEA579* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = __this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSError_AsIntPtr_mC626DC458106CBF73F0A357C254836751F65CC54_inline (NSError_t2D5B776DCC1C16BD32BA4EB06DE60A3068378E80* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = __this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSMutableData_AsIntPtr_m6224C54804C8378F892389D06D7938E378408AE3_inline (NSMutableData_tD8A9B0E8B362DFF9E6ADF4C4E5F7C3101EA99BBD* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = __this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSMutableString_AsIntPtr_m5D70D0EE3CFAB410E4D8AE31F92ABABE58BE27F1_inline (NSMutableString_t45B569C499EC13C60D9131B3A0D7E15D806DDA26* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = __this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSString_AsIntPtr_m0B09B41CFB3FAD0DC48FF26CE66D7680834196B2_inline (NSString_t0191BA1064CD5FA606A88A32045C88E6C52623B3* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = __this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSURL_AsIntPtr_m526C8EDEB47E52D6AA6BBF2C6A954C64B1D5F76B_inline (NSURL_tB60C88D5928D68A901A5BCBB122F6D96B676B28D* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = __this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSUUID_AsIntPtr_mFF36E304598350ACB508AEEFC021B73F1AFBE838_inline (NSUUID_t3F294DC5C2908EBEC1DB1BEDD7250AC9A8554F7E* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = __this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m157C37312DF3344D3A93776D167FB27687871A55_gshared_inline (Nullable_1_tEB2C98337B52A3729A2B9829DDF126AFFA1435E2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSSet_1_AsIntPtr_m1D429297BD86691BFF8348340F35ECE7077D1AB7_gshared_inline (NSSet_1_tDBC785BCEE0468957F48FBC95F639AE81D41C90C* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = (intptr_t)__this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mE6DC6ABB65D419B7885346104CBD7FDC337845E1_gshared_inline (Nullable_1_tA89D32A31DE3DDD91892EF069CD690D44EFE3CE9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3AD93169C03148FCDBABE271AFE0878A5668AAC2_gshared_inline (Nullable_1_tF75762B94DDD8B99CBA45AF4E706DFB32D6F8D4D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9974E3516DE20375CF9F93BBDBC87505D4E1E4F6_gshared_inline (Nullable_1_t7AFC7B6FA040CD798CD0FC81605678A7095E8404* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m455B3C79F1ADB68F38E93617FD89C5772C5E2C8D_gshared_inline (Nullable_1_t72BD043E740D3920EBE900BBEF9E202AE2D89EDD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC41535B99161226C05904479F4C56B84C8301177_gshared_inline (Nullable_1_tD042D16618AEAFA3928752C5DDC23F76FD80D6F9* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1E49109395DAE68082FDA5B0D3094E50F6A6ADB5_gshared_inline (Nullable_1_t4B2D86FC8FAFDA460CEDCCB8205E7256E08FA9A7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m50B2C83F62E14675E65A0397923398F6E75D9007_gshared_inline (Nullable_1_tB342C2B3A7DE692EBA21BA536FC0C5111CE17CA1* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m083A379D58602D7587E560E8634DAAC64C2F6970_gshared_inline (Nullable_1_tC332A6602A28865561711B9E7FE669BB926D8C17* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m8C1B94FDFC41E2FEF5640DD4F824E6ED6074D28A_gshared_inline (Nullable_1_tF16DB46F7C11A009AC852A0DB3834CBF9EBC2798* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2AAE72E40025EC977CC9945A84FC5B17BC46B2DC_gshared_inline (Nullable_1_t24952FC90AFCA230830D88807D4AEE793B9CD354* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSEnumerator_1_AsIntPtr_m00AC94AC2F3EE699D7ECDB3ED87EE18CE56B6BCF_gshared_inline (NSEnumerator_1_tF133F34AE814E3594060C7451A62F8D61CA56196* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = (intptr_t)__this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSEnumerator_1_AsIntPtr_m34296E6743530DEECB8244FBD806118338E21C11_gshared_inline (NSEnumerator_1_tAABC462E085418EC92D2E5789E5964CA71611A27* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = (intptr_t)__this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSMutableSet_1_AsIntPtr_m2DA74E4E3892A6DF0FFBD477CD63B8EDB0B5CBEE_gshared_inline (NSMutableSet_1_t9AE39D7B43F4C627C4C534C985357DE12C539D17* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = (intptr_t)__this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t NSSet_1_AsIntPtr_m716B1A6A05DA60CB7ADA14C76B736BF307A38F9D_gshared_inline (NSSet_1_t563A23404D7A9F2BCD227809220A53E77BC335B5* __this, const RuntimeMethod* method) 
{
	{
		// public IntPtr AsIntPtr() => m_Self;
		intptr_t L_0 = (intptr_t)__this->___m_Self_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
