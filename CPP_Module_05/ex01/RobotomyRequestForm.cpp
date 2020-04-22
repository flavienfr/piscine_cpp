/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 17:13:03 by froussel          #+#    #+#             */
/*   Updated: 2020/04/22 21:53:09 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*RobotomyRequestForm::RobotomyRequestForm()
{
}*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &the_RobotomyRequestForm) :
RobotomyRequestForm(the_RobotomyRequestForm.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::action() const
{
	std::srand(std::time(nullptr));

	std::cout << "\"drilling noises \"" << std::endl;
	std::cout << target << " ";
	if (std::rand()% 2)
		std::cout << "as been robotomized successfully" << std::endl;
	else
		std::cout << "failure" << std::endl;
}
