#pragma once

// Name: dbd, Version: 502


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Competence.BaseModifierContainer
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class UBaseModifierContainer : public UactorComponent
{
public:
	unsigned char                                      UnknownData_3ZEP[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Id;                                                        // 0x00C0(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               _createConditionsLocally;                                  // 0x00CC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KXNU[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEventDrivenModifierCondition*               _eventDrivenCondition;                                     // 0x00D0(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEventDrivenModifierCondition*               _eventDrivenConditionLocal;                                // 0x00D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.BaseModifierContainer");
		return ptr;
	}



	void Local_OnInstantiateModifierConditions();
	bool isApplicable();
	class UEventDrivenModifierCondition* CreateAndSetEventDrivenCondition(class UClass* conditionType);
	void Authority_OnInstantiateModifierConditions();
};

// Class Competence.BaseModifierCondition
// 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
class UBaseModifierCondition : public UactorComponent
{
public:
	class UBaseModifierContainer*                      _owningModifier;                                           // 0x00B8(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UModifierSubjectProvider*                    _subjectProvider;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      _subjectProviderClass;                                     // 0x00C8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.BaseModifierCondition");
		return ptr;
	}



	void SetSubjectProviderClass(class UClass* subjectProviderClass);
	void OnRep_SubjectProviderClass();
	void OnRep_OwningModifier();
	void InitializeSubjectProviderClass();
	class Uactor* GetOwningActor();
};

// Class Competence.EventDrivenModifierCondition
// 0x0018 (FullSize[0x00E8] - InheritedSize[0x00D0])
class UEventDrivenModifierCondition : public UBaseModifierCondition
{
public:
	unsigned char                                      UnknownData_CJC8[0x18];                                    // 0x00D0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.EventDrivenModifierCondition");
		return ptr;
	}



};

// Class Competence.RangeBasedCondition
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class URangeBasedCondition : public UEventDrivenModifierCondition
{
public:
	float                                              _range;                                                    // 0x00E8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JNAJ[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.RangeBasedCondition");
		return ptr;
	}



	void OnRep_Range();
};

// Class Competence.ModifierSubjectProvider
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UModifierSubjectProvider : public UObject
{
public:
	unsigned char                                      UnknownData_EAWE[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.ModifierSubjectProvider");
		return ptr;
	}



};

// Class Competence.CompositeModifierCondition
// 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
class UCompositeModifierCondition : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_O8N9[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UEventDrivenModifierCondition*>       _conditions;                                               // 0x00F0(0x0010) (ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.CompositeModifierCondition");
		return ptr;
	}



	void OnRep_Conditions();
};

// Class Competence.AndModifierCondition
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UAndModifierCondition : public UCompositeModifierCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.AndModifierCondition");
		return ptr;
	}



};

// Class Competence.CompetenceDebugger
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UCompetenceDebugger : public UObject
{
public:
	unsigned char                                      UnknownData_0J9X[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.CompetenceDebugger");
		return ptr;
	}



};

// Class Competence.ConditionFactory
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UConditionFactory : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.ConditionFactory");
		return ptr;
	}



	class UOrModifierCondition* STATIC_Or(const TScriptInterface<class UconditionReceiver>& conditionReceiver);
	class UNotModifierCondition* STATIC_Not(const TScriptInterface<class UconditionReceiver>& conditionReceiver);
	class UIsTimerDoneCondition* STATIC_IsTimerDone(const TScriptInterface<class UconditionReceiver>& conditionReceiver, class UTimerObject* timer);
	class URangeBasedCondition* STATIC_CreateRangeBasedConditionWithSubject(const TScriptInterface<class UconditionReceiver>& conditionReceiver, class UClass* conditionType, float range, class UClass* subjectProviderClass);
	class URangeBasedCondition* STATIC_CreateRangeBasedCondition(const TScriptInterface<class UconditionReceiver>& conditionReceiver, class UClass* conditionType, float range);
	class UEventDrivenModifierCondition* STATIC_CreateAndReceiveConditionWithSubjectForBP(const TScriptInterface<class UconditionReceiver>& conditionReceiver, class UClass* conditionType, class UClass* subjectProviderClass);
	class UEventDrivenModifierCondition* STATIC_CreateAndReceiveConditionForBP(const TScriptInterface<class UconditionReceiver>& conditionReceiver, class UClass* conditionType);
	class UAndModifierCondition* STATIC_And(const TScriptInterface<class UconditionReceiver>& conditionReceiver);
};

// Class Competence.HasObjectState
// 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
class UHasObjectState : public UEventDrivenModifierCondition
{
public:
	struct FgameplayTag                                _state;                                                    // 0x00E8(0x000C) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UEDF[0x2C];                                    // 0x00F4(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.HasObjectState");
		return ptr;
	}



	void SetState(const struct FgameplayTag& state);
};

// Class Competence.HasObjectStateWithMaxDuration
// 0x0038 (FullSize[0x0158] - InheritedSize[0x0120])
class UHasObjectStateWithMaxDuration : public UHasObjectState
{
public:
	unsigned char                                      UnknownData_4MGT[0x30];                                    // 0x0120(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              _maxDuration;                                              // 0x0150(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1UJ4[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.HasObjectStateWithMaxDuration");
		return ptr;
	}



	void SetMaxDuration(float duration);
};

// Class Competence.CompetenceFlagProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCompetenceFlagProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.CompetenceFlagProvider");
		return ptr;
	}



};

// Class Competence.conditionReceiver
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UconditionReceiver : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.conditionReceiver");
		return ptr;
	}



};

// Class Competence.modifierProvider
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UmodifierProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.modifierProvider");
		return ptr;
	}



};

// Class Competence.IsTimerDoneCondition
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UIsTimerDoneCondition : public UEventDrivenModifierCondition
{
public:
	class UTimerObject*                                _timer;                                                    // 0x00E8(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DEZF[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.IsTimerDoneCondition");
		return ptr;
	}



	void SetTimer(class UTimerObject* timer);
	void OnRep_Timer();
};

// Class Competence.NotModifierCondition
// 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
class UNotModifierCondition : public UEventDrivenModifierCondition
{
public:
	unsigned char                                      UnknownData_F6P4[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEventDrivenModifierCondition*               _condition;                                                // 0x00F0(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.NotModifierCondition");
		return ptr;
	}



	void OnRep_Condition();
};

// Class Competence.OrModifierCondition
// 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
class UOrModifierCondition : public UCompositeModifierCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.OrModifierCondition");
		return ptr;
	}



};

// Class Competence.OwnerSubjectProvider
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UOwnerSubjectProvider : public UModifierSubjectProvider
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.OwnerSubjectProvider");
		return ptr;
	}



};

// Class Competence.TestEventDrivenModifierCondition
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UTestEventDrivenModifierCondition : public UEventDrivenModifierCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.TestEventDrivenModifierCondition");
		return ptr;
	}



};

// Class Competence.TestObjectStateProviderComponent
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class UTestObjectStateProviderComponent : public UactorComponent
{
public:
	unsigned char                                      UnknownData_CR5F[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameplayTagContainerComponent*              GameplayTagContainerComponent;                             // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("Class Competence.TestObjectStateProviderComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
