#pragma once
#include "cBaseImage.h"

class cAnimationButton :
	public cBaseImage
{
private:
	void(*func)(SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname);

private:
	const char *m_chMusicName;

	bool m_bIsOn;
	bool m_bIsClick;

	SDL_Rect m_RealRc;

public:
	cAnimationButton();
	virtual ~cAnimationButton();

public:
	void Initiailze() override;
	void Update() override;
	void Render() override;
	void Release() override;

public:
	void Initiailze(const char *imagename, const char *key, int x, int y, int w, int h, void(*function)(SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname), const char *mname = NULL);

};

