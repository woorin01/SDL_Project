#pragma once
#include "cBaseImage.h"
class cPicture :
	public cBaseImage
{
public:
	cPicture();
	virtual ~cPicture();

public:
	void Initiailze() override;
	void Update() override;
	void Render() override;
	void Release() override;

public:
	void Initiailze(const char *image, const char *imagename, int x, int y, int w, int h);

};

