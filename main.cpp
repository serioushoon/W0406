// �츮�� �÷����ϴ� ���ӿ��� �÷��̾�� ������, ���, ����� ���Ͱ� �ֽ��ϴ�.
// �÷��̾�� �̵��� �����մϴ�. ���� ���� �̵��� �����մϴ�.
// �÷��̾�� HP, MP�� ������ �ֽ��ϴ�. 
// �÷��̾�� ���͸� ���� �����մϴ�.
// ���� ���� �÷��̾ ���� �����մϴ�.
//
// �� ������ ���� Ŭ������ ���� �غ�����.
// ������ ���� �ʰ� ���踸 �ϸ� �˴ϴ�.
// �� ���α׷��� github�� �ø��� 3���̻� Ŀ�� �� github ��ũ�� �ּ���/
// .gitignore ������ �����ؼ� ���� ������ ������ �մϴ�.

#include <iostream>
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"
#include "Player.h"

using namespace std;

int main()
{
	FPlayer* Player = new FPlayer();
	FGoblin* Goblin = new FGoblin();
	FBoar* Boar = new FBoar();
	FSlime* Slime = new FSlime();

	Player->Move();
	Goblin->Move();
	Boar->Move();
	Slime->Move();

	delete Player;

	return 0;
}