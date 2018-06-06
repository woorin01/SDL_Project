#include "stdafx.h"
#include "cBaseImage.h"

cButtonList::cButtonList()
{
	
}

cButtonList::~cButtonList()
{

}

void cButtonList::Initiailze()
{
	if (SCENEMANAGER->GetNowScene() == INTRO)
	{
		cAnimationButton *c = new cAnimationButton;
		c->Initiailze(".\\image\\gStart.bmp", "GameStart", 950, 360, 134, 67, 
			[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname) { realrc.x += imageinfo.w; SCENEMANAGER->ChangeScene("Ingame", INGAME); });
		m_liButtonList.push_back(c);

		c = new cAnimationButton;
		c->Initiailze(".\\image\\How2.bmp", "HowTo", 950, 430, 134, 67, 
			[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname) { realrc.x += imageinfo.w; SCENEMANAGER->ChangeScene("HowTo", HOWTO); });
		m_liButtonList.push_back(c);

		c = new cAnimationButton;
		c->Initiailze(".\\image\\gExit.bmp", "Exit", 950, 500, 134, 67, 
			[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname) { realrc.x += imageinfo.w; SDL_bool *b = EVENTMANAGER->GetSDLbool(); *b = SDL_FALSE; });
		m_liButtonList.push_back(c);

		c = new cAnimationButton;
		c->Initiailze(".\\image\\Credit.bmp", "AniCredit", 140, 510, 74, 95,
						[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname) { realrc.x -= imageinfo.w; SCENEMANAGER->ChangeScene("Credit", CREDIT); });
		m_liButtonList.push_back(c);

	}
	else if (SCENEMANAGER->GetNowScene() == INGAME)
	{
		cAnimationButton *c = new cAnimationButton;
		c->Initiailze(".\\image\\HHButton.bmp", "HHButton", 10, 10, 71, 74, 
			[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname) { realrc.x += imageinfo.w; SCENEMANAGER->ChangeScene("Intro", INTRO); MUSICMANAGER->StopMusic(); });
		m_liButtonList.push_back(c);

		c = new cAnimationButton;
		c->Initiailze(".\\image\\StopAni.bmp", "Stop", 1200, 20, 16, 20,
			[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname) { realrc.x += imageinfo.w;  MUSICMANAGER->PauseMusic(); });
		m_liButtonList.push_back(c);

		c = new cAnimationButton;
		c->Initiailze(".\\image\\LeeSang.bmp", "SongButton", 1050, 240, 175, 35, 
			[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname)
			{ 
				if (musicname != MUSICMANAGER->GetNowMusicName())
				{
					realrc.x += imageinfo.w;
				}
				MUSICMANAGER->SetMusic("LeeSang Crawn");
				MUSICMANAGER->PlayMusic();
			}, "./music/LCrawn.mp3");
		m_liButtonList.push_back(c);

		c = new cAnimationButton;
		c->Initiailze(".\\image\\OutSider.bmp", "SongButton1", 1050, 285, 175, 35, 
			[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname)
			{ 
				if (musicname != MUSICMANAGER->GetNowMusicName())
				{
					realrc.x += imageinfo.w;
				}
				MUSICMANAGER->SetMusic("Pierrots Tears");
				MUSICMANAGER->PlayMusic();
			}, "./music/Pierrots_Tears.mp3");
		m_liButtonList.push_back(c);

		c = new cAnimationButton;
		c->Initiailze(".\\image\\Egloo.bmp", "SongButton2", 1050, 330, 175, 35, 
			[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname)
			{
				if (musicname != MUSICMANAGER->GetNowMusicName())
				{
					realrc.x += imageinfo.w;
				}
				MUSICMANAGER->SetMusic("Young Crawn");
				MUSICMANAGER->PlayMusic();
			}, "./music/Young_Crawn.mp3");
		m_liButtonList.push_back(c);

		c = new cAnimationButton;
		c->Initiailze(".\\image\\RealD.bmp", "SongButton3", 1050, 375, 175, 35, 
			[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname)
			{ 
				if (musicname != MUSICMANAGER->GetNowMusicName())
				{
					realrc.x += imageinfo.w;
				}
				MUSICMANAGER->SetMusic("What Is Love");
				MUSICMANAGER->PlayMusic();
			}, "./music/What_Is_Love.mp3");
		m_liButtonList.push_back(c);

		c = new cAnimationButton;
		c->Initiailze(".\\image\\SunnyHill.bmp", "SongButton4", 1050, 420, 175, 35, 
			[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname)
			{ 
				if (musicname != MUSICMANAGER->GetNowMusicName())
				{
					realrc.x += imageinfo.w;
				}
				MUSICMANAGER->SetMusic("Midnight Circus");
				MUSICMANAGER->PlayMusic();
			}, "./music/Midnight_Circus.mp3");
		m_liButtonList.push_back(c);

	}
	else if (SCENEMANAGER->GetNowScene() == HOWTO)
	{
		cAnimationButton *c = new cAnimationButton;
		c->Initiailze(".\\image\\HowToExitButton1.bmp", "HowToExitButton", 1248, 12, 17, 15, 
						[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname) { realrc.x += imageinfo.w; SCENEMANAGER->ChangeScene("Intro", INTRO); });
		m_liButtonList.push_back(c);

	}
	else if (SCENEMANAGER->GetNowScene() == CREDIT)
	{
		cAnimationButton *c = new cAnimationButton;
		c->Initiailze(".\\image\\HHButton.bmp", "HHButton", 10, 10, 71, 74,
						[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname) { realrc.x += imageinfo.w; SCENEMANAGER->ChangeScene("Intro", INTRO); });
		m_liButtonList.push_back(c);

	}

}

