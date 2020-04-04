/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 18:52:05 by froussel          #+#    #+#             */
/*   Updated: 2020/04/03 19:54:55 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(DEFAULT_VALUE)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int the_value)
{
	std::cout << "Int constructor called" << std::endl;
	value = the_value << bits;
}

Fixed::Fixed(const float the_value)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(the_value * (1 << bits));
}

Fixed::Fixed(const Fixed &the_fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = the_fixed;
}

Fixed &Fixed::operator=(const Fixed &the_Fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	value = the_Fixed.value;
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
	value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (1 << bits)); 
}

int		Fixed::toInt(void) const
{
	return (value >> bits); 
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
	output << fixed.toFloat();
	return (output);
}
