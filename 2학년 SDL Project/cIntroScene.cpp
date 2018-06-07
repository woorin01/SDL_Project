#include "stdafx.h"
#include "cIntroScene.h"

cIntroScene::cIntroScene()
{
	m_pcIntroBG = new cPicture;
	m_pcIntroBtnList = new cButtonList;

}

cIntroScene::~cIntroScene()
{
	delete m_pcIntroBtnList;

	delete m_pcIntroBG;

}

void cIntroScene::Initiailze()
{
	m_pcIntroBG->Initiailze("./image/IntroBG.bmp", "IntroBG", 0, 0, WINSIZEX, WINSIZEY);
	m_pcIntroBtnList->Initiailze();

	MUSICMANAGER->BGMusic();
}

void cIntroScene::Update()
{
	m_pcIntroBG->Update();
	m_pcIntroBtnList->Update();
}

void cIntroScene::Render()
{
	m_pcIntroBG->Render();
	m_pcIntroBtnList->Render();
}

void cIntroScene::Release()
{
	m_pcIntroBG->Release();
	m_pcIntroBtnList->Release();
}
