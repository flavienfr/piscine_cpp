/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 18:25:06 by froussel          #+#    #+#             */
/*   Updated: 2020/03/30 19:30:26 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <iostream>
# include <cstdlib>
# include <ctime>

class ZombieHorde
{
private:
	int			nb_zb;
	std::string	name;
	std::string	type;
	Zombie	*horde = nullptr;

public:
	ZombieHorde(int n);

	void	randomChump();
	void	announce();

	~ZombieHorde();
};

#endif
