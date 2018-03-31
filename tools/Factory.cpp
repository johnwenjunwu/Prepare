//
// Created by john wu on 3/26/18.
//


#include "Factory.h"
#include <unordered_map>


std::shared_ptr<Warrior> Factory::makeWarrior(int &remainingValue) {
    for (int i = 0; i < m_order.size(); ++i) {
        if (m_nextType == m_order.end()) {
            m_nextType = m_order.begin();
        }
        if (auto warrior = Warrior::build(*m_nextType++, remainingValue, m_nextId)) {
            ++m_nextId;
            return warrior;
        }
    }
    stop = true;
    return nullptr;
}










