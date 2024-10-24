/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:53:53 by afontain          #+#    #+#             */
/*   Updated: 2024/10/24 13:53:56 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address of str : " << &str << "			|		Value : " << str << std::endl;
	std::cout << "Address of stringPTR : " << stringPTR << "		|		Value : " << *stringPTR << std::endl;
	std::cout << "Address of stringREF : " << &stringREF << "		|		Value : " << stringREF << std::endl;
	return (0);
}
