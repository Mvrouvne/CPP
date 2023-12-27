#include "AForm.hpp"
#include "Intern.hpp"


int main()
{
    try
    {
        Intern  someRandomIntern;
        AForm*   rrf;

        rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
        std::cout << rrf->getName() << std::endl;
        delete rrf;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}