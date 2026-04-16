#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;
struct MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Exception_t;
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
struct GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08;
struct KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081;
struct MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542;
struct Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8;
struct MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A;
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092;
struct String_t;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC4249931E82CEBAEC1968B680E9E9A0DF4A946C6;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____05CB50CEB52BB44DF8CA566F3E4E6FC69BB87AFE2C435EFD1151CCC7BD9196BB_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____348188F1141C2A6933BCA45D7B02BD612044496456C4822A07CD93D560058F30_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____72473E86EC72C67F0C0916F0FA376DFE686E5582D389BC7100EF5E70835FB565_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____82A445B12C8D35172C6D379C6467AF5B0C30F4811319E182486674AAF2E61610_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2699ED079CDDEF57B48E372A3D47B5F3C372F78C;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4D95BFFF56951BD3CAEDDE8316CBB48458E83A59;
IL2CPP_EXTERN_C String_t* _stringLiteral5359BA9CB4634179A1429F9FF1EC49B6A347800A;
IL2CPP_EXTERN_C String_t* _stringLiteral55C1681428B04B53C037730ADAE3A34FF5F59650;
IL2CPP_EXTERN_C String_t* _stringLiteral55FFBF296F9AD0C93EE305CF1FB2E82961ABEE63;
IL2CPP_EXTERN_C String_t* _stringLiteral8004D8D7C06F44B14DED80921D95B6A3A2BAB38A;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
IL2CPP_EXTERN_C String_t* _stringLiteral9360594C2BCE966846677E990CBBE005BB668E7F;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralCA5D25D8D9E7431F466B32C49F48E872BEE36FD9;
IL2CPP_EXTERN_C String_t* _stringLiteralD6B5B78BCFFA7C1FD4EA5CFE3CC8CE6D6629D68B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE95A453653E06120FE9E373182096BDCF774C95B;
IL2CPP_EXTERN_C String_t* _stringLiteralE9BF62289830E1D9ADF97C8F47896329C4AAC679;
IL2CPP_EXTERN_C String_t* _stringLiteralF3CAD39A7B5AEC0B348B5507B59FE1BABC7DA241;
IL2CPP_EXTERN_C const RuntimeMethod* GuassianRandom_NextGuassian_m11F57E6798715A882E0FA5461141D9A4FA87BCCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_Add_m87E1DB9278B48C1DC42133F901BDEBF2CC74D9FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_Parse_m9B95F1FECA51ECDCB068E8821447FCECCD06DDD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_SolveWith_m8243F1B915336EF12063532064CA7F9EE437E4C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_StrassenMultiply_m0D23EC73E81EFFD74F1AAFBB93B9A8A370081355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_StupidMultiply_m4786B49050648DB86703381A3E2AACC7C47A9F1B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;
struct MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};
struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121  : public RuntimeObject
{
};
struct GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF  : public RuntimeObject
{
	bool ____hasDeviate;
	double ____storedDeviate;
};
struct KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08  : public RuntimeObject
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CX0U3Ek__BackingField;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CP0U3Ek__BackingField;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CFU3Ek__BackingField;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CBU3Ek__BackingField;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CUU3Ek__BackingField;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CQU3Ek__BackingField;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CHU3Ek__BackingField;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CRU3Ek__BackingField;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CStateU3Ek__BackingField;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CCovarianceU3Ek__BackingField;
};
struct KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081  : public RuntimeObject
{
	double ___U3CX0U3Ek__BackingField;
	double ___U3CP0U3Ek__BackingField;
	double ___U3CFU3Ek__BackingField;
	double ___U3CQU3Ek__BackingField;
	double ___U3CHU3Ek__BackingField;
	double ___U3CRU3Ek__BackingField;
	double ___U3CStateU3Ek__BackingField;
	double ___U3CCovarianceU3Ek__BackingField;
};
struct Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8  : public RuntimeObject
{
	int32_t ___rows;
	int32_t ___cols;
	DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___mat;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___L;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___pi;
	double ___detOfP;
};
struct MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A  : public RuntimeObject
{
	KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* ___kX;
	KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* ___kY;
	KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* ___kZ;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	int32_t ____inext;
	int32_t ____inextp;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray;
};
struct SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092  : public RuntimeObject
{
	KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* ___kX;
	KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* ___kY;
	KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* ___kZ;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC4249931E82CEBAEC1968B680E9E9A0DF4A946C6  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D219_tA37C4341422C661CF347DC494DD3C3953BE17EF8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D219_tA37C4341422C661CF347DC494DD3C3953BE17EF8__padding[219];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t68C74D93F8A612E1AFC8AB48A82A2D9566139A36 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t68C74D93F8A612E1AFC8AB48A82A2D9566139A36__padding[32];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D366_t51E5BB980B37CD4BC93FE6E853C64F7126CC7609 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D366_t51E5BB980B37CD4BC93FE6E853C64F7126CC7609__padding[366];
	};
};
#pragma pack(pop, tp)
struct MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct StringSplitOptions_t4DD892C76C70DD4800FC1B76054D69826F770062 
{
	int32_t ___value__;
};
struct MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542  : public Exception_t
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121_StaticFields
{
	__StaticArrayInitTypeSizeU3D219_tA37C4341422C661CF347DC494DD3C3953BE17EF8 ___05CB50CEB52BB44DF8CA566F3E4E6FC69BB87AFE2C435EFD1151CCC7BD9196BB;
	__StaticArrayInitTypeSizeU3D366_t51E5BB980B37CD4BC93FE6E853C64F7126CC7609 ___348188F1141C2A6933BCA45D7B02BD612044496456C4822A07CD93D560058F30;
	__StaticArrayInitTypeSizeU3D32_t68C74D93F8A612E1AFC8AB48A82A2D9566139A36 ___72473E86EC72C67F0C0916F0FA376DFE686E5582D389BC7100EF5E70835FB565;
	__StaticArrayInitTypeSizeU3D32_t68C74D93F8A612E1AFC8AB48A82A2D9566139A36 ___82A445B12C8D35172C6D379C6467AF5B0C30F4811319E182486674AAF2E61610;
};
struct GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_StaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ____random;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
	inline double GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
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
struct MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* m_Items[1];

	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_F_m64A2C6461DA7CFE711F3E175ED1DD21FE5EEE9A5_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_B_m714DB9724F4E31B4C22D5952B2CAEA8DEB81120E_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_U_m2941B3355FCA5503E38BFC52733CFA6C6087436C_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_Q_mFAADE44780E6D633563749ED52BD7357F30A7977_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_H_m9480D0B1AFBEEB4BB7E4175929142A07758914A0_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_R_mA2ACC4462D2FC181D9B20F806A2EE72E893B50EC_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_State_m20E9827CC4145E80FA5BC11511BEA00102CE7268_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_Covariance_m823F46BBE8A9ACB4EF72383ACF8723E7E651BE59_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_F_m096A81E58C90EFAB3E1DF5A6E3B1442018767EA4_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_m2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_X0_mDF8569EDA79886E255DEE3E236CBABEBC2EA736F_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_Covariance_m0DBABD6D31F4293196CC327053A847F083B7E672_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Transpose_mC6321D9A6F0E43CDC932800A379EFD5CDEFA69B9 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_Q_m3D304029E70BC950C8CC3F5CC5CCD588E5EDF7A0_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Addition_mF81196F71D0FFC038EF9ABE2D3CAA42AD12578C3 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_m2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_P0_mF6D5507B96E0988F988AEEEE5828A941CA0D3F7B_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_R_m6AA93D761F1F399A4C60C22C09363267672DB8BB_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Invert_m025110DC6C085B38C6245FC923A60DBAA24CB8DA (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_X0_m6525ED71B7ED08C68D5DC7761EC8CE97C826B4B5_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Subtraction_m8EEFF949A66213F81D362A8AE90A0417B79FD20D (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_m2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_IdentityMatrix_mA405A28B9452D0D6773FF01F3AF7E52FA4E03AE6 (int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_Q_m1DC3CB34B6F0B84895DE72D93F99F646E1670B82_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_R_mCFF19948E60888FC1A97923066BABA8556B99726_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_F_mE329B338AE11A23DDF798157DDDF0909A8BB87A1_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_H_mC0BC7397BD0F247678BAB267928FFDCB2755FC27_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_State_m1939BDF5E9508479990229AEC371E3ED0D7882B4_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_Covariance_mA38C27D2638B949BAC94CA0A74C9ABBA52503CE3_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_F_m5C756567DB1FA3617AFDAB3EBBB1E029938BE5C7_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_X0_m03A863C60B036F210E4520E23180BB4EFEA666AB_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_Covariance_m0748CCCAA3696D67D8409F669EFF607D1CDDF278_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_Q_m3BC34AB32A26ADC3904A93D66378F4E996D68CB1_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_P0_m3087DC31B2CCF163F73766DF1E786EC2B1580D8B_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_P0_mF6327BFB1907AF17BBCE80FA7CE62D4E17278FD1_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_R_m66D845E477AD4F966EB5CEA1F163252CC3650454_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_X0_mCFD4303E43B8F6EFA141E3411D5E30DD5D5C9638_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___0_iRows, int32_t ___1_iCols, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___0_iRow, int32_t ___1_iCol, double ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___0_iRow, int32_t ___1_iCol, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix_IsSquare_mA7D6A78DEC5B86B73790A95033B375E93966B213 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* __this, String_t* ___0_Message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_IdentityMatrix_m2D19D866363DED5E5A6F0E9E5FC0BE860496BE85 (int32_t ___0_iRows, int32_t ___1_iCols, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_SubsForth_m57CF751C1BB4DE2B4C005047E76C212F558BD73D (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_SubsBack_m5700BED31CAC2B3D08D91EA9F52D236518A88539 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_ZeroMatrix_m01B5A5BB65FDA47E9E3A1E85169B929E71F33F11 (int32_t ___0_iRows, int32_t ___1_iCols, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_SolveWith_m8243F1B915336EF12063532064CA7F9EE437E4C6 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SetCol_m572AA23649D9EB9862AA97F0385F5C95B3A9380A (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_v, int32_t ___1_k, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Matrix_NormalizeMatrixString_m2949C13F4C1C65CB8B90ADC7C22326A329C0C36D (String_t* ___0_matStr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Regex_Split_mA6C13D588244018786564864F683C13DDBEF5CF2 (String_t* ___0_input, String_t* ___1_pattern, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Transpose_m75BBA2E2967FA937E1C10DF058353B81B6E594DB (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___0_x, double ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SafeAplusBintoC_mE1F063305F7F9EC44A21E80026FCCB60C0163D96 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, int32_t ___1_xa, int32_t ___2_ya, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_B, int32_t ___4_xb, int32_t ___5_yb, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___6_C, int32_t ___7_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_B, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___2_C, int32_t ___3_l, MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* ___4_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SafeACopytoC_mB872951CA2A3495259E670D8884953DC0408A01F (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, int32_t ___1_xa, int32_t ___2_ya, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_C, int32_t ___4_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SafeAminusBintoC_m4CBD0C863A8629D7CB779C1CF0AB28C6ABAEE39C (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, int32_t ___1_xa, int32_t ___2_ya, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_B, int32_t ___4_xb, int32_t ___5_yb, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___6_C, int32_t ___7_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_AplusBintoC_m953E50C055EDCE98CDA6636E5B4043DDA8931C9F (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, int32_t ___1_xa, int32_t ___2_ya, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_B, int32_t ___4_xb, int32_t ___5_yb, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___6_C, int32_t ___7_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_ACopytoC_m1BB56E7C1E94F664279F180D647076AA087BDDEB (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, int32_t ___1_xa, int32_t ___2_ya, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_C, int32_t ___4_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_AminusBintoC_mD357E0BAB64446BA580358CA50012DB6E4EA5EA2 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, int32_t ___1_xa, int32_t ___2_ya, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_B, int32_t ___4_xb, int32_t ___5_yb, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___6_C, int32_t ___7_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___0_matrix, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Multiply_m4F46EE6394F1BC1A4F797DE6FD9F245FC87E777B (double ___0_n, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_m, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Add_m87E1DB9278B48C1DC42133F901BDEBF2CC74D9FC (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_m2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_UnaryNegation_m3DCA3D7D0C211B5C0C3B0623CDD476AB2C699886 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_StrassenMultiply_m0D23EC73E81EFFD74F1AAFBB93B9A8A370081355 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_B, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_CreateVector_m2B13C05D20F497282A773FB1344D14BF366C74CF (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* MatrixKalmanWrapper_makeKalmanFilter_m4A1834C03FD2F6854B5262744DF086AF64F3C0DD (MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_f, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_b, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___2_u, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_q, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___4_h, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___5_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_Correct_m97F05523C1E559A23231370927B931B8F30A4521 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter__ctor_m6397508B622E93654047F43CC83FCCBFBB022143 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_f, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_b, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___2_u, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_q, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___4_h, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___5_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_SetState_mC9CB95E7667857E29CF369D24FF284A80859E609 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_state, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_covariance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* SimpleKalmanWrapper_makeKalmanFilter_m1E4F0F8408CBA7CAF324CD479C83C64585BC770B (SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092* __this, double ___0_q, double ___1_r, double ___2_f, double ___3_h, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_Correct_m8F4045B2D0BB1F37CB730C85E65748BD1016D7F3 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D__ctor_mE09182E4735A65F75ED40200D0F88E24FB799844 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_q, double ___1_r, double ___2_f, double ___3_h, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_SetState_mDDB70DC34D518D9FE771A64558B3E7E06EB5A5E0 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_state, double ___1_covariance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685 UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mC7CA174A23290C34424DF6D2733D5E64B92E5977 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____05CB50CEB52BB44DF8CA566F3E4E6FC69BB87AFE2C435EFD1151CCC7BD9196BB_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____348188F1141C2A6933BCA45D7B02BD612044496456C4822A07CD93D560058F30_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)366));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____348188F1141C2A6933BCA45D7B02BD612044496456C4822A07CD93D560058F30_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)219));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____05CB50CEB52BB44DF8CA566F3E4E6FC69BB87AFE2C435EFD1151CCC7BD9196BB_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 7;
		(&V_0)->___TotalTypes = 8;
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m3C9D09F94200334DD5FA29A465481C7848AF4549 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC4249931E82CEBAEC1968B680E9E9A0DF4A946C6* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_pinvoke(const MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685& unmarshaled, MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_pinvoke_back(const MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_pinvoke& marshaled, MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_pinvoke_cleanup(MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_com(const MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685& unmarshaled, MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_com_back(const MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_com& marshaled, MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshal_com_cleanup(MonoScriptData_t3405F29D573A6DFAAC547345A6BDBBE41CF54685_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_X0_m6525ED71B7ED08C68D5DC7761EC8CE97C826B4B5 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CX0U3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_X0_mDF8569EDA79886E255DEE3E236CBABEBC2EA736F (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CX0U3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CX0U3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CP0U3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_P0_mF6D5507B96E0988F988AEEEE5828A941CA0D3F7B (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CP0U3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CP0U3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_F_m096A81E58C90EFAB3E1DF5A6E3B1442018767EA4 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CFU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_F_m64A2C6461DA7CFE711F3E175ED1DD21FE5EEE9A5 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CFU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_B_m70B774C001A43D754E1731ED5131C26E3232D1FD (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CBU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_B_m714DB9724F4E31B4C22D5952B2CAEA8DEB81120E (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CBU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_U_m3FF8C4DC1CD5A4C2712A2D1FB8EE1BAD047898BF (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CUU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_U_m2941B3355FCA5503E38BFC52733CFA6C6087436C (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CUU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_Q_m3D304029E70BC950C8CC3F5CC5CCD588E5EDF7A0 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CQU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_Q_mFAADE44780E6D633563749ED52BD7357F30A7977 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CQU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CHU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_H_m9480D0B1AFBEEB4BB7E4175929142A07758914A0 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CHU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_R_m6AA93D761F1F399A4C60C22C09363267672DB8BB (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CRU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_R_mA2ACC4462D2FC181D9B20F806A2EE72E893B50EC (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CRU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_State_m20E9827CC4145E80FA5BC11511BEA00102CE7268 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CStateU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStateU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_Covariance_m0DBABD6D31F4293196CC327053A847F083B7E672 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CCovarianceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_Covariance_m823F46BBE8A9ACB4EF72383ACF8723E7E651BE59 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CCovarianceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCovarianceU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter__ctor_m6397508B622E93654047F43CC83FCCBFBB022143 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_f, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_b, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___2_u, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_q, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___4_h, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___5_r, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_f;
		KalmanFilter_set_F_m64A2C6461DA7CFE711F3E175ED1DD21FE5EEE9A5_inline(__this, L_0, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = ___1_b;
		KalmanFilter_set_B_m714DB9724F4E31B4C22D5952B2CAEA8DEB81120E_inline(__this, L_1, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___2_u;
		KalmanFilter_set_U_m2941B3355FCA5503E38BFC52733CFA6C6087436C_inline(__this, L_2, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___3_q;
		KalmanFilter_set_Q_mFAADE44780E6D633563749ED52BD7357F30A7977_inline(__this, L_3, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = ___4_h;
		KalmanFilter_set_H_m9480D0B1AFBEEB4BB7E4175929142A07758914A0_inline(__this, L_4, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = ___5_r;
		KalmanFilter_set_R_mA2ACC4462D2FC181D9B20F806A2EE72E893B50EC_inline(__this, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_SetState_mC9CB95E7667857E29CF369D24FF284A80859E609 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_state, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_covariance, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_state;
		KalmanFilter_set_State_m20E9827CC4145E80FA5BC11511BEA00102CE7268_inline(__this, L_0, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = ___1_covariance;
		KalmanFilter_set_Covariance_m823F46BBE8A9ACB4EF72383ACF8723E7E651BE59_inline(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_Correct_m97F05523C1E559A23231370927B931B8F30A4521 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_z, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0;
		L_0 = KalmanFilter_get_F_m096A81E58C90EFAB3E1DF5A6E3B1442018767EA4_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1;
		L_1 = KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920(L_0, L_1, NULL);
		KalmanFilter_set_X0_mDF8569EDA79886E255DEE3E236CBABEBC2EA736F_inline(__this, L_2, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3;
		L_3 = KalmanFilter_get_F_m096A81E58C90EFAB3E1DF5A6E3B1442018767EA4_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4;
		L_4 = KalmanFilter_get_Covariance_m0DBABD6D31F4293196CC327053A847F083B7E672_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5;
		L_5 = Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920(L_3, L_4, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6;
		L_6 = KalmanFilter_get_F_m096A81E58C90EFAB3E1DF5A6E3B1442018767EA4_inline(__this, NULL);
		NullCheck(L_6);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7;
		L_7 = Matrix_Transpose_mC6321D9A6F0E43CDC932800A379EFD5CDEFA69B9(L_6, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8;
		L_8 = Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920(L_5, L_7, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9;
		L_9 = KalmanFilter_get_Q_m3D304029E70BC950C8CC3F5CC5CCD588E5EDF7A0_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10;
		L_10 = Matrix_op_Addition_mF81196F71D0FFC038EF9ABE2D3CAA42AD12578C3(L_8, L_9, NULL);
		KalmanFilter_set_P0_mF6D5507B96E0988F988AEEEE5828A941CA0D3F7B_inline(__this, L_10, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11;
		L_11 = KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12;
		L_12 = KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline(__this, NULL);
		NullCheck(L_12);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13;
		L_13 = Matrix_Transpose_mC6321D9A6F0E43CDC932800A379EFD5CDEFA69B9(L_12, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14;
		L_14 = Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920(L_11, L_13, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15;
		L_15 = KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_16;
		L_16 = KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17;
		L_17 = Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920(L_15, L_16, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18;
		L_18 = KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline(__this, NULL);
		NullCheck(L_18);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_19;
		L_19 = Matrix_Transpose_mC6321D9A6F0E43CDC932800A379EFD5CDEFA69B9(L_18, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_20;
		L_20 = Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920(L_17, L_19, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21;
		L_21 = KalmanFilter_get_R_m6AA93D761F1F399A4C60C22C09363267672DB8BB_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22;
		L_22 = Matrix_op_Addition_mF81196F71D0FFC038EF9ABE2D3CAA42AD12578C3(L_20, L_21, NULL);
		NullCheck(L_22);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_23;
		L_23 = Matrix_Invert_m025110DC6C085B38C6245FC923A60DBAA24CB8DA(L_22, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_24;
		L_24 = Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920(L_14, L_23, NULL);
		V_0 = L_24;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_25;
		L_25 = KalmanFilter_get_X0_m6525ED71B7ED08C68D5DC7761EC8CE97C826B4B5_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_26 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_27 = ___0_z;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_28;
		L_28 = KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_29;
		L_29 = KalmanFilter_get_X0_m6525ED71B7ED08C68D5DC7761EC8CE97C826B4B5_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_30;
		L_30 = Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920(L_28, L_29, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_31;
		L_31 = Matrix_op_Subtraction_m8EEFF949A66213F81D362A8AE90A0417B79FD20D(L_27, L_30, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_32;
		L_32 = Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920(L_26, L_31, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_33;
		L_33 = Matrix_op_Addition_mF81196F71D0FFC038EF9ABE2D3CAA42AD12578C3(L_25, L_32, NULL);
		KalmanFilter_set_State_m20E9827CC4145E80FA5BC11511BEA00102CE7268_inline(__this, L_33, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_34;
		L_34 = KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223_inline(__this, NULL);
		NullCheck(L_34);
		int32_t L_35 = L_34->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_36;
		L_36 = Matrix_IdentityMatrix_mA405A28B9452D0D6773FF01F3AF7E52FA4E03AE6(L_35, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_37 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_38;
		L_38 = KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_39;
		L_39 = Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920(L_37, L_38, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_40;
		L_40 = Matrix_op_Subtraction_m8EEFF949A66213F81D362A8AE90A0417B79FD20D(L_36, L_39, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_41;
		L_41 = KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_42;
		L_42 = Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920(L_40, L_41, NULL);
		KalmanFilter_set_Covariance_m823F46BBE8A9ACB4EF72383ACF8723E7E651BE59_inline(__this, L_42, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_X0_mCFD4303E43B8F6EFA141E3411D5E30DD5D5C9638 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CX0U3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_X0_m03A863C60B036F210E4520E23180BB4EFEA666AB (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CX0U3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_P0_mF6327BFB1907AF17BBCE80FA7CE62D4E17278FD1 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CP0U3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_P0_m3087DC31B2CCF163F73766DF1E786EC2B1580D8B (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CP0U3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_F_m5C756567DB1FA3617AFDAB3EBBB1E029938BE5C7 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CFU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_F_mE329B338AE11A23DDF798157DDDF0909A8BB87A1 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CFU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_Q_m3BC34AB32A26ADC3904A93D66378F4E996D68CB1 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CQU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_Q_m1DC3CB34B6F0B84895DE72D93F99F646E1670B82 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CQU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CHU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_H_mC0BC7397BD0F247678BAB267928FFDCB2755FC27 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CHU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_R_m66D845E477AD4F966EB5CEA1F163252CC3650454 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CRU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_R_mCFF19948E60888FC1A97923066BABA8556B99726 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CRU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_State_m1939BDF5E9508479990229AEC371E3ED0D7882B4 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CStateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_Covariance_m0748CCCAA3696D67D8409F669EFF607D1CDDF278 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CCovarianceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_Covariance_mA38C27D2638B949BAC94CA0A74C9ABBA52503CE3 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CCovarianceU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D__ctor_mE09182E4735A65F75ED40200D0F88E24FB799844 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_q, double ___1_r, double ___2_f, double ___3_h, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		double L_0 = ___0_q;
		KalmanFilterSimple1D_set_Q_m1DC3CB34B6F0B84895DE72D93F99F646E1670B82_inline(__this, L_0, NULL);
		double L_1 = ___1_r;
		KalmanFilterSimple1D_set_R_mCFF19948E60888FC1A97923066BABA8556B99726_inline(__this, L_1, NULL);
		double L_2 = ___2_f;
		KalmanFilterSimple1D_set_F_mE329B338AE11A23DDF798157DDDF0909A8BB87A1_inline(__this, L_2, NULL);
		double L_3 = ___3_h;
		KalmanFilterSimple1D_set_H_mC0BC7397BD0F247678BAB267928FFDCB2755FC27_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_SetState_mDDB70DC34D518D9FE771A64558B3E7E06EB5A5E0 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_state, double ___1_covariance, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_state;
		KalmanFilterSimple1D_set_State_m1939BDF5E9508479990229AEC371E3ED0D7882B4_inline(__this, L_0, NULL);
		double L_1 = ___1_covariance;
		KalmanFilterSimple1D_set_Covariance_mA38C27D2638B949BAC94CA0A74C9ABBA52503CE3_inline(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_Correct_m8F4045B2D0BB1F37CB730C85E65748BD1016D7F3 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_data, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = KalmanFilterSimple1D_get_F_m5C756567DB1FA3617AFDAB3EBBB1E029938BE5C7_inline(__this, NULL);
		double L_1;
		L_1 = KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40_inline(__this, NULL);
		KalmanFilterSimple1D_set_X0_m03A863C60B036F210E4520E23180BB4EFEA666AB_inline(__this, ((double)il2cpp_codegen_multiply(L_0, L_1)), NULL);
		double L_2;
		L_2 = KalmanFilterSimple1D_get_F_m5C756567DB1FA3617AFDAB3EBBB1E029938BE5C7_inline(__this, NULL);
		double L_3;
		L_3 = KalmanFilterSimple1D_get_Covariance_m0748CCCAA3696D67D8409F669EFF607D1CDDF278_inline(__this, NULL);
		double L_4;
		L_4 = KalmanFilterSimple1D_get_F_m5C756567DB1FA3617AFDAB3EBBB1E029938BE5C7_inline(__this, NULL);
		double L_5;
		L_5 = KalmanFilterSimple1D_get_Q_m3BC34AB32A26ADC3904A93D66378F4E996D68CB1_inline(__this, NULL);
		KalmanFilterSimple1D_set_P0_m3087DC31B2CCF163F73766DF1E786EC2B1580D8B_inline(__this, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_2, L_3)), L_4)), L_5)), NULL);
		double L_6;
		L_6 = KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline(__this, NULL);
		double L_7;
		L_7 = KalmanFilterSimple1D_get_P0_mF6327BFB1907AF17BBCE80FA7CE62D4E17278FD1_inline(__this, NULL);
		double L_8;
		L_8 = KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline(__this, NULL);
		double L_9;
		L_9 = KalmanFilterSimple1D_get_P0_mF6327BFB1907AF17BBCE80FA7CE62D4E17278FD1_inline(__this, NULL);
		double L_10;
		L_10 = KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline(__this, NULL);
		double L_11;
		L_11 = KalmanFilterSimple1D_get_R_m66D845E477AD4F966EB5CEA1F163252CC3650454_inline(__this, NULL);
		V_0 = ((double)(((double)il2cpp_codegen_multiply(L_6, L_7))/((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_8, L_9)), L_10)), L_11))));
		double L_12;
		L_12 = KalmanFilterSimple1D_get_X0_mCFD4303E43B8F6EFA141E3411D5E30DD5D5C9638_inline(__this, NULL);
		double L_13 = V_0;
		double L_14 = ___0_data;
		double L_15;
		L_15 = KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline(__this, NULL);
		double L_16;
		L_16 = KalmanFilterSimple1D_get_X0_mCFD4303E43B8F6EFA141E3411D5E30DD5D5C9638_inline(__this, NULL);
		KalmanFilterSimple1D_set_State_m1939BDF5E9508479990229AEC371E3ED0D7882B4_inline(__this, ((double)il2cpp_codegen_add(L_12, ((double)il2cpp_codegen_multiply(L_13, ((double)il2cpp_codegen_subtract(L_14, ((double)il2cpp_codegen_multiply(L_15, L_16)))))))), NULL);
		double L_17 = V_0;
		double L_18;
		L_18 = KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline(__this, NULL);
		double L_19;
		L_19 = KalmanFilterSimple1D_get_P0_mF6327BFB1907AF17BBCE80FA7CE62D4E17278FD1_inline(__this, NULL);
		KalmanFilterSimple1D_set_Covariance_mA38C27D2638B949BAC94CA0A74C9ABBA52503CE3_inline(__this, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply(L_17, L_18)))), L_19)), NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___0_iRows, int32_t ___1_iCols, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___detOfP = (1.0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_iRows;
		__this->___rows = L_0;
		int32_t L_1 = ___1_iCols;
		__this->___cols = L_1;
		int32_t L_2 = __this->___rows;
		int32_t L_3 = __this->___cols;
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_2, (il2cpp_array_size_t)L_3 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_4 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_5);
		__this->___mat = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___0_matrix, const RuntimeMethod* method) 
{
	{
		__this->___detOfP = (1.0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_0 = ___0_matrix;
		NullCheck((RuntimeArray*)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_0, 0, NULL);
		__this->___rows = L_1;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_2 = ___0_matrix;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_2, 1, NULL);
		__this->___cols = L_3;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_4 = ___0_matrix;
		__this->___mat = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix_IsSquare_mA7D6A78DEC5B86B73790A95033B375E93966B213 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___rows;
		int32_t L_1 = __this->___cols;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___0_iRow, int32_t ___1_iCol, const RuntimeMethod* method) 
{
	{
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_0 = __this->___mat;
		int32_t L_1 = ___0_iRow;
		int32_t L_2 = ___1_iCol;
		NullCheck(L_0);
		double L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___0_iRow, int32_t ___1_iCol, double ___2_value, const RuntimeMethod* method) 
{
	{
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_0 = __this->___mat;
		int32_t L_1 = ___0_iRow;
		int32_t L_2 = ___1_iCol;
		double L_3 = ___2_value;
		NullCheck(L_0);
		(L_0)->SetAt(L_1, L_2, L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_GetCol_mA2B4F15AAD893AF203482630D722922A34982AD6 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___0_k, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_1, L_0, 1, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_002a;
	}

IL_0011:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = V_0;
		int32_t L_3 = V_1;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_4 = __this->___mat;
		int32_t L_5 = V_1;
		int32_t L_6 = ___0_k;
		NullCheck(L_4);
		double L_7;
		L_7 = (L_4)->GetAt(L_5, L_6);
		NullCheck(L_2);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_2, L_3, 0, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002a:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___rows;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0011;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SetCol_m572AA23649D9EB9862AA97F0385F5C95B3A9380A (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_v, int32_t ___1_k, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001d;
	}

IL_0004:
	{
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_0 = __this->___mat;
		int32_t L_1 = V_0;
		int32_t L_2 = ___1_k;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___0_v;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		double L_5;
		L_5 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_3, L_4, 0, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(L_1, L_2, L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001d:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___rows;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
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
		bool L_0;
		L_0 = Matrix_IsSquare_mA7D6A78DEC5B86B73790A95033B375E93966B213(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_1 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55C1681428B04B53C037730ADAE3A34FF5F59650)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = __this->___rows;
		int32_t L_3 = __this->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4;
		L_4 = Matrix_IdentityMatrix_m2D19D866363DED5E5A6F0E9E5FC0BE860496BE85(L_2, L_3, NULL);
		__this->___L = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___L), (void*)L_4);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5;
		L_5 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(__this, NULL);
		__this->___U = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U), (void*)L_5);
		int32_t L_6 = __this->___rows;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___pi = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pi), (void*)L_7);
		V_4 = 0;
		goto IL_005d;
	}

IL_004c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___pi;
		int32_t L_9 = V_4;
		int32_t L_10 = V_4;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_10);
		int32_t L_11 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_005d:
	{
		int32_t L_12 = V_4;
		int32_t L_13 = __this->___rows;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_004c;
		}
	}
	{
		V_0 = (0.0);
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		goto IL_0266;
	}

IL_007d:
	{
		V_0 = (0.0);
		int32_t L_14 = V_5;
		V_6 = L_14;
		goto IL_00c2;
	}

IL_008d:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = __this->___U;
		int32_t L_16 = V_6;
		int32_t L_17 = V_5;
		NullCheck(L_15);
		double L_18;
		L_18 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_15, L_16, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_19;
		L_19 = fabs(L_18);
		double L_20 = V_0;
		if ((!(((double)L_19) > ((double)L_20))))
		{
			goto IL_00bc;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21 = __this->___U;
		int32_t L_22 = V_6;
		int32_t L_23 = V_5;
		NullCheck(L_21);
		double L_24;
		L_24 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_21, L_22, L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_25;
		L_25 = fabs(L_24);
		V_0 = L_25;
		int32_t L_26 = V_6;
		V_2 = L_26;
	}

IL_00bc:
	{
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00c2:
	{
		int32_t L_28 = V_6;
		int32_t L_29 = __this->___rows;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_008d;
		}
	}
	{
		double L_30 = V_0;
		if ((!(((double)L_30) == ((double)(0.0)))))
		{
			goto IL_00e3;
		}
	}
	{
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_31 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6B5B78BCFFA7C1FD4EA5CFE3CC8CE6D6629D68B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB_RuntimeMethod_var)));
	}

IL_00e3:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->___pi;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = L_35;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->___pi;
		int32_t L_37 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->___pi;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (int32_t)L_41);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = __this->___pi;
		int32_t L_43 = V_2;
		int32_t L_44 = V_3;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (int32_t)L_44);
		V_7 = 0;
		goto IL_014e;
	}

IL_010c:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_45 = __this->___L;
		int32_t L_46 = V_5;
		int32_t L_47 = V_7;
		NullCheck(L_45);
		double L_48;
		L_48 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_45, L_46, L_47, NULL);
		V_1 = L_48;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_49 = __this->___L;
		int32_t L_50 = V_5;
		int32_t L_51 = V_7;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_52 = __this->___L;
		int32_t L_53 = V_2;
		int32_t L_54 = V_7;
		NullCheck(L_52);
		double L_55;
		L_55 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_52, L_53, L_54, NULL);
		NullCheck(L_49);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_49, L_50, L_51, L_55, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_56 = __this->___L;
		int32_t L_57 = V_2;
		int32_t L_58 = V_7;
		double L_59 = V_1;
		NullCheck(L_56);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_56, L_57, L_58, L_59, NULL);
		int32_t L_60 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_014e:
	{
		int32_t L_61 = V_7;
		int32_t L_62 = V_5;
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_63 = V_5;
		int32_t L_64 = V_2;
		if ((((int32_t)L_63) == ((int32_t)L_64)))
		{
			goto IL_016f;
		}
	}
	{
		double L_65 = __this->___detOfP;
		__this->___detOfP = ((double)il2cpp_codegen_multiply(L_65, (-1.0)));
	}

IL_016f:
	{
		V_8 = 0;
		goto IL_01b6;
	}

IL_0174:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_66 = __this->___U;
		int32_t L_67 = V_5;
		int32_t L_68 = V_8;
		NullCheck(L_66);
		double L_69;
		L_69 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_66, L_67, L_68, NULL);
		V_1 = L_69;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_70 = __this->___U;
		int32_t L_71 = V_5;
		int32_t L_72 = V_8;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_73 = __this->___U;
		int32_t L_74 = V_2;
		int32_t L_75 = V_8;
		NullCheck(L_73);
		double L_76;
		L_76 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_73, L_74, L_75, NULL);
		NullCheck(L_70);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_70, L_71, L_72, L_76, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_77 = __this->___U;
		int32_t L_78 = V_2;
		int32_t L_79 = V_8;
		double L_80 = V_1;
		NullCheck(L_77);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_77, L_78, L_79, L_80, NULL);
		int32_t L_81 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_01b6:
	{
		int32_t L_82 = V_8;
		int32_t L_83 = __this->___cols;
		if ((((int32_t)L_82) < ((int32_t)L_83)))
		{
			goto IL_0174;
		}
	}
	{
		int32_t L_84 = V_5;
		V_9 = ((int32_t)il2cpp_codegen_add(L_84, 1));
		goto IL_0253;
	}

IL_01cb:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_85 = __this->___L;
		int32_t L_86 = V_9;
		int32_t L_87 = V_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_88 = __this->___U;
		int32_t L_89 = V_9;
		int32_t L_90 = V_5;
		NullCheck(L_88);
		double L_91;
		L_91 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_88, L_89, L_90, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_92 = __this->___U;
		int32_t L_93 = V_5;
		int32_t L_94 = V_5;
		NullCheck(L_92);
		double L_95;
		L_95 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_92, L_93, L_94, NULL);
		NullCheck(L_85);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_85, L_86, L_87, ((double)(L_91/L_95)), NULL);
		int32_t L_96 = V_5;
		V_10 = L_96;
		goto IL_0243;
	}

IL_01ff:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_97 = __this->___U;
		int32_t L_98 = V_9;
		int32_t L_99 = V_10;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_100 = __this->___U;
		int32_t L_101 = V_9;
		int32_t L_102 = V_10;
		NullCheck(L_100);
		double L_103;
		L_103 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_100, L_101, L_102, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_104 = __this->___L;
		int32_t L_105 = V_9;
		int32_t L_106 = V_5;
		NullCheck(L_104);
		double L_107;
		L_107 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_104, L_105, L_106, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_108 = __this->___U;
		int32_t L_109 = V_5;
		int32_t L_110 = V_10;
		NullCheck(L_108);
		double L_111;
		L_111 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_108, L_109, L_110, NULL);
		NullCheck(L_97);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_97, L_98, L_99, ((double)il2cpp_codegen_subtract(L_103, ((double)il2cpp_codegen_multiply(L_107, L_111)))), NULL);
		int32_t L_112 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_112, 1));
	}

IL_0243:
	{
		int32_t L_113 = V_10;
		int32_t L_114 = __this->___cols;
		if ((((int32_t)L_113) < ((int32_t)L_114)))
		{
			goto IL_01ff;
		}
	}
	{
		int32_t L_115 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_0253:
	{
		int32_t L_116 = V_9;
		int32_t L_117 = __this->___rows;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_01cb;
		}
	}
	{
		int32_t L_118 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_118, 1));
	}

IL_0266:
	{
		int32_t L_119 = V_5;
		int32_t L_120 = __this->___cols;
		if ((((int32_t)L_119) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_120, 1)))))
		{
			goto IL_007d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_SolveWith_m8243F1B915336EF12063532064CA7F9EE437E4C6 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___rows;
		int32_t L_1 = __this->___cols;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_2 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55C1681428B04B53C037730ADAE3A34FF5F59650)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_SolveWith_m8243F1B915336EF12063532064CA7F9EE437E4C6_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = __this->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = ___0_v;
		NullCheck(L_4);
		int32_t L_5 = L_4->___rows;
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0032;
		}
	}
	{
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_6 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8004D8D7C06F44B14DED80921D95B6A3A2BAB38A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_SolveWith_m8243F1B915336EF12063532064CA7F9EE437E4C6_RuntimeMethod_var)));
	}

IL_0032:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7 = __this->___L;
		if (L_7)
		{
			goto IL_0040;
		}
	}
	{
		Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB(__this, NULL);
	}

IL_0040:
	{
		int32_t L_8 = __this->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_9, L_8, 1, NULL);
		V_0 = L_9;
		V_2 = 0;
		goto IL_006c;
	}

IL_0051:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = V_0;
		int32_t L_11 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12 = ___0_v;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___pi;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		double L_17;
		L_17 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_12, L_16, 0, NULL);
		NullCheck(L_10);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_10, L_11, 0, L_17, NULL);
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_006c:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = __this->___rows;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0051;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21 = __this->___L;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_23;
		L_23 = Matrix_SubsForth_m57CF751C1BB4DE2B4C005047E76C212F558BD73D(L_21, L_22, NULL);
		V_1 = L_23;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_24 = __this->___U;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_25 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_26;
		L_26 = Matrix_SubsBack_m5700BED31CAC2B3D08D91EA9F52D236518A88539(L_24, L_25, NULL);
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Invert_m025110DC6C085B38C6245FC923A60DBAA24CB8DA (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_2 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_3 = NULL;
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___L;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB(__this, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->___rows;
		int32_t L_2 = __this->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_3, L_1, L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0056;
	}

IL_0024:
	{
		int32_t L_4 = __this->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5;
		L_5 = Matrix_ZeroMatrix_m01B5A5BB65FDA47E9E3A1E85169B929E71F33F11(L_4, 1, NULL);
		V_2 = L_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6 = V_2;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_6, L_7, 0, (1.0), NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9;
		L_9 = Matrix_SolveWith_m8243F1B915336EF12063532064CA7F9EE437E4C6(__this, L_8, NULL);
		V_3 = L_9;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11 = V_3;
		int32_t L_12 = V_1;
		NullCheck(L_10);
		Matrix_SetCol_m572AA23649D9EB9862AA97F0385F5C95B3A9380A(L_10, L_11, L_12, NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0056:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___rows;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0024;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Matrix_Det_m9792CE1A8AFC82CDC4414980A20A5D6122366E09 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	int32_t V_1 = 0;
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___L;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB(__this, NULL);
	}

IL_000e:
	{
		double L_1 = __this->___detOfP;
		V_0 = L_1;
		V_1 = 0;
		goto IL_002d;
	}

IL_0019:
	{
		double L_2 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = __this->___U;
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		double L_6;
		L_6 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_3, L_4, L_5, NULL);
		V_0 = ((double)il2cpp_codegen_multiply(L_2, L_6));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002d:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = __this->___rows;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0019;
		}
	}
	{
		double L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_GetP_m3330FCACF45827A74891D4DB9EEA4596E5924239 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___L;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB(__this, NULL);
	}

IL_000e:
	{
		int32_t L_1 = __this->___rows;
		int32_t L_2 = __this->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3;
		L_3 = Matrix_ZeroMatrix_m01B5A5BB65FDA47E9E3A1E85169B929E71F33F11(L_1, L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0040;
	}

IL_0024:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___pi;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = V_1;
		NullCheck(L_4);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_4, L_8, L_9, (1.0), NULL);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->___rows;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0024;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___rows;
		int32_t L_1 = __this->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0040;
	}

IL_0016:
	{
		V_2 = 0;
		goto IL_0033;
	}

IL_001a:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_6 = __this->___mat;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_6);
		double L_9;
		L_9 = (L_6)->GetAt(L_7, L_8);
		NullCheck(L_3);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_3, L_4, L_5, L_9, NULL);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = __this->___cols;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0040:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->___rows;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0016;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_SubsForth_m57CF751C1BB4DE2B4C005047E76C212F558BD73D (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_A;
		NullCheck(L_0);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = L_0->___L;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___0_A;
		NullCheck(L_2);
		Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB(L_2, NULL);
	}

IL_000e:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___0_A;
		NullCheck(L_3);
		int32_t L_4 = L_3->___rows;
		V_0 = L_4;
		int32_t L_5 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_6, L_5, 1, NULL);
		V_1 = L_6;
		V_2 = 0;
		goto IL_0086;
	}

IL_0021:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7 = V_1;
		int32_t L_8 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = ___1_b;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		double L_11;
		L_11 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_9, L_10, 0, NULL);
		NullCheck(L_7);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_7, L_8, 0, L_11, NULL);
		V_3 = 0;
		goto IL_0065;
	}

