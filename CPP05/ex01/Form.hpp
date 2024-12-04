/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:30:24 by afontain          #+#    #+#             */
/*   Updated: 2024/12/04 17:38:33 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _Name;
		const int _sgrade;
		const int _egrade;
		bool _sign;
	public:
		Form();
		Form(const std::string name, int sgrade, int egrade);
		virtual ~Form();
		Form(Form &toCopy);
		const Form &operator=(const Form &toCopy);
	
		void beSigned(const Bureaucrat b);
		// void setSign(bool sign);

		bool getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;
		std::string getName() const;
		
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

std::ostream	&operator<<(std::ostream &ostream, Form &grade);

#endif