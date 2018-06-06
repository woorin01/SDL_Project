#pragma once
#include "SingleTone.h"

struct _IMAGEINFO
{
	SDL_Surface *p_image;
	SDL_Rect rcPos;

}typedef IMAGEINFO;

class cImageManager
	: public SingleTone<cImageManager>
{
private:
	SDL_Window * m_pWnd;
	SDL_Surface  *m_pScreenSurface;

	std::map<std::string, IMAGEINFO*> m_mImage;
	
public:
	cImageManager();
	virtual ~cImageManager();

public:
	void Initiailze(SDL_Window *pwnd);
	void Update();
	void Render();
	void Release();

	SDL_Surface *GetScreenSurface();
	SDL_Window *GetWindow();

public:
	IMAGEINFO *GetImageInfo(const char *p, int x, int y, int w, int h);
	IMAGEINFO *FindImage(const char *p);
	std::map<std::string, IMAGEINFO*> *GetImageMap();
	void AddImage(const char *key ,IMAGEINFO *image);
	
};

#define IMAGEMANAGER cImageManager::GetInst()
