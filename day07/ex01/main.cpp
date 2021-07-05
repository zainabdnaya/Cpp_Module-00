#include "iter.hpp"

int main()
{
    std::string arr1[] = {"test1", "test2", "test3", "test4", "test5", "test6", "test7"};
    char arr2[] = {'a', 'b', 'c', 'd'};
    int arr3[] = {0, 1, 2, 3, 4};

    iter(arr1, 7, print);
    iter(arr3, 5, print);
    iter(arr2, 4, print);
}
