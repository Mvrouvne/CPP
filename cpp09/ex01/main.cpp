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
				val1 = MyStack.top();
				MyStack.pop();
				val2 = MyStack.top();
				MyStack.pop();
				MyStack.push(val1 + val2);
				break ;
			case '-':
				val1 = MyStack.top();
				MyStack.pop();
				val2 = MyStack.top();
				MyStack.pop();
				MyStack.push(val2 - val1);
				break ;
			case '/':
				val1 = MyStack.top();
				MyStack.pop();
				val2 = MyStack.top();
				MyStack.pop();
				MyStack.push(val2 / val1);
				break ;
			case '*':
				val1 = MyStack.top();
				MyStack.pop();
				val2 = MyStack.top();
				MyStack.pop();
				// std::cout << "val1 " << val1 << "val2 " << val2 << std::endl;
				MyStack.push(val1 * val2);
				break ;
			case ' ':
				break;
			default:
				if (tokens[x + 1] == ' ')
					num = tokens[x];
				else
				{
					num = tokens[x] + tokens[x + 1];
					x++;
				}
				// std::cout << "push: " << atoi(num.c_str()) << std::endl;
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
			if (!isdigit(av[1][x]) && av[1][x] != '+' &&av[1][x] != '-'
				&& av[1][x] != '/' && av[1][x] != '*' && av[1][x] != ' ')
				print_err("Wrong argument");
			//check if its smaller than 10
		}
		std::cout << Calculate(av[1]) << std::endl;
	}
}
