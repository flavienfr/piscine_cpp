/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 18:51:59 by froussel          #+#    #+#             */
/*   Updated: 2020/04/02 23:57:19 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int value;
	static const int bits = 8;

public:
	Fixed(int the_value = 0);			//Default constructor
	Fixed(const Fixed &);				//Copy constructor
	Fixed &operator=(const Fixed &);	//Assignation operator
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
