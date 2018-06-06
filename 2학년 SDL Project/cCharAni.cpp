#include "stdafx.h"

void cCharAni::Initiailze()
{
}
//m_bIsAnimation == true 면 애니메이션 재생 false 면 애니메이션 멈춤
//m_iMusicDelay 애니메이션 딜레이
//어릿광대 완료(1분까지만)
//리쌍광대 완료(1분까지만)
void cCharAni::Update()
{
	auto it = IMAGEMANAGER->FindImage(m_pchNowImageName);

	if (MUSICMANAGER->IsPlayingMusic())
	{
		if (MUSICMANAGER->GetNowMusicName() == "./music/What_Is_Love.mp3")
		{
			if (m_iAniAmount == MELL)
			{	
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 400;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (0 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 50)
				{
					m_bIsAnimation = true;
				}
				else if (76 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 89)
				{
					m_bIsAnimation = true;
				}
				else if (101 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 112)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == RUTE)
			{				
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 400;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (25 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 33)
				{
					m_bIsAnimation = true;
				}
				else if (50 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 60)
				{
					m_bIsAnimation = true;
				}
				else if (69 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 78)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == SINGER)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 50;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (18 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 60)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == BEAR)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 400;
					m_bIsDelayInit = true;
					m_bIsAnimation = false;
				}
				if (33 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 55)
				{
					m_bIsAnimation = true;
				}
				else if (66 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 69)
				{
					m_bIsAnimation = true;
				}
				else if (74 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 83)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == MANDOLRIN)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 1000;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (35 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 45)
				{
					m_bIsAnimation = true;
				}
				else if (50 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 60)
				{
					m_bIsAnimation = true;
				}
				else if (91 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 98)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
		}
		else if (MUSICMANAGER->GetNowMusicName() == "./music/Young_Crawn.mp3")
		{
			if (m_iAniAmount == MELL)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 500;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (0 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 6)
				{
					m_bIsAnimation = true;
				}
				else if (16 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 39)
				{
					m_bIsAnimation = true;
				}
				else if (44 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 66)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == RUTE)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 500;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (6 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 16)
				{
					m_bIsAnimation = true;
				}
				else if (22 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 55)
				{
					m_bIsAnimation = true;
				}
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == SINGER)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 50;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (38 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 66)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == BEAR)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 500;
					m_bIsDelayInit = true;
					m_bIsAnimation = false;
				}
				if (16 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 38)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == MANDOLRIN)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 500;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (16 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 38)
				{
					m_bIsAnimation = true;
				}
				else if (50 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 60)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}

		}
		else if (MUSICMANAGER->GetNowMusicName() == "./music/Pierrots_Tears.mp3")
		{
			if (m_iAniAmount == MELL)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 500;
					m_bIsDelayInit = true;
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == RUTE)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 500;
					m_bIsDelayInit = true;
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == SINGER)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 50;
					m_bIsDelayInit = true;
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == BEAR)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 500;
					m_bIsDelayInit = true;
					m_bIsAnimation = false;
				}
		
			}
			else if (m_iAniAmount == MANDOLRIN)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 500;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}

			}
		}
		else if (MUSICMANAGER->GetNowMusicName() == "./music/Midnight_Circus.mp3")
		{
			if (m_iAniAmount == MELL)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 400;
					m_bIsDelayInit = true;
					m_bIsAnimation = false;
				}
				if (11 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 18)
				{
					m_bIsAnimation = true;
				}
				else if (27 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 29)
				{
					m_bIsAnimation = true;
				}
				else if (47 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 60)
				{
					m_bIsAnimation = true;
				}
				else if (75 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 86)
				{
					m_bIsAnimation = true;
				}
				else if (98 <= MUSICMANAGER->GetMusicSec())
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == RUTE)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 400;
					m_bIsDelayInit = true;
					m_bIsAnimation = false;
				}
				if (11 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 18)
				{
					m_bIsAnimation = true;
				}
				else if (32 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 41)
				{
					m_bIsAnimation = true;
				}
				else if (54 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 60)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == SINGER)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 50;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
			}
			else if (m_iAniAmount == BEAR)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 400;
					m_bIsDelayInit = true;
					m_bIsAnimation = false;
				}
				if (18 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 33)
				{
					m_bIsAnimation = true;
				}
				else if (47 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 55)
				{
					m_bIsAnimation = true;
				}
				else if (71 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 92)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == MANDOLRIN)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 1000;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (18 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 30)
				{
					m_bIsAnimation = true;
				}
				else if (42 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 60)
				{
					m_bIsAnimation = true;
				}
				else if (74 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 89)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
		}
		else if (MUSICMANAGER->GetNowMusicName() == "./music/LCrawn.mp3")
		{
			if (m_iAniAmount == MELL)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 500;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (0 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 8)
				{
					m_bIsAnimation = true;
				}
				else if (30 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 36)
				{
					m_bIsAnimation = true;
				}
				else if (46 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 49)
				{
					m_bIsAnimation = true;
				}
				else if (55 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 62)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == RUTE)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 500;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (30 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 44)
				{
					m_bIsAnimation = true;
				}
				else if (55 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 62)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}

			}
			else if (m_iAniAmount == SINGER)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 50;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (8 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 62)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == BEAR)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 500;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (27 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 53)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}
			else if (m_iAniAmount == MANDOLRIN)
			{
				if (!m_bIsDelayInit)
				{
					m_iMusicDelay = 500;
					m_bIsDelayInit = true;
					m_bIsAnimation = true;
				}
				if (8 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 25)
				{
					m_bIsAnimation = true;
				}
				else if (44 <= MUSICMANAGER->GetMusicSec() && MUSICMANAGER->GetMusicSec() <= 53)
				{
					m_bIsAnimation = true;
				}
				else
				{
					m_bIsAnimation = false;
				}
			}

		}

		if (m_dwTime + m_iMusicDelay <= GetTickCount() && m_bIsAnimation)
		{
			func(m_RealRc, it->rcPos, it->p_image->w);
			m_dwTime = GetTickCount();

		}

	}
	if (MUSICMANAGER->IsStopMusic())
	{
		m_RealRc.x = 0;
		m_iMusicSecCount = 0;
		m_bIsDelayInit = false;

	}

}

void cCharAni::Render()
{
	auto it = IMAGEMANAGER->FindImage(m_pchNowImageName);

	SDL_BlitSurface(it->p_image, &m_RealRc, IMAGEMANAGER->GetScreenSurface(), &it->rcPos);

}

void cCharAni::Release()
{
	SDL_FreeSurface(m_pImage);
	m_pImage = nullptr;

}

void cCharAni::Initiailze(const char * imagename, const char * key, int x, int y, int w, int h, int aniamout, void(*function)(SDL_Rect &realrc, SDL_Rect &imageinfo, int GunW))
{
	m_pImageInfo = IMAGEMANAGER->GetImageInfo(imagename, x, y, w, h);
	IMAGEMANAGER->AddImage(key, m_pImageInfo);

	m_pchNowImageName = key;

	func = function;

	m_RealRc.x = 0;
	m_RealRc.y = 0;
	m_RealRc.w = m_pImageInfo->rcPos.w;
	m_RealRc.h = m_pImageInfo->rcPos.h;

	m_dwTime = GetTickCount();

	m_iAniAmount = aniamout;

	m_bIsDelayInit = false;
}

cCharAni::cCharAni()
{
}

cCharAni::~cCharAni()
{
}
