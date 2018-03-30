//
// Created by john wu on 3/28/18.
//

#ifndef PREPARE_NINJA_H
#define PREPARE_NINJA_H


#include "Warrior.h"

class Ninja : public Warrior {
private:
public:

    std::shared_ptr<Warrior> build() override { return std::make_shared<Ninja>(*this); };

    std::string getName() override { return "ninja"; }
};


#endif //PREPARE_NINJA_H
