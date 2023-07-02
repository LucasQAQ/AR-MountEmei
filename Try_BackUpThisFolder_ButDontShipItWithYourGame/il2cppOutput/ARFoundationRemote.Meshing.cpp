#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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

// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Collections.Generic.List`1<ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote>
struct List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote[]
struct XRMeshSubsystemDescriptorRemoteU5BU5D_tDC3DFABEB2AE04649E3BA92D7E43BBBB49421CA8;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// ARFoundationRemote.Runtime.IXRMeshSubsystem
struct IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// ARFoundationRemote.Runtime.XRGeneralSettingsRemote
struct XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2;
// ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote
struct XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196;
// ARFoundationRemote.Runtime.XRMeshSubsystemRemote
struct XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C;
// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager
struct _Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4;
// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader
struct _Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralDCFDC5DC9F1674AC4BB77F1272EB5EAC757983FA;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4D04C2CF53BEB7F8B005F5A3F66FF7757A7BF4B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC15A18A0DAA4B52BA7F3B6BAE1B857DAC9453629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m081FBFB83316621ED3D69C9D27376B59CB646519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _Loader_GetLoadedSubsystem_TisIXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_mFDBABBED4468ABD8C27F264702302FB52444026A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9BDE8315E0C23AF0DD70CA11994D9E6BE9F520E5 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEE09D0BD215A518344AF2985829C519B609B7B17_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshInfoU5BU5D_t66EC9A8E4264CBD53E136BF96628DEC22D660030* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote>
struct List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRMeshSubsystemDescriptorRemoteU5BU5D_tDC3DFABEB2AE04649E3BA92D7E43BBBB49421CA8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRMeshSubsystemDescriptorRemoteU5BU5D_tDC3DFABEB2AE04649E3BA92D7E43BBBB49421CA8* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// ARFoundationRemote.Runtime.Extensions
struct Extensions_tEABED90A3DBD793302E985B155CE654DA227B896  : public RuntimeObject
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

// ARFoundationRemote.Runtime.SubsystemManagerRemote
struct SubsystemManagerRemote_t7864D943349A7291959FF00BF3C91B7800B030AC  : public RuntimeObject
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

// ARFoundationRemote.Runtime.XRGeneralSettingsRemote
struct XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF  : public RuntimeObject
{
	// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager ARFoundationRemote.Runtime.XRGeneralSettingsRemote::Manager
	_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4* ___Manager_1;
};

struct XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_StaticFields
{
	// ARFoundationRemote.Runtime.XRGeneralSettingsRemote ARFoundationRemote.Runtime.XRGeneralSettingsRemote::Instance
	XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF* ___Instance_0;
};

// ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote
struct XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196  : public RuntimeObject
{
	// System.String ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
};

// ARFoundationRemote.Runtime.XRMeshSubsystemRemote
struct XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C  : public RuntimeObject
{
};

struct XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields
{
	// ARFoundationRemote.Runtime.IXRMeshSubsystem ARFoundationRemote.Runtime.XRMeshSubsystemRemote::subsystemDelegate
	RuntimeObject* ___subsystemDelegate_0;
};

// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager
struct _Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4  : public RuntimeObject
{
	// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager::activeLoader
	_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* ___activeLoader_0;
};

// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader
struct _Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3  : public RuntimeObject
{
};

