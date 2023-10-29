NAME = Materia

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
		AMateria.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all