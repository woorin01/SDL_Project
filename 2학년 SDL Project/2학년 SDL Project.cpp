// 2학년 SDL Project.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	cSystem *p_system = new cSystem;

	p_system->Initialize();

	p_system->Update();

	p_system->Release();

    return 0;
}

