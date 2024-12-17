// reate a function to convert from Celsius degrees to Fahrenheit dagrees
    // -> Formula: F = C * 1.8 + 32


#include <iostream>
using namespace std;

double convert(double C){
   double F = C * 1.8 + 32.0;
   return F;
}

int main(){
    double C;
    cout << "Enter degrees celsius in decimal points: ";
    cin >> C;
    
    double F = convert(C);
    cout << "The " << C << " Celsius degrees is " << F << " Fahrenheit degrees when converted." << endl;
    return 0;
}