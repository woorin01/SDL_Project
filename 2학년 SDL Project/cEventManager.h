#pragma once

class cEventManager :
	public SingleTone<cEventManager>
{
private:
	SDL_Event m_Event;
	SDL_bool *m_pbIsGameRun;

public:
	cEventManager();
	virtual ~cEventManager();

public:
	void Initiailze(SDL_bool *bpIsGameRun);
	void Update();
	void Render();
	void Release();

	SDL_Event *GetEvent();
	SDL_bool *GetSDLbool();

};

#define EVENTMANAGER cEventManager::GetInst()