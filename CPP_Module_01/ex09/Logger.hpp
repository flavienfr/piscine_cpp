/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 12:44:50 by froussel          #+#    #+#             */
/*   Updated: 2020/04/02 14:23:23 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <ctime>

# define NB_FUNC 2

class Logger
{
private:
	void		logToConsole(const std::string &to_print);
	void		logToFile(const std::string &to_print);
	std::string	makeLogEntry(const std::string &to_print);
	std::string	displayTimestamp(void);
	
	std::fstream	logger;
	struct funcMap
	{
		std::string	name;
		void (Logger::*funcPtr)(std::string const &);
	};
	funcMap	funcTab[NB_FUNC];

public:
	Logger();
	~Logger();
	void	log(std::string const &dest, std::string const &message);
};

#endif
