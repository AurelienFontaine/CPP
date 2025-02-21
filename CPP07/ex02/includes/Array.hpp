/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:37:37 by afontain          #+#    #+#             */
/*   Updated: 2025/02/21 17:14:57 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
    private:
                    int     _elem;
            unsigned int    _size;
    public:
            Array(void);
            ~Array(void);
            Array<T>(Array<T> const &toCopy);

            const T	    &operator [] (size_t index) const;
            Array   &operator = (Array<T> const &toCopy);
            
            unsigned int    size(Array<T>) const;
};

#endif