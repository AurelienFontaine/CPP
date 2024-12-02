#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP


#include <iostream>

class Bureaucrat
{
	private:
		unsigned int _grade;
		const std::string _Name;

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &Bureaucrat);
		Bureaucrat(Bureaucrat &toCopy);
		const Bureaucrat &operator=(Bureaucrat &toCopy);
		virtual ~Bureaucrat();

		int checkGrade(std::string name, unsigned int grade);
		void IncrementGrade();
		void DecrementGrade();
		std::string getName() const;
		unsigned int getGrade() const;
		void setGrade(unsigned int grade);

	public:
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