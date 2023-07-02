#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug
struct Unity_2020_2_NullableSerializationBug_t130B26999A136C26DCF1DB511285713C35882E74;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral27C77314A7650A9279AE864267414D4C9424B460;
IL2CPP_EXTERN_C String_t* _stringLiteralBE9B50C82EA22EE094932EBC7DB7B62993E65CDE;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m852E85D7367B9B435FF28A455C3EA9926674BE38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mAB0639304FE521EB287EB015170139FE3039CE60_RuntimeMethod_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7A8CAA524EDA1B1A92CAFB1AE2DBBCA869E9699E 
{
};
struct Il2CppArrayBounds;

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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

// ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
struct InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18 
{
	// System.Single ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct::floatValue
	float ___floatValue_0;
	// System.Boolean ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct::boolValue
	bool ___boolValue_1;
};
// Native definition for P/Invoke marshalling of ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
struct InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshaled_pinvoke
{
	float ___floatValue_0;
	int32_t ___boolValue_1;
};
// Native definition for COM marshalling of ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
struct InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshaled_com
{
	float ___floatValue_0;
	int32_t ___boolValue_1;
};

// System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct>
struct Nullable_1_t6BE11305F12ABF29EAD03A67CD34A3B027598638 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18 ___value_1;
};

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F  : public RuntimeObject
{
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A* ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_crossAppDomainArray_6;
};

struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8* ___typeNameCache_7;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
struct StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20 
{
	// System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct> ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField::innerStruct
	Nullable_1_t6BE11305F12ABF29EAD03A67CD34A3B027598638 ___innerStruct_0;
};
// Native definition for P/Invoke marshalling of ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
struct StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshaled_pinvoke
{
	Nullable_1_t6BE11305F12ABF29EAD03A67CD34A3B027598638 ___innerStruct_0;
};
// Native definition for COM marshalling of ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
struct StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshaled_com
{
	Nullable_1_t6BE11305F12ABF29EAD03A67CD34A3B027598638 ___innerStruct_0;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug
struct Unity_2020_2_NullableSerializationBug_t130B26999A136C26DCF1DB511285713C35882E74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m852E85D7367B9B435FF28A455C3EA9926674BE38_gshared (Nullable_1_t6BE11305F12ABF29EAD03A67CD34A3B027598638* __this, InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18 Nullable_1_get_Value_mAB0639304FE521EB287EB015170139FE3039CE60_gshared (Nullable_1_t6BE11305F12ABF29EAD03A67CD34A3B027598638* __this, const RuntimeMethod* method) ;

// System.Byte[] ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug::serializeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Unity_2020_2_NullableSerializationBug_serializeData_mC56DAE04ED2A12273601F0546208A4223D430DC0 (const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705 (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, const RuntimeMethod* method) ;
// System.String ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug::check(ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unity_2020_2_NullableSerializationBug_check_m64FAE0484A748D52E0EB629BDA123F33CC3B5CCE (StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20 ___deserialized0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct>::.ctor(T)
inline void Nullable_1__ctor_m852E85D7367B9B435FF28A455C3EA9926674BE38 (Nullable_1_t6BE11305F12ABF29EAD03A67CD34A3B027598638* __this, InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t6BE11305F12ABF29EAD03A67CD34A3B027598638*, InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18, const RuntimeMethod*))Nullable_1__ctor_m852E85D7367B9B435FF28A455C3EA9926674BE38_gshared)(__this, ___value0, method);
}
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, RuntimeObject* ___graph1, const RuntimeMethod* method) ;
// T System.Nullable`1<ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct>::get_Value()
inline InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18 Nullable_1_get_Value_mAB0639304FE521EB287EB015170139FE3039CE60 (Nullable_1_t6BE11305F12ABF29EAD03A67CD34A3B027598638* __this, const RuntimeMethod* method)
{
	return ((  InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18 (*) (Nullable_1_t6BE11305F12ABF29EAD03A67CD34A3B027598638*, const RuntimeMethod*))Nullable_1_get_Value_mAB0639304FE521EB287EB015170139FE3039CE60_gshared)(__this, method);
}
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
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
// System.String ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug::CheckBug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unity_2020_2_NullableSerializationBug_CheckBug_m200444D896150B3B2E8F88F43AB102B874520A5F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// var serialized = serializeData();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = Unity_2020_2_NullableSerializationBug_serializeData_mC56DAE04ED2A12273601F0546208A4223D430DC0(NULL);
		// using (var memoryStream = new MemoryStream(serialized)) {
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_002c;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var deserialized = (StructWithNullableField) new BinaryFormatter().Deserialize(memoryStream);
			BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_4 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_4, NULL);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_4, L_5, NULL);
			// return check(deserialized);
			String_t* L_7;
			L_7 = Unity_2020_2_NullableSerializationBug_check_m64FAE0484A748D52E0EB629BDA123F33CC3B5CCE(((*(StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20*)((StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20*)(StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20*)UnBox(L_6, StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_il2cpp_TypeInfo_var)))), NULL);
			V_1 = L_7;
			goto IL_002d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		// }
		String_t* L_8 = V_1;
		return L_8;
	}
}
// System.Byte[] ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug::serializeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Unity_2020_2_NullableSerializationBug_serializeData_mC56DAE04ED2A12273601F0546208A4223D430DC0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m852E85D7367B9B435FF28A455C3EA9926674BE38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20 V_1;
	memset((&V_1), 0, sizeof(V_1));
	InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		// var instance = new StructWithNullableField {
		//     innerStruct = new InnerStruct {
		//         floatValue = dummyFloatValue
		//     }
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20));
		il2cpp_codegen_initobj((&V_2), sizeof(InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18));
		(&V_2)->___floatValue_0 = (123.456001f);
		InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18 L_0 = V_2;
		Nullable_1_t6BE11305F12ABF29EAD03A67CD34A3B027598638 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Nullable_1__ctor_m852E85D7367B9B435FF28A455C3EA9926674BE38((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m852E85D7367B9B435FF28A455C3EA9926674BE38_RuntimeMethod_var);
		(&V_1)->___innerStruct_0 = L_1;
		StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20 L_2 = V_1;
		V_0 = L_2;
		// using (var memoryStream = new MemoryStream()) {
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_3, NULL);
		V_3 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_3;
					if (!L_4)
					{
						goto IL_0055;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_3;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0055:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// new BinaryFormatter().Serialize(memoryStream, instance);
			BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_6 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_6, NULL);
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_7 = V_3;
			StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20 L_8 = V_0;
			StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20 L_9 = L_8;
			RuntimeObject* L_10 = Box(StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_il2cpp_TypeInfo_var, &L_9);
			NullCheck(L_6);
			BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E(L_6, L_7, L_10, NULL);
			// return memoryStream.ToArray();
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_3;
			NullCheck(L_11);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_11);
			V_4 = L_12;
			goto IL_0056;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_4;
		return L_13;
	}
}
// System.String ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug::check(ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Unity_2020_2_NullableSerializationBug_check_m64FAE0484A748D52E0EB629BDA123F33CC3B5CCE (StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20 ___deserialized0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mAB0639304FE521EB287EB015170139FE3039CE60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27C77314A7650A9279AE864267414D4C9424B460);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE9B50C82EA22EE094932EBC7DB7B62993E65CDE);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t6BE11305F12ABF29EAD03A67CD34A3B027598638 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var innerStruct = deserialized.innerStruct;
		StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20 L_0 = ___deserialized0;
		Nullable_1_t6BE11305F12ABF29EAD03A67CD34A3B027598638 L_1 = L_0.___innerStruct_0;
		V_0 = L_1;
		// var deserializedFloatValue = innerStruct.Value.floatValue;
		InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18 L_2;
		L_2 = Nullable_1_get_Value_mAB0639304FE521EB287EB015170139FE3039CE60((&V_0), Nullable_1_get_Value_mAB0639304FE521EB287EB015170139FE3039CE60_RuntimeMethod_var);
		float L_3 = L_2.___floatValue_0;
		V_1 = L_3;
		// if (!Mathf.Approximately(dummyFloatValue, deserializedFloatValue)) {
		float L_4 = V_1;
		bool L_5;
		L_5 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline((123.456001f), L_4, NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		// return $"Unity {Application.unityVersion} has a bug that prevents the plugin from working correctly. Please follow this bug report to track the status:\n" +
		//     "https://issuetracker.unity3d.com/issues/serialization-il2cpp-binaryformatter-dot-deserialize-method-fails-to-deserialize-a-nullable-struct-field-with-multiple-fields";
		String_t* L_6;
		L_6 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral27C77314A7650A9279AE864267414D4C9424B460, L_6, _stringLiteralBE9B50C82EA22EE094932EBC7DB7B62993E65CDE, NULL);
		return L_7;
	}

