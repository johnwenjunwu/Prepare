//
// Created by john wu on 3/30/18.
//

#ifndef PREPARE_SWORD_H
#define PREPARE_SWORD_H


#include "Weapon.h"

class Sword : public Weapon {
public:
    std::shared_ptr<Weapon> clone() override { return std::make_shared<Sword>(*this); }
};


#endif //PREPARE_SWORD_H
