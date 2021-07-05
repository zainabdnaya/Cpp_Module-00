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
<<<<<<< HEAD
    std::cout <<"{"<< p <<"}";
=======
    // std::cout <<"{"<< p <<"}" << std::endl;
>>>>>>> 08c56f0826804849faf5cb6607c1c22ebb2aff03

    Data *c = deserialization(p);
    std::cout << c->str << "|" << c->i;
}