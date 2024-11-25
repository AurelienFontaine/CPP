/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:07:03 by afontain          #+#    #+#             */
/*   Updated: 2024/11/22 13:15:21 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(void) : _nb(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int n) : _nb(n << _bits)
{
	// std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float n) : _nb(roundf(n * (1 << _bits)))
{
	// std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &toCopy)
{
	// std::cout << "Copy constructor called" << std::endl;
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

Fixed	&Fixed::operator = (const Fixed &toCopy)
{
	// std::cout << "Copy assignment called" << std::endl;
	_nb = toCopy.getRawBits();
	return (*this);
}


//Operations
Fixed	Fixed::operator + (const Fixed &fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}


Fixed	Fixed::operator - (const Fixed &fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}


Fixed	Fixed::operator / (const Fixed &fixed) const
{
	if (_nb == 0 || fixed.toFloat() == 0)
	{
		std::cout << "You can't divide by 0" << std::endl;
		return Fixed(this->toFloat());
	}
	return Fixed(this->toFloat() / fixed.toFloat());
}


Fixed	Fixed::operator * (const Fixed &fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

//COMPARATEURS
bool	Fixed::operator < (const Fixed &fixed) const
{
	if (this->toFloat() < fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator <= (const Fixed &fixed) const
{
	if (this->toFloat() <= fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator > (const Fixed &fixed) const
{
	if (this->toFloat() > fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator >= (const Fixed &fixed) const
{
	if (this->toFloat() >= fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator == (const Fixed &fixed) const
{
	if (this->toFloat() == fixed.toFloat())
		return (true);
	return (false);
}

bool	Fixed::operator != (const Fixed &fixed) const
{
	if (this->toFloat() != fixed.toFloat())
		return (true);
	return (false);
}

//INCREMENTATION DECREMENTATION
Fixed	&Fixed::operator ++ (void)
{
	this->_nb++;
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	save = *this;
	this->_nb++;
	return (save);
}

Fixed	&Fixed::operator -- (void)
{
	this->_nb--;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	save = *this;
	this->_nb--;
	return (save);
}

//MAX ET MIN
Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed	Fixed::min(Fixed const &a, Fixed const &b){
	if (a < b)
		return (a);
	return (b);
}

Fixed	Fixed::max(Fixed const &a, Fixed const &b){
	if (a > b)
		return (a);
	return (b);
}

std::ostream	&operator << (std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
