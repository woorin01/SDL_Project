#include "stdafx.h"

cAnimationButton::cAnimationButton()
{
}

cAnimationButton::~cAnimationButton()
{
}

void cAnimationButton::Initiailze()
{
}

void cAnimationButton::Update()
{
	SDL_Event *pEvnt = EVENTMANAGER->GetEvent();

	int iMouseX = pEvnt->button.x, iMouseY = pEvnt->button.y;

	auto it = IMAGEMANAGER->FindImage(m_pchNowImageName);

	if ((it->rcPos.x <= iMouseX && iMouseX <= (it->rcPos.x + it->rcPos.w)) &&
		(it->rcPos.y <= iMouseY && iMouseY <= (it->rcPos.y + it->rcPos.h)))
	{
		if (m_bIsOn == false)//마우스 올렸을때
		{
			if (m_chMusicName == NULL || m_chMusicName != MUSICMANAGER->GetNowMusicName())
			{
				m_RealRc.x += it->rcPos.w;
				
			}
			m_bIsOn = true;
		}

		if (pEvnt->type == SDL_MOUSEBUTTONDOWN && m_bIsClick)
		{
			if (pEvnt->button.button == SDL_BUTTON_LEFT)//마우스 왼쪽버튼 클릭 했을때
			{
				func(m_RealRc, it->rcPos, m_chMusicName);
				m_bIsClick = false;

			}
			
		}
		else if (pEvnt->type == SDL_MOUSEBUTTONUP && !m_bIsClick)
		{
			if (pEvnt->button.button == SDL_BUTTON_LEFT)//마우스 떗을때
			{
				if (m_chMusicName == NULL || m_chMusicName != MUSICMANAGER->GetNowMusicName())
				{
					m_RealRc.x -= it->rcPos.w;
					
				}
				m_bIsClick = true;
			}

		}

	}
	else
	{
		if (m_bIsOn == true)
		{
			if (m_chMusicName == NULL)
			{
				m_RealRc.x = 0;
				m_bIsOn = false;
				m_bIsClick = true;
			}
			else
			{
				if (m_chMusicName != MUSICMANAGER->GetNowMusicName())
				{
					m_RealRc.x = 0;
					m_bIsOn = false;
					m_bIsClick = true;
				}
			}	
			
		}
	}
}

void cAnimationButton::Render()
{
	auto it = IMAGEMANAGER->FindImage(m_pchNowImageName);

	SDL_BlitSurface(it->p_image, &m_RealRc, IMAGEMANAGER->GetScreenSurface(), &it->rcPos);

}

void cAnimationButton::Release()
{
	SDL_FreeSurface(m_pImage);
	m_pImage = nullptr;
}

void cAnimationButton::Initiailze(const char *imagename, const char *key, int x, int y, int w, int h, void(*function)(SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname), const char *musicname)
{
	m_pImageInfo = IMAGEMANAGER->GetImageInfo(imagename, x, y, w, h);
	IMAGEMANAGER->AddImage(key, m_pImageInfo);

	m_pchNowImageName = key;

	func = function;

	m_RealRc.x = 0;
	m_RealRc.y = 0;
	m_RealRc.w = m_pImageInfo->rcPos.w;
	m_RealRc.h = m_pImageInfo->rcPos.h;

	m_bIsOn = false;
	m_bIsClick = true;

	m_chMusicName = musicname;
}