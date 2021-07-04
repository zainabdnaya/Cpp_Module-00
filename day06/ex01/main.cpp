#include "ser.hpp"

uintptr_t serialization(Data *d)
{
    return (reinterpret_cast<uintptr_t>(d));   
}

Data *deserialization(uintptr_t p)
{
    return (reinterpret_cast<Data*>(p));
}


int main(void)
{
    Data *d = new Data;
    d->str = "zainab";
    d->i = 100;
    uintptr_t p = serialization(d);
    std::cout <<"{"<< p <<"}";

    Data *c = deserialization(p);
    std::cout << c->str << "|" << c->i;
}