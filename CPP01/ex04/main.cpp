/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:54:46 by afontain          #+#    #+#             */
/*   Updated: 2024/10/24 13:54:48 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	main(int ac, char **av)
{
	std::string			outName;
	std::string			toFind;
	std::string			toReplace;
	std::string			line;

	// Args nb
	if (ac != 4)
		return (std::cout << "tuto : ./sed [infile] [s1] [s2]" << std::endl, 1);

	// secure open
	std::ifstream		infile(av[1]);
	if (infile.is_open() == false)
		return (std::cout << "Open failed, infiled must be created and READ perm" << std::endl, 2);

	// secure open
	outName = av[1];
	outName += ".replace";
	std::ofstream		outfile((char *)outName.c_str());
	if (outfile.is_open() == false)
		return (std::cout << "Open/Creation outfile failed" << std::endl, 3);

	std::getline(infile, line, '\0');
	toFind = av[2];
	toReplace = av[3];
	size_t nPos = line.find(toFind);
	while (nPos != std::string::npos)
	{
		line.erase(nPos, toFind.length());
		line.insert(nPos, toReplace);
		nPos = line.find(toFind, nPos + toReplace.length());
	}
	outfile << line;
	infile.close();
	outfile.close();
}
