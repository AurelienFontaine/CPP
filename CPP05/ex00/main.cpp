/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:45:55 by afontain          #+#    #+#             */
/*   Updated: 2024/12/04 17:11:04 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Test3("Test3", -200);
		
        std::cout << Test3.getName() << " has grade " << Test3.getGrade() << std::endl;
        Test3.IncrementGrade();
        std::cout << Test3.getName() << " now has grade " << Test3.getGrade() << std::endl;

		Test3.checkGrade();
		
        Test3.IncrementGrade();
		std::cout << Test3.getName() << " now has grade " << Test3.getGrade() << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << std::endl;
        std::cerr << "Catch 3 : " << e.what() << std::endl;
	}
    return 0;
}