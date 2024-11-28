/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:13:29 by afontain          #+#    #+#             */
/*   Updated: 2024/11/28 13:13:44 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include <string.h>
# include <iostream>
# include "Animal.hpp"

class WrongCat : public Animal
{
	protected :
		std::string _type;
	public :
		WrongCat(void);
		WrongCat(std::string Type);
		~WrongCat(void);
		WrongCat(const WrongCat &ToCopy);
		WrongCat&	operator=(const WrongCat &ToCopy);

		void makesound(std::string type);
};

#endif