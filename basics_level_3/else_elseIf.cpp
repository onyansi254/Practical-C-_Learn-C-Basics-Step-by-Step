#include <iostream>
using namespace std;

int main()
{
    int user_age = 20;
    if (user_age < 18){
       cout << "You are under age" << endl;
    }
    else if((user_age >= 18) && (user_age < 30)){
       cout << "You are an adult less than 30 years" << endl;
    }
    else if ((user_age >=30) && (user_age < 40)){
        cout << "Your are in your 30's" << endl;
    }
    else{
        cout << "You are 40 and above" << endl;
    }

    return 0;
}