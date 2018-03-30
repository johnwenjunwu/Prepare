//
// Created by john wu on 3/30/18.
//

#ifndef PREPARE_WEAPON_H
#define PREPARE_WEAPON_H


#include <memory>
#include "WeaponType.h"


class Weapon {
private:
public:
    virtual std::shared_ptr<Weapon> clone() = 0;

};

#endif //PREPARE_WEAPON_H
