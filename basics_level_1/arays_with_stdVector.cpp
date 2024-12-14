//  a vector is part of the Standard Template Library (STL) and is a dynamic array that can grow and shrink in size during runtime. 

#include <iostream>
# include <vector>

int main()
{
    double temperature_list[4] = {34.5, 27.8, 26.5, 22.4};
    std::cout << temperature_list[3] << std::endl;
    temperature_list[3] = 20.22;
    std::cout << temperature_list[3] << std::endl;

    std::vector<double> temperatures = {34.5, 27.8, 26.5};
    std:: cout << temperatures.at(0) << std::endl;

    temperatures.at(1) = 30.30;
    std::cout << temperatures.at(1) << std::endl;

    temperatures.push_back(39.44);
    std::cout << temperatures.size() << std::endl;

    return 0;
}