IL_0035:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12 = V_1;
		V_4 = L_12;
		int32_t L_13 = V_2;
		V_5 = L_13;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14 = V_4;
		int32_t L_15 = V_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		double L_18;
		L_18 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_16, L_17, 0, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_19 = ___0_A;
		int32_t L_20 = V_2;
		int32_t L_21 = V_3;
		NullCheck(L_19);
		double L_22;
		L_22 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_19, L_20, L_21, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_23 = V_1;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		double L_25;
		L_25 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_23, L_24, 0, NULL);
		NullCheck(L_14);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_14, L_15, 0, ((double)il2cpp_codegen_subtract(L_18, ((double)il2cpp_codegen_multiply(L_22, L_25)))), NULL);
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0065:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = V_2;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0035;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_29 = V_1;
		int32_t L_30 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_31 = V_1;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		double L_33;
		L_33 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_31, L_32, 0, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_34 = ___0_A;
		int32_t L_35 = V_2;
		int32_t L_36 = V_2;
		NullCheck(L_34);
		double L_37;
		L_37 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_34, L_35, L_36, NULL);
		NullCheck(L_29);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_29, L_30, 0, ((double)(L_33/L_37)), NULL);
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0086:
	{
		int32_t L_39 = V_2;
		int32_t L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0021;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_41 = V_1;
		return L_41;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_SubsBack_m5700BED31CAC2B3D08D91EA9F52D236518A88539 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_A;
		NullCheck(L_0);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = L_0->___L;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___0_A;
		NullCheck(L_2);
		Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB(L_2, NULL);
	}

