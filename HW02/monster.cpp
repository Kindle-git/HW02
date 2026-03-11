#include "monster.h"
#include "player.h"
#include <iostream>

using namespace std;

// Monster 생성자
// - 몬스터의 이름을 매개변수로 입력 받습니다.
// - 모든 몬스터는 HP 10, 공격력 30, 방어력 10, 스피드 10의 능력치를 가집니다.
Monster::Monster(string name) : name(name), HP(100), power(20), defence(10), speed(10) {}

// 몬스터의 공격 함수
// - 플레이어 객체 포인터를 매개변수로 입력 받습니다.
// - 몬스터의 공격력-플레이어의 방어력을 데미지로 정의합니다.
// - 만약 위에서 계산한 데미지가 0 이하라면, 데미지를 1로 정의합니다.
// - 플레이어에게 얼마나 데미지를 입혔는지 출력합니다.
// - 플레이어 객체의 getHP 함수를 실행하여 플레이어HP-데미지 계산 결과를
// - 플레이어 객체의 setHP 매개변수로 전달합니다.
// - 플레이어가 생존했을 경우, 플레이어의 남은 HP를 출력합니다.
void Monster::attack(Player* player)
{
	int damage = this->power - player->getDefence();
	if (damage <= 0)
	{
		damage = 1;
	}

	cout << "몬스터의 공격력: " << this->power << endl;
	cout << "플레이어의 방어: " << player->getDefence() << endl;
	cout << "* 몬스터가 플레이어 (" << player->getNickname() << ")에게 " << damage << "대미지를 입힙니다!" << endl;

	player->setHP(player->getHP() - damage);
	if (player->getHP() <= 0)
	{
		cout << "플레이어가 사망했습니다!" << endl;
	}
	else
	{
		cout << "현재 HP: " << player->getHP() << endl;
	}
}
