#include <iostream>
#include "Vector.h"

int main()
{
    Vector v1(1.11, 13.13);
    Vector v2(42.42, 13.42);

    Vector result = v1.add(v2);

    // ↓输出v1v2
    std::cout << "v1:";
    v1.print();
    std::cout << "v2:";
    v2.print();
    // ↓输出和
    std::cout << "v1+v2=";
    result.print();
    // ↓输出相加后的模长
    result.dir();

    return 0;
}
