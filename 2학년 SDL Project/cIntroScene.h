#pragma once
#include "cBaseScene.h"

class cButtonList;
class cPicture;

class cIntroScene
	: public cBaseScene
{
private:
	cPicture *m_pcIntroBG;
	cButtonList *m_pcIntroBtnList;

public:
	cIntroScene();
	virtual ~cIntroScene();

public:
	void Initiailze() override;
	void Update() override;
	void Render() override;
	void Release() override;

};

