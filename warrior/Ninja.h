//
// Created by john wu on 3/28/18.
//

#ifndef PREPARE_NINJA_H
#define PREPARE_NINJA_H


#include <weapons/Weapon.h>

#include "Warrior.h"

class Ninja : public Warrior {
private:
    static int s_initValue;
    std::shared_ptr<Weapon> weapon1{}, weapon2{};
public:
    static void cinInitValue() { std::cin >> s_initValue; };

    static int getInitValue() { return s_initValue; }

    std::string getName() override { return "ninja"; }

    Ninja(int id, std::shared_ptr<Weapon> weapon1, std::shared_ptr<Weapon> weapon2)
            : Warrior(id, s_initValue), weapon1(std::move(weapon1)), weapon2(std::move(weapon2)) {}

    Ninja() = default;

    void print() override;

    std::shared_ptr<Warrior> make(int &remainingValue, int id) override;

};


#endif //PREPARE_NINJA_H
