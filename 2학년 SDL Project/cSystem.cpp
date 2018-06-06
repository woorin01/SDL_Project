#include "stdafx.h"

cSystem::cSystem()
{
	SDL_Init(SDL_INIT_EVERYTHING);

}

cSystem::~cSystem()
{

}

void cSystem::Initialize()
{
	m_pWnd = SDL_CreateWindow("CircusParty", 0, 0, WINSIZEX, WINSIZEY, SDL_WINDOW_FULLSCREEN);

	m_bIsGameRun = SDL_TRUE;

	dwTime = GetTickCount();

	IMAGEMANAGER->Initiailze(m_pWnd);
	EVENTMANAGER->Initiailze(&m_bIsGameRun);
	SCENEMANAGER->Initiailze();
	MUSICMANAGER->Initiailze();

}

void cSystem::Update()
{
	while (m_bIsGameRun)
	{
		if (dwTime < GetTickCount())
		{
			EVENTMANAGER->Update();
			SCENEMANAGER->Update();

			SCENEMANAGER->Render();
			IMAGEMANAGER->Render();

			Frame();
		}

	}

}

void cSystem::Release()
{
	IMAGEMANAGER->Release();
	SCENEMANAGER->Release();
	MUSICMANAGER->Release();

	IMAGEMANAGER->ReleaseSingleTone();
	SCENEMANAGER->ReleaseSingleTone();
	MUSICMANAGER->ReleaseSingleTone();
	EVENTMANAGER->ReleaseSingleTone();

	SDL_DestroyWindow(m_pWnd);

	SDL_Quit();

	delete this;

}

void cSystem::Frame()
{
	dwTime = GetTickCount();

	dwCollipse = GetTickCount() - dwTime;

	if (dwCollipse < 15)
		Sleep(15 - dwCollipse);

}
