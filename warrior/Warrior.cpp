//
// Created by john wu on 3/26/18.
//

#include <unordered_map>
#include "Warrior.h"
#include "Dragon.h"
#include "Iceman.h"
#include "Wolf.h"
#include "Ninja.h"
#include "Lion.h"


std::shared_ptr<Warrior> Warrior::build(Type type, int &remainingValue, int id) {
    static const std::unordered_map<Type, std::shared_ptr<Warrior>, TypeHash> builders{
            {Type::dragon, std::make_shared<Dragon>()},
            {Type::iceman, std::make_shared<Iceman>()},
            {Type::wolf,   std::make_shared<Wolf>()},
            {Type::ninja,  std::make_shared<Ninja>()},
            {Type::lion,   std::make_shared<Lion>()},
    };
    return builders.at(type)->make(remainingValue, id);
}