IL_000e:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___0_A;
		NullCheck(L_3);
		int32_t L_4 = L_3->___rows;
		V_0 = L_4;
		int32_t L_5 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_6, L_5, 1, NULL);
		V_1 = L_6;
		int32_t L_7 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		goto IL_008a;
	}

IL_0023:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8 = V_1;
		int32_t L_9 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = ___1_b;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		double L_12;
		L_12 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_10, L_11, 0, NULL);
		NullCheck(L_8);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_8, L_9, 0, L_12, NULL);
		int32_t L_13 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		goto IL_0069;
	}

IL_0039:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14 = V_1;
		V_4 = L_14;
		int32_t L_15 = V_2;
		V_5 = L_15;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_16 = V_4;
		int32_t L_17 = V_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18 = V_4;
		int32_t L_19 = V_5;
		NullCheck(L_18);
		double L_20;
		L_20 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_18, L_19, 0, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21 = ___0_A;
		int32_t L_22 = V_2;
		int32_t L_23 = V_3;
		NullCheck(L_21);
		double L_24;
		L_24 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_21, L_22, L_23, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_25 = V_1;
		int32_t L_26 = V_3;
		NullCheck(L_25);
		double L_27;
		L_27 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_25, L_26, 0, NULL);
		NullCheck(L_16);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_16, L_17, 0, ((double)il2cpp_codegen_subtract(L_20, ((double)il2cpp_codegen_multiply(L_24, L_27)))), NULL);
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
	}

IL_0069:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_2;
		if ((((int32_t)L_29) > ((int32_t)L_30)))
		{
			goto IL_0039;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_31 = V_1;
		int32_t L_32 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_33 = V_1;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		double L_35;
		L_35 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_33, L_34, 0, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_36 = ___0_A;
		int32_t L_37 = V_2;
		int32_t L_38 = V_2;
		NullCheck(L_36);
		double L_39;
		L_39 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_36, L_37, L_38, NULL);
		NullCheck(L_31);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_31, L_32, 0, ((double)(L_35/L_39)), NULL);
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
	}

IL_008a:
	{
		int32_t L_41 = V_2;
		if ((((int32_t)L_41) > ((int32_t)(-1))))
		{
			goto IL_0023;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_42 = V_1;
		return L_42;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_ZeroMatrix_m01B5A5BB65FDA47E9E3A1E85169B929E71F33F11 (int32_t ___0_iRows, int32_t ___1_iCols, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_iRows;
		int32_t L_1 = ___1_iCols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002d;
	}

IL_000c:
	{
		V_2 = 0;
		goto IL_0025;
	}

IL_0010:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_3);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_3, L_4, L_5, (0.0), NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0025:
	{
		int32_t L_7 = V_2;
		int32_t L_8 = ___1_iCols;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002d:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = ___0_iRows;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000c;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_IdentityMatrix_m2D19D866363DED5E5A6F0E9E5FC0BE860496BE85 (int32_t ___0_iRows, int32_t ___1_iCols, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_iRows;
		int32_t L_1 = ___1_iCols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_ZeroMatrix_m01B5A5BB65FDA47E9E3A1E85169B929E71F33F11(L_0, L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0021;
	}

IL_000c:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_3, L_4, L_5, (1.0), NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0021:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_iRows;
		int32_t L_9 = ___1_iCols;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_8, L_9, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_10)))
		{
			goto IL_000c;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_IdentityMatrix_mA405A28B9452D0D6773FF01F3AF7E52FA4E03AE6 (int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_size;
		int32_t L_1 = ___0_size;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_IdentityMatrix_m2D19D866363DED5E5A6F0E9E5FC0BE860496BE85(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_RandomMatrix_mDB7B530F1C2C2673459A20FBC4CB107C4DBD29B4 (int32_t ___0_iRows, int32_t ___1_iCols, int32_t ___2_dispersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		V_0 = L_0;
		int32_t L_1 = ___0_iRows;
		int32_t L_2 = ___1_iCols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_3, L_1, L_2, NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0034;
	}

IL_0012:
	{
		V_3 = 0;
		goto IL_002c;
	}

IL_0016:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = V_3;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_7 = V_0;
		int32_t L_8 = ___2_dispersion;
		int32_t L_9 = ___2_dispersion;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, L_7, ((-L_8)), L_9);
		NullCheck(L_4);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_4, L_5, L_6, ((double)L_10), NULL);
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002c:
	{
		int32_t L_12 = V_3;
		int32_t L_13 = ___1_iCols;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0034:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = ___0_iRows;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0012;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Parse_m9B95F1FECA51ECDCB068E8821447FCECCD06DDD7 (String_t* ___0_ps, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___0_ps;
		String_t* L_1;
		L_1 = Matrix_NormalizeMatrixString_m2949C13F4C1C65CB8B90ADC7C22326A329C0C36D(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = Regex_Split_mA6C13D588244018786564864F683C13DDBEF5CF2(L_1, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		V_0 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		String_t* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_5, ((int32_t)32), 0, NULL);
		V_1 = L_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_1;
		NullCheck(L_8);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_9, ((int32_t)(((RuntimeArray*)L_7)->max_length)), ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
		V_2 = L_9;
	}
	try
	{
		{
			V_3 = 0;
			goto IL_0061_1;
		}

IL_002d_1:
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_0;
			int32_t L_11 = V_3;
			NullCheck(L_10);
			int32_t L_12 = L_11;
			String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			NullCheck(L_13);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14;
			L_14 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_13, ((int32_t)32), 0, NULL);
			V_1 = L_14;
			V_4 = 0;
			goto IL_0056_1;
		}

IL_003e_1:
		{
			Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = V_2;
			int32_t L_16 = V_3;
			int32_t L_17 = V_4;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_1;
			int32_t L_19 = V_4;
			NullCheck(L_18);
			int32_t L_20 = L_19;
			String_t* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			double L_22;
			L_22 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_21, NULL);
			NullCheck(L_15);
			Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_15, L_16, L_17, L_22, NULL);
			int32_t L_23 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		}

IL_0056_1:
		{
			int32_t L_24 = V_4;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_1;
			NullCheck(L_25);
			if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
			{
				goto IL_003e_1;
			}
		}
		{
			int32_t L_26 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		}

IL_0061_1:
		{
			int32_t L_27 = V_3;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_0;
			NullCheck(L_28);
			if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
			{
				goto IL_002d_1;
			}
		}
		{
			goto IL_0082;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_29 = ((FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)IL2CPP_GET_ACTIVE_EXCEPTION(FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*));;
		V_5 = L_29;
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_30 = V_5;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_30);
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9360594C2BCE966846677E990CBBE005BB668E7F)), L_31, NULL);
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_33 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_33, L_32, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_Parse_m9B95F1FECA51ECDCB068E8821447FCECCD06DDD7_RuntimeMethod_var)));
	}

IL_0082:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_34 = V_2;
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Matrix_ToString_m08C38EAC81460ADD92B07C6907853D2A97E0BF07 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA5D25D8D9E7431F466B32C49F48E872BEE36FD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_1 = 0;
		goto IL_0053;
	}

IL_000a:
	{
		V_2 = 0;
		goto IL_003a;
	}

IL_000e:
	{
		String_t* L_0 = V_0;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_1 = __this->___mat;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_1);
		double L_4;
		L_4 = (L_1)->GetAt(L_2, L_3);
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralCA5D25D8D9E7431F466B32C49F48E872BEE36FD9, L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_8;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003a:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = __this->___cols;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_12, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		V_0 = L_13;
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0053:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->___rows;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Transpose_m75BBA2E2967FA937E1C10DF058353B81B6E594DB (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_m;
		NullCheck(L_0);
		int32_t L_1 = L_0->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___0_m;
		NullCheck(L_2);
		int32_t L_3 = L_2->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_4, L_1, L_3, NULL);
		V_0 = L_4;
		V_1 = 0;
		goto IL_003b;
	}

