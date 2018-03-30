//
// Created by john wu on 3/30/18.
//

#ifndef PREPARE_BOMB_H
#define PREPARE_BOMB_H


#include "Weapon.h"

class Bomb : public Weapon {
public:
    std::shared_ptr<Weapon> clone() override { return std::make_shared<Bomb>(*this); }
};


#endif //PREPARE_BOMB_H
