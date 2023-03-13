NAME  = ex03

SRCS  = main.cpp \
AForm.cpp\
bureaucrat.cpp\
  RobotomyRequestForm.cpp\
   PresidentialPardonForm.cpp\
	ShrubberyCreationForm.cpp\
	Intern.cpp\
		 

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)
$(NAME) : $(SRCS) 
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re : fclean all