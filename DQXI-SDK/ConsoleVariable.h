#pragma once

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

private:
	// [0]:main thread, [1]: render thread, having them both in the same cache line should only hurt on write which happens rarely for cvars
	T ShadowedValue[2];
};
