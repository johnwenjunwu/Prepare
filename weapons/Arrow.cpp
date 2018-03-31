//
// Created by john wu on 3/30/18.
//

#include "Arrow.h"

std::shared_ptr<Weapon> Arrow::make() {
    return std::make_shared<Arrow>();
}
