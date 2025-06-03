/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:30:27 by afontain          #+#    #+#             */
/*   Updated: 2025/06/03 15:21:57 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _Name("Default"), _sgrade(1), _egrade(1), _sign(false)
{
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(const std::string name, int sgrade, int egrade) : _Name(name), _sgrade(sgrade), _egrade(egrade), _sign(false)
{
	std::cout <<  _Name << " Form constructor called" << std::endl;
	if (sgrade < 1 || egrade < 1)
		throw (GradeTooHighException());
	if (sgrade > 150 || egrade > 150)
		throw (GradeTooLowException());
}

Form::Form(Form &toCopy) : _Name(toCopy._Name), _sgrade(toCopy._sgrade), _egrade(toCopy._egrade)
{
	std::cout << "Default Form constructor called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
}

const Form &Form::operator=(const Form &toCopy)
{
	std::cout << "Form Copy contructor called" << std::endl;
	_sign = toCopy._sign;
	return (*this);
}

Form::~Form()
{
	std::cout << this->_Name << " Form destructor called" << std::endl;
}

void Form::beSigned(const Bureaucrat b)
{
	if (b.getGrade() >_sgrade )
	{
		throw (GradeTooLowException());
	}
	_sign = true;
}

bool Form::getSign() const
{
	return (_sign);
}

int Form::getGradeSign() const
{
	return(_sgrade);
}

int Form::getGradeExec() const
{
	return (_egrade);
}

std::string Form::getName() const
{
	return (_Name);
}

// void Form::setSign(bool sign)
// {
// 	_sign = sign;
// }

std::ostream	&operator<<(std::ostream &ostream, Form &grade)
{
	ostream << grade.getName();
	ostream << grade.getGradeExec();
	ostream << grade.getGradeSign();
	ostream << grade.getSign();
	return ostream;
}