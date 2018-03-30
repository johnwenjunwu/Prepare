//
// Created by john wu on 3/26/18.
//

#ifndef PREPARE_GAME_H
#define PREPARE_GAME_H

#include <iostream>
#include <iomanip>

class Game {
public:
    static void test();

    static void testAll();

    static void printHour(int hour) { std::cout << std::setfill('0') << std::setw(3) << hour << ' '; }
};


#endif //PREPARE_GAME_H
