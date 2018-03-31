//
// Created by john wu on 3/30/18.
//

#ifndef PREPARE_BOMB_H
#define PREPARE_BOMB_H


#include "Weapon.h"

class Bomb : public Weapon {
public:
    std::string getName() override {
        return "bomb";
    }

    std::shared_ptr<Weapon> make() override;
};


#endif //PREPARE_BOMB_H
