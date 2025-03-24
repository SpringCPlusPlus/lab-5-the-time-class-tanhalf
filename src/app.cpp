#include <iostream>
#include "../include/Time.h"

/* You may use this instead of test.cpp to test your code. */
int main()
{
    Time t1(2, 30);
    Time t2(1, 45);
    Time t3;

    std::cout << "t1: " << t1 << std::endl;
    std::cout << "t2: " << t2 << std::endl;

    t1 += t2;
    std::cout << "t1 += t2: " << t1 << std::endl;
    
    std::cout << "t1 < t2: " << (t1 < t2) << std::endl;
    std::cout << "t1 > t2: " << (t1 > t2) << std::endl;
    std::cout << "t1 == t2: " << (t1 == t2) << std::endl;

    return 0;
}