#include "stdafx.h"
#include "cPicture.h"

cPicture::cPicture()
{
}

cPicture::~cPicture()
{
}

void cPicture::Initiailze(const char *image, const char *imagename, int x, int y, int w, int h)
{
	m_pImageInfo = IMAGEMANAGER->GetImageInfo(image, x, y, w, h);
	IMAGEMANAGER->AddImage(imagename, m_pImageInfo);

	m_pchNowImageName = imagename;
}

void cPicture::Initiailze()
{
}

void cPicture::Update()
{

}

void cPicture::Render()
{
	auto it = IMAGEMANAGER->FindImage(m_pchNowImageName);

	SDL_BlitSurface(it->p_image, NULL, IMAGEMANAGER->GetScreenSurface(), &it->rcPos);

}

void cPicture::Release()
{
	SDL_FreeSurface(m_pImage);
	m_pImage = nullptr;

}