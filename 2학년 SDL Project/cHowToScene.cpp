#include "stdafx.h"
#include "cHowToScene.h"

cHowToScene::cHowToScene()
{
	m_pcIntroBG = new cPicture;
	m_pcIntroBtnList = new cButtonList;

}

cHowToScene::~cHowToScene()
{
	delete m_pcIntroBtnList;

	delete m_pcIntroBG;

}

void cHowToScene::Initiailze()
{
	m_pcIntroBG->Initiailze("./image/HowToBG.bmp", "HowToBG", 0, 0, WINSIZEX, WINSIZEY);
	m_pcIntroBtnList->Initiailze();
}

void cHowToScene::Update()
{
	m_pcIntroBG->Update();
	m_pcIntroBtnList->Update();
}

void cHowToScene::Render()
{
	m_pcIntroBG->Render();
	m_pcIntroBtnList->Render();
}

void cHowToScene::Release()
{
	m_pcIntroBG->Release();
	m_pcIntroBtnList->Release();
}