struct _Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_StaticFields
{
	// ARFoundationRemote.Runtime.IXRMeshSubsystem ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::subsystem
	RuntimeObject* ___subsystem_0;
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

// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3  : public RuntimeObject
{
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_SubsystemDescriptor_1;
};

// UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C 
{
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::<MeshId>k__BackingField
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::<Mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::<MeshCollider>k__BackingField
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_3;
	// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::<Attributes>k__BackingField
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	// System.UInt64 UnityEngine.XR.MeshGenerationResult::<Timestamp>k__BackingField
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::<Position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	// UnityEngine.Quaternion UnityEngine.XR.MeshGenerationResult::<Rotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	// UnityEngine.Vector3 UnityEngine.XR.MeshGenerationResult::<Scale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_pinvoke
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
};
// Native definition for COM marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tD5A6D639B2CF1A3F855AFB41861DEC48DC0D3A9C_marshaled_com
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
	uint64_t ___U3CTimestampU3Ek__BackingField_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_6;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField_8;
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

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03  : public IntegratedSubsystem_t990160A89854D87C0836DC589B720231C02D4CE3
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8  : public MulticastDelegate_t
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
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

// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2  : public IntegratedSubsystem_1_t3AB3A9BAB10A4D1420E63EEA50D40FEE65F41C03
{
};

// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
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


// T ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::GetLoadedSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Loader_GetLoadedSubsystem_TisRuntimeObject_m49EC7EBC62A33C7E346C276CDC4058EB235DCFB7_gshared (_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::InitializeLoaderSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_InitializeLoaderSync_m5CE4139417252856F67537554BAD16798E5A8D6D (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Void ARFoundationRemote.Runtime.Extensions::InitializeLoaderSyncIfNotInitialized(UnityEngine.XR.Management.XRManagerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_InitializeLoaderSyncIfNotInitialized_m838CDF88A619EF2AA04F49D0FF9A874CD57ADBD9 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___settings0, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// T ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::GetLoadedSubsystem<ARFoundationRemote.Runtime.IXRMeshSubsystem>()
inline RuntimeObject* _Loader_GetLoadedSubsystem_TisIXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_mFDBABBED4468ABD8C27F264702302FB52444026A (_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3*, const RuntimeMethod*))_Loader_GetLoadedSubsystem_TisRuntimeObject_m49EC7EBC62A33C7E346C276CDC4058EB235DCFB7_gshared)(__this, method);
}
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Manager__ctor_m11E7810A82B29A9721801336E8959ECB179B66A8 (_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4* __this, const RuntimeMethod* method) ;
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettingsRemote__ctor_mA52C21119F543D37C4925C9EEE085464F686D0D0 (XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF* __this, const RuntimeMethod* method) ;
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Loader__ctor_m6B54E50BC0A9C08EFDCC91981CF43A980CCFEDFD (_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* __this, const RuntimeMethod* method) ;
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote__ctor_mDD727EE91F27DCA86A42F74511200E64F1889262 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote>::Clear()
inline void List_1_Clear_mC15A18A0DAA4B52BA7F3B6BAE1B857DAC9453629_inline (List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemDescriptorRemote__ctor_mAE05AA8A1252F7192E196F09933E2811B8E23F7D (XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote>::Add(T)
inline void List_1_Add_m4D04C2CF53BEB7F8B005F5A3F66FF7757A7BF4B6_inline (List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE* __this, XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE*, XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// ARFoundationRemote.Runtime.IXRMeshSubsystem ARFoundationRemote.Runtime.XRGeneralSettingsRemote::GetMeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRGeneralSettingsRemote_GetMeshSubsystem_m8D44B7AB2F8B7D7CA63E7391995A5A8492304FC8 (const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void ARFoundationRemote.Runtime.Extensions::InitializeLoaderSyncIfNotInitialized(UnityEngine.XR.Management.XRManagerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_InitializeLoaderSyncIfNotInitialized_m838CDF88A619EF2AA04F49D0FF9A874CD57ADBD9 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___settings0, const RuntimeMethod* method) 
{
	{
		// if (!settings.isInitializationComplete) {
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = ___settings0;
		NullCheck(L_0);
		bool L_1;
		L_1 = XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// settings.InitializeLoaderSync();
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_2 = ___settings0;
		NullCheck(L_2);
		XRManagerSettings_InitializeLoaderSync_m5CE4139417252856F67537554BAD16798E5A8D6D(L_2, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.Extensions::log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_log_mE01AE254ECC14ECB25F1EA67728B495A46275C9A (String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(msg);
		String_t* L_0 = ___msg0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
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
// ARFoundationRemote.Runtime.IXRMeshSubsystem ARFoundationRemote.Runtime.XRMeshSubsystemRemote::GetDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRMeshSubsystemRemote_GetDelegate_mE45F27AC4622249066104E6B5AEB6361768F6FA0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return subsystemDelegate;
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0;
		return L_0;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::SetDelegate(ARFoundationRemote.Runtime.IXRMeshSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_SetDelegate_mDF873C0B73F7613147C34E86BFE65F9DF8B710B9 (RuntimeObject* ___del0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate = del;
		RuntimeObject* L_0 = ___del0;
		((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::ClearDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_ClearDelegate_mBB1DADDBC7B9E3BF96F024899C1F49EA738C4352 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate = null;
		((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0), (void*)(RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Boolean ARFoundationRemote.Runtime.XRMeshSubsystemRemote::ARFoundationRemote.Runtime.IXRMeshSubsystem.TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_TryGetMeshInfos_m7D339DC18E22B8AC5C629146A00BBBC80F7DA927 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* ___meshInfosOut0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return subsystemDelegate.TryGetMeshInfos(meshInfosOut);
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0;
		List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* L_1 = ___meshInfosOut0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, List_1_tEE09D0BD215A518344AF2985829C519B609B7B17* >::Invoke(0 /* System.Boolean ARFoundationRemote.Runtime.IXRMeshSubsystem::TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>) */, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::ARFoundationRemote.Runtime.IXRMeshSubsystem.GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_GenerateMeshAsync_m8C727EC945EACA8E234B580811DF4933A41A63E1 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___meshId0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh1, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___meshCollider2, int32_t ___attributes3, Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* ___onMeshGenerationComplete4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate.GenerateMeshAsync(meshId, mesh, meshCollider, attributes, onMeshGenerationComplete);
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_1 = ___meshId0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___mesh1;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_3 = ___meshCollider2;
		int32_t L_4 = ___attributes3;
		Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_5 = ___onMeshGenerationComplete4;
		NullCheck(L_0);
		InterfaceActionInvoker5< MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455*, int32_t, Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* >::Invoke(1 /* System.Void ARFoundationRemote.Runtime.IXRMeshSubsystem::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>) */, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Single ARFoundationRemote.Runtime.XRMeshSubsystemRemote::ARFoundationRemote.Runtime.IXRMeshSubsystem.get_meshDensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_get_meshDensity_m39A1D1FD382AA9935C6EC623C5AAADBA96647D9B (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => subsystemDelegate.meshDensity;
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0;
		NullCheck(L_0);
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single ARFoundationRemote.Runtime.IXRMeshSubsystem::get_meshDensity() */, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::ARFoundationRemote.Runtime.IXRMeshSubsystem.set_meshDensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_set_meshDensity_m7B52A223EDCEEBC439557635B1D0C41545CC3BFB (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => subsystemDelegate.meshDensity = value;
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0;
		float L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< float >::Invoke(3 /* System.Void ARFoundationRemote.Runtime.IXRMeshSubsystem::set_meshDensity(System.Single) */, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean ARFoundationRemote.Runtime.XRMeshSubsystemRemote::ARFoundationRemote.Runtime.IXRMeshSubsystem.SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_SetBoundingVolume_mF42FD069EA916DE4E312FC2E40E833EA925CD785 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___extents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return subsystemDelegate.SetBoundingVolume(origin, extents);
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___origin0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___extents1;
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(4 /* System.Boolean ARFoundationRemote.Runtime.IXRMeshSubsystem::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3) */, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::UnityEngine.ISubsystem.Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_UnityEngine_ISubsystem_Start_mFD9D4950DDDBBFD646729299CF6791DE4395AB3B (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate.Start();
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.ISubsystem::Start() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::UnityEngine.ISubsystem.Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_UnityEngine_ISubsystem_Stop_mABA4C38DB1AC542C0212C5552D4CFB80D59B6143 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate.Stop();
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ISubsystem::Stop() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::UnityEngine.ISubsystem.Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_UnityEngine_ISubsystem_Destroy_m1D31792EC60644E0DEAF5FACDE2B4D3CCAE6CB52 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate.Destroy();
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void UnityEngine.ISubsystem::Destroy() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Boolean ARFoundationRemote.Runtime.XRMeshSubsystemRemote::UnityEngine.ISubsystem.get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystemRemote_UnityEngine_ISubsystem_get_running_mB59B2D3607662933A7745455347F30A0BE2FB7A8 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool ISubsystem.running => subsystemDelegate.running;
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.ISubsystem::get_running() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::ARFoundationRemote.Runtime.IXRMeshSubsystem.GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>,UnityEngine.XR.MeshGenerationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_GenerateMeshAsync_m6E81B4969CFF6D3458B490AA26FAC83BDA773ACD (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___meshId0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh1, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___meshCollider2, int32_t ___attributes3, Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* ___onMeshGenerationComplete4, int32_t ___options5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate.GenerateMeshAsync(meshId, mesh, meshCollider, attributes, onMeshGenerationComplete, options);
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0;
		MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC L_1 = ___meshId0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___mesh1;
		MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* L_3 = ___meshCollider2;
		int32_t L_4 = ___attributes3;
		Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8* L_5 = ___onMeshGenerationComplete4;
		int32_t L_6 = ___options5;
		NullCheck(L_0);
		InterfaceActionInvoker6< MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*, MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455*, int32_t, Action_1_tC58438B06CEC83E8978FB47AC67764F80F55DEA8*, int32_t >::Invoke(5 /* System.Void ARFoundationRemote.Runtime.IXRMeshSubsystem::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>,UnityEngine.XR.MeshGenerationOptions) */, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.MeshTransform> ARFoundationRemote.Runtime.XRMeshSubsystemRemote::ARFoundationRemote.Runtime.IXRMeshSubsystem.GetUpdatedMeshTransforms(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA41870B57F75C8F0729AE0AC70060D0D7841D236 XRMeshSubsystemRemote_ARFoundationRemote_Runtime_IXRMeshSubsystem_GetUpdatedMeshTransforms_mCE55DA442C39F70F4CA22605CB472111324B84B5 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, int32_t ___allocator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return subsystemDelegate.GetUpdatedMeshTransforms(allocator);
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var))->___subsystemDelegate_0;
		int32_t L_1 = ___allocator0;
		NullCheck(L_0);
		NativeArray_1_tA41870B57F75C8F0729AE0AC70060D0D7841D236 L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_tA41870B57F75C8F0729AE0AC70060D0D7841D236, int32_t >::Invoke(6 /* Unity.Collections.NativeArray`1<UnityEngine.XR.MeshTransform> ARFoundationRemote.Runtime.IXRMeshSubsystem::GetUpdatedMeshTransforms(Unity.Collections.Allocator) */, IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_log_m0E9C645B80A89DDBE84FE8B17F2761C8C18FDA50 (String_t* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(s);
		String_t* L_0 = ___s0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// }
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote__ctor_mDD727EE91F27DCA86A42F74511200E64F1889262 (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* __this, const RuntimeMethod* method) 
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
// UnityEngine.XR.XRMeshSubsystem ARFoundationRemote.Runtime.XRGeneralSettingsRemote::GetRealSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* XRGeneralSettingsRemote_GetRealSubsystem_mF6B39D067B28BA11E9C0C7968C8419CCF6C140CC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m081FBFB83316621ED3D69C9D27376B59CB646519_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* V_0 = NULL;
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* V_1 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* V_2 = NULL;
	{
		// var xrGeneralSettings = XRGeneralSettings.Instance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		V_0 = L_0;
		// if (xrGeneralSettings != null) {
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// var manager = xrGeneralSettings.Manager;
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_3 = V_0;
		NullCheck(L_3);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_4;
		L_4 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_3, NULL);
		V_1 = L_4;
		// if (manager != null) {
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// manager.InitializeLoaderSyncIfNotInitialized();
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_7 = V_1;
		Extensions_InitializeLoaderSyncIfNotInitialized_m838CDF88A619EF2AA04F49D0FF9A874CD57ADBD9(L_7, NULL);
		// var loader = manager.activeLoader;
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_8 = V_1;
		NullCheck(L_8);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_9;
		L_9 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_8, NULL);
		V_2 = L_9;
		// if (loader != null) {
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		// return loader.GetLoadedSubsystem<XRMeshSubsystem>();
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_12 = V_2;
		NullCheck(L_12);
		XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* L_13;
		L_13 = GenericVirtualFuncInvoker0< XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2* >::Invoke(XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2_m081FBFB83316621ED3D69C9D27376B59CB646519_RuntimeMethod_var, L_12);
		return L_13;
	}

IL_003c:
	{
		// return null;
		return (XRMeshSubsystem_tDDC31EC10D4F0517542F9EB296428A0F7EC2C3B2*)NULL;
	}
}
// ARFoundationRemote.Runtime.IXRMeshSubsystem ARFoundationRemote.Runtime.XRGeneralSettingsRemote::GetMeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRGeneralSettingsRemote_GetMeshSubsystem_m8D44B7AB2F8B7D7CA63E7391995A5A8492304FC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Loader_GetLoadedSubsystem_TisIXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_mFDBABBED4468ABD8C27F264702302FB52444026A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instance.Manager.activeLoader.GetLoadedSubsystem<IXRMeshSubsystem>();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var);
		XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF* L_0 = ((XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var))->___Instance_0;
		NullCheck(L_0);
		_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4* L_1 = L_0->___Manager_1;
		NullCheck(L_1);
		_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* L_2 = L_1->___activeLoader_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = _Loader_GetLoadedSubsystem_TisIXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_mFDBABBED4468ABD8C27F264702302FB52444026A(L_2, _Loader_GetLoadedSubsystem_TisIXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37_mFDBABBED4468ABD8C27F264702302FB52444026A_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettingsRemote__ctor_mA52C21119F543D37C4925C9EEE085464F686D0D0 (XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly _Manager Manager = new _Manager();
		_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4* L_0 = (_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4*)il2cpp_codegen_object_new(_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		_Manager__ctor_m11E7810A82B29A9721801336E8959ECB179B66A8(L_0, NULL);
		__this->___Manager_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Manager_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettingsRemote__cctor_m6A6F0DD1D82A3E31ED4EBA4EC52D430F46025ED7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly XRGeneralSettingsRemote Instance = new XRGeneralSettingsRemote();
		XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF* L_0 = (XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF*)il2cpp_codegen_object_new(XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		XRGeneralSettingsRemote__ctor_mA52C21119F543D37C4925C9EEE085464F686D0D0(L_0, NULL);
		((XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Manager__ctor_m11E7810A82B29A9721801336E8959ECB179B66A8 (_Manager_t06B70FEA28FF9C08DCB861E17D91DAEFED704CC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly _Loader activeLoader = new _Loader();
		_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* L_0 = (_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3*)il2cpp_codegen_object_new(_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		_Loader__ctor_m6B54E50BC0A9C08EFDCC91981CF43A980CCFEDFD(L_0, NULL);
		__this->___activeLoader_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeLoader_0), (void*)L_0);
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
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Loader__ctor_m6B54E50BC0A9C08EFDCC91981CF43A980CCFEDFD (_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Loader__cctor_m730A96C2BBF97E53F538C97D3127ACCF32ED8392 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly IXRMeshSubsystem subsystem = new XRMeshSubsystemRemote();
		XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C* L_0 = (XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C*)il2cpp_codegen_object_new(XRMeshSubsystemRemote_tD69C7D28DA04E45F9BBA36B8252B1531D736DE7C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		XRMeshSubsystemRemote__ctor_mDD727EE91F27DCA86A42F74511200E64F1889262(L_0, NULL);
		((_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_StaticFields*)il2cpp_codegen_static_fields_for(_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var))->___subsystem_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_StaticFields*)il2cpp_codegen_static_fields_for(_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var))->___subsystem_0), (void*)L_0);
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
// System.Void ARFoundationRemote.Runtime.SubsystemManagerRemote::GetSubsystemDescriptors(System.Collections.Generic.List`1<ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManagerRemote_GetSubsystemDescriptors_m2169388FAB4A8FF717B1110C1F63EF9C677564D4 (List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE* ___sSubsystemDescriptors0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4D04C2CF53BEB7F8B005F5A3F66FF7757A7BF4B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC15A18A0DAA4B52BA7F3B6BAE1B857DAC9453629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sSubsystemDescriptors.Clear();
		List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE* L_0 = ___sSubsystemDescriptors0;
		NullCheck(L_0);
		List_1_Clear_mC15A18A0DAA4B52BA7F3B6BAE1B857DAC9453629_inline(L_0, List_1_Clear_mC15A18A0DAA4B52BA7F3B6BAE1B857DAC9453629_RuntimeMethod_var);
		// sSubsystemDescriptors.Add(new XRMeshSubsystemDescriptorRemote());
		List_1_t225A21B055E01F9A9515B4E5BB6514BF997995DE* L_1 = ___sSubsystemDescriptors0;
		XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196* L_2 = (XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196*)il2cpp_codegen_object_new(XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		XRMeshSubsystemDescriptorRemote__ctor_mAE05AA8A1252F7192E196F09933E2811B8E23F7D(L_2, NULL);
		NullCheck(L_1);
		List_1_Add_m4D04C2CF53BEB7F8B005F5A3F66FF7757A7BF4B6_inline(L_1, L_2, List_1_Add_m4D04C2CF53BEB7F8B005F5A3F66FF7757A7BF4B6_RuntimeMethod_var);
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
// System.String ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XRMeshSubsystemDescriptorRemote_get_id_m00EAFA42EC3A263AF9638D3041849EBB7B4052B6 (XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196* __this, const RuntimeMethod* method) 
{
	{
		// public string id { get; } = nameof(XRMeshSubsystemDescriptorRemote);
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_0;
		return L_0;
	}
}
// ARFoundationRemote.Runtime.IXRMeshSubsystem ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRMeshSubsystemDescriptorRemote_Create_m22EED3D7CDAAAA361CD6B47C93973B15C44C4B37 (XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return XRGeneralSettingsRemote.GetMeshSubsystem();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettingsRemote_t112BA539E206F4132EE80DBF24EE651205A375AF_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = XRGeneralSettingsRemote_GetMeshSubsystem_m8D44B7AB2F8B7D7CA63E7391995A5A8492304FC8(NULL);
		return L_0;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemDescriptorRemote__ctor_mAE05AA8A1252F7192E196F09933E2811B8E23F7D (XRMeshSubsystemDescriptorRemote_t2E36D4741F55DB560FD2EF274035A1C31A015196* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCFDC5DC9F1674AC4BB77F1272EB5EAC757983FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string id { get; } = nameof(XRMeshSubsystemDescriptorRemote);
		__this->___U3CidU3Ek__BackingField_0 = _stringLiteralDCFDC5DC9F1674AC4BB77F1272EB5EAC757983FA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_0), (void*)_stringLiteralDCFDC5DC9F1674AC4BB77F1272EB5EAC757983FA);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_InitializationComplete; }
		bool L_0 = __this->___m_InitializationComplete_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
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
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
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
