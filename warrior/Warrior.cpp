//
// Created by john wu on 3/26/18.
//

#include <weapons/Sword.h>
#include <weapons/Bomb.h>
#include <weapons/Arrow.h>
#include "Warrior.h"

const std::vector<std::shared_ptr<Weapon>> Warrior::s_weapons{
        std::make_shared<Sword>(),
        std::make_shared<Bomb>(),
        std::make_shared<Arrow>(),
};