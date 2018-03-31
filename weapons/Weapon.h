//
// Created by john wu on 3/30/18.
//

#ifndef PREPARE_WEAPON_H
#define PREPARE_WEAPON_H

#include <memory>
#include <string>

class Weapon {
private:
public:
    static std::shared_ptr<Weapon> build(int choice);

    virtual std::string getName() = 0;

    virtual std::shared_ptr<Weapon> make() = 0;
};

#endif //PREPARE_WEAPON_H
