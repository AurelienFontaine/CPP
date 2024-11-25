/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:06:40 by afontain          #+#    #+#             */
/*   Updated: 2024/11/22 16:31:58 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(void) : _nb(0)
{
	std::cout << GREEN <<"Default constructor called" << WHITE << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << RED << "Destructor called" << WHITE << std::endl;
}

Fixed::Fixed(const int n) : _nb(n << _bits)
{
	std::cout << BLUE << "Int constructor called" << WHITE << std::endl;
}

Fixed::Fixed(const float n) : _nb(roundf(n * (1 << _bits)))
{
	std::cout << BLUE << "Float constructor called" << WHITE << std::endl;
}

Fixed::Fixed(const Fixed &n)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = n;
}

int Fixed::getRawBits(void) const
{
	return (_nb);
}

void	Fixed::setRawBits(int const raw)
{
	_nb = raw;
}

// static_cast<> sert a caster de maniere safe et lisible
float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_nb) / static_cast<float>(1 << _bits));
}


//  dans toInt on decale la valeur de nb sur 8bits sur la droite. (si nb = 16 -> 0001 0000 ; nb devient 0000 0001 soit 1)
//  on fait ca puisque on utilise les bits de droite pour les virgules pour les float mais pas les int
int	Fixed::toInt(void) const
{
	return (_nb >> _bits);
}

Fixed	&Fixed::operator = (const Fixed &n)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &n)
	{
		this->setRawBits(n.getRawBits());
	}
	return (*this);
}

// ostream -> output stream ou flux de sortie
std::ostream	&operator << (std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
