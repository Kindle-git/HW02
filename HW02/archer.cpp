#include "archer.h"
#include "monster.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "궁수";
    cout << "* " << job_name << "로 전직하였습니다." << endl;
    HP = 60;                /* 빈칸 4: 전사의 HP는 80으로 지정 */
    accuracy = 80;          /* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */
}
void Archer::attack() {
    cout << "* " << job_name << "는 등에 있는 화살을 꺼내, 손에 있는 활로 활시위를 당겨 발사합니다!" << endl;
}

void Archer::attack(Monster* monster) {
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