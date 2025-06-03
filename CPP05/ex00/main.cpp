/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:45:55 by afontain          #+#    #+#             */
/*   Updated: 2025/06/03 13:50:33 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Test;
		Bureaucrat Un("Un", 1);
		
        std::cout << Test.getName() << " has grade " << Test.getGrade() << std::endl;
        Test.IncrementGrade();
        std::cout << Test.getName() << " now has grade " << Test.getGrade() << std::endl;


		std::cout << Un.getName() << " has grade " << Un.getGrade() << std::endl;
        Un.IncrementGrade();
        std::cout << Un.getName() << " now has grade " << Un.getGrade() << std::endl;
		// Un.checkGrade();
		
        Un.DecrementGrade();
		std::cout << Un.getName() << " now has grade " << Un.getGrade() << std::endl;
		std::cout << std::endl;
		Un.DecrementGrade();
		std::cout << Un.getName() << " now has grade " << Un.getGrade() << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << std::endl;
        std::cerr << "Catch : " << e.what() << std::endl;
	}
    return 0;
}