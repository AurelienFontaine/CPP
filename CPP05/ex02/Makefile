NAME	=	AForm
CFLAGS	=	--std=c++98 -Wall -Wextra -Werror -g3
CC		=	c++


INCLUDES	=	AForm.hpp \
				Bureaucrat.hpp \
				PresidentialPardonForm.hpp \
				RobotomyRequestForm.hpp \
				ShrubberyCreationForm.hpp 

SRC_FILES	=	main.cpp \
				AForm.cpp \
				Bureaucrat.cpp \
				PresidentialPardonForm.cpp \
				RobotomyRequestForm.cpp \
				ShrubberyCreationForm.cpp 
all: ${NAME}

${NAME}: ${SRC_FILES} ${INCLUDES}
	${CC} ${CFLAGS} ${SRC_FILES} -o ${NAME}

%.o: %.cpp
	%{CC} ${CFLAGS} $< -o $@

clean :
	rm -rf *.o
	rm -rf *_shrubbery

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re