# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/04 23:29:44 by mhabibi-          #+#    #+#              #
#    Updated: 2023/03/04 23:29:45 by mhabibi-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = Fixed

SRCS  = main.cpp\
		Fixed.cpp\

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)
$(NAME) : $(SRCS) 
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all