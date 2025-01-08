#include "my_vector_functions.hpp"
#include <vector>
#include <iostream>
#include <string>

int main()
{
    //ex 1
    vector<int> list = {4, 5, 6};
    cout << "A. size of number list: " << list.size() << endl;

    add_zeros_to_list(list, 4);
    cout << "B. size of number list: " << list.size() << endl;

    //ex 2
    vector<int> input = {2, 3, 4};
    vector<int> output = {10, 11};
    add_list_to_list(input, output);
    print_all_elements_from_list(output);


    //ex 3
    vector<string> city_list = {"Nairobi", "Kisii", "Kisumu", "Nairobi", "Nakuru", "Mombasa", "Nairobi", "Nakuru"};
    cout << "Number of occurences 'Nairobi': " << get_string_occurences_in_list(city_list, "Nairobi") << endl;

    // // Ex 3
    // vector<string> city_list = { "Paris", "London", "Berlin",
    //         "Paris", "Berlin", "Madrid", "Paris" };
    // cout << "Number of occurrences of 'Berlin': " 
    //      << get_string_occurences_in_list(city_list, "Berlin")
    //      << endl;
    return 0;
}

