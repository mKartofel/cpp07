/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:03:38 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/19 13:36:38 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template < typename T >
void iter(T const *array, int length, void function(T const &))
{
	int i;

	for (i = 0; i < length; i++)
		function(array[i]);
}

template < typename T >
void print(T const & x)
{
	std::cout << x << std::endl;
}

#endif