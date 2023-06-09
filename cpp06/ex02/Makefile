NAME  = ex02

SRCS  = main.cpp\
		classes.cpp\

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)
$(NAME) : $(SRCS) 
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all