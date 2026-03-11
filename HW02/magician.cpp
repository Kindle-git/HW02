#include "magician.h"
#include "monster.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname) {
    job_name = "마법사";
    cout << "* " << job_name << "로 전직하였습니다." << endl;
    HP = 40;        /* 빈칸 4: 전사의 HP는 80으로 지정 */
    MP = 80;        /* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */
}
void Magician::attack() {
    cout << "* " << job_name << "는 주문을 읊자, 자신의 지팡이에서 화염구가 나타나 적을 향해 발사합니다!" << endl;
}

void Magician::attack(Monster* monster) {
    int damage = this->power - monster->getDefence();
    setMP(getMP() - 10);
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