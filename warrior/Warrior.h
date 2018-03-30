//
// Created by john wu on 3/26/18.
//

#ifndef PREPARE_WARRIOR_H
#define PREPARE_WARRIOR_H

#include <string>
#include <iostream>
#include <weapons/Weapon.h>
#include <vector>

class Warrior {
private:
    int m_id{}, m_lifeValue{}, power{};
    static const std::vector<std::shared_ptr<Weapon>> s_weapons;

public:
    Warrior() = default;

    Warrior(int id, int lifeValue) : m_id(id), m_lifeValue(lifeValue) {}

    virtual std::shared_ptr<Warrior> build() = 0;

    virtual std::string getName() = 0;

    void cinLifeValue() { std::cin >> m_lifeValue; };

    int getLifeValue() const {
        return m_lifeValue;
    }

    int getId() const {
        return m_id;
    }

    void setId(int id) {
        m_id = id;
    }

    virtual ~Warrior() = default;
};

#endif //PREPARE_WARRIOR_H
