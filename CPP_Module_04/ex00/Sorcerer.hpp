/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 18:53:32 by froussel          #+#    #+#             */
/*   Updated: 2020/04/08 20:45:10 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>

# include "Victim.hpp"

class Sorcerer
{
private:
	std::string	name;
	std::string	title;

public:
	Sorcerer();
	Sorcerer(std::string the_name, std::string the_title);
	Sorcerer(const Sorcerer &);
	Sorcerer &operator=(const Sorcerer &);
	~Sorcerer();

	std::string	getname() const;
	std::string	gettitle() const;

	void polymorph(Victim const &) const;

};

std::ostream	&operator<<(std::ostream &os, const Sorcerer &);

#endif
