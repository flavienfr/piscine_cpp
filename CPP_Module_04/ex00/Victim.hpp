/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 18:53:24 by froussel          #+#    #+#             */
/*   Updated: 2020/04/08 21:15:05 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
protected:
	std::string	name;

public:
	Victim();
	Victim(std::string the_name);
	Victim(const Victim &);
	Victim &operator=(const Victim &);
	~Victim();

	std::string	getname() const;

	virtual void	getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &os, const Victim &);

#endif
