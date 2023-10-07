#include <iostream>

int main(int ac, char **av)
{
    int x;
    int y;

    x = 1;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    while (av[x])
    {
        
        y = 0;
        while (av[x][y])
        {
            std::cout << (char)toupper(av[x][y]);
            y++;
        }
        std::cout << av[x][y];
        x++;
    }
}
// handle EOF