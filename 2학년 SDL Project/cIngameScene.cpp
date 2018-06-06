#include "stdafx.h"
#include "cIngameScene.h"

cIngameScene::cIngameScene()
{
	m_pcIngameBG = new cPicture;
	m_pcIngameSongPic = new cPicture;

	m_pcIngameBtnList = new cButtonList;

	m_pcMell = new cCharAni;
	m_pcSinger = new cCharAni;
	m_pcRute = new cCharAni;
	m_pcBear = new cCharAni;
	m_pcMandolrin = new cCharAni;

}

cIngameScene::~cIngameScene()
{
	delete m_pcIngameBtnList;
	m_pcIngameBtnList = nullptr;

	delete m_pcIngameSongPic;
	m_pcIngameSongPic = nullptr;

	delete m_pcIngameBG;
	m_pcIngameBG = nullptr;

	delete m_pcMell;
	m_pcMell = nullptr;

	delete m_pcSinger;
	m_pcSinger = nullptr;

	delete m_pcRute;
	m_pcRute = nullptr;

	delete m_pcBear;
	m_pcBear = nullptr;

	delete m_pcMandolrin;
	m_pcMandolrin = nullptr;

}

void cIngameScene::Initiailze()
{
	m_pcIngameBG->Initiailze("./image/IngameBG.bmp", "IngameBG", 0, 0, WINSIZEX, WINSIZEY);
	m_pcIngameSongPic->Initiailze("./image/SongList.bmp", "IngameSongPic", 1030, 150, 216, 351);

	m_pcMell->Initiailze("./image/Mell.bmp", "Mell", 100, 365, 136, 238, MELL, [](SDL_Rect &realrc, SDL_Rect &imageinfo, int GunW) { if (realrc.x >= GunW - imageinfo.w) { realrc.x = 0; } else { realrc.x += imageinfo.w; } });
	m_pcRute->Initiailze("./image/Rute.bmp", "Rute", 280, 365, 187, 244, RUTE, [](SDL_Rect &realrc, SDL_Rect &imageinfo, int GunW) { if (realrc.x >= GunW - imageinfo.w) { realrc.x = 0; } else { realrc.x += imageinfo.w; } });
	m_pcSinger->Initiailze("./image/Singer.bmp", "Singer", 500, 365, 209, 247, SINGER, [](SDL_Rect &realrc, SDL_Rect &imageinfo, int GunW) { if (realrc.x >= GunW - imageinfo.w) { realrc.x = 0; } else { realrc.x += imageinfo.w; } } );
	m_pcBear->Initiailze("./image/Bear.bmp", "Bear", 870, 320, 145, 289, BEAR, [](SDL_Rect &realrc, SDL_Rect &imageinfo, int GunW) { if (realrc.x >= GunW - imageinfo.w) { realrc.x = 0; } else { realrc.x += imageinfo.w; } });
	m_pcMandolrin->Initiailze("./image/Mandolrin.bmp", "Mandolrin", 670, 375, 210, 228, MANDOLRIN, [](SDL_Rect &realrc, SDL_Rect &imageinfo, int GunW) { if (realrc.x >= GunW - imageinfo.w) { realrc.x = 0; } else { realrc.x += imageinfo.w; } });

	m_pcIngameBtnList->Initiailze();

}

void cIngameScene::Update()
{
	m_pcIngameBG->Update();
	m_pcIngameSongPic->Update();

	m_pcMell->Update();
	m_pcRute->Update();
	m_pcSinger->Update();
	m_pcBear->Update();
	m_pcMandolrin->Update();

	m_pcIngameBtnList->Update();

	MUSICMANAGER->Update();
}

void cIngameScene::Render()
{
	m_pcIngameBG->Render();
	m_pcIngameSongPic->Render();

	m_pcMell->Render();
	m_pcRute->Render();
	m_pcSinger->Render();
	m_pcBear->Render();
	m_pcMandolrin->Render();

	m_pcIngameBtnList->Render();

}

void cIngameScene::Release()
{
	m_pcIngameBG->Release();
	m_pcIngameSongPic->Release();

	m_pcMell->Release();
	m_pcRute->Release();
	m_pcSinger->Release();
	m_pcBear->Release();
	m_pcMandolrin->Release();

	m_pcIngameBtnList->Release();

}
