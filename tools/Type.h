//
// Created by john wu on 3/28/18.
//

#ifndef PREPARE_TYPE_H
#define PREPARE_TYPE_H

struct TypeHash {
    template<typename T>
    int operator()(T t) const {
        return static_cast<int>(t);
    }
};

enum class Type {
    dragon, ninja, iceman, lion, wolf
};


#endif //PREPARE_TYPE_H
