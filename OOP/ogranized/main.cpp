#include <iostream>

#include "robot.hpp"

using namespace std;

int main()
{
    Robot robot1("R2d2", 3);
    Robot robot2("kason", 8);


    robot2.print_info();
    robot1.print_info();
    return 0;
}