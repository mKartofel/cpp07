/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:29:53 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/19 13:38:25 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
	int			arr1[4] = {0, 1, 2, 3};
	std::string	arr2[5] = {"Jim", "Deb", "Daube", "Bang", "Trepo"};
	char		arr3[4] = {'a', 'b', 'c', 'd'};

	::iter(arr1, 4, print);
	::iter(arr2, 5, print);
	::iter(arr3, 4, print);
	::iter(arr1, 2, print);
}