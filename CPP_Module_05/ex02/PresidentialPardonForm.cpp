#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &the_PresidentialPardonForm) :
PresidentialPardonForm(the_PresidentialPardonForm.target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::action() const
{
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
