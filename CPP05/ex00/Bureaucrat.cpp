/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:47:13 by afontain          #+#    #+#             */
/*   Updated: 2025/06/03 13:46:11 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _Name("Default"), _grade(75)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _Name(name), _grade(grade)
{
	if (_grade > 150)
		throw GradeTooLowException();
	if (_grade < 1)
		throw GradeTooHighException();
	std::cout << _Name << " contructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->_Name << " Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &toCopy)
{
	std::cout << "Bureaucrat Copy contructor called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
	return ;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat &toCopy)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	if (this != &toCopy)
		_grade = toCopy._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostream,  const Bureaucrat &grade)
{
	ostream << grade.getName();
	ostream << grade.getGrade();
	return ostream;
}

// int Bureaucrat::checkGrade()
// {
// 	if (_grade < 1)
// 		throw GradeTooHighException();
// 	if (_grade > 150)
// 		throw GradeTooLowException();
// 	return (0);
// }

void Bureaucrat::DecrementGrade()
{
	if (_grade > 1)
		_grade--;
	// else if (_grade == 1)
	// 	std::cout << _Name << " can't be downgrade" << std::endl;
	else
		throw GradeTooHighException();
}

void Bureaucrat::IncrementGrade()
{
	if (_grade < 150)
		_grade++;
	// else if (_grade == 150)
	// 	std::cout << _Name << " can't be upgraded" << std::endl;
	else
		throw GradeTooLowException();
}

std::string Bureaucrat::getName() const
{
	return (_Name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (_grade);
}
