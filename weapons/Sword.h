//
// Created by john wu on 3/30/18.
//

#ifndef PREPARE_SWORD_H
#define PREPARE_SWORD_H


#include "Weapon.h"

class Sword : public Weapon {
public:
    std::string getName() override {
        return "sword";
    }

    std::shared_ptr<Weapon> make() override;
};


#endif //PREPARE_SWORD_H
