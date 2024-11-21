/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 00:06:22 by afontain          #+#    #+#             */
/*   Updated: 2024/11/22 00:06:24 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					_nb;
		static const int	_bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &toCopy);
		~Fixed(void);

		Fixed& operator = (const Fixed &toCopy);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif