/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: froussel <froussel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 19:19:37 by froussel          #+#    #+#             */
/*   Updated: 2020/05/02 00:38:21 by froussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class mutantstack : public std::stack<T>
{
private:
	

public:
	mutantstack();
	mutantstack(const mutantstack &);
	mutantstack &operator=(const mutantstack &);
	~mutantstack();

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator		begin(void);
	const_iterator	begin(void) const;
	iterator		end(void);
	const_iterator	end(void) const;

};

#endif

template <typename T>
mutantstack<T>::mutantstack() : std::stack<T>()
{
}

template <typename T>
mutantstack<T>::mutantstack(const mutantstack &the_mutantstack) : std::stack<T>(the_mutantstack)
{
}

template <typename T>
mutantstack<T> &mutantstack<T>::operator=(const mutantstack<T> &the_mutantstack)
{
	this->c = the_mutantstack.c;
	return (*this);
}

template <typename T>
mutantstack<T>::~mutantstack()
{
}

template <typename T>
typename std::stack<T>::container_type::iterator mutantstack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::iterator mutantstack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator mutantstack<T>::begin() const
{
	return (this->c.begin());
}

template <typename T>
typename std::stack<T>::container_type::const_iterator mutantstack<T>::end() const
{
	return (this->c.end());
}

