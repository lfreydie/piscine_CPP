# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfreydie <lfreydie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 15:01:41 by lfreydie          #+#    #+#              #
#    Updated: 2024/03/20 18:28:17 by lfreydie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------- Program ----------- #

CXX := c++
NAME := a.out
CXXFLAGS += -Wall -Wextra -Werror -std=c++98 -g3

# --------- Directories --------- #

HD_DIR = ./includes
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

SRC_F =	 main.cpp MateriaSource.cpp Ice.cpp Cure.cpp Character.cpp AMateria.cpp
SRC = $(addprefix $(SRC_DIR)/, $(SRC_F))
OBJ = $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SRC:.cpp=.o))
DEPS = $(OBJ:.o=.d)

# ------------ Linker ---------- #

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(HD_DIR)
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) -MMD -I $(HD_DIR) -c $< -o $@

# ------------ Rules ----------- #

$(NAME) :	$(OBJ)
	@echo "$(BLUE) ...Project compiling... $(END)"
	@$(CXX) $(CXXFLAGS) -I $(HD_DIR) $(OBJ) -o $(NAME)
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

-include $(DEPS)

.PHONY : all clean fclean scan re
