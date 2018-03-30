//
// Created by john wu on 3/26/18.
//

#ifndef PREPARE_REDHEADQUARTER_H
#define PREPARE_REDHEADQUARTER_H

#include "Headquarter.h"

class RedHeadquarter : public Headquarter {
private:
public:
    RedHeadquarter() : Headquarter({Type::iceman, Type::lion, Type::wolf, Type::ninja, Type::dragon}) {}

    std::string getName() override {
        return "red";
    }

};


#endif //PREPARE_REDHEADQUARTER_H
