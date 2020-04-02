/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 18:52:05 by froussel          #+#    #+#             */
/*   Updated: 2020/04/02 23:58:34 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int the_value) : value(the_value)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &the_fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = the_fixed;
}

Fixed &Fixed::operator=(const Fixed &the_Fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	value = the_Fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;

	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << raw;
}
