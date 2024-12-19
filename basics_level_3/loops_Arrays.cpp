#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> temperature_list = {12.3, 66.7, 30.5, 20.3, -0.4};

    // for(int i=0; i < temperature_list.size(); i++) {
    //     double temperature = temperature_list.at(i);
    //     cout << temperature << endl;
    //     if (temperature < 0.0){
    //         cout << "it's freezing!" << endl;
    //     }

    for (double temperature : temperature_list) {
        cout << temperature << endl;
    }

    
    return 0;
}