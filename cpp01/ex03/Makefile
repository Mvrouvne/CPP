NAME = Zombie

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp\
		HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp\
		

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all