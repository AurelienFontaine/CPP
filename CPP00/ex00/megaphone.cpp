/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:59:57 by afontain          #+#    #+#             */
/*   Updated: 2024/07/16 17:19:48 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int ac, char **av)
{
	int i;
	unsigned long j;
	std::string str;
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	while(i < ac)
	{
		j = 0;
		str = av[i];
		while (j < str.length())
		{
			str[j] = toupper(str[j]);
			j++;
		}
		std::cout << str;
		i++;
	}
	std::cout << std::endl;
	return (0);	
}
