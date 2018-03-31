//
// Created by john wu on 3/29/18.
//

#include "Wolf.h"
int Wolf::s_initValue{};

std::shared_ptr<Warrior> Wolf::make(int &remainingValue, int id) {
    if (remainingValue < s_initValue) return nullptr;
    remainingValue -= s_initValue;

    return std::make_shared<Wolf>(id);
}

