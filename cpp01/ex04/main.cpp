#include "copyfile.hpp"

int main(int ac, char **av)
{
    if (ac == 4)
        copyfile(av[1], av[2], av[3]);
    else
        std::cout << "Only 3 arguments allowed!" << std::endl;
}
