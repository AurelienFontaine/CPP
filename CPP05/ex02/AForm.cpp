/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:30:27 by afontain          #+#    #+#             */
/*   Updated: 2024/12/12 12:13:20 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _Name("Default"), _sgrade(1), _egrade(1), _sign(false)
{
	std::cout << std::endl;
	std::cout << "Default AForm constructor called" << std::endl;
}

AForm::AForm(const std::string name, int sgrade, int egrade) : _Name(name), _sgrade(sgrade), _egrade(egrade), _sign(false)
{
	if (sgrade < 1 || egrade < 1)
		throw (GradeTooHighException());
	if (sgrade > 150 || egrade > 150)
		throw (GradeTooLowException());
}

AForm::AForm(AForm &toCopy) : _Name(toCopy._Name), _sgrade(toCopy._sgrade), _egrade(toCopy._egrade)
{
	std::cout << "Default AForm constructor called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
}

const AForm &AForm::operator=(const AForm &toCopy)
{
	std::cout << "AForm Copy contructor called" << std::endl;
	_sign = toCopy._sign;
	return (*this);
}

AForm::~AForm()
{
	std::cout << this->_Name << " AForm destructor called" << std::endl;
	std::cout << std::endl;
}

int AForm::beSigned(const Bureaucrat b)
{
	if (b.getGrade() > _sgrade )
	{	throw (GradeTooLowException());
		_sign = false;
	}
	else
		_sign = true;
	return(_sign);
}

void AForm::Checkexecute(Bureaucrat const  &executor) const
{
	if (_sign == false)
		throw(CantSignException());
	if (_egrade < executor.getGrade())
		throw(GradeTooLowException());
}

bool AForm::getSign() const
{
	return (_sign);
}

int AForm::getGradeSign() const
{
	return(_sgrade);
}

int AForm::getGradeExec() const
{
	return (_egrade);
}

std::string AForm::getName() const
{
	return (_Name);
}

std::ostream	&operator<<(std::ostream &ostream, AForm &grade)
{
	ostream << "Form name : "<<  grade.getName() << ", grade to sign : " << grade.getGradeSign() << ", grade to execute : " <<  grade.getGradeExec() << ", is signed : " << grade.getSign() << std::endl;
	return ostream;
}