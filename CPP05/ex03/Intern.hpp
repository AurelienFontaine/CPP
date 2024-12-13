/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:49:20 by afontain          #+#    #+#             */
/*   Updated: 2024/12/13 14:43:23 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class	Intern
{
	public:
		Intern();
		Intern(Intern &toCopy);
		~Intern();

		Intern	&operator = (Intern &toCopy);

		AForm	*newShrubbery(std::string target);
		AForm	*newPresident(std::string target);
		AForm	*newRobot(std::string target);
		AForm	*makeForm(std::string formName, std::string target);

};

#endif