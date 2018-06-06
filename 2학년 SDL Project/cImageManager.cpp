#include "stdafx.h"
#include "cImageManager.h"

cImageManager::cImageManager()
{
}

cImageManager::~cImageManager()
{
}

void cImageManager::Initiailze(SDL_Window *pwnd)
{
	m_pWnd = pwnd;

	m_pScreenSurface = SDL_GetWindowSurface(m_pWnd);

}

void cImageManager::Update()
{

}

void cImageManager::Render()
{
	SDL_UpdateWindowSurface(m_pWnd);

}

void cImageManager::Release()
{
	SDL_FreeSurface(m_pScreenSurface);

	SDL_DestroyWindow(m_pWnd);

	m_mImage.clear();

}

SDL_Surface *cImageManager::GetScreenSurface()
{
	return m_pScreenSurface;

}

SDL_Window *cImageManager::GetWindow()
{
	return m_pWnd;

}

IMAGEINFO *cImageManager::GetImageInfo(const char *p, int x, int y, int w, int h)
{
	IMAGEINFO *u = new IMAGEINFO;

	u->p_image = SDL_LoadBMP(p);
	SDL_SetColorKey(u->p_image, SDL_TRUE, SDL_MapRGB(u->p_image->format, 255, 0, 255));

	u->rcPos.x = x;
	u->rcPos.y = y;
	u->rcPos.w = w;
	u->rcPos.h = h;

	return u;
}

IMAGEINFO *cImageManager::FindImage(const char *p)
{
	auto it = m_mImage.find(p);

	if (it != m_mImage.end())
	{
		return it->second;

	}

}

std::map<std::string, IMAGEINFO*> *cImageManager::GetImageMap()
{
	return &m_mImage;

}

void cImageManager::AddImage(const char *key, IMAGEINFO *image)
{
	auto iter = m_mImage.find(key);

	if (iter == m_mImage.end())
	{
		m_mImage.insert(make_pair(key, image));

	}

}
