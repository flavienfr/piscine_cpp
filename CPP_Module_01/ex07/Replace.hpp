/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 18:40:54 by froussel          #+#    #+#             */
/*   Updated: 2020/04/01 19:05:01 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <cassert>

class Replace
{
private:
	
public:
	Replace();

	static int	replace(std::string file_name, std::string s1, std::string s2);
	static void	getFileName(std::string &filePath);

	~Replace();
};

#endif
