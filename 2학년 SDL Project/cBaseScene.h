#pragma once
class cBaseScene abstract
{
public:
	cBaseScene();
	virtual ~cBaseScene();
	 
public:
	virtual void Initiailze() = 0;
	virtual void Update() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;

};

