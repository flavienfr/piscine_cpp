/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 18:52:05 by froussel          #+#    #+#             */
/*   Updated: 2020/04/04 03:20:01 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(DEFAULT_VALUE)
{
}
Fixed::Fixed(const int the_value)
{
	value = the_value  * (1 << bits);
}
Fixed::Fixed(const float the_value)
{
	value = roundf(the_value * (1 << bits));
}
Fixed::Fixed(const Fixed &the_fixed)
{
	*this = the_fixed;
}
Fixed &Fixed::operator=(const Fixed &the_Fixed)
{
	value = the_Fixed.value;
	return (*this);
}
Fixed::~Fixed()
{
}

int		Fixed::getRawBits(void) const
{
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
	return (value * (1 >> bits)); 
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
	output << fixed.toFloat();
	return (output);
}

//	+ - - /
Fixed	Fixed::operator+(const Fixed &f2)
{
	Fixed newf;
	newf.value = value + f2.value;
	return (newf);
}
Fixed	Fixed::operator-(const Fixed &f2)
{
	Fixed newf;
	newf.value = value - f2.value;
	return (newf);
}
Fixed	Fixed::operator*(const Fixed &f2)
{
	Fixed newf;
	newf.value = ((long)value * (long)f2.value) / (1 << bits);
	return (newf);
}
Fixed	Fixed::operator/(const Fixed &f2)
{
	Fixed newf;
	if (f2.value == 0)
	{
		std::cout << "Division by 0 is not defined" << std::endl;
		return (newf);
	}
	newf.value = (long)value * (1 << bits) / f2.value;
	return (newf);
}

//	> < >= <= == !=
int		Fixed::operator<(const Fixed &f2) const
{ return (value < f2.value ? 1 : 0); }
int		Fixed::operator>(const Fixed &f2) const
{ return (value > f2.value ? 1 : 0); }
int		Fixed::operator>=(const Fixed &f2) const
{ return (value >= f2.value ? 1 : 0); }
int		Fixed::operator<=(const Fixed &f2) const
{ return (value <= f2.value ? 1 : 0); }
int		Fixed::operator==(const Fixed &f2) const
{ return (value == f2.value ? 1 : 0); }
int		Fixed::operator!=(const Fixed &f2) const
{ return (value != f2.value ? 1 : 0); }

// ++ --
Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	value++;
	return (tmp);
}
Fixed	&Fixed::operator++()
{
	value++;
	return (*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	value--;
	return (tmp);
}
Fixed	&Fixed::operator--()
{
	value--;
	return (*this);
}

//	min max
Fixed	&Fixed::min(Fixed &f1, Fixed &f2) 
{
	if (f1 > f2)
		return (f2);
	return (f1);
}
Fixed	&Fixed::max(Fixed &f1, Fixed &f2) 
{
	if (f1 < f2)
		return (f2);
	return (f1);
}
const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2) 
{
	if (f1 > f2)
		return (f2);
	return (f1);
}
const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2) 
{
	if (f1 < f2)
		return (f2);
	return (f1);
}

//Bullshit de l'exo
Fixed	&min(Fixed &f1, Fixed &f2) 
{
	if (f1 > f2)
		return (f2);
	return (f1);
}
Fixed	&max(Fixed &f1, Fixed &f2) 
{
	if (f1 < f2)
		return (f2);
	return (f1);
}
const Fixed	&min(const Fixed &f1, const Fixed &f2) 
{
	if (f1 > f2)
		return (f2);
	return (f1);
}
const Fixed	&max(const Fixed &f1, const Fixed &f2) 
{
	if (f1 < f2)
		return (f2);
	return (f1);
}
