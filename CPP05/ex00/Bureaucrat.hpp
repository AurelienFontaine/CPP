#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP


#include <iostream>

class Bureaucrat
{
	private:
		const std::string _Name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat &toCopy);
		Bureaucrat &operator=(Bureaucrat &toCopy);
		virtual ~Bureaucrat();

		int checkGrade();
		void IncrementGrade();
		void DecrementGrade();
		std::string getName() const;
		unsigned int getGrade() const;
		// void setGrade(unsigned int grade);

		class GradeTooHighException : public std::exception
		{
			public:
			virtual const char* what() const throw(){
				return ("The grade set is too high");
			}
		};

		class GradeTooLowException : public std::exception
		{
			public:
			virtual const char* what() const throw(){
				return ("The grade set is too low");
			}
		};

};

std::ostream	&operator<<(std::ostream &ostream, const Bureaucrat &instance);

#endif