/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:00:12 by afontain          #+#    #+#             */
/*   Updated: 2024/10/25 14:45:42 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string>
#include <cstring>
#include <iomanip>
#include <stdlib.h>
#include <cctype>
#include "Contact.hpp"

#ifndef PHONEBOOK_H
# define PHONEBOOK_H


class PhoneBook
{
	private:
		Contact Contact[8];
		int i;
			
	public:
			PhoneBook(void);
			~PhoneBook(void);
			void add();
			void search();
			int  checkContact(std::string str);
};
#endif
