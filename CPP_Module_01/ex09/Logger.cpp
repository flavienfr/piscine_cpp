/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 12:44:51 by froussel          #+#    #+#             */
/*   Updated: 2020/04/02 14:23:22 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger()
{
	funcTab[0] = {"logToConsole", &Logger::logToConsole};
	funcTab[1] = {"logToFile", &Logger::logToFile};
}

Logger::~Logger()
{
}

std::string	Logger::displayTimestamp()
{
	time_t	curr_time;
	tm		*curr_tm;
	char	buff[20];
	
	time(&curr_time);
	curr_tm = localtime(&curr_time);
	strftime(buff, 20, "[%G%m%d_%H%M%S] ", curr_tm);
	return (std::string(buff));
}

void	Logger::logToConsole(const std::string &to_print)
{
	std::cout << to_print << std::endl;
}

void	Logger::logToFile(const std::string &to_print)
{
	logger.open("log_file.log", std::ios::out | std::ios::app);
	if (logger.is_open())
		logger << to_print << '\n';
	logger.close();
}

std::string	Logger::makeLogEntry(const std::string &to_print)
{
	return (Logger::displayTimestamp().append(to_print));
}

void	Logger::log(std::string const &dest, std::string const &message)
{
	for (int i = 0; i < NB_FUNC; i++)
		if (funcTab[i].name == dest)
			(this->*funcTab[i].funcPtr)(makeLogEntry(message));
}
