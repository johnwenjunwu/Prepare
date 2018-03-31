//
// Created by john wu on 3/30/18.
//

#include <vector>
#include "Weapon.h"
#include "Sword.h"
#include "Bomb.h"
#include "Arrow.h"

std::shared_ptr<Weapon> Weapon::build(int choice) {
    static const std::vector<std::shared_ptr<Weapon>> builders{
            std::make_shared<Sword>(),
            std::make_shared<Bomb>(),
            std::make_shared<Arrow>(),
    };

    return builders[choice]->make();
}
