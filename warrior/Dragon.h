//
// Created by john wu on 3/27/18.
//

#ifndef PREPARE_DRAGON_H
#define PREPARE_DRAGON_H


#include <weapons/Weapon.h>
#include "Warrior.h"

class Dragon : public Warrior {
private:
    std::shared_ptr<Weapon> weapon;
public:

    std::shared_ptr<Warrior> build() override;

    std::string getName() override { return "dragon"; }
};


#endif //PREPARE_DRAGON_H
