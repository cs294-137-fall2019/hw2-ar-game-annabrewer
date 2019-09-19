#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>
struct List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>
struct List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Experimental.ISubsystemDescriptor
struct ISubsystemDescriptor_tDF5EB3ED639A15690D2CB9993789BB21F24D3934;
// UnityEngine.Experimental.SubsystemDescriptor
struct SubsystemDescriptor_t39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4;
// UnityEngine.Experimental.SubsystemDescriptor`1<System.Object>
struct SubsystemDescriptor_1_t95BE9733705BCAF0B9A5388CAE064972876C8567;
// UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem>
struct SubsystemDescriptor_1_t1DFF18644490E72CC17321AEABA43605664F8235;
// UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemDescriptor_1_t999BC3F05F1F174685ED49ECA369CC8E2B203F2E;
// UnityEngine.Experimental.Subsystem`1<System.Object>
struct Subsystem_1_t3C9464E9C57AFD87BCA00E457B3C2FCB3AFA269E;
// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B;
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>
struct TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>
struct TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry
struct XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry[]
struct XRReferenceObjectEntryU5BU5D_tE6BE009B13CF3D71DD2B512668EB369AA9120B26;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260;
// UnityEngine.XR.ARSubsystems.XRReferenceObject[]
struct XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem
struct XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider
struct IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459;
// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor
struct XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider
struct IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079;

extern RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
extern RuntimeClass* Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_il2cpp_TypeInfo_var;
extern RuntimeClass* Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var;
extern RuntimeClass* ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_il2cpp_TypeInfo_var;
extern RuntimeClass* SubsystemRegistration_t0A22FECC46483ABBFFC039449407F73FF11F5A1A_il2cpp_TypeInfo_var;
extern RuntimeClass* TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE_il2cpp_TypeInfo_var;
extern RuntimeClass* TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
extern RuntimeClass* XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_il2cpp_TypeInfo_var;
extern RuntimeClass* XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D_il2cpp_TypeInfo_var;
extern RuntimeClass* XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9_il2cpp_TypeInfo_var;
extern RuntimeClass* XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079_il2cpp_TypeInfo_var;
extern RuntimeClass* XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16_il2cpp_TypeInfo_var;
extern RuntimeClass* XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_il2cpp_TypeInfo_var;
extern RuntimeClass* XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_il2cpp_TypeInfo_var;
extern RuntimeClass* XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral39BF4FB45444043D19EFF93848D9F1A0BEA05065;
extern String_t* _stringLiteral4A5C099E77D1F0180583C811D9E0FFDBBD8056EE;
extern String_t* _stringLiteral7C920AC9C27322B466EC79E3F70C59D0EB2E27E3;
extern String_t* _stringLiteral8D5D999C478CCB89B73D744A0781362458C30380;
extern String_t* _stringLiteralB39A7E18F4E7B76A8C729E54E8852F98B5EA76F3;
extern String_t* _stringLiteralB803153B51A277297BD55B487E4635F22FE4D888;
extern String_t* _stringLiteralD0A3E7F81A9885E99049D1CAE0336D269D5E47A9;
extern String_t* _stringLiteralD877CA1B88372977DE10E74458237B9D64D74F9B;
extern const RuntimeMethod* Enumerator_Dispose_m7B6EFE249DF6F43B30BEE8350B87A4231CAA0406_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m0B347A783040C9CE4B9C1889A87ED80B3A0DCB8B_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_mD47F152CC824D5536C956CF7F08372836B4344C6_RuntimeMethod_var;
extern const RuntimeMethod* IProvider_get_frameRate_m82D84C460ABEC4FCFC3F51B0CD3605050BB5DDA2_RuntimeMethod_var;
extern const RuntimeMethod* IProvider_set_matchFrameRate_m29BE5BDF4CC0D5CBBC1B029F58ADE2835945A261_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m7ABEC2AD664AC6AC1073E546BAAFC0350626A321_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_mC07E381535940BCF47E02BD6CA84103EBBBB217E_RuntimeMethod_var;
extern const RuntimeMethod* List_1_IndexOf_m80147D21315270B53CA3E7AE6FA3B97264231AB2_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m370BA08A79B7950CA8E75862CD6F4921BAF6D7AB_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mA303D95DAA9717D8D3148C3F20FA1B2750CE77B4_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_mE2BB4CDB177C0DA1EF1FB0A174459691F207C7DF_RuntimeMethod_var;
extern const RuntimeMethod* Promise_1_CreateResolvedPromise_m33AA652B2B2460A4777ED6EA73923156280826AA_RuntimeMethod_var;
extern const RuntimeMethod* Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D_RuntimeMethod_var;
extern const RuntimeMethod* SubsystemDescriptor_1__ctor_m5CC83C3B4353C7E10253E36148E70B9223C821DF_RuntimeMethod_var;
extern const RuntimeMethod* SubsystemDescriptor_1__ctor_mB407BE84B81017983C215B6A1F715785091C7635_RuntimeMethod_var;
extern const RuntimeMethod* Subsystem_1__ctor_m9A7BD362BD1D6DD43C14E819F40B5BA593F5A07E_RuntimeMethod_var;
extern const RuntimeMethod* Subsystem_1_get_SubsystemDescriptor_m7D9A1F7F1631768F5DE2EC7DA7FC3FCCA24336C7_RuntimeMethod_var;
extern const RuntimeMethod* TrackingSubsystem_2__ctor_mC69AD6AEF92FA2B9D7D5B83C79A418BAB05D0F76_RuntimeMethod_var;
extern const RuntimeMethod* XRReferenceObject_FindEntry_mBCEBCEF4265B7D210FFA15179493BF8BDBB70C94_RuntimeMethod_var;
extern const RuntimeMethod* XRReferencePointSubsystem_GetChanges_mE0EC8049CED1EA604A751066DB97430E803BE487_RuntimeMethod_var;
extern const RuntimeMethod* XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC_RuntimeMethod_var;
extern const uint32_t Cinfo_Equals_m2118FE6BBF6355D645E72BDD6662CF313B8E94EB_MetadataUsageId;
extern const uint32_t Cinfo_Equals_m7D9C657E628D2DFC390587FBE0BDFEB1D5CDC92D_MetadataUsageId;
extern const uint32_t Cinfo_Equals_mC210DE78D45CD980BF7B5A186241CFC5CC243D2E_MetadataUsageId;
extern const uint32_t Cinfo_Equals_mC919333F29E857CC3F929451A080AC4A38385E01_MetadataUsageId;
extern const uint32_t Cinfo_GetHashCode_m06E1060A5995A0C346AB7C0E56CCAC4BEC758A6E_MetadataUsageId;
extern const uint32_t Cinfo_GetHashCode_mA1002FD6C9DDB0C39442B7692A7CDB5562C61086_MetadataUsageId;
extern const uint32_t IProvider_GetAvailabilityAsync_mBEB3A0B9542D7FFC86148CDA981B9D7A79E6ECAF_MetadataUsageId;
extern const uint32_t IProvider_InstallAsync_m89483BB3B7B4D4E481B1F73CC1E2C0DAABAAC2BE_MetadataUsageId;
extern const uint32_t IProvider_get_frameRate_m82D84C460ABEC4FCFC3F51B0CD3605050BB5DDA2_MetadataUsageId;
extern const uint32_t IProvider_get_nativePtr_mDFDB9ACAD44C21907F5503C028285ED347B812A1_MetadataUsageId;
extern const uint32_t IProvider_get_sessionId_m8C69C4DA0023D68D8CF04173C004738A0340E396_MetadataUsageId;
extern const uint32_t IProvider_set_matchFrameRate_m29BE5BDF4CC0D5CBBC1B029F58ADE2835945A261_MetadataUsageId;
extern const uint32_t XRReferenceObjectLibrary_GetEnumerator_m7ECEFBA77B4669ADD3EDCE0841E4FF9C79C3312D_MetadataUsageId;
extern const uint32_t XRReferenceObjectLibrary__ctor_mA11977E1ED613E7E7EF79C3F2494E243F619C442_MetadataUsageId;
extern const uint32_t XRReferenceObjectLibrary_get_Item_m09F2CB2A14D830F37053B8B6E02E9659F3527996_MetadataUsageId;
extern const uint32_t XRReferenceObjectLibrary_get_count_mAB2D34091CFC65B152FD3FD7095480FF5D6CC99C_MetadataUsageId;
extern const uint32_t XRReferenceObjectLibrary_indexOf_mBF56521C68737F5FBBA77684AD76A78E19C5B1F0_MetadataUsageId;
extern const uint32_t XRReferenceObject_Equals_mC83DEBBA89CBF9EF334B79634C9CA099B166DBC9_MetadataUsageId;
extern const uint32_t XRReferenceObject_FindEntry_mBCEBCEF4265B7D210FFA15179493BF8BDBB70C94_MetadataUsageId;
extern const uint32_t XRReferencePointSubsystemDescriptor_Create_m4E9D9DF5FCE2FE3F8672653BC733F87D3A4327D0_MetadataUsageId;
extern const uint32_t XRReferencePointSubsystemDescriptor__ctor_mB5AD6FF2521FF148612D7662DF93BD6CA68069B2_MetadataUsageId;
extern const uint32_t XRReferencePointSubsystem_GetChanges_mE0EC8049CED1EA604A751066DB97430E803BE487_MetadataUsageId;
extern const uint32_t XRReferencePointSubsystem__ctor_mD93381DE24CA18A7BA022014E77BEBA9AA2CD6E9_MetadataUsageId;
extern const uint32_t XRReferencePoint_Equals_mD22BFD6609737E5CC6A31D2C1B519CD5207C89BC_MetadataUsageId;
extern const uint32_t XRReferencePoint_GetDefault_m2C8B9BC8378BD9F7C636DCD1C90D4793F9C80BF8_MetadataUsageId;
extern const uint32_t XRReferencePoint__ctor_mF823D8DC414C0B110A0C29F28668C1F3DA2B2997_MetadataUsageId;
extern const uint32_t XRSessionSubsystemDescriptor_RegisterDescriptor_m7A9F84E8A57323CDB5DC415BA05E72D6A72025E4_MetadataUsageId;
extern const uint32_t XRSessionSubsystemDescriptor__ctor_mF2A65C6A814FB2D22D5ED1608E5EFD5B0CD9A6E2_MetadataUsageId;
extern const uint32_t XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC_MetadataUsageId;
extern const uint32_t XRSessionSubsystem__ctor_m2817E6FDD974187708CFD270DE4C6D3132774648_MetadataUsageId;
extern const uint32_t XRSessionUpdateParams_Equals_m415AB0E24C9CF0C013872ED16C571B65DACF24B1_MetadataUsageId;
extern const uint32_t XRSessionUpdateParams_ToString_m7150FEAE08C59544392C3D47B3CB5AC318B82F4A_MetadataUsageId;
extern const uint32_t XRTextureDescriptor_Equals_m8D2E1A6303E60A653F70870CBD04845414F6A0A5_MetadataUsageId;
extern const uint32_t XRTextureDescriptor_Reset_m64A787FBD1F11161369A72A7D61763DDF8D74EBC_MetadataUsageId;
extern const uint32_t XRTextureDescriptor_ToString_mA7C17125D54876E04397C7022031B6A346CA9A7F_MetadataUsageId;
extern const uint32_t XRTextureDescriptor_get_valid_mF060565C5E24FDF97771F6FDA3235562DF01977B_MetadataUsageId;
extern const uint32_t XRTrackedImage_Equals_m12A588942242306FC770FD88421D00750F22A141_MetadataUsageId;
extern const uint32_t XRTrackedImage_Equals_m7C7F0B2FC7A6818276C2BC763CF0465333453B9C_MetadataUsageId;
extern const uint32_t XRTrackedImage_GetDefault_m5F66138594FB5852F148CD6F830086B62B906B84_MetadataUsageId;
extern const uint32_t XRTrackedObject_Equals_mF0CA07E970C48D514F2B9BBEC0FE44F46429C524_MetadataUsageId;
extern const uint32_t XRTrackedObject__cctor_mF6797A036790C2B6133B8B8A44C64B49FDBFF296_MetadataUsageId;
extern const uint32_t XRTrackedObject_get_defaultTrackedObject_m954A54C2FB9E061241CE8B689B4150732B38604C_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_TBCCE21E4A74A6344171668FB521DE76F9004EE79_H
#define LIST_1_TBCCE21E4A74A6344171668FB521DE76F9004EE79_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>
struct  List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79, ____items_1)); }
	inline XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498* get__items_1() const { return ____items_1; }
	inline XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79_StaticFields, ____emptyArray_5)); }
	inline XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_TBCCE21E4A74A6344171668FB521DE76F9004EE79_H
#ifndef LIST_1_T564CABFE377BD9215732520DE10D1FEB72E336AE_H
#define LIST_1_T564CABFE377BD9215732520DE10D1FEB72E336AE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>
struct  List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRReferenceObjectEntryU5BU5D_tE6BE009B13CF3D71DD2B512668EB369AA9120B26* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE, ____items_1)); }
	inline XRReferenceObjectEntryU5BU5D_tE6BE009B13CF3D71DD2B512668EB369AA9120B26* get__items_1() const { return ____items_1; }
	inline XRReferenceObjectEntryU5BU5D_tE6BE009B13CF3D71DD2B512668EB369AA9120B26** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRReferenceObjectEntryU5BU5D_tE6BE009B13CF3D71DD2B512668EB369AA9120B26* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRReferenceObjectEntryU5BU5D_tE6BE009B13CF3D71DD2B512668EB369AA9120B26* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE_StaticFields, ____emptyArray_5)); }
	inline XRReferenceObjectEntryU5BU5D_tE6BE009B13CF3D71DD2B512668EB369AA9120B26* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRReferenceObjectEntryU5BU5D_tE6BE009B13CF3D71DD2B512668EB369AA9120B26** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRReferenceObjectEntryU5BU5D_tE6BE009B13CF3D71DD2B512668EB369AA9120B26* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T564CABFE377BD9215732520DE10D1FEB72E336AE_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#define CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifndef SUBSYSTEM_T9D40133A9FEB984E2C3695B077DA4DDFC91CA181_H
#define SUBSYSTEM_T9D40133A9FEB984E2C3695B077DA4DDFC91CA181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem
struct  Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.ISubsystemDescriptor UnityEngine.Experimental.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_subsystemDescriptor_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_T9D40133A9FEB984E2C3695B077DA4DDFC91CA181_H
#ifndef SUBSYSTEMDESCRIPTOR_T39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4_H
#define SUBSYSTEMDESCRIPTOR_T39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor
struct  SubsystemDescriptor_t39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4  : public RuntimeObject
{
public:
	// System.String UnityEngine.Experimental.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.Experimental.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_t39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_t39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_T39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4_H
#ifndef IPROVIDER_TA80639246D0ED291E8332BE2FBC3FE3EA13A4459_H
#define IPROVIDER_TA80639246D0ED291E8332BE2FBC3FE3EA13A4459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider
struct  IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPROVIDER_TA80639246D0ED291E8332BE2FBC3FE3EA13A4459_H
#ifndef IPROVIDER_TCE3A36B52F24E47DF8D9945EAB79493A822E9428_H
#define IPROVIDER_TCE3A36B52F24E47DF8D9945EAB79493A822E9428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider
struct  IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPROVIDER_TCE3A36B52F24E47DF8D9945EAB79493A822E9428_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#define ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifndef ENUMERATOR_T8F224602FB8179E9E02E220ED94A72EA075C763F_H
#define ENUMERATOR_T8F224602FB8179E9E02E220ED94A72EA075C763F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>
struct  Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F, ___list_0)); }
	inline List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * get_list_0() const { return ___list_0; }
	inline List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F, ___current_3)); }
	inline XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * get_current_3() const { return ___current_3; }
	inline XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T8F224602FB8179E9E02E220ED94A72EA075C763F_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
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

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#define UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef SUBSYSTEMDESCRIPTOR_1_T1DFF18644490E72CC17321AEABA43605664F8235_H
#define SUBSYSTEMDESCRIPTOR_1_T1DFF18644490E72CC17321AEABA43605664F8235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem>
struct  SubsystemDescriptor_1_t1DFF18644490E72CC17321AEABA43605664F8235  : public SubsystemDescriptor_t39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_1_T1DFF18644490E72CC17321AEABA43605664F8235_H
#ifndef SUBSYSTEMDESCRIPTOR_1_T999BC3F05F1F174685ED49ECA369CC8E2B203F2E_H
#define SUBSYSTEMDESCRIPTOR_1_T999BC3F05F1F174685ED49ECA369CC8E2B203F2E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct  SubsystemDescriptor_1_t999BC3F05F1F174685ED49ECA369CC8E2B203F2E  : public SubsystemDescriptor_t39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_1_T999BC3F05F1F174685ED49ECA369CC8E2B203F2E_H
#ifndef SUBSYSTEM_1_T35AA453451CA1D5D679E6EBF39EBDA236764F5E2_H
#define SUBSYSTEM_1_T35AA453451CA1D5D679E6EBF39EBDA236764F5E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>
struct  Subsystem_1_t35AA453451CA1D5D679E6EBF39EBDA236764F5E2  : public Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T35AA453451CA1D5D679E6EBF39EBDA236764F5E2_H
#ifndef SUBSYSTEM_1_T30A0E0214407A620CECF452A54D6676F5A6574B9_H
#define SUBSYSTEM_1_T30A0E0214407A620CECF452A54D6676F5A6574B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9  : public Subsystem_t9D40133A9FEB984E2C3695B077DA4DDFC91CA181
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T30A0E0214407A620CECF452A54D6676F5A6574B9_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR2INT_T339DA203C037FA6BCFC926C36DC2194D52D5F905_H
#define VECTOR2INT_T339DA203C037FA6BCFC926C36DC2194D52D5F905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2Int
struct  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2INT_T339DA203C037FA6BCFC926C36DC2194D52D5F905_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef TRACKABLEID_TA7E19AFE62176E25E3759548887E9068E1E4AE47_H
#define TRACKABLEID_TA7E19AFE62176E25E3759548887E9068E1E4AE47_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___s_InvalidId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEID_TA7E19AFE62176E25E3759548887E9068E1E4AE47_H
#ifndef XRREFERENCEOBJECT_T4DAB86DD7C1E4245ABD473120BD1625265465BAA_H
#define XRREFERENCEOBJECT_T4DAB86DD7C1E4245ABD473120BD1625265465BAA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRReferenceObject
struct  XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidLow
	uint64_t ___m_GuidLow_0;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidHigh
	uint64_t ___m_GuidHigh_1;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Name
	String_t* ___m_Name_2;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry> UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Entries
	List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * ___m_Entries_3;

