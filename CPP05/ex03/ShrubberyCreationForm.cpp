/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:56:59 by afontain          #+#    #+#             */
/*   Updated: 2024/12/12 17:29:37 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <string>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _target("Default")
{
	std::cout << std::endl;
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &toCopy) : AForm(toCopy.getName(), toCopy.getGradeSign(), toCopy.getGradeExec()), _target(toCopy._target)
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
	if (this != &toCopy)
		*this = toCopy;
}

const ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &toCopy)
{
	std::cout << "ShrubberyCreationForm Copy contructor called" << std::endl;
	(void)toCopy;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << " ShrubberyCreationForm destructor called" << std::endl;
	std::cout << std::endl;
}

void ShrubberyCreationForm::create_file() const
{
	std::string fileName = _target + "_shrubbery";
    std::ofstream file(fileName.c_str());
    if (!file.is_open()) 
	{
        std::cerr << "Erreur : Impossible de créer le fichier " << fileName << std::endl;
        return;
    }
    // Écrire l'arbre ASCII dans le fichier
    file << "ASCII Trees" << std::endl;
    // Fermer le fichier
    file.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const  &executor) const
{
	try
	{
		Checkexecute(executor);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
	create_file();
}


