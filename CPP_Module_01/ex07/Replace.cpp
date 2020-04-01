/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 18:41:02 by froussel          #+#    #+#             */
/*   Updated: 2020/04/01 19:05:02 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace()
{
}

Replace::~Replace()
{
}

void	Replace::getFileName(std::string &filePath)
{
	std::size_t dotPos = filePath.rfind('.');
	std::size_t slashPos = filePath.rfind('/');

	if (slashPos == std::string::npos)
		slashPos = 0;
	if(dotPos != std::string::npos && slashPos <= dotPos)
		filePath = filePath.substr(0, filePath.length() - (filePath.length() - dotPos));
}

int		Replace::replace(std::string file_name, std::string s1, std::string s2)
{
	std::ifstream	file_in;
	std::ofstream	file_out;
	std::string		line;
	size_t			pos;

	if (file_name.empty() || s1.empty() || s2.empty())
		return (1);
	file_in.open(file_name.c_str());
	if (!file_in.is_open())
		return (1);
	Replace::getFileName(file_name);
	const char *name = file_name.append(".replace").c_str();
	file_out.open(name);
	if (!file_in.is_open())
		return (1);
	while (getline(file_in, line))//ret
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.replace(pos, s1.length(), s2);
			pos = line.find(s1, pos + s2.size());
		}
		file_out << line;
		if (!file_in.eof())
			file_out << '\n';
	}
	file_in.close();
	file_out.close();
	return (0);
}

