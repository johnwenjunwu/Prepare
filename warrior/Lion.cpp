//
// Created by john wu on 3/29/18.
//

#include "Lion.h"

int Lion::s_initValue{};

void Lion::print() {
    std::cout << "It's loyalty is " << m_loyalty << '\n';
}

std::shared_ptr<Warrior> Lion::make(int &remainingValue, int id) {
    if (remainingValue < s_initValue) return nullptr;
    remainingValue -= s_initValue;

    double morale = remainingValue;
    return std::make_shared<Lion>(id, morale);
}
