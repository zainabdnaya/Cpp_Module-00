#ifndef SER_HPP
#define SER_HPP
#include <iostream>
#include <cstring>

typedef struct s_Data
{
    int i;
    std::string str;
}              Data;
uintptr_t serialization(Data *d);
Data *deserialization(uintptr_t p);
#endif