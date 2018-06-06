#include "stdafx.h"
#include "cEventManager.h"

cEventManager::cEventManager()
{

}

cEventManager::~cEventManager()
{

}

void cEventManager::Initiailze(SDL_bool *bpIsGameRun)
{
	m_pbIsGameRun = bpIsGameRun;

}

void cEventManager::Update()
{
	SDL_PollEvent(&m_Event);

	if (m_Event.type == SDL_QUIT)
		*m_pbIsGameRun = SDL_FALSE;

}

void cEventManager::Render()
{

}

void cEventManager::Release()
{
	delete m_pbIsGameRun;

}

SDL_Event *cEventManager::GetEvent()
{
	return &m_Event;

}

SDL_bool *cEventManager::GetSDLbool()
{
	return m_pbIsGameRun;
}
