//
// Created by john wu on 3/26/18.
//

#include <iostream>
#include "Headquarter.h"
#include <algorithm>

int Headquarter::s_initialValue;

void Headquarter::setInitialValue() {
    std::cin >> s_initialValue;
}

bool Headquarter::isStop() {
    return m_factory.isStop();
}

void Headquarter::makeWarrior() {
    auto warrior = m_factory.makeWarrior(m_lifeValue);
    if (warrior) {
        m_warriors.push_back(warrior);
        printWarrior(warrior);
    } else {
        printFailure();
    }
}

void Headquarter::printWarrior(std::shared_ptr<Warrior> warrior) {

    auto sum = std::count_if(m_warriors.begin(), m_warriors.end(), [&warrior](const std::shared_ptr<Warrior> &item) {
        return item->getName() == warrior->getName();
    });
    std::cout << getName() << ' ' << warrior->getName() << ' ' << warrior->getId() << " born with strength "
              << warrior->getLifeValue() << ',' << sum << ' ' << warrior->getName() << " in " << getName()
              << " headquarter\n";
    warrior->print();
}

void Headquarter::printFailure() {
    std::cout << getName() << " headquarter stops making warriors\n";
}



