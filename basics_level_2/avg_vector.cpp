//create a vector of 4 float numbers, compute the average and print it
        //- For the sum of the list you can use th function:
                    //-> accumulate(list.begin(), list.end(), 0.0) from the std library
                    //->you will nee to #include<numeric>
        //- Reminder: average = sum of all elements/number of elements

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void func(){
    vector<double> temperatures = {34.5, 27.8, 26.5, 30.2};
    double add = accumulate(temperatures.begin(), temperatures.end(), 0.0f);

    double average = add / temperatures.size();

    cout << "the average temperature is: " << average << endl;
}

int main()
{
    func();
    return 0;
}