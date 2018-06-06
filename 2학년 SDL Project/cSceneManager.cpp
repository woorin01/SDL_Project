#include "stdafx.h"
#include "cSceneManager.h"

cSceneManager::cSceneManager()
{

}

cSceneManager::~cSceneManager()
{

}

void cSceneManager::Initiailze()
{
	AddScene("Intro", new cIntroScene);
	AddScene("Ingame", new cIngameScene);
	AddScene("HowTo", new cHowToScene);
	AddScene("Credit", new cCreditScene);

	ChangeScene("Intro", INTRO);

}

void cSceneManager::Update()
{
	if (m_pNextScene)
	{
		if (m_pNowScene)
		{
			m_pNowScene->Release();
			m_pNowScene = nullptr;

		}

		m_pNowScene = m_pNextScene;
		m_pNowScene->Initiailze();

		m_pNextScene = nullptr;

	}

	m_pNowScene->Update();

}


void cSceneManager::Render()
{
	m_pNowScene->Render();

	//vector[pastscenenum]->update();
}

void cSceneManager::Release()
{
	m_pNowScene->Release();

	delete m_pNowScene;
	m_pNowScene = nullptr;
}

void cSceneManager::ChangeScene(const char *c, int a)
{
	auto it = m_mSceneContainer.find(c);

	if (it != m_mSceneContainer.end())
	{
		m_pNextScene = it->second;
		m_iNowScene = a;

	}

}

void cSceneManager::AddScene(const char *c, cBaseScene *cb)
{
	auto it = m_mSceneContainer.find(c);

	if (it == m_mSceneContainer.end())
	{
		m_mSceneContainer.insert(make_pair(c, cb));

	}

}

int cSceneManager::GetNowScene()
{
	return m_iNowScene;

}