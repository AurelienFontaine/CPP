/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:30:24 by afontain          #+#    #+#             */
/*   Updated: 2024/12/03 17:29:41 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _Name;
		bool _sign;
		const int _sgrade;
		const int _egrade;
	public:
		Form();
		Form::Form(const std::string name, int sgrade, int egrade);
		~Form();
		Form(Form &toCopy);
		const Form &operator=(const Form &toCopy);

		int beSigned(const Bureaucrat b) const;
		void setSign(bool sign);
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

#endif