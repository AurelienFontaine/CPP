/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 16:16:03 by afontain          #+#    #+#             */
/*   Updated: 2025/02/21 16:20:30 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Iter.hpp"


int main()
{

    {
		int	intArray[] = {1, 2, 4, 3, 5};
		int	len = (sizeof(intArray) / sizeof(intArray[0]));

		iter(intArray, len, printArray<int>);
        std::cout << std::endl;

	}

	{
		char charArray[] = {'a', 'b', 'c', 'd', 'e'};
		size_t charArraySize = sizeof(charArray) / sizeof(charArray[0]);

		iter<char>(charArray, charArraySize, printArray<const char>);

        std::cout << std::endl;
	}

	{
		std::string charArray[] = {"Il", "fait", "beau", "aujourd'hui"};
		size_t charArraySize = sizeof(charArray) / sizeof(charArray[0]);

		iter(charArray, charArraySize, printArray<std::string>);
        std::cout << std::endl;

	}
    return (0);
}