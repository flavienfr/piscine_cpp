/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 17:13:57 by froussel          #+#    #+#             */
/*   Updated: 2020/04/30 00:19:39 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
int const	&easyfind(T container, int value)
{
	typename T::iterator first_value;

	first_value = std::find(container.begin(), container.end(), value);
	if (first_value == container.end())
		throw Notfound();

	return (*first_value);
}

template <typename T>
T	increaseGenetation()
{
	static T v = 0;
	return(v++);
}

template <typename T>
void	print(T &container)
{
	for (typename T::iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int	main()
{
	{
		std::cout << "	VECTOR" << std::endl;
		std::vector<int>	container_1(5);

		generate(container_1.begin(), container_1.end(), increaseGenetation<int>);
		print(container_1);

		try
		{
			std::cout << "the value = " << easyfind(container_1, 3) << std::endl;
			std::cout << "the value = " << easyfind(container_1, 2) << std::endl;
			std::cout << "the value = " << easyfind(container_1, 5) << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "--------------------------------" << std::endl;
	}
	{
		std::cout << "	DEQUE" << std::endl;
		std::deque<int>	container_2(5);

		generate(container_2.begin(), container_2.end(), increaseGenetation<int>);
		print(container_2);

		try
		{
			std::cout << "the value = " << easyfind(container_2, 8) << std::endl;
			std::cout << "the value = " << easyfind(container_2, 5) << std::endl;
			std::cout << "the value = " << easyfind(container_2, 10) << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "--------------------------------" << std::endl;
	}
	{
		std::cout << "	LIST" << std::endl;
		std::list<int>	container_3(5);

		generate(container_3.begin(), container_3.end(), increaseGenetation<int>);
		print(container_3);

		try
		{
			std::cout << "the value = " << easyfind(container_3, 10) << std::endl;
			std::cout << "the value = " << easyfind(container_3, 13) << std::endl;
			std::cout << "the value = " << easyfind(container_3, 15) << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "--------------------------------" << std::endl;
	}
	{
		std::cout << "	SET" << std::endl;
		std::set<int>	container_4;

		for (int i = 14; i < 19; i++)
			container_4.insert(i);
		print(container_4);

		try
		{
			std::cout << "the value = " << easyfind(container_4, 14) << std::endl;
			std::cout << "the value = " << easyfind(container_4, 18) << std::endl;
			std::cout << "the value = " << easyfind(container_4, 19) << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "--------------------------------" << std::endl;
	}

	return (0);
}
