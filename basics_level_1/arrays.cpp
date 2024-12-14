// arrays are a collection of values that are related to each other and share the same data type

#include <iostream>

int main()
{
    double temperature_list[4] = {34.5, 27.8, 26.5, 22.4};

    temperature_list[3] = 20.22;

    std::cout << temperature_list[3] << std::endl;
}