#pragma once

class cBaseImage;
class cGameStartButton;
class cButtonList
{
private:
	std::list<cBaseImage*> m_liButtonList;

public:
	cButtonList();
	~cButtonList();

public:
	void Initiailze();
	void Update();
	void Render();
	void Release();

};

