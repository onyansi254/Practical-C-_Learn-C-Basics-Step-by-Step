// passing by copy

#include <iostream>
#include <vector>

using namespace std;
void add_zeros_to_list(vector<int> &number_list, int zeros_number) // if you want to use a reference add an ambersand sign before number_list
{
    for (int i = 0; i < zeros_number; i++){
        number_list.push_back(0);
    }
    cout << "2. size of number list: " << number_list.size() << endl;

}

// passing a referance const so that the list wont be changed or altered
void print_all_elements_from_list(const vector<int> &list)
{
    for (int number: list){
        cout << number << endl;
    }

    //list.push_back(0);   //try running while this code is uncommented
}

int main()
{
    vector<int> list = {4, 5, 6};
    cout << "1. size of number list: " << list.size() << endl;

    add_zeros_to_list(list, 4);
    cout << "3. size of number list: " << list.size() << endl;
    return 0;
}