public:
	inline static int32_t get_offset_of_m_GuidLow_0() { return static_cast<int32_t>(offsetof(XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA, ___m_GuidLow_0)); }
	inline uint64_t get_m_GuidLow_0() const { return ___m_GuidLow_0; }
	inline uint64_t* get_address_of_m_GuidLow_0() { return &___m_GuidLow_0; }
	inline void set_m_GuidLow_0(uint64_t value)
	{
		___m_GuidLow_0 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_1() { return static_cast<int32_t>(offsetof(XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA, ___m_GuidHigh_1)); }
	inline uint64_t get_m_GuidHigh_1() const { return ___m_GuidHigh_1; }
	inline uint64_t* get_address_of_m_GuidHigh_1() { return &___m_GuidHigh_1; }
	inline void set_m_GuidHigh_1(uint64_t value)
	{
		___m_GuidHigh_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_2), value);
	}

	inline static int32_t get_offset_of_m_Entries_3() { return static_cast<int32_t>(offsetof(XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA, ___m_Entries_3)); }
	inline List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * get_m_Entries_3() const { return ___m_Entries_3; }
	inline List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE ** get_address_of_m_Entries_3() { return &___m_Entries_3; }
	inline void set_m_Entries_3(List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * value)
	{
		___m_Entries_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Entries_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshaled_pinvoke
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	char* ___m_Name_2;
	List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * ___m_Entries_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshaled_com
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	Il2CppChar* ___m_Name_2;
	List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * ___m_Entries_3;
};
#endif // XRREFERENCEOBJECT_T4DAB86DD7C1E4245ABD473120BD1625265465BAA_H
#ifndef CINFO_T763E336A62E286B348AB9B084829CFD16A32D7AD_H
#define CINFO_T763E336A62E286B348AB9B084829CFD16A32D7AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo
struct  Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD 
{
public:
	// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_pinvoke
{
	char* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
struct Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_com
{
	Il2CppChar* ___U3CidU3Ek__BackingField_0;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;
	int32_t ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;
};
#endif // CINFO_T763E336A62E286B348AB9B084829CFD16A32D7AD_H
#ifndef CINFO_T0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_H
#define CINFO_T0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo
struct  Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_2;
	// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CsupportsInstallU3Ek__BackingField_0)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_0() const { return ___U3CsupportsInstallU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_0() { return &___U3CsupportsInstallU3Ek__BackingField_0; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_0(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CsupportsMatchFrameRateU3Ek__BackingField_1)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_1() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_1() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_1; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CidU3Ek__BackingField_2)); }
	inline String_t* get_U3CidU3Ek__BackingField_2() const { return ___U3CidU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_2() { return &___U3CidU3Ek__BackingField_2; }
	inline void set_U3CidU3Ek__BackingField_2(String_t* value)
	{
		___U3CidU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A, ___U3CsubsystemImplementationTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_3() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_3() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_3; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsubsystemImplementationTypeU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_pinvoke
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	char* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
struct Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_com
{
	int32_t ___U3CsupportsInstallU3Ek__BackingField_0;
	int32_t ___U3CsupportsMatchFrameRateU3Ek__BackingField_1;
	Il2CppChar* ___U3CidU3Ek__BackingField_2;
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_3;
};
#endif // CINFO_T0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef ENUMERATOR_T3D111B64EA07FCA753146B875D55422A5191B57F_H
#define ENUMERATOR_T3D111B64EA07FCA753146B875D55422A5191B57F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.ARSubsystems.XRReferenceObject>
struct  Enumerator_t3D111B64EA07FCA753146B875D55422A5191B57F 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3D111B64EA07FCA753146B875D55422A5191B57F, ___list_0)); }
	inline List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * get_list_0() const { return ___list_0; }
	inline List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3D111B64EA07FCA753146B875D55422A5191B57F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3D111B64EA07FCA753146B875D55422A5191B57F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3D111B64EA07FCA753146B875D55422A5191B57F, ___current_3)); }
	inline XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  get_current_3() const { return ___current_3; }
	inline XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3D111B64EA07FCA753146B875D55422A5191B57F_H
#ifndef INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#define INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32ENUM_T6312CE4586C17FE2E2E513D2E7655B574F10FDCD_H
#ifndef INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#define INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifndef NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#define NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_TE75B318D6590A02A5D9B29FD97409B1750FA0010_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef ALLOCATOR_T62A091275262E7067EAAD565B67764FA877D58D6_H
#define ALLOCATOR_T62A091275262E7067EAAD565B67764FA877D58D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOCATOR_T62A091275262E7067EAAD565B67764FA877D58D6_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#define POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T2997DE3CB3863E4D78FCF42B46FC481818823F29_H
#ifndef SCREENORIENTATION_T4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_H
#define SCREENORIENTATION_T4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENORIENTATION_T4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_H
#ifndef TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#define TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#ifndef NOTTRACKINGREASON_T3106DE243E1555A213B3953CC3D001AC72B9C096_H
#define NOTTRACKINGREASON_T3106DE243E1555A213B3953CC3D001AC72B9C096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct  NotTrackingReason_t3106DE243E1555A213B3953CC3D001AC72B9C096 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t3106DE243E1555A213B3953CC3D001AC72B9C096, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTTRACKINGREASON_T3106DE243E1555A213B3953CC3D001AC72B9C096_H
#ifndef SESSIONAVAILABILITY_T5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9_H
#define SESSIONAVAILABILITY_T5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.SessionAvailability
struct  SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONAVAILABILITY_T5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9_H
#ifndef SESSIONINSTALLATIONSTATUS_T4030D915111F62D249BC71DE05C3BB4C856AADDF_H
#define SESSIONINSTALLATIONSTATUS_T4030D915111F62D249BC71DE05C3BB4C856AADDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.SessionInstallationStatus
struct  SessionInstallationStatus_t4030D915111F62D249BC71DE05C3BB4C856AADDF 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionInstallationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionInstallationStatus_t4030D915111F62D249BC71DE05C3BB4C856AADDF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SESSIONINSTALLATIONSTATUS_T4030D915111F62D249BC71DE05C3BB4C856AADDF_H
#ifndef TRACKINGSTATE_T124D9E603E4E0453A85409CF7762EE8C946233F6_H
#define TRACKINGSTATE_T124D9E603E4E0453A85409CF7762EE8C946233F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSTATE_T124D9E603E4E0453A85409CF7762EE8C946233F6_H
#ifndef TRACKINGSUBSYSTEM_2_T62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899_H
#define TRACKINGSUBSYSTEM_2_T62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>
struct  TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899  : public Subsystem_1_t35AA453451CA1D5D679E6EBF39EBDA236764F5E2
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackingSubsystem`2::m_Running
	bool ___m_Running_1;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSUBSYSTEM_2_T62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899_H
#ifndef XRREFERENCEPOINTSUBSYSTEMDESCRIPTOR_T5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D_H
#define XRREFERENCEPOINTSUBSYSTEMDESCRIPTOR_T5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor
struct  XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D  : public SubsystemDescriptor_1_t1DFF18644490E72CC17321AEABA43605664F8235
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::<supportsTrackableAttachments>k__BackingField
	bool ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D, ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() const { return ___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2() { return &___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2; }
	inline void set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsTrackableAttachmentsU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEPOINTSUBSYSTEMDESCRIPTOR_T5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D_H
#ifndef XRSESSIONSUBSYSTEM_T9B9C16B4BDB611559FB6FA728BE399001E47EFF0_H
#define XRSESSIONSUBSYSTEM_T9B9C16B4BDB611559FB6FA728BE399001E47EFF0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct  XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0  : public Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Running
	bool ___m_Running_1;
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Provider
	IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * ___m_Provider_2;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Provider_2)); }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Provider_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONSUBSYSTEM_T9B9C16B4BDB611559FB6FA728BE399001E47EFF0_H
#ifndef XRSESSIONSUBSYSTEMDESCRIPTOR_TAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079_H
#define XRSESSIONSUBSYSTEMDESCRIPTOR_TAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct  XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079  : public SubsystemDescriptor_1_t999BC3F05F1F174685ED49ECA369CC8E2B203F2E
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsInstall>k__BackingField
	bool ___U3CsupportsInstallU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::<supportsMatchFrameRate>k__BackingField
	bool ___U3CsupportsMatchFrameRateU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsupportsInstallU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079, ___U3CsupportsInstallU3Ek__BackingField_2)); }
	inline bool get_U3CsupportsInstallU3Ek__BackingField_2() const { return ___U3CsupportsInstallU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CsupportsInstallU3Ek__BackingField_2() { return &___U3CsupportsInstallU3Ek__BackingField_2; }
	inline void set_U3CsupportsInstallU3Ek__BackingField_2(bool value)
	{
		___U3CsupportsInstallU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportsMatchFrameRateU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079, ___U3CsupportsMatchFrameRateU3Ek__BackingField_3)); }
	inline bool get_U3CsupportsMatchFrameRateU3Ek__BackingField_3() const { return ___U3CsupportsMatchFrameRateU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CsupportsMatchFrameRateU3Ek__BackingField_3() { return &___U3CsupportsMatchFrameRateU3Ek__BackingField_3; }
	inline void set_U3CsupportsMatchFrameRateU3Ek__BackingField_3(bool value)
	{
		___U3CsupportsMatchFrameRateU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONSUBSYSTEMDESCRIPTOR_TAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079_H
#ifndef ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#define ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef NATIVEARRAY_1_TD7797CC5848BA9ECBD1172056474C8DD8022B1D6_H
#define NATIVEARRAY_1_TD7797CC5848BA9ECBD1172056474C8DD8022B1D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
#endif // NATIVEARRAY_1_TD7797CC5848BA9ECBD1172056474C8DD8022B1D6_H
#ifndef NATIVEARRAY_1_T5AADFB4C72573FE3017795F15B8CBC88625A8876_H
#define NATIVEARRAY_1_T5AADFB4C72573FE3017795F15B8CBC88625A8876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
#endif // NATIVEARRAY_1_T5AADFB4C72573FE3017795F15B8CBC88625A8876_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef PROMISE_1_T7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B_H
#define PROMISE_1_T7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>
struct  Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROMISE_1_T7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B_H
#ifndef PROMISE_1_TE8B65103AAD59FA1265B1977CE59DC6DA5220626_H
#define PROMISE_1_TE8B65103AAD59FA1265B1977CE59DC6DA5220626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>
struct  Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROMISE_1_TE8B65103AAD59FA1265B1977CE59DC6DA5220626_H
#ifndef XRREFERENCEPOINT_TA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9_H
#define XRREFERENCEPOINT_TA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct  XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRReferencePoint::m_SessionId
	Guid_t  ___m_SessionId_4;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Id_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_0() const { return ___m_Id_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_4() { return static_cast<int32_t>(offsetof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9, ___m_SessionId_4)); }
	inline Guid_t  get_m_SessionId_4() const { return ___m_SessionId_4; }
	inline Guid_t * get_address_of_m_SessionId_4() { return &___m_SessionId_4; }
	inline void set_m_SessionId_4(Guid_t  value)
	{
		___m_SessionId_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEPOINT_TA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9_H
#ifndef XRSESSIONUPDATEPARAMS_TAA765EB179BD3BAB22FA143AF178D328B30EAD16_H
#define XRSESSIONUPDATEPARAMS_TAA765EB179BD3BAB22FA143AF178D328B30EAD16_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRSessionUpdateParams
struct  XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 
{
public:
	// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenOrientation>k__BackingField
	int32_t ___U3CscreenOrientationU3Ek__BackingField_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::<screenDimensions>k__BackingField
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___U3CscreenDimensionsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CscreenOrientationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16, ___U3CscreenOrientationU3Ek__BackingField_0)); }
	inline int32_t get_U3CscreenOrientationU3Ek__BackingField_0() const { return ___U3CscreenOrientationU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CscreenOrientationU3Ek__BackingField_0() { return &___U3CscreenOrientationU3Ek__BackingField_0; }
	inline void set_U3CscreenOrientationU3Ek__BackingField_0(int32_t value)
	{
		___U3CscreenOrientationU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CscreenDimensionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16, ___U3CscreenDimensionsU3Ek__BackingField_1)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_U3CscreenDimensionsU3Ek__BackingField_1() const { return ___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_U3CscreenDimensionsU3Ek__BackingField_1() { return &___U3CscreenDimensionsU3Ek__BackingField_1; }
	inline void set_U3CscreenDimensionsU3Ek__BackingField_1(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___U3CscreenDimensionsU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONUPDATEPARAMS_TAA765EB179BD3BAB22FA143AF178D328B30EAD16_H
#ifndef XRTEXTUREDESCRIPTOR_T56503F48CEBC183AF26EE86935E918F31D09E9FD_H
#define XRTEXTUREDESCRIPTOR_T56503F48CEBC183AF26EE86935E918F31D09E9FD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct  XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD 
{
public:
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

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRTEXTUREDESCRIPTOR_T56503F48CEBC183AF26EE86935E918F31D09E9FD_H
#ifndef XRTRACKEDIMAGE_T178EACF5BFA4228DF4EB1899685C533F3F296AA8_H
#define XRTRACKEDIMAGE_T178EACF5BFA4228DF4EB1899685C533F3F296AA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct  XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_0;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_3;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_4;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_5;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Id_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_0() const { return ___m_Id_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_SourceImageId_1)); }
	inline Guid_t  get_m_SourceImageId_1() const { return ___m_SourceImageId_1; }
	inline Guid_t * get_address_of_m_SourceImageId_1() { return &___m_SourceImageId_1; }
	inline void set_m_SourceImageId_1(Guid_t  value)
	{
		___m_SourceImageId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Pose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Size_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Size_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_3() const { return ___m_Size_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_3() { return &___m_Size_3; }
	inline void set_m_Size_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_3 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_TrackingState_4)); }
	inline int32_t get_m_TrackingState_4() const { return ___m_TrackingState_4; }
	inline int32_t* get_address_of_m_TrackingState_4() { return &___m_TrackingState_4; }
	inline void set_m_TrackingState_4(int32_t value)
	{
		___m_TrackingState_4 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_NativePtr_5)); }
	inline intptr_t get_m_NativePtr_5() const { return ___m_NativePtr_5; }
	inline intptr_t* get_address_of_m_NativePtr_5() { return &___m_NativePtr_5; }
	inline void set_m_NativePtr_5(intptr_t value)
	{
		___m_NativePtr_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRTRACKEDIMAGE_T178EACF5BFA4228DF4EB1899685C533F3F296AA8_H
#ifndef XRTRACKEDOBJECT_TF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_H
#define XRTRACKEDOBJECT_TF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRTrackedObject
struct  XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::m_ReferenceObjectGuid
	Guid_t  ___m_ReferenceObjectGuid_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjectGuid_4() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_ReferenceObjectGuid_4)); }
	inline Guid_t  get_m_ReferenceObjectGuid_4() const { return ___m_ReferenceObjectGuid_4; }
	inline Guid_t * get_address_of_m_ReferenceObjectGuid_4() { return &___m_ReferenceObjectGuid_4; }
	inline void set_m_ReferenceObjectGuid_4(Guid_t  value)
	{
		___m_ReferenceObjectGuid_4 = value;
	}
};

struct XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedObject UnityEngine.XR.ARSubsystems.XRTrackedObject::k_Default
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___k_Default_5;

public:
	inline static int32_t get_offset_of_k_Default_5() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_StaticFields, ___k_Default_5)); }
	inline XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  get_k_Default_5() const { return ___k_Default_5; }
	inline XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * get_address_of_k_Default_5() { return &___k_Default_5; }
	inline void set_k_Default_5(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  value)
	{
		___k_Default_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRTRACKEDOBJECT_TF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_H
#ifndef TRACKABLECHANGES_1_T5C8C3FBA23E5BBC147A6991B68520A756EF54FDF_H
#define TRACKABLECHANGES_1_T5C8C3FBA23E5BBC147A6991B68520A756EF54FDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct  TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Added_1)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Updated_2)); }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t5AADFB4C72573FE3017795F15B8CBC88625A8876  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLECHANGES_1_T5C8C3FBA23E5BBC147A6991B68520A756EF54FDF_H
#ifndef XRREFERENCEOBJECTENTRY_T15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8_H
#define XRREFERENCEOBJECTENTRY_T15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry
struct  XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEOBJECTENTRY_T15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8_H
#ifndef XRREFERENCEOBJECTLIBRARY_TC9950535C1214232A691C32EDA0E95C703056260_H
#define XRREFERENCEOBJECTLIBRARY_TC9950535C1214232A691C32EDA0E95C703056260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct  XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_GuidLow
	uint64_t ___m_GuidLow_4;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_GuidHigh
	uint64_t ___m_GuidHigh_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject> UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::m_ReferenceObjects
	List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * ___m_ReferenceObjects_6;

public:
	inline static int32_t get_offset_of_m_GuidLow_4() { return static_cast<int32_t>(offsetof(XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260, ___m_GuidLow_4)); }
	inline uint64_t get_m_GuidLow_4() const { return ___m_GuidLow_4; }
	inline uint64_t* get_address_of_m_GuidLow_4() { return &___m_GuidLow_4; }
	inline void set_m_GuidLow_4(uint64_t value)
	{
		___m_GuidLow_4 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_5() { return static_cast<int32_t>(offsetof(XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260, ___m_GuidHigh_5)); }
	inline uint64_t get_m_GuidHigh_5() const { return ___m_GuidHigh_5; }
	inline uint64_t* get_address_of_m_GuidHigh_5() { return &___m_GuidHigh_5; }
	inline void set_m_GuidHigh_5(uint64_t value)
	{
		___m_GuidHigh_5 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjects_6() { return static_cast<int32_t>(offsetof(XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260, ___m_ReferenceObjects_6)); }
	inline List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * get_m_ReferenceObjects_6() const { return ___m_ReferenceObjects_6; }
	inline List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 ** get_address_of_m_ReferenceObjects_6() { return &___m_ReferenceObjects_6; }
	inline void set_m_ReferenceObjects_6(List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * value)
	{
		___m_ReferenceObjects_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_ReferenceObjects_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEOBJECTLIBRARY_TC9950535C1214232A691C32EDA0E95C703056260_H
#ifndef XRREFERENCEPOINTSUBSYSTEM_TF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3_H
#define XRREFERENCEPOINTSUBSYSTEM_TF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem
struct  XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3  : public TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::m_Provider
	IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * ___m_Provider_2;
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::m_DefaultReferencePoint
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___m_DefaultReferencePoint_3;

public:
	inline static int32_t get_offset_of_m_Provider_2() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3, ___m_Provider_2)); }
	inline IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * get_m_Provider_2() const { return ___m_Provider_2; }
	inline IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 ** get_address_of_m_Provider_2() { return &___m_Provider_2; }
	inline void set_m_Provider_2(IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * value)
	{
		___m_Provider_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Provider_2), value);
	}

	inline static int32_t get_offset_of_m_DefaultReferencePoint_3() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3, ___m_DefaultReferencePoint_3)); }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  get_m_DefaultReferencePoint_3() const { return ___m_DefaultReferencePoint_3; }
	inline XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * get_address_of_m_DefaultReferencePoint_3() { return &___m_DefaultReferencePoint_3; }
	inline void set_m_DefaultReferencePoint_3(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  value)
	{
		___m_DefaultReferencePoint_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEPOINTSUBSYSTEM_TF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3_H
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA303D95DAA9717D8D3148C3F20FA1B2750CE77B4_gshared (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3D111B64EA07FCA753146B875D55422A5191B57F  List_1_GetEnumerator_m7ABEC2AD664AC6AC1073E546BAAFC0350626A321_gshared (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  List_1_get_Item_mE2BB4CDB177C0DA1EF1FB0A174459691F207C7DF_gshared (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>::IndexOf(!0)
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m80147D21315270B53CA3E7AE6FA3B97264231AB2_gshared (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * __this, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m370BA08A79B7950CA8E75862CD6F4921BAF6D7AB_gshared (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7BED931B501BCE6534C3BC2DC0CA30C73E917F90_gshared (TrackingSubsystem_2_tA3D4B822865BAE0754B253CF8551A3EBB7073851 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.SubsystemDescriptor`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SubsystemDescriptor_1__ctor_m6A989C5976D265F4D4FB235D5E46F5DB69626E60_gshared (SubsystemDescriptor_1_t95BE9733705BCAF0B9A5388CAE064972876C8567 * __this, const RuntimeMethod* method);
// !0 UnityEngine.Experimental.Subsystem`1<System.Object>::get_SubsystemDescriptor()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Subsystem_1_get_SubsystemDescriptor_mD96F2CEA4EF5CB4A047906E686D94D50BB0E1C69_gshared (Subsystem_1_t3C9464E9C57AFD87BCA00E457B3C2FCB3AFA269E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Subsystem`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Subsystem_1__ctor_mC0993FFBCFCEB3A64FBBD9DF5051AC41DB7619AF_gshared (Subsystem_1_t3C9464E9C57AFD87BCA00E457B3C2FCB3AFA269E * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
extern "C" IL2CPP_METHOD_ATTR Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared (int32_t p0, const RuntimeMethod* method);

