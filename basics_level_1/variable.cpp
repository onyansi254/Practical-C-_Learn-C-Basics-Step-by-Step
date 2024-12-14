// a variable is used to store a value that will be used in more than one place, that value may be constant or change everytime
#include <iostream>

int main()
{
    int a=2 - 3;
    int b = a + 2;
    int c = a + b;
    // int a = 10;  - error: redeclaration of 'int a'
    std::cout << c << std::endl;
    return 0;
}