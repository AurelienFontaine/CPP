/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:15:42 by afontain          #+#    #+#             */
/*   Updated: 2025/02/21 16:32:09 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP


#include <iostream>

template <typename T, typename U>

void iter(T *array, int size, void (*f)(U&))
{
    if (size < 0)
    {
        std::cout << "Size not good" << std::endl;
    }
    for (int i = 0; i < size ; i++)
        f(array[i]);
}

template <typename T>

void printArray(T &array)
{
    std::cout << array << std::endl;
}

#endif