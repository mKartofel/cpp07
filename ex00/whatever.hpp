/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:38:13 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/18 17:54:22 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template < typename T >
void swap (T & a, T & b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template < typename T >
T const & min (T const & a, T const & b)
{
	if (a < b)
		return a;
	return b;
}

template < typename T >
T const & max (T const & a, T const & b)
{
	if (a > b)
		return a;
	return b;
}

#endif