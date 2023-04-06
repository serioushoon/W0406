// 우리가 플레이하는 게임에는 플레이어와 슬라임, 고블린, 멧돼지 몬스터가 있습니다.
// 플레이어는 이동이 가능합니다. 몬스터 또한 이동이 가능합니다.
// 플레이어는 HP, MP를 가지고 있습니다. 
// 플레이어는 몬스터를 공격 가능합니다.
// 몬스터 또한 플레이어를 공격 가능합니다.
//
// 위 내용을 보고 클래스를 설계 해보세요.
// 구현은 하지 않고 설계만 하면 됩니다.
// 위 프로그램을 github에 올리고 3번이상 커밋 후 github 링크를 주세요/
// .gitignore 파일을 생성해서 제외 파일을 만들어야 합니다.

#include <iostream>
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"
#include "Player.h"

using namespace std;

int main()
{
	FPlayer* Player = new FPlayer();

	delete Player;
	return 0;
}
