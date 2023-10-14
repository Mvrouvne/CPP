#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::waring(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	Harl	obj;
	std::string	arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	x = 0;
	void	(Harl::*ptr_to_member[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::waring,
		&Harl::error
	};
	while(x < 4)
	{
		if (level == arr[x])
		{
			// (obj.*ptr_to_member[x])();
			break ;
		}
		x++;
	}
    switch(x)
    {
        case(0):
            std::cout << "[ DEBUG ]" << std::endl;
            (obj.*ptr_to_member[0])();
        case(1):
            std::cout << "[ INFO ]" << std::endl;
            (obj.*ptr_to_member[1])();
        case(2):
            std::cout << "[ WARNING ]" << std::endl;
            (obj.*ptr_to_member[2])();
        case(3):
            std::cout << "[ ERROR ]" << std::endl;
            (obj.*ptr_to_member[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}
