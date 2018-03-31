//
// Created by john wu on 3/30/18.
//

#ifndef PREPARE_ARROW_H
#define PREPARE_ARROW_H


#include "Weapon.h"

class Arrow : public Weapon {
public:
    std::string getName() override {
        return "arrow";
    }

    std::shared_ptr<Weapon> make() override;
};

#endif //PREPARE_ARROW_H
