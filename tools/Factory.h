//
// Created by john wu on 3/26/18.
//

#ifndef PREPARE_FACTORY_H
#define PREPARE_FACTORY_H

#include <vector>
#include <warrior/Warrior.h>
#include <warrior/Dragon.h>
#include <warrior/Ninja.h>
#include <warrior/Wolf.h>
#include <warrior/Iceman.h>
#include <warrior/Lion.h>
#include "Type.h"

class Factory {
private:
    const std::vector<Type> m_order;
    int m_nextId = 1;
    std::vector<Type>::const_iterator m_nextType = m_order.begin();
    bool stop = false;
public:

    explicit Factory(std::vector<Type> order) : m_order(std::move(order)) {};

    bool isStop() const { return stop; };

    std::shared_ptr<Warrior> makeWarrior(int &remainingValue);

};


#endif //PREPARE_FACTORY_H
