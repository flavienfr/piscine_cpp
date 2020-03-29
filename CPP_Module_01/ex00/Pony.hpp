/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:58:07 by froussel          #+#    #+#             */
/*   Updated: 2020/03/29 18:58:30 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony
{
private:
	std::string	name;
	std::string	favoritemeal;
	std::string food;
	int			status;

public:
	Pony();

	void	pony_dance();
	void	pony_eat();
	void	pony_sleep();

	~Pony();
};

#endif