/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:45:55 by afontain          #+#    #+#             */
/*   Updated: 2024/12/13 15:08:10 by afontain         ###   ########.fr       */
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
		FormPtr = Int1.makeForm("Shrubbery creation", "Benj");

		if (FormPtr)
		{
			std::cout << *FormPtr << std::endl;
			Buro.signForm(*FormPtr);
			FormPtr->execute(Buro);

			delete (FormPtr);
		}
	}
	// {
	// 	FormPtr = I1.makeForm("Presidential pardon", "Benj");
	
	// 	if (FormPtr)
	// 	{
	// 		std::cout << *FormPtr << std::endl;
	// 		B1.signForm(*FormPtr);
	// 		FormPtr->execute(B1);

	// 		delete (FormPtr);
	// 	}
	// }
	
	// {
	// 	FormPtr = I1.makeForm("Robotomy request", "Benj");

	// 	if (FormPtr)
	// 	{
	// 		std::cout << *FormPtr << std::endl;
	// 		B1.signForm(*FormPtr);
	// 		FormPtr->execute(B1);

	// 		delete (FormPtr);
	// 	}
	// }

	// {
	// 	FormPtr = I1.makeForm("fail", "osef");
	// 	if (FormPtr)
	// 	{
	// 		B1.signForm(*FormPtr);
	// 		FormPtr->execute(B1);
	// 		delete (FormPtr);
	// 	}
	// 	else
	// 		return (1);
	// }
	return (0);
}