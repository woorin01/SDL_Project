#pragma once

enum
{
	INTRO,
	INGAME,
	HOWTO,
	CREDIT
};

//씬을 바꿀때에는 바로 바꾸는 것이 아닌 바꾼다고 예약을 해 놓고 모든 오브젝트의 업데이트, 랜더가 끝나고 나서 제일 마지막에 바꾸어 준다.
class cBaseScene;
class cSceneManager
	: public SingleTone<cSceneManager>
{
private:
	cBaseScene *m_pNowScene;
	cBaseScene *m_pNextScene;

	std::map < std::string, cBaseScene*> m_mSceneContainer;

	int m_iNowScene;

	bool m_bIsChangeScene;

public:
	cSceneManager();
	virtual ~cSceneManager();

public:
	void Initiailze();
	void Update();
	void Render();
	void Release();

public:
	void ChangeScene(const char *c, int a);
	void AddScene(const char *c, cBaseScene *cb);

	int GetNowScene();
};

#define SCENEMANAGER cSceneManager::GetInst()
