/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 00:44:40 by froussel          #+#    #+#             */
/*   Updated: 2020/07/07 16:59:48 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <ctime>
#include <cstdlib>
#include <algorithm>

int	randomValue()
{
	return (rand() % RAND_MAX);
}

int	main()
{
	{
		span sp = span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		span spCopy(sp);

		std::cout << "shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;

		std::cout << "shortest Span: " << spCopy.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << spCopy.longestSpan() << std::endl;
	}
	{
		size_t size = 420000;
		span megaSp = span(size);
		srand(time(NULL));

		for (size_t i = 0; i < size; i++)
			megaSp.addNumber(randomValue());
			
		std::cout << "shortest Span: " << megaSp.shortestSpan() << std::endl;
		std::cout << "longestSpan: " << megaSp.longestSpan() << std::endl;
		
	}

	return (0);
}

