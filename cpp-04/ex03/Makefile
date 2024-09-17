# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/15 13:35:19 by molasz-a          #+#    #+#              #
#    Updated: 2024/09/17 21:10:25 by molasz-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interface

SRC = main.cpp \
	  AMateria.cpp \
	  Character.cpp \
	  Cure.cpp \
	  Ice.cpp \
	  MateriaSource.cpp

INCLUDES = AMateria.hpp IMateriaSource.hpp ICharacter.hpp \
		   Cure.hpp Ice.hpp MateriaSource.hpp Character.hpp

OBJ = $(addprefix obj/, $(SRC:%.cpp=%.o))
CC = c++
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -fsanitize=address -g

all:		dir $(NAME)

dir:
				mkdir -p obj

obj/%.o:	%.cpp Makefile $(INCLUDES)
				$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
				$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
				$(RM) obj

fclean:		clean
				$(RM) $(NAME)

re: 		fclean all

.PHONY: all clean fclean re dir
