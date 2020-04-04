/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 18:58:37 by froussel          #+#    #+#             */
/*   Updated: 2020/04/04 03:13:15 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	Fixed t1(5.896f);	// or Fixed const t1(10.10f);
	Fixed t2(5.896f);	// otFixed const t2(10.5f);
	std::cout << "t1= " << t1;
	std::cout << " t2= " << t2 << std::endl;

	std::cout <<"t1 + t2 = " << t1 + t2 << std::endl;
	std::cout <<"t1 - t2 = " << t1 - t2 << std::endl;
	std::cout <<"t1 * t2 = " << t1 * t2 << std::endl;
	std::cout <<"t1 / t2 = " << t1 / t2 << std::endl;

	std::cout <<"t1 == t2 = " << (t1 == t2) << std::endl;
	std::cout <<"t1 != t2 = " << (t1 != t2) << std::endl;
	std::cout <<"t1 <=  t2 = " << (t1 <= t2) << std::endl;
	std::cout <<"t1 >= t2 = " << (t1 >= t2) << std::endl;
	std::cout <<"t1 < t2 = " << (t1 < t2) << std::endl;
	std::cout <<"t1 > t2 = " << (t1 > t2) << std::endl;
	std::cout << "min(t1, t2): " << min(t1, t2) << std::endl; 
	std::cout << "max(t1, t2): " << max(t1, t2) << std::endl;

	return (0);
}