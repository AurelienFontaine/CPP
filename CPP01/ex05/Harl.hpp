/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:54:59 by afontain          #+#    #+#             */
/*   Updated: 2024/10/24 13:55:01 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	private:
		void	_info(void);
		void	_debug(void);
		void	_warning(void);
		void	_error(void);

	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

typedef void (Harl::*ptrF)(void);

#endif