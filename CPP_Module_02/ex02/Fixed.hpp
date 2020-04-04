/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 18:51:59 by froussel          #+#    #+#             */
/*   Updated: 2020/04/04 03:20:00 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

# define DEFAULT_VALUE 0

class Fixed
{
private:
	int value;
	static const int bits = 8;

public:
	Fixed();							//Default constructor
	Fixed(const int the_value);			//constructor
	Fixed(const float the_value);		//constructor
	Fixed(const Fixed &);				//Copy constructor
	Fixed &operator=(const Fixed &);	//Assignation operator
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

//	+ - - /
	Fixed	operator+(const Fixed &f2);
	Fixed	operator-(const Fixed &f2);
	Fixed	operator*(const Fixed &f2);
	Fixed	operator/(const Fixed &f2);
//	> < >= <= == !=
	int		operator<(const Fixed &f2) const;
	int		operator>(const Fixed &f2) const;
	int		operator>=(const Fixed &f2) const;
	int		operator<=(const Fixed &f2) const;
	int		operator==(const Fixed &f2) const;
	int		operator!=(const Fixed &f2) const;
// ++ --
	Fixed	operator++(int);
	Fixed	&operator++();
	Fixed	operator--(int);
	Fixed	&operator--();
//	min max
	static Fixed		&min(Fixed &f1, Fixed &f2);
	static Fixed		&max(Fixed &f1, Fixed &f2);
	static const Fixed	&min(const Fixed &f1, const Fixed &f2);
	static const Fixed	&max(const Fixed &f1, const Fixed &f2);

};
//Bullshit de l'exo
std::ostream 	&operator<<(std::ostream &output, const Fixed &fixed);
Fixed			&min(Fixed &f1, Fixed &f2);
Fixed			&max(Fixed &f1, Fixed &f2);
const Fixed		&min(const Fixed &f1, const Fixed &f2);
const Fixed		&max(const Fixed &f1, const Fixed &f2);

#endif
