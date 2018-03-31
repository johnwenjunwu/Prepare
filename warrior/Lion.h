//
// Created by john wu on 3/29/18.
//

#ifndef PREPARE_LION_H
#define PREPARE_LION_H


#include "Warrior.h"

class Lion : public Warrior {
private:
    static int s_initValue;
    int m_loyalty{};
public:
    std::shared_ptr<Warrior> make(int &remainingValue, int id) override;

    static void cinInitValue() { std::cin >> s_initValue; };

    static int getInitValue() { return s_initValue; }

    Lion(int id, int loyalty) : Warrior(id, s_initValue), m_loyalty(loyalty) {}

    Lion() = default;

    void print() override;

    std::string getName() override { return "lion"; }
};


#endif //PREPARE_LION_H
