//Ask the user for 2 integer numbers add them, and print them
#include <iostream>
using namespace std;

int sum_of_two_numbers() {
    int number1, number2;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;

    int sum = number1 + number2;
    cout << "The sum is: " << sum << endl;
    return sum;
}

int main() {
    sum_of_two_numbers();
    return 0;
}
