/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:37:56 by froussel          #+#    #+#             */
/*   Updated: 2020/04/27 05:20:55 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <sstream>
#define RANDSTRING 8

struct	s_Data
{
	std::string	s1;
	std::string s2;
	int			n;
}		typedef Data;

int		randInt()
{
	long value;

	value = (std::rand() % (static_cast<long>(RAND_MAX) + 1) + 0);
	if (std::rand() % 2 + 0)
		value *= -1;
	return (value);
}

char	*randString()
{
	std::string str = "1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char		*s;

	s = new char[RANDSTRING];
	for (int i = 0; i < RANDSTRING; i++)
		s[i] = str[std::rand() % str.length()];
	return(s);
}

void	*serialize(void)
{
	char 	*chaine;
	char 	*tmp;
	int		idx;
	int		i;

	chaine = new char[RANDSTRING * 2 + sizeof(int)];
	srand(time(NULL));

	std::cout << "serialize" << std::endl;

	tmp = randString();
	std::cout << "s1: " << tmp << " ";
	for (i = 0; i < RANDSTRING; i++)
		chaine[i] = tmp[i];
	delete tmp;
	idx = i;

	int intTmp = randInt();
	std::cout << "n: " << intTmp << " ";
	*reinterpret_cast<int *>(chaine + idx) = intTmp;//humm
	idx += sizeof(int);

	tmp = randString();
	std::cout << "s2: " << tmp << std::endl;
	for (i = 0; i < RANDSTRING; i++)
		chaine[idx + i] = tmp[i];	
	delete tmp;

	return (chaine);
}

Data	*deserialize(void *raw)
{
	Data	*data;

	data = new Data;

	data->s1 = std::string(static_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	data->s2 = std::string(static_cast<char*>(raw) + 12, 8);

	return (data);
}

int		main()
{
	void *raw;
	Data *data;

	raw = serialize();
	data = deserialize(raw);

	std::cout << "deserialize" << std::endl;
	std::cout << "s1: " << data->s1 << " n: " << data->n << " s2: " << data->s2 << std::endl;

	delete data;
	delete reinterpret_cast<char*>(raw);

	return (0);
}