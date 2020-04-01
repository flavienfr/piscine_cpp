/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 20:15:12 by froussel          #+#    #+#             */
/*   Updated: 2020/03/30 23:38:56 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

std::string	Human::identify()
{
	return (brain.identify());
}

const Brain		&Human::getBrain() const
{
	return (brain);
}