IL_0016:
	{
		V_2 = 0;
		goto IL_002e;
	}

IL_001a:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8 = ___0_m;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		double L_11;
		L_11 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_8, L_9, L_10, NULL);
		NullCheck(L_5);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_5, L_6, L_7, L_11, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14 = ___0_m;
		NullCheck(L_14);
		int32_t L_15 = L_14->___cols;
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003b:
	{
		int32_t L_17 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18 = ___0_m;
		NullCheck(L_18);
		int32_t L_19 = L_18->___rows;
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0016;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Transpose_mC6321D9A6F0E43CDC932800A379EFD5CDEFA69B9 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0;
		L_0 = Matrix_Transpose_m75BBA2E2967FA937E1C10DF058353B81B6E594DB(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Power_mBDF5EB2CFD3D93E987F6B58050F38F3F61BE1878 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m, int32_t ___1_pow, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_1 = NULL;
	{
		int32_t L_0 = ___1_pow;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = ___0_m;
		NullCheck(L_1);
		int32_t L_2 = L_1->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___0_m;
		NullCheck(L_3);
		int32_t L_4 = L_3->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5;
		L_5 = Matrix_IdentityMatrix_m2D19D866363DED5E5A6F0E9E5FC0BE860496BE85(L_2, L_4, NULL);
		return L_5;
	}

IL_0015:
	{
		int32_t L_6 = ___1_pow;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0020;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7 = ___0_m;
		NullCheck(L_7);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8;
		L_8 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_7, NULL);
		return L_8;
	}

IL_0020:
	{
		int32_t L_9 = ___1_pow;
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_002b;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = ___0_m;
		NullCheck(L_10);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11;
		L_11 = Matrix_Invert_m025110DC6C085B38C6245FC923A60DBAA24CB8DA(L_10, NULL);
		return L_11;
	}

IL_002b:
	{
		int32_t L_12 = ___1_pow;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = ___0_m;
		NullCheck(L_13);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14;
		L_14 = Matrix_Invert_m025110DC6C085B38C6245FC923A60DBAA24CB8DA(L_13, NULL);
		V_0 = L_14;
		int32_t L_15 = ___1_pow;
		___1_pow = ((int32_t)il2cpp_codegen_multiply(L_15, (-1)));
		goto IL_0044;
	}

IL_003d:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_16 = ___0_m;
		NullCheck(L_16);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17;
		L_17 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_16, NULL);
		V_0 = L_17;
	}

IL_0044:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18 = ___0_m;
		NullCheck(L_18);
		int32_t L_19 = L_18->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_20 = ___0_m;
		NullCheck(L_20);
		int32_t L_21 = L_20->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22;
		L_22 = Matrix_IdentityMatrix_m2D19D866363DED5E5A6F0E9E5FC0BE860496BE85(L_19, L_21, NULL);
		V_1 = L_22;
		goto IL_0073;
	}

IL_0058:
	{
		int32_t L_23 = ___1_pow;
		if ((!(((uint32_t)((int32_t)(L_23&1))) == ((uint32_t)1))))
		{
			goto IL_0066;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_24 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_25 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_26;
		L_26 = Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920(L_24, L_25, NULL);
		V_1 = L_26;
	}

IL_0066:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_27 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_28 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_29;
		L_29 = Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920(L_27, L_28, NULL);
		V_0 = L_29;
		int32_t L_30 = ___1_pow;
		___1_pow = ((int32_t)(L_30>>1));
	}

IL_0073:
	{
		int32_t L_31 = ___1_pow;
		if (L_31)
		{
			goto IL_0058;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_32 = V_1;
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SafeAplusBintoC_mE1F063305F7F9EC44A21E80026FCCB60C0163D96 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, int32_t ___1_xa, int32_t ___2_ya, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_B, int32_t ___4_xb, int32_t ___5_yb, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___6_C, int32_t ___7_size, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		goto IL_00ae;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_00a2;
	}

IL_000e:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___6_C;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_0, L_1, L_2, (0.0), NULL);
		int32_t L_3 = ___1_xa;
		int32_t L_4 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = ___0_A;
		NullCheck(L_5);
		int32_t L_6 = L_5->___cols;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) >= ((int32_t)L_6)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_7 = ___2_ya;
		int32_t L_8 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = ___0_A;
		NullCheck(L_9);
		int32_t L_10 = L_9->___rows;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8))) >= ((int32_t)L_10)))
		{
			goto IL_005d;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11 = ___6_C;
		V_2 = L_11;
		int32_t L_12 = V_0;
		V_3 = L_12;
		int32_t L_13 = V_1;
		V_4 = L_13;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17 = V_2;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		NullCheck(L_17);
		double L_20;
		L_20 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_17, L_18, L_19, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21 = ___0_A;
		int32_t L_22 = ___2_ya;
		int32_t L_23 = V_0;
		int32_t L_24 = ___1_xa;
		int32_t L_25 = V_1;
		NullCheck(L_21);
		double L_26;
		L_26 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_21, ((int32_t)il2cpp_codegen_add(L_22, L_23)), ((int32_t)il2cpp_codegen_add(L_24, L_25)), NULL);
		NullCheck(L_14);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_14, L_15, L_16, ((double)il2cpp_codegen_add(L_20, L_26)), NULL);
	}

IL_005d:
	{
		int32_t L_27 = ___4_xb;
		int32_t L_28 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_29 = ___3_B;
		NullCheck(L_29);
		int32_t L_30 = L_29->___cols;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_27, L_28))) >= ((int32_t)L_30)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_31 = ___5_yb;
		int32_t L_32 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_33 = ___3_B;
		NullCheck(L_33);
		int32_t L_34 = L_33->___rows;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_31, L_32))) >= ((int32_t)L_34)))
		{
			goto IL_009e;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_35 = ___6_C;
		V_2 = L_35;
		int32_t L_36 = V_0;
		V_4 = L_36;
		int32_t L_37 = V_1;
		V_3 = L_37;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_38 = V_2;
		int32_t L_39 = V_4;
		int32_t L_40 = V_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_41 = V_2;
		int32_t L_42 = V_4;
		int32_t L_43 = V_3;
		NullCheck(L_41);
		double L_44;
		L_44 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_41, L_42, L_43, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_45 = ___3_B;
		int32_t L_46 = ___5_yb;
		int32_t L_47 = V_0;
		int32_t L_48 = ___4_xb;
		int32_t L_49 = V_1;
		NullCheck(L_45);
		double L_50;
		L_50 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_45, ((int32_t)il2cpp_codegen_add(L_46, L_47)), ((int32_t)il2cpp_codegen_add(L_48, L_49)), NULL);
		NullCheck(L_38);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_38, L_39, L_40, ((double)il2cpp_codegen_add(L_44, L_50)), NULL);
	}

IL_009e:
	{
		int32_t L_51 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00a2:
	{
		int32_t L_52 = V_1;
		int32_t L_53 = ___7_size;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_54 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00ae:
	{
		int32_t L_55 = V_0;
		int32_t L_56 = ___7_size;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SafeAminusBintoC_m4CBD0C863A8629D7CB779C1CF0AB28C6ABAEE39C (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, int32_t ___1_xa, int32_t ___2_ya, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_B, int32_t ___4_xb, int32_t ___5_yb, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___6_C, int32_t ___7_size, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		goto IL_00ae;
	}

IL_0007:
	{
		V_1 = 0;
		goto IL_00a2;
	}

IL_000e:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___6_C;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_0, L_1, L_2, (0.0), NULL);
		int32_t L_3 = ___1_xa;
		int32_t L_4 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = ___0_A;
		NullCheck(L_5);
		int32_t L_6 = L_5->___cols;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) >= ((int32_t)L_6)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_7 = ___2_ya;
		int32_t L_8 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = ___0_A;
		NullCheck(L_9);
		int32_t L_10 = L_9->___rows;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8))) >= ((int32_t)L_10)))
		{
			goto IL_005d;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11 = ___6_C;
		V_2 = L_11;
		int32_t L_12 = V_0;
		V_3 = L_12;
		int32_t L_13 = V_1;
		V_4 = L_13;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17 = V_2;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		NullCheck(L_17);
		double L_20;
		L_20 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_17, L_18, L_19, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21 = ___0_A;
		int32_t L_22 = ___2_ya;
		int32_t L_23 = V_0;
		int32_t L_24 = ___1_xa;
		int32_t L_25 = V_1;
		NullCheck(L_21);
		double L_26;
		L_26 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_21, ((int32_t)il2cpp_codegen_add(L_22, L_23)), ((int32_t)il2cpp_codegen_add(L_24, L_25)), NULL);
		NullCheck(L_14);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_14, L_15, L_16, ((double)il2cpp_codegen_add(L_20, L_26)), NULL);
	}

IL_005d:
	{
		int32_t L_27 = ___4_xb;
		int32_t L_28 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_29 = ___3_B;
		NullCheck(L_29);
		int32_t L_30 = L_29->___cols;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_27, L_28))) >= ((int32_t)L_30)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_31 = ___5_yb;
		int32_t L_32 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_33 = ___3_B;
		NullCheck(L_33);
		int32_t L_34 = L_33->___rows;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_31, L_32))) >= ((int32_t)L_34)))
		{
			goto IL_009e;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_35 = ___6_C;
		V_2 = L_35;
		int32_t L_36 = V_0;
		V_4 = L_36;
		int32_t L_37 = V_1;
		V_3 = L_37;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_38 = V_2;
		int32_t L_39 = V_4;
		int32_t L_40 = V_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_41 = V_2;
		int32_t L_42 = V_4;
		int32_t L_43 = V_3;
		NullCheck(L_41);
		double L_44;
		L_44 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_41, L_42, L_43, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_45 = ___3_B;
		int32_t L_46 = ___5_yb;
		int32_t L_47 = V_0;
		int32_t L_48 = ___4_xb;
		int32_t L_49 = V_1;
		NullCheck(L_45);
		double L_50;
		L_50 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_45, ((int32_t)il2cpp_codegen_add(L_46, L_47)), ((int32_t)il2cpp_codegen_add(L_48, L_49)), NULL);
		NullCheck(L_38);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_38, L_39, L_40, ((double)il2cpp_codegen_subtract(L_44, L_50)), NULL);
	}

IL_009e:
	{
		int32_t L_51 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00a2:
	{
		int32_t L_52 = V_1;
		int32_t L_53 = ___7_size;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_54 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00ae:
	{
		int32_t L_55 = V_0;
		int32_t L_56 = ___7_size;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SafeACopytoC_mB872951CA2A3495259E670D8884953DC0408A01F (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, int32_t ___1_xa, int32_t ___2_ya, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_C, int32_t ___4_size, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		goto IL_0062;
	}

IL_0004:
	{
		V_1 = 0;
		goto IL_0059;
	}

IL_0008:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___3_C;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_0, L_1, L_2, (0.0), NULL);
		int32_t L_3 = ___1_xa;
		int32_t L_4 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = ___0_A;
		NullCheck(L_5);
		int32_t L_6 = L_5->___cols;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) >= ((int32_t)L_6)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = ___2_ya;
		int32_t L_8 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = ___0_A;
		NullCheck(L_9);
		int32_t L_10 = L_9->___rows;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8))) >= ((int32_t)L_10)))
		{
			goto IL_0055;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11 = ___3_C;
		V_2 = L_11;
		int32_t L_12 = V_0;
		V_3 = L_12;
		int32_t L_13 = V_1;
		V_4 = L_13;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17 = V_2;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		NullCheck(L_17);
		double L_20;
		L_20 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_17, L_18, L_19, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21 = ___0_A;
		int32_t L_22 = ___2_ya;
		int32_t L_23 = V_0;
		int32_t L_24 = ___1_xa;
		int32_t L_25 = V_1;
		NullCheck(L_21);
		double L_26;
		L_26 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_21, ((int32_t)il2cpp_codegen_add(L_22, L_23)), ((int32_t)il2cpp_codegen_add(L_24, L_25)), NULL);
		NullCheck(L_14);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_14, L_15, L_16, ((double)il2cpp_codegen_add(L_20, L_26)), NULL);
	}

IL_0055:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0059:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = ___4_size;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0062:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___4_size;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_AplusBintoC_m953E50C055EDCE98CDA6636E5B4043DDA8931C9F (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, int32_t ___1_xa, int32_t ___2_ya, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_B, int32_t ___4_xb, int32_t ___5_yb, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___6_C, int32_t ___7_size, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0039;
	}

IL_0004:
	{
		V_1 = 0;
		goto IL_0030;
	}

IL_0008:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___6_C;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___0_A;
		int32_t L_4 = ___2_ya;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_xa;
		int32_t L_7 = V_1;
		NullCheck(L_3);
		double L_8;
		L_8 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_3, ((int32_t)il2cpp_codegen_add(L_4, L_5)), ((int32_t)il2cpp_codegen_add(L_6, L_7)), NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = ___3_B;
		int32_t L_10 = ___5_yb;
		int32_t L_11 = V_0;
		int32_t L_12 = ___4_xb;
		int32_t L_13 = V_1;
		NullCheck(L_9);
		double L_14;
		L_14 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_9, ((int32_t)il2cpp_codegen_add(L_10, L_11)), ((int32_t)il2cpp_codegen_add(L_12, L_13)), NULL);
		NullCheck(L_0);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_0, L_1, L_2, ((double)il2cpp_codegen_add(L_8, L_14)), NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0030:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = ___7_size;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0039:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = ___7_size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_AminusBintoC_mD357E0BAB64446BA580358CA50012DB6E4EA5EA2 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, int32_t ___1_xa, int32_t ___2_ya, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_B, int32_t ___4_xb, int32_t ___5_yb, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___6_C, int32_t ___7_size, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0039;
	}

IL_0004:
	{
		V_1 = 0;
		goto IL_0030;
	}

IL_0008:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___6_C;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___0_A;
		int32_t L_4 = ___2_ya;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_xa;
		int32_t L_7 = V_1;
		NullCheck(L_3);
		double L_8;
		L_8 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_3, ((int32_t)il2cpp_codegen_add(L_4, L_5)), ((int32_t)il2cpp_codegen_add(L_6, L_7)), NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = ___3_B;
		int32_t L_10 = ___5_yb;
		int32_t L_11 = V_0;
		int32_t L_12 = ___4_xb;
		int32_t L_13 = V_1;
		NullCheck(L_9);
		double L_14;
		L_14 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_9, ((int32_t)il2cpp_codegen_add(L_10, L_11)), ((int32_t)il2cpp_codegen_add(L_12, L_13)), NULL);
		NullCheck(L_0);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_0, L_1, L_2, ((double)il2cpp_codegen_subtract(L_8, L_14)), NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0030:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = ___7_size;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0039:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = ___7_size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_ACopytoC_m1BB56E7C1E94F664279F180D647076AA087BDDEB (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, int32_t ___1_xa, int32_t ___2_ya, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_C, int32_t ___4_size, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		V_1 = 0;
		goto IL_0020;
	}

IL_0008:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___3_C;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___0_A;
		int32_t L_4 = ___2_ya;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_xa;
		int32_t L_7 = V_1;
		NullCheck(L_3);
		double L_8;
		L_8 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_3, ((int32_t)il2cpp_codegen_add(L_4, L_5)), ((int32_t)il2cpp_codegen_add(L_6, L_7)), NULL);
		NullCheck(L_0);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_0, L_1, L_2, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0020:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = ___4_size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0029:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = ___4_size;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_StrassenMultiply_m0D23EC73E81EFFD74F1AAFBB93B9A8A370081355 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_B, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_A;
		NullCheck(L_0);
		int32_t L_1 = L_0->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___1_B;
		NullCheck(L_2);
		int32_t L_3 = L_2->___rows;
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_4 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D95BFFF56951BD3CAEDDE8316CBB48458E83A59)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_StrassenMultiply_m0D23EC73E81EFFD74F1AAFBB93B9A8A370081355_RuntimeMethod_var)));
	}

IL_0019:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = ___0_A;
		NullCheck(L_5);
		int32_t L_6 = L_5->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7 = ___0_A;
		NullCheck(L_7);
		int32_t L_8 = L_7->___cols;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_6, L_8, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = ___1_B;
		NullCheck(L_10);
		int32_t L_11 = L_10->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12 = ___1_B;
		NullCheck(L_12);
		int32_t L_13 = L_12->___cols;
		int32_t L_14;
		L_14 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_11, L_13, NULL);
		int32_t L_15;
		L_15 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_9, L_14, NULL);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)32))))
		{
			goto IL_00d3;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17 = ___0_A;
		NullCheck(L_17);
		int32_t L_18 = L_17->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_19 = ___1_B;
		NullCheck(L_19);
		int32_t L_20 = L_19->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21;
		L_21 = Matrix_ZeroMatrix_m01B5A5BB65FDA47E9E3A1E85169B929E71F33F11(L_18, L_20, NULL);
		V_0 = L_21;
		V_7 = 0;
		goto IL_00c7;
	}

IL_0060:
	{
		V_8 = 0;
		goto IL_00b7;
	}

IL_0065:
	{
		V_9 = 0;
		goto IL_00a7;
	}

