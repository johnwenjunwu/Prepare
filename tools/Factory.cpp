//
// Created by john wu on 3/26/18.
//

#include <warrior/Ninja.h>
#include <warrior/Iceman.h>
#include <warrior/Wolf.h>
#include <warrior/Dragon.h>
#include <warrior/Lion.h>
#include <weapons/Sword.h>
#include <weapons/Bomb.h>
#include <weapons/Arrow.h>
#include "Factory.h"


const std::unordered_map<Type, std::shared_ptr<Warrior>> Factory::s_warriors = {
        {Type::ninja,  std::make_shared<Ninja>()},
        {Type::dragon, std::make_shared<Dragon>()},
        {Type::iceman, std::make_shared<Iceman>()},
        {Type::wolf,   std::make_shared<Wolf>()},
        {Type::lion,   std::make_shared<Lion>()},
};



void Factory::makeWarrior(std::vector<std::shared_ptr<Warrior>> &warriors, int &remainingValue) {

    for (int i = 0; i < m_order.size(); ++i, ++m_nextType) {
        if (m_nextType == m_order.end()) {
            m_nextType = m_order.begin();
        }
        const auto &w = s_warriors.at(*m_nextType);
        if (w->getLifeValue() <= remainingValue) {
            ++m_nextType;
            auto n = w->build();
            n->setId(m_nextId++);

            remainingValue -= n->getLifeValue();
            warriors.push_back(n);

            auto sum = std::count_if(warriors.begin(), warriors.end(), [&n](const std::shared_ptr<Warrior> &item) {
                return item->getName() == n->getName();
            });
            std::cout << n->getName() << ' ' << n->getId() << " born with strength " << n->getLifeValue() << ','
                      << sum << ' ' << n->getName() << ' ';
            return;
        }
    }
    stop = true;
}

void Factory::setInitials() {
    s_warriors.at(Type::dragon)->cinLifeValue();
    s_warriors.at(Type::ninja)->cinLifeValue();
    s_warriors.at(Type::iceman)->cinLifeValue();
    s_warriors.at(Type::lion)->cinLifeValue();
    s_warriors.at(Type::wolf)->cinLifeValue();
}







