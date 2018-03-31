//
// Created by john wu on 3/30/18.
//

#include "Sword.h"

std::shared_ptr<Weapon> Sword::make() {
    return std::make_shared<Sword>();
}
