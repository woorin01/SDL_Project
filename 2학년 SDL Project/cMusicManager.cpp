#include "stdafx.h"

int cMusicManager::GetMusicSec()
{
	return m_iMusicCount;
}

bool cMusicManager::IsPlayingMusic()
{
	return m_bIsMusicPlaying;
}

bool cMusicManager::IsStopMusic()
{
	return m_bIsMusicStop;
}

string cMusicManager::GetNowMusicName()
{
	return m_NowMusic;
}

void cMusicManager::Initiailze()
{
	AddMusic("Young Crawn", "./music/Young_Crawn.mp3");
	AddMusic("Pierrots Tears", "./music/Pierrots_Tears.mp3");
	AddMusic("Midnight Circus", "./music/Midnight_Circus.mp3");
	AddMusic("LeeSang Crawn", "./music/LCrawn.mp3");
	AddMusic("Kim", "./music/Kim.mp3");

	m_bIsMusicPlaying = false;
	m_bIsMusicStop = false;
	m_bStart = false;
	b = false;

	m_dwMusicCount = GetTickCount();
	m_iMusicCount = 0;
}

void cMusicManager::PlayMusic()
{
	if (!m_bIsMusicPlaying)
	{
		if (!m_bStart)
		{
			m_bIsMusicPlaying = true;
			m_bStart = true;
		}

		string play = "play ";

		play += m_NowMusic;

		cout << play << endl;

		mciSendStringA(play.c_str(), NULL, 0, NULL);
		
		b = true;
	}

}

void cMusicManager::PauseMusic()
{
	m_bIsMusicPlaying = false;

	string pause = "pause ";

	pause += m_NowMusic;

	mciSendStringA(pause.c_str(), NULL, 0, NULL);

}

void cMusicManager::StopMusic()
{
	m_bIsMusicPlaying = false;
	m_bIsMusicStop = true;

	string stop = "stop ";

	stop += m_NowMusic;

	mciSendStringA(stop.c_str(), NULL, 0, NULL);

	m_iMusicCount = 0;
}

void cMusicManager::Update()
{
	if (m_dwMusicCount + 1000 < GetTickCount() && m_bIsMusicPlaying)
	{
		m_iMusicCount++;
		m_dwMusicCount = GetTickCount();
		cout << m_iMusicCount << endl;
	}
	if (m_bIsMusicPlaying)
	{
		m_bIsMusicStop = false;
	}
	if(b)
	{
		m_bIsMusicPlaying = true;
		b = false;
	}

}

void cMusicManager::Release()
{
	m_mMusicName.clear();

}

void cMusicManager::AddMusic(const char *key, std::string MusicName)
{
	auto it = m_mMusicName.find(key);

	if (it == m_mMusicName.end())
	{
		m_mMusicName.insert(std::make_pair(key, MusicName));

	}

}

void cMusicManager::SetMusic(const char *key)
{
	auto it = m_mMusicName.find(key);

	if (it != m_mMusicName.end())
	{
		if (m_NowMusic != it->second)
		{
			StopMusic();

			m_NowMusic = it->second;
		}
		else
		{
			if (m_bIsMusicPlaying)
				StopMusic();
		}
	}
}

cMusicManager::cMusicManager()
{
}

cMusicManager::~cMusicManager()
{
}
