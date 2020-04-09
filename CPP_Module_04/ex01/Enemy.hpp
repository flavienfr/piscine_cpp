/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 16:55:56 by froussel          #+#    #+#             */
/*   Updated: 2020/04/09 17:30:28 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy
{
private:
	std::string	type;
	int			hp;

public:
	Enemy();
	Enemy(std::string const & type, int hp);
	Enemy(const Enemy &);
	Enemy &operator=(const Enemy &);
	virtual ~Enemy();

	virtual std::string	getType() const;
	int 				getHP() const;
	
	virtual void 		takeDamage(int);
};

#endif
