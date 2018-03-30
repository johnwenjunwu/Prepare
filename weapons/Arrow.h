//
// Created by john wu on 3/30/18.
//

#ifndef PREPARE_ARROW_H
#define PREPARE_ARROW_H


#include "Weapon.h"

class Arrow : public Weapon {

public:
    std::shared_ptr<Weapon> clone() override { return std::make_shared<Arrow>(*this); }
};

#endif //PREPARE_ARROW_H
