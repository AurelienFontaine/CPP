/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:07:13 by afontain          #+#    #+#             */
/*   Updated: 2024/11/22 00:07:18 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int main(void)
{
	// int	n = 0;
	// if (n++ == 1)
	// 	std::cout << "n++ = 1" << std::endl;
	// n = 0;
	// if (++n == 1)
	// 	std::cout << "++n = 1" << std::endl;

	Fixed a(40);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::min( a, b ) << std::endl;

	Fixed	c(a);

	std::cout << c << std::endl;

	Fixed	d;
	d = a;

	std::cout << d << std::endl;

	return (0);
}