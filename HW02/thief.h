#pragma once
#include "player.h"
#include "monster.h"

class Monster;

class Thief : public Player {
public:
    Thief(string nickname);
    void attack() override;
    void attack(Monster* monster) override;
};