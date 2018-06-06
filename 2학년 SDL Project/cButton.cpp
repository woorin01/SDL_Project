#include "stdafx.h"

cButton::cButton()
{


}

cButton::~cButton()
{


}

void cButton::Initiailze()
{
}

void cButton::Initiailze(const char *imagename, const char *key, int x, int y, int w, int h, void(*function)())
{
	m_pImageInfo = IMAGEMANAGER->GetImageInfo(imagename, x, y, w, h);
	IMAGEMANAGER->AddImage(key, m_pImageInfo);

	m_pchNowImageName = key;

	func = function;

	m_bIsClick = true;
}

void cButton::Update()
{
	SDL_Event *pEvnt = EVENTMANAGER->GetEvent();

	int iMouseX, iMouseY;

	auto it = IMAGEMANAGER->FindImage(m_pchNowImageName);

	iMouseX = pEvnt->button.x;
	iMouseY = pEvnt->button.y;

	if ((it->rcPos.x <= iMouseX && iMouseX <= (it->rcPos.x + it->rcPos.w)) &&
		(it->rcPos.y <= iMouseY && iMouseY <= (it->rcPos.y + it->rcPos.h)))
	{
		if (pEvnt->type == SDL_MOUSEBUTTONDOWN && m_bIsClick)
		{
			if (pEvnt->button.button == SDL_BUTTON_LEFT)
			{
				func();
				m_bIsClick = false;

			}

		}
		else if (pEvnt->type == SDL_MOUSEBUTTONUP && !m_bIsClick)
		{
			m_bIsClick = true;

		}

	}

}

void cButton::Render()
{
	auto it = IMAGEMANAGER->FindImage(m_pchNowImageName);

	SDL_BlitSurface(it->p_image, NULL, IMAGEMANAGER->GetScreenSurface(), &it->rcPos);
}

void cButton::Release()
{
	SDL_FreeSurface(m_pImage);
	m_pImage = nullptr;
}
