#include <iostream>
using namespace std;

int main() 
{
    cout << boolalpha;

    double temperature = 32.6;

    cout << ((temperature >= 20.0) && (temperature < 30)) << endl;  // || is or , && is and
}
