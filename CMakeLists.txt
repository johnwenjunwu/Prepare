cmake_minimum_required(VERSION 3.9)
project(Prepare)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)
add_executable(Prepare main.cpp warrior/Warrior.cpp warrior/Warrior.h tools/Factory.cpp tools/Factory.h place/Headquarter.cpp place/Headquarter.h place/City.cpp place/City.h tools/Game.cpp tools/Game.h place/RedHeadquarter.cpp place/RedHeadquarter.h place/BlueHeadquarter.cpp place/BlueHeadquarter.h warrior/Dragon.cpp warrior/Dragon.h warrior/Ninja.cpp warrior/Ninja.h tools/Type.h warrior/Iceman.cpp warrior/Iceman.h warrior/Lion.cpp warrior/Lion.h warrior/Wolf.cpp warrior/Wolf.h weapons/Weapon.cpp weapons/Weapon.h weapons/WeaponType.h weapons/Sword.cpp weapons/Sword.h weapons/Bomb.cpp weapons/Bomb.h weapons/Arrow.cpp weapons/Arrow.h)