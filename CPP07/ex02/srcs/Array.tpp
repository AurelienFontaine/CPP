/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:37:25 by afontain          #+#    #+#             */
/*   Updated: 2025/02/21 17:49:08 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template <typename T>
Array<T>::Array() : _size(0)
{
    std::cout << "Default Array constructor called" << std::endl;
}

template <typename T>
Array<T>::Array() : elem(new T[n]), _size(n)
{
    std::cout << "Array constructor called" << std::endl;
}

template <typename T>
Array<T>::~Array()
{
    delete [](_elem);
    std::cout << "Default Array destructor called" << std::endl;
}

template <typename T>
Array<T>::Array(Array<T> const &toCopy) : _elem(new T[toCopy._size]), _size(toCopy._size)
{
    std::cout << "Array copy constructor called" << std::endl;
	if (this != &toCopy)
	{
		for (size_t i = 0; i < toCopy._size; i++)
			_elem[i] = toCopy._elem[i];
	}
}

template <typename T>
const T	&Array<T>::operator [] (size_t index) const
{
	if (index < 0 || index >= _size)
	{
		throw (std::out_of_range("Bad index"));
	}
	return (_elem[index]);
}

template <typename T>
Array<T> &Array<T>::operator = (Array<T> const &toCopy)
{
    if (this != &toCopy)
	{
		delete [](_elem);
		_elem = new(T[toCopy._size]);
		_size = toCopy._size;
		for (int i = 0; i < _size; i++)
			_elem[i] = toCopy[i];
	}
	return (*this);
}

template <typename T>
unsigned int Array<T>::size(Array<T>) const
{
  return (_size);  
}