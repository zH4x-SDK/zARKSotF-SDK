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

// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	ESelectionMode__None           = 0,
	ESelectionMode__SingleToggle   = 1,
	ESelectionMode__ESelectionMode_MAX = 2,
	EPathFollowingStatus__Idle     = 3,
	EPathFollowingStatus__Paused   = 4
};


// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	ETableViewMode__List           = 0,
	ETableViewMode__Tree           = 1
};


// Enum Slate.ESlateCheckBoxState
enum class ESlateCheckBoxState : uint8_t
{
	ESlateCheckBoxState__Unchecked = 0,
	ESlateCheckBoxState__Undetermined = 1,
	Scroll_Down                    = 2,
	Scroll_MAX                     = 3
};


// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight = 0,
	EProgressBarFillType__FillFromCenter = 1,
	EProgressBarFillType__BottomToTop = 2,
	EPawnActionAbortState__NotBeingAborted = 3,
	EPawnActionAbortState__LatentAbortInProgress = 4,
	EPawnActionAbortState__MAX     = 5
};


// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	ETextJustify__Left             = 0,
	ETextJustify__Right            = 1,
	ESlateSizeRule__Automatic      = 2,
	ESlateSizeRule__ESlateSizeRule_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
