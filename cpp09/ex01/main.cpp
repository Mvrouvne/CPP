#include "RPN.hpp"

size_t	Calculate(std::string tokens)
{
	std::stack<int>	MyStack;

	std::string num;
	int			val1;
	int			val2;
	for (int x = 0; tokens[x]; x++)
	{
		switch(tokens[x])
		{
			case '+':
				if (MyStack.size() < 2)
					print_err("invalid operation");
				val1 = MyStack.top();
				MyStack.pop();
				val2 = MyStack.top();
				MyStack.pop();
				MyStack.push(val1 + val2);
				break ;
			case '-':
				if (MyStack.size() < 2)
					print_err("invalid operation");
				val1 = MyStack.top();
				MyStack.pop();
				val2 = MyStack.top();
				MyStack.pop();
				MyStack.push(val2 - val1);
				break ;
			case '/':
				if (MyStack.size() < 2)
					print_err("invalid operation");
				val1 = MyStack.top();
				MyStack.pop();
				val2 = MyStack.top();
				MyStack.pop();
				MyStack.push(val2 / val1);
				break ;
			case '*':
				if (MyStack.size() < 2)
					print_err("invalid operation");
				val1 = MyStack.top();
				MyStack.pop();
				val2 = MyStack.top();
				MyStack.pop();
				MyStack.push(val1 * val2);
				break ;
			case ' ':
				break;
			default:
				if (tokens[x + 1] == ' ')
					num = tokens[x];
				MyStack.push(atoi(num.c_str()));
		}
	}
	return (MyStack.top());
}

int	main(int ac, char** av)
{
	if (ac == 2)
	{
		if (!av[1][0])
			print_err("Empty argument");
		for (int x = 0; av[1][x]; x++)
		{
			if (!isdigit(av[1][x]) && av[1][x] != '+' && av[1][x] != '-'
				&& av[1][x] != '/' && av[1][x] != '*' && av[1][x] != ' ')
				print_err("Wrong argument");
			else if (isdigit(av[1][x]) && isdigit(av[1][x + 1]))
				print_err("Number is greater than 9!");
		}
		std::cout << Calculate(av[1]) << std::endl;
	}
}
