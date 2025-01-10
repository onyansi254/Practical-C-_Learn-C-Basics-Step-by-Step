#include <iostream>

#include "robot.hpp"

using namespace std;

int main()
{
    Robot robot1("R2d2", 3);
    Robot robot2("kason", 8);


    //robot2.print_info();
    //robot1.print_info();
    
    RobotArm arm("Bob", 4, 300);

    arm.print_info();
    arm.pick_object(1, 2);
    arm.place_object(3, 4);
    return 0;
}