#pragma once
#include "cBaseScene.h"

class cButtonList;
class cPicture;

class cHowToScene :
	public cBaseScene
{
private:
	cPicture * m_pcIntroBG;
	cButtonList *m_pcIntroBtnList;


public:
	cHowToScene();
	virtual ~cHowToScene();

public:
	void Initiailze() override;
	void Update() override;
	void Render() override;
	void Release() override;

};

