/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:06:59 by afontain          #+#    #+#             */
/*   Updated: 2024/11/22 00:07:01 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed	&Fixed::operator = (const Fixed &toCopy)
{
	std::cout << "Copy assignment called" << std::endl;
	_nb = toCopy.getRawBits();
	return (*this);
}

std::ostream	&operator << (std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
