#include "ShrubberyCreationForm.hpp"

/*ShrubberyCreationForm::ShrubberyCreationForm()
{
}*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form::Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &the_ShrubberyCreationForm) :
ShrubberyCreationForm(the_ShrubberyCreationForm.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream file;

	file.open(target + "_shrubbery", std::ios::app);
	file << "       ccee88oo       " << std::endl;
	file << "  C8O8O8Q8PoOb o8oo    " << std::endl;
	file << " dOB69QO8PdUOpugoO9bD  " << std::endl;
	file << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
	file << "    6OuU  /p u gcoUodpP" << std::endl;
	file << "      \\\\\\//  /douUP    " << std::endl;
	file << "        \\\\\\////        " << std::endl;
	file << "         |||/\\         " << std::endl;
	file << "         |||\\/         " << std::endl;
	file << "         |||||         " << std::endl;
	file << "   .....//||||\\....    " << std::endl;
	file.close();
}
