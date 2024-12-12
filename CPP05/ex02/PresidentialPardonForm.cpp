/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:56:50 by afontain          #+#    #+#             */
/*   Updated: 2024/12/12 16:31:58 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("Default")
{
	std::cout << std::endl;
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &toCopy) : AForm(toCopy.getName(), toCopy.getGradeSign(), toCopy.getGradeExec()), _target(toCopy._target)
{
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
}

const PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &toCopy)
{
	std::cout << "PresidentialPardonForm Copy contructor called" << std::endl;
	(void)toCopy;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << " PresidentialPardonForm destructor called" << std::endl;
	std::cout << std::endl;
}

void PresidentialPardonForm::Zaphod() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const  &executor) const
{
	try
	{
		Checkexecute(executor);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
	Zaphod();
}