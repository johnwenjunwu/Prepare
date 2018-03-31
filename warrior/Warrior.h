//
// Created by john wu on 3/26/18.
//

#ifndef PREPARE_WARRIOR_H
#define PREPARE_WARRIOR_H

#include <string>
#include <iostream>
#include <tools/Type.h>
#include <memory>

class Warrior {
private:
    int m_id{}, m_lifeValue{};

public:
    Warrior(int id, int lifeValue) : m_id(id), m_lifeValue(lifeValue) {}

    Warrior() = default;

    static std::shared_ptr<Warrior> build(Type type, int &remainingValue, int id);

    virtual std::shared_ptr<Warrior> make(int &remainingValue, int id) = 0;

    virtual std::string getName() = 0;

    int getLifeValue() const {
        return m_lifeValue;
    }

    int getId() const {
        return m_id;
    }

    virtual void print() {};

    virtual ~Warrior() = default;
};

#endif //PREPARE_WARRIOR_H
