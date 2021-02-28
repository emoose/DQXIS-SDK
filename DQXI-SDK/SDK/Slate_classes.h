#pragma once

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class Slate.ButtonWidgetStyle
// 0x0238 (0x0278 - 0x0040)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                                ButtonStyle;                                              // 0x0040(0x0238) (Edit, BlueprintVisi)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.CheckBoxWidgetStyle
// 0x04F0 (0x0530 - 0x0040)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                              CheckBoxStyle;                                            // 0x0040(0x04F0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.CheckBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboBoxWidgetStyle
// 0x0378 (0x03B8 - 0x0040)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                              ComboBoxStyle;                                            // 0x0040(0x0378) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.ComboButtonWidgetStyle
// 0x0340 (0x0380 - 0x0040)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0040(0x0340) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ComboButtonWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextBoxWidgetStyle
// 0x0728 (0x0768 - 0x0040)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0040(0x0728) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.EditableTextWidgetStyle
// 0x01F0 (0x0230 - 0x0040)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                          EditableTextStyle;                                        // 0x0040(0x01F0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.EditableTextWidgetStyle");
		return ptr;
	}

};


// Class Slate.ProgressWidgetStyle
// 0x0170 (0x01B0 - 0x0040)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                           ProgressBarStyle;                                         // 0x0040(0x0170) (Edit, BlueprintVisi)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ProgressWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBarWidgetStyle
// 0x0440 (0x0480 - 0x0040)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0040(0x0440) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBarWidgetStyle");
		return ptr;
	}

};


// Class Slate.ScrollBoxWidgetStyle
// 0x01E8 (0x0228 - 0x0040)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                             ScrollBoxStyle;                                           // 0x0040(0x01E8) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.ScrollBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.SlateSettings
// 0x0008 (0x0040 - 0x0038)
class USlateSettings : public UObject
{
public:
	bool                                               bExplicitCanvasChildZOrder;                               // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SlateSettings");
		return ptr;
	}

};


// Class Slate.SpinBoxWidgetStyle
// 0x0298 (0x02D8 - 0x0040)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                               SpinBoxStyle;                                             // 0x0040(0x0298) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.SpinBoxWidgetStyle");
		return ptr;
	}

};


// Class Slate.TextBlockWidgetStyle
// 0x01E0 (0x0220 - 0x0040)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             TextBlockStyle;                                           // 0x0040(0x01E0) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Slate.TextBlockWidgetStyle");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
