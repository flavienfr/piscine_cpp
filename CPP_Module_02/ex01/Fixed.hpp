/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 18:51:59 by froussel          #+#    #+#             */
/*   Updated: 2020/04/03 19:49:09 by froussel         ###   ########.fr       */
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

	int				getRawBits(void) const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;
};

std::ostream 	&operator<<(std::ostream &output, const Fixed &fixed);

#endif
