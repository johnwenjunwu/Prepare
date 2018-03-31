//
// Created by john wu on 3/27/18.
//

#ifndef PREPARE_DRAGON_H
#define PREPARE_DRAGON_H


#include <weapons/Weapon.h>
#include "Warrior.h"

class Dragon : public Warrior {
private:
    static int s_initValue;
    double morale{};
    std::shared_ptr<Weapon> weapon{};
public:
    std::shared_ptr<Warrior> make(int &remainingValue, int id) override;

    Dragon(int id, std::shared_ptr<Weapon> weapon, double morale);

    Dragon() = default;

    void print() override;

    static void cinInitValue() { std::cin >> s_initValue; };

    std::string getName() override { return "dragon"; }

    static int getInitValue() { return s_initValue; }
};


#endif //PREPARE_DRAGON_H
