//
// Created by john wu on 3/28/18.
//

#include <iostream>
#include "Ninja.h"


int Ninja::s_initValue{};

void Ninja::print() {
    std::cout << "It has a " << weapon1->getName() << " and a " << weapon2->getName() << "\n";
}

std::shared_ptr<Warrior> Ninja::make(int &remainingValue, int id) {
    if (remainingValue < s_initValue) return nullptr;
    remainingValue -= s_initValue;

    auto weapon1 = Weapon::build(id % 3);
    auto weapon2 = Weapon::build((id + 1) % 3);
    return std::make_shared<Ninja>(id, weapon1, weapon2);
}
