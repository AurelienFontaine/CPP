/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:56:52 by afontain          #+#    #+#             */
/*   Updated: 2024/12/12 16:32:06 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _target("Default")
{
	std::cout << std::endl;
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &toCopy) : AForm(toCopy.getName(), toCopy.getGradeSign(), toCopy.getGradeExec()), _target(toCopy._target)
{
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
}

const RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &toCopy)
{
	std::cout << "RobotomyRequestForm Copy contructor called" << std::endl;
	(void)toCopy;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout  << " RobotomyRequestForm destructor called" << std::endl;
	std::cout << std::endl;
}

void RobotomyRequestForm::Robotomized() const
{
	std::cout << "Drilling noises " << std::endl;
	int nbr;
	nbr = std::rand();
	if (nbr % 2 == 0)
		std::cout << _target << "has been robotomized" << std::endl;
	else 
		std::cout << _target << "robotomy failed" << std::endl;	
}

void RobotomyRequestForm::execute(Bureaucrat const  &executor) const
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
	Robotomized();
}