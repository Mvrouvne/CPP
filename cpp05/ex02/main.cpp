// #include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    // ShrubberyCreationForm obj;

    // obj.TreeCreation("House");
    // RobotomyRequestForm obj("Marouane");

    // obj.inform();
    // obj.inform();
    // obj.inform();
    // obj.inform();
    // PresidentialPardonForm obj("Marouane");

    // obj.inform();
    Bureaucrat obj("Marouane", 5);
    ShrubberyCreationForm s_obj("Shrubbery");
    RobotomyRequestForm r_obj("Robotomy");
    PresidentialPardonForm p_obj("President");

    // r_obj.beSigned(obj);
    // obj.executeForm(r_obj);
    // s_obj.beSigned(obj);
    // obj.executeForm(s_obj);
    p_obj.beSigned(obj);
    obj.executeForm(p_obj);
}
