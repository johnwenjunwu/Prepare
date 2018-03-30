//
// Created by john wu on 3/29/18.
//

#ifndef PREPARE_WOLF_H
#define PREPARE_WOLF_H


#include "Warrior.h"

class Wolf : public Warrior {
public:

    std::shared_ptr<Warrior> build() override { return std::make_shared<Wolf>(*this); };

    std::string getName() override { return "wolf"; }
};

#endif //PREPARE_WOLF_H
