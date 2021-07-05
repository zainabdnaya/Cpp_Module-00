#include "class.hpp"

Base *generate(void)
{
    Base *t[] = {new A(), new B(), new C()};
    int i = 0;

    srand(time(NULL));
    i = rand() % 3;
    int j = 0;
    while (j < 3)
    {
        if (j != i)
            delete t[j];
        j++;
    }
    return(t[i]);
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B *>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C *>(p))
        std::cout << "C\n";
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A";
    }
    catch (const std::exception &e)
    {
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B";
    }
    catch (const std::exception &e)
    {
    }

    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C";
    }
    catch (const std::exception &e)
    {
    }
}

Base::~Base()
{

}

int main()
{
    Base *base = generate();

    identify(base);
    identify(*base);
     
}