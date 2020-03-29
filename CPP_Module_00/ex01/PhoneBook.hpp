/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 17:45:47 by froussel          #+#    #+#             */
/*   Updated: 2020/03/26 23:36:58 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include<limits>
# include <string>

class   PhoneBook
{
	private:
		int		num;
		Contact	lst_contact[8];
	public:
		PhoneBook();
		void		add(void);
		void		search(void);
};

#endif
