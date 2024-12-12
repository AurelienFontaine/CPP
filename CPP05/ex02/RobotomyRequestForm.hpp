/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:56:55 by afontain          #+#    #+#             */
/*   Updated: 2024/12/12 15:54:24 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
	private:
		const std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);

		RobotomyRequestForm(RobotomyRequestForm &toCopy);
		const RobotomyRequestForm &operator=(const RobotomyRequestForm &toCopy);
		
		~RobotomyRequestForm();

		void Robotomized() const;
		void execute(Bureaucrat const  &executor) const;
};

#endif