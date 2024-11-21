/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:07:03 by afontain          #+#    #+#             */
/*   Updated: 2024/11/22 00:07:05 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(void) : _nb(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int n) : _nb(n << _bits)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float n) : _nb(roundf(n * (1 << _bits)))
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

int Fixed::getRawBits(void) const
{
	return (_nb);
}

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}

float	Fixed::toFloat(void) const
{
	return (float(this->getRawBits()) / (1 << _bits));
}

int	Fixed::toInt(void) const
{
	return (_nb >> _bits);
}
