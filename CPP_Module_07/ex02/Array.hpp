/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 16:44:34 by froussel          #+#    #+#             */
/*   Updated: 2020/04/29 00:32:00 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	unsigned int	nsize;
	T				*array;
	
public:
	Array();
	Array(unsigned int nsize);
	Array(const Array &);
	Array &operator=(const Array &);
	~Array();

	unsigned int size(void) const;
	T		&operator[](unsigned int idx);
	T		const &operator[](unsigned int idx) const;
};

#endif

template <typename T>
Array<T>::Array() : nsize(0), array(nullptr)
{
}

template <typename T>
Array<T>::Array(unsigned int nsize) : nsize(nsize)
{
	array = new T[nsize];
}

template <typename T>
Array<T>::Array(const Array &the_Array) : Array<T>()
{
	*this = the_Array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &the_Array)
{
	delete[] array;
	if (the_Array.nsize)
	{
		array = new T[the_Array.nsize];
		nsize = the_Array.nsize;
	}
	for (unsigned int i = 0; i < the_Array.nsize; i++)
		array[i] = the_Array.array[i];

	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] array;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (nsize);
}

template <typename T>
T	&Array<T>::operator[](unsigned int idx)
{
	if (idx < 0 || idx >= nsize)
		throw std::out_of_range("Out of range");
	return (array[idx]);
}

template <typename T>
T	const &Array<T>::operator[](unsigned int idx) const
{
	if (idx < 0 || idx >= nsize)
		throw std::out_of_range("Out of range");
	return (array[idx]);
}
