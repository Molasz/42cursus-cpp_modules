# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/15 13:35:19 by molasz-a          #+#    #+#              #
#    Updated: 2024/08/18 17:11:51 by molasz-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = braiiiiiiinnnzzzZ

SRC = main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp

INCLUDES = Zombie.hpp

OBJ = $(addprefix obj/, $(SRC:%.cpp=%.o))
CC = c++
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all:		dir $(NAME)

dir:
				mkdir -p obj

obj/%.o:		%.cpp Makefile $(INCLUDES)
				$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
				$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
				$(RM) obj

fclean:		clean
				$(RM) $(NAME)

re: 		fclean all

.PHONY: all clean fclean re dir
