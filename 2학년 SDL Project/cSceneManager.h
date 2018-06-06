#pragma once

enum
{
	INTRO,
	INGAME,
	HOWTO,
	CREDIT
};

//���� �ٲܶ����� �ٷ� �ٲٴ� ���� �ƴ� �ٲ۴ٰ� ������ �� ���� ��� ������Ʈ�� ������Ʈ, ������ ������ ���� ���� �������� �ٲپ� �ش�.
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
