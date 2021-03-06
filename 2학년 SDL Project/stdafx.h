// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 또는 프로젝트 관련 포함 파일이
// 들어 있는 포함 파일입니다.
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <Windows.h>
#include <list>
#include <vector>
#include <map>
#include <string>
#include <thread>

#include "C:\\SDL\\SDL2-2.0.7\\include\\sdl.h"
#include "C:\\SDL\\SDL2-2.0.7\\include\\sdl_main.h"

#include "cHowToScene.h"
#include "cSystem.h"
#include "SingleTone.h"
#include "cImageManager.h"
#include "cSceneManager.h"
#include "cBaseScene.h"
#include "cIntroScene.h"
#include "cBaseImage.h"
#include "cButtonList.h"
#include "cEventManager.h"
#include "cIngameScene.h"
#include "cButton.h"
#include "cPicture.h"
#include "cAnimationButton.h"
#include "cMusicManager.h"
#include "cCreditScene.h"
#include "cCharAni.h"


// TODO: 프로그램에 필요한 추가 헤더는 여기에서 참조합니다.

using namespace std;

const int WINSIZEX = 1270;
const int WINSIZEY = 720;