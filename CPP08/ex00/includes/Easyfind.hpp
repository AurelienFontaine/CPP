/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:17:21 by afontain          #+#    #+#             */
/*   Updated: 2025/02/25 17:12:35 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <exception>

class NotFoundException : public std::exception {
public:
    const char* what() const throw() {
        return "Element not found in the container";
    }
};

template <typename T>
class Easyfind
{
    private:
        T container;
    public:
        Easyfind();
        ~Easyfind();
        Easyfind(T templ, int nbr);
        typename T::iterator Easyfind(T &container, int value);
};

#endif