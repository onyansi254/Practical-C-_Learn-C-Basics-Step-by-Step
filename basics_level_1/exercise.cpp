#include <iostream>
#include <vector>
#include <numeric>

int main(){

//Ask for the name and age of a user, prin the info
std::string user_name;
int user_age;
std::cout << "What is your name? ";
std::cin >> user_name;
std::cout << "What is your age? ";
std::cin >> user_age;
std::cout << user_name << " " << user_age << std::endl;





//Ask the user for 2 integer numbers add them, and print them
int num1, num2;
std::cout << "Enter first number "  << std::endl;
std::cin >> num1;
std::cout << "Enter second number "  << std::endl;
std::cin >> num2;

int sum = num1 + num2;

std::cout <<"the sum is: " << sum  << std::endl;




//create a vector of 4 float numbers, compute the average and print it
        //- For the sum of the list you can use th function:
                    //-> accumulate(list.begin(), list.end(), 0.0) from the std library
                    //->you will nee to #include<numeric>
        //- Reminder: average = sum of all elements/number of elements
std::vector<double> temperatures = {34.5, 27.8, 26.5, 30.2};
double add = std::accumulate(temperatures.begin(), temperatures.end(), 0.0f);

double average = add / temperatures.size();

std::cout << "the average temperature is: " << average << std::endl;

return 0;
}