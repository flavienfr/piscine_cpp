/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 20:01:45 by froussel          #+#    #+#             */
/*   Updated: 2020/04/27 22:03:39 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void	iter(T *array, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		(*f)(array[i]);
}

template<typename T>
void	func(T &v)
{
	v++;
}

template<typename T>
void	func2(T &v)
{
	std::cout << v;
}

template<typename T>
void	show(T *array, size_t size)
{
	for (size_t i = 0; i < size; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

int		main()
{
	int			arInt[5] {1,2,3,4,5};
	float		arFloat[5] {101.5,102.6,103.7,104.8,105.9};
	std::string	arSTRING[2] = {"Hello", " World!"};
	char		arChar[] = "Hello World!";
	size_t		sizeAR = std::char_traits<char>::length(arChar);

	std::cout << "Before:";
	show(arInt, 5);
	std::cout << "After :";
	iter(arInt, 5, &func);
	show(arInt, 5);

	std::cout << "Before:";
	show(arFloat, 5);
	std::cout << "After :";
	iter(arFloat, 5, &func);
	show(arFloat, 5);

	std::cout << "Before:";
	show(arChar, sizeAR);
	std::cout << "After :";
	iter(arChar, sizeAR, &func);
	show(arChar, sizeAR);

	std::cout << "Before:";
	show(arSTRING, 2);
	std::cout << "After :";
	iter(arSTRING, 2, &func2);

	return (0);
}
