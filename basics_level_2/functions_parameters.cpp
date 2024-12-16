#include <iostream>
void my_self(std::string user_name, int user_age, std::string mood)
{
    std::cout << "Hello " << user_name <<" "<< "you are " <<user_age<<  " " << "and " << mood <<std::endl;
}

int main()
{
    my_self("Richard", 33, "confused");
    my_self("Onyansi", 20, "lost");

    return 0;
}