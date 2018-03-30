//
// Created by john wu on 3/26/18.
//

#include <iostream>
#include "Headquarter.h"


int Headquarter::s_initialValue;

void Headquarter::setInitialValue() {
    std::cin >> s_initialValue;
}

bool Headquarter::isStop() {
    return m_factory.isStop();
}

void Headquarter::makeWarrior() {
    std::cout << getName() << ' ';
    m_factory.makeWarrior(m_warriors, m_lifeValue);
    if (isStop()) {
        std::cout << "headquarter stops making warriors\n";
    } else {
        std::cout << "in " << getName() << " headquarter\n";
    }
}

