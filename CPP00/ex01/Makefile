# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afontain <afontain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 15:58:55 by afontain          #+#    #+#              #
#    Updated: 2024/07/26 13:31:37 by afontain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Phonebook

SRC = ./PhoneBook.cpp \
	  ./Contact.cpp \
	  ./utils.cpp \
	  ./main.cpp \
	   

CC =	c++

CPPFLAGS = -Wall -Werror -Wextra

AR = ar rcs

.cpp.o:
		${CC} ${CPPFLAGS} -c $< -o ${<:.cpp=.o}

OBJ = $(SRC:.cpp=.o)

$(NAME) :	${OBJ}
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all		:	$(NAME)

clean	:
			rm -rf $(OBJ)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean
			make