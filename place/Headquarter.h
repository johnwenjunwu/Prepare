//
// Created by john wu on 3/26/18.
//

#ifndef PREPARE_HEADQUARTER_H
#define PREPARE_HEADQUARTER_H
#include <vector>
#include <tools/Factory.h>
#include <warrior/Warrior.h>

class Headquarter {
private:
    static int s_initialValue;
    int m_lifeValue = s_initialValue;
    Factory m_factory;
    std::vector<std::shared_ptr<Warrior>> m_warriors{};
public:

    explicit Headquarter(const std::vector<Type> &order) : m_factory(order) {};

    virtual std::string getName() = 0;

    void makeWarrior();

    void printWarrior(std::shared_ptr<Warrior> warrior);

    void printFailure();

    bool isStop();

    virtual ~Headquarter() = default;

    static void setInitialValue();
};


#endif //PREPARE_HEADQUARTER_H
