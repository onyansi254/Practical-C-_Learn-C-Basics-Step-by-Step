#include <iostream>

int main()
{
    //we use the word "const" to declare a variable that will not be changed in the future
    const int seconds_in_hour = 3600;
    const double max_temperature = 78.6;

    //seconds_in_hour = 3000;  //error: assignment of read-only variable 'seconds_in_hour'

    std::cout << seconds_in_hour << std::endl;
    std::cout << max_temperature << std::endl;
    
    return 0;
}