//
// Created by john wu on 3/29/18.
//

#include "Iceman.h"

int Iceman::s_initValue{};

void Iceman::print() {
    std::cout << "It has a " << weapon->getName() << "\n";
}

std::shared_ptr<Warrior> Iceman::make(int &remainingValue, int id) {
    if (remainingValue < s_initValue) return nullptr;
    remainingValue -= s_initValue;

    auto weapon = Weapon::build(id % 3);
    return std::make_shared<Iceman>(id, weapon);
}
