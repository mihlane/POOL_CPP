NAME  = Zombie

SRCS  = main.cpp\
		Zombie.cpp\
		zombieHorde.cpp\

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)
$(NAME) : $(SRCS) 
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all