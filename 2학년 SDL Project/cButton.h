#pragma once
#include "cBaseImage.h"

class cButton :
	public cBaseImage
{
private:
	bool m_bIsClick;

private:
	void (*func)();

public:
	cButton();
	virtual ~cButton();

public:
	void Initiailze() override;
	void Update() override;
	void Render() override;
	void Release() override;

public:
	void Initiailze(const char *imagename, const char *key, int x, int y, int w, int h, void(*function)());

};

