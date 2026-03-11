#pragma once
#include "player.h"
#include "monster.h"

class Monster;

class Warrior : public Player {
public:
    Warrior(string nickname);
    void attack() override;
    void attack(Monster* monster) override;
};