NAME = Span

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

SRCS = main.cpp\
		Span.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		c++ $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all