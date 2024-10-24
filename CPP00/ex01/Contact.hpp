#include <string>
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