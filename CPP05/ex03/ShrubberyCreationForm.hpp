/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:57:03 by afontain          #+#    #+#             */
/*   Updated: 2024/12/12 15:54:30 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP


#include "AForm.hpp"
#include <iostream>

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);

		ShrubberyCreationForm(ShrubberyCreationForm &toCopy);
		const ShrubberyCreationForm &operator=(const ShrubberyCreationForm &toCopy);
		
		~ShrubberyCreationForm();

		void create_file() const;
		void execute(Bureaucrat const  &executor) const;
	
};

#endif