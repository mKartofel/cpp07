/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:52:32 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/19 17:38:50 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
# include <iostream>

template < typename T >
class Array
{
private:
	T * _elements;
	unsigned int _size;
public:
	Array(void) : _elements(NULL), _size(0) {}
	Array(unsigned int n) : _elements(new T[n]), _size(n) {}
	Array(Array const & a) : _elements(NULL), _size(0) { *this = a; }
	Array & operator=(Array const & a)
	{
		if (_size != 0)
			delete [] _elements;
		_elements = new T[a._size];
		_size = a._size;
		for (unsigned int i = 0; i < _size; i++)
			_elements[i] = a._elements[i];
		return *this;
	}
	~Array(void)
	{
		if (_elements)
			delete [] _elements;
	};

	T & operator[](unsigned int const i) const
	{
		if (i < 0 || i >= _size)
			throw OutOfRange();
		return _elements[i];
	}

	unsigned int size(void) const
	{
		return _size;
	}


	class OutOfRange : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Error : index is out of range";
				}
		};
};

template<typename T> 
std::ostream &operator<<(std::ostream &o, Array<T> const &a)
{
	o << "size=" << a.size() << " elements= ";
	for (unsigned int i = 0; i < a.size(); i++)
		o << a[i] << " ";
	o << std::endl;
	return o;
}

#endif