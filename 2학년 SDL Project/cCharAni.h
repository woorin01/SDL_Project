#pragma once
#include "cBaseImage.h"

enum ANI
{
	MELL,
	RUTE,
	SINGER,
	BEAR,
	MANDOLRIN
};	 

class cCharAni :
	public cBaseImage
{
private:
	void(*func)(SDL_Rect &realrc, SDL_Rect &imageinfo, int GunW);

	SDL_Rect m_RealRc;

	DWORD m_dwTime;

	int m_iMusicSecCount;
	int m_iAniAmount;
	int m_iMusicDelay;

	bool m_bIsDelayInit;
	bool m_bIsAnimation;

public:
	void Initiailze() override;
	void Update() override;
	void Render() override;
	void Release() override;

public:
	void Initiailze(const char *imagename, const char *key, int x, int y, int w, int h, int aniamout,
					  void(*function)(SDL_Rect &realrc, SDL_Rect &imageinfo, int GunW));

public:
	cCharAni();
	virtual ~cCharAni();

};

