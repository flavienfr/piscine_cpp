/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 19:19:40 by froussel          #+#    #+#             */
/*   Updated: 2020/05/02 00:59:42 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

#include <vector>
int main()
{
	std::vector<int> test;


	mutantstack<int>    mstack;
	
	mstack.push(5);
	mstack.push(17);

	std::cout << "mstack.top(): " << mstack.top() << std::endl;

	mstack.pop();
	
	std::cout << "mstack.size(): " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "mstack.size(): " << mstack.size() << std::endl;

	mutantstack<int>::iterator it = mstack.begin();
	mutantstack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while(it != ite)
	{
		std::cout << "*it: " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	{
		mutantstack<int>::iterator it2 = mstack.begin();
		mutantstack<int>::iterator ite2 = mstack.end();
				
		do
		{
			--ite2;
			std::cout << "*ite2: " << *ite2 << std::endl;
		} while(ite2 != it2);
	}
	
	return (0);
}