/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 17:10:46 by froussel          #+#    #+#             */
/*   Updated: 2020/04/29 00:31:26 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int		main()
{
//INT
	Array<int> myintarray(5);
	myintarray[0] = 10;
	myintarray[1] = 11;
	myintarray[2] = 12;
	myintarray[3] = 13;
	myintarray[4] = 14;
	Array<int> mycopyintarray(myintarray);

	std::cout << "INT array"  << " Size: " << myintarray.size() << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << myintarray[i] << std::endl;

	std::cout << "INT CopyArray" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << mycopyintarray[i] << std::endl;
//CHAR	
	Array<char> mychararray(5);
	mychararray[0] = 'h';
	mychararray[1] = 'e';
	mychararray[2] = 'l';
	mychararray[3] = 'l';
	mychararray[4] = 'p';
	Array<char> mycopychararray(mychararray);

	std::cout << "CHAR array" << " Size: " << mychararray.size() << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << mychararray[i] << std::endl;

	std::cout << "CHAR CopyArray" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << mycopychararray[i] << std::endl;
//STRING
	Array<std::string> mystringarray(5);
	mystringarray[0] = "hello";
	mystringarray[1] = " ";
	mystringarray[2] = "world!";
	mystringarray[3] = " ";
	mystringarray[4] = "retard\n";
	Array<std::string> mycopystringarray(mystringarray);

	std::cout << "STRING array" << " Size: " << mystringarray.size() << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << mystringarray[i];

	std::cout << "STRING CopyArray" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << mycopystringarray[i];
//OUT OF RANGE
	try
	{
		std::cout << mycopystringarray[10];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		mycopystringarray[-1] = 5;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return (0);
}