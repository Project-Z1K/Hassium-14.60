#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2C8 - 0x2B0)
// WidgetBlueprintGeneratedClass ItemPresentationGenericRewardHeader.ItemPresentationGenericRewardHeader_C
class UItemPresentationGenericRewardHeader_C : public UFortItemReceivedHeaderBase
{
public:
	class UWidgetAnimation*                      FadeAnim;                                          // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      InitialState;                                      // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      IntroAnim;                                         // 0x2C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UItemPresentationGenericRewardHeader_C* GetDefaultObj();

	void HandleOutro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void HandleInitialState(class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue);
	void HandleIntro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
};

}

