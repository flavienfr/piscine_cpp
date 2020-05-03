/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 00:44:38 by froussel          #+#    #+#             */
/*   Updated: 2020/04/30 19:17:15 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>

class span
{
private:
	unsigned int		N;
	std::vector<int>	container;

public:
	span();
	span(unsigned int N);
	span(const span &);
	span &operator=(const span &);
	~span();

	void	addNumber(int number);
	int		shortestSpan();
	int		longestSpan();
	int		spanDiff(int &v1, int &v2);

	class SpanNotFound : public std::exception
	{
		const char * what () const throw ()
		{ return "Span Not Found"; }
	};
};

#endif
