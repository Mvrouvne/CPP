#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "Shrubbery Default constructor called" << std::endl;
	sign = 145;
	exec = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& old_obj)
{
	std::cout << "Shrubbery Copy constructor called" << std::endl;
	*this = old_obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& old_obj)
{
	if (this != &old_obj)
	{
		this->sign = sign;
		this->exec = exec;
		this->target = target;
	}
	return *this;
}

void	ShrubberyCreationForm::setTarget(std::string target)
{
	this->target = target;
}

void	ShrubberyCreationForm::TreeCreation(std::string target)
{
	std::string tree;
	std::ofstream	outfile(target + "_shrubbery");
	if(!outfile)
	{
		std::cerr << "File didn't open" << std::endl;
		exit (1);
	}
	tree =
"               * *                            * *            \n"
"           *    *  *                      *    *  *          \n"
"      *  *    *     *  *             *  *    *     *  *      \n"
"     *     *    *  *    *           *     *    *  *    *     \n"
" * *   *    *    *    *   *     * *   *    *    *    *   *   \n"
" *     *  *    * * .#  *   *    *     *  *    * * .#  *   *  \n"
" *   *     * #.  .# *   *       *   *     * #.  .# *   *     \n"
"  *     \"#.  #: #\" * *    *    *     \"#.  #: #\" * *    * \n"
" *   * * \"#. ##\"       *      *   * * \"#. ##\"       *    \n"
"   *       \"###                  *       \"###              \n"
"             \"##                           \"##             \n"
"              ##.                            ##.             \n"
"              .##:                           .##:            \n"
"              :###                           :###            \n"
"              ;###                           ;###            \n"
"            ,####.                         ,####.            \n"
"/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\";
	outfile << tree << std::endl;
	outfile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor called" << std::endl;
}
