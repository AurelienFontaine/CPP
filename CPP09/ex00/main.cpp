/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:10:09 by aurelienfon       #+#    #+#             */
/*   Updated: 2025/06/28 12:33:26 by afontain         ###   ########.fr       */
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
