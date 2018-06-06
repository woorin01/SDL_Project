#include "stdafx.h"

cCreditScene::cCreditScene()
{
	m_pcCreditBtnList = new cButtonList;

}

cCreditScene::~cCreditScene()
{
	delete m_pcCreditBtnList;

}

void cCreditScene::Initiailze()
{
	m_pcCreditBtnList->Initiailze();
	
	cPicture *c = new cPicture;

	c->Initiailze("./image/CreditBG.bmp", "CreditBG", 0, 0, WINSIZEX, WINSIZEY);
	m_liPicture.push_back(c);

	c = new cPicture;
	c->Initiailze("./image/CreditGraphicName.bmp", "CGN", 716, 130, 325, 162);
	m_liPicture.push_back(c);

	c = new cPicture;
	c->Initiailze("./image/CreditProgrammingName.bmp", "CPN", 253, 130, 325, 162);
	m_liPicture.push_back(c);

	c = new cPicture;
	c->Initiailze("./image/CreditCharacter.bmp", "GChar", 765, 295, 296, 246);
	m_liPicture.push_back(c);

	c = new cPicture;
	c->Initiailze("./image/CreditCharacter2.bmp", "PChar", 325, 281, 174, 320);
	m_liPicture.push_back(c);

	c = new cPicture;
	c->Initiailze("./image/Credit2.bmp", "Camera", 140, 510, 74, 95);
	m_liPicture.push_back(c);

}

void cCreditScene::Update()
{
	for (auto it : m_liPicture)
	{
		it->Update();

	}

	m_pcCreditBtnList->Update();

}

void cCreditScene::Render()
{
	for (auto it : m_liPicture)
	{
		it->Render();

	}

	m_pcCreditBtnList->Render();

}

void cCreditScene::Release()
{
	for (auto it : m_liPicture)
	{
		it->Release();

	}

	m_pcCreditBtnList->Release();

}
