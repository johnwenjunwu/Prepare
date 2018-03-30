//
// Created by john wu on 3/26/18.
//

#ifndef PREPARE_BLUEHEADQUARTER_H
#define PREPARE_BLUEHEADQUARTER_H

#include "Headquarter.h"

class BlueHeadquarter : public Headquarter {
private:
public:
    BlueHeadquarter() : Headquarter({Type::lion, Type::dragon, Type::ninja, Type::iceman, Type::wolf}) {};

    std::string getName() override {
        return "blue";
    }
};


#endif //PREPARE_BLUEHEADQUARTER_H
