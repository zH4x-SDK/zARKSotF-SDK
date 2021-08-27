#pragma once

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseUp    = 1,
	ESlateBrushImageType__NoImage  = 2,
	ESlateBrushImageType__Linear   = 3
};


// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 1,
	EButtonClickMethod__DownAndUp  = 2
};


// Enum SlateCore.EFocusMoveDirection
enum class EFocusMoveDirection : uint8_t
{
	EFocusMoveDirection__Next      = 0,
	EFocusMoveDirection__EFocusMoveDirection_MAX = 1,
	EButtonTouchMethod__DownAndUp  = 2
};


// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Center                  = 1,
	HAlign_MAX                     = 2,
	VAlign_Fill                    = 3,
	VAlign_Center                  = 4
};


// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Center                  = 1,
	VAlign_MAX                     = 2,
	MenuPlacement_BelowAnchor      = 3,
	MenuPlacement_ComboBoxRight    = 4
};


// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_ComboBoxRight    = 1,
	MenuPlacement_AboveAnchor      = 2,
	ESTOFNotificationType__Death   = 3,
	ESTOFNotificationType__MatchVictory = 4,
	ESTOFNotificationType__MAX     = 5
};


// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_MAX                     = 1,
	EFocusMoveDirection__Next      = 2
};


// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_MAX                     = 1,
	Orient_Horizontal              = 2
};


// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	ETextCommit__OnUserMovedFocus  = 1,
	ETextCommit__ETextCommit_MAX   = 2,
	ESelectInfo__OnKeyPress        = 3,
	ESelectInfo__OnMouseClick      = 4
};


// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnMouseClick      = 1,
	ESelectInfo__ESelectInfo_MAX   = 2,
	ESlateBrushDrawType__NoDrawType = 3,
	ESlateBrushDrawType__Border    = 4
};


// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Foreground = 1,
	ESlateColorStylingMode__UseColor_MAX = 2,
	ETextCommit__Default           = 3,
	ETextCommit__OnUserMovedFocus  = 4
};


// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Border    = 1,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 2,
	ESlateBrushTileType__NoTile    = 3,
	ESlateBrushTileType__Vertical  = 4
};


// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Vertical  = 1,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 2,
	EFontHinting__Default          = 3,
	EFontHinting__AutoLight        = 4
};


// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Vertical = 1,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 2,
	EProgressBarFillType__LeftToRight = 3,
	EProgressBarFillType__FillFromCenter = 4
};


// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__Linear   = 1,
	ETableViewMode__List           = 2,
	ETableViewMode__Tree           = 3
};


// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	EFontHinting__AutoLight        = 1,
	EFontHinting__None             = 2,
	ESlateBrushMirrorType__NoMirror = 3,
	ESlateBrushMirrorType__Vertical = 4,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 5
};


// Enum SlateCore.EKeyboardFocusCause
enum class EKeyboardFocusCause : uint8_t
{
	EKeyboardFocusCause__Mouse     = 0,
	EKeyboardFocusCause__SetDirectly = 1,
	EKeyboardFocusCause__OtherWidgetLostFocus = 2,
	EKeyboardFocusCause__EKeyboardFocusCause_MAX = 3,
	EChatMessageType__MyMessage    = 4,
	EChatMessageType__DifferentTeamMessage = 5,
	EChatMessageType__NotificationMessage = 6
};


// Enum SlateCore.SlateTypes.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 1,
	EPrimalItemMessage__Broken     = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateColor
