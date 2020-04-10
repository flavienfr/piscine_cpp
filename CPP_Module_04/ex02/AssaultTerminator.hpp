/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 23:56:07 by froussel          #+#    #+#             */
/*   Updated: 2020/04/10 19:43:45 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
private:
	

public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &);
	AssaultTerminator &operator=(const AssaultTerminator &);
	~AssaultTerminator();

	virtual ISpaceMarine *clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif
