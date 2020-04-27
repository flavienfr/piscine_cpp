/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 17:13:54 by froussel          #+#    #+#             */
/*   Updated: 2020/04/25 23:05:45 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAST_HPP
# define CAST_HPP

# include <iostream>
# include <string>
# include <sstream> 
# include <limits>
# include <typeinfo>

# define NDISPLAY "Non displayable"
# define NPOSSIBLE "IMPOSSIBLE"
# define MAX_FLOAT_SAFE 2147483520.f
# define MIN_FLOAT_SAFE -2147483648.f

class cast
{
private:
	std::string	&value;
	int			type;

	char		Vchar;
	int			Vint;
	float		Vfloat;
	double		Vdouble;
	std::string	Pchar;
	std::string	Pint;
	std::string	Pfloat;
	std::string	Pdouble;

	enum TYPE
	{
		IMPOSSIBLE,
		CHAR,
		INT,
		FLOAT,
		SPECIAL_FLOAT,
		DOUBLE,
		SPECIAL_DOUBLE
	};

	int		checkType();
	void	printAll();
	template <typename T>
	T			&makePrintable(T &value, char vtype);//template is useless here
	std::string	&makePrintableChar(std::string &vchar);

	void	charConv();
	void	floatConv();
	void	doubleConv();
	void	intConv();
	void	specialFloatConv();
	void	specialDoubleConv();
	void	impossibleConv();

public:
	cast(std::string &value);
	~cast();
};

#endif

/*
void	cast::castAll()
{
	try
	{ std::cout << "char: " << castToChar() << std::endl; }
	catch(const std::exception& e)
	{ std::cout << "impossible" << std::endl; }

	try
	{ std::cout << "int: " << castToInt() << std::endl; }
	catch(const std::exception& e)
	{ std::cout << "impossible" << std::endl; }
	
	try
	{
		std::cout << "float: " << castToFloat();
		std::cout << "f"<< std::endl;
	}
	catch(const std::exception& e)
	{ std::cout << "impossible" << std::endl; }

	try
	{ std::cout << "double: " << castToDouble() << std::endl; }
	catch(const std::exception& e)
	{ std::cout << "impossible" << std::endl; }
}
*/