IL_006a:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22 = V_0;
		V_10 = L_22;
		int32_t L_23 = V_7;
		V_11 = L_23;
		int32_t L_24 = V_8;
		V_12 = L_24;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_25 = V_10;
		int32_t L_26 = V_11;
		int32_t L_27 = V_12;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_28 = V_10;
		int32_t L_29 = V_11;
		int32_t L_30 = V_12;
		NullCheck(L_28);
		double L_31;
		L_31 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_28, L_29, L_30, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_32 = ___0_A;
		int32_t L_33 = V_7;
		int32_t L_34 = V_9;
		NullCheck(L_32);
		double L_35;
		L_35 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_32, L_33, L_34, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_36 = ___1_B;
		int32_t L_37 = V_9;
		int32_t L_38 = V_8;
		NullCheck(L_36);
		double L_39;
		L_39 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_36, L_37, L_38, NULL);
		NullCheck(L_25);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_25, L_26, L_27, ((double)il2cpp_codegen_add(L_31, ((double)il2cpp_codegen_multiply(L_35, L_39)))), NULL);
		int32_t L_40 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00a7:
	{
		int32_t L_41 = V_9;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_42 = ___0_A;
		NullCheck(L_42);
		int32_t L_43 = L_42->___cols;
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_44 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00b7:
	{
		int32_t L_45 = V_8;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_46 = V_0;
		NullCheck(L_46);
		int32_t L_47 = L_46->___cols;
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_48 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00c7:
	{
		int32_t L_49 = V_7;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->___rows;
		if ((((int32_t)L_49) < ((int32_t)L_51)))
		{
			goto IL_0060;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_52 = V_0;
		return L_52;
	}

IL_00d3:
	{
		V_2 = 1;
		V_3 = 0;
		goto IL_00e1;
	}

IL_00d9:
	{
		int32_t L_53 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_53, 2));
		int32_t L_54 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00e1:
	{
		int32_t L_55 = V_1;
		int32_t L_56 = V_2;
		if ((((int32_t)L_55) > ((int32_t)L_56)))
		{
			goto IL_00d9;
		}
	}
	{
		int32_t L_57 = V_2;
		V_4 = ((int32_t)(L_57/2));
		int32_t L_58 = V_3;
		il2cpp_array_size_t L_60[] = { (il2cpp_array_size_t)L_58, (il2cpp_array_size_t)((int32_t)9) };
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_59 = (MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167*)GenArrayNew(MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167_il2cpp_TypeInfo_var, L_60);
		V_5 = L_59;
		V_13 = 0;
		goto IL_013c;
	}

IL_00f9:
	{
		int32_t L_61 = V_3;
		int32_t L_62 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_63;
		L_63 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((2.0), ((double)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_61, L_62)), 1))), NULL);
		V_6 = il2cpp_codegen_cast_double_to_int<int32_t>(L_63);
		V_14 = 0;
		goto IL_0130;
	}

IL_0116:
	{
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_64 = V_5;
		int32_t L_65 = V_13;
		int32_t L_66 = V_14;
		int32_t L_67 = V_6;
		int32_t L_68 = V_6;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_69 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_69, L_67, L_68, NULL);
		NullCheck(L_64);
		(L_64)->SetAt(L_65, L_66, L_69);
		int32_t L_70 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_0130:
	{
		int32_t L_71 = V_14;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)9))))
		{
			goto IL_0116;
		}
	}
	{
		int32_t L_72 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_013c:
	{
		int32_t L_73 = V_13;
		int32_t L_74 = V_3;
		if ((((int32_t)L_73) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_74, 4)))))
		{
			goto IL_00f9;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_75 = ___0_A;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_76 = ___0_A;
		int32_t L_77 = V_4;
		int32_t L_78 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_79 = V_5;
		NullCheck(L_79);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_80;
		L_80 = (L_79)->GetAt(0, 0);
		int32_t L_81 = V_4;
		Matrix_SafeAplusBintoC_mE1F063305F7F9EC44A21E80026FCCB60C0163D96(L_75, 0, 0, L_76, L_77, L_78, L_80, L_81, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_82 = ___1_B;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_83 = ___1_B;
		int32_t L_84 = V_4;
		int32_t L_85 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_86 = V_5;
		NullCheck(L_86);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_87;
		L_87 = (L_86)->GetAt(0, 1);
		int32_t L_88 = V_4;
		Matrix_SafeAplusBintoC_mE1F063305F7F9EC44A21E80026FCCB60C0163D96(L_82, 0, 0, L_83, L_84, L_85, L_87, L_88, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_89 = V_5;
		NullCheck(L_89);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_90;
		L_90 = (L_89)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_91 = V_5;
		NullCheck(L_91);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_92;
		L_92 = (L_91)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_93 = V_5;
		NullCheck(L_93);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_94;
		L_94 = (L_93)->GetAt(0, 2);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_95 = V_5;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_90, L_92, L_94, 1, L_95, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_96 = ___0_A;
		int32_t L_97 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_98 = ___0_A;
		int32_t L_99 = V_4;
		int32_t L_100 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_101 = V_5;
		NullCheck(L_101);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_102;
		L_102 = (L_101)->GetAt(0, 0);
		int32_t L_103 = V_4;
		Matrix_SafeAplusBintoC_mE1F063305F7F9EC44A21E80026FCCB60C0163D96(L_96, 0, L_97, L_98, L_99, L_100, L_102, L_103, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_104 = ___1_B;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_105 = V_5;
		NullCheck(L_105);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_106;
		L_106 = (L_105)->GetAt(0, 1);
		int32_t L_107 = V_4;
		Matrix_SafeACopytoC_mB872951CA2A3495259E670D8884953DC0408A01F(L_104, 0, 0, L_106, L_107, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_108 = V_5;
		NullCheck(L_108);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_109;
		L_109 = (L_108)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_110 = V_5;
		NullCheck(L_110);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_111;
		L_111 = (L_110)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_112 = V_5;
		NullCheck(L_112);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_113;
		L_113 = (L_112)->GetAt(0, 3);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_114 = V_5;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_109, L_111, L_113, 1, L_114, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_115 = ___0_A;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_116 = V_5;
		NullCheck(L_116);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_117;
		L_117 = (L_116)->GetAt(0, 0);
		int32_t L_118 = V_4;
		Matrix_SafeACopytoC_mB872951CA2A3495259E670D8884953DC0408A01F(L_115, 0, 0, L_117, L_118, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_119 = ___1_B;
		int32_t L_120 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_121 = ___1_B;
		int32_t L_122 = V_4;
		int32_t L_123 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_124 = V_5;
		NullCheck(L_124);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_125;
		L_125 = (L_124)->GetAt(0, 1);
		int32_t L_126 = V_4;
		Matrix_SafeAminusBintoC_m4CBD0C863A8629D7CB779C1CF0AB28C6ABAEE39C(L_119, L_120, 0, L_121, L_122, L_123, L_125, L_126, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_127 = V_5;
		NullCheck(L_127);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_128;
		L_128 = (L_127)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_129 = V_5;
		NullCheck(L_129);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_130;
		L_130 = (L_129)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_131 = V_5;
		NullCheck(L_131);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_132;
		L_132 = (L_131)->GetAt(0, 4);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_133 = V_5;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_128, L_130, L_132, 1, L_133, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_134 = ___0_A;
		int32_t L_135 = V_4;
		int32_t L_136 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_137 = V_5;
		NullCheck(L_137);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_138;
		L_138 = (L_137)->GetAt(0, 0);
		int32_t L_139 = V_4;
		Matrix_SafeACopytoC_mB872951CA2A3495259E670D8884953DC0408A01F(L_134, L_135, L_136, L_138, L_139, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_140 = ___1_B;
		int32_t L_141 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_142 = ___1_B;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_143 = V_5;
		NullCheck(L_143);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_144;
		L_144 = (L_143)->GetAt(0, 1);
		int32_t L_145 = V_4;
		Matrix_SafeAminusBintoC_m4CBD0C863A8629D7CB779C1CF0AB28C6ABAEE39C(L_140, 0, L_141, L_142, 0, 0, L_144, L_145, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_146 = V_5;
		NullCheck(L_146);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_147;
		L_147 = (L_146)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_148 = V_5;
		NullCheck(L_148);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_149;
		L_149 = (L_148)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_150 = V_5;
		NullCheck(L_150);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_151;
		L_151 = (L_150)->GetAt(0, 5);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_152 = V_5;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_147, L_149, L_151, 1, L_152, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_153 = ___0_A;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_154 = ___0_A;
		int32_t L_155 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_156 = V_5;
		NullCheck(L_156);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_157;
		L_157 = (L_156)->GetAt(0, 0);
		int32_t L_158 = V_4;
		Matrix_SafeAplusBintoC_mE1F063305F7F9EC44A21E80026FCCB60C0163D96(L_153, 0, 0, L_154, L_155, 0, L_157, L_158, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_159 = ___1_B;
		int32_t L_160 = V_4;
		int32_t L_161 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_162 = V_5;
		NullCheck(L_162);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_163;
		L_163 = (L_162)->GetAt(0, 1);
		int32_t L_164 = V_4;
		Matrix_SafeACopytoC_mB872951CA2A3495259E670D8884953DC0408A01F(L_159, L_160, L_161, L_163, L_164, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_165 = V_5;
		NullCheck(L_165);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_166;
		L_166 = (L_165)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_167 = V_5;
		NullCheck(L_167);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_168;
		L_168 = (L_167)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_169 = V_5;
		NullCheck(L_169);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_170;
		L_170 = (L_169)->GetAt(0, 6);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_171 = V_5;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_166, L_168, L_170, 1, L_171, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_172 = ___0_A;
		int32_t L_173 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_174 = ___0_A;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_175 = V_5;
		NullCheck(L_175);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_176;
		L_176 = (L_175)->GetAt(0, 0);
		int32_t L_177 = V_4;
		Matrix_SafeAminusBintoC_m4CBD0C863A8629D7CB779C1CF0AB28C6ABAEE39C(L_172, 0, L_173, L_174, 0, 0, L_176, L_177, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_178 = ___1_B;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_179 = ___1_B;
		int32_t L_180 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_181 = V_5;
		NullCheck(L_181);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_182;
		L_182 = (L_181)->GetAt(0, 1);
		int32_t L_183 = V_4;
		Matrix_SafeAplusBintoC_mE1F063305F7F9EC44A21E80026FCCB60C0163D96(L_178, 0, 0, L_179, L_180, 0, L_182, L_183, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_184 = V_5;
		NullCheck(L_184);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_185;
		L_185 = (L_184)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_186 = V_5;
		NullCheck(L_186);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_187;
		L_187 = (L_186)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_188 = V_5;
		NullCheck(L_188);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_189;
		L_189 = (L_188)->GetAt(0, 7);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_190 = V_5;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_185, L_187, L_189, 1, L_190, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_191 = ___0_A;
		int32_t L_192 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_193 = ___0_A;
		int32_t L_194 = V_4;
		int32_t L_195 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_196 = V_5;
		NullCheck(L_196);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_197;
		L_197 = (L_196)->GetAt(0, 0);
		int32_t L_198 = V_4;
		Matrix_SafeAminusBintoC_m4CBD0C863A8629D7CB779C1CF0AB28C6ABAEE39C(L_191, L_192, 0, L_193, L_194, L_195, L_197, L_198, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_199 = ___1_B;
		int32_t L_200 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_201 = ___1_B;
		int32_t L_202 = V_4;
		int32_t L_203 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_204 = V_5;
		NullCheck(L_204);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_205;
		L_205 = (L_204)->GetAt(0, 1);
		int32_t L_206 = V_4;
		Matrix_SafeAplusBintoC_mE1F063305F7F9EC44A21E80026FCCB60C0163D96(L_199, 0, L_200, L_201, L_202, L_203, L_205, L_206, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_207 = V_5;
		NullCheck(L_207);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_208;
		L_208 = (L_207)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_209 = V_5;
		NullCheck(L_209);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_210;
		L_210 = (L_209)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_211 = V_5;
		NullCheck(L_211);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_212;
		L_212 = (L_211)->GetAt(0, 8);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_213 = V_5;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_208, L_210, L_212, 1, L_213, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_214 = ___0_A;
		NullCheck(L_214);
		int32_t L_215 = L_214->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_216 = ___1_B;
		NullCheck(L_216);
		int32_t L_217 = L_216->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_218 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_218, L_215, L_217, NULL);
		V_0 = L_218;
		V_15 = 0;
		goto IL_0406;
	}

IL_038f:
	{
		V_16 = 0;
		goto IL_03ef;
	}

IL_0394:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_219 = V_0;
		int32_t L_220 = V_15;
		int32_t L_221 = V_16;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_222 = V_5;
		NullCheck(L_222);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_223;
		L_223 = (L_222)->GetAt(0, 2);
		int32_t L_224 = V_15;
		int32_t L_225 = V_16;
		NullCheck(L_223);
		double L_226;
		L_226 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_223, L_224, L_225, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_227 = V_5;
		NullCheck(L_227);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_228;
		L_228 = (L_227)->GetAt(0, 5);
		int32_t L_229 = V_15;
		int32_t L_230 = V_16;
		NullCheck(L_228);
		double L_231;
		L_231 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_228, L_229, L_230, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_232 = V_5;
		NullCheck(L_232);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_233;
		L_233 = (L_232)->GetAt(0, 6);
		int32_t L_234 = V_15;
		int32_t L_235 = V_16;
		NullCheck(L_233);
		double L_236;
		L_236 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_233, L_234, L_235, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_237 = V_5;
		NullCheck(L_237);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_238;
		L_238 = (L_237)->GetAt(0, 8);
		int32_t L_239 = V_15;
		int32_t L_240 = V_16;
		NullCheck(L_238);
		double L_241;
		L_241 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_238, L_239, L_240, NULL);
		NullCheck(L_219);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_219, L_220, L_221, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_226, L_231)), L_236)), L_241)), NULL);
		int32_t L_242 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_242, 1));
	}

IL_03ef:
	{
		int32_t L_243 = V_16;
		int32_t L_244 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_245 = V_0;
		NullCheck(L_245);
		int32_t L_246 = L_245->___cols;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_247;
		L_247 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_244, L_246, NULL);
		if ((((int32_t)L_243) < ((int32_t)L_247)))
		{
			goto IL_0394;
		}
	}
	{
		int32_t L_248 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_248, 1));
	}

IL_0406:
	{
		int32_t L_249 = V_15;
		int32_t L_250 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_251 = V_0;
		NullCheck(L_251);
		int32_t L_252 = L_251->___rows;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_253;
		L_253 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_250, L_252, NULL);
		if ((((int32_t)L_249) < ((int32_t)L_253)))
		{
			goto IL_038f;
		}
	}
	{
		V_17 = 0;
		goto IL_0479;
	}

IL_041f:
	{
		int32_t L_254 = V_4;
		V_18 = L_254;
		goto IL_0460;
	}

IL_0425:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_255 = V_0;
		int32_t L_256 = V_17;
		int32_t L_257 = V_18;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_258 = V_5;
		NullCheck(L_258);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_259;
		L_259 = (L_258)->GetAt(0, 4);
		int32_t L_260 = V_17;
		int32_t L_261 = V_18;
		int32_t L_262 = V_4;
		NullCheck(L_259);
		double L_263;
		L_263 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_259, L_260, ((int32_t)il2cpp_codegen_subtract(L_261, L_262)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_264 = V_5;
		NullCheck(L_264);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_265;
		L_265 = (L_264)->GetAt(0, 6);
		int32_t L_266 = V_17;
		int32_t L_267 = V_18;
		int32_t L_268 = V_4;
		NullCheck(L_265);
		double L_269;
		L_269 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_265, L_266, ((int32_t)il2cpp_codegen_subtract(L_267, L_268)), NULL);
		NullCheck(L_255);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_255, L_256, L_257, ((double)il2cpp_codegen_add(L_263, L_269)), NULL);
		int32_t L_270 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_270, 1));
	}

IL_0460:
	{
		int32_t L_271 = V_18;
		int32_t L_272 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_273 = V_0;
		NullCheck(L_273);
		int32_t L_274 = L_273->___cols;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_275;
		L_275 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_multiply(2, L_272)), L_274, NULL);
		if ((((int32_t)L_271) < ((int32_t)L_275)))
		{
			goto IL_0425;
		}
	}
	{
		int32_t L_276 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_276, 1));
	}

IL_0479:
	{
		int32_t L_277 = V_17;
		int32_t L_278 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_279 = V_0;
		NullCheck(L_279);
		int32_t L_280 = L_279->___rows;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_281;
		L_281 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_278, L_280, NULL);
		if ((((int32_t)L_277) < ((int32_t)L_281)))
		{
			goto IL_041f;
		}
	}
	{
		int32_t L_282 = V_4;
		V_19 = L_282;
		goto IL_04e7;
	}

IL_0490:
	{
		V_20 = 0;
		goto IL_04d0;
	}

IL_0495:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_283 = V_0;
		int32_t L_284 = V_19;
		int32_t L_285 = V_20;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_286 = V_5;
		NullCheck(L_286);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_287;
		L_287 = (L_286)->GetAt(0, 3);
		int32_t L_288 = V_19;
		int32_t L_289 = V_4;
		int32_t L_290 = V_20;
		NullCheck(L_287);
		double L_291;
		L_291 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_287, ((int32_t)il2cpp_codegen_subtract(L_288, L_289)), L_290, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_292 = V_5;
		NullCheck(L_292);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_293;
		L_293 = (L_292)->GetAt(0, 5);
		int32_t L_294 = V_19;
		int32_t L_295 = V_4;
		int32_t L_296 = V_20;
		NullCheck(L_293);
		double L_297;
		L_297 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_293, ((int32_t)il2cpp_codegen_subtract(L_294, L_295)), L_296, NULL);
		NullCheck(L_283);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_283, L_284, L_285, ((double)il2cpp_codegen_add(L_291, L_297)), NULL);
		int32_t L_298 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_298, 1));
	}