void cButtonList::Update()
{
	for (auto it : m_liButtonList)
	{
		it->Update();

	}
	
}

void cButtonList::Render()
{
	for (auto it : m_liButtonList)
	{
		it->Render();

	}

}

void cButtonList::Release()
{
	for (auto iter : m_liButtonList)
	{
		iter->Release();
		if (iter)
			delete iter;
	}
	m_liButtonList.clear();
}

/*
c = new cAnimationButton;
c->Initiailze(".\\image\\LeeSang.bmp", "SongButton", 1050, 240, 175, 35,
[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname)
{
if (musicname != MUSICMANAGER->GetNowMusicName())
{
realrc.x += imageinfo.w;
}
MUSICMANAGER->SetMusic("LeeSang Crawn");
MUSICMANAGER->PlayMusic();
}, "./music/LCrawn.mp3");
m_liButtonList.push_back(c);

c = new cAnimationButton;
c->Initiailze(".\\image\\OutSider.bmp", "SongButton1", 1050, 285, 175, 35,
[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname)
{
if (musicname != MUSICMANAGER->GetNowMusicName())
{
realrc.x += imageinfo.w;
}
MUSICMANAGER->SetMusic("Pierrots Tears");
MUSICMANAGER->PlayMusic();
}, "./music/Pierrots_Tears.mp3");
m_liButtonList.push_back(c);

c = new cAnimationButton;
c->Initiailze(".\\image\\Egloo.bmp", "SongButton2", 1050, 330, 175, 35,
[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname)
{
if (musicname != MUSICMANAGER->GetNowMusicName())
{
realrc.x += imageinfo.w;
}
MUSICMANAGER->SetMusic("Young Crawn");
MUSICMANAGER->PlayMusic();
}, "./music/Young_Crawn.mp3");
m_liButtonList.push_back(c);

c = new cAnimationButton;
c->Initiailze(".\\image\\RealD.bmp", "SongButton3", 1050, 375, 175, 35,
[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname)
{
if (musicname != MUSICMANAGER->GetNowMusicName())
{
realrc.x += imageinfo.w;
}
MUSICMANAGER->SetMusic("What Is Love");
MUSICMANAGER->PlayMusic();
}, "./music/What_Is_Love.mp3");
m_liButtonList.push_back(c);

c = new cAnimationButton;
c->Initiailze(".\\image\\SunnyHill.bmp", "SongButton4", 1050, 420, 175, 35,
[](SDL_Rect &realrc, SDL_Rect &imageinfo, const char *musicname)
{
if (musicname != MUSICMANAGER->GetNowMusicName())
{
realrc.x += imageinfo.w;
}
MUSICMANAGER->SetMusic("Midnight Circus");
MUSICMANAGER->PlayMusic();
}, "./music/Midnight_Circus.mp3");
m_liButtonList.push_back(c);
*/