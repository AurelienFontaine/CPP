/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:06:27 by afontain          #+#    #+#             */
/*   Updated: 2024/11/22 00:06:29 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	

	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << "c : " << c.getRawBits() << std::endl;

	// b.setRawBits(30);
	// c = b;

	// std::cout << "a : " << a.getRawBits() << std::endl;
	// std::cout << "b : " << b.getRawBits() << std::endl;
	// std::cout << "c : " << c.getRawBits() << std::endl;
	
	a.setRawBits(24);

	std::cout << std::endl << "After a.setRawBits(24)" << std::endl << std::endl;

	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << "c : " << c.getRawBits() << std::endl;

	// Fixed d(a);

	// std::cout << "d : " << d.getRawBits() << std::endl;

	b.setRawBits(-12);

	std::cout << std::endl << "After b.setRawBits(-12)" << std::endl << std::endl;

	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << "c : " << c.getRawBits() << std::endl;

	c.setRawBits(35);

	std::cout << std::endl << "After c.setRawBits(35)" << std::endl << std::endl;

	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << "c : " << c.getRawBits() << std::endl;

	c = b;

	std::cout << std::endl << "After c = b" << std::endl << std::endl;

	std::cout << "a : " << a.getRawBits() << std::endl;
	std::cout << "b : " << b.getRawBits() << std::endl;
	std::cout << "c : " << c.getRawBits() << std::endl;

	return (0);
}
