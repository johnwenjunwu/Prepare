//
// Created by john wu on 3/29/18.
//

#ifndef PREPARE_ICEMAN_H
#define PREPARE_ICEMAN_H


#include <utility>
#include <weapons/Weapon.h>

#include "Warrior.h"

class Iceman : public Warrior {
private:
    static int s_initValue;
    std::shared_ptr<Weapon> weapon;
public:
    Iceman(int id, std::shared_ptr<Weapon> weapon) : Warrior(id, s_initValue), weapon(std::move(weapon)) {}

    Iceman() = default;

    std::shared_ptr<Warrior> make(int &remainingValue, int id) override;

    void print() override;

    static void cinInitValue() { std::cin >> s_initValue; };

    std::string getName() override { return "iceman"; }

    static int getInitValue() { return s_initValue; }

};


#endif //PREPARE_ICEMAN_H
