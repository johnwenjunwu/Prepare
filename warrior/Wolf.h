//
// Created by john wu on 3/29/18.
//

#ifndef PREPARE_WOLF_H
#define PREPARE_WOLF_H


#include "Warrior.h"

class Wolf : public Warrior {
private:
    static int s_initValue;
public:
    static void cinInitValue() { std::cin >> s_initValue; };

    static int getInitValue() { return s_initValue; }

    std::shared_ptr<Warrior> make(int &remainingValue, int id) override;

    std::string getName() override { return "wolf"; }

    explicit Wolf(int id) : Warrior(id, s_initValue) {}

    Wolf() = default;
};

#endif //PREPARE_WOLF_H
