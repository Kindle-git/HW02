#pragma once
#include "player.h"
#include "monster.h"

class Monster;

class Archer : public Player {
public:
    Archer(string nickname);
    void attack() override;
    void attack(Monster* monster) override;
};