/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:15:53 by afontain          #+#    #+#             */
/*   Updated: 2025/02/21 16:15:54 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>

void	swap(T &X, T &Y)
{
	T	tmp = X;

	X = Y;
	Y = tmp;
}

template <typename T>

T	max(T const &X, T const &Y)
{
	if (X > Y)
		return (X);
	return (Y);
}

template <typename T>

T	min(T const &X, T const &Y)
{
	if (X < Y)
		return (X);
	return (Y);
}

#endif