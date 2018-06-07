#pragma once
#include "SingleTone.h"

class cMusicManager :
	public SingleTone<cMusicManager>
{
private:
	std::string m_NowMusic;

	DWORD m_dwMusicCount;
	int m_iMusicCount;

	bool m_bIsMusicPlaying;
	bool m_bIsMusicStop;
	bool m_bStart;
	bool b;

private:
	std::map<std::string, std::string> m_mMusicName;
	
public:
	int GetMusicSec();

public:
	bool IsPlayingMusic();
	bool IsStopMusic();

	std::string GetNowMusicName();

public:
	void Initiailze();
	void BGMusic();
	void PlayMusic();
	void PauseMusic();
	void StopMusic();
	void Update();
	void Release();

	void AddMusic(const char *key, std::string MusicName);
	void SetMusic(const char *key);

public:
	cMusicManager();
	virtual ~cMusicManager();

};

#define MUSICMANAGER cMusicManager::GetInst()