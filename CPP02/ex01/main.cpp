/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:06:49 by afontain          #+#    #+#             */
/*   Updated: 2024/11/22 16:14:14 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c( 47.62f );
	Fixed const d(b);

	a = Fixed( 1234.9717f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	// std::cout << std::endl;

	// std::cout << "a is " << a.toFloat() << " as Floateger" << std::endl;
	// std::cout << "b is " << b.toFloat() << " as Floateger" << std::endl;

	// Fixed	e(c);
	// std::cout << "e is " << e << std::endl;

	// Fixed	f;
	// f = b;
	// std::cout << "f is " << f << std::endl;
	
	return (0);
}