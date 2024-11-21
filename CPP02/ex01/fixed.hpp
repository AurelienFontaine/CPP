/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:06:44 by afontain          #+#    #+#             */
/*   Updated: 2024/11/22 00:06:46 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_nb;
		static const int	_bits = 8;

	public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &toCopy);
		~Fixed(void);

		Fixed& operator = (const Fixed &toCopy);

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream	&operator << (std::ostream &out, Fixed const &fixed);

#endif
