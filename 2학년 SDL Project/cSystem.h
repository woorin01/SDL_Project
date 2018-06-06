#pragma once

class cSystem
{
private:
	SDL_Window *m_pWnd;
	SDL_bool		   m_bIsGameRun;
	SDL_Event	   m_Evnt;

	DWORD dwTime;
	DWORD dwCollipse;

public:
	cSystem();
	~cSystem();

public:
	void Initialize();
	void Update();
	void Release();
	void Frame();

};