#pragma once
#include <string>
#include "monster.h"
using namespace std;

class Monster;

class Player {
public:
    Player(string nickname);
    virtual void attack() = 0;
    virtual void attack(Monster* monster) = 0;
    void printPlayerStatus();

    // getter 함수(클래스 내부의 변수 값을 내보냄)
    string getJobName() { return job_name; }
    string getNickname() { return nickname; }
    int getLevel() { return level; }
    int getHP() { return HP; }
    int getMP() { return MP; }
    int getPower() { return power; }
    int getDefence() { return defence; }
    int getAccuracy() { return accuracy; }
    int getSpeed() { return speed; }

    // setter 함수(외부의 값을 받음)
    void setNickname(string nickname)
    {
        this->nickname = nickname;
    }
    void setHP(int HP)
    {
        this->HP = HP;
    }
    void setMP(int MP)
    {
        this->MP = MP;
    }
    void setPower(int power)
    {
        this->power = power;
    }
    void setDefence(int defence)
    {
        this->defence = defence;
    }
    void setAccuracy(int accuracy)
    { 
        this->accuracy = accuracy;
    }
    void setSpeed(int speed)
    {
        this->speed = speed;
    }

protected:
    string job_name;
    string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
}; 


