#pragma once

class cPicture;
class cButtonList;
class cCharAni;

class cIngameScene :
	public cBaseScene
{
private:
	cPicture *m_pcIngameBG;
	cPicture *m_pcIngameSongPic;

	cButtonList *m_pcIngameBtnList;

	cCharAni *m_pcRute;
	cCharAni *m_pcMell;
	cCharAni *m_pcSinger;
	cCharAni *m_pcBear;
	cCharAni *m_pcMandolrin;

public:
	cIngameScene();
	virtual ~cIngameScene();

public:
	void Initiailze() override;
	void Update() override;
	void Render() override;
	void Release() override;

};

