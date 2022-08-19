/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 17:14:00 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/19 17:26:20 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define SIZE 10

int main (void)
{
	 Array<int> arr1(SIZE);
	 Array<int> arr2;
	 
    for (int i = 0; i < SIZE; i++)
	{
        arr1[i] = i;
	}

	std::cout << arr1 << std::endl;
	
	arr2 = arr1; //assignment operator test
	Array<int> arr3(arr1);


	arr1[0] = 42;

	std::cout << arr2 << std::endl; //first elem shouldnt be 42
	std::cout << arr3 << std::endl; //first elem shouldnt be 42
	
	//access elements
	std::cout << "arr1[0] = " << arr1[0] << std::endl;
	arr1[0] = 21;
	std::cout << "arr1[0] = " << arr1[0] << std::endl;
	
    try
    {
        arr1[-1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        arr1[SIZE] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

}