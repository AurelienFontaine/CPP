/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:13:33 by afontain          #+#    #+#             */
/*   Updated: 2025/02/25 17:12:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Easyfind.hpp"
#include "Easyfind.tpp"


int main(void)
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    Easyfind<std::vector<int>> ef(vec, 3);

    try 
    {
        std::vector<int>::iterator it = ef.easyfind(vec, 3);
        std::cout << "Value found: " << *it << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::vector<int>::iterator it = ef.easyfind(vec, 6);
        std::cout << "Value found: " << *it << std::endl;
    } 
    catch (const std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}