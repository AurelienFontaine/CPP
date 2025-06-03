/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:45:55 by afontain          #+#    #+#             */
/*   Updated: 2025/06/03 15:30:19 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


void test1()
{
	Bureaucrat Moi("Aurel", 100);
	Form	Test1("Form", 200, 100);
	std::cout << "Je passe par la" << std::endl;
}

void test2()
{
	Bureaucrat Moi("Orel", 75);
	Form	Test2("PASS", 100, 100);
	std::cout << "Je passe par ici" << std::endl;
}

int main()
{
	// try 
	// {
	// 	test1();
   	// } 
	// catch (std::exception &e)
	// {
    //     std::cerr << "Catch 1 : " << e.what() << std::endl;
	// }
	// try 
	// {
	// 	test2();
   	// } 
	// catch (std::exception &e)
	// {
    //     std::cerr << "Catch 2 : " << e.what() << std::endl;
	// }
	Form		F1("Formulaire pour redoubler", 100, 150);
	Bureaucrat	B1("Aurel", 3);
	Bureaucrat	B2("Robin", 150);
	
	std::cout << std::endl;
	std::cout << B1 << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << B2 << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << "Can he sign : " << std::endl;
	B1.signForm(F1);
	std::cout << std::endl;
	// std::cout << F1 << std::endl;
	std::cout << "Can he sign : " << std::endl;
	B2.signForm(F1);
	std::cout << std::endl;
	// std::cout << F1 << std::endl;
    return 0;
}