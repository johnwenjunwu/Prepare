//
// Created by john wu on 3/27/18.
//

#include <iostream>
#include <iomanip>
#include "Dragon.h"

int Dragon::s_initValue{};

void Dragon::print() {
    std::cout << "It has a " << weapon->getName() << ",and it's morale is " << std::fixed << std::setprecision(2)
              << morale << '\n';
}

Dragon::Dragon(int id, std::shared_ptr<Weapon> weapon, double morale) : Warrior(id, s_initValue), morale(morale),
                                                                        weapon(std::move(weapon)) {
}

std::shared_ptr<Warrior> Dragon::make(int &remainingValue, int id) {
    if (remainingValue < s_initValue) return nullptr;
    remainingValue -= s_initValue;

    auto weapon = Weapon::build(id % 3);
    double morale = static_cast<double>(remainingValue) / s_initValue;
    return std::make_shared<Dragon>(id, weapon, morale);
}

