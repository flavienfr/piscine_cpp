/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 19:32:35 by froussel          #+#    #+#             */
/*   Updated: 2020/04/02 02:39:32 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>

# define NB_FUNC 3

class Human
{
private:
	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void intimidatingShout(std::string const &target);

	struct funcName
	{
		std::string	name;
		void (Human::*FuncPtr)(std::string const &);
	};
	funcName	funcTab[NB_FUNC];

public:
	Human();
	void action(std::string const &action_name, std::string const &target);
	~Human();
};

#endif
