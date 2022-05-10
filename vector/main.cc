#ifndef MAIN_VECTOR
#define MAIN_VECTOR
#include <vector>
#include <iostream>
template <typename T>
void print_vec(const std::vector<T> &ref)
{
    printf("\n[");
   for (const auto &v_ref : ref)
    {
        std::cerr << v_ref << ", ";
    };
    printf("]\n");
};

#endif