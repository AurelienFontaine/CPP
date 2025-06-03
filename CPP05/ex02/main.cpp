/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:45:55 by afontain          #+#    #+#             */
/*   Updated: 2025/06/03 16:48:32 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void test1()
{
	try
	{
		Bureaucrat	B1("Aurel", 50);
		ShrubberyCreationForm	ShrubberyCF("Form1");
		
		std::cout << ShrubberyCF << std::endl;
		ShrubberyCF.execute(B1);
		B1.signForm(ShrubberyCF);
		
		std::cout << std::endl;
		
		
		std::cout << ShrubberyCF << std::endl;
		ShrubberyCF.execute(B1);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	B1("Benj", 40);
		RobotomyRequestForm	RobotomyRF("Test2");

		std::cout << std::endl;
		std::cout << RobotomyRF << std::endl;

		B1.signForm(RobotomyRF);
		std::cout << RobotomyRF << std::endl;

		RobotomyRF.execute(B1);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	B1("Robin", 2);
		PresidentialPardonForm	PresidentialPF("Orel");

		std::cout  << B1 << std::endl;
		std::cout << PresidentialPF << std::endl;

		B1.signForm(PresidentialPF);
		std::cout << PresidentialPF << std::endl;

		PresidentialPF.execute(B1);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}


void test2()
{
	try
	{
		Bureaucrat	B1("Aurel", 100);
		std::cout  << B1.getName() << " " << B1.getGrade() << std::endl;
		ShrubberyCreationForm	ShrubberyCF("Test");

		std::cout << ShrubberyCF << std::endl;

		B1.signForm(ShrubberyCF);
		std::cout << std::endl;
		std::cout << ShrubberyCF << std::endl;
		ShrubberyCF.execute(B1);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	B1("Aurel", 100);
		RobotomyRequestForm	RobotomyRF("Test");

		std::cout  << B1 << std::endl;
		std::cout << std::endl;
		std::cout << RobotomyRF << std::endl;

		B1.signForm(RobotomyRF);
		std::cout << RobotomyRF << std::endl;

		RobotomyRF.execute(B1);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	B1("Aurel", 100);
		PresidentialPardonForm	PresidentialPF("Test");

		std::cout  << B1 << std::endl;
		std::cout << PresidentialPF << std::endl;

		B1.signForm(PresidentialPF);
		std::cout << PresidentialPF << std::endl;

		PresidentialPF.execute(B1);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
		test1();
	else if (atoi(av[1]) == 1)
		test1();
	else if (atoi(av[1]) == 2)
		test2();	
	return (0);
}