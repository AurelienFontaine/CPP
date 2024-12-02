
NAME	=	Brains
CFLAGS	=	--std=c++98 -Wall -Wextra -Werror -g3
CC		=	c++

INCLUDES	=	Animal.hpp\
				Cat.hpp\
				Dog.hpp\
				Brain.hpp\

SRC_FILES	=	main.cpp\
				Animal.cpp\
				Cat.cpp\
				Dog.cpp\
				Brain.cpp\

all: ${NAME}

${NAME}: ${SRC_FILES} ${INCLUDES}
	${CC} ${CFLAGS} ${SRC_FILES} -o ${NAME}

%.o: %.cpp
	%{CC} ${CFLAGS} $< -o $@

clean :
	rm -rf *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
