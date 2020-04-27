/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 17:49:18 by froussel          #+#    #+#             */
/*   Updated: 2020/04/27 18:44:10 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

Base	*generate(void)
{
	Base *base;

	std::cout << "generate: ";
	std::srand(time(NULL));
	switch (std::rand() % 3)
	{
	case 0:
		base = new A;
		std::cout << "class A" << std::endl;
		break;
	case 1:
		base = new B;
		std::cout << "class B" << std::endl;
		break;
	case 2:
		base = new C;
		std::cout << "class C" << std::endl;
		break;
	}

	return (base);
}

void	identify_from_pointer(Base *p)
{
	std::cout << "identify_from_pointer: ";
	if (dynamic_cast<A *>(p))
		std::cout << "class A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "class B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "class C" << std::endl;
	else if (dynamic_cast<Base *>(p))
		std::cout << "class Base" << std::endl;
}

void	identify_from_reference(Base &p)
{
	std::cout << "identify_from_reference: ";
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void) a;
		std::cout << "class A" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void) b;
		std::cout << "class B" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void) c;
		std::cout << "class C" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	try
	{
		Base &base = dynamic_cast<Base &>(p);
		(void) base;
		std::cout << "class Base" << std::endl;
		return ;
	}
	catch(const std::exception& e) {}	
}

int		main()
{
	Base *p;

	p = generate();
	identify_from_pointer(p);

	Base &pref = *p;
	identify_from_reference(pref);

	delete p;

	return (0);
}