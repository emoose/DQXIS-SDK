#pragma once

namespace SDK {
// Unsure if this matches with DQXI..
enum EConsoleVariableFlags
{
	ECVF_Default = 0x0,
	ECVF_Cheat = 0x1,
	ECVF_ReadOnly = 0x4,
	ECVF_Unregistered = 0x8,
	ECVF_CreatedFromIni = 0x10,
	ECVF_RenderThreadSafe = 0x20,
	ECVF_Scalability = 0x40,
	ECVF_ScalabilityGroup = 0x80,
	ECVF_SetByMask = 0xFF000000,
	ECVF_SetByConstructor = 0x0,
	ECVF_SetByScalability = 0x1000000,
	ECVF_SetByGameSetting = 0x2000000,
	ECVF_SetByProjectSetting = 0x3000000,
	ECVF_SetByDeviceProfile = 0x4000000,
	ECVF_SetBySystemSettingsIni = 0x5000000,
	ECVF_SetByConsoleVariablesIni = 0x6000000,
	ECVF_SetByCommandline = 0x7000000,
	ECVF_SetByCode = 0x8000000,
	ECVF_SetByConsole = 0x9000000,
};

// TODO: check this..
template <class T>
class TConsoleVariableData
{
public:
	T GetValueOnGameThread() const
	{
		return ShadowedValue[0];
	}

	T GetValueOnRenderThread() const
	{
		return ShadowedValue[1];
	}

	void Set(T value) {
		ShadowedValue[0] = ShadowedValue[1] = value;
	}

	// [0]:main thread, [1]: render thread, having them both in the same cache line should only hurt on write which happens rarely for cvars
	T ShadowedValue[2];
};

class IConsoleVariable;
class IConsoleCommand;
class IConsoleObject
{
public:
	virtual ~IConsoleObject() {}
	virtual const TCHAR* GetHelp() const = 0;
	virtual void SetHelp(const TCHAR* Value) = 0;

	virtual EConsoleVariableFlags GetFlags() const = 0;
	virtual void SetFlags(const EConsoleVariableFlags Value) = 0;

	virtual class IConsoleVariable* AsVariable() = 0;
	virtual bool IsVariableInt() const = 0;

	virtual class TConsoleVariableData<int32_t>* AsVariableInt() = 0;
	virtual class TConsoleVariableData<float>* AsVariableFloat() = 0;
	virtual class TConsoleVariableData<SDK::FString>* AsVariableString() = 0;
	virtual struct IConsoleCommand* AsCommand() = 0;

	virtual void Release() = 0;
};

class FConsoleVariableDelegate {};

class IConsoleVariable : public IConsoleObject
{
public:
	virtual void Set(const TCHAR* InValue, EConsoleVariableFlags SetBy = ECVF_SetByCode) = 0;

	virtual int32_t GetInt() const = 0;
	virtual float GetFloat() const = 0;
	virtual FString GetString() const = 0;

	virtual void SetOnChangedCallback(const FConsoleVariableDelegate& Callback) = 0;
};

// TODO: fill this out
class IConsoleCommand : public IConsoleObject
{
};

};