IL_04d0:
	{
		int32_t L_299 = V_20;
		int32_t L_300 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_301 = V_0;
		NullCheck(L_301);
		int32_t L_302 = L_301->___cols;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_303;
		L_303 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_300, L_302, NULL);
		if ((((int32_t)L_299) < ((int32_t)L_303)))
		{
			goto IL_0495;
		}
	}
	{
		int32_t L_304 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_304, 1));
	}

IL_04e7:
	{
		int32_t L_305 = V_19;
		int32_t L_306 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_307 = V_0;
		NullCheck(L_307);
		int32_t L_308 = L_307->___rows;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_309;
		L_309 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_multiply(2, L_306)), L_308, NULL);
		if ((((int32_t)L_305) < ((int32_t)L_309)))
		{
			goto IL_0490;
		}
	}
	{
		int32_t L_310 = V_4;
		V_21 = L_310;
		goto IL_0598;
	}

IL_0503:
	{
		int32_t L_311 = V_4;
		V_22 = L_311;
		goto IL_057c;
	}

IL_0509:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_312 = V_0;
		int32_t L_313 = V_21;
		int32_t L_314 = V_22;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_315 = V_5;
		NullCheck(L_315);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_316;
		L_316 = (L_315)->GetAt(0, 2);
		int32_t L_317 = V_21;
		int32_t L_318 = V_4;
		int32_t L_319 = V_22;
		int32_t L_320 = V_4;
		NullCheck(L_316);
		double L_321;
		L_321 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_316, ((int32_t)il2cpp_codegen_subtract(L_317, L_318)), ((int32_t)il2cpp_codegen_subtract(L_319, L_320)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_322 = V_5;
		NullCheck(L_322);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_323;
		L_323 = (L_322)->GetAt(0, 3);
		int32_t L_324 = V_21;
		int32_t L_325 = V_4;
		int32_t L_326 = V_22;
		int32_t L_327 = V_4;
		NullCheck(L_323);
		double L_328;
		L_328 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_323, ((int32_t)il2cpp_codegen_subtract(L_324, L_325)), ((int32_t)il2cpp_codegen_subtract(L_326, L_327)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_329 = V_5;
		NullCheck(L_329);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_330;
		L_330 = (L_329)->GetAt(0, 4);
		int32_t L_331 = V_21;
		int32_t L_332 = V_4;
		int32_t L_333 = V_22;
		int32_t L_334 = V_4;
		NullCheck(L_330);
		double L_335;
		L_335 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_330, ((int32_t)il2cpp_codegen_subtract(L_331, L_332)), ((int32_t)il2cpp_codegen_subtract(L_333, L_334)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_336 = V_5;
		NullCheck(L_336);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_337;
		L_337 = (L_336)->GetAt(0, 7);
		int32_t L_338 = V_21;
		int32_t L_339 = V_4;
		int32_t L_340 = V_22;
		int32_t L_341 = V_4;
		NullCheck(L_337);
		double L_342;
		L_342 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_337, ((int32_t)il2cpp_codegen_subtract(L_338, L_339)), ((int32_t)il2cpp_codegen_subtract(L_340, L_341)), NULL);
		NullCheck(L_312);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_312, L_313, L_314, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(L_321, L_328)), L_335)), L_342)), NULL);
		int32_t L_343 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_343, 1));
	}

IL_057c:
	{
		int32_t L_344 = V_22;
		int32_t L_345 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_346 = V_0;
		NullCheck(L_346);
		int32_t L_347 = L_346->___cols;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_348;
		L_348 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_multiply(2, L_345)), L_347, NULL);
		if ((((int32_t)L_344) < ((int32_t)L_348)))
		{
			goto IL_0509;
		}
	}
	{
		int32_t L_349 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_349, 1));
	}

IL_0598:
	{
		int32_t L_350 = V_21;
		int32_t L_351 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_352 = V_0;
		NullCheck(L_352);
		int32_t L_353 = L_352->___rows;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_354;
		L_354 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_multiply(2, L_351)), L_353, NULL);
		if ((((int32_t)L_350) < ((int32_t)L_354)))
		{
			goto IL_0503;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_355 = V_0;
		return L_355;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_A, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_B, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___2_C, int32_t ___3_l, MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* ___4_f, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_A;
		NullCheck(L_0);
		int32_t L_1 = L_0->___rows;
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)32))))
		{
			goto IL_008c;
		}
	}
	{
		V_2 = 0;
		goto IL_0082;
	}

IL_0014:
	{
		V_3 = 0;
		goto IL_0075;
	}

IL_0018:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = ___2_C;
		int32_t L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_4);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_4, L_5, L_6, (0.0), NULL);
		V_4 = 0;
		goto IL_0067;
	}

IL_002e:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7 = ___2_C;
		V_5 = L_7;
		int32_t L_8 = V_2;
		V_6 = L_8;
		int32_t L_9 = V_3;
		V_7 = L_9;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = V_5;
		int32_t L_11 = V_6;
		int32_t L_12 = V_7;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = V_5;
		int32_t L_14 = V_6;
		int32_t L_15 = V_7;
		NullCheck(L_13);
		double L_16;
		L_16 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_13, L_14, L_15, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17 = ___0_A;
		int32_t L_18 = V_2;
		int32_t L_19 = V_4;
		NullCheck(L_17);
		double L_20;
		L_20 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_17, L_18, L_19, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21 = ___1_B;
		int32_t L_22 = V_4;
		int32_t L_23 = V_3;
		NullCheck(L_21);
		double L_24;
		L_24 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_21, L_22, L_23, NULL);
		NullCheck(L_10);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_10, L_11, L_12, ((double)il2cpp_codegen_add(L_16, ((double)il2cpp_codegen_multiply(L_20, L_24)))), NULL);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0067:
	{
		int32_t L_26 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_27 = ___0_A;
		NullCheck(L_27);
		int32_t L_28 = L_27->___cols;
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0075:
	{
		int32_t L_30 = V_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_31 = ___2_C;
		NullCheck(L_31);
		int32_t L_32 = L_31->___cols;
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0082:
	{
		int32_t L_34 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_35 = ___2_C;
		NullCheck(L_35);
		int32_t L_36 = L_35->___rows;
		if ((((int32_t)L_34) < ((int32_t)L_36)))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_008c:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_37 = ___0_A;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_38 = ___0_A;
		int32_t L_39 = V_1;
		int32_t L_40 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_41 = ___4_f;
		int32_t L_42 = ___3_l;
		NullCheck(L_41);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_43;
		L_43 = (L_41)->GetAt(L_42, 0);
		int32_t L_44 = V_1;
		Matrix_AplusBintoC_m953E50C055EDCE98CDA6636E5B4043DDA8931C9F(L_37, 0, 0, L_38, L_39, L_40, L_43, L_44, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_45 = ___1_B;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_46 = ___1_B;
		int32_t L_47 = V_1;
		int32_t L_48 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_49 = ___4_f;
		int32_t L_50 = ___3_l;
		NullCheck(L_49);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_51;
		L_51 = (L_49)->GetAt(L_50, 1);
		int32_t L_52 = V_1;
		Matrix_AplusBintoC_m953E50C055EDCE98CDA6636E5B4043DDA8931C9F(L_45, 0, 0, L_46, L_47, L_48, L_51, L_52, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_53 = ___4_f;
		int32_t L_54 = ___3_l;
		NullCheck(L_53);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_55;
		L_55 = (L_53)->GetAt(L_54, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_56 = ___4_f;
		int32_t L_57 = ___3_l;
		NullCheck(L_56);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_58;
		L_58 = (L_56)->GetAt(L_57, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_59 = ___4_f;
		int32_t L_60 = ___3_l;
		NullCheck(L_59);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_61;
		L_61 = (L_59)->GetAt(L_60, 2);
		int32_t L_62 = ___3_l;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_63 = ___4_f;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_55, L_58, L_61, ((int32_t)il2cpp_codegen_add(L_62, 1)), L_63, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_64 = ___0_A;
		int32_t L_65 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_66 = ___0_A;
		int32_t L_67 = V_1;
		int32_t L_68 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_69 = ___4_f;
		int32_t L_70 = ___3_l;
		NullCheck(L_69);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_71;
		L_71 = (L_69)->GetAt(L_70, 0);
		int32_t L_72 = V_1;
		Matrix_AplusBintoC_m953E50C055EDCE98CDA6636E5B4043DDA8931C9F(L_64, 0, L_65, L_66, L_67, L_68, L_71, L_72, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_73 = ___1_B;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_74 = ___4_f;
		int32_t L_75 = ___3_l;
		NullCheck(L_74);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_76;
		L_76 = (L_74)->GetAt(L_75, 1);
		int32_t L_77 = V_1;
		Matrix_ACopytoC_m1BB56E7C1E94F664279F180D647076AA087BDDEB(L_73, 0, 0, L_76, L_77, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_78 = ___4_f;
		int32_t L_79 = ___3_l;
		NullCheck(L_78);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_80;
		L_80 = (L_78)->GetAt(L_79, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_81 = ___4_f;
		int32_t L_82 = ___3_l;
		NullCheck(L_81);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_83;
		L_83 = (L_81)->GetAt(L_82, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_84 = ___4_f;
		int32_t L_85 = ___3_l;
		NullCheck(L_84);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_86;
		L_86 = (L_84)->GetAt(L_85, 3);
		int32_t L_87 = ___3_l;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_88 = ___4_f;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_80, L_83, L_86, ((int32_t)il2cpp_codegen_add(L_87, 1)), L_88, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_89 = ___0_A;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_90 = ___4_f;
		int32_t L_91 = ___3_l;
		NullCheck(L_90);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_92;
		L_92 = (L_90)->GetAt(L_91, 0);
		int32_t L_93 = V_1;
		Matrix_ACopytoC_m1BB56E7C1E94F664279F180D647076AA087BDDEB(L_89, 0, 0, L_92, L_93, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_94 = ___1_B;
		int32_t L_95 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_96 = ___1_B;
		int32_t L_97 = V_1;
		int32_t L_98 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_99 = ___4_f;
		int32_t L_100 = ___3_l;
		NullCheck(L_99);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_101;
		L_101 = (L_99)->GetAt(L_100, 1);
		int32_t L_102 = V_1;
		Matrix_AminusBintoC_mD357E0BAB64446BA580358CA50012DB6E4EA5EA2(L_94, L_95, 0, L_96, L_97, L_98, L_101, L_102, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_103 = ___4_f;
		int32_t L_104 = ___3_l;
		NullCheck(L_103);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_105;
		L_105 = (L_103)->GetAt(L_104, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_106 = ___4_f;
		int32_t L_107 = ___3_l;
		NullCheck(L_106);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_108;
		L_108 = (L_106)->GetAt(L_107, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_109 = ___4_f;
		int32_t L_110 = ___3_l;
		NullCheck(L_109);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_111;
		L_111 = (L_109)->GetAt(L_110, 4);
		int32_t L_112 = ___3_l;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_113 = ___4_f;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_105, L_108, L_111, ((int32_t)il2cpp_codegen_add(L_112, 1)), L_113, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_114 = ___0_A;
		int32_t L_115 = V_1;
		int32_t L_116 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_117 = ___4_f;
		int32_t L_118 = ___3_l;
		NullCheck(L_117);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_119;
		L_119 = (L_117)->GetAt(L_118, 0);
		int32_t L_120 = V_1;
		Matrix_ACopytoC_m1BB56E7C1E94F664279F180D647076AA087BDDEB(L_114, L_115, L_116, L_119, L_120, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_121 = ___1_B;
		int32_t L_122 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_123 = ___1_B;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_124 = ___4_f;
		int32_t L_125 = ___3_l;
		NullCheck(L_124);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_126;
		L_126 = (L_124)->GetAt(L_125, 1);
		int32_t L_127 = V_1;
		Matrix_AminusBintoC_mD357E0BAB64446BA580358CA50012DB6E4EA5EA2(L_121, 0, L_122, L_123, 0, 0, L_126, L_127, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_128 = ___4_f;
		int32_t L_129 = ___3_l;
		NullCheck(L_128);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_130;
		L_130 = (L_128)->GetAt(L_129, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_131 = ___4_f;
		int32_t L_132 = ___3_l;
		NullCheck(L_131);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_133;
		L_133 = (L_131)->GetAt(L_132, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_134 = ___4_f;
		int32_t L_135 = ___3_l;
		NullCheck(L_134);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_136;
		L_136 = (L_134)->GetAt(L_135, 5);
		int32_t L_137 = ___3_l;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_138 = ___4_f;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_130, L_133, L_136, ((int32_t)il2cpp_codegen_add(L_137, 1)), L_138, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_139 = ___0_A;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_140 = ___0_A;
		int32_t L_141 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_142 = ___4_f;
		int32_t L_143 = ___3_l;
		NullCheck(L_142);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_144;
		L_144 = (L_142)->GetAt(L_143, 0);
		int32_t L_145 = V_1;
		Matrix_AplusBintoC_m953E50C055EDCE98CDA6636E5B4043DDA8931C9F(L_139, 0, 0, L_140, L_141, 0, L_144, L_145, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_146 = ___1_B;
		int32_t L_147 = V_1;
		int32_t L_148 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_149 = ___4_f;
		int32_t L_150 = ___3_l;
		NullCheck(L_149);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_151;
		L_151 = (L_149)->GetAt(L_150, 1);
		int32_t L_152 = V_1;
		Matrix_ACopytoC_m1BB56E7C1E94F664279F180D647076AA087BDDEB(L_146, L_147, L_148, L_151, L_152, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_153 = ___4_f;
		int32_t L_154 = ___3_l;
		NullCheck(L_153);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_155;
		L_155 = (L_153)->GetAt(L_154, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_156 = ___4_f;
		int32_t L_157 = ___3_l;
		NullCheck(L_156);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_158;
		L_158 = (L_156)->GetAt(L_157, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_159 = ___4_f;
		int32_t L_160 = ___3_l;
		NullCheck(L_159);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_161;
		L_161 = (L_159)->GetAt(L_160, 6);
		int32_t L_162 = ___3_l;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_163 = ___4_f;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_155, L_158, L_161, ((int32_t)il2cpp_codegen_add(L_162, 1)), L_163, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_164 = ___0_A;
		int32_t L_165 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_166 = ___0_A;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_167 = ___4_f;
		int32_t L_168 = ___3_l;
		NullCheck(L_167);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_169;
		L_169 = (L_167)->GetAt(L_168, 0);
		int32_t L_170 = V_1;
		Matrix_AminusBintoC_mD357E0BAB64446BA580358CA50012DB6E4EA5EA2(L_164, 0, L_165, L_166, 0, 0, L_169, L_170, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_171 = ___1_B;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_172 = ___1_B;
		int32_t L_173 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_174 = ___4_f;
		int32_t L_175 = ___3_l;
		NullCheck(L_174);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_176;
		L_176 = (L_174)->GetAt(L_175, 1);
		int32_t L_177 = V_1;
		Matrix_AplusBintoC_m953E50C055EDCE98CDA6636E5B4043DDA8931C9F(L_171, 0, 0, L_172, L_173, 0, L_176, L_177, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_178 = ___4_f;
		int32_t L_179 = ___3_l;
		NullCheck(L_178);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_180;
		L_180 = (L_178)->GetAt(L_179, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_181 = ___4_f;
		int32_t L_182 = ___3_l;
		NullCheck(L_181);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_183;
		L_183 = (L_181)->GetAt(L_182, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_184 = ___4_f;
		int32_t L_185 = ___3_l;
		NullCheck(L_184);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_186;
		L_186 = (L_184)->GetAt(L_185, 7);
		int32_t L_187 = ___3_l;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_188 = ___4_f;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_180, L_183, L_186, ((int32_t)il2cpp_codegen_add(L_187, 1)), L_188, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_189 = ___0_A;
		int32_t L_190 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_191 = ___0_A;
		int32_t L_192 = V_1;
		int32_t L_193 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_194 = ___4_f;
		int32_t L_195 = ___3_l;
		NullCheck(L_194);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_196;
		L_196 = (L_194)->GetAt(L_195, 0);
		int32_t L_197 = V_1;
		Matrix_AminusBintoC_mD357E0BAB64446BA580358CA50012DB6E4EA5EA2(L_189, L_190, 0, L_191, L_192, L_193, L_196, L_197, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_198 = ___1_B;
		int32_t L_199 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_200 = ___1_B;
		int32_t L_201 = V_1;
		int32_t L_202 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_203 = ___4_f;
		int32_t L_204 = ___3_l;
		NullCheck(L_203);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_205;
		L_205 = (L_203)->GetAt(L_204, 1);
		int32_t L_206 = V_1;
		Matrix_AplusBintoC_m953E50C055EDCE98CDA6636E5B4043DDA8931C9F(L_198, 0, L_199, L_200, L_201, L_202, L_205, L_206, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_207 = ___4_f;
		int32_t L_208 = ___3_l;
		NullCheck(L_207);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_209;
		L_209 = (L_207)->GetAt(L_208, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_210 = ___4_f;
		int32_t L_211 = ___3_l;
		NullCheck(L_210);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_212;
		L_212 = (L_210)->GetAt(L_211, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_213 = ___4_f;
		int32_t L_214 = ___3_l;
		NullCheck(L_213);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_215;
		L_215 = (L_213)->GetAt(L_214, 8);
		int32_t L_216 = ___3_l;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_217 = ___4_f;
		Matrix_StrassenMultiplyRun_m54CFEEA3633D3C01EAD33208B0860A970BDBC225(L_209, L_212, L_215, ((int32_t)il2cpp_codegen_add(L_216, 1)), L_217, NULL);
		V_8 = 0;
		goto IL_0319;
	}

IL_02ae:
	{
		V_9 = 0;
		goto IL_030e;
	}

IL_02b3:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_218 = ___2_C;
		int32_t L_219 = V_8;
		int32_t L_220 = V_9;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_221 = ___4_f;
		int32_t L_222 = ___3_l;
		NullCheck(L_221);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_223;
		L_223 = (L_221)->GetAt(L_222, 2);
		int32_t L_224 = V_8;
		int32_t L_225 = V_9;
		NullCheck(L_223);
		double L_226;
		L_226 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_223, L_224, L_225, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_227 = ___4_f;
		int32_t L_228 = ___3_l;
		NullCheck(L_227);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_229;
		L_229 = (L_227)->GetAt(L_228, 5);
		int32_t L_230 = V_8;
		int32_t L_231 = V_9;
		NullCheck(L_229);
		double L_232;
		L_232 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_229, L_230, L_231, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_233 = ___4_f;
		int32_t L_234 = ___3_l;
		NullCheck(L_233);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_235;
		L_235 = (L_233)->GetAt(L_234, 6);
		int32_t L_236 = V_8;
		int32_t L_237 = V_9;
		NullCheck(L_235);
		double L_238;
		L_238 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_235, L_236, L_237, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_239 = ___4_f;
		int32_t L_240 = ___3_l;
		NullCheck(L_239);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_241;
		L_241 = (L_239)->GetAt(L_240, 8);
		int32_t L_242 = V_8;
		int32_t L_243 = V_9;
		NullCheck(L_241);
		double L_244;
		L_244 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_241, L_242, L_243, NULL);
		NullCheck(L_218);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_218, L_219, L_220, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_226, L_232)), L_238)), L_244)), NULL);
		int32_t L_245 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_245, 1));
	}

IL_030e:
	{
		int32_t L_246 = V_9;
		int32_t L_247 = V_1;
		if ((((int32_t)L_246) < ((int32_t)L_247)))
		{
			goto IL_02b3;
		}
	}
	{
		int32_t L_248 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_248, 1));
	}

IL_0319:
	{
		int32_t L_249 = V_8;
		int32_t L_250 = V_1;
		if ((((int32_t)L_249) < ((int32_t)L_250)))
		{
			goto IL_02ae;
		}
	}
	{
		V_10 = 0;
		goto IL_036c;
	}

IL_0323:
	{
		int32_t L_251 = V_1;
		V_11 = L_251;
		goto IL_0361;
	}

IL_0328:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_252 = ___2_C;
		int32_t L_253 = V_10;
		int32_t L_254 = V_11;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_255 = ___4_f;
		int32_t L_256 = ___3_l;
		NullCheck(L_255);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_257;
		L_257 = (L_255)->GetAt(L_256, 4);
		int32_t L_258 = V_10;
		int32_t L_259 = V_11;
		int32_t L_260 = V_1;
		NullCheck(L_257);
		double L_261;
		L_261 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_257, L_258, ((int32_t)il2cpp_codegen_subtract(L_259, L_260)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_262 = ___4_f;
		int32_t L_263 = ___3_l;
		NullCheck(L_262);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_264;
		L_264 = (L_262)->GetAt(L_263, 6);
		int32_t L_265 = V_10;
		int32_t L_266 = V_11;
		int32_t L_267 = V_1;
		NullCheck(L_264);
		double L_268;
		L_268 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_264, L_265, ((int32_t)il2cpp_codegen_subtract(L_266, L_267)), NULL);
		NullCheck(L_252);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_252, L_253, L_254, ((double)il2cpp_codegen_add(L_261, L_268)), NULL);
		int32_t L_269 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_269, 1));
	}

IL_0361:
	{
		int32_t L_270 = V_11;
		int32_t L_271 = V_0;
		if ((((int32_t)L_270) < ((int32_t)L_271)))
		{
			goto IL_0328;
		}
	}
	{
		int32_t L_272 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_272, 1));
	}

IL_036c:
	{
		int32_t L_273 = V_10;
		int32_t L_274 = V_1;
		if ((((int32_t)L_273) < ((int32_t)L_274)))
		{
			goto IL_0323;
		}
	}
	{
		int32_t L_275 = V_1;
		V_12 = L_275;
		goto IL_03bf;
	}

IL_0376:
	{
		V_13 = 0;
		goto IL_03b4;
	}

IL_037b:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_276 = ___2_C;
		int32_t L_277 = V_12;
		int32_t L_278 = V_13;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_279 = ___4_f;
		int32_t L_280 = ___3_l;
		NullCheck(L_279);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_281;
		L_281 = (L_279)->GetAt(L_280, 3);
		int32_t L_282 = V_12;
		int32_t L_283 = V_1;
		int32_t L_284 = V_13;
		NullCheck(L_281);
		double L_285;
		L_285 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_281, ((int32_t)il2cpp_codegen_subtract(L_282, L_283)), L_284, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_286 = ___4_f;
		int32_t L_287 = ___3_l;
		NullCheck(L_286);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_288;
		L_288 = (L_286)->GetAt(L_287, 5);
		int32_t L_289 = V_12;
		int32_t L_290 = V_1;
		int32_t L_291 = V_13;
		NullCheck(L_288);
		double L_292;
		L_292 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_288, ((int32_t)il2cpp_codegen_subtract(L_289, L_290)), L_291, NULL);
		NullCheck(L_276);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_276, L_277, L_278, ((double)il2cpp_codegen_add(L_285, L_292)), NULL);
		int32_t L_293 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_293, 1));
	}

IL_03b4:
	{
		int32_t L_294 = V_13;
		int32_t L_295 = V_1;
		if ((((int32_t)L_294) < ((int32_t)L_295)))
		{
			goto IL_037b;
		}
	}
	{
		int32_t L_296 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_296, 1));
	}

IL_03bf:
	{
		int32_t L_297 = V_12;
		int32_t L_298 = V_0;
		if ((((int32_t)L_297) < ((int32_t)L_298)))
		{
			goto IL_0376;
		}
	}
	{
		int32_t L_299 = V_1;
		V_14 = L_299;
		goto IL_0444;
	}

IL_03c9:
	{
		int32_t L_300 = V_1;
		V_15 = L_300;
		goto IL_0439;
	}

IL_03ce:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_301 = ___2_C;
		int32_t L_302 = V_14;
		int32_t L_303 = V_15;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_304 = ___4_f;
		int32_t L_305 = ___3_l;
		NullCheck(L_304);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_306;
		L_306 = (L_304)->GetAt(L_305, 2);
		int32_t L_307 = V_14;
		int32_t L_308 = V_1;
		int32_t L_309 = V_15;
		int32_t L_310 = V_1;
		NullCheck(L_306);
		double L_311;
		L_311 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_306, ((int32_t)il2cpp_codegen_subtract(L_307, L_308)), ((int32_t)il2cpp_codegen_subtract(L_309, L_310)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_312 = ___4_f;
		int32_t L_313 = ___3_l;
		NullCheck(L_312);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_314;
		L_314 = (L_312)->GetAt(L_313, 3);
		int32_t L_315 = V_14;
		int32_t L_316 = V_1;
		int32_t L_317 = V_15;
		int32_t L_318 = V_1;
		NullCheck(L_314);
		double L_319;
		L_319 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_314, ((int32_t)il2cpp_codegen_subtract(L_315, L_316)), ((int32_t)il2cpp_codegen_subtract(L_317, L_318)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_320 = ___4_f;
		int32_t L_321 = ___3_l;
		NullCheck(L_320);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_322;
		L_322 = (L_320)->GetAt(L_321, 4);
		int32_t L_323 = V_14;
		int32_t L_324 = V_1;
		int32_t L_325 = V_15;
		int32_t L_326 = V_1;
		NullCheck(L_322);
		double L_327;
		L_327 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_322, ((int32_t)il2cpp_codegen_subtract(L_323, L_324)), ((int32_t)il2cpp_codegen_subtract(L_325, L_326)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_328 = ___4_f;
		int32_t L_329 = ___3_l;
		NullCheck(L_328);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_330;
		L_330 = (L_328)->GetAt(L_329, 7);
		int32_t L_331 = V_14;
		int32_t L_332 = V_1;
		int32_t L_333 = V_15;
		int32_t L_334 = V_1;
		NullCheck(L_330);
		double L_335;
		L_335 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_330, ((int32_t)il2cpp_codegen_subtract(L_331, L_332)), ((int32_t)il2cpp_codegen_subtract(L_333, L_334)), NULL);
		NullCheck(L_301);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_301, L_302, L_303, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(L_311, L_319)), L_327)), L_335)), NULL);
		int32_t L_336 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_336, 1));
	}

