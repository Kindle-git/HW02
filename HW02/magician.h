#pragma once
#include "player.h"
#include "monster.h"

class Monster;

class Magician : public Player {
public:
    Magician(string nickname);
    void attack() override;
    void attack(Monster* monster) override;
};