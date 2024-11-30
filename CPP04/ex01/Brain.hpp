/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:01:26 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 16:01:28 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	protected:

	public:
		Brain(void);
		// Brain(std::string type, std::string sound);
		Brain(Brain &toCopy);
		~Brain(void);

		Brain &operator = (Brain &toCopy);

		std::string	ideas[100];
};

#endif
