/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:47:13 by afontain          #+#    #+#             */
/*   Updated: 2025/06/03 15:24:57 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Bureaucrat::Bureaucrat() : _Name("Default"), _grade(75)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

// Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _Name(name), _grade(grade)
// {
// 	std::cout << "Bureaucrat constructor called" << std::endl;
// }

Bureaucrat::Bureaucrat(const std::string name, int grade) : _Name(name), _grade(grade)
{
	if (this->_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	if (this->_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << name << " Bureaucrat contructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << _Name << " Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &toCopy)
{
	std::cout << "Bureaucrat Copy contructor called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
}

const Bureaucrat&	Bureaucrat::operator=(Bureaucrat &toCopy)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	_grade = toCopy._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostream,  const Bureaucrat &grade)
{
	ostream << grade.getName();
	ostream << grade.getGrade();
	return ostream;
}

int Bureaucrat::checkGrade()
{
	if (this->_grade < 1)
		throw (GradeTooHighException());
	if (this->_grade > 150)
		throw (GradeTooLowException());
	return (0);
}

void Bureaucrat::DecrementGrade()
{
	if (_grade > 1)
		_grade--; 
	else
		throw (GradeTooHighException());
}

void Bureaucrat::IncrementGrade()
{
	if (_grade < 150)
		_grade++;
	else
		throw (GradeTooLowException());
}

std::string Bureaucrat::getName() const
{
	return (_Name);
}

void Bureaucrat::setGrade(unsigned int grade)
{
	_grade = grade;
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::signForm(Form &Form)
{
	try
	{
		if (Form.getSign())
		{
			std::cout << "Bureaucrat " << getName() << " try to sign " << Form.getName() << " but it's already signed !" << std::endl;
			return ;
		}
		Form.beSigned(*this);
		std::cout << _Name << " signed " << Form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _Name << " couldn't sign  " << Form.getName() << std::endl << e.what() << std::endl;
	}
}

