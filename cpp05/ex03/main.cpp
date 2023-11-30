#include "AForm.hpp"
#include "Intern.hpp"


int main()
{
    Intern  someRandomIntern;
    AForm*   rrf;

    rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
    delete rrf;
}