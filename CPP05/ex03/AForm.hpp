/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:30:24 by afontain          #+#    #+#             */
/*   Updated: 2024/12/12 17:42:45 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private :
		const std::string _Name;
		const int _sgrade;
		const int _egrade;
		bool _sign;
	public :
		AForm();
		AForm(const std::string name, int sgrade, int egrade);
		virtual ~AForm();
		AForm(AForm &toCopy);
		const AForm &operator=(const AForm &toCopy);
	
		int beSigned(const Bureaucrat b);
		// void setSign(bool sign);

		bool getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;
		std::string getName() const;

		virtual void execute(Bureaucrat const  &executor) const = 0;
		
		void Checkexecute(Bureaucrat const  &executor) const;

		
		class CantSignException : public std::exception
		{
			public:
			virtual const char* what() const throw(){
				return ("Can't sign AForm");
			}
		};

		class GradeTooHighException : public std::exception
		{
			public:
			virtual const char* what() const throw(){
				return ("The grade set is too high");
			}
		};
		class GradeTooLowException : public std::exception
		{
			public:
			virtual const char* what() const throw(){
				return ("The grade set is too low");
			}
		};
	
};

std::ostream	&operator<<(std::ostream &ostream, AForm &grade);

#endif