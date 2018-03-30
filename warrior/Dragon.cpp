//
// Created by john wu on 3/27/18.
//

#include <iostream>
#include "Dragon.h"

std::shared_ptr<Warrior> Dragon::build() {
    auto w = std::make_shared<Dragon>(*this);
    return w;
}
