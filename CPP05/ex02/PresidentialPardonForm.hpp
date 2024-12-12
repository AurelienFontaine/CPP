/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:56:47 by afontain          #+#    #+#             */
/*   Updated: 2024/12/12 15:53:47 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		const std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);

		PresidentialPardonForm(PresidentialPardonForm &toCopy);
		const PresidentialPardonForm &operator=(const PresidentialPardonForm &toCopy);
		
		~PresidentialPardonForm();

		void Zaphod() const;
		void execute(Bureaucrat const  &executor) const;
};

#endif