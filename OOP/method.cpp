#include <iostream>
#include <string>

using namespace std;

class Robot {
public:
    Robot(string name, int version_number) : name(name), version_number(version_number), internal_temperature(30.0) //or you use classical way commented down below
    {
             
    }

    void say_hi()
    {
        cout << "Hello, my name is "
        << name
        <<", ready to help!"        
        << endl;
    }

    void init_hardware()
    {
        cout << "Init hardware." << endl;
    }

    void print_info()
    {
        say_hi();
        cout << "Version number: " << version_number << endl;
        cout << "Temperaure: " << internal_temperature << endl;
    }
private:
    string name;
    int version_number;
    double internal_temperature;
};

int main()
{
    return 0;
}