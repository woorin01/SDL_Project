#pragma once
#include "cImageManager.h"

class cBaseImage
{
protected:
	SDL_Surface *m_pImage;
	SDL_Rect      m_rcPos;

	IMAGEINFO *m_pImageInfo;

	const char *m_pchNowImageName;

public:
	cBaseImage();
	virtual ~cBaseImage();
	
public:
	virtual void Initiailze() = 0;
	virtual void Update() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;

	virtual SDL_Rect *GetButtonPos() { return &m_rcPos; };
};