IL_0439:
	{
		int32_t L_337 = V_15;
		int32_t L_338 = V_0;
		if ((((int32_t)L_337) < ((int32_t)L_338)))
		{
			goto IL_03ce;
		}
	}
	{
		int32_t L_339 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_339, 1));
	}

IL_0444:
	{
		int32_t L_340 = V_14;
		int32_t L_341 = V_0;
		if ((((int32_t)L_340) < ((int32_t)L_341)))
		{
			goto IL_03c9;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_StupidMultiply_m4786B49050648DB86703381A3E2AACC7C47A9F1B (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_m2, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_m1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___1_m2;
		NullCheck(L_2);
		int32_t L_3 = L_2->___rows;
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0019;
		}
	}
	{
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_4 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55FFBF296F9AD0C93EE305CF1FB2E82961ABEE63)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_StupidMultiply_m4786B49050648DB86703381A3E2AACC7C47A9F1B_RuntimeMethod_var)));
	}

IL_0019:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = ___0_m1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7 = ___1_m2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9;
		L_9 = Matrix_ZeroMatrix_m01B5A5BB65FDA47E9E3A1E85169B929E71F33F11(L_6, L_8, NULL);
		V_0 = L_9;
		V_1 = 0;
		goto IL_0086;
	}

IL_002f:
	{
		V_2 = 0;
		goto IL_0079;
	}

IL_0033:
	{
		V_3 = 0;
		goto IL_006c;
	}

IL_0037:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = V_0;
		V_4 = L_10;
		int32_t L_11 = V_1;
		V_5 = L_11;
		int32_t L_12 = V_2;
		V_6 = L_12;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = V_4;
		int32_t L_14 = V_5;
		int32_t L_15 = V_6;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t L_18 = V_6;
		NullCheck(L_16);
		double L_19;
		L_19 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_16, L_17, L_18, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_20 = ___0_m1;
		int32_t L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_20);
		double L_23;
		L_23 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_20, L_21, L_22, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_24 = ___1_m2;
		int32_t L_25 = V_3;
		int32_t L_26 = V_2;
		NullCheck(L_24);
		double L_27;
		L_27 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_24, L_25, L_26, NULL);
		NullCheck(L_13);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_13, L_14, L_15, ((double)il2cpp_codegen_add(L_19, ((double)il2cpp_codegen_multiply(L_23, L_27)))), NULL);
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_006c:
	{
		int32_t L_29 = V_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_30 = ___0_m1;
		NullCheck(L_30);
		int32_t L_31 = L_30->___cols;
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0079:
	{
		int32_t L_33 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_34 = V_0;
		NullCheck(L_34);
		int32_t L_35 = L_34->___cols;
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0086:
	{
		int32_t L_37 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = L_38->___rows;
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_002f;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_40 = V_0;
		return L_40;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Multiply_m4F46EE6394F1BC1A4F797DE6FD9F245FC87E777B (double ___0_n, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_m, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___1_m;
		NullCheck(L_0);
		int32_t L_1 = L_0->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___1_m;
		NullCheck(L_2);
		int32_t L_3 = L_2->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_4, L_1, L_3, NULL);
		V_0 = L_4;
		V_1 = 0;
		goto IL_003d;
	}

IL_0016:
	{
		V_2 = 0;
		goto IL_0030;
	}

IL_001a:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8 = ___1_m;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		double L_11;
		L_11 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_8, L_9, L_10, NULL);
		double L_12 = ___0_n;
		NullCheck(L_5);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_5, L_6, L_7, ((double)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0030:
	{
		int32_t L_14 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = ___1_m;
		NullCheck(L_15);
		int32_t L_16 = L_15->___cols;
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_003d:
	{
		int32_t L_18 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_19 = ___1_m;
		NullCheck(L_19);
		int32_t L_20 = L_19->___rows;
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0016;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Add_m87E1DB9278B48C1DC42133F901BDEBF2CC74D9FC (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_m2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_m1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___1_m2;
		NullCheck(L_2);
		int32_t L_3 = L_2->___rows;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001c;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = ___0_m1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6 = ___1_m2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___cols;
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}

IL_001c:
	{
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_8 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9BF62289830E1D9ADF97C8F47896329C4AAC679)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_Add_m87E1DB9278B48C1DC42133F901BDEBF2CC74D9FC_RuntimeMethod_var)));
	}

IL_0027:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = ___0_m1;
		NullCheck(L_9);
		int32_t L_10 = L_9->___rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11 = ___0_m1;
		NullCheck(L_11);
		int32_t L_12 = L_11->___cols;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_13, L_10, L_12, NULL);
		V_0 = L_13;
		V_1 = 0;
		goto IL_006b;
	}

IL_003d:
	{
		V_2 = 0;
		goto IL_005e;
	}

IL_0041:
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17 = ___0_m1;
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		NullCheck(L_17);
		double L_20;
		L_20 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_17, L_18, L_19, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21 = ___1_m2;
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		NullCheck(L_21);
		double L_24;
		L_24 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_21, L_22, L_23, NULL);
		NullCheck(L_14);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_14, L_15, L_16, ((double)il2cpp_codegen_add(L_20, L_24)), NULL);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005e:
	{
		int32_t L_26 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = L_27->___cols;
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_006b:
	{
		int32_t L_30 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = L_31->___rows;
		if ((((int32_t)L_30) < ((int32_t)L_32)))
		{
			goto IL_003d;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_33 = V_0;
		return L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Matrix_NormalizeMatrixString_m2949C13F4C1C65CB8B90ADC7C22326A329C0C36D (String_t* ___0_matStr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2699ED079CDDEF57B48E372A3D47B5F3C372F78C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE95A453653E06120FE9E373182096BDCF774C95B);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0014;
	}

IL_0002:
	{
		String_t* L_0 = ___0_matStr;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_0, _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		___0_matStr = L_1;
	}

IL_0014:
	{
		String_t* L_2 = ___0_matStr;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_2, _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0002;
		}
	}
	{
		String_t* L_4 = ___0_matStr;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_4, _stringLiteralE95A453653E06120FE9E373182096BDCF774C95B, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		___0_matStr = L_5;
		String_t* L_6 = ___0_matStr;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, _stringLiteral2699ED079CDDEF57B48E372A3D47B5F3C372F78C, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		___0_matStr = L_7;
		String_t* L_8 = ___0_matStr;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_8, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		___0_matStr = L_9;
		goto IL_006b;
	}

IL_005a:
	{
		String_t* L_10 = ___0_matStr;
		String_t* L_11 = ___0_matStr;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		NullCheck(L_10);
		String_t* L_13;
		L_13 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_10, 0, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		___0_matStr = L_13;
	}

IL_006b:
	{
		String_t* L_14 = ___0_matStr;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_14, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		String_t* L_16 = ___0_matStr;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		if ((((int32_t)L_15) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, 1)))))
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_18 = ___0_matStr;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_18, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		___0_matStr = L_19;
		String_t* L_20 = ___0_matStr;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_CreateVector_m2B13C05D20F497282A773FB1344D14BF366C74CF (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_values, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___0_values;
		NullCheck(L_0);
		il2cpp_array_size_t L_2[] = { (il2cpp_array_size_t)((int32_t)(((RuntimeArray*)L_0)->max_length)), (il2cpp_array_size_t)1 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_1 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_2);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001d;
	}