// 0x0028
struct FSlateColor
{
	struct FLinearColor                                SpecifiedColor;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateColorStylingMode>                ColorUseRule;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateBrush
// 0x0078
struct FSlateBrush
{
	struct FVector2D                                   ImageSize;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FLinearColor                                Tint;                                                     // 0x0000(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateColor                                 TintColor;                                                // 0x0000(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResourceName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDynamicallyLoaded;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasUObject;                                              // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x77];                                      // 0x0001(0x0077) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateSound
{
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.ButtonStyle
// 0x0240 (0x0248 - 0x0008)
struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                   // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Hovered;                                                  // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Pressed;                                                  // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 Disabled;                                                 // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FMargin                                     NormalPadding;                                            // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     PressedPadding;                                           // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PressedSound;                                             // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       HoveredSound;                                             // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x240];                                     // 0x0008(0x0240) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0020
struct FSlateFontInfo
{
	class UObject*                                     FontObject;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FontDrawScalar;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FontName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFontHinting>                          Hinting;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.TextBlockStyle
// 0x0110 (0x0118 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FVector2D                                   ShadowOffset;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 SelectedBackgroundColor;                                  // 0x0000(0x0028) (Edit)
	struct FLinearColor                                HighlightColor;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 HighlightShape;                                           // 0x0000(0x0078) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0078(0x00A0) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.WindowStyle
// 0x0DA8 (0x0DB0 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                MinimizeButtonStyle;                                      // 0x0000(0x0248) (Edit, BlueprintVisible)
	struct FButtonStyle                                MaximizeButtonStyle;                                      // 0x0000(0x0248) (Edit, BlueprintVisible)
	struct FButtonStyle                                RestoreButtonStyle;                                       // 0x0000(0x0248) (Edit, BlueprintVisible)
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0000(0x0248) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TitleTextStyle;                                           // 0x0000(0x0118) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveTitleBrush;                                         // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveTitleBrush;                                       // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FlashTitleBrush;                                          // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OutlineBrush;                                             // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateColor                                 OutlineColor;                                             // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BorderBrush;                                              // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ChildBackgroundBrush;                                     // 0x0000(0x0078) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xD38];                                     // 0x0078(0x0D38) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.ScrollBorderStyle
// 0x00F0 (0x00F8 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x0000(0x0078) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0078(0x0080) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.ScrollBoxStyle
// 0x01E0 (0x01E8 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 LeftShadowBrush;                                          // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 RightShadowBrush;                                         // 0x0000(0x0078) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x170];                                     // 0x0078(0x0170) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.DockTabStyle
// 0x05D0 (0x05D8 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0000(0x0248) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 ColorOverlayBrush;                                        // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 ForegroundBrush;                                          // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 ContentAreaBrush;                                         // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 TabWellBrush;                                             // 0x0000(0x0078) (Edit)
	struct FMargin                                     TabPadding;                                               // 0x0000(0x0010) (Edit)
	float                                              OverlapWidth;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 FlashColor;                                               // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x5B0];                                     // 0x0028(0x05B0) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.TableColumnHeaderStyle
// 0x0438 (0x0440 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 SortPrimaryDescendingImage;                               // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 SortSecondaryAscendingImage;                              // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 SortSecondaryDescendingImage;                             // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 MenuDropdownImage;                                        // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                            // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                           // 0x0000(0x0078) (Edit)
	unsigned char                                      UnknownData00[0x3C8];                                     // 0x0078(0x03C8) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.SplitterStyle
// 0x00F0 (0x00F8 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HandleNormalBrush;                                        // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HandleHighlightBrush;                                     // 0x0000(0x0078) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0078(0x0080) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.HeaderRowStyle
// 0x0A18 (0x0A20 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle                     ColumnStyle;                                              // 0x0000(0x0440) (Edit)
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                          // 0x0000(0x0440) (Edit)
	struct FSplitterStyle                              ColumnSplitterStyle;                                      // 0x0000(0x00F8) (Edit)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0000(0x0078) (Edit)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x9F8];                                     // 0x0028(0x09F8) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.TableRowStyle
// 0x0578 (0x0580 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SelectorFocusedBrush;                                     // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveHoveredBrush;                                       // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveHoveredBrush;                                     // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveBrush;                                            // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                            // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                   // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                             // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 OddRowBackgroundBrush;                                    // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DragDropLineIndicatorBrush;                               // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 DragDropBorderIndicatorBrush;                             // 0x0000(0x0078) (Edit)
	struct FSlateColor                                 TextColor;                                                // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 SelectedTextColor;                                        // 0x0000(0x0028) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x558];                                     // 0x0028(0x0558) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.SpinBoxStyle
// 0x0290 (0x0298 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredBackgroundBrush;                                   // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ActiveFillBrush;                                          // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 InactiveFillBrush;                                        // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 ArrowsImage;                                              // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0000(0x0028)
	struct FMargin                                     TextPadding;                                              // 0x0000(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x288];                                     // 0x0010(0x0288) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.InlineTextImageStyle
// 0x0080 (0x0088 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                    // 0x0000(0x0078) (Edit)
	int16_t                                            Baseline;                                                 // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x86];                                      // 0x0002(0x0086) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.SliderStyle
// 0x01E0 (0x01E8 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 NormalBarImage;                                           // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledBarImage;                                         // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DisabledThumbImage;                                       // 0x0000(0x0078) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x170];                                     // 0x0078(0x0170) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.VolumeControlStyle
// 0x0440 (0x0448 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle                                SliderStyle;                                              // 0x0000(0x01E8) (Edit)
	struct FSlateBrush                                 HighVolumeImage;                                          // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 MidVolumeImage;                                           // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 LowVolumeImage;                                           // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 NoVolumeImage;                                            // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 MutedImage;                                               // 0x0000(0x0078) (Edit)
	unsigned char                                      UnknownData00[0x3D0];                                     // 0x0078(0x03D0) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.ScrollBarStyle
// 0x0258 (0x0260 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HorizontalBackgroundImage;                                // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 VerticalBackgroundImage;                                  // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 HoveredThumbImage;                                        // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DraggedThumbImage;                                        // 0x0000(0x0078) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0078(0x01E8) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.EditableTextBoxStyle
// 0x0508 (0x0510 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImageNormal;                                    // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageHovered;                                   // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageFocused;                                   // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageReadOnly;                                  // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              Font;                                                     // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 BackgroundColor;                                          // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 ReadOnlyForegroundColor;                                  // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FMargin                                     HScrollBarPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FMargin                                     VScrollBarPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0000(0x0260) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x2B0];                                     // 0x0260(0x02B0) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.SearchBoxStyle
// 0x0710 (0x0718 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextBoxStyle;                                             // 0x0000(0x0510) (Edit)
	struct FSlateFontInfo                              ActiveFontInfo;                                           // 0x0000(0x0020) (Edit)
	struct FSlateBrush                                 UpArrowImage;                                             // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 GlassImage;                                               // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 ClearImage;                                               // 0x0000(0x0078) (Edit)
	unsigned char                                      UnknownData00[0x6A0];                                     // 0x0078(0x06A0) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.ExpandableAreaStyle
// 0x00F0 (0x00F8 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 CollapsedImage;                                           // 0x0000(0x0078) (Edit)
	struct FSlateBrush                                 ExpandedImage;                                            // 0x0000(0x0078) (Edit)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0078(0x0080) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.ProgressBarStyle
// 0x0168 (0x0170 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 FillImage;                                                // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MarqueeImage;                                             // 0x0000(0x0078) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0078(0x00F8) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.InlineEditableTextBlockStyle
// 0x0628 (0x0630 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0000(0x0510) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0000(0x0118) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x518];                                     // 0x0118(0x0518) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.EditableTextStyle
// 0x0228 (0x0230 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageSelected;                                  // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageSelectionTarget;                           // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 BackgroundImageComposing;                                 // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CaretImage;                                               // 0x0000(0x0078) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0078(0x01B8) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.HyperlinkStyle
// 0x0370 (0x0378 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                UnderlineStyle;                                           // 0x0000(0x0248) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0000(0x0118) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x368];                                     // 0x0010(0x0368) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.ComboButtonStyle
// 0x0348 (0x0350 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ButtonStyle;                                              // 0x0000(0x0248) (Edit, BlueprintVisible)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 MenuBorderBrush;                                          // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FMargin                                     MenuBorderPadding;                                        // 0x0000(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x340];                                     // 0x0010(0x0340) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.ComboBoxStyle
// 0x0390 (0x0398 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0000(0x0350) (Edit, BlueprintVisible)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 SelectionChangeSlateSound;                                // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       PressedSound;                                             // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       SelectionChangeSound;                                     // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x390];                                     // 0x0008(0x0390) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateTypes.CheckBoxStyle
// 0x0500 (0x0508 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 UncheckedImage;                                           // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedHoveredImage;                                    // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UncheckedPressedImage;                                    // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedImage;                                             // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedHoveredImage;                                      // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CheckedPressedImage;                                      // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedImage;                                        // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedHoveredImage;                                 // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FSlateBrush                                 UndeterminedPressedImage;                                 // 0x0000(0x0078) (Edit, BlueprintVisible)
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FSlateSound                                 CheckedSlateSound;                                        // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 UncheckedSlateSound;                                      // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       CheckedSound;                                             // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       UncheckedSound;                                           // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FName                                       HoveredSound;                                             // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x500];                                     // 0x0008(0x0500) MISSED OFFSET
};

// ScriptStruct SlateCore.InputEvent
// 0x0020
struct FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.PointerEvent
// 0x0058 (0x0078 - 0x0020)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0020(0x0058) MISSED OFFSET
};

// ScriptStruct SlateCore.Geometry
// 0x0034
struct FGeometry
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct SlateCore.ControllerEvent
// 0x0020 (0x0040 - 0x0020)
struct FControllerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyboardFocusEvent
// 0x0008
struct FKeyboardFocusEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0028 - 0x0020)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyboardEvent
// 0x0020 (0x0040 - 0x0020)
struct FKeyboardEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.MotionEvent
// 0x0038 (0x0058 - 0x0020)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0020(0x0038) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
