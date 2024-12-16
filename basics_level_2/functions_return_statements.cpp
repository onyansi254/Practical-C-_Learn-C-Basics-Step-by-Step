#include <iostream>
void my_self(std::string user_name, int user_age, std::string mood)
{
    std::cout << "Hello " << user_name <<" "<< "you are " <<user_age<<  " " << "and " << mood <<std::endl;
}

int tripple_number(int number)
{
    return number * 3;
}

void print_tripple_number(int number)
{
    std::cout <<tripple_number(number) << std::endl;
}


int main()
{
    my_self("Richard", 33, "confused");
    my_self("Onyansi", 20, "lost");
    //int result = tripple_number(4);
    //std::cout << result << std::endl;
    print_tripple_number(4);
    return 0;
}