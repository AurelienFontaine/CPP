CC			= c++ -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
NAME		= ./ex01
NAME_SHORT	= EXO 01

COLOR_END = \033[0;39m
YELLOW = \033[1;33m
PURPLE = \033[1;35m
RED = \033[1;91m
GREEN = \033[1;92m
BLUE = \033[1;34m
_OK	= [\033[32mOK\033[0m]

INCS_DIR	= ./Includes
MAIN_INC	= -I$(INCS_DIR)

SRCS_DIR	= ./Sources
SRC =	$(SRCS_DIR)/Server.cpp \
		$(SRCS_DIR)/User.cpp \
		$(SRCS_DIR)/Utils.cpp \
		$(SRCS_DIR)/main.cpp \
		$(SRCS_DIR)/Irssi_Code.cpp \

		
OBJS_DIR	= ./Objects
OBJS		= $(SRC:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.o)

# Remplacer la règle actuelle avec la nouvelle règle modifiée
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@mkdir -p $(OBJS_DIR)/$(dir $*)  # Crée le sous-dossier nécessaire dans Objects
	@$(CC) $(MAIN_INC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(MAIN_INC) -o $(NAME)
	@echo "$(_OK) $(NAME_SHORT) compiled"

clean:
	@$(RM) $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)
	@echo "Everything cleaned"

re: fclean all

.PHONY: all clean fclean re
