/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 19:01:34 by afontain          #+#    #+#             */
/*   Updated: 2024/11/30 19:01:35 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private :
		std::string	_ideas[100];

	public :

		Brain();
		Brain(const Brain &src );
		~Brain();

		Brain	&operator=(const Brain &copy);

		std::string getIdea(int index) const;

		void setIdea(int index, std::string idea);
};

#endif
