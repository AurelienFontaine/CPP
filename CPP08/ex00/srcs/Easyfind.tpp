/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:21:18 by afontain          #+#    #+#             */
/*   Updated: 2025/02/25 17:12:41 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Easyfind.hpp"

template <typename T>

Easyfind<T>::Easyfind()
{
    std::cout << "Default Easyfind constructor called" << std::endl;
}

template <typename T>

Easyfind<T>::~Easyfind()
{
    std::cout << "Default Easyfind destructor called" << std::endl;
}

template <typename T>
Easyfind<T>::Easyfind(T templ, int nbr) : container(templ)
{
    std::cout << "Parameterized Easyfind constructor called" << std::endl;
}

template <typename T>
typename T::iterator easyfind(T &container, int value) 
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw NotFoundException();
    }
    return it;
}
