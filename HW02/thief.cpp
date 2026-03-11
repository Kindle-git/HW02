#include "thief.h"
#include "monster.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "도적";
    cout << "* " << job_name << "으로 전직하였습니다." << endl;
    HP = 50;            /* 빈칸 4: 전사의 HP는 80으로 지정 */
    speed = 80;         /* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */
}
void Thief::attack() {
    cout << "* " << job_name << "는 조심스럽게 이동하여 적의 뒤를 잡은 후, 자신의 단검으로 적의 약점을 향해 찌릅니다!" << endl;
}

void Thief::attack(Monster* monster) {
    int damage = this->power - monster->getDefence();
    if (damage <= 0)
    {
        damage = 1;
    }

    cout << "플레이어의 공격력: " << this->power << endl;
    cout << "몬스터의 방어력: " << monster->getDefence() << endl;
    cout << "* 플레이어가 몬스터 (" << monster->getName() << ")에게 " << damage << "대미지를 입힙니다!" << endl;

    monster->setHP(monster->getHP() - damage);
    if (monster->getHP() <= 0)
    {
        cout << monster->getName() << "(이)가 사망했습니다!" << endl;
        cout << "축하합니다!" << endl;
    }
    else
    {
        cout << "몬스터의 현재 HP: " << monster->getHP() << endl;
    }
}