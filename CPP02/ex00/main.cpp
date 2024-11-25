/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:06:27 by afontain          #+#    #+#             */
/*   Updated: 2024/11/22 12:04:51 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	// 1)
	// b.setRawBits(30);
	// c = b;

	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;
	
	// 2)
	// a.setRawBits(24);
	// std::cout << std::endl << "After a.setRawBits(24)" << std::endl << std::endl;
	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;

	// 3)
	// Fixed d(a);
	// std::cout << d.getRawBits() << std::endl;

	// 4)
	b.setRawBits(-12);
	std::cout << std::endl << "After b.setRawBits(-12)" << std::endl << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	// 5)
	// c.setRawBits(35);
	// std::cout << std::endl << "After c.setRawBits(35)" << std::endl << std::endl;
	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;

	// c = b;

	// std::cout << std::endl << "After c = b" << std::endl << std::endl;

	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;
	return (0);
}
