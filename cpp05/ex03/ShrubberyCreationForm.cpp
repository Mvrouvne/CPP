#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	// std::cout << "Shrubbery Default constructor called" << std::endl;
	sign = 145;
	exec = 137;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& old_obj)
{
	// std::cout << "Shrubbery Copy constructor called" << std::endl;
	*this = old_obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& old_obj)
{
	if (this != &old_obj)
	{
		this->sign = old_obj.sign;
		this->exec = old_obj.exec;
		this->target = old_obj.target;
	}
	return *this;
}

void	ShrubberyCreationForm::setTarget(std::string target)
{
	this->target = target;
}

void	ShrubberyCreationForm::TreeCreation(std::string target) const
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
	sign = 145;
	exec = 137;
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	// std::cout << "Destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->exec)
		throw GradeTooLowException();
	else if (!get_Sign())
		throw FormNotSignedException();
	else
		this->TreeCreation(this->target);
}
