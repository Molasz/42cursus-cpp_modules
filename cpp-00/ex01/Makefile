# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: molasz-a <molasz-a@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/15 13:35:19 by molasz-a          #+#    #+#              #
#    Updated: 2024/08/17 14:57:50 by molasz-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp \
		PhoneBook.cpp \
		Contact.cpp
OBJ = $(addprefix obj/, $(SRC:%.cpp=%.o))
CC = g++
RM = rm -rf
CPPFLAGS = -g -std=c++98 -pedantic
#CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all:		dir $(NAME)

dir:
				mkdir -p obj

obj/%.o:		%.cpp Makefile
				$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
				$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
				$(RM) obj

fclean:		clean
				$(RM) $(NAME)

re: 		fclean $(NAME)

.PHONY: all clean fclean re dir
