#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <string>
#include <iomanip>

template <typename T>

T const &max(T const &x, T const &y)
{
   return (x < y ? y : x);
}

template <typename T>

T const min(T const &x, T const &y)
{
   return (x > y ? y : x);
}

template <typename T>

void swap(T & x,T & y)
{
     T tmp;
     tmp = x;
     x = y;
     y = tmp;
}

#endif