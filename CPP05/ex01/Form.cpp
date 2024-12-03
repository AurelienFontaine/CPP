/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:30:27 by afontain          #+#    #+#             */
/*   Updated: 2024/12/03 17:29:21 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _Name("Default"), _sign(false), _sgrade(1), _egrade(1)
{
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(const std::string name, int sgrade, int egrade) : _Name(name), _sign(false), _sgrade(sgrade), _egrade(egrade)
{
	if (sgrade < 1 || egrade < 1)
		throw (GradeTooHighException());
	if (sgrade > 150 || egrade > 150)
		throw (GradeTooLowException());
}

Form::Form(Form &toCopy) : _Name(toCopy._Name), _sgrade(toCopy._sgrade), _egrade(toCopy._egrade)
{
	std::cout << "Default Form constructor called" << std::endl;
}

const Form &Form::operator=(const Form &toCopy)
{

}

Form::~Form()
{
	std::cout << this->_Name << " Form destructor called" << std::endl;
}

int Form::beSigned(const Bureaucrat b) const
{
	if (b._grade >_sgrade )
		throw (GradeTooLowException);
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

void Form::setSign(bool sign)
{
	_sign = sign;
}

std::ostream	&operator<<(std::ostream &ostream,  const Form &grade)
{
	ostream << grade.getName();
	ostream << grade.getGradeExec();
	ostream << grade.getGradeSign();
	ostream << grade.beSigned();
	return ostream;
}