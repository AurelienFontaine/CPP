/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:06:15 by afontain          #+#    #+#             */
/*   Updated: 2024/11/22 00:06:17 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(void) : _nb(0)
{
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed::Fixed(const Fixed &toCopy)
{
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

Fixed	&Fixed::operator = (const Fixed &toCopy)
{
	_nb = toCopy.getRawBits();
	return (*this);
}
