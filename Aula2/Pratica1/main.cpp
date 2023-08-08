#include "Data.hpp"

int main ()
{
    Data d1(11, 12, 2024);
    Data d2(11, 12, 2023);

    std::cout << d1 - d2 << std::endl;

    return 0;
}