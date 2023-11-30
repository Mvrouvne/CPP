NAME = Form

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3

SRCS = main.cpp\
		Bureaucrat.cpp\
		AForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp\
		ShrubberyCreationForm.cpp\
		Intern.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all