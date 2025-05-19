#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include "Data.hpp"
#include <stdint.h>
#include <iostream>

class Serialization : public Data
{
private:
    Serialization();
    Serialization(const Serialization& other);
    Serialization& operator=(const Serialization& other);
    ~Serialization();
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif