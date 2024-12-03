/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:45:55 by afontain          #+#    #+#             */
/*   Updated: 2024/12/03 14:28:09 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try 
	{
        Bureaucrat Test1("Test1", 5);
		
        std::cout << Test1.getName() << " has grade " << Test1.getGrade() << std::endl;
        Test1.IncrementGrade();
        std::cout << Test1.getName() << " now has grade " << Test1.getGrade() << std::endl;

        Test1.setGrade(1);
        Test1.DecrementGrade();
		std::cout << std::endl;
   	} 
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cout << std::endl;
        std::cerr << "Catch 1 : " << e.what() << std::endl << std::endl;
	}
	try
	{
		Bureaucrat Test2("Test2", 100);
		
        std::cout << Test2.getName() << " has grade " << Test2.getGrade() << std::endl;
        Test2.IncrementGrade();
        std::cout << Test2.getName() << " now has grade " << Test2.getGrade() << std::endl;

        Test2.setGrade(200); 
        Test2.IncrementGrade();
		std::cout << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cout << std::endl;
        std::cerr << "Catch 2 : " << e.what() << std::endl;
	}
    return 0;
}