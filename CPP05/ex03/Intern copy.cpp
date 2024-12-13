/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:02:22 by afontain          #+#    #+#             */
/*   Updated: 2024/12/13 14:45:25 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern &toCopy)
{
	if (this != &toCopy)
		*this = toCopy;
}

Intern::~Intern(void)
{
}

Intern	&Intern::operator = (Intern &toCopy)
{
	(void)toCopy;
	return (*this);
}

AForm	*Intern::newShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::newPresident(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::newRobot(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::makeForm(std::string Form_Name, std::string target)
{
	std::string	tab[3] = {"Shrubbery creation", "Robotomy Request", "Presidential pardon"};
	AForm	*(Intern::*ptr[3])(std::string) = {&Intern::newShrubbery, &Intern::newRobot, &Intern::newPresident};
	int i = 0;

	while (i < 3)
	{
		if (Form_Name.compare(tab[i]) == 0)
			break ;
		i++;
	}
	if (i < 3)
	{
		std::cout << "Intern creates " << Form_Name << std::endl;
		return ((this->*ptr[i])(target));
	}
	std::cerr << Form_Name << " is not a valid form name !" << std::endl;
	return (NULL);
}