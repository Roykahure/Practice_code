#include <iostream>
#include <stdio.h>

int main()
{
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
}