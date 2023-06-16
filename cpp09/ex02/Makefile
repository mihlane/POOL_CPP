NAME  = PmergeMe

SRCS  = main.cpp\
		PmergeMe.cpp\

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

all : $(NAME)
$(NAME) : $(SRCS) 
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all