//
// Created by john wu on 3/30/18.
//

#include "Bomb.h"

std::shared_ptr<Weapon> Bomb::make() {
    return std::make_shared<Bomb>();
}
