//
// Created by john wu on 3/26/18.
//

#ifndef PREPARE_FACTORY_H
#define PREPARE_FACTORY_H

#include <string>
#include <unordered_map>
#include <warrior/Warrior.h>
#include <vector>
#include "Type.h"
#include "weapons/Weapon.h"


class Factory {
private:
    static const std::unordered_map<Type, std::shared_ptr<Warrior>> s_warriors;

    const std::vector<Type> m_order;
    int m_nextId = 1;
    std::vector<Type>::const_iterator m_nextType = m_order.begin();
    bool stop = false;
public:
    static void setInitials();

    explicit Factory(std::vector<Type> order) : m_order(std::move(order)) {};

    bool isStop() const { return stop; };

    void makeWarrior(std::vector<std::shared_ptr<Warrior>> &warriors, int &remainingValue);
};


#endif //PREPARE_FACTORY_H
