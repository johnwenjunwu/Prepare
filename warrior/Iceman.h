//
// Created by john wu on 3/29/18.
//

#ifndef PREPARE_ICEMAN_H
#define PREPARE_ICEMAN_H


#include "Warrior.h"

class Iceman : public Warrior{
public:

    std::shared_ptr<Warrior> build() override { return std::make_shared<Iceman>(*this); };

    std::string getName() override { return "iceman"; }
};


#endif //PREPARE_ICEMAN_H
