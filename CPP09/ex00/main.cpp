/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurelienfontaine <aurelienfontaine@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:10:09 by aurelienfon       #+#    #+#             */
/*   Updated: 2025/03/07 17:36:48 by aurelienfon      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cerr << "Bad number of arguments, tuto : ./btc [input.csv]" << std::endl , 1);

    BitcoinExchange Btc;
    
    if (Btc.fillMap())
		return (2);
	if (Btc.recupInput(av[1]))
		return (3);
    return (0);
}
