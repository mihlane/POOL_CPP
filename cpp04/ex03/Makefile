NAME  = cpp05

SRCS  = AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp   MateriaSource.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)
$(NAME) : $(SRCS) 
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all