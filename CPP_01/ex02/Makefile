# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lefreydier <lefreydier@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 15:01:41 by lfreydie          #+#    #+#              #
#    Updated: 2024/02/13 16:52:12 by lefreydier       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------- Program ----------- #

CC := c++
NAME := brain
CFLAGS += -Wall -Wextra -Werror -std=c++98 -g3

# --------- Directories --------- #

SRC_DIR = ./src
OBJ_DIR = ./objs

# ----------- Delete ----------- #

RM = rm -f
RM_OPT = -r

# ----------- Colors ----------- #

GREEN=\033[0;32m
BLUE=\033[0;34m
RED=\033[0;31m
PINK=\033[0;35m
END=\033[0m

# ------------ Files ----------- #

SRC_F =	 main.cpp
SRC = $(addprefix $(SRC_DIR)/, $(SRC_F))
OBJ = $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SRC:.cpp=.o))

# ------------ Linker ---------- #

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

# ------------ Rules ----------- #

$(NAME) :	$(OBJ)
	@echo "$(BLUE) ...Project compiling... $(END)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN) ...Project compiled... $(END)"

all :	$(NAME)

clean :
	@echo "$(BLUE) ...Removing object files... $(END)"
	@$(RM) $(RM_OPT) $(OBJ_DIR)
	@echo "$(RED) ...All object removed... $(END)"

fclean :	clean
	@echo "$(BLUE) ...Removing executables... $(END)"
	@$(RM) $(NAME)
	@echo "$(RED) ...Executables removed... $(END)"

scan :
	@echo "	$(PINK) ...Scan running... $(END)"
	@scan-build-12 make -s
	@echo "	$(PINK) ...Scan finished... $(END)"

re :	fclean all

.PHONY : all clean fclean scan re
