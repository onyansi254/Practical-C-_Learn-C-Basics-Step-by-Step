#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>

using namespace std;

class Robot {
public:
    Robot(string name, int version_number) ;

    void say_hi();  
    void init_hardware();
    void print_info();
    
private:
    string name;
    int version_number;
    double internal_temperature;
};

// inheritence

class RobotArm : public Robot {
    public:
        RobotArm(string name, int version_number, double reach);

        void pick_object(double x, double y);
        void place_object(double x, double y);

    private:
        double reach;
};


#endif