#pragma once

// Name: ARKSotF, Version: 178.8.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MediaAssets.MediaPlayer
// 0x0080 (0x00A8 - 0x0028)
class UMediaPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}


	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetRate(float Rate);
	void SetMute(bool bMute);
	bool SetLooping(bool InLooping);
	bool Seek(const struct FTimespan& InTime);
	bool Rewind();
	bool Play();
	bool Pause();
	bool OpenUrl(const struct FString& NewUrl);
	void OnMediaPlayerMediaOpened__DelegateSignature(const struct FString& OpenedUrl);
	void OnMediaPlayerMediaClosed__DelegateSignature();
	bool IsStopped();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	struct FString GetUrl();
	struct FTimespan GetTime();
	float GetRate();
	bool GetMute();
	struct FTimespan GetDuration();
	bool CanPlay();
	bool CanPause();
};


// Class MediaAssets.MediaSoundWave
// 0x0048 (0x0238 - 0x01F0)
class UMediaSoundWave : public USoundWave
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x01F0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSoundWave");
		return ptr;
	}


	void SetMediaPlayer(class UMediaPlayer* InMediaPlayer);
};


// Class MediaAssets.MediaTexture
// 0x0058 (0x0100 - 0x00A8)
class UMediaTexture : public UTexture
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00A8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}


	void SetMediaPlayer(class UMediaPlayer* InMediaPlayer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
