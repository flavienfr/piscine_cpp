/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 17:13:56 by froussel          #+#    #+#             */
/*   Updated: 2020/04/25 23:05:01 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

cast::cast(std::string &value) : value(value)
{
	type = checkType();
	switch (type)
	{
	case CHAR:
		charConv();
		break;
	case INT:
		intConv();
		break;
	case FLOAT:
		floatConv();
		break;
	case DOUBLE:
		doubleConv();
		break;
	case SPECIAL_FLOAT:
		specialFloatConv();
		break;
	case SPECIAL_DOUBLE:
		specialDoubleConv();
		break;
	case IMPOSSIBLE:
		impossibleConv();
		break;
	}
	printAll();
}

cast::~cast()
{
}

int	cast::checkType()
{
	int	length = value.size();

	if (length == 0)
		return(IMPOSSIBLE);
	if (length == 3 && value[0] == '\'' && value[2] == '\'')
	{
		Vchar = value[1];
		return (CHAR);
	}
	if (length == 1 && isprint(value[0]) && !isdigit(value[0]))
	{
		Vchar = value[0];
		return (CHAR);
	}
	if (value == "-inff" || value == "+inff" || value == "nanf")
		return (SPECIAL_FLOAT);
	if (value == "-inf" || value == "+inf" || value == "nan")
		return (SPECIAL_DOUBLE);
	int	pos = 0;
	int	dot = 0;
	int f = 0;
	if (value[0] == '+' || value[0] == '-')
		pos++;
	for (int i = pos; i < length; i++)
	{
		if (value[i] == '.')
			dot++;
		if (value[i] == 'f')
			f++;
		if (!isdigit(value[i]) && value[i] != '.' && value[i] != 'f')
			return (IMPOSSIBLE);
	}
	if (f >= 2 || dot >= 2)
		return (IMPOSSIBLE);
	if (f && dot)
	{
		try 
			{ Vfloat = std::stof(value); }
		catch(const std::exception& e)
			{ return (IMPOSSIBLE); }
		return (FLOAT);
	}
	if (dot)
	{
		try 
			{ Vdouble = std::stod(value); }
		catch(const std::exception& e)
			{ return (IMPOSSIBLE); }
		return (DOUBLE);
	}
	else
	{
		try 
			{ Vint = std::stoi(value); }
		catch(const std::exception& e)
			{ return (IMPOSSIBLE); }
		return (INT);
	}
	
}

void	cast::printAll()
{
	std::cout << "char: " << Pchar << std::endl;
	std::cout << "int: " << Pint << std::endl;
	std::cout << "float: " << makePrintable(Pfloat, 'f') << std::endl;
	std::cout << "double: " << makePrintable(Pdouble, 'd') << std::endl;
}

std::string &cast::makePrintableChar(std::string &vchar)
{
	if (Pchar == NPOSSIBLE || Pchar == NDISPLAY)
	{
		vchar.insert(0, "'");
		Pchar.append("'");
	}
	return (vchar);
}

template <typename T>
T	&cast::makePrintable(T &value, char vtype)
{
	unsigned long epos;

	if (value == NPOSSIBLE || type == SPECIAL_FLOAT || type == SPECIAL_DOUBLE)
		return (value);
	if (value.find(".") ==  std::string::npos)
	{
		if ((epos = value.find("e")) != std::string::npos)
			value.insert(epos, ".0");
		else
			value.append(".0");
	}
	if (vtype == 'f')
		value.append("f");
	return (value);
}

void	cast::charConv()
{
	std::stringstream sstr;

	Vint = static_cast<int>(Vchar);
	Vfloat = static_cast<float>(Vchar);
	Vdouble = static_cast<double>(Vchar);

	//CHAR
	sstr << Vchar;
	Pchar = sstr.str();
	sstr.str("");
	//INT
	sstr << Vint;
	Pint = sstr.str();
	sstr.str("");
	//FLOAT
	sstr << Vfloat;
	Pfloat = sstr.str();
	sstr.str("");
	//DOUBLE
	sstr << Vdouble;
	Pdouble = sstr.str();
	sstr.str("");
}

void	cast::floatConv()
{
	std::stringstream sstr;

	//FLOAT
	sstr << Vfloat;
	Pfloat = sstr.str();
	sstr.str("");
	//CHAR
	if (Vfloat >= static_cast<float>(std::numeric_limits<char>::min()) && Vfloat <= static_cast<float>(std::numeric_limits<char>::max()))
	{
		Vchar = Vfloat;
		if (isprint(Vchar))
			Pchar = Vchar;
		else
			Pchar = NDISPLAY;
	}
	else
		Pchar = NPOSSIBLE;
	//INT
	if (Vfloat >= MIN_FLOAT_SAFE && Vfloat <= MAX_FLOAT_SAFE)
	{
		Vint = static_cast<int>(Vfloat);
		sstr << Vint;
		Pint = sstr.str();
		sstr.str("");

	}
	else
		Pint = NPOSSIBLE;
	//DOUBLE
	Vdouble = static_cast<double>(Vfloat);
	sstr << Vdouble;
	Pdouble = sstr.str();
	sstr.str("");
}

void	cast::doubleConv()
{
	std::stringstream sstr;

	//DOUBLE
	sstr << Vdouble;
	Pdouble = sstr.str();
	sstr.str("");
	//CHAR
	if (Vdouble >= static_cast<double>(std::numeric_limits<char>::min()) && Vdouble <= static_cast<double>(std::numeric_limits<char>::max()))
	{
		Vchar = Vdouble;
		if (isprint(Vchar))
			Pchar = Vchar;
		else
			Pchar = NDISPLAY;
	}
	else
		Pchar = NPOSSIBLE;
	//INT
	if (Vdouble >= static_cast<double>(std::numeric_limits<int>::min()) &&
		Vdouble <= static_cast<double>(std::numeric_limits<int>::max()))
	{
		Vint = static_cast<int>(Vdouble);
		sstr << Vint;
		Pint = sstr.str();
		sstr.str("");

	}
	else
		Pint = NPOSSIBLE;
	//FLOAT
	Vfloat = static_cast<float>(Vdouble);
	sstr << Vdouble;
	Pfloat = sstr.str();
	sstr.str("");
}

void	cast::intConv()
{
	std::stringstream sstr;

	//INT
	sstr << Vint;
	Pint = sstr.str();
	sstr.str("");
	//CHAR
	if (Vint >= static_cast<int>(std::numeric_limits<char>::min()) && Vint <= static_cast<int>(std::numeric_limits<char>::max()))
	{
		Vchar = Vint;
		if (isprint(Vchar))
			Pchar = Vchar;
		else
			Pchar = NDISPLAY;
	}
	else
		Pchar = NPOSSIBLE;
	//DOUBLE
	Vdouble = static_cast<double>(Vint);
	sstr << Vdouble;
	Pdouble = sstr.str();
	sstr.str("");
	//FLOAT
	Vfloat = static_cast<float>(Vint);
	sstr << Vint;
	Pfloat = sstr.str();
	sstr.str("");
}

void	cast::specialFloatConv()
{
	Pchar = NPOSSIBLE;
	Pint = NPOSSIBLE;
	Pfloat = value;
	Pdouble = value;
	Pdouble.resize(Pdouble.size() - 1);
}

void	cast::specialDoubleConv()
{
	Pchar = NPOSSIBLE;
	Pint = NPOSSIBLE;
	Pfloat = value;
	Pfloat = Pfloat.append("f");
	Pdouble = value;
}

void	cast::impossibleConv()
{
	Pchar = NPOSSIBLE;
	Pint = NPOSSIBLE;
	Pfloat = NPOSSIBLE;
	Pdouble = NPOSSIBLE;
}
