/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:00:01 by afontain          #+#    #+#             */
/*   Updated: 2024/10/25 14:46:55 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <stdlib.h>
#include "utils.hpp"

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
private:
	/* data */
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string DarkestSecret;
	long int PhoneNumber;

public:
	Contact();
	~Contact();

	int	isPhone(std::string str);
	void printline(std::string list);
	int	isInput(std::string str);
	void printContact();
	void search();
	void setLastName();
	void setFirstName();
	void setNickName();
	void setDarkestSecret();
	void setPhoneNumber();
};


#endif
