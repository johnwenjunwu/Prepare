//
// Created by john wu on 3/26/18.
//

#include <place/BlueHeadquarter.h>
#include <place/RedHeadquarter.h>
#include <warrior/Dragon.h>
#include <warrior/Ninja.h>
#include <warrior/Iceman.h>
#include <warrior/Lion.h>
#include <warrior/Wolf.h>
#include "Game.h"

void Game::test() {
    Headquarter::setInitialValue();
    Dragon::cinInitValue();
    Ninja::cinInitValue();
    Iceman::cinInitValue();
    Lion::cinInitValue();
    Wolf::cinInitValue();

    RedHeadquarter redHeadquarter;
    BlueHeadquarter blueHeadquarter;
    int hour = 0;
    while (!redHeadquarter.isStop() || !blueHeadquarter.isStop()) {
        if (!redHeadquarter.isStop()) {
            printHour(hour);
            redHeadquarter.makeWarrior();
        }
        if (!blueHeadquarter.isStop()) {
            printHour(hour);
            blueHeadquarter.makeWarrior();
        }
        ++hour;
    }
}

void Game::testAll() {
    int sets;
    std::cin >> sets;
    for (auto i = 0; i < sets; ++i) {
        std::cout << "Case:" << i + 1 << '\n';
        test();
    }
}
