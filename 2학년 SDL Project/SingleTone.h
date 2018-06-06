#pragma once

template<class T>
class SingleTone 
{
private:
	static T *p;

public:
	static T *GetInst()
	{
		if (p == nullptr)
		{
			p = new T;
		}

		return p;
	}
	static void ReleaseSingleTone()
	{
		if (p)
		{
			delete p;
			
		}
		p = nullptr;

	}
protected:
	SingleTone() {}
	virtual ~SingleTone() {}

};

template <typename T>
T *SingleTone<T>::p = nullptr;
