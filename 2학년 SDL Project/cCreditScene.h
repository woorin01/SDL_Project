#pragma once
#include "cBaseScene.h"

class cButtonList;
class cPicture;

class cCreditScene :
	public cBaseScene
{
private:
	std::list<cPicture*> m_liPicture;
	cButtonList *m_pcCreditBtnList;

public:
	cCreditScene();
	virtual ~cCreditScene();

public:
	void Initiailze() override;
	void Update() override;
	void Render() override;
	void Release() override;

};

