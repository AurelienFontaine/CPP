/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:07:13 by afontain          #+#    #+#             */
/*   Updated: 2024/11/22 13:13:01 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( 47.62f );
	Fixed const g( 0 );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << b << std::endl;

	std::cout << std::endl;
	std::cout << "c / b = " << c / b << std::endl;
	std::cout << "c / 0 = " << c / 0 << std::endl;
	std::cout << "c / 0 = " << c / g << std::endl;
	std::cout << std::endl;
	
	std::cout << "Min = " << Fixed::min( a, b ) << std::endl;
	std::cout << "Max = " << Fixed::max( a, b ) << std::endl;
	
	std::cout << std::endl;
	
	Fixed	e(a);
	std::cout << e << std::endl;

	std::cout << std::endl;
	
	Fixed	d;
	d = a;
	std::cout << d << std::endl;

	return (0);
}