#include <iostream>
using namespace std;

void know_you()
{
    //Ask for the name and age of a user, prin the info
    std::string user_name;
    int user_age;
    cout << "What is your name? ";
    cin >> user_name;
    cout << "What is your age? ";
    cin >> user_age;
    cout <<"Hey "<< user_name << " " <<"you are " << user_age<< " " << "years old be respectiful"<< std::endl;
}

int main()
{
    know_you();
    return 0;
}