// System.String UnityEngine.XR.ARSubsystems.XRReferenceObject::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* XRReferenceObject_get_name_mB9D4C5BF34D4FF064180412CCE6585867BA98718 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * __this, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.ARSubsystems.GuidUtil::Compose(System.UInt64,System.UInt64)
extern "C" IL2CPP_METHOD_ATTR Guid_t  GuidUtil_Compose_mF0A2DF31C9F5E45DC7786601C82B926546B021D4 (uint64_t ___low0, uint64_t ___high1, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.ARSubsystems.XRReferenceObject::get_guid()
extern "C" IL2CPP_METHOD_ATTR Guid_t  XRReferenceObject_get_guid_mA7BD0F3F54EABC39D19355113087CD4DFF94BE57 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>::GetEnumerator()
inline Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F  List_1_GetEnumerator_mC07E381535940BCF47E02BD6CA84103EBBBB217E (List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F  (*) (List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>::get_Current()
inline XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * Enumerator_get_Current_mD47F152CC824D5536C956CF7F08372836B4344C6 (Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F * __this, const RuntimeMethod* method)
{
	return ((  XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * (*) (Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>::MoveNext()
inline bool Enumerator_MoveNext_m0B347A783040C9CE4B9C1889A87ED80B3A0DCB8B (Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>::Dispose()
inline void Enumerator_Dispose_m7B6EFE249DF6F43B30BEE8350B87A4231CAA0406 (Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry(System.Type)
extern "C" IL2CPP_METHOD_ATTR XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * XRReferenceObject_FindEntry_mBCEBCEF4265B7D210FFA15179493BF8BDBB70C94 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m90EB651A751C3444BADBBD5401109CE05B3E1CFB (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceObject::Equals(UnityEngine.XR.ARSubsystems.XRReferenceObject)
extern "C" IL2CPP_METHOD_ATTR bool XRReferenceObject_Equals_m504798221B2E8A72005FD241A5C5E2A063FF37A2 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * __this, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  ___other0, const RuntimeMethod* method);
// System.Int32 System.UInt64::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD (uint64_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferenceObject::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRReferenceObject_GetHashCode_mE918BE08147EE066AF8CC5971E4F5A9221881678 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceObject::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRReferenceObject_Equals_mC83DEBBA89CBF9EF334B79634C9CA099B166DBC9 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>::get_Count()
inline int32_t List_1_get_Count_mA303D95DAA9717D8D3148C3F20FA1B2750CE77B4 (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 *, const RuntimeMethod*))List_1_get_Count_mA303D95DAA9717D8D3148C3F20FA1B2750CE77B4_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>::GetEnumerator()
inline Enumerator_t3D111B64EA07FCA753146B875D55422A5191B57F  List_1_GetEnumerator_m7ABEC2AD664AC6AC1073E546BAAFC0350626A321 (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3D111B64EA07FCA753146B875D55422A5191B57F  (*) (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 *, const RuntimeMethod*))List_1_GetEnumerator_m7ABEC2AD664AC6AC1073E546BAAFC0350626A321_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>::get_Item(System.Int32)
inline XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  List_1_get_Item_mE2BB4CDB177C0DA1EF1FB0A174459691F207C7DF (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  (*) (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 *, int32_t, const RuntimeMethod*))List_1_get_Item_mE2BB4CDB177C0DA1EF1FB0A174459691F207C7DF_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>::IndexOf(!0)
inline int32_t List_1_IndexOf_m80147D21315270B53CA3E7AE6FA3B97264231AB2 (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * __this, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 *, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA , const RuntimeMethod*))List_1_IndexOf_m80147D21315270B53CA3E7AE6FA3B97264231AB2_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObject>::.ctor()
inline void List_1__ctor_m370BA08A79B7950CA8E75862CD6F4921BAF6D7AB (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 *, const RuntimeMethod*))List_1__ctor_m370BA08A79B7950CA8E75862CD6F4921BAF6D7AB_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::get_invalidId()
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD (const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::get_identity()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF (const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePoint::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePoint__ctor_mF823D8DC414C0B110A0C29F28668C1F3DA2B2997 (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePoint::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,System.Guid)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePoint__ctor_m816965A70CDD2827DE0808A49B135E411E8532BB (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, Guid_t  ___sessionId4, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::get_trackableId()
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRReferencePoint_get_trackableId_m6D53542802F2444CE58861B8868274F9A8296D88 (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::get_pose()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRReferencePoint_get_pose_mA4320629B8C7AE23D97FCD8E2C5FB9C9FB6AED9C (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::get_trackingState()
extern "C" IL2CPP_METHOD_ATTR int32_t XRReferencePoint_get_trackingState_mBA0DB4050B734039D22D0ECF69CD6E8896DF52B8 (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::get_nativePtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t XRReferencePoint_get_nativePtr_mE9EC85AD0E4976145CB0EDC4A74AA5BB076C5789 (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.ARSubsystems.XRReferencePoint::get_sessionId()
extern "C" IL2CPP_METHOD_ATTR Guid_t  XRReferencePoint_get_sessionId_m5DCAF1725B8A29481940252D80634C99A3C2F0D0 (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.TrackableId::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackableId_GetHashCode_m89E7236D11700A1FAF335918CA65CDEB1BF4D973 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Pose::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Pose_GetHashCode_m17AC0D28F5BD43DE0CCFA4CC1A870C525E0D6066 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A (int32_t* __this, const RuntimeMethod* method);
// System.Int32 System.IntPtr::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m0A6AE0C85A4AEEA127235FB5A32056F630E3749A (intptr_t* __this, const RuntimeMethod* method);
// System.Int32 System.Guid::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Guid_GetHashCode_mEB01C6BA267B1CCD624BCA91D09B803C9B6E5369 (Guid_t * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferencePoint::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRReferencePoint_GetHashCode_mD7BC968C92D3CC25E7D06502570A94B104F9E32C (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::Equals(UnityEngine.XR.ARSubsystems.TrackableId)
extern "C" IL2CPP_METHOD_ATTR bool TrackableId_Equals_mCE458E0FDCDD6E339FCC1926EE88EB7B3D45F943 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Pose::Equals(UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR bool Pose_Equals_m867264C8DF91FF8DC3AD957EF1625902CDEBAEDD (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  p0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean System.Guid::Equals(System.Guid)
extern "C" IL2CPP_METHOD_ATTR bool Guid_Equals_mC7FC66A530A8B6FC95E8F5F9E34AE81FD44CD245 (Guid_t * __this, Guid_t  p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePoint::Equals(UnityEngine.XR.ARSubsystems.XRReferencePoint)
extern "C" IL2CPP_METHOD_ATTR bool XRReferencePoint_Equals_mA58F0C1C266D740037A7D6700857A5E739160AF8 (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePoint::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRReferencePoint_Equals_mD22BFD6609737E5CC6A31D2C1B519CD5207C89BC (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRReferencePoint,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor>::.ctor()
inline void TrackingSubsystem_2__ctor_mC69AD6AEF92FA2B9D7D5B83C79A418BAB05D0F76 (TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899 *, const RuntimeMethod*))TrackingSubsystem_2__ctor_m7BED931B501BCE6534C3BC2DC0CA30C73E917F90_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::GetDefault()
extern "C" IL2CPP_METHOD_ATTR XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  XRReferencePoint_GetDefault_m2C8B9BC8378BD9F7C636DCD1C90D4793F9C80BF8 (const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor__ctor_mB5AD6FF2521FF148612D7662DF93BD6CA68069B2 (XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D * __this, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___cinfo0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SubsystemRegistration::CreateDescriptor(UnityEngine.Experimental.SubsystemDescriptor)
extern "C" IL2CPP_METHOD_ATTR bool SubsystemRegistration_CreateDescriptor_m85D30078090DD633C48CDFE85A8A0BEF2A69519D (SubsystemDescriptor_t39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_mB407BE84B81017983C215B6A1F715785091C7635 (SubsystemDescriptor_1_t1DFF18644490E72CC17321AEABA43605664F8235 * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_t1DFF18644490E72CC17321AEABA43605664F8235 *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m6A989C5976D265F4D4FB235D5E46F5DB69626E60_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mB1E35C0B52EEAA8EB934C4D3F02465CF8A752015 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.SubsystemDescriptor::set_id(System.String)
extern "C" IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_id_mB3D1A7164F096650AE5249037EEA91AB92E21AB4 (SubsystemDescriptor_t39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4 * __this, String_t* p0, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m764697AF3D79BDFA6010287A8B542F9323693096 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.SubsystemDescriptor::set_subsystemImplementationType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void SubsystemDescriptor_set_subsystemImplementationType_m17E1DD79B83EC74F0171B4D0B3F0478FBC91F202 (SubsystemDescriptor_t39CE9D1BAAE27EC6FC62A49C82C06B1119F7EEC4 * __this, Type_t * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::get_supportsTrackableAttachments()
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m041B030B1BD0114D8FCE9A9F804CFF5984FB07BD (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::set_supportsTrackableAttachments(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor_set_supportsTrackableAttachments_mA4F7709D4C170D414F862490ABBF0090DE46A8AB (XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_id(System.String)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_id_m9CAE75E21B0DAE38A8619D1B04D17EDEC81E97D7 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m9D5112215C6766E6561E42DA858B7F3D72F0005E (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::set_supportsTrackableAttachments(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_mC0A061EDA609485B0E83FC7857E8573C93F38FD7 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mA1002FD6C9DDB0C39442B7692A7CDB5562C61086 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo)
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_Equals_m7D9C657E628D2DFC390587FBE0BDFEB1D5CDC92D (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_Equals_mC210DE78D45CD980BF7B5A186241CFC5CC243D2E (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// !0 UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::get_SubsystemDescriptor()
inline XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * Subsystem_1_get_SubsystemDescriptor_m7D9A1F7F1631768F5DE2EC7DA7FC3FCCA24336C7 (Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9 * __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * (*) (Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9 *, const RuntimeMethod*))Subsystem_1_get_SubsystemDescriptor_mD96F2CEA4EF5CB4A047906E686D94D50BB0E1C69_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsInstall()
extern "C" IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m2AA89682007FE1D8BB811FD152DE326FF7BB5A99 (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::.ctor()
inline void Subsystem_1__ctor_m9A7BD362BD1D6DD43C14E819F40B5BA593F5A07E (Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Subsystem_1_t30A0E0214407A620CECF452A54D6676F5A6574B9 *, const RuntimeMethod*))Subsystem_1__ctor_mC0993FFBCFCEB3A64FBBD9DF5051AC41DB7619AF_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability>::CreateResolvedPromise(T)
inline Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D (int32_t p0, const RuntimeMethod* method)
{
	return ((  Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared)(p0, method);
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus>::CreateResolvedPromise(T)
inline Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * Promise_1_CreateResolvedPromise_m33AA652B2B2460A4777ED6EA73923156280826AA (int32_t p0, const RuntimeMethod* method)
{
	return ((  Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * (*) (int32_t, const RuntimeMethod*))Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared)(p0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_mF2A65C6A814FB2D22D5ED1608E5EFD5B0CD9A6E2 (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___cinfo0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>::.ctor()
inline void SubsystemDescriptor_1__ctor_m5CC83C3B4353C7E10253E36148E70B9223C821DF (SubsystemDescriptor_1_t999BC3F05F1F174685ED49ECA369CC8E2B203F2E * __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemDescriptor_1_t999BC3F05F1F174685ED49ECA369CC8E2B203F2E *, const RuntimeMethod*))SubsystemDescriptor_1__ctor_m6A989C5976D265F4D4FB235D5E46F5DB69626E60_gshared)(__this, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m998EB4BD213159391A0A66FD6C002C1CE5CD14E8 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_subsystemImplementationType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m63942F2B0929DF14EB7885E7553A9970FBD3E108 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsInstall()
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m5FBFD4D2F10A6A46F66F4EFBC61EA14DE0FEED99 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m010EE3F0CB4B143A90B93C1F10F063FB12546920 (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::get_supportsMatchFrameRate()
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_mE591F09F87EA8F4E5563039C47A6331E6AF31895 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_mC2B0189D51BF3B64026D01DD6A088052C5D74BFC (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsInstall(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mD74EB42C503AC5393E630A56E3AE579FE1558660 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_supportsMatchFrameRate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m2B92004D3F2E01EA5DDFBF5F928C5604E68B8D21 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_id(System.String)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_id_mC4FF3C524E18065C55B5142D58FBD58A66479A41 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::set_subsystemImplementationType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m3C759AEC2943DE059B20AA7F5A5B932B7432473C (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Int32 System.Boolean::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737 (bool* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m06E1060A5995A0C346AB7C0E56CCAC4BEC758A6E (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo)
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_Equals_mC919333F29E857CC3F929451A080AC4A38385E01 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2118FE6BBF6355D645E72BDD6662CF313B8E94EB (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
extern "C" IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenOrientation(UnityEngine.ScreenOrientation)
extern "C" IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m7C20FD52988E0F21604700B5CDA93FBA63DD28C6 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
extern "C" IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenDimensions(UnityEngine.Vector2Int)
extern "C" IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_m41570268847916BA02DD2427BDDB08B3D466A905 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_m73E874F4E94DF3D2603035E2E892873B139A7A9E (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_m3E0C208F41FAC84F879A073F85FB9DC0F1C09520 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
extern "C" IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mFE8BAF000FDC02612C5D563960EB974E510DEAB3 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_m415AB0E24C9CF0C013872ED16C571B65DACF24B1 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_m7150FEAE08C59544392C3D47B3CB5AC318B82F4A (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2Int::Equals(UnityEngine.Vector2Int)
extern "C" IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m65420C995F326F5C340E4825EA5E16BDE68F5A9C (Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  p0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_nativeTexture()
extern "C" IL2CPP_METHOD_ATTR intptr_t XRTextureDescriptor_get_nativeTexture_m83CAA03353C203B7D38618C1963C715F052081F8 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_nativeTexture(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_nativeTexture_mEF92A3E263840B8F428C314323C20A11F896D907 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, intptr_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_width_m158B2CEE4A0F56DF263BB642F5E4A3C3CF339E0B (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_width(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_width_m59E159F83238991BAD9838C5835A07E44F6A163E (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_height_mCE50370000BCF4A70B95344A0731A771401C0894 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_height(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_height_mE690E293BE1FE8009052CC87FA454FB79DE9DF0E (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_mipmapCount()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_mipmapCount_m491B149D8BBF148B2030214818E237A28D9B6CC4 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_mipmapCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_mipmapCount_m8CC98FD1B188CA92DE7C1C430BF71E11E7AD7858 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_format_mA2DA22DC1DEBCAD27A9C69F3374D614DF1C3FA2B (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_format(UnityEngine.TextureFormat)
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_format_m2BEDFB4C31E590B2C2AAE7145AEAE714491E0EA6 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_propertyNameId()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_propertyNameId_mA3A29036B96A64D1C4F147678E60E2BFCAAAAFF0 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_propertyNameId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_propertyNameId_m87654C29B3CEFA71D22E9F1323058334E8338B4F (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_valid()
extern "C" IL2CPP_METHOD_ATTR bool XRTextureDescriptor_get_valid_mF060565C5E24FDF97771F6FDA3235562DF01977B (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Int32_Equals_mC8C45B8899F291D55A6152C8FEDB3CFFF181170B (int32_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::hasIdenticalTextureMetadata(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
extern "C" IL2CPP_METHOD_ATTR bool XRTextureDescriptor_hasIdenticalTextureMetadata_mD9C2A76A8B680BB7B2742F82235E40977CD098AE (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Reset()
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_Reset_m64A787FBD1F11161369A72A7D61763DDF8D74EBC (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
extern "C" IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m124C4B8E0370717E0714FB2D28493A77034C6E38 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m8D2E1A6303E60A653F70870CBD04845414F6A0A5 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_GetHashCode_mE61628A57D74C31744B57EBFBE8E8EDFA673B65F (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method);
// System.String System.IntPtr::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_m6ADB8DBD989D878D694B4031CC08461B1E2C51FF (intptr_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARSubsystems.XRTextureDescriptor::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* XRTextureDescriptor_ToString_mA7C17125D54876E04397C7022031B6A346CA9A7F (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRTrackedImage::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,System.Guid,UnityEngine.Pose,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void XRTrackedImage__ctor_mF31D86D7A523FD9EE7F4166A9ABB04272E93436B (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Guid_t  ___sourceImageId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___size3, int32_t ___trackingState4, intptr_t ___nativePtr5, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::get_trackableId()
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRTrackedImage_get_trackableId_m6EB6DBACC95E5EE2AFEE3CE421F4C123F32E9CB8 (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::get_sourceImageId()
extern "C" IL2CPP_METHOD_ATTR Guid_t  XRTrackedImage_get_sourceImageId_m402089FA779BB9821B50B23F79579466D895939B (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::get_pose()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRTrackedImage_get_pose_m0566E087CA2DC99DF749E80277510C61DCF13186 (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  XRTrackedImage_get_size_m746034D0E2FD28C9E48A90965E4FCD9137988906 (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::get_trackingState()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTrackedImage_get_trackingState_mA7177B042E8F9F9B584582970BC5FF0377CE94DB (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::get_nativePtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t XRTrackedImage_get_nativePtr_mB44BA43B02762B89091D56F254221F0741808629 (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRTrackedImage::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTrackedImage_GetHashCode_mC1A5AB6C756498852952CB1B9F4F69D1177A02A6 (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableId::op_Equality(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.TrackableId)
extern "C" IL2CPP_METHOD_ATTR bool TrackableId_op_Equality_m3171D96F331BC92756A7B171C85CD627442E7873 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___id10, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___id21, const RuntimeMethod* method);
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
extern "C" IL2CPP_METHOD_ATTR bool Guid_op_Equality_m3D98BA18CDAF0C6C329F86720B5CD61A170A3E52 (Guid_t  p0, Guid_t  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Pose::op_Equality(UnityEngine.Pose,UnityEngine.Pose)
extern "C" IL2CPP_METHOD_ATTR bool Pose_op_Equality_m412E2304E51F689B220BDAF927058DBEC0CEDD5B (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  p0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m0E86E1B1038DDB8554A8A0D58729A7788D989588 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedImage::Equals(UnityEngine.XR.ARSubsystems.XRTrackedImage)
extern "C" IL2CPP_METHOD_ATTR bool XRTrackedImage_Equals_m12A588942242306FC770FD88421D00750F22A141 (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedImage::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRTrackedImage_Equals_m7C7F0B2FC7A6818276C2BC763CF0465333453B9C (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::get_trackableId()
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRTrackedObject_get_trackableId_mB720981791DE599B20879640517A33BE2FE2D84D (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::get_pose()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRTrackedObject_get_pose_mF865EAF61AE8767D6A0CCF59494A51F2D670F603 (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::get_trackingState()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTrackedObject_get_trackingState_m0BD1D36132D7B57151A4CAE07B94238B2AEF3DED (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::get_nativePtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t XRTrackedObject_get_nativePtr_mD654B09F24E79E99FA2A6B1A95C4EAFDF09C639F (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, const RuntimeMethod* method);
// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::get_referenceObjectGuid()
extern "C" IL2CPP_METHOD_ATTR Guid_t  XRTrackedObject_get_referenceObjectGuid_m09514BB6AD9782AF342076F85BB28631C458BDC8 (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRTrackedObject::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,System.Guid)
extern "C" IL2CPP_METHOD_ATTR void XRTrackedObject__ctor_m81B6436D0E3BA4E73E1445074972DB81E3D27275 (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, Guid_t  ___referenceObjectGuid4, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedObject::Equals(UnityEngine.XR.ARSubsystems.XRTrackedObject)
extern "C" IL2CPP_METHOD_ATTR bool XRTrackedObject_Equals_m925ED652F271F772E282C3621290411A259CBEEE (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedObject::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRTrackedObject_Equals_mF0CA07E970C48D514F2B9BBEC0FE44F46429C524 (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRTrackedObject::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTrackedObject_GetHashCode_m2F1509AA89026BB34BFFE2C07529AAB3B5B0A429 (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRReferenceObject
extern "C" void XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshal_pinvoke(const XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA& unmarshaled, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Entries_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Entries' of type 'XRReferenceObject'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Entries_3Exception, NULL, NULL);
}
extern "C" void XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshal_pinvoke_back(const XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshaled_pinvoke& marshaled, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA& unmarshaled)
{
	Exception_t* ___m_Entries_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Entries' of type 'XRReferenceObject'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Entries_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRReferenceObject
extern "C" void XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshal_pinvoke_cleanup(XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRReferenceObject
extern "C" void XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshal_com(const XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA& unmarshaled, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshaled_com& marshaled)
{
	Exception_t* ___m_Entries_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Entries' of type 'XRReferenceObject'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Entries_3Exception, NULL, NULL);
}
extern "C" void XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshal_com_back(const XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshaled_com& marshaled, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA& unmarshaled)
{
	Exception_t* ___m_Entries_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Entries' of type 'XRReferenceObject'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Entries_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRReferenceObject
extern "C" void XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshal_com_cleanup(XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRReferenceObject::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* XRReferenceObject_get_name_mB9D4C5BF34D4FF064180412CCE6585867BA98718 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_m_Name_2();
		return L_0;
	}
}
extern "C"  String_t* XRReferenceObject_get_name_mB9D4C5BF34D4FF064180412CCE6585867BA98718_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * _thisAdjusted = reinterpret_cast<XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA *>(__this + 1);
	return XRReferenceObject_get_name_mB9D4C5BF34D4FF064180412CCE6585867BA98718(_thisAdjusted, method);
}
// System.Guid UnityEngine.XR.ARSubsystems.XRReferenceObject::get_guid()
extern "C" IL2CPP_METHOD_ATTR Guid_t  XRReferenceObject_get_guid_mA7BD0F3F54EABC39D19355113087CD4DFF94BE57 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_GuidLow_0();
		uint64_t L_1 = __this->get_m_GuidHigh_1();
		Guid_t  L_2 = GuidUtil_Compose_mF0A2DF31C9F5E45DC7786601C82B926546B021D4(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  Guid_t  XRReferenceObject_get_guid_mA7BD0F3F54EABC39D19355113087CD4DFF94BE57_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * _thisAdjusted = reinterpret_cast<XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA *>(__this + 1);
	return XRReferenceObject_get_guid_mA7BD0F3F54EABC39D19355113087CD4DFF94BE57(_thisAdjusted, method);
}
// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry(System.Type)
extern "C" IL2CPP_METHOD_ATTR XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * XRReferenceObject_FindEntry_mBCEBCEF4265B7D210FFA15179493BF8BDBB70C94 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferenceObject_FindEntry_mBCEBCEF4265B7D210FFA15179493BF8BDBB70C94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F  V_0;
	memset(&V_0, 0, sizeof(V_0));
	XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * V_1 = NULL;
	XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteralD0A3E7F81A9885E99049D1CAE0336D269D5E47A9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XRReferenceObject_FindEntry_mBCEBCEF4265B7D210FFA15179493BF8BDBB70C94_RuntimeMethod_var);
	}

IL_0014:
	{
		List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * L_3 = __this->get_m_Entries_3();
		NullCheck(L_3);
		Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F  L_4 = List_1_GetEnumerator_mC07E381535940BCF47E02BD6CA84103EBBBB217E(L_3, /*hidden argument*/List_1_GetEnumerator_mC07E381535940BCF47E02BD6CA84103EBBBB217E_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0045;
		}

IL_0022:
		{
			XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * L_5 = Enumerator_get_Current_mD47F152CC824D5536C956CF7F08372836B4344C6((Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F *)(&V_0), /*hidden argument*/Enumerator_get_Current_mD47F152CC824D5536C956CF7F08372836B4344C6_RuntimeMethod_var);
			V_1 = L_5;
			XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * L_6 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0045;
			}
		}

IL_0033:
		{
			XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * L_8 = V_1;
			NullCheck(L_8);
			Type_t * L_9 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_8, /*hidden argument*/NULL);
			Type_t * L_10 = ___type0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_11 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0045;
			}
		}

IL_0041:
		{
			XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * L_12 = V_1;
			V_2 = L_12;
			IL2CPP_LEAVE(0x60, FINALLY_0050);
		}

IL_0045:
		{
			bool L_13 = Enumerator_MoveNext_m0B347A783040C9CE4B9C1889A87ED80B3A0DCB8B((Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m0B347A783040C9CE4B9C1889A87ED80B3A0DCB8B_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0022;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7B6EFE249DF6F43B30BEE8350B87A4231CAA0406((Enumerator_t8F224602FB8179E9E02E220ED94A72EA075C763F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7B6EFE249DF6F43B30BEE8350B87A4231CAA0406_RuntimeMethod_var);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005e:
	{
		return (XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 *)NULL;
	}

IL_0060:
	{
		XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * L_14 = V_2;
		return L_14;
	}
}
extern "C"  XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * XRReferenceObject_FindEntry_mBCEBCEF4265B7D210FFA15179493BF8BDBB70C94_AdjustorThunk (RuntimeObject * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * _thisAdjusted = reinterpret_cast<XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA *>(__this + 1);
	return XRReferenceObject_FindEntry_mBCEBCEF4265B7D210FFA15179493BF8BDBB70C94(_thisAdjusted, ___type0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceObject::Equals(UnityEngine.XR.ARSubsystems.XRReferenceObject)
extern "C" IL2CPP_METHOD_ATTR bool XRReferenceObject_Equals_m504798221B2E8A72005FD241A5C5E2A063FF37A2 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * __this, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  ___other0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_GuidLow_0();
		XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  L_1 = ___other0;
		uint64_t L_2 = L_1.get_m_GuidLow_0();
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		uint64_t L_3 = __this->get_m_GuidHigh_1();
		XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  L_4 = ___other0;
		uint64_t L_5 = L_4.get_m_GuidHigh_1();
		if ((!(((uint64_t)L_3) == ((uint64_t)L_5))))
		{
			goto IL_003e;
		}
	}
	{
		String_t* L_6 = __this->get_m_Name_2();
		XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  L_7 = ___other0;
		String_t* L_8 = L_7.get_m_Name_2();
		bool L_9 = String_Equals_m90EB651A751C3444BADBBD5401109CE05B3E1CFB(L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * L_10 = __this->get_m_Entries_3();
		XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  L_11 = ___other0;
		List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * L_12 = L_11.get_m_Entries_3();
		return (bool)((((RuntimeObject*)(List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE *)L_10) == ((RuntimeObject*)(List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE *)L_12))? 1 : 0);
	}

IL_003e:
	{
		return (bool)0;
	}
}
extern "C"  bool XRReferenceObject_Equals_m504798221B2E8A72005FD241A5C5E2A063FF37A2_AdjustorThunk (RuntimeObject * __this, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  ___other0, const RuntimeMethod* method)
{
	XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * _thisAdjusted = reinterpret_cast<XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA *>(__this + 1);
	return XRReferenceObject_Equals_m504798221B2E8A72005FD241A5C5E2A063FF37A2(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferenceObject::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRReferenceObject_GetHashCode_mE918BE08147EE066AF8CC5971E4F5A9221881678 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * __this, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		uint64_t* L_0 = __this->get_address_of_m_GuidLow_0();
		int32_t L_1 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_0, /*hidden argument*/NULL);
		uint64_t* L_2 = __this->get_address_of_m_GuidHigh_1();
		int32_t L_3 = UInt64_GetHashCode_mCBB4031BF70D0CBD023B4D71F4FEA37BE2C749AD((uint64_t*)L_2, /*hidden argument*/NULL);
		String_t* L_4 = __this->get_m_Name_2();
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739)));
		if (!L_4)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739)));
			goto IL_0038;
		}
	}
	{
		String_t* L_5 = __this->get_m_Name_2();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0039:
	{
		List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * L_7 = __this->get_m_Entries_3();
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0)), (int32_t)((int32_t)486187739)));
		if (!L_7)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0)), (int32_t)((int32_t)486187739)));
			goto IL_0055;
		}
	}
	{
		List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * L_8 = __this->get_m_Entries_3();
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_8);
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0056:
	{
		return ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0));
	}
}
extern "C"  int32_t XRReferenceObject_GetHashCode_mE918BE08147EE066AF8CC5971E4F5A9221881678_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * _thisAdjusted = reinterpret_cast<XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA *>(__this + 1);
	return XRReferenceObject_GetHashCode_mE918BE08147EE066AF8CC5971E4F5A9221881678(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceObject::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRReferenceObject_Equals_mC83DEBBA89CBF9EF334B79634C9CA099B166DBC9 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferenceObject_Equals_mC83DEBBA89CBF9EF334B79634C9CA099B166DBC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRReferenceObject_Equals_m504798221B2E8A72005FD241A5C5E2A063FF37A2((XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA *)__this, ((*(XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA *)((XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA *)UnBox(L_1, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool XRReferenceObject_Equals_mC83DEBBA89CBF9EF334B79634C9CA099B166DBC9_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * _thisAdjusted = reinterpret_cast<XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA *>(__this + 1);
	return XRReferenceObject_Equals_mC83DEBBA89CBF9EF334B79634C9CA099B166DBC9(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceObject::op_Equality(UnityEngine.XR.ARSubsystems.XRReferenceObject,UnityEngine.XR.ARSubsystems.XRReferenceObject)
extern "C" IL2CPP_METHOD_ATTR bool XRReferenceObject_op_Equality_mA352611067E59B117AB607BAE3CD182706C462D0 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  ___lhs0, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  ___rhs1, const RuntimeMethod* method)
{
	{
		XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  L_0 = ___rhs1;
		bool L_1 = XRReferenceObject_Equals_m504798221B2E8A72005FD241A5C5E2A063FF37A2((XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceObject::op_Inequality(UnityEngine.XR.ARSubsystems.XRReferenceObject,UnityEngine.XR.ARSubsystems.XRReferenceObject)
extern "C" IL2CPP_METHOD_ATTR bool XRReferenceObject_op_Inequality_m14C3E4A6DDD3BD64A168898642FAC1741D542155 (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  ___lhs0, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  ___rhs1, const RuntimeMethod* method)
{
	{
		XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  L_0 = ___rhs1;
		bool L_1 = XRReferenceObject_Equals_m504798221B2E8A72005FD241A5C5E2A063FF37A2((XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XRReferenceObjectEntry__ctor_mB617B601F6FA34FA4DAB5E9AE50925FCBFB1B6FE (XRReferenceObjectEntry_t15A2A076A0AD9C98A46C957FAE2029EF6FB81FC8 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::get_count()
extern "C" IL2CPP_METHOD_ATTR int32_t XRReferenceObjectLibrary_get_count_mAB2D34091CFC65B152FD3FD7095480FF5D6CC99C (XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferenceObjectLibrary_get_count_mAB2D34091CFC65B152FD3FD7095480FF5D6CC99C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * L_0 = __this->get_m_ReferenceObjects_6();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mA303D95DAA9717D8D3148C3F20FA1B2750CE77B4(L_0, /*hidden argument*/List_1_get_Count_mA303D95DAA9717D8D3148C3F20FA1B2750CE77B4_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.ARSubsystems.XRReferenceObject> UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t3D111B64EA07FCA753146B875D55422A5191B57F  XRReferenceObjectLibrary_GetEnumerator_m7ECEFBA77B4669ADD3EDCE0841E4FF9C79C3312D (XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferenceObjectLibrary_GetEnumerator_m7ECEFBA77B4669ADD3EDCE0841E4FF9C79C3312D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * L_0 = __this->get_m_ReferenceObjects_6();
		NullCheck(L_0);
		Enumerator_t3D111B64EA07FCA753146B875D55422A5191B57F  L_1 = List_1_GetEnumerator_m7ABEC2AD664AC6AC1073E546BAAFC0350626A321(L_0, /*hidden argument*/List_1_GetEnumerator_m7ABEC2AD664AC6AC1073E546BAAFC0350626A321_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.XRReferenceObject UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  XRReferenceObjectLibrary_get_Item_m09F2CB2A14D830F37053B8B6E02E9659F3527996 (XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferenceObjectLibrary_get_Item_m09F2CB2A14D830F37053B8B6E02E9659F3527996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * L_0 = __this->get_m_ReferenceObjects_6();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  L_2 = List_1_get_Item_mE2BB4CDB177C0DA1EF1FB0A174459691F207C7DF(L_0, L_1, /*hidden argument*/List_1_get_Item_mE2BB4CDB177C0DA1EF1FB0A174459691F207C7DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Guid UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::get_guid()
extern "C" IL2CPP_METHOD_ATTR Guid_t  XRReferenceObjectLibrary_get_guid_mC10138A0A17DF18E104F14079063BA1C12A3DF87 (XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_m_GuidLow_4();
		uint64_t L_1 = __this->get_m_GuidHigh_5();
		Guid_t  L_2 = GuidUtil_Compose_mF0A2DF31C9F5E45DC7786601C82B926546B021D4(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::indexOf(UnityEngine.XR.ARSubsystems.XRReferenceObject)
extern "C" IL2CPP_METHOD_ATTR int32_t XRReferenceObjectLibrary_indexOf_mBF56521C68737F5FBBA77684AD76A78E19C5B1F0 (XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * __this, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  ___referenceObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferenceObjectLibrary_indexOf_mBF56521C68737F5FBBA77684AD76A78E19C5B1F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * L_0 = __this->get_m_ReferenceObjects_6();
		XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  L_1 = ___referenceObject0;
		NullCheck(L_0);
		int32_t L_2 = List_1_IndexOf_m80147D21315270B53CA3E7AE6FA3B97264231AB2(L_0, L_1, /*hidden argument*/List_1_IndexOf_m80147D21315270B53CA3E7AE6FA3B97264231AB2_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XRReferenceObjectLibrary__ctor_mA11977E1ED613E7E7EF79C3F2494E243F619C442 (XRReferenceObjectLibrary_tC9950535C1214232A691C32EDA0E95C703056260 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferenceObjectLibrary__ctor_mA11977E1ED613E7E7EF79C3F2494E243F619C442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 * L_0 = (List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79 *)il2cpp_codegen_object_new(List_1_tBCCE21E4A74A6344171668FB521DE76F9004EE79_il2cpp_TypeInfo_var);
		List_1__ctor_m370BA08A79B7950CA8E75862CD6F4921BAF6D7AB(L_0, /*hidden argument*/List_1__ctor_m370BA08A79B7950CA8E75862CD6F4921BAF6D7AB_RuntimeMethod_var);
		__this->set_m_ReferenceObjects_6(L_0);
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
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
// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::GetDefault()
extern "C" IL2CPP_METHOD_ATTR XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  XRReferencePoint_GetDefault_m2C8B9BC8378BD9F7C636DCD1C90D4793F9C80BF8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePoint_GetDefault_m2C8B9BC8378BD9F7C636DCD1C90D4793F9C80BF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_2;
		memset(&L_2, 0, sizeof(L_2));
		XRReferencePoint__ctor_mF823D8DC414C0B110A0C29F28668C1F3DA2B2997((&L_2), L_0, L_1, 0, (intptr_t)(0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePoint::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePoint__ctor_mF823D8DC414C0B110A0C29F28668C1F3DA2B2997 (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePoint__ctor_mF823D8DC414C0B110A0C29F28668C1F3DA2B2997_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		__this->set_m_Id_0(L_0);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = ___pose1;
		__this->set_m_Pose_1(L_1);
		int32_t L_2 = ___trackingState2;
		__this->set_m_TrackingState_2(L_2);
		intptr_t L_3 = ___nativePtr3;
		__this->set_m_NativePtr_3((intptr_t)L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_4 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->get_Empty_0();
		__this->set_m_SessionId_4(L_4);
		return;
	}
}
extern "C"  void XRReferencePoint__ctor_mF823D8DC414C0B110A0C29F28668C1F3DA2B2997_AdjustorThunk (RuntimeObject * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + 1);
	XRReferencePoint__ctor_mF823D8DC414C0B110A0C29F28668C1F3DA2B2997(_thisAdjusted, ___trackableId0, ___pose1, ___trackingState2, ___nativePtr3, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePoint::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,System.Guid)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePoint__ctor_m816965A70CDD2827DE0808A49B135E411E8532BB (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, Guid_t  ___sessionId4, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = ___pose1;
		int32_t L_2 = ___trackingState2;
		intptr_t L_3 = ___nativePtr3;
		XRReferencePoint__ctor_mF823D8DC414C0B110A0C29F28668C1F3DA2B2997((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)__this, L_0, L_1, L_2, (intptr_t)L_3, /*hidden argument*/NULL);
		Guid_t  L_4 = ___sessionId4;
		__this->set_m_SessionId_4(L_4);
		return;
	}
}
extern "C"  void XRReferencePoint__ctor_m816965A70CDD2827DE0808A49B135E411E8532BB_AdjustorThunk (RuntimeObject * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, Guid_t  ___sessionId4, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + 1);
	XRReferencePoint__ctor_m816965A70CDD2827DE0808A49B135E411E8532BB(_thisAdjusted, ___trackableId0, ___pose1, ___trackingState2, ___nativePtr3, ___sessionId4, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::get_trackableId()
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRReferencePoint_get_trackableId_m6D53542802F2444CE58861B8868274F9A8296D88 (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
extern "C"  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRReferencePoint_get_trackableId_m6D53542802F2444CE58861B8868274F9A8296D88_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + 1);
	return XRReferencePoint_get_trackableId_m6D53542802F2444CE58861B8868274F9A8296D88(_thisAdjusted, method);
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::get_pose()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRReferencePoint_get_pose_mA4320629B8C7AE23D97FCD8E2C5FB9C9FB6AED9C (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_1();
		return L_0;
	}
}
extern "C"  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRReferencePoint_get_pose_mA4320629B8C7AE23D97FCD8E2C5FB9C9FB6AED9C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + 1);
	return XRReferencePoint_get_pose_mA4320629B8C7AE23D97FCD8E2C5FB9C9FB6AED9C(_thisAdjusted, method);
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::get_trackingState()
extern "C" IL2CPP_METHOD_ATTR int32_t XRReferencePoint_get_trackingState_mBA0DB4050B734039D22D0ECF69CD6E8896DF52B8 (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_TrackingState_2();
		return L_0;
	}
}
extern "C"  int32_t XRReferencePoint_get_trackingState_mBA0DB4050B734039D22D0ECF69CD6E8896DF52B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + 1);
	return XRReferencePoint_get_trackingState_mBA0DB4050B734039D22D0ECF69CD6E8896DF52B8(_thisAdjusted, method);
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::get_nativePtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t XRReferencePoint_get_nativePtr_mE9EC85AD0E4976145CB0EDC4A74AA5BB076C5789 (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_NativePtr_3();
		return (intptr_t)L_0;
	}
}
extern "C"  intptr_t XRReferencePoint_get_nativePtr_mE9EC85AD0E4976145CB0EDC4A74AA5BB076C5789_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + 1);
	return XRReferencePoint_get_nativePtr_mE9EC85AD0E4976145CB0EDC4A74AA5BB076C5789(_thisAdjusted, method);
}
// System.Guid UnityEngine.XR.ARSubsystems.XRReferencePoint::get_sessionId()
extern "C" IL2CPP_METHOD_ATTR Guid_t  XRReferencePoint_get_sessionId_m5DCAF1725B8A29481940252D80634C99A3C2F0D0 (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method)
{
	{
		Guid_t  L_0 = __this->get_m_SessionId_4();
		return L_0;
	}
}
extern "C"  Guid_t  XRReferencePoint_get_sessionId_m5DCAF1725B8A29481940252D80634C99A3C2F0D0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + 1);
	return XRReferencePoint_get_sessionId_m5DCAF1725B8A29481940252D80634C99A3C2F0D0(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferencePoint::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRReferencePoint_GetHashCode_mD7BC968C92D3CC25E7D06502570A94B104F9E32C (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * L_0 = __this->get_address_of_m_Id_0();
		int32_t L_1 = TrackableId_GetHashCode_m89E7236D11700A1FAF335918CA65CDEB1BF4D973((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)L_0, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_2 = __this->get_address_of_m_Pose_1();
		int32_t L_3 = Pose_GetHashCode_m17AC0D28F5BD43DE0CCFA4CC1A870C525E0D6066((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_2, /*hidden argument*/NULL);
		int32_t* L_4 = __this->get_address_of_m_TrackingState_2();
		int32_t L_5 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)L_4, /*hidden argument*/NULL);
		intptr_t* L_6 = __this->get_address_of_m_NativePtr_3();
		int32_t L_7 = IntPtr_GetHashCode_m0A6AE0C85A4AEEA127235FB5A32056F630E3749A((intptr_t*)L_6, /*hidden argument*/NULL);
		Guid_t * L_8 = __this->get_address_of_m_SessionId_4();
		int32_t L_9 = Guid_GetHashCode_mEB01C6BA267B1CCD624BCA91D09B803C9B6E5369((Guid_t *)L_8, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9));
	}
}
extern "C"  int32_t XRReferencePoint_GetHashCode_mD7BC968C92D3CC25E7D06502570A94B104F9E32C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + 1);
	return XRReferencePoint_GetHashCode_mD7BC968C92D3CC25E7D06502570A94B104F9E32C(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePoint::Equals(UnityEngine.XR.ARSubsystems.XRReferencePoint)
extern "C" IL2CPP_METHOD_ATTR bool XRReferencePoint_Equals_mA58F0C1C266D740037A7D6700857A5E739160AF8 (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___other0, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * L_0 = __this->get_address_of_m_Id_0();
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_1 = ___other0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_2 = L_1.get_m_Id_0();
		bool L_3 = TrackableId_Equals_mCE458E0FDCDD6E339FCC1926EE88EB7B3D45F943((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_4 = __this->get_address_of_m_Pose_1();
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_5 = ___other0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_6 = L_5.get_m_Pose_1();
		bool L_7 = Pose_Equals_m867264C8DF91FF8DC3AD957EF1625902CDEBAEDD((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_8 = __this->get_m_TrackingState_2();
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_9 = ___other0;
		int32_t L_10 = L_9.get_m_TrackingState_2();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0059;
		}
	}
	{
		intptr_t L_11 = __this->get_m_NativePtr_3();
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_12 = ___other0;
		intptr_t L_13 = L_12.get_m_NativePtr_3();
		bool L_14 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_11, (intptr_t)L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0059;
		}
	}
	{
		Guid_t * L_15 = __this->get_address_of_m_SessionId_4();
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_16 = ___other0;
		Guid_t  L_17 = L_16.get_m_SessionId_4();
		bool L_18 = Guid_Equals_mC7FC66A530A8B6FC95E8F5F9E34AE81FD44CD245((Guid_t *)L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0059:
	{
		return (bool)0;
	}
}
extern "C"  bool XRReferencePoint_Equals_mA58F0C1C266D740037A7D6700857A5E739160AF8_AdjustorThunk (RuntimeObject * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___other0, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + 1);
	return XRReferencePoint_Equals_mA58F0C1C266D740037A7D6700857A5E739160AF8(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePoint::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRReferencePoint_Equals_mD22BFD6609737E5CC6A31D2C1B519CD5207C89BC (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePoint_Equals_mD22BFD6609737E5CC6A31D2C1B519CD5207C89BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRReferencePoint_Equals_mA58F0C1C266D740037A7D6700857A5E739160AF8((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)__this, ((*(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)UnBox(L_1, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool XRReferencePoint_Equals_mD22BFD6609737E5CC6A31D2C1B519CD5207C89BC_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * _thisAdjusted = reinterpret_cast<XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *>(__this + 1);
	return XRReferencePoint_Equals_mD22BFD6609737E5CC6A31D2C1B519CD5207C89BC(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePoint::op_Equality(UnityEngine.XR.ARSubsystems.XRReferencePoint,UnityEngine.XR.ARSubsystems.XRReferencePoint)
extern "C" IL2CPP_METHOD_ATTR bool XRReferencePoint_op_Equality_mBE34F72FA0469B0D2B97620A8C7F53C01E85A8BE (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___lhs0, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___rhs1, const RuntimeMethod* method)
{
	{
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ___rhs1;
		bool L_1 = XRReferencePoint_Equals_mA58F0C1C266D740037A7D6700857A5E739160AF8((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePoint::op_Inequality(UnityEngine.XR.ARSubsystems.XRReferencePoint,UnityEngine.XR.ARSubsystems.XRReferencePoint)
extern "C" IL2CPP_METHOD_ATTR bool XRReferencePoint_op_Inequality_m675724084220C79C2F9A35E8D8462DD13146DDD0 (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___lhs0, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___rhs1, const RuntimeMethod* method)
{
	{
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_0 = ___rhs1;
		bool L_1 = XRReferencePoint_Equals_mA58F0C1C266D740037A7D6700857A5E739160AF8((XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointSubsystem__ctor_mD93381DE24CA18A7BA022014E77BEBA9AA2CD6E9 (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointSubsystem__ctor_mD93381DE24CA18A7BA022014E77BEBA9AA2CD6E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackingSubsystem_2__ctor_mC69AD6AEF92FA2B9D7D5B83C79A418BAB05D0F76(__this, /*hidden argument*/TrackingSubsystem_2__ctor_mC69AD6AEF92FA2B9D7D5B83C79A418BAB05D0F76_RuntimeMethod_var);
		IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * L_0 = VirtFuncInvoker0< IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * >::Invoke(8 /* UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_2(L_0);
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_1 = XRReferencePoint_GetDefault_m2C8B9BC8378BD9F7C636DCD1C90D4793F9C80BF8(/*hidden argument*/NULL);
		__this->set_m_DefaultReferencePoint_3(L_1);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::Start()
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointSubsystem_Start_m81FF0CDE47704322932DD5E7D989EFD6EC9BB078 (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = ((TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899 *)__this)->get_m_Running_1();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::Start() */, L_1);
	}

IL_0013:
	{
		((TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899 *)__this)->set_m_Running_1((bool)1);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::Stop()
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointSubsystem_Stop_m6463C615B960CC4484804748068338A4E6132152 (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = ((TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899 *)__this)->get_m_Running_1();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::Stop() */, L_1);
	}

IL_0013:
	{
		((TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899 *)__this)->set_m_Running_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::Destroy()
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointSubsystem_Destroy_m7F6C9E989A72A892A3972F3E6E71876D2D9A09A1 (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.Experimental.Subsystem::Stop() */, __this);
		IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::Destroy() */, L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint> UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::GetChanges(Unity.Collections.Allocator)
extern "C" IL2CPP_METHOD_ATTR TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  XRReferencePointSubsystem_GetChanges_mE0EC8049CED1EA604A751066DB97430E803BE487 (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, int32_t ___allocator0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointSubsystem_GetChanges_mE0EC8049CED1EA604A751066DB97430E803BE487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((TrackingSubsystem_2_t62AFA2295FCEFC2C3818E3B9EDB3C1AF80509899 *)__this)->get_m_Running_1();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteralD877CA1B88372977DE10E74458237B9D64D74F9B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XRReferencePointSubsystem_GetChanges_mE0EC8049CED1EA604A751066DB97430E803BE487_RuntimeMethod_var);
	}

IL_0013:
	{
		IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * L_2 = __this->get_m_Provider_2();
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  L_3 = __this->get_m_DefaultReferencePoint_3();
		int32_t L_4 = ___allocator0;
		NullCheck(L_2);
		TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  L_5 = VirtFuncInvoker2< TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF , XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 , int32_t >::Invoke(7 /* UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint> UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::GetChanges(UnityEngine.XR.ARSubsystems.XRReferencePoint,Unity.Collections.Allocator) */, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::TryAddReferencePoint(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePointU26)
extern "C" IL2CPP_METHOD_ATTR bool XRReferencePointSubsystem_TryAddReferencePoint_m55C922BC7F9943136A05B7E883D044CFBD5E4B87 (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint1, const RuntimeMethod* method)
{
	{
		IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * L_0 = __this->get_m_Provider_2();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = ___pose0;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * L_2 = ___referencePoint1;
		NullCheck(L_0);
		bool L_3 = VirtFuncInvoker2< bool, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * >::Invoke(8 /* System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::TryAddReferencePoint(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&) */, L_0, L_1, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)L_2);
		return L_3;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::TryAttachReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePointU26)
extern "C" IL2CPP_METHOD_ATTR bool XRReferencePointSubsystem_TryAttachReferencePoint_mFC09929BC0AF19465D22E30685A9C213BE434B8E (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableToAffix0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint2, const RuntimeMethod* method)
{
	{
		IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * L_0 = __this->get_m_Provider_2();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___trackableToAffix0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = ___pose1;
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * L_3 = ___referencePoint2;
		NullCheck(L_0);
		bool L_4 = VirtFuncInvoker3< bool, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 , XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * >::Invoke(9 /* System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::TryAttachReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePoint&) */, L_0, L_1, L_2, (XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 *)L_3);
		return L_4;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem::TryRemoveReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId)
extern "C" IL2CPP_METHOD_ATTR bool XRReferencePointSubsystem_TryRemoveReferencePoint_m3F404A6F9DD63129EE44497554CC59CE8396DC22 (XRReferencePointSubsystem_tF175EC0188CC6EFB0A0633BA11FCA4D81A6A88E3 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___referencePointId0, const RuntimeMethod* method)
{
	{
		IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * L_0 = __this->get_m_Provider_2();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_1 = ___referencePointId0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  >::Invoke(10 /* System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem/IProvider::TryRemoveReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId) */, L_0, L_1);
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
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider::Start()
extern "C" IL2CPP_METHOD_ATTR void IProvider_Start_m82C75161C98269B02B65EB38620440CC8265DA8A (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider::Stop()
extern "C" IL2CPP_METHOD_ATTR void IProvider_Stop_m863547262C09BE10D78B90891FF0A3BC3A885C38 (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider::Destroy()
extern "C" IL2CPP_METHOD_ATTR void IProvider_Destroy_m70C9DA2FDB06C7E5E6D7AE4248FD2D3FCE59F6F2 (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRReferencePoint> UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider::GetChanges(UnityEngine.XR.ARSubsystems.XRReferencePoint,Unity.Collections.Allocator)
extern "C" IL2CPP_METHOD_ATTR TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  IProvider_GetChanges_m7F99F4F7722D3F7761B2144E01E5964B90A0D579 (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9  ___defaultReferencePoint0, int32_t ___allocator1, const RuntimeMethod* method)
{
	TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF ));
		TrackableChanges_1_t5C8C3FBA23E5BBC147A6991B68520A756EF54FDF  L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider::TryAddReferencePoint(UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePointU26)
extern "C" IL2CPP_METHOD_ATTR bool IProvider_TryAddReferencePoint_mF79C1A695BB95A4FA713B6D2DE79BC28AEC6C4E5 (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint1, const RuntimeMethod* method)
{
	{
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * L_0 = ___referencePoint1;
		il2cpp_codegen_initobj(L_0, sizeof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 ));
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider::TryAttachReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.XRReferencePointU26)
extern "C" IL2CPP_METHOD_ATTR bool IProvider_TryAttachReferencePoint_m46FE71A54777D987FAC86EEBD768E4317876DDF3 (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableToAffix0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * ___referencePoint2, const RuntimeMethod* method)
{
	{
		XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 * L_0 = ___referencePoint2;
		il2cpp_codegen_initobj(L_0, sizeof(XRReferencePoint_tA8592C08A27EC91D9B1FB3B083C95C5D372FF1F9 ));
		return (bool)0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider::TryRemoveReferencePoint(UnityEngine.XR.ARSubsystems.TrackableId)
extern "C" IL2CPP_METHOD_ATTR bool IProvider_TryRemoveReferencePoint_mD0672A46BA8A4BBA09B825C29EDFFC8A658C3C7C (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___referencePointId0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystem_IProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IProvider__ctor_m56C9E2DB691648499825B3D03C0FCD6B534FE641 (IProvider_tA80639246D0ED291E8332BE2FBC3FE3EA13A4459 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::get_supportsTrackableAttachments()
extern "C" IL2CPP_METHOD_ATTR bool XRReferencePointSubsystemDescriptor_get_supportsTrackableAttachments_mA94E2928B96D7F5CC69B8D225F8FADDCDC80922D (XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::set_supportsTrackableAttachments(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor_set_supportsTrackableAttachments_mA4F7709D4C170D414F862490ABBF0090DE46A8AB (XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::Create(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor_Create_m4E9D9DF5FCE2FE3F8672653BC733F87D3A4327D0 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointSubsystemDescriptor_Create_m4E9D9DF5FCE2FE3F8672653BC733F87D3A4327D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  L_0 = ___cinfo0;
		XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D * L_1 = (XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D *)il2cpp_codegen_object_new(XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D_il2cpp_TypeInfo_var);
		XRReferencePointSubsystemDescriptor__ctor_mB5AD6FF2521FF148612D7662DF93BD6CA68069B2(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemRegistration_t0A22FECC46483ABBFFC039449407F73FF11F5A1A_il2cpp_TypeInfo_var);
		SubsystemRegistration_CreateDescriptor_m85D30078090DD633C48CDFE85A8A0BEF2A69519D(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo)
extern "C" IL2CPP_METHOD_ATTR void XRReferencePointSubsystemDescriptor__ctor_mB5AD6FF2521FF148612D7662DF93BD6CA68069B2 (XRReferencePointSubsystemDescriptor_t5972C5E3DEF485A89A3AA7D9D47CCD8A67FDB74D * __this, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRReferencePointSubsystemDescriptor__ctor_mB5AD6FF2521FF148612D7662DF93BD6CA68069B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemDescriptor_1__ctor_mB407BE84B81017983C215B6A1F715785091C7635(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_mB407BE84B81017983C215B6A1F715785091C7635_RuntimeMethod_var);
		String_t* L_0 = Cinfo_get_id_mB1E35C0B52EEAA8EB934C4D3F02465CF8A752015((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_id_mB3D1A7164F096650AE5249037EEA91AB92E21AB4(__this, L_0, /*hidden argument*/NULL);
		Type_t * L_1 = Cinfo_get_subsystemImplementationType_m764697AF3D79BDFA6010287A8B542F9323693096((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_subsystemImplementationType_m17E1DD79B83EC74F0171B4D0B3F0478FBC91F202(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = Cinfo_get_supportsTrackableAttachments_m041B030B1BD0114D8FCE9A9F804CFF5984FB07BD((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&___cinfo0), /*hidden argument*/NULL);
		XRReferencePointSubsystemDescriptor_set_supportsTrackableAttachments_mA4F7709D4C170D414F862490ABBF0090DE46A8AB(__this, L_2, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
extern "C" void Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshal_pinvoke(const Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD& unmarshaled, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL, NULL);
}
extern "C" void Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshal_pinvoke_back(const Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_pinvoke& marshaled, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
extern "C" void Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshal_pinvoke_cleanup(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
extern "C" void Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshal_com(const Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD& unmarshaled, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL, NULL);
}
extern "C" void Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshal_com_back(const Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_com& marshaled, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor/Cinfo
extern "C" void Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshal_com_cleanup(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_marshaled_com& marshaled)
{
}
// System.String UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_mB1E35C0B52EEAA8EB934C4D3F02465CF8A752015 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
extern "C"  String_t* Cinfo_get_id_mB1E35C0B52EEAA8EB934C4D3F02465CF8A752015_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + 1);
	return Cinfo_get_id_mB1E35C0B52EEAA8EB934C4D3F02465CF8A752015(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::set_id(System.String)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_id_m9CAE75E21B0DAE38A8619D1B04D17EDEC81E97D7 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void Cinfo_set_id_m9CAE75E21B0DAE38A8619D1B04D17EDEC81E97D7_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + 1);
	Cinfo_set_id_m9CAE75E21B0DAE38A8619D1B04D17EDEC81E97D7(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::get_subsystemImplementationType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m764697AF3D79BDFA6010287A8B542F9323693096 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
	}
}
extern "C"  Type_t * Cinfo_get_subsystemImplementationType_m764697AF3D79BDFA6010287A8B542F9323693096_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + 1);
	return Cinfo_get_subsystemImplementationType_m764697AF3D79BDFA6010287A8B542F9323693096(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::set_subsystemImplementationType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m9D5112215C6766E6561E42DA858B7F3D72F0005E (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
extern "C"  void Cinfo_set_subsystemImplementationType_m9D5112215C6766E6561E42DA858B7F3D72F0005E_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + 1);
	Cinfo_set_subsystemImplementationType_m9D5112215C6766E6561E42DA858B7F3D72F0005E(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::get_supportsTrackableAttachments()
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_get_supportsTrackableAttachments_m041B030B1BD0114D8FCE9A9F804CFF5984FB07BD (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2();
		return L_0;
	}
}
extern "C"  bool Cinfo_get_supportsTrackableAttachments_m041B030B1BD0114D8FCE9A9F804CFF5984FB07BD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + 1);
	return Cinfo_get_supportsTrackableAttachments_m041B030B1BD0114D8FCE9A9F804CFF5984FB07BD(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::set_supportsTrackableAttachments(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_supportsTrackableAttachments_mC0A061EDA609485B0E83FC7857E8573C93F38FD7 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsTrackableAttachmentsU3Ek__BackingField_2(L_0);
		return;
	}
}
extern "C"  void Cinfo_set_supportsTrackableAttachments_mC0A061EDA609485B0E83FC7857E8573C93F38FD7_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + 1);
	Cinfo_set_supportsTrackableAttachments_mC0A061EDA609485B0E83FC7857E8573C93F38FD7(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_mA1002FD6C9DDB0C39442B7692A7CDB5562C61086 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_GetHashCode_mA1002FD6C9DDB0C39442B7692A7CDB5562C61086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		String_t* L_0 = Cinfo_get_id_mB1E35C0B52EEAA8EB934C4D3F02465CF8A752015((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = Cinfo_get_id_mB1E35C0B52EEAA8EB934C4D3F02465CF8A752015((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m764697AF3D79BDFA6010287A8B542F9323693096((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
			goto IL_0037;
		}
	}
	{
		Type_t * L_5 = Cinfo_get_subsystemImplementationType_m764697AF3D79BDFA6010287A8B542F9323693096((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		return ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0));
	}
}
extern "C"  int32_t Cinfo_GetHashCode_mA1002FD6C9DDB0C39442B7692A7CDB5562C61086_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + 1);
	return Cinfo_GetHashCode_mA1002FD6C9DDB0C39442B7692A7CDB5562C61086(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_Equals_mC210DE78D45CD980BF7B5A186241CFC5CC243D2E (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_mC210DE78D45CD980BF7B5A186241CFC5CC243D2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_m7D9C657E628D2DFC390587FBE0BDFEB1D5CDC92D((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, ((*(Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)UnBox(L_1, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool Cinfo_Equals_mC210DE78D45CD980BF7B5A186241CFC5CC243D2E_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + 1);
	return Cinfo_Equals_mC210DE78D45CD980BF7B5A186241CFC5CC243D2E(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo)
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_Equals_m7D9C657E628D2DFC390587FBE0BDFEB1D5CDC92D (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * __this, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m7D9C657E628D2DFC390587FBE0BDFEB1D5CDC92D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Cinfo_get_id_mB1E35C0B52EEAA8EB934C4D3F02465CF8A752015((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_mB1E35C0B52EEAA8EB934C4D3F02465CF8A752015((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_Equals_m90EB651A751C3444BADBBD5401109CE05B3E1CFB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m764697AF3D79BDFA6010287A8B542F9323693096((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_m764697AF3D79BDFA6010287A8B542F9323693096((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		return (bool)0;
	}
}
extern "C"  bool Cinfo_Equals_m7D9C657E628D2DFC390587FBE0BDFEB1D5CDC92D_AdjustorThunk (RuntimeObject * __this, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___other0, const RuntimeMethod* method)
{
	Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD * _thisAdjusted = reinterpret_cast<Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *>(__this + 1);
	return Cinfo_Equals_m7D9C657E628D2DFC390587FBE0BDFEB1D5CDC92D(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo)
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_mE1F2D9B59D8CE1464461320ED675AF909582610A (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___lhs0, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___rhs1, const RuntimeMethod* method)
{
	{
		Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m7D9C657E628D2DFC390587FBE0BDFEB1D5CDC92D((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRReferencePointSubsystemDescriptor_Cinfo)
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_m434589D57A438F397CD363A5E2CB491095725A53 (Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___lhs0, Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  ___rhs1, const RuntimeMethod* method)
{
	{
		Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_m7D9C657E628D2DFC390587FBE0BDFEB1D5CDC92D((Cinfo_t763E336A62E286B348AB9B084829CFD16A32D7AD *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_running()
extern "C" IL2CPP_METHOD_ATTR bool XRSessionSubsystem_get_running_m232754CAC70AAC3E051F0607A1B884CB06D80E8C (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Running_1();
		return L_0;
	}
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_nativePtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t XRSessionSubsystem_get_nativePtr_m0F00EE85A23E2FBE08AE83393F4C7DC97C22366B (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		intptr_t L_1 = VirtFuncInvoker0< intptr_t >::Invoke(11 /* System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_nativePtr() */, L_0);
		return (intptr_t)L_1;
	}
}
// System.Guid UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_sessionId()
extern "C" IL2CPP_METHOD_ATTR Guid_t  XRSessionSubsystem_get_sessionId_m830EF72639051E3486DA85FE6E4EF1C9AD3481E1 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		Guid_t  L_1 = VirtFuncInvoker0< Guid_t  >::Invoke(16 /* System.Guid UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_sessionId() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::GetAvailabilityAsync()
extern "C" IL2CPP_METHOD_ATTR Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * XRSessionSubsystem_GetAvailabilityAsync_mE1444BD33C0A1EAD4982FC0AE64D1251635487ED (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * L_1 = VirtFuncInvoker0< Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * >::Invoke(12 /* UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::GetAvailabilityAsync() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::InstallAsync()
extern "C" IL2CPP_METHOD_ATTR Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * L_0 = Subsystem_1_get_SubsystemDescriptor_m7D9A1F7F1631768F5DE2EC7DA7FC3FCCA24336C7(__this, /*hidden argument*/Subsystem_1_get_SubsystemDescriptor_m7D9A1F7F1631768F5DE2EC7DA7FC3FCCA24336C7_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1 = XRSessionSubsystemDescriptor_get_supportsInstall_m2AA89682007FE1D8BB811FD152DE326FF7BB5A99(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_2 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_2, _stringLiteral39BF4FB45444043D19EFF93848D9F1A0BEA05065, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, XRSessionSubsystem_InstallAsync_m35E08EF7130491F2E498C990109FA7323A2ABCCC_RuntimeMethod_var);
	}

IL_0018:
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_3 = __this->get_m_Provider_2();
		NullCheck(L_3);
		Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * L_4 = VirtFuncInvoker0< Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * >::Invoke(13 /* UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::InstallAsync() */, L_3);
		return L_4;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m2817E6FDD974187708CFD270DE4C6D3132774648 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystem__ctor_m2817E6FDD974187708CFD270DE4C6D3132774648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Subsystem_1__ctor_m9A7BD362BD1D6DD43C14E819F40B5BA593F5A07E(__this, /*hidden argument*/Subsystem_1__ctor_m9A7BD362BD1D6DD43C14E819F40B5BA593F5A07E_RuntimeMethod_var);
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = VirtFuncInvoker0< IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * >::Invoke(7 /* UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_2(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Start()
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem_Start_mD3C74ABE058ACDDB059F59039682E130F5AA1A56 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Running_1();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(4 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Resume() */, L_1);
	}

IL_0013:
	{
		__this->set_m_Running_1((bool)1);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Reset()
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem_Reset_mA6596EEA8C670E2561986B54BB34E0F15A0D5836 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Reset() */, L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Stop()
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem_Stop_m7FF9AB373659BAB5015E0B29C04DF0BDEE5E40B8 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_Running_1();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_1 = __this->get_m_Provider_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Pause() */, L_1);
	}

IL_0013:
	{
		__this->set_m_Running_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Destroy()
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem_Destroy_mD1D9972523A8C2234B60819401BA0DDB836108D4 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.Experimental.Subsystem::Stop() */, __this);
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Destroy() */, L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem_Update_m168E0641976ED5CD2084BD32692044A2D361B945 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___updateParams0, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  L_1 = ___updateParams0;
		NullCheck(L_0);
		VirtActionInvoker1< XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  >::Invoke(6 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams) */, L_0, L_1);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::OnApplicationPause()
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem_OnApplicationPause_mE53A32290C253F808E5B14A11B7917286E86B08A (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(9 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::OnApplicationPause() */, L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::OnApplicationResume()
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem_OnApplicationResume_m4103D0866A4152C9A52E52A306D85EBAD8405F2F (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::OnApplicationResume() */, L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_trackingState()
extern "C" IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_trackingState_m6CEDC16CB9B224A0302A83BC2C22FC4C0905EB30 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(14 /* UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_trackingState() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_notTrackingReason()
extern "C" IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_notTrackingReason_m2425113BCCDD44CEF92AA9A045C002CAF981B6D7 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(15 /* UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_notTrackingReason() */, L_0);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_matchFrameRate()
extern "C" IL2CPP_METHOD_ATTR bool XRSessionSubsystem_get_matchFrameRate_m1A5153DC073507175C7D0E47FC649DBB690FEEEC (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_matchFrameRate() */, L_0);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::set_matchFrameRate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystem_set_matchFrameRate_m5AE7252065F093953386D31D79BCA9C1C7BC256A (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		bool L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(18 /* System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::set_matchFrameRate(System.Boolean) */, L_0, L_1);
		return;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_frameRate()
extern "C" IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_frameRate_m9C029A08839E039C3459DF5CE4A5E5CFAD3DC7DE (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * L_0 = __this->get_m_Provider_2();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem/IProvider::get_frameRate() */, L_0);
		return L_1;
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
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::Resume()
extern "C" IL2CPP_METHOD_ATTR void IProvider_Resume_mFF2916A860B63F7961E271A1ED22C46225086C9C (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::Pause()
extern "C" IL2CPP_METHOD_ATTR void IProvider_Pause_mFCDC4EDABBB96ED1C5CEDD562B2B03E7EB8EDC46 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::Update(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
extern "C" IL2CPP_METHOD_ATTR void IProvider_Update_m24FCFC96A04E93D1B798A3B197CD2DE361ECBB02 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___updateParams0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::Destroy()
extern "C" IL2CPP_METHOD_ATTR void IProvider_Destroy_mE25C4725EC835DDDEAAF9250A8705114F5F49FCA (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::Reset()
extern "C" IL2CPP_METHOD_ATTR void IProvider_Reset_m33C31E9E21380A8D382CC4597D26BDE7FE396003 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::OnApplicationPause()
extern "C" IL2CPP_METHOD_ATTR void IProvider_OnApplicationPause_m1EE8D07B8A1B5C6AD9F46AEC4E111BCA900E82C0 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::OnApplicationResume()
extern "C" IL2CPP_METHOD_ATTR void IProvider_OnApplicationResume_mCFD34D915506E46686589E011E208F29AC09795A (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::get_nativePtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t IProvider_get_nativePtr_mDFDB9ACAD44C21907F5503C028285ED347B812A1 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_get_nativePtr_mDFDB9ACAD44C21907F5503C028285ED347B812A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionAvailability> UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::GetAvailabilityAsync()
extern "C" IL2CPP_METHOD_ATTR Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * IProvider_GetAvailabilityAsync_mBEB3A0B9542D7FFC86148CDA981B9D7A79E6ECAF (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_GetAvailabilityAsync_mBEB3A0B9542D7FFC86148CDA981B9D7A79E6ECAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Promise_1_t7E6FC51116CF1FB8FFF9D4D6621E5F7231AE9A6B * L_0 = Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D(0, /*hidden argument*/Promise_1_CreateResolvedPromise_m36CC1CB8A654C9849F7BB9FE6C69A725C78CC01D_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<UnityEngine.XR.ARSubsystems.SessionInstallationStatus> UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::InstallAsync()
extern "C" IL2CPP_METHOD_ATTR Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * IProvider_InstallAsync_m89483BB3B7B4D4E481B1F73CC1E2C0DAABAAC2BE (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_InstallAsync_m89483BB3B7B4D4E481B1F73CC1E2C0DAABAAC2BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Promise_1_tE8B65103AAD59FA1265B1977CE59DC6DA5220626 * L_0 = Promise_1_CreateResolvedPromise_m33AA652B2B2460A4777ED6EA73923156280826AA(4, /*hidden argument*/Promise_1_CreateResolvedPromise_m33AA652B2B2460A4777ED6EA73923156280826AA_RuntimeMethod_var);
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::get_trackingState()
extern "C" IL2CPP_METHOD_ATTR int32_t IProvider_get_trackingState_m3D36F03D7C209523EDDFEF23BAFDBD41B56E1128 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::get_notTrackingReason()
extern "C" IL2CPP_METHOD_ATTR int32_t IProvider_get_notTrackingReason_mD52FF69EFF5BAB7432DDF25F883C86FFA9BF2D3F (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(6);
	}
}
// System.Guid UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::get_sessionId()
extern "C" IL2CPP_METHOD_ATTR Guid_t  IProvider_get_sessionId_m8C69C4DA0023D68D8CF04173C004738A0340E396 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_get_sessionId_m8C69C4DA0023D68D8CF04173C004738A0340E396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = ((Guid_t_StaticFields*)il2cpp_codegen_static_fields_for(Guid_t_il2cpp_TypeInfo_var))->get_Empty_0();
		return L_0;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::get_matchFrameRate()
extern "C" IL2CPP_METHOD_ATTR bool IProvider_get_matchFrameRate_mF2156A01C26838333B13B8F7DC65D03E2936D4B7 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::set_matchFrameRate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void IProvider_set_matchFrameRate_m29BE5BDF4CC0D5CBBC1B029F58ADE2835945A261 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_set_matchFrameRate_m29BE5BDF4CC0D5CBBC1B029F58ADE2835945A261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_1 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_1, _stringLiteralB803153B51A277297BD55B487E4635F22FE4D888, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, IProvider_set_matchFrameRate_m29BE5BDF4CC0D5CBBC1B029F58ADE2835945A261_RuntimeMethod_var);
	}

IL_000e:
	{
		return;
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::get_frameRate()
extern "C" IL2CPP_METHOD_ATTR int32_t IProvider_get_frameRate_m82D84C460ABEC4FCFC3F51B0CD3605050BB5DDA2 (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IProvider_get_frameRate_m82D84C460ABEC4FCFC3F51B0CD3605050BB5DDA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_0, _stringLiteral8D5D999C478CCB89B73D744A0781362458C30380, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, IProvider_get_frameRate_m82D84C460ABEC4FCFC3F51B0CD3605050BB5DDA2_RuntimeMethod_var);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem_IProvider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IProvider__ctor_m7CBD7C46ACF50FF49255251388ED6E6D1F3233DB (IProvider_tCE3A36B52F24E47DF8D9945EAB79493A822E9428 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsInstall()
extern "C" IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsInstall_m2AA89682007FE1D8BB811FD152DE326FF7BB5A99 (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsInstall(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsInstall_m010EE3F0CB4B143A90B93C1F10F063FB12546920 (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::get_supportsMatchFrameRate()
extern "C" IL2CPP_METHOD_ATTR bool XRSessionSubsystemDescriptor_get_supportsMatchFrameRate_m66DA7D5EE88322AF2EE5FC3B1BF8203115C2CA8F (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CsupportsMatchFrameRateU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::set_supportsMatchFrameRate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_mC2B0189D51BF3B64026D01DD6A088052C5D74BFC (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::RegisterDescriptor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo)
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor_RegisterDescriptor_m7A9F84E8A57323CDB5DC415BA05E72D6A72025E4 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystemDescriptor_RegisterDescriptor_m7A9F84E8A57323CDB5DC415BA05E72D6A72025E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  L_0 = ___cinfo0;
		XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * L_1 = (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 *)il2cpp_codegen_object_new(XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079_il2cpp_TypeInfo_var);
		XRSessionSubsystemDescriptor__ctor_mF2A65C6A814FB2D22D5ED1608E5EFD5B0CD9A6E2(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemRegistration_t0A22FECC46483ABBFFC039449407F73FF11F5A1A_il2cpp_TypeInfo_var);
		SubsystemRegistration_CreateDescriptor_m85D30078090DD633C48CDFE85A8A0BEF2A69519D(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor::.ctor(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo)
extern "C" IL2CPP_METHOD_ATTR void XRSessionSubsystemDescriptor__ctor_mF2A65C6A814FB2D22D5ED1608E5EFD5B0CD9A6E2 (XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079 * __this, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___cinfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystemDescriptor__ctor_mF2A65C6A814FB2D22D5ED1608E5EFD5B0CD9A6E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SubsystemDescriptor_1__ctor_m5CC83C3B4353C7E10253E36148E70B9223C821DF(__this, /*hidden argument*/SubsystemDescriptor_1__ctor_m5CC83C3B4353C7E10253E36148E70B9223C821DF_RuntimeMethod_var);
		String_t* L_0 = Cinfo_get_id_m998EB4BD213159391A0A66FD6C002C1CE5CD14E8((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_id_mB3D1A7164F096650AE5249037EEA91AB92E21AB4(__this, L_0, /*hidden argument*/NULL);
		Type_t * L_1 = Cinfo_get_subsystemImplementationType_m63942F2B0929DF14EB7885E7553A9970FBD3E108((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___cinfo0), /*hidden argument*/NULL);
		SubsystemDescriptor_set_subsystemImplementationType_m17E1DD79B83EC74F0171B4D0B3F0478FBC91F202(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = Cinfo_get_supportsInstall_m5FBFD4D2F10A6A46F66F4EFBC61EA14DE0FEED99((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___cinfo0), /*hidden argument*/NULL);
		XRSessionSubsystemDescriptor_set_supportsInstall_m010EE3F0CB4B143A90B93C1F10F063FB12546920(__this, L_2, /*hidden argument*/NULL);
		bool L_3 = Cinfo_get_supportsMatchFrameRate_mE591F09F87EA8F4E5563039C47A6331E6AF31895((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___cinfo0), /*hidden argument*/NULL);
		XRSessionSubsystemDescriptor_set_supportsMatchFrameRate_mC2B0189D51BF3B64026D01DD6A088052C5D74BFC(__this, L_3, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
extern "C" void Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshal_pinvoke(const Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A& unmarshaled, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL, NULL);
}
extern "C" void Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshal_pinvoke_back(const Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_pinvoke& marshaled, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
extern "C" void Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshal_pinvoke_cleanup(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
extern "C" void Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshal_com(const Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A& unmarshaled, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_com& marshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL, NULL);
}
extern "C" void Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshal_com_back(const Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_com& marshaled, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A& unmarshaled)
{
	Exception_t* ___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<subsystemImplementationType>k__BackingField' of type 'Cinfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CsubsystemImplementationTypeU3Ek__BackingField_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor/Cinfo
extern "C" void Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshal_com_cleanup(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::get_supportsInstall()
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_get_supportsInstall_m5FBFD4D2F10A6A46F66F4EFBC61EA14DE0FEED99 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CsupportsInstallU3Ek__BackingField_0();
		return L_0;
	}
}
extern "C"  bool Cinfo_get_supportsInstall_m5FBFD4D2F10A6A46F66F4EFBC61EA14DE0FEED99_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + 1);
	return Cinfo_get_supportsInstall_m5FBFD4D2F10A6A46F66F4EFBC61EA14DE0FEED99(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::set_supportsInstall(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_supportsInstall_mD74EB42C503AC5393E630A56E3AE579FE1558660 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsInstallU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void Cinfo_set_supportsInstall_mD74EB42C503AC5393E630A56E3AE579FE1558660_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + 1);
	Cinfo_set_supportsInstall_mD74EB42C503AC5393E630A56E3AE579FE1558660(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::get_supportsMatchFrameRate()
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_get_supportsMatchFrameRate_mE591F09F87EA8F4E5563039C47A6331E6AF31895 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CsupportsMatchFrameRateU3Ek__BackingField_1();
		return L_0;
	}
}
extern "C"  bool Cinfo_get_supportsMatchFrameRate_mE591F09F87EA8F4E5563039C47A6331E6AF31895_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + 1);
	return Cinfo_get_supportsMatchFrameRate_mE591F09F87EA8F4E5563039C47A6331E6AF31895(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::set_supportsMatchFrameRate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_supportsMatchFrameRate_m2B92004D3F2E01EA5DDFBF5F928C5604E68B8D21 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CsupportsMatchFrameRateU3Ek__BackingField_1(L_0);
		return;
	}
}
extern "C"  void Cinfo_set_supportsMatchFrameRate_m2B92004D3F2E01EA5DDFBF5F928C5604E68B8D21_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + 1);
	Cinfo_set_supportsMatchFrameRate_m2B92004D3F2E01EA5DDFBF5F928C5604E68B8D21(_thisAdjusted, ___value0, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* Cinfo_get_id_m998EB4BD213159391A0A66FD6C002C1CE5CD14E8 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_2();
		return L_0;
	}
}
extern "C"  String_t* Cinfo_get_id_m998EB4BD213159391A0A66FD6C002C1CE5CD14E8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + 1);
	return Cinfo_get_id_m998EB4BD213159391A0A66FD6C002C1CE5CD14E8(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::set_id(System.String)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_id_mC4FF3C524E18065C55B5142D58FBD58A66479A41 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
extern "C"  void Cinfo_set_id_mC4FF3C524E18065C55B5142D58FBD58A66479A41_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + 1);
	Cinfo_set_id_mC4FF3C524E18065C55B5142D58FBD58A66479A41(_thisAdjusted, ___value0, method);
}
// System.Type UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::get_subsystemImplementationType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Cinfo_get_subsystemImplementationType_m63942F2B0929DF14EB7885E7553A9970FBD3E108 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_3();
		return L_0;
	}
}
extern "C"  Type_t * Cinfo_get_subsystemImplementationType_m63942F2B0929DF14EB7885E7553A9970FBD3E108_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + 1);
	return Cinfo_get_subsystemImplementationType_m63942F2B0929DF14EB7885E7553A9970FBD3E108(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::set_subsystemImplementationType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void Cinfo_set_subsystemImplementationType_m3C759AEC2943DE059B20AA7F5A5B932B7432473C (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CsubsystemImplementationTypeU3Ek__BackingField_3(L_0);
		return;
	}
}
extern "C"  void Cinfo_set_subsystemImplementationType_m3C759AEC2943DE059B20AA7F5A5B932B7432473C_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + 1);
	Cinfo_set_subsystemImplementationType_m3C759AEC2943DE059B20AA7F5A5B932B7432473C(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Cinfo_GetHashCode_m06E1060A5995A0C346AB7C0E56CCAC4BEC758A6E (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_GetHashCode_m06E1060A5995A0C346AB7C0E56CCAC4BEC758A6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		String_t* L_0 = Cinfo_get_id_m998EB4BD213159391A0A66FD6C002C1CE5CD14E8((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		String_t* L_1 = Cinfo_get_id_m998EB4BD213159391A0A66FD6C002C1CE5CD14E8((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m63942F2B0929DF14EB7885E7553A9970FBD3E108((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_3, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
		if (L_4)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)G_B3_0, (int32_t)((int32_t)486187739)));
			goto IL_002d;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0038;
	}

IL_002d:
	{
		Type_t * L_5 = Cinfo_get_subsystemImplementationType_m63942F2B0929DF14EB7885E7553A9970FBD3E108((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B6_0 = L_6;
		G_B6_1 = G_B5_0;
	}

IL_0038:
	{
		bool L_7 = Cinfo_get_supportsInstall_m5FBFD4D2F10A6A46F66F4EFBC61EA14DE0FEED99((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(&V_0), /*hidden argument*/NULL);
		bool L_9 = Cinfo_get_supportsMatchFrameRate_mE591F09F87EA8F4E5563039C47A6331E6AF31895((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = Boolean_GetHashCode_m92C426D44100ED098FEECC96A743C3CB92DFF737((bool*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0)), (int32_t)((int32_t)486187739))), (int32_t)L_8)), (int32_t)((int32_t)486187739))), (int32_t)L_10));
	}
}
extern "C"  int32_t Cinfo_GetHashCode_m06E1060A5995A0C346AB7C0E56CCAC4BEC758A6E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + 1);
	return Cinfo_GetHashCode_m06E1060A5995A0C346AB7C0E56CCAC4BEC758A6E(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_Equals_m2118FE6BBF6355D645E72BDD6662CF313B8E94EB (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_m2118FE6BBF6355D645E72BDD6662CF313B8E94EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Cinfo_Equals_mC919333F29E857CC3F929451A080AC4A38385E01((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, ((*(Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)UnBox(L_1, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool Cinfo_Equals_m2118FE6BBF6355D645E72BDD6662CF313B8E94EB_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + 1);
	return Cinfo_Equals_m2118FE6BBF6355D645E72BDD6662CF313B8E94EB(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::Equals(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo)
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_Equals_mC919333F29E857CC3F929451A080AC4A38385E01 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * __this, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Cinfo_Equals_mC919333F29E857CC3F929451A080AC4A38385E01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Cinfo_get_id_m998EB4BD213159391A0A66FD6C002C1CE5CD14E8((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Cinfo_get_id_m998EB4BD213159391A0A66FD6C002C1CE5CD14E8((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___other0), /*hidden argument*/NULL);
		bool L_2 = String_Equals_m90EB651A751C3444BADBBD5401109CE05B3E1CFB(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Type_t * L_3 = Cinfo_get_subsystemImplementationType_m63942F2B0929DF14EB7885E7553A9970FBD3E108((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		Type_t * L_4 = Cinfo_get_subsystemImplementationType_m63942F2B0929DF14EB7885E7553A9970FBD3E108((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		bool L_6 = Cinfo_get_supportsInstall_m5FBFD4D2F10A6A46F66F4EFBC61EA14DE0FEED99((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		bool L_7 = Cinfo_get_supportsInstall_m5FBFD4D2F10A6A46F66F4EFBC61EA14DE0FEED99((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0047;
		}
	}
	{
		bool L_8 = Cinfo_get_supportsMatchFrameRate_mE591F09F87EA8F4E5563039C47A6331E6AF31895((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)__this, /*hidden argument*/NULL);
		bool L_9 = Cinfo_get_supportsMatchFrameRate_mE591F09F87EA8F4E5563039C47A6331E6AF31895((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___other0), /*hidden argument*/NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0047:
	{
		return (bool)0;
	}
}
extern "C"  bool Cinfo_Equals_mC919333F29E857CC3F929451A080AC4A38385E01_AdjustorThunk (RuntimeObject * __this, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___other0, const RuntimeMethod* method)
{
	Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A * _thisAdjusted = reinterpret_cast<Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *>(__this + 1);
	return Cinfo_Equals_mC919333F29E857CC3F929451A080AC4A38385E01(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::op_Equality(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo)
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_op_Equality_mCDF32E8CB0B505E476F92FD9A3FAAD6C46BF20DA (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___lhs0, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___rhs1, const RuntimeMethod* method)
{
	{
		Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_mC919333F29E857CC3F929451A080AC4A38385E01((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo::op_Inequality(UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor_Cinfo)
extern "C" IL2CPP_METHOD_ATTR bool Cinfo_op_Inequality_mA173B6B47123F27CE69E7C18FECEC6871CB08A99 (Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___lhs0, Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  ___rhs1, const RuntimeMethod* method)
{
	{
		Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A  L_0 = ___rhs1;
		bool L_1 = Cinfo_Equals_mC919333F29E857CC3F929451A080AC4A38385E01((Cinfo_t0D2C3593DAA5642EF84F81D756DBDDACC2E27C1A *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// UnityEngine.ScreenOrientation UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenOrientation()
extern "C" IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CscreenOrientationU3Ek__BackingField_0();
		return L_0;
	}
}
extern "C"  int32_t XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	return XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenOrientation(UnityEngine.ScreenOrientation)
extern "C" IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenOrientation_m7C20FD52988E0F21604700B5CDA93FBA63DD28C6 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CscreenOrientationU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void XRSessionUpdateParams_set_screenOrientation_m7C20FD52988E0F21604700B5CDA93FBA63DD28C6_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	XRSessionUpdateParams_set_screenOrientation_m7C20FD52988E0F21604700B5CDA93FBA63DD28C6(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::get_screenDimensions()
extern "C" IL2CPP_METHOD_ATTR Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = __this->get_U3CscreenDimensionsU3Ek__BackingField_1();
		return L_0;
	}
}
extern "C"  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	return XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::set_screenDimensions(UnityEngine.Vector2Int)
extern "C" IL2CPP_METHOD_ATTR void XRSessionUpdateParams_set_screenDimensions_m41570268847916BA02DD2427BDDB08B3D466A905 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___value0, const RuntimeMethod* method)
{
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_0 = ___value0;
		__this->set_U3CscreenDimensionsU3Ek__BackingField_1(L_0);
		return;
	}
}
extern "C"  void XRSessionUpdateParams_set_screenDimensions_m41570268847916BA02DD2427BDDB08B3D466A905_AdjustorThunk (RuntimeObject * __this, Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___value0, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	XRSessionUpdateParams_set_screenDimensions_m41570268847916BA02DD2427BDDB08B3D466A905(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRSessionUpdateParams_GetHashCode_m3E0C208F41FAC84F879A073F85FB9DC0F1C09520 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_2 = XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = Vector2Int_GetHashCode_m73E874F4E94DF3D2603035E2E892873B139A7A9E((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)(&V_1), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3));
	}
}
extern "C"  int32_t XRSessionUpdateParams_GetHashCode_m3E0C208F41FAC84F879A073F85FB9DC0F1C09520_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	return XRSessionUpdateParams_GetHashCode_m3E0C208F41FAC84F879A073F85FB9DC0F1C09520(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_m415AB0E24C9CF0C013872ED16C571B65DACF24B1 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionUpdateParams_Equals_m415AB0E24C9CF0C013872ED16C571B65DACF24B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRSessionUpdateParams_Equals_mFE8BAF000FDC02612C5D563960EB974E510DEAB3((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, ((*(XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)UnBox(L_1, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool XRSessionUpdateParams_Equals_m415AB0E24C9CF0C013872ED16C571B65DACF24B1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	return XRSessionUpdateParams_Equals_m415AB0E24C9CF0C013872ED16C571B65DACF24B1(_thisAdjusted, ___obj0, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* XRSessionUpdateParams_ToString_m7150FEAE08C59544392C3D47B3CB5AC318B82F4A (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionUpdateParams_ToString_m7150FEAE08C59544392C3D47B3CB5AC318B82F4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_il2cpp_TypeInfo_var, &L_1);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_3 = XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_4 = L_3;
		RuntimeObject * L_5 = Box(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralB39A7E18F4E7B76A8C729E54E8852F98B5EA76F3, L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
extern "C"  String_t* XRSessionUpdateParams_ToString_m7150FEAE08C59544392C3D47B3CB5AC318B82F4A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	return XRSessionUpdateParams_ToString_m7150FEAE08C59544392C3D47B3CB5AC318B82F4A(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::Equals(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
extern "C" IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_Equals_mFE8BAF000FDC02612C5D563960EB974E510DEAB3 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___other0, const RuntimeMethod* method)
{
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		int32_t L_1 = XRSessionUpdateParams_get_screenOrientation_m111C145EA6A683F025DF48C6EA355E37D8974183((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)(&___other0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0025;
		}
	}
	{
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_2 = XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  L_3 = XRSessionUpdateParams_get_screenDimensions_m61A9722E272D6292B9C7C093BF7792FB007BF21E((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)(&___other0), /*hidden argument*/NULL);
		bool L_4 = Vector2Int_Equals_m65420C995F326F5C340E4825EA5E16BDE68F5A9C((Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 *)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0025:
	{
		return (bool)0;
	}
}
extern "C"  bool XRSessionUpdateParams_Equals_mFE8BAF000FDC02612C5D563960EB974E510DEAB3_AdjustorThunk (RuntimeObject * __this, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___other0, const RuntimeMethod* method)
{
	XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 * _thisAdjusted = reinterpret_cast<XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *>(__this + 1);
	return XRSessionUpdateParams_Equals_mFE8BAF000FDC02612C5D563960EB974E510DEAB3(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::op_Equality(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams,UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
extern "C" IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_op_Equality_mEB57CF7E4D66886BF9EE3FF1BBF7D1B73E63608B (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___lhs0, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___rhs1, const RuntimeMethod* method)
{
	{
		XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  L_0 = ___rhs1;
		bool L_1 = XRSessionUpdateParams_Equals_mFE8BAF000FDC02612C5D563960EB974E510DEAB3((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionUpdateParams::op_Inequality(UnityEngine.XR.ARSubsystems.XRSessionUpdateParams,UnityEngine.XR.ARSubsystems.XRSessionUpdateParams)
extern "C" IL2CPP_METHOD_ATTR bool XRSessionUpdateParams_op_Inequality_mD00004C24603E13FC7D4F0239F812446EE21FF75 (XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___lhs0, XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  ___rhs1, const RuntimeMethod* method)
{
	{
		XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16  L_0 = ___rhs1;
		bool L_1 = XRSessionUpdateParams_Equals_mFE8BAF000FDC02612C5D563960EB974E510DEAB3((XRSessionUpdateParams_tAA765EB179BD3BAB22FA143AF178D328B30EAD16 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_nativeTexture()
extern "C" IL2CPP_METHOD_ATTR intptr_t XRTextureDescriptor_get_nativeTexture_m83CAA03353C203B7D38618C1963C715F052081F8 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_NativeTexture_0();
		return (intptr_t)L_0;
	}
}
extern "C"  intptr_t XRTextureDescriptor_get_nativeTexture_m83CAA03353C203B7D38618C1963C715F052081F8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	return XRTextureDescriptor_get_nativeTexture_m83CAA03353C203B7D38618C1963C715F052081F8(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_nativeTexture(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_nativeTexture_mEF92A3E263840B8F428C314323C20A11F896D907 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, intptr_t ___value0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___value0;
		__this->set_m_NativeTexture_0((intptr_t)L_0);
		return;
	}
}
extern "C"  void XRTextureDescriptor_set_nativeTexture_mEF92A3E263840B8F428C314323C20A11F896D907_AdjustorThunk (RuntimeObject * __this, intptr_t ___value0, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	XRTextureDescriptor_set_nativeTexture_mEF92A3E263840B8F428C314323C20A11F896D907(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_width_m158B2CEE4A0F56DF263BB642F5E4A3C3CF339E0B (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Width_1();
		return L_0;
	}
}
extern "C"  int32_t XRTextureDescriptor_get_width_m158B2CEE4A0F56DF263BB642F5E4A3C3CF339E0B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	return XRTextureDescriptor_get_width_m158B2CEE4A0F56DF263BB642F5E4A3C3CF339E0B(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_width(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_width_m59E159F83238991BAD9838C5835A07E44F6A163E (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Width_1(L_0);
		return;
	}
}
extern "C"  void XRTextureDescriptor_set_width_m59E159F83238991BAD9838C5835A07E44F6A163E_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	XRTextureDescriptor_set_width_m59E159F83238991BAD9838C5835A07E44F6A163E(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_height_mCE50370000BCF4A70B95344A0731A771401C0894 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Height_2();
		return L_0;
	}
}
extern "C"  int32_t XRTextureDescriptor_get_height_mCE50370000BCF4A70B95344A0731A771401C0894_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	return XRTextureDescriptor_get_height_mCE50370000BCF4A70B95344A0731A771401C0894(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_height(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_height_mE690E293BE1FE8009052CC87FA454FB79DE9DF0E (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Height_2(L_0);
		return;
	}
}
extern "C"  void XRTextureDescriptor_set_height_mE690E293BE1FE8009052CC87FA454FB79DE9DF0E_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	XRTextureDescriptor_set_height_mE690E293BE1FE8009052CC87FA454FB79DE9DF0E(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_mipmapCount()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_mipmapCount_m491B149D8BBF148B2030214818E237A28D9B6CC4 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_MipmapCount_3();
		return L_0;
	}
}
extern "C"  int32_t XRTextureDescriptor_get_mipmapCount_m491B149D8BBF148B2030214818E237A28D9B6CC4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	return XRTextureDescriptor_get_mipmapCount_m491B149D8BBF148B2030214818E237A28D9B6CC4(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_mipmapCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_mipmapCount_m8CC98FD1B188CA92DE7C1C430BF71E11E7AD7858 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_MipmapCount_3(L_0);
		return;
	}
}
extern "C"  void XRTextureDescriptor_set_mipmapCount_m8CC98FD1B188CA92DE7C1C430BF71E11E7AD7858_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	XRTextureDescriptor_set_mipmapCount_m8CC98FD1B188CA92DE7C1C430BF71E11E7AD7858(_thisAdjusted, ___value0, method);
}
// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_format_mA2DA22DC1DEBCAD27A9C69F3374D614DF1C3FA2B (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Format_4();
		return L_0;
	}
}
extern "C"  int32_t XRTextureDescriptor_get_format_mA2DA22DC1DEBCAD27A9C69F3374D614DF1C3FA2B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	return XRTextureDescriptor_get_format_mA2DA22DC1DEBCAD27A9C69F3374D614DF1C3FA2B(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_format(UnityEngine.TextureFormat)
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_format_m2BEDFB4C31E590B2C2AAE7145AEAE714491E0EA6 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Format_4(L_0);
		return;
	}
}
extern "C"  void XRTextureDescriptor_set_format_m2BEDFB4C31E590B2C2AAE7145AEAE714491E0EA6_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	XRTextureDescriptor_set_format_m2BEDFB4C31E590B2C2AAE7145AEAE714491E0EA6(_thisAdjusted, ___value0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_propertyNameId()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_get_propertyNameId_mA3A29036B96A64D1C4F147678E60E2BFCAAAAFF0 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_PropertyNameId_5();
		return L_0;
	}
}
extern "C"  int32_t XRTextureDescriptor_get_propertyNameId_mA3A29036B96A64D1C4F147678E60E2BFCAAAAFF0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	return XRTextureDescriptor_get_propertyNameId_mA3A29036B96A64D1C4F147678E60E2BFCAAAAFF0(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::set_propertyNameId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_set_propertyNameId_m87654C29B3CEFA71D22E9F1323058334E8338B4F (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_PropertyNameId_5(L_0);
		return;
	}
}
extern "C"  void XRTextureDescriptor_set_propertyNameId_m87654C29B3CEFA71D22E9F1323058334E8338B4F_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	XRTextureDescriptor_set_propertyNameId_m87654C29B3CEFA71D22E9F1323058334E8338B4F(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::get_valid()
extern "C" IL2CPP_METHOD_ATTR bool XRTextureDescriptor_get_valid_mF060565C5E24FDF97771F6FDA3235562DF01977B (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTextureDescriptor_get_valid_mF060565C5E24FDF97771F6FDA3235562DF01977B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativeTexture_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = __this->get_m_Width_1();
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = __this->get_m_Height_2();
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}

IL_0025:
	{
		return (bool)0;
	}
}
extern "C"  bool XRTextureDescriptor_get_valid_mF060565C5E24FDF97771F6FDA3235562DF01977B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	return XRTextureDescriptor_get_valid_mF060565C5E24FDF97771F6FDA3235562DF01977B(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::hasIdenticalTextureMetadata(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
extern "C" IL2CPP_METHOD_ATTR bool XRTextureDescriptor_hasIdenticalTextureMetadata_mD9C2A76A8B680BB7B2742F82235E40977CD098AE (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___other0, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of_m_Width_1();
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_1 = ___other0;
		int32_t L_2 = L_1.get_m_Width_1();
		bool L_3 = Int32_Equals_mC8C45B8899F291D55A6152C8FEDB3CFFF181170B((int32_t*)L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		int32_t* L_4 = __this->get_address_of_m_Height_2();
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_5 = ___other0;
		int32_t L_6 = L_5.get_m_Height_2();
		bool L_7 = Int32_Equals_mC8C45B8899F291D55A6152C8FEDB3CFFF181170B((int32_t*)L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		int32_t* L_8 = __this->get_address_of_m_MipmapCount_3();
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_9 = ___other0;
		int32_t L_10 = L_9.get_m_MipmapCount_3();
		bool L_11 = Int32_Equals_mC8C45B8899F291D55A6152C8FEDB3CFFF181170B((int32_t*)L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_12 = __this->get_m_Format_4();
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_13 = ___other0;
		int32_t L_14 = L_13.get_m_Format_4();
		return (bool)((((int32_t)L_12) == ((int32_t)L_14))? 1 : 0);
	}

IL_0048:
	{
		return (bool)0;
	}
}
extern "C"  bool XRTextureDescriptor_hasIdenticalTextureMetadata_mD9C2A76A8B680BB7B2742F82235E40977CD098AE_AdjustorThunk (RuntimeObject * __this, XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___other0, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	return XRTextureDescriptor_hasIdenticalTextureMetadata_mD9C2A76A8B680BB7B2742F82235E40977CD098AE(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Reset()
extern "C" IL2CPP_METHOD_ATTR void XRTextureDescriptor_Reset_m64A787FBD1F11161369A72A7D61763DDF8D74EBC (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTextureDescriptor_Reset_m64A787FBD1F11161369A72A7D61763DDF8D74EBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_NativeTexture_0((intptr_t)(0));
		__this->set_m_Width_1(0);
		__this->set_m_Height_2(0);
		__this->set_m_MipmapCount_3(0);
		__this->set_m_Format_4(0);
		__this->set_m_PropertyNameId_5(0);
		return;
	}
}
extern "C"  void XRTextureDescriptor_Reset_m64A787FBD1F11161369A72A7D61763DDF8D74EBC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	XRTextureDescriptor_Reset_m64A787FBD1F11161369A72A7D61763DDF8D74EBC(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
extern "C" IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m124C4B8E0370717E0714FB2D28493A77034C6E38 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___other0, const RuntimeMethod* method)
{
	{
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_0 = ___other0;
		bool L_1 = XRTextureDescriptor_hasIdenticalTextureMetadata_mD9C2A76A8B680BB7B2742F82235E40977CD098AE((XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *)__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		int32_t* L_2 = __this->get_address_of_m_PropertyNameId_5();
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_3 = ___other0;
		int32_t L_4 = L_3.get_m_PropertyNameId_5();
		bool L_5 = Int32_Equals_mC8C45B8899F291D55A6152C8FEDB3CFFF181170B((int32_t*)L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_6 = __this->get_m_NativeTexture_0();
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_7 = ___other0;
		intptr_t L_8 = L_7.get_m_NativeTexture_0();
		bool L_9 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_6, (intptr_t)L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_002e:
	{
		return (bool)0;
	}
}
extern "C"  bool XRTextureDescriptor_Equals_m124C4B8E0370717E0714FB2D28493A77034C6E38_AdjustorThunk (RuntimeObject * __this, XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___other0, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	return XRTextureDescriptor_Equals_m124C4B8E0370717E0714FB2D28493A77034C6E38(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRTextureDescriptor_Equals_m8D2E1A6303E60A653F70870CBD04845414F6A0A5 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTextureDescriptor_Equals_m8D2E1A6303E60A653F70870CBD04845414F6A0A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRTextureDescriptor_Equals_m124C4B8E0370717E0714FB2D28493A77034C6E38((XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *)__this, ((*(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *)((XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *)UnBox(L_1, XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
extern "C"  bool XRTextureDescriptor_Equals_m8D2E1A6303E60A653F70870CBD04845414F6A0A5_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	return XRTextureDescriptor_Equals_m8D2E1A6303E60A653F70870CBD04845414F6A0A5(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::op_Equality(UnityEngine.XR.ARSubsystems.XRTextureDescriptor,UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
extern "C" IL2CPP_METHOD_ATTR bool XRTextureDescriptor_op_Equality_mBEE6E663B93B3648626DAACC5D0AD1F2C0B76847 (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___lhs0, XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___rhs1, const RuntimeMethod* method)
{
	{
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_0 = ___rhs1;
		bool L_1 = XRTextureDescriptor_Equals_m124C4B8E0370717E0714FB2D28493A77034C6E38((XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTextureDescriptor::op_Inequality(UnityEngine.XR.ARSubsystems.XRTextureDescriptor,UnityEngine.XR.ARSubsystems.XRTextureDescriptor)
extern "C" IL2CPP_METHOD_ATTR bool XRTextureDescriptor_op_Inequality_m1373FCEBF131F54B4A61398DE7034853861E9EAE (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___lhs0, XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___rhs1, const RuntimeMethod* method)
{
	{
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_0 = ___rhs1;
		bool L_1 = XRTextureDescriptor_Equals_m124C4B8E0370717E0714FB2D28493A77034C6E38((XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTextureDescriptor_GetHashCode_mE61628A57D74C31744B57EBFBE8E8EDFA673B65F (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		intptr_t* L_0 = __this->get_address_of_m_NativeTexture_0();
		int32_t L_1 = IntPtr_GetHashCode_m0A6AE0C85A4AEEA127235FB5A32056F630E3749A((intptr_t*)L_0, /*hidden argument*/NULL);
		int32_t* L_2 = __this->get_address_of_m_Width_1();
		int32_t L_3 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)L_2, /*hidden argument*/NULL);
		int32_t* L_4 = __this->get_address_of_m_Height_2();
		int32_t L_5 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)L_4, /*hidden argument*/NULL);
		int32_t* L_6 = __this->get_address_of_m_MipmapCount_3();
		int32_t L_7 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)L_6, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_m_Format_4();
		V_0 = L_8;
		int32_t L_9 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)(&V_0), /*hidden argument*/NULL);
		int32_t* L_10 = __this->get_address_of_m_PropertyNameId_5();
		int32_t L_11 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)L_10, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)486187739), (int32_t)((int32_t)486187739))), (int32_t)L_1)), (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9)), (int32_t)((int32_t)486187739))), (int32_t)L_11));
	}
}
extern "C"  int32_t XRTextureDescriptor_GetHashCode_mE61628A57D74C31744B57EBFBE8E8EDFA673B65F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	return XRTextureDescriptor_GetHashCode_mE61628A57D74C31744B57EBFBE8E8EDFA673B65F(_thisAdjusted, method);
}
// System.String UnityEngine.XR.ARSubsystems.XRTextureDescriptor::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* XRTextureDescriptor_ToString_mA7C17125D54876E04397C7022031B6A346CA9A7F (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTextureDescriptor_ToString_mA7C17125D54876E04397C7022031B6A346CA9A7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		intptr_t* L_2 = __this->get_address_of_m_NativeTexture_0();
		String_t* L_3 = IntPtr_ToString_m6ADB8DBD989D878D694B4031CC08461B1E2C51FF((intptr_t*)L_2, _stringLiteral7C920AC9C27322B466EC79E3F70C59D0EB2E27E3, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_1;
		int32_t* L_5 = __this->get_address_of_m_Width_1();
		String_t* L_6 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		int32_t* L_8 = __this->get_address_of_m_Height_2();
		String_t* L_9 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_7;
		int32_t* L_11 = __this->get_address_of_m_MipmapCount_3();
		String_t* L_12 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_10;
		int32_t* L_14 = __this->get_address_of_m_Format_4();
		RuntimeObject * L_15 = Box(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		*L_14 = *(int32_t*)UnBox(L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_13;
		int32_t* L_18 = __this->get_address_of_m_PropertyNameId_5();
		String_t* L_19 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_19);
		String_t* L_20 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral4A5C099E77D1F0180583C811D9E0FFDBBD8056EE, L_17, /*hidden argument*/NULL);
		return L_20;
	}
}
extern "C"  String_t* XRTextureDescriptor_ToString_mA7C17125D54876E04397C7022031B6A346CA9A7F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * _thisAdjusted = reinterpret_cast<XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *>(__this + 1);
	return XRTextureDescriptor_ToString_mA7C17125D54876E04397C7022031B6A346CA9A7F(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRTrackedImage::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,System.Guid,UnityEngine.Pose,UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void XRTrackedImage__ctor_mF31D86D7A523FD9EE7F4166A9ABB04272E93436B (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Guid_t  ___sourceImageId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___size3, int32_t ___trackingState4, intptr_t ___nativePtr5, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		__this->set_m_Id_0(L_0);
		Guid_t  L_1 = ___sourceImageId1;
		__this->set_m_SourceImageId_1(L_1);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = ___pose2;
		__this->set_m_Pose_2(L_2);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___size3;
		__this->set_m_Size_3(L_3);
		int32_t L_4 = ___trackingState4;
		__this->set_m_TrackingState_4(L_4);
		intptr_t L_5 = ___nativePtr5;
		__this->set_m_NativePtr_5((intptr_t)L_5);
		return;
	}
}
extern "C"  void XRTrackedImage__ctor_mF31D86D7A523FD9EE7F4166A9ABB04272E93436B_AdjustorThunk (RuntimeObject * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Guid_t  ___sourceImageId1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose2, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___size3, int32_t ___trackingState4, intptr_t ___nativePtr5, const RuntimeMethod* method)
{
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * _thisAdjusted = reinterpret_cast<XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *>(__this + 1);
	XRTrackedImage__ctor_mF31D86D7A523FD9EE7F4166A9ABB04272E93436B(_thisAdjusted, ___trackableId0, ___sourceImageId1, ___pose2, ___size3, ___trackingState4, ___nativePtr5, method);
}
// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::GetDefault()
extern "C" IL2CPP_METHOD_ATTR XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  XRTrackedImage_GetDefault_m5F66138594FB5852F148CD6F830086B62B906B84 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTrackedImage_GetDefault_m5F66138594FB5852F148CD6F830086B62B906B84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD(/*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Guid_t ));
		Guid_t  L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D ));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = V_1;
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_4;
		memset(&L_4, 0, sizeof(L_4));
		XRTrackedImage__ctor_mF31D86D7A523FD9EE7F4166A9ABB04272E93436B((&L_4), L_0, L_1, L_2, L_3, 0, (intptr_t)(0), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::get_trackableId()
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRTrackedImage_get_trackableId_m6EB6DBACC95E5EE2AFEE3CE421F4C123F32E9CB8 (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_Id_0();
		return L_0;
	}
}
extern "C"  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRTrackedImage_get_trackableId_m6EB6DBACC95E5EE2AFEE3CE421F4C123F32E9CB8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * _thisAdjusted = reinterpret_cast<XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *>(__this + 1);
	return XRTrackedImage_get_trackableId_m6EB6DBACC95E5EE2AFEE3CE421F4C123F32E9CB8(_thisAdjusted, method);
}
// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::get_sourceImageId()
extern "C" IL2CPP_METHOD_ATTR Guid_t  XRTrackedImage_get_sourceImageId_m402089FA779BB9821B50B23F79579466D895939B (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method)
{
	{
		Guid_t  L_0 = __this->get_m_SourceImageId_1();
		return L_0;
	}
}
extern "C"  Guid_t  XRTrackedImage_get_sourceImageId_m402089FA779BB9821B50B23F79579466D895939B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * _thisAdjusted = reinterpret_cast<XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *>(__this + 1);
	return XRTrackedImage_get_sourceImageId_m402089FA779BB9821B50B23F79579466D895939B(_thisAdjusted, method);
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::get_pose()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRTrackedImage_get_pose_m0566E087CA2DC99DF749E80277510C61DCF13186 (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_2();
		return L_0;
	}
}
extern "C"  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRTrackedImage_get_pose_m0566E087CA2DC99DF749E80277510C61DCF13186_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * _thisAdjusted = reinterpret_cast<XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *>(__this + 1);
	return XRTrackedImage_get_pose_m0566E087CA2DC99DF749E80277510C61DCF13186(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  XRTrackedImage_get_size_m746034D0E2FD28C9E48A90965E4FCD9137988906 (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method)
{
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_Size_3();
		return L_0;
	}
}
extern "C"  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  XRTrackedImage_get_size_m746034D0E2FD28C9E48A90965E4FCD9137988906_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * _thisAdjusted = reinterpret_cast<XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *>(__this + 1);
	return XRTrackedImage_get_size_m746034D0E2FD28C9E48A90965E4FCD9137988906(_thisAdjusted, method);
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::get_trackingState()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTrackedImage_get_trackingState_mA7177B042E8F9F9B584582970BC5FF0377CE94DB (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_TrackingState_4();
		return L_0;
	}
}
extern "C"  int32_t XRTrackedImage_get_trackingState_mA7177B042E8F9F9B584582970BC5FF0377CE94DB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * _thisAdjusted = reinterpret_cast<XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *>(__this + 1);
	return XRTrackedImage_get_trackingState_mA7177B042E8F9F9B584582970BC5FF0377CE94DB(_thisAdjusted, method);
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::get_nativePtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t XRTrackedImage_get_nativePtr_mB44BA43B02762B89091D56F254221F0741808629 (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_NativePtr_5();
		return (intptr_t)L_0;
	}
}
extern "C"  intptr_t XRTrackedImage_get_nativePtr_mB44BA43B02762B89091D56F254221F0741808629_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * _thisAdjusted = reinterpret_cast<XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *>(__this + 1);
	return XRTrackedImage_get_nativePtr_mB44BA43B02762B89091D56F254221F0741808629(_thisAdjusted, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTrackedImage::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTrackedImage_GetHashCode_mC1A5AB6C756498852952CB1B9F4F69D1177A02A6 (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * L_0 = __this->get_address_of_m_Id_0();
		int32_t L_1 = TrackableId_GetHashCode_m89E7236D11700A1FAF335918CA65CDEB1BF4D973((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)L_0, /*hidden argument*/NULL);
		Guid_t * L_2 = __this->get_address_of_m_SourceImageId_1();
		int32_t L_3 = Guid_GetHashCode_mEB01C6BA267B1CCD624BCA91D09B803C9B6E5369((Guid_t *)L_2, /*hidden argument*/NULL);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_4 = __this->get_address_of_m_Pose_2();
		int32_t L_5 = Pose_GetHashCode_m17AC0D28F5BD43DE0CCFA4CC1A870C525E0D6066((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_4, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_6 = __this->get_address_of_m_Size_3();
		int32_t L_7 = Vector2_GetHashCode_m028AB6B14EBC6D668CFA45BF6EDEF17E2C44EA54((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)L_6, /*hidden argument*/NULL);
		int32_t* L_8 = __this->get_address_of_m_TrackingState_4();
		int32_t L_9 = Int32_GetHashCode_m245C424ECE351E5FE3277A88EEB02132DAB8C25A((int32_t*)L_8, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)486187739))), (int32_t)L_3)), (int32_t)((int32_t)486187739))), (int32_t)L_5)), (int32_t)((int32_t)486187739))), (int32_t)L_7)), (int32_t)((int32_t)486187739))), (int32_t)L_9));
	}
}
extern "C"  int32_t XRTrackedImage_GetHashCode_mC1A5AB6C756498852952CB1B9F4F69D1177A02A6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * _thisAdjusted = reinterpret_cast<XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *>(__this + 1);
	return XRTrackedImage_GetHashCode_mC1A5AB6C756498852952CB1B9F4F69D1177A02A6(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedImage::Equals(UnityEngine.XR.ARSubsystems.XRTrackedImage)
extern "C" IL2CPP_METHOD_ATTR bool XRTrackedImage_Equals_m12A588942242306FC770FD88421D00750F22A141 (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTrackedImage_Equals_m12A588942242306FC770FD88421D00750F22A141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_Id_0();
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_1 = ___other0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_2 = L_1.get_m_Id_0();
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var);
		bool L_3 = TrackableId_op_Equality_m3171D96F331BC92756A7B171C85CD627442E7873(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		Guid_t  L_4 = __this->get_m_SourceImageId_1();
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_5 = ___other0;
		Guid_t  L_6 = L_5.get_m_SourceImageId_1();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_7 = Guid_op_Equality_m3D98BA18CDAF0C6C329F86720B5CD61A170A3E52(L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_8 = __this->get_m_Pose_2();
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_9 = ___other0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_10 = L_9.get_m_Pose_2();
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		bool L_11 = Pose_op_Equality_m412E2304E51F689B220BDAF927058DBEC0CEDD5B(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = __this->get_m_Size_3();
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_13 = ___other0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = L_13.get_m_Size_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		bool L_15 = Vector2_op_Equality_m0E86E1B1038DDB8554A8A0D58729A7788D989588(L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_16 = __this->get_m_TrackingState_4();
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_17 = ___other0;
		int32_t L_18 = L_17.get_m_TrackingState_4();
		return (bool)((((int32_t)L_16) == ((int32_t)L_18))? 1 : 0);
	}

IL_005b:
	{
		return (bool)0;
	}
}
extern "C"  bool XRTrackedImage_Equals_m12A588942242306FC770FD88421D00750F22A141_AdjustorThunk (RuntimeObject * __this, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___other0, const RuntimeMethod* method)
{
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * _thisAdjusted = reinterpret_cast<XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *>(__this + 1);
	return XRTrackedImage_Equals_m12A588942242306FC770FD88421D00750F22A141(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedImage::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRTrackedImage_Equals_m7C7F0B2FC7A6818276C2BC763CF0465333453B9C (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTrackedImage_Equals_m7C7F0B2FC7A6818276C2BC763CF0465333453B9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = XRTrackedImage_Equals_m12A588942242306FC770FD88421D00750F22A141((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)__this, ((*(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)UnBox(L_1, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  bool XRTrackedImage_Equals_m7C7F0B2FC7A6818276C2BC763CF0465333453B9C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * _thisAdjusted = reinterpret_cast<XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *>(__this + 1);
	return XRTrackedImage_Equals_m7C7F0B2FC7A6818276C2BC763CF0465333453B9C(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedImage::op_Equality(UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARSubsystems.XRTrackedImage)
extern "C" IL2CPP_METHOD_ATTR bool XRTrackedImage_op_Equality_m8C52E2C73BB01445DA64A954189A25E1C6B162AA (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___lhs0, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___rhs1, const RuntimeMethod* method)
{
	{
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_0 = ___rhs1;
		bool L_1 = XRTrackedImage_Equals_m12A588942242306FC770FD88421D00750F22A141((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedImage::op_Inequality(UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARSubsystems.XRTrackedImage)
extern "C" IL2CPP_METHOD_ATTR bool XRTrackedImage_op_Inequality_mDC56A7B7605F26C5D1D049FE1D68D4463155F847 (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___lhs0, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___rhs1, const RuntimeMethod* method)
{
	{
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_0 = ___rhs1;
		bool L_1 = XRTrackedImage_Equals_m12A588942242306FC770FD88421D00750F22A141((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// UnityEngine.XR.ARSubsystems.XRTrackedObject UnityEngine.XR.ARSubsystems.XRTrackedObject::get_defaultTrackedObject()
extern "C" IL2CPP_METHOD_ATTR XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  XRTrackedObject_get_defaultTrackedObject_m954A54C2FB9E061241CE8B689B4150732B38604C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTrackedObject_get_defaultTrackedObject_m954A54C2FB9E061241CE8B689B4150732B38604C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_il2cpp_TypeInfo_var);
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_0 = ((XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_StaticFields*)il2cpp_codegen_static_fields_for(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_il2cpp_TypeInfo_var))->get_k_Default_5();
		return L_0;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::get_trackableId()
extern "C" IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRTrackedObject_get_trackableId_mB720981791DE599B20879640517A33BE2FE2D84D (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = __this->get_m_TrackableId_0();
		return L_0;
	}
}
extern "C"  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  XRTrackedObject_get_trackableId_mB720981791DE599B20879640517A33BE2FE2D84D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * _thisAdjusted = reinterpret_cast<XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *>(__this + 1);
	return XRTrackedObject_get_trackableId_mB720981791DE599B20879640517A33BE2FE2D84D(_thisAdjusted, method);
}
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::get_pose()
extern "C" IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRTrackedObject_get_pose_mF865EAF61AE8767D6A0CCF59494A51F2D670F603 (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, const RuntimeMethod* method)
{
	{
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_Pose_1();
		return L_0;
	}
}
extern "C"  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  XRTrackedObject_get_pose_mF865EAF61AE8767D6A0CCF59494A51F2D670F603_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * _thisAdjusted = reinterpret_cast<XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *>(__this + 1);
	return XRTrackedObject_get_pose_mF865EAF61AE8767D6A0CCF59494A51F2D670F603(_thisAdjusted, method);
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::get_trackingState()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTrackedObject_get_trackingState_m0BD1D36132D7B57151A4CAE07B94238B2AEF3DED (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_TrackingState_2();
		return L_0;
	}
}
extern "C"  int32_t XRTrackedObject_get_trackingState_m0BD1D36132D7B57151A4CAE07B94238B2AEF3DED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * _thisAdjusted = reinterpret_cast<XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *>(__this + 1);
	return XRTrackedObject_get_trackingState_m0BD1D36132D7B57151A4CAE07B94238B2AEF3DED(_thisAdjusted, method);
}
// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::get_nativePtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t XRTrackedObject_get_nativePtr_mD654B09F24E79E99FA2A6B1A95C4EAFDF09C639F (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_NativePtr_3();
		return (intptr_t)L_0;
	}
}
extern "C"  intptr_t XRTrackedObject_get_nativePtr_mD654B09F24E79E99FA2A6B1A95C4EAFDF09C639F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * _thisAdjusted = reinterpret_cast<XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *>(__this + 1);
	return XRTrackedObject_get_nativePtr_mD654B09F24E79E99FA2A6B1A95C4EAFDF09C639F(_thisAdjusted, method);
}
// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::get_referenceObjectGuid()
extern "C" IL2CPP_METHOD_ATTR Guid_t  XRTrackedObject_get_referenceObjectGuid_m09514BB6AD9782AF342076F85BB28631C458BDC8 (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, const RuntimeMethod* method)
{
	{
		Guid_t  L_0 = __this->get_m_ReferenceObjectGuid_4();
		return L_0;
	}
}
extern "C"  Guid_t  XRTrackedObject_get_referenceObjectGuid_m09514BB6AD9782AF342076F85BB28631C458BDC8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * _thisAdjusted = reinterpret_cast<XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *>(__this + 1);
	return XRTrackedObject_get_referenceObjectGuid_m09514BB6AD9782AF342076F85BB28631C458BDC8(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRTrackedObject::.ctor(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.Pose,UnityEngine.XR.ARSubsystems.TrackingState,System.IntPtr,System.Guid)
extern "C" IL2CPP_METHOD_ATTR void XRTrackedObject__ctor_m81B6436D0E3BA4E73E1445074972DB81E3D27275 (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, Guid_t  ___referenceObjectGuid4, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = ___trackableId0;
		__this->set_m_TrackableId_0(L_0);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = ___pose1;
		__this->set_m_Pose_1(L_1);
		int32_t L_2 = ___trackingState2;
		__this->set_m_TrackingState_2(L_2);
		intptr_t L_3 = ___nativePtr3;
		__this->set_m_NativePtr_3((intptr_t)L_3);
		Guid_t  L_4 = ___referenceObjectGuid4;
		__this->set_m_ReferenceObjectGuid_4(L_4);
		return;
	}
}
extern "C"  void XRTrackedObject__ctor_m81B6436D0E3BA4E73E1445074972DB81E3D27275_AdjustorThunk (RuntimeObject * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___trackableId0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, int32_t ___trackingState2, intptr_t ___nativePtr3, Guid_t  ___referenceObjectGuid4, const RuntimeMethod* method)
{
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * _thisAdjusted = reinterpret_cast<XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *>(__this + 1);
	XRTrackedObject__ctor_m81B6436D0E3BA4E73E1445074972DB81E3D27275(_thisAdjusted, ___trackableId0, ___pose1, ___trackingState2, ___nativePtr3, ___referenceObjectGuid4, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedObject::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool XRTrackedObject_Equals_mF0CA07E970C48D514F2B9BBEC0FE44F46429C524 (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTrackedObject_Equals_mF0CA07E970C48D514F2B9BBEC0FE44F46429C524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		bool L_3 = XRTrackedObject_Equals_m925ED652F271F772E282C3621290411A259CBEEE((XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *)__this, ((*(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *)((XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *)UnBox(L_2, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
extern "C"  bool XRTrackedObject_Equals_mF0CA07E970C48D514F2B9BBEC0FE44F46429C524_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * _thisAdjusted = reinterpret_cast<XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *>(__this + 1);
	return XRTrackedObject_Equals_mF0CA07E970C48D514F2B9BBEC0FE44F46429C524(_thisAdjusted, ___obj0, method);
}
// System.Int32 UnityEngine.XR.ARSubsystems.XRTrackedObject::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t XRTrackedObject_GetHashCode_m2F1509AA89026BB34BFFE2C07529AAB3B5B0A429 (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * L_0 = __this->get_address_of_m_TrackableId_0();
		int32_t L_1 = TrackableId_GetHashCode_m89E7236D11700A1FAF335918CA65CDEB1BF4D973((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  int32_t XRTrackedObject_GetHashCode_m2F1509AA89026BB34BFFE2C07529AAB3B5B0A429_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * _thisAdjusted = reinterpret_cast<XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *>(__this + 1);
	return XRTrackedObject_GetHashCode_m2F1509AA89026BB34BFFE2C07529AAB3B5B0A429(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedObject::op_Equality(UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARSubsystems.XRTrackedObject)
extern "C" IL2CPP_METHOD_ATTR bool XRTrackedObject_op_Equality_m06220676F2AB319883E5895019E7010622DE9583 (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___lhs0, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___rhs1, const RuntimeMethod* method)
{
	{
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_0 = ___rhs1;
		bool L_1 = XRTrackedObject_Equals_m925ED652F271F772E282C3621290411A259CBEEE((XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedObject::op_Inequality(UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARSubsystems.XRTrackedObject)
extern "C" IL2CPP_METHOD_ATTR bool XRTrackedObject_op_Inequality_m05EF7C266FC336DCCA28A984954021CE67818E40 (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___lhs0, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___rhs1, const RuntimeMethod* method)
{
	{
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_0 = ___rhs1;
		bool L_1 = XRTrackedObject_Equals_m925ED652F271F772E282C3621290411A259CBEEE((XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRTrackedObject::Equals(UnityEngine.XR.ARSubsystems.XRTrackedObject)
extern "C" IL2CPP_METHOD_ATTR bool XRTrackedObject_Equals_m925ED652F271F772E282C3621290411A259CBEEE (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * __this, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___other0, const RuntimeMethod* method)
{
	{
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * L_0 = __this->get_address_of_m_TrackableId_0();
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_1 = ___other0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_2 = L_1.get_m_TrackableId_0();
		bool L_3 = TrackableId_Equals_mCE458E0FDCDD6E339FCC1926EE88EB7B3D45F943((TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  bool XRTrackedObject_Equals_m925ED652F271F772E282C3621290411A259CBEEE_AdjustorThunk (RuntimeObject * __this, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___other0, const RuntimeMethod* method)
{
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * _thisAdjusted = reinterpret_cast<XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *>(__this + 1);
	return XRTrackedObject_Equals_m925ED652F271F772E282C3621290411A259CBEEE(_thisAdjusted, ___other0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.XRTrackedObject::.cctor()
extern "C" IL2CPP_METHOD_ATTR void XRTrackedObject__cctor_mF6797A036790C2B6133B8B8A44C64B49FDBFF296 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRTrackedObject__cctor_mF6797A036790C2B6133B8B8A44C64B49FDBFF296_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_il2cpp_TypeInfo_var);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_0 = TrackableId_get_invalidId_mBE9FA1EC8F2EC1575C1B31666EA928A3382DF1CD(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Guid_t ));
		Guid_t  L_2 = V_0;
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_3;
		memset(&L_3, 0, sizeof(L_3));
		XRTrackedObject__ctor_m81B6436D0E3BA4E73E1445074972DB81E3D27275((&L_3), L_0, L_1, 0, (intptr_t)(0), L_2, /*hidden argument*/NULL);
		((XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_StaticFields*)il2cpp_codegen_static_fields_for(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_il2cpp_TypeInfo_var))->set_k_Default_5(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
