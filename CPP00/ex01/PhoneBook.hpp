#include <string>
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