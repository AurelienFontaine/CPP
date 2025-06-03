/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:45:55 by afontain          #+#    #+#             */
/*   Updated: 2025/06/03 16:57:46 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		Int1;
	AForm		*FormPtr;
	Bureaucrat	Buro("Aurel", 1);
	{
		FormPtr = Int1.makeForm("Shrubbery creation", "OUI");
		if (FormPtr)
		{
			std::cout << *FormPtr << std::endl;
			Buro.signForm(*FormPtr);
			FormPtr->execute(Buro);
			delete (FormPtr);
		}
	}
	{
		FormPtr = Int1.makeForm("Presidential pardon", "Benj");
	
		if (FormPtr)
		{
			std::cout << *FormPtr << std::endl;
			Buro.signForm(*FormPtr);
			FormPtr->execute(Buro);

			delete (FormPtr);
		}
	}
	
	{
		FormPtr = Int1.makeForm("Robotomy request", "Robin");

		if (FormPtr)
		{
			std::cout << *FormPtr << std::endl;
			Buro.signForm(*FormPtr);
			FormPtr->execute(Buro);

			delete (FormPtr);
		}
	}
	{
		FormPtr = Int1.makeForm("Fail", "Osef");
		if (FormPtr)
		{
			std::cout << *FormPtr << std::endl;
			Buro.signForm(*FormPtr);
			FormPtr->execute(Buro);
			delete (FormPtr);
		}
		else
			return (1);
	}
	return (0);
}