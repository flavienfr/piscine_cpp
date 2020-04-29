/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 17:13:56 by froussel          #+#    #+#             */
/*   Updated: 2020/04/30 00:19:37 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <vector>
# include <deque>
# include <list>
# include <set>

class Notfound: public std::exception
{
	virtual const char* what() const throw()
	{
		return "Value not found";
	}
};

#endif
