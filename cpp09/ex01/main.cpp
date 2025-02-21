#include "RPN.hpp"

int	Calculate(std::string tokens)
{
	std::stack<int>	MyStack;

	std::string num;
	int			val1 = 0;
	int			val2 = 0;
	int			check = 0;
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
				check++;
				break ;
			case '-':
				if (MyStack.size() < 2)
					print_err("invalid operation");
				val1 = MyStack.top();
				MyStack.pop();
				val2 = MyStack.top();
				MyStack.pop();
				MyStack.push(val2 - val1);
				check++;
				break ;
			case '/':
				if (MyStack.size() < 2)
					print_err("invalid operation");
				val1 = MyStack.top();
				MyStack.pop();
				val2 = MyStack.top();
				MyStack.pop();
				if (!val1)
					print_err("invalid operation");
				MyStack.push(val2 / val1);
				check++;
				break ;
			case '*':
				if (MyStack.size() < 2)
					print_err("invalid operation");
				val1 = MyStack.top();
				MyStack.pop();
				val2 = MyStack.top();
				MyStack.pop();
				MyStack.push(val1 * val2);
				check++;
				break ;
			case ' ':
				break;
			default:
				num = tokens[x];
				MyStack.push(atoi(num.c_str()));
		}
	}
	if (MyStack.size() > 1 || !check)
		print_err("invalid operation");
	else if (!MyStack.empty())
		return (MyStack.top());
	else
		print_err("invalid operation");
	return 0;
	
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
