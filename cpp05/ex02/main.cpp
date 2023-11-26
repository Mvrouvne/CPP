// #include "Bureaucrat.hpp"
// #include "AForm.hpp"
#include <iostream>
#include <ostream>
#include <fstream>
#include <ctime>
#include <limits>

int main()
{
    time_t t = time(nullptr);
    std::cout << "current time is: " << ctime(&t) << std::endl;
    for(int x = 0; x < INT_MAX; x++);
    t = time(nullptr);
    std::cout << "Exit time is: " << ctime(&t) << std::endl;
}