IL_0036:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unity_2020_2_NullableSerializationBug__ctor_m9358E3D3C8719C4DC63148F7283C0BEA3A4ABDE9 (Unity_2020_2_NullableSerializationBug_t130B26999A136C26DCF1DB511285713C35882E74* __this, const RuntimeMethod* method) 
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
// Conversion methods for marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
IL2CPP_EXTERN_C void StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshal_pinvoke(const StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20& unmarshaled, StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshaled_pinvoke& marshaled)
{
	Exception_t* ___innerStruct_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'innerStruct' of type 'StructWithNullableField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___innerStruct_0Exception, NULL);
}
IL2CPP_EXTERN_C void StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshal_pinvoke_back(const StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshaled_pinvoke& marshaled, StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20& unmarshaled)
{
	Exception_t* ___innerStruct_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'innerStruct' of type 'StructWithNullableField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___innerStruct_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
IL2CPP_EXTERN_C void StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshal_pinvoke_cleanup(StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
IL2CPP_EXTERN_C void StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshal_com(const StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20& unmarshaled, StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshaled_com& marshaled)
{
	Exception_t* ___innerStruct_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'innerStruct' of type 'StructWithNullableField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___innerStruct_0Exception, NULL);
}
IL2CPP_EXTERN_C void StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshal_com_back(const StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshaled_com& marshaled, StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20& unmarshaled)
{
	Exception_t* ___innerStruct_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'innerStruct' of type 'StructWithNullableField'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___innerStruct_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/StructWithNullableField
IL2CPP_EXTERN_C void StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshal_com_cleanup(StructWithNullableField_t330DE92B15073D3C1D6302BD6EBAADA114952A20_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
IL2CPP_EXTERN_C void InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshal_pinvoke(const InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18& unmarshaled, InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshaled_pinvoke& marshaled)
{
	marshaled.___floatValue_0 = unmarshaled.___floatValue_0;
	marshaled.___boolValue_1 = static_cast<int32_t>(unmarshaled.___boolValue_1);
}
IL2CPP_EXTERN_C void InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshal_pinvoke_back(const InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshaled_pinvoke& marshaled, InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18& unmarshaled)
{
	float unmarshaledfloatValue_temp_0 = 0.0f;
	unmarshaledfloatValue_temp_0 = marshaled.___floatValue_0;
	unmarshaled.___floatValue_0 = unmarshaledfloatValue_temp_0;
	bool unmarshaledboolValue_temp_1 = false;
	unmarshaledboolValue_temp_1 = static_cast<bool>(marshaled.___boolValue_1);
	unmarshaled.___boolValue_1 = unmarshaledboolValue_temp_1;
}
// Conversion method for clean up from marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
IL2CPP_EXTERN_C void InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshal_pinvoke_cleanup(InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
IL2CPP_EXTERN_C void InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshal_com(const InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18& unmarshaled, InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshaled_com& marshaled)
{
	marshaled.___floatValue_0 = unmarshaled.___floatValue_0;
	marshaled.___boolValue_1 = static_cast<int32_t>(unmarshaled.___boolValue_1);
}
IL2CPP_EXTERN_C void InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshal_com_back(const InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshaled_com& marshaled, InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18& unmarshaled)
{
	float unmarshaledfloatValue_temp_0 = 0.0f;
	unmarshaledfloatValue_temp_0 = marshaled.___floatValue_0;
	unmarshaled.___floatValue_0 = unmarshaledfloatValue_temp_0;
	bool unmarshaledboolValue_temp_1 = false;
	unmarshaledboolValue_temp_1 = static_cast<bool>(marshaled.___boolValue_1);
	unmarshaled.___boolValue_1 = unmarshaledboolValue_temp_1;
}
// Conversion method for clean up from marshalling of: ARFoundationRemote.Runtime.BugReports.Unity_2020_2_NullableSerializationBug/InnerStruct
IL2CPP_EXTERN_C void InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshal_com_cleanup(InnerStruct_t4EA995DFDFB9CAB728FD775BD2380AF04DDCDC18_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
