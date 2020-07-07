/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 00:44:42 by froussel          #+#    #+#             */
/*   Updated: 2020/07/07 18:34:09 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span() : N(0)
{
	container.reserve(0);
}

span::span(unsigned int N) : N(N)
{
	container.reserve(N);
}

span::span(const span &the_span)
{
	*this = the_span;
}

span &span::operator=(const span &the_span)
{
	N = the_span.N;
	container = the_span.container;
	
	return (*this);
}

span::~span()
{
}

void span::addNumber(int number)
{
	try
	{
		if (container.size() > N)
			throw std::out_of_range("out of range");	
		container.push_back(number);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int	span::spanDiff(int &v1, int &v2)
{
	if (v1 > v2)
		return (v1 - v2);
	return (v2 - v1);
}

int span::shortestSpan()
{
	int spanValue = -1;

	try
	{
		if (container.size() == 0 || container.size() == 1)
			throw SpanNotFound();
		for (size_t i = 1; i < container.size(); i++)
		{
			int newSpanValue = spanDiff(container[i - 1], container[i]);
			if (newSpanValue < spanValue || spanValue == -1)
				spanValue = newSpanValue;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (spanValue);
}

int span::longestSpan()
{
	int spanValue = -1;

	try
	{
		if (container.size() == 0 || container.size() == 1)
			throw SpanNotFound();
		for (size_t i = 1; i < container.size(); i++)
		{
			int newSpanValue = spanDiff(container[i - 1], container[i]);
			if (newSpanValue > spanValue || spanValue == -1)
				spanValue = newSpanValue;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (spanValue);
}
