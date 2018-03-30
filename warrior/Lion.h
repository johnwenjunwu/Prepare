//
// Created by john wu on 3/29/18.
//

#ifndef PREPARE_LION_H
#define PREPARE_LION_H


#include "Warrior.h"

class Lion : public Warrior {
public:

    std::shared_ptr<Warrior> build() override { return std::make_shared<Lion>(*this); };

    std::string getName() override { return "lion"; }
};


#endif //PREPARE_LION_H