IL_000e:
	{
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_3 = V_0;
		int32_t L_4 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = ___0_values;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		double L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		(L_3)->SetAt(L_4, 0, L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001d:
	{
		int32_t L_10 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = ___0_values;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_12 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_13, L_12, NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_UnaryNegation_m3DCA3D7D0C211B5C0C3B0623CDD476AB2C699886 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_m;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1;
		L_1 = Matrix_Multiply_m4F46EE6394F1BC1A4F797DE6FD9F245FC87E777B((-1.0), L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Addition_mF81196F71D0FFC038EF9ABE2D3CAA42AD12578C3 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_m2, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_m1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = ___1_m2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_Add_m87E1DB9278B48C1DC42133F901BDEBF2CC74D9FC(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Subtraction_m8EEFF949A66213F81D362A8AE90A0417B79FD20D (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_m2, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_m1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = ___1_m2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_op_UnaryNegation_m3DCA3D7D0C211B5C0C3B0623CDD476AB2C699886(L_1, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3;
		L_3 = Matrix_Add_m87E1DB9278B48C1DC42133F901BDEBF2CC74D9FC(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Multiply_m2A3E3ACE76015D93EB1135727BE8E7B012113920 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_m1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_m2, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_m1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = ___1_m2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_StrassenMultiply_m0D23EC73E81EFFD74F1AAFBB93B9A8A370081355(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Multiply_mE0AEB2A689CB4B247C49A19DE14F1A4909C69D28 (double ___0_n, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_m, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_n;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = ___1_m;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_Multiply_m4F46EE6394F1BC1A4F797DE6FD9F245FC87E777B(L_0, L_1, NULL);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* __this, String_t* ___0_Message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_Message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixKalmanWrapper__ctor_m5AC2C11E38EE853DB1C3137AC1FA86D5FBA2A6AE (MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____72473E86EC72C67F0C0916F0FA376DFE686E5582D389BC7100EF5E70835FB565_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____82A445B12C8D35172C6D379C6467AF5B0C30F4811319E182486674AAF2E61610_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_1 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_2 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_3 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_4 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_5 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)2 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_0 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_1);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_2 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____82A445B12C8D35172C6D379C6467AF5B0C30F4811319E182486674AAF2E61610_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_4, L_2, NULL);
		V_0 = L_4;
		il2cpp_array_size_t L_6[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)1 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_5 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_6);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_7, L_5, NULL);
		V_1 = L_7;
		il2cpp_array_size_t L_9[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)1 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_8 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_9);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_10, L_8, NULL);
		V_2 = L_10;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)1);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(10.0));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13;
		L_13 = Matrix_CreateVector_m2B13C05D20F497282A773FB1344D14BF366C74CF(L_12, NULL);
		V_3 = L_13;
		il2cpp_array_size_t L_15[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)2 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_14 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_15);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_16 = L_14;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____72473E86EC72C67F0C0916F0FA376DFE686E5582D389BC7100EF5E70835FB565_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_16, L_17, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_18, L_16, NULL);
		V_4 = L_18;
		il2cpp_array_size_t L_20[] = { (il2cpp_array_size_t)1, (il2cpp_array_size_t)2 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_19 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_20);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_21 = L_19;
		NullCheck(L_21);
		(L_21)->SetAt(0, 0, (1.0));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_22, L_21, NULL);
		V_5 = L_22;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_23 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_24 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_25 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_26 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_27 = V_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_28 = V_3;
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_29;
		L_29 = MatrixKalmanWrapper_makeKalmanFilter_m4A1834C03FD2F6854B5262744DF086AF64F3C0DD(__this, L_23, L_24, L_25, L_26, L_27, L_28, NULL);
		__this->___kX = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kX), (void*)L_29);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_30 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_31 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_32 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_33 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_34 = V_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_35 = V_3;
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_36;
		L_36 = MatrixKalmanWrapper_makeKalmanFilter_m4A1834C03FD2F6854B5262744DF086AF64F3C0DD(__this, L_30, L_31, L_32, L_33, L_34, L_35, NULL);
		__this->___kY = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kY), (void*)L_36);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_37 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_38 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_39 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_40 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_41 = V_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_42 = V_3;
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_43;
		L_43 = MatrixKalmanWrapper_makeKalmanFilter_m4A1834C03FD2F6854B5262744DF086AF64F3C0DD(__this, L_37, L_38, L_39, L_40, L_41, L_42, NULL);
		__this->___kZ = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kZ), (void*)L_43);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MatrixKalmanWrapper_Update_mAA122AC563932FA94043D6AF901CFDE1C210DBD8 (MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_0 = __this->___kX;
		il2cpp_array_size_t L_2[] = { (il2cpp_array_size_t)1, (il2cpp_array_size_t)1 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_1 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_2);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_current;
		float L_5 = L_4.___x;
		NullCheck(L_3);
		(L_3)->SetAt(0, 0, ((double)L_5));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_6, L_3, NULL);
		NullCheck(L_0);
		KalmanFilter_Correct_m97F05523C1E559A23231370927B931B8F30A4521(L_0, L_6, NULL);
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_7 = __this->___kY;
		il2cpp_array_size_t L_9[] = { (il2cpp_array_size_t)1, (il2cpp_array_size_t)1 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_8 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_9);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_10 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_current;
		float L_12 = L_11.___y;
		NullCheck(L_10);
		(L_10)->SetAt(0, 0, ((double)L_12));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_13, L_10, NULL);
		NullCheck(L_7);
		KalmanFilter_Correct_m97F05523C1E559A23231370927B931B8F30A4521(L_7, L_13, NULL);
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_14 = __this->___kZ;
		il2cpp_array_size_t L_16[] = { (il2cpp_array_size_t)1, (il2cpp_array_size_t)1 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_15 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_16);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_17 = L_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___0_current;
		float L_19 = L_18.___z;
		NullCheck(L_17);
		(L_17)->SetAt(0, 0, ((double)L_19));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_20 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_20, L_17, NULL);
		NullCheck(L_14);
		KalmanFilter_Correct_m97F05523C1E559A23231370927B931B8F30A4521(L_14, L_20, NULL);
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_21 = __this->___kX;
		NullCheck(L_21);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22;
		L_22 = KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66_inline(L_21, NULL);
		NullCheck(L_22);
		double L_23;
		L_23 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_22, 0, 0, NULL);
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_24 = __this->___kY;
		NullCheck(L_24);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_25;
		L_25 = KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66_inline(L_24, NULL);
		NullCheck(L_25);
		double L_26;
		L_26 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_25, 0, 0, NULL);
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_27 = __this->___kZ;
		NullCheck(L_27);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_28;
		L_28 = KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66_inline(L_27, NULL);
		NullCheck(L_28);
		double L_29;
		L_29 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_28, 0, 0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), ((float)L_23), ((float)L_26), ((float)L_29), NULL);
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixKalmanWrapper_Dispose_m6DB4CCB5BEC1D4BC0596702B3790FA99785A69DA (MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* MatrixKalmanWrapper_makeKalmanFilter_m4A1834C03FD2F6854B5262744DF086AF64F3C0DD (MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_f, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___1_b, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___2_u, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___3_q, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___4_h, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___5_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* V_0 = NULL;
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_f;
		NullCheck(L_0);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1;
		L_1 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_0, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___1_b;
		NullCheck(L_2);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3;
		L_3 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_2, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = ___2_u;
		NullCheck(L_4);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5;
		L_5 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_4, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6 = ___3_q;
		NullCheck(L_6);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7;
		L_7 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_6, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8 = ___4_h;
		NullCheck(L_8);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9;
		L_9 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_8, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = ___5_r;
		NullCheck(L_10);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11;
		L_11 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_10, NULL);
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_12 = (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08*)il2cpp_codegen_object_new(KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08_il2cpp_TypeInfo_var);
		KalmanFilter__ctor_m6397508B622E93654047F43CC83FCCBFBB022143(L_12, L_1, L_3, L_5, L_7, L_9, L_11, NULL);
		V_0 = L_12;
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_13 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)2);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(500.0));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_16;
		L_16 = Matrix_CreateVector_m2B13C05D20F497282A773FB1344D14BF366C74CF(L_15, NULL);
		il2cpp_array_size_t L_18[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)2 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_17 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_18);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_19 = L_17;
		NullCheck(L_19);
		(L_19)->SetAt(0, 0, (10.0));
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_20 = L_19;
		NullCheck(L_20);
		(L_20)->SetAt(1, 1, (5.0));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_21, L_20, NULL);
		NullCheck(L_13);
		KalmanFilter_SetState_mC9CB95E7667857E29CF369D24FF284A80859E609(L_13, L_16, L_21, NULL);
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_22 = V_0;
		return L_22;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleKalmanWrapper__ctor_m0F2722508A0DC9143E7155BE512B6552B22DD270 (SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		V_0 = (0.40000000000000002);
		V_1 = (10.0);
		V_2 = (1.0);
		V_3 = (1.0);
		double L_0 = V_0;
		double L_1 = V_1;
		double L_2 = V_2;
		double L_3 = V_3;
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_4;
		L_4 = SimpleKalmanWrapper_makeKalmanFilter_m1E4F0F8408CBA7CAF324CD479C83C64585BC770B(__this, L_0, L_1, L_2, L_3, NULL);
		__this->___kX = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kX), (void*)L_4);
		double L_5 = V_0;
		double L_6 = V_1;
		double L_7 = V_2;
		double L_8 = V_3;
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_9;
		L_9 = SimpleKalmanWrapper_makeKalmanFilter_m1E4F0F8408CBA7CAF324CD479C83C64585BC770B(__this, L_5, L_6, L_7, L_8, NULL);
		__this->___kY = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kY), (void*)L_9);
		double L_10 = V_0;
		double L_11 = V_1;
		double L_12 = V_2;
		double L_13 = V_3;
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_14;
		L_14 = SimpleKalmanWrapper_makeKalmanFilter_m1E4F0F8408CBA7CAF324CD479C83C64585BC770B(__this, L_10, L_11, L_12, L_13, NULL);
		__this->___kZ = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kZ), (void*)L_14);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimpleKalmanWrapper_Update_mD9BEA1898E94FAA80E1E0647242AD462752AFC58 (SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, const RuntimeMethod* method) 
{
	{
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_0 = __this->___kX;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_current;
		float L_2 = L_1.___x;
		NullCheck(L_0);
		KalmanFilterSimple1D_Correct_m8F4045B2D0BB1F37CB730C85E65748BD1016D7F3(L_0, ((double)L_2), NULL);
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_3 = __this->___kY;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_current;
		float L_5 = L_4.___y;
		NullCheck(L_3);
		KalmanFilterSimple1D_Correct_m8F4045B2D0BB1F37CB730C85E65748BD1016D7F3(L_3, ((double)L_5), NULL);
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_6 = __this->___kZ;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_current;
		float L_8 = L_7.___z;
		NullCheck(L_6);
		KalmanFilterSimple1D_Correct_m8F4045B2D0BB1F37CB730C85E65748BD1016D7F3(L_6, ((double)L_8), NULL);
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_9 = __this->___kX;
		NullCheck(L_9);
		double L_10;
		L_10 = KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40_inline(L_9, NULL);
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_11 = __this->___kY;
		NullCheck(L_11);
		double L_12;
		L_12 = KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40_inline(L_11, NULL);
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_13 = __this->___kZ;
		NullCheck(L_13);
		double L_14;
		L_14 = KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40_inline(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), ((float)L_10), ((float)L_12), ((float)L_14), NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleKalmanWrapper_Dispose_mC65323CB75C68549D8C28E8A29484D1483AF1C3E (SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* SimpleKalmanWrapper_makeKalmanFilter_m1E4F0F8408CBA7CAF324CD479C83C64585BC770B (SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092* __this, double ___0_q, double ___1_r, double ___2_f, double ___3_h, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_q;
		double L_1 = ___1_r;
		double L_2 = ___2_f;
		double L_3 = ___3_h;
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_4 = (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081*)il2cpp_codegen_object_new(KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081_il2cpp_TypeInfo_var);
		KalmanFilterSimple1D__ctor_mE09182E4735A65F75ED40200D0F88E24FB799844(L_4, L_0, L_1, L_2, L_3, NULL);
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_5 = L_4;
		NullCheck(L_5);
		KalmanFilterSimple1D_SetState_mDDB70DC34D518D9FE771A64558B3E7E06EB5A5E0(L_5, (500.0), (5.0), NULL);
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuassianRandom__ctor_mC3854DEC0F692AA305FC3D1E758EF02ED182C74B (GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* G_B2_0 = NULL;
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* G_B1_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_StaticFields*)il2cpp_codegen_static_fields_for(GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var))->____random;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
		G_B1_0 = L_1;
	}
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_2, NULL);
		G_B2_0 = L_2;
	}

IL_0014:
	{
		((GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_StaticFields*)il2cpp_codegen_static_fields_for(GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var))->____random = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_StaticFields*)il2cpp_codegen_static_fields_for(GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var))->____random), (void*)G_B2_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double GuassianRandom_NextGuassian_m11F57E6798715A882E0FA5461141D9A4FA87BCCB (GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF* __this, double ___0_mu, double ___1_sigma, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		double L_0 = ___1_sigma;
		if ((!(((double)L_0) <= ((double)(0.0)))))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3CAD39A7B5AEC0B348B5507B59FE1BABC7DA241)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5359BA9CB4634179A1429F9FF1EC49B6A347800A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GuassianRandom_NextGuassian_m11F57E6798715A882E0FA5461141D9A4FA87BCCB_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_2 = __this->____hasDeviate;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		__this->____hasDeviate = (bool)0;
		double L_3 = __this->____storedDeviate;
		double L_4 = ___1_sigma;
		double L_5 = ___0_mu;
		return ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_3, L_4)), L_5));
	}

IL_0036:
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_6 = ((GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_StaticFields*)il2cpp_codegen_static_fields_for(GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var))->____random;
		NullCheck(L_6);
		double L_7;
		L_7 = VirtualFuncInvoker0< double >::Invoke(8, L_6);
		V_0 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((2.0), L_7)), (1.0)));
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_8 = ((GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_StaticFields*)il2cpp_codegen_static_fields_for(GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var))->____random;
		NullCheck(L_8);
		double L_9;
		L_9 = VirtualFuncInvoker0< double >::Invoke(8, L_8);
		V_1 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((2.0), L_9)), (1.0)));
		double L_10 = V_0;
		double L_11 = V_0;
		double L_12 = V_1;
		double L_13 = V_1;
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_10, L_11)), ((double)il2cpp_codegen_multiply(L_12, L_13))));
		double L_14 = V_2;
		if ((((double)L_14) >= ((double)(1.0))))
		{
			goto IL_0036;
		}
	}
	{
		double L_15 = V_2;
		if ((((double)L_15) == ((double)(0.0))))
		{
			goto IL_0036;
		}
	}
	{
		double L_16 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_17;
		L_17 = log(L_16);
		double L_18 = V_2;
		double L_19;
		L_19 = sqrt(((double)(((double)il2cpp_codegen_multiply((-2.0), L_17))/L_18)));
		V_3 = L_19;
		double L_20 = V_1;
		double L_21 = V_3;
		__this->____storedDeviate = ((double)il2cpp_codegen_multiply(L_20, L_21));
		__this->____hasDeviate = (bool)1;
		double L_22 = V_0;
		double L_23 = V_3;
		double L_24 = ___1_sigma;
		double L_25 = ___0_mu;
		return ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_22, L_23)), L_24)), L_25));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_F_m64A2C6461DA7CFE711F3E175ED1DD21FE5EEE9A5_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CFU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_B_m714DB9724F4E31B4C22D5952B2CAEA8DEB81120E_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CBU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_U_m2941B3355FCA5503E38BFC52733CFA6C6087436C_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CUU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_Q_mFAADE44780E6D633563749ED52BD7357F30A7977_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CQU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_H_m9480D0B1AFBEEB4BB7E4175929142A07758914A0_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CHU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_R_mA2ACC4462D2FC181D9B20F806A2EE72E893B50EC_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CRU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_State_m20E9827CC4145E80FA5BC11511BEA00102CE7268_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CStateU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStateU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_Covariance_m823F46BBE8A9ACB4EF72383ACF8723E7E651BE59_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CCovarianceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCovarianceU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_F_m096A81E58C90EFAB3E1DF5A6E3B1442018767EA4_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CFU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_X0_mDF8569EDA79886E255DEE3E236CBABEBC2EA736F_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CX0U3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CX0U3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_Covariance_m0DBABD6D31F4293196CC327053A847F083B7E672_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CCovarianceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_Q_m3D304029E70BC950C8CC3F5CC5CCD588E5EDF7A0_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CQU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_P0_mF6D5507B96E0988F988AEEEE5828A941CA0D3F7B_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___0_value;
		__this->___U3CP0U3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CP0U3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CP0U3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CHU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_R_m6AA93D761F1F399A4C60C22C09363267672DB8BB_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CRU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_X0_m6525ED71B7ED08C68D5DC7761EC8CE97C826B4B5_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CX0U3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_Q_m1DC3CB34B6F0B84895DE72D93F99F646E1670B82_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CQU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_R_mCFF19948E60888FC1A97923066BABA8556B99726_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CRU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_F_mE329B338AE11A23DDF798157DDDF0909A8BB87A1_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CFU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_H_mC0BC7397BD0F247678BAB267928FFDCB2755FC27_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CHU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_State_m1939BDF5E9508479990229AEC371E3ED0D7882B4_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CStateU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_Covariance_mA38C27D2638B949BAC94CA0A74C9ABBA52503CE3_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CCovarianceU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_F_m5C756567DB1FA3617AFDAB3EBBB1E029938BE5C7_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CFU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CStateU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_X0_m03A863C60B036F210E4520E23180BB4EFEA666AB_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CX0U3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_Covariance_m0748CCCAA3696D67D8409F669EFF607D1CDDF278_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CCovarianceU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_Q_m3BC34AB32A26ADC3904A93D66378F4E996D68CB1_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CQU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_P0_m3087DC31B2CCF163F73766DF1E786EC2B1580D8B_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		__this->___U3CP0U3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CHU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_P0_mF6327BFB1907AF17BBCE80FA7CE62D4E17278FD1_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CP0U3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_R_m66D845E477AD4F966EB5CEA1F163252CC3650454_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CRU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_X0_mCFD4303E43B8F6EFA141E3411D5E30DD5D5C9638_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CX0U